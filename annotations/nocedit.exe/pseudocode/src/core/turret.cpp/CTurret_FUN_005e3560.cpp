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
  int iVar3;
  CVector3f *pCVar4;
  CBoundingBox3D CStack_54;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_14;
  
  if (*(float *)(this_ptr->unk5 + 0xc) <= 0.0) {
    if (this_ptr->guard_zone_box_trigger != (CDemonActor *)0x0) {
      input_local_point = this_ptr->unk4;
      iVar3 = core_turret_cpp_CTurret_FUN_005e3280(this_ptr);
      if (iVar3 != 0) {
        (*((this_ptr->guard_zone_box_trigger->vtable)._ub)->getBoundingBox)
                  (this_ptr->guard_zone_box_trigger,&CStack_54);
        fStack_3c = *(float *)input_local_point;
        fStack_38 = *(float *)(this_ptr->unk4 + 4);
        iVar3 = 0;
        fStack_34 = *(float *)(this_ptr->unk4 + 8);
        while( true ) {
          fStack_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          *(float *)this_ptr->unk4 =
               CStack_54.min.x * fStack_24 + (1.0 - fStack_24) * CStack_54.max.x;
          fStack_14 = fStack_24;
          fStack_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          *(float *)(this_ptr->unk4 + 8) =
               CStack_54.min.z * fStack_24 + (1.0 - fStack_24) * CStack_54.max.z;
          *(float *)(this_ptr->unk4 + 4) = CStack_54.min.y;
          fStack_14 = fStack_24;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr->guard_zone_box_trigger,&CStack_30,
                              (CVector3f *)input_local_point);
          if ((CVector3f *)input_local_point != pCVar4) {
            *(float *)input_local_point = pCVar4->x;
            *(float *)(this_ptr->unk4 + 4) = pCVar4->y;
            *(float *)(this_ptr->unk4 + 8) = pCVar4->z;
          }
          fVar2 = *(float *)(this_ptr->unk4 + 4) - fStack_38;
          fVar1 = *(float *)(this_ptr->unk4 + 8) - fStack_34;
          if (25.0f <
              fVar1 * fVar1 +
              fVar2 * fVar2 +
              (*(float *)input_local_point - fStack_3c) * (*(float *)input_local_point - fStack_3c))
          break;
          iVar3 = iVar3 + 1;
          if (4 < iVar3) {
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
