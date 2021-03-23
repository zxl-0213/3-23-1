class sum
{
public:
    static void Init()
    {
        i=1;
        ret=0;
    }
    sum()
    {
        ret+=i;
        i++;
    }
    
    static int GetSum()
    {
        return ret;
    }
private:
    static int ret;
    static int i;
};

int sum::ret=0;
int sum::i=1;


class Solution {
public:
    int Sum_Solution(int n) {
        sum::Init();
        sum a[n];
        return sum::GetSum();
    }
};