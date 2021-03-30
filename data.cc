

const int nPoints = 4;
const int nC = nPoints*2;    // number of coordinates

const int nRod = 3;         // number of rods
const int jSize = nC*nRod;   // Jacobian size

double ks = 300.0;
double kd = 1.0;
double dt = 0.005;


//int ind[] = {0,1,5,6,10,11,15,16,20,21,1,2,6,7,11,12,16,17,21,22,2,3,
//             7,8,12,13,17,18,22,23,3,4,8,9,13,14,18,19,23,24,0,5,5,10,
//             10,15,15,20,1,6,6,11,11,16,16,21,2,7,7,12,12,17,17,22,
//             3,8,8,13,13,18,18,23,4,9,9,14,14,19,19,24,1,5,6,10,11,15,
//             16,20,2,6,7,11,12,16,17,21,3,7,8,12,13,17,18,22,4,8,9,13,
//             14,18,19,23};
//int m[] = {0,5,1,1,5,6,5,10,6,6,10,11,11,10,15,11,15,16,
//           16,15,20,16,20,21,1,6,2,2,6,7,7,6,11,7,11,12,
//          12,11,16,12,16,17,17,16,21,17,21,22,3,2,7,3,7,8,
//            8,7,12,8,12,13,13,12,17,13,17,18,18,17,22,18,22,23,
//            4,3,8,4,8,9,9,8,13,9,13,14,14,13,18,14,18,19,
//           19,18,23,19,23,24};
int ind[] = {0,1, 1,2, 2,3};            
std::vector<double> q = {0,0, 1,0, 2,0, 3,0};                      
           
double M[nC*nC] = {};     // point masses

//int W[nC*nC] = {};      // point mass inverse

double Q[nC] = {};        // external forces

//std::vector<double> q;    // array of coordinates
double v[nC] ={};         // array of velocities
double a[nC] = {};        //array of accelerations

double C[nRod] = {};      // constraint
double CDOT[nRod] = {};   // constraint time derivative

double J[jSize] = {};     // jacobian
double JDOT[jSize] = {};  // jacobian time derivative 

std::vector<double> L;    // lengths

double r[nRod*nC] = {};           