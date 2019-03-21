#include <vector>

using namespace std;

#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()

int main() {
	
}

int main() 
{
	vector< int > v(10); // initially empty

	int M, N;

	vector< vector< int > > Matrix(N, vector< int>(M, -1));

	for (int i = 0; i < 10; i++)
	{
		v[i] = (i + 1)*(i + 1);
	}
	for (int i = 9; i > 0; i--)
	{
		v[i] -= v[i-1];
	}

	map<string, int> M;

	vector<pair<string,int>> V(all(M));  // will contain the same info as in map but gives the opportunity to access by index

}

// Always pass vectors not as an objects, but pass a reference
// const if you do not want to modify vector
int modify_vetor(vector<int>& v)
{
	v[0]++;
}

void f(const vector<int>& v)
{
	int r = 0;
	// for(vector<int>::const_iterator it = v.begin(); it != v.end(); it++) 
	tr(v, it)
	{
		r += (it)(*it);
	}

	return r;
}