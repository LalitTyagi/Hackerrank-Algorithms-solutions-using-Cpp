#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long int n,i,j;
	cin>>n;
	long int a[n],b[n];
	long int temp,arr[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	
	for(i=0;i<n;i++)
	{
		long int c=0;
		for(j=a[i];j<=b[i];j++)
		{
			temp=sqrt(j);
			if(temp*temp==j)
			{
				c++;
				for(int k=temp+1;k<=b[i];k++)
				{
					if((k*k)<=b[i])
						c++;
					else
					  break;
				}
			}
				
		}
		arr[i]=c;
		
	}
	for(i=0;i<n;i++)
	cout<<arr[i]<<"\n";
	return 0;
	
}

/*
INPUT
100
59 999999922
9 999999966
12 999999988
68 999999975
19 999999910
78 999999987
11 999999995
13 999999942
1 999999930
57 999999908
35 999999927
87 999999973
8 999999903
53 999999915
17 999999990
34 999999935
7 999999952
24 999999953
62 999999982
82 999999955
20 999999990
61 999999983
73 999999953
44 999999975
4 999999958
33 999999913
63 999999944
76 999999921
52 999999936
26 999999916
72 999999935
37 999999939
96 999999992
3 999999931
48 999999994
26 999999984
64 999999909
12 999999907
24 999999987
73 999999960
4 999999936
73 999999990
1 999999956
92 999999963
71 999999980
27 999999980
7 999999916
82 999999947
71 999999985
49 999999942
49 999999950
2 999999938
51 999999975
60 999999961
40 999999919
6 999999909
79 999999941
66 999999999
79 999999987
96 999999960
61 999999944
44 999999975
96 999999911
72 999999987
45 999999921
82 999999912
29 999999981
43 1000000000
39 999999965
97 999999964
36 999999965
2 999999994
92 999999941
23 999999984
35 999999984
40 999999946
43 999999959
66 999999916
13 999999995
5 999999940
94 999999904
73 999999952
25 999999988
83 999999976
66 999999971
40 999999931
71 999999987
77 999999960
52 999999926
69 999999935
89 999999939
59 999999985
50 999999987
8 999999969
98 999999956
40 999999923
15 999999939
59 999999981
42 999999992
39 999999989

OUTPUT
31615
31620
31619
31614
31618
31614
31619
31619
31622
31615
31617
31613
31620
31615
31618
31617
31620
31618
31615
31613
31618
31615
31614
31616
31621
31617
31615
31614
31615
31617
31614
31616
31613
31621
31616
31617
31615
31619
31618
31614
31621
31614
31622
31613
31614
31617
31620
31613
31614
31616
31616
31621
31615
31615
31616
31620
31614
31614
31614
31613
31615
31616
31613
31614
31616
31613
31617
31616
31616
31613
31617
31621
31613
31618
31617
31616
31616
31614
31619
31620
31613
31614
31618
31613
31614
31616
31614
31614
31615
31614
31613
31615
31615
31620
31613
31616
31619
31615
31616
31616
*/
