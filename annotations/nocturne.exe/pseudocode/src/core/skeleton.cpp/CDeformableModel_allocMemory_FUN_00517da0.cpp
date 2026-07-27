// Name: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00517da0
// Address: 00517da0
// Address Range: [[00517da0, 00517ebe]]
// Convention: __cdecl
// Signature: undefined8 __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0(int *param_1,int param_2,int *param_3,int param_4,int param_5)

#include "nocturne.h"

ulonglong __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(param_1);
  if (5 < (int)param_3) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x261;
    core_main_c_FUN_004c8440("Too many texture sets in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,param_3);
  }
  if (8 < param_4) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x265;
    core_main_c_FUN_004c8440("Too many textures in CDeformableModel::allocMemory.  Max is %d, requested %d.",8,param_4);
  }
  if (0x1e < param_5) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x269;
    core_main_c_FUN_004c8440("Too many parts in CDeformableModel::allocMemory.  Max is %d, requested %d.",0x1e,param_5);
  }
  if (5 < param_2) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x26d;
    core_main_c_FUN_004c8440("Too many LODs in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,param_2);
  }
  param_1[0x2f] = param_4;
  param_1[0x300] = param_5;
  *param_1 = param_2;
  iVar2 = 0;
  param_1[0x2e] = (int)param_3;
  piVar1 = param_1;
  if (0 < param_2) {
    do {
      piVar1[1] = 1;
      piVar1[2] = 0;
      iVar2 = iVar2 + 1;
      param_3 = piVar1 + 2;
      piVar1 = param_3;
    } while (iVar2 < *param_1);
  }
  return CONCAT44(iVar2,param_3);
}
