#ifndef fibonacci_hpp
#define fibonacci_hpp
#endif /* fibonacci_hpp */

int fibonacci(int x) {
  if (x < 1)
    return 0;
  if (x == 1)
    return 1;

  return fibonacci(x - 1) + fibonacci(x - 2);
}