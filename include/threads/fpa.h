#define F (1 << 14) //fixed point 1
#define INT_MAX ((1 << 31) - 1)
#define INT_MIN (-(1 << 31))
// x and y denote fixed_point numbers in 17.14 format
// n is an integer
int n_to_fp(int n); /* Integer to fixed point */
int fp_to_n_near(int x); /* Fixed point to integer, rounded to nearest */
int fp_to_n_down(int x); /* Fixed point to integer, rounded down */
int add_fp(int x, int y); /* Add fp and fp*/
int sub_fp(int x, int y); /* Subtract fp and fp */
int add_fp_n(int x, int n); /* Add fp and int */
int sub_fp_n(int x, int n); /* Subtract fp and int */
int mult_fp(int x, int y); /* Multiply fp and fp */
int div_fp(int x, int y); /* Divide fp and fp */
int mult_fp_n(int x, int y); /* Multiply fp and int */
int div_fp_n(int x, int n); /* Divide fp and int */

int n_to_fp(int n){ /* Integer to fixed point */
  return n * F;
}
int fp_to_n_near(int x){ /* Fixed point to integer, rounded to nearest */
  return x / F;
}
int fp_to_n_down(int x){ /* Fixed point to integer, rounded down */
  if (x >= 0)
    return (x + F / 2) / F;
  else
    return (x - F / 2) / F;
}
int add_fp(int x, int y){ /* Add fp and fp*/
  return x + y;
}
int sub_fp(int x, int y){ /* Subtract fp and fp */
  return x - y;
};
int add_fp_n(int x, int n){ /* Add fp and int */
  return x + n * F;
}
int sub_fp_n(int x, int n){ /* Subtract fp and int */
  return x - n * F;
}
int mult_fp(int x, int y){ /* Multiply fp and fp */
  return ((int64_t) x) * y / F
}
int mult_fp_n(int x, int y){ /* Multiply fp and int */
  return x * n
}
int div_fp(int x, int y){ /* Divide fp and fp */
  return ((int64_t) x) * F / y
}
int div_fp_n(int x, int n){ /* Divide fp and int */
  return x / n
}
