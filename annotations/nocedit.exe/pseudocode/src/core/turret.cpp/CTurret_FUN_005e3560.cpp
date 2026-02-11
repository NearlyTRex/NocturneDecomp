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
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  CVector3f CStack_28;
  float fStack_1c;
  
  if (*(float *)(this_ptr->unk5 + 0xc) <= 0.0) {
    if (this_ptr->guard_zone_box_trigger != (CDemonActor *)0x0) {
      input_local_point = this_ptr->unk4;
      iVar6 = core_turret_cpp_CTurret_FUN_005e3280(this_ptr);
      if (iVar6 != 0) {
        (*((this_ptr->guard_zone_box_trigger->vtable)._ub)->getBoundingBox)
                  (this_ptr->guard_zone_box_trigger,(CBoundingBox3D *)&stack0xffffffac);
        fVar1 = *(float *)input_local_point;
        fVar2 = *(float *)(this_ptr->unk4 + 4);
        iVar6 = 0;
        fVar3 = *(float *)(this_ptr->unk4 + 8);
        while( true ) {
          fStack_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          *(float *)this_ptr->unk4 = fStack_4c * fStack_1c + (1.0 - fStack_1c) * fStack_40;
          fStack_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          *(float *)(this_ptr->unk4 + 8) = fStack_44 * fStack_1c + (1.0 - fStack_1c) * fStack_38;
          *(float *)(this_ptr->unk4 + 4) = fStack_48;
          pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr->guard_zone_box_trigger,&CStack_28,
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
  else if ((this_ptr->base).fire_cooldown_timer <= 0.0) {
    (*(((this_ptr->base).base.vtable._uc)->_uc).isGrabbable)((CCharacter *)this_ptr);
  }
  return;
}
