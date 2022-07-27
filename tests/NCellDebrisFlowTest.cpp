#include <iostream>
#include <ctime>
#include "Cells.h"

using namespace std;

int main() {
    string filename = "./data/NCellDebrisFlowTest/";
    NCell atmosphere = NCell(filename, 1000);
    cout << "Loaded" << endl;
    time_t start_time = time(NULL);
    atmosphere.run_sim_precor(1000.0, 1.0, 0.001, 1.0, 1.0, false);
    cout << "Ran" << endl;
    cout << time(NULL) - start_time << endl;
    string folder = "./data/"; string name = "NCellDebrisFlowTest";
    atmosphere.save(folder, name, 0.1);
    cout << "Saved" << endl;
}
