﻿/*
Copyright (c) 2017-2018 Origin Quantum Computing. All Right Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <iostream>
#include "QAlgorithm.h"
#include "Algorithm/test/test.h"

using namespace std;

int main()
{

    HHL_Algorithm();
    /*
	DJ_Algorithm();
    //Grover_Algorithm();

 
    init();
    auto qbit = qAlloc();
    auto cbit = cAlloc();
    auto prog = CreateEmptyQProg();
    auto cir = CreateEmptyCircuit();
    cir << X(qbit) << RY_GATE(qbit);
    prog << cir << Measure(qbit, cbit);
    load(prog);
    run();
   
    try
    {
		int repeat = 1000;
	     HHL_Test(repeat);
    }
    catch(exception & e)
    {
        cout<<e.what()<<endl;
		return 1;
    }
  
  init();
  auto  a = qAlloc();
  auto b = qAlloc();
  auto cc = cAlloc();
  auto prog = CreateEmptyQProg();
  vector<Qubit *> qubitvector = { a,b };
  auto hQc = CreateHadamardQCircuit(qubitvector);
  prog << hQc << X(a) << iSWAP(a, b) << Measure(a, cc);
  load(prog);
  run();
  finalize();
    */



//    getchar();
    
//    getchar();
    return 0;

}

