// Name: core_belling.cpp_CBelling_processStates_FUN_005a9060
// Address: 005a9060
// Address Range: [[005a9060, 005a907b]]
// Convention: __cdecl
// Signature: void __cdecl core_belling_cpp_CBelling_processStates_FUN_005a9060(CBelling *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_belling_cpp_CBelling_processStates_FUN_005a9060(CBelling *this_ptr,float delta_time,int mode)

{
  if (mode == 0) {
    return;
  }
  core_basicene_cpp_CBasicEnemy_processStates_FUN_0059e8c0((CBasicEnemy *)this_ptr,delta_time,mode);
  return;
}
