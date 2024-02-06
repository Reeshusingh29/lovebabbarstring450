vector<int> factorial(int N){
        // code here
        vector<int>ans(1,1);
        
        while(N>1){
            int carry=0,res,size=ans.size();
            
            for(int i=0;i<size;i++){
                res=ans[i]*N+carry;
                ans[i]=res%10;
                carry=res/10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
            N--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main(){
    int n=8;
    vector<int> ans = factorial(n);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}
