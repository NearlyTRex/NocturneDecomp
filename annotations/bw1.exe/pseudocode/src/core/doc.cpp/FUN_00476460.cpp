// Name: core_doc.cpp_FUN_00476460
// Address: 00476460
// Address Range: [[00476460, 004764b6]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00476460(CCharacter *param_1,int param_2,CVector3f *param_3)

#include "nocturne.h"

void core_doc_cpp_FUN_00476460(CCharacter *param_1,int param_2,CVector3f *param_3)

{
  int iVar1;
  
  if (*(int *)(&param_1->field_0x25b0 + param_2 * 0x78) == *(int *)&param_1[2].field_0x7c64) {
    iVar1 = *(int *)&param_1->field_0x154;
    *(uint *)&param_1[2].field_0x7c64 = 0;
    (**(code **)(iVar1 + 0x144))(param_1,0);
  }
  core_charactr_cpp_FUN_00432820(param_1,param_2,param_3);
  return;
}
