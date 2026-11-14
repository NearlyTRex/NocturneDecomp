// Name: core_villain.cpp_CSteuben_processStates_FUN_005a5c20
// Address: 005a5c20
// Address Range: [[005a5c20, 005a5c3b]]
// Convention: __cdecl
// Signature: void __cdecl core_villain_cpp_CSteuben_processStates_FUN_005a5c20(CSteuben *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_villain_cpp_CSteuben_processStates_FUN_005a5c20(CSteuben *this_ptr,float delta_time,int mode)

{
  if (mode == 0) {
    return;
  }
  core_basicene_cpp_CBasicEnemy_processStates_FUN_0059e8c0((CBasicEnemy *)this_ptr,delta_time,mode);
  return;
}
