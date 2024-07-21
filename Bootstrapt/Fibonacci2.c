








int main() {
  int line1 = 0;
   int line = 0;
  scanf("%d", &line1);
  printf("%d",line1);
  for (int i = 0 ;i<line1; i++){
      scanf("%d", &line);
      printf("%d",line);
      int result = countBits(line);
      printf("%d \n",result);
  }
  return 0;
}