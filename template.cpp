//其他
#define randseed srand(static_cast<unsigned int>(time(0)));
#define itos(x) to_string(x)
//循环
#define range(n,m,x) for(int x=n;x<=m;x++)
#define irange(n,m,x) for(int x=m;x>=n;x--)
#define rinput(n,m,x) for(int i=n;i<=m;i++) cin>>x[i];
#define roput(n,m,x) for(int i=n;i<=m;i++) cout<<x[i];
#define reverse(s) for(int i=0,j=s.size()-1;i<j;i++,j--) swap(s[i],s[j]);
//IO
#define iput(x) cin>>x;
#define oput(x) cout<<x;
#define frin(x) freopen(x,"r",stdin);
#define frout(x) freopen(x,"w",stdout);
#define siput(x) getline(cin,x);
#define alr ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define foput(x,z) printf((string("%.")+to_string(z)+string("lf")).c_str(),x);
#define endl "\n"
//定义
#define cst const
#define mainf signed main
#define int long long
