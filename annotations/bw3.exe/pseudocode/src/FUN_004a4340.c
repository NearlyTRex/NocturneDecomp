// Name: FUN_004a4340
// Address: 004a4340
// Address Range: [[004a4340, 004a44b0]]
// Convention: unknown
// Signature: void FUN_004a4340(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_004a4340(uint param_1,int param_2)

{
  byte auStack_2524 [9124];
  byte auStack_180 [380];
  
  FUN_00462500(auStack_180);
  FUN_0054bf00(auStack_2524);
  if (param_2 == 1) {
    FUN_004a42c0(param_1,1);
    FUN_00556230("wp_bindevil.wav");
    FUN_004625f0(auStack_180,"bindingstone.kfm");
    FUN_00462580(auStack_180);
    FUN_0042f280(0);
  }
  else if (param_2 == 2) {
    FUN_004625f0(auStack_180,"scarabstone.kfm");
    FUN_00462580(auStack_180);
    FUN_004625f0(auStack_180,0x5c0a94);
    FUN_00462580(auStack_180);
    FUN_0054eae0(auStack_2524,0x5c0a9f);
    FUN_0054e6b0(auStack_2524);
    FUN_00556230("wp_disease_loop.wav");
    FUN_00556230("wp_disease_munch.wav");
    FUN_004a42f0(param_1,3);
    FUN_00556230("wp_disease.wav");
  }
  else if (param_2 == 3) {
    FUN_004625f0(auStack_180,"rainvial.kfm");
    FUN_00462580(auStack_180);
  }
  FUN_0054bf80(auStack_2524,0);
  return;
}
