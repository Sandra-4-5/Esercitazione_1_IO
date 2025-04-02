#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>



double map (double a) {
    return  -7/4 + (3*a)/4;
}

int main() {
    std::string fileinput="data.txt";
    std::string fileoutput="result.txt";
    std::ifstream ifs("data.txt");
    std::ofstream ofs("result.txt");
    



    return 0;
    
    
    }
    
    std::vector<double> vec;
    double x;
    while (fileinput >> x) {
        vec.push_back(map(x));
    }
    
    std::fileoutput << "# N Mean" << std::endl;
    double sum = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        sum += vec[i];
        double mean = sum / (i + 1);
        std::fileoutput << i + 1 << " " << std::scientific << std::setprecision(8) << mean << std::endl;
    }
    
   