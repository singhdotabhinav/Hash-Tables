#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;





vector<int> twoSum(vector<int>& v, int target) {
        vector<int>res; // vector for returning the result.
        unordered_map<int,int> m;
        for(int i=0;i<v.size();i++)
        {
            auto x=m.find(target-v[i]);//check target-v[i]is present in the hash table or not
            if(x==m.end()) //if not present then insert v[i] and its index in the hash table.
            {
                m.insert(make_pair(v[i],i));
                cout<<v[i]<<" "<<i;
                cout<<"\n";
            }
            
            else //if present then push both index in the result vector
            {
                res.push_back(x->second); //index of targetSum-v[i]
                res.push_back(i); // index of v[i]
                
                //cout<<"Found elements "<<x->second<<" "<<i<<"\n";
                break;
            }
        }
        return res;// return result vector.
}


