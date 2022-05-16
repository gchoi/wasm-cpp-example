#ifndef reverse_num_hpp
#define reverse_num_hpp
#endif /* reverse_num_hpp */

int reversenumber(int n) {
   int reverse = 0, rem;

   while(n != 0) {
      rem = n % 10;
      reverse = reverse * 10 + rem;
      n /= 10;
   }

   return reverse;
}