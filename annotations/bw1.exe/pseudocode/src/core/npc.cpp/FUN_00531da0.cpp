// Name: core_npc.cpp_FUN_00531da0
// Address: 00531da0
// Address Range: [[00531da0, 00531e7c]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_FUN_00531da0(CNPC *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_npc_cpp_FUN_00531da0(CNPC *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  CDemonActorType *pCVar2;
  int iVar3;
  
  pCVar2 = (CDemonActorType *)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xcc))(this_ptr);
  if (pCVar2 == &g_CNPCClassInfo) {
    fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
    this_ptr_00 = &this_ptr->field_0x158;
    *(float *)&this_ptr->field_0x2538 = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)&this_ptr->field_0x2538 = 0;
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0xa8))(this_ptr,0x32,0x41c80000);
      core_charactr_cpp_FUN_004328c0((CCharacter *)this_ptr);
      core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00531cc0((CNPC *)this_ptr_00,&DAT_005ec7dc);
    }
    else if ((0.0 < *(float *)(damage_info + 4)) && (*(int *)&this_ptr->field_0x26fc == 0)) {
      iVar3 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00531cc0
                        ((CNPC *)this_ptr_00,&DAT_005ec7e0);
      if (iVar3 == 0) {
        iVar3 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00531cc0
                          ((CNPC *)this_ptr_00,"DAMAGE");
        if (iVar3 == 0) {
          core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00531cc0((CNPC *)this_ptr_00,&DAT_005ec7ec);
          core_charactr_cpp_FUN_004319e0(this_ptr,damage_info);
          return;
        }
      }
    }
  }
  core_charactr_cpp_FUN_004319e0(this_ptr,damage_info);
  return;
}
