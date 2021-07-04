/*problem by: https://www.facebook.com/ranmij

Given an array of integers, return two indices of the two numbers such that they add up to specific target.

list = [5,2,1,5,4]
target = 6;

output: 0, 2
*/
#include<iostream>
#include<vector>

void get_position(std::vector <int> v, int size, int t)
{
  int temp, tempo;

  for(int i=0; i<size; i++)
  {
    for(int x=0; x<size; x++)
    {
      if(v[i] + v[x] == t && i != x)
      {
        temp = x;
        tempo = i;
      }
    }
  }
  std::printf("%d %d", temp, tempo);
}

int main()
{
  std::vector<int> vex = {8,8,9,2,1};
  int sz = vex.size();
  int target{11};
  
  get_position(vex, sz, target);
  
  return 0;
}