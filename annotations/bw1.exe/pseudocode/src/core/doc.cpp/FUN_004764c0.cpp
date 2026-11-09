// Name: core_doc.cpp_FUN_004764c0
// Address: 004764c0
// Address Range: [[004764c0, 00476505]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004764c0(CCharacter *param_1,CDemonActor *param_2,CVector3f *param_3)

#include "nocturne.h"

void core_doc_cpp_FUN_004764c0(CCharacter *param_1,CDemonActor *param_2,CVector3f *param_3)

{
  int iVar1;
  
  if (param_2 == *(CDemonActor **)&param_1[2].field_0x7c64) {
    iVar1 = *(int *)&param_1->field_0x154;
    *(uint *)&param_1[2].field_0x7c64 = 0;
    (**(code **)(iVar1 + 0x144))(param_1,0);
  }
  core_charactr_cpp_FUN_00431490(param_1,param_2,param_3);
  return;
}
