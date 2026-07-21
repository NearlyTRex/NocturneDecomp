// Name: core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40
// Address: 00427e40
// Address Range: [[00427e40, 00427ea9]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x23b0) != '\0') && (*(int *)(param_1 + 0x2290 + param_2 * 4) != 0)) {
    uVar1 = core_bodypart_cpp_createBodyPart_FUN_00415b30
                      (param_1 + 0x20,param_1 + 0x30,param_3,param_1,0,0,
                       *(uint *)(param_1 + 0x2608));
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(param_1,uVar1,param_2,param_4);
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(uVar1);
    return;
  }
  return;
}
