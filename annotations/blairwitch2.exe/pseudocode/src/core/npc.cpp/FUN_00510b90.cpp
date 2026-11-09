// Name: core_npc.cpp_FUN_00510b90
// Address: 00510b90
// Address Range: [[00510b90, 00510c6c]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_FUN_00510b90(CNPC *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_npc_cpp_FUN_00510b90(CNPC *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  CDemonActorType *pCVar2;
  int iVar3;
  
  pCVar2 = (CDemonActorType *)(**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xd4))(this_ptr);
  if (pCVar2 == &g_CNPCClassInfo) {
    fVar1 = *(float *)&this_ptr->field_0x25a8 - *(float *)(damage_info + 4);
    this_ptr_00 = &this_ptr->field_0x2b4;
    *(float *)&this_ptr->field_0x25a8 = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)&this_ptr->field_0x25a8 = 0;
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xb0))(this_ptr,0x32,0x41c80000);
      core_charactr_cpp_FUN_00428e00((CCharacter *)this_ptr);
      core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00510ab0((CNPC *)this_ptr_00,&DAT_005e1581);
    }
    else if ((0.0 < *(float *)(damage_info + 4)) && (*(int *)&this_ptr->field_0x276c == 0)) {
      iVar3 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00510ab0
                        ((CNPC *)this_ptr_00,&DAT_005e1585);
      if (iVar3 == 0) {
        iVar3 = core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00510ab0
                          ((CNPC *)this_ptr_00,"DAMAGE");
        if (iVar3 == 0) {
          core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00510ab0((CNPC *)this_ptr_00,&DAT_005e1591);
          core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0
                    ((CCharacter *)this_ptr,damage_info);
          return;
        }
      }
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
  return;
}
