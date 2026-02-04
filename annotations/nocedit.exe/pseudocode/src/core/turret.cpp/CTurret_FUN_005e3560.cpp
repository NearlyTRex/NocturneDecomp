// Name: core_turret.cpp_CTurret_FUN_005e3560
// Address: 005e3560
// Address Range: [[005e3560, 005e3610]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_FUN_005e3560(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3560(CTurret *this_ptr)

{
  char *input_local_point;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  CVector3f *pCVar7;
  float fStack_54;
  uint uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_14;
  
  if (*(float *)(this_ptr->unk5 + 0xc) <= 0.0) {
    if (this_ptr->unk3 != 0) {
      input_local_point = this_ptr->unk4;
      iVar6 = core_turret_cpp_CTurret_FUN_005e3280(this_ptr);
      if (iVar6 != 0) {
        (**(code **)(*(int *)(this_ptr->unk3 + 0x154) + 0x14))();
        fVar1 = *(float *)input_local_point;
        fVar2 = *(float *)(this_ptr->unk4 + 4);
        iVar6 = 0;
        fVar3 = *(float *)(this_ptr->unk4 + 8);
        while( true ) {
          fStack_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          *(float *)this_ptr->unk4 = fStack_54 * fStack_24 + (1.0 - fStack_24) * fStack_48;
          fStack_14 = fStack_24;
          fStack_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          *(float *)(this_ptr->unk4 + 8) = fStack_4c * fStack_24 + (1.0 - fStack_24) * fStack_40;
          *(uint *)(this_ptr->unk4 + 4) = uStack_50;
          fStack_14 = fStack_24;
          pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr->unk3,&CStack_30,
                              (CVector3f *)input_local_point);
          if ((CVector3f *)input_local_point != pCVar7) {
            *(float *)input_local_point = pCVar7->x;
            *(float *)(this_ptr->unk4 + 4) = pCVar7->y;
            *(float *)(this_ptr->unk4 + 8) = pCVar7->z;
          }
          fVar5 = *(float *)(this_ptr->unk4 + 4) - fVar2;
          fVar4 = *(float *)(this_ptr->unk4 + 8) - fVar3;
          if (25.0f <
              fVar4 * fVar4 +
              fVar5 * fVar5 +
              (*(float *)input_local_point - fVar1) * (*(float *)input_local_point - fVar1)) break;
          iVar6 = iVar6 + 1;
          if (4 < iVar6) {
            return;
          }
        }
      }
    }
  }
  else if (*(float *)((this_ptr->base).unk2 + 0xc) <= 0.0) {
    (*(((this_ptr->base).base.vtable._uc)->_uc).cfunc4)();
  }
  return;
}
