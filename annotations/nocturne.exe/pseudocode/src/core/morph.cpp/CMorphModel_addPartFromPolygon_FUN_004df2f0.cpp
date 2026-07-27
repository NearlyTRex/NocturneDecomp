// Name: core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
// Address: 004df2f0
// Address Range: [[004df2f0, 004df45e]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7,uint param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (4 < *param_1) {
    PTR_01cc4800 = "..\\core\\morph.cpp";
    INT_01cc4804 = 0x77;
    core_main_c_FUN_004c8440("CMorphModel::addPart - too many parts!");
  }
  iVar3 = 0;
  iVar4 = param_5;
  for (iVar2 = param_4; 0 < iVar2; iVar2 = iVar2 + -1) {
    piVar1 = (int *)(iVar4 + 4);
    iVar4 = iVar4 + param_6;
    iVar3 = iVar3 + *piVar1 + -2;
  }
  param_1[*param_1 * 4 + 3] = param_1[0x15];
  param_1[*param_1 * 4 + 1] = param_2;
  param_1[*param_1 * 4 + 4] = param_1[0x17];
  param_1[*param_1 * 4 + 2] = iVar3;
  param_1[0x15] = param_1[0x15] + param_1[*param_1 * 4 + 1];
  param_1[0x17] = param_1[0x17] + param_1[*param_1 * 4 + 2];
  iVar3 = realloc(param_1[0x16],param_1[0x15] << 4);
  param_1[0x16] = iVar3;
  iVar3 = realloc(param_1[0x18],param_1[0x17] * 0x3c);
  param_1[0x18] = iVar3;
  *param_1 = *param_1 + 1;
  if ((param_1[0x16] == 0) || (param_1[0x18] == 0)) {
    PTR_01cc4800 = "..\\core\\morph.cpp";
    INT_01cc4804 = 0x90;
    core_main_c_FUN_004c8440("CMorphModel::setup - out of memory!");
  }
  if (param_3 != 0) {
    core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
              (param_1,*param_1 + -1,param_3,0,param_2);
  }
  if (param_5 == 0) {
    return;
  }
  core_morph_cpp_FUN_004df800(param_1,*param_1 + -1,param_5,param_6,param_7,param_8,0,param_4);
  return;
}
