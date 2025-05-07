#include<iostream>
#include<fstream>
#include<iomanip>
#include<vector>
 
#include "funzione.hpp"

using namespace std;


int main()

{   vector<double> vec;
    double val;
    double sum=0;
    double Mean;
    double value;
    unsigned int i=0;
    
    ifstream fstr("data.txt");
    if(fstr.fail())
      {cerr<<"File not found"<<endl;
        return 1;
      } 
      fstr>>setprecision(16)>>scientific;
     // while(fstr>>val){vec.push_back(mapping(val));}
      ofstream ofs ("result.txt") ;
      if(ofs.is_open())
        {  while(fstr>>val) 
            {value=mapping(val);
                sum+=value;
                Mean=sum/(i+1);
                ofs<<i+1<<' '<<setprecision(16)<<scientific<<Mean<<"\n";
                i++;
                
            /* ofs<<"#"<<' '<<"Mean"<<"\n";
             for (i=0; i<vec.size(); i++){
                sum+=vec[i];
                Mean=sum/(i+1);
            ofs<<i+1<<' '<<setprecision(16)<<scientific<<Mean<<"\n";*/
             }
            
            
            
            
        
    
    return 0;
}

}
