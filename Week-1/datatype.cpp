class Solution {
  public:
    int dataTypeSize(string str) {
        // your code herereturn
        if(str == "Character"){
            return 1;
        }
        else if(str == "Integer" || str == "Float"){
            return 4;
        }
        else if(str == "Long" || str == "Double"){
            return 8;
        } 
        
        else return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends