
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;
//Goldbach's other conjecture - start
/*
// returns boolean whether the parameter is a prime or not

bool isPrime(int in) {
    bool prime = true;
    if (in <= 1) {
        prime = false;
    }
    for (int j = 2; j < sqrt(in); j++) {
        if (in % j == 0) {
            prime = false;
        }
    }
    return prime;
}

//creates a vector/arraylist of composite numbers and prime numbers - returns depending on the boolean parameter
vector<int> findNums(bool bo, int limit){
    vector<int> compositeNums;
    vector<int> primeNums;
    for(int i = 2; i < limit ; i++) {
            if (isPrime(i) ){
               primeNums.push_back(i);
            }else{
                compositeNums.push_back(i);
            }
    }
    if(bo){
        return primeNums;
    }
    return compositeNums;
}
//find primes through composite nums
//vector<int> findPrimeNums(int limit){
  //  vector<int> compositeNums = findCompositeNums(limit);
  //  vector<int> primeNums;
    //for(int i = 2; i < limit; i++){
       // __gnu_cxx::__normal_iterator<int *, vector<int>> val = find(compositeNums.begin(), compositeNums.end(), i);
        //if (val ==  compositeNums.end()){
      //      primeNums.push_back(i);
        //}
    //}

   // return primeNums;
//};






int main() {
    vector<int> primeN = findNums(true, 10000);
    vector<int> compositeN = findNums(false, 10000);
    vector<int> goldbach;
    vector<int> oddCompN;
    //adds odd composite numbers.
    for(int comp: compositeN){
        if(comp%2==1) {
            oddCompN.push_back(comp);
        }
    }
//creates goldbach's numbers and adds to goldbach vector
    for (int i = 0; i < primeN.size(); i++) {
        for (int j = 0; j < 100; j++) {
            int goldbachN = primeN[i] + 2*(pow(j,2));
            __gnu_cxx::__normal_iterator<int *, vector<int>> val = find(goldbach.begin(), goldbach.end(), goldbachN);
            if ((val == goldbach.end() || i < 2)) {
                goldbach.push_back(goldbachN);
            }
        }
    }
    //sorts goldbach vector numerically.
    std::sort(goldbach.begin(), goldbach.end());

    for(int comp: oddCompN) {
        //linear search through goldbach vector/arraylist - returns index if value exists else returns index of end of arraylist
        __gnu_cxx::__normal_iterator<int *, vector<int>> val = find(goldbach.begin(), goldbach.end(), comp);
        //checks if the search fails.
        if (val == goldbach.end()) {
            cout<< "The number that Goldbach's other conjecture fails is " << comp;
            break;
        }
    }


    return 0;
}*/
// - end

//Totient permutation - start

bool relativePrime(int top, int check){
    bool prime = true;
    vector<int> divisors;
    for(int i = 2; i < top; i ++){
        if(top%i == 0){
            divisors.push_back(i);
        }
    }
    if (check == 1) {
        prime = true;
    }
    for(int i = 0; i < divisors.size(); i++){
        if(check%divisors[i] == 0){
            prime = false;
        }
    }

    return prime;
}
bool checkPermutation(int first, int second){
    int[] firstI;
}
int main(){



    return 0;
}
//end