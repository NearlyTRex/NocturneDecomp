// Name: engine_pod.cpp_CPod_dismountPod_FUN_0053d490
// Address: 0053d490
// Address Range: [[0053d490, 0053d51d]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_0053d490(CPod *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_0053d490(CPod *this_ptr,int index)

{
  int iVar1;
  CPodFile *pCVar2;
  byte *puVar3;
  
  if ((index < 0) || (*(int *)this_ptr <= index)) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x6be;
    core_main_c_FUN_005030e0("CPod::dismountPod - invalid index");
  }
  if (*(CPodFile **)(&this_ptr->field_0x4 + index * 4) != (CPodFile *)0x0) {
    pCVar2 = engine_pod_cpp_CPodFile_dtor_FUN_0053b210
                       (*(CPodFile **)(&this_ptr->field_0x4 + index * 4),0);
    FUN_005c0344(pCVar2);
  }
  iVar1 = *(int *)this_ptr;
  *(int *)this_ptr = iVar1 + -1;
  if (index < iVar1 + -1) {
    puVar3 = &this_ptr->field_0x0 + index * 4;
    do {
      *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 8);
      index = index + 1;
      puVar3 = puVar3 + 4;
    } while (index < *(int *)this_ptr);
  }
  *(uint *)(&this_ptr->field_0x4 + *(int *)this_ptr * 4) = 0;
  return;
}
