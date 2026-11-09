// Name: core_npc.cpp_FUN_005099e0
// Address: 005099e0
// Address Range: [[005099e0, 00509abc]]
// Convention: unknown
// Signature: void core_npc_cpp_FUN_005099e0(CCharacter *param_1,int param_2)

#include "nocturne.h"

void core_npc_cpp_FUN_005099e0(CCharacter *param_1,int param_2)

{
  byte *this_ptr;
  float fVar1;
  CDemonActorType *pCVar2;
  int iVar3;
  
  pCVar2 = (CDemonActorType *)(**(code **)(*(int *)&param_1->field_0x154 + 0xcc))(param_1);
  if (pCVar2 == &g_CNPCClassInfo) {
    fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
    this_ptr = &param_1->field_0x158;
    *(float *)&param_1->field_0x2538 = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)&param_1->field_0x2538 = 0;
      (**(code **)(*(int *)&param_1->field_0x154 + 0xa8))(param_1,0x32,0x41c80000);
      core_charactr_cpp_FUN_00431ce0(param_1);
      core_npc_cpp_FUN_00509900((CNPC *)this_ptr,&DAT_005cb644);
    }
    else if ((0.0 < *(float *)(param_2 + 4)) && (*(int *)&param_1->field_0x26fc == 0)) {
      iVar3 = core_npc_cpp_FUN_00509900((CNPC *)this_ptr,&DAT_005cb648);
      if (iVar3 == 0) {
        iVar3 = core_npc_cpp_FUN_00509900((CNPC *)this_ptr,"DAMAGE");
        if (iVar3 == 0) {
          core_npc_cpp_FUN_00509900((CNPC *)this_ptr,&DAT_005cb654);
          core_charactr_cpp_FUN_00430d60(param_1,param_2);
          return;
        }
      }
    }
  }
  core_charactr_cpp_FUN_00430d60(param_1,param_2);
  return;
}
