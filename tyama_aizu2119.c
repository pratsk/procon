a[2][21];main(t,n,m,f,i,j,x){for(;scanf("%d%d",&n,&m),n;printf("Case %d: %d\n",t++,i))for(memset(a,f=0,sizeof(a)),a[f][i=0]=n;!a[f][m];f^=1,i++)for(j=0;j<m;j++)x=a[f][j],a[f^1][j+1]+=x/2,a[f^1][a[f][j]=0]+=x/2,a[f^1][j]+=x%2;exit(0);}