#include <iostream>
#include <Eigen/Dense>
 
using Eigen::MatrixXd;

int main(int argc, char **argv) {
  MatrixXd m(100,100);
  m = MatrixXd::Identity(100,100);
  for(int i=0; i<10000; i++) {
    m = m * MatrixXd::Random(100,100);
    m.normalize();
    //std::cout << m << std::endl << std::endl;
  }
  std::cout << m;
}
