// Name: core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_005ade40
// Address: 005ade40
// Address Range: [[005ade40, 005adf8e]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_005ade40(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_005ade40(CWeapon *this_ptr)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1044 [999];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  
  bVar4 = 0;
  if (((this_ptr->model).model_ptr != (CKeyFramedModel *)0x0) &&
     ((byte *)(this_ptr->base).validation_magic == &DAT_0078a123)) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,unaff_ESI);
    puVar2 = (uint *)&stack0xffffff74;
    puVar3 = (uint *)&stack0xffffff84;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_38 = fStack_74 + fStack_68;
    afStack_34[0] = fStack_70 + fStack_64;
    afStack_34[1] = fStack_6c + fStack_60;
    afStack_1c[2] = fStack_74 + fStack_68;
    afStack_1c[(uint)bVar4 * -2 + 3] = afStack_34[(uint)bVar4 * -2];
    afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_20 = afStack_1c[2] * 0.5f;
    afStack_1c[0] = afStack_1c[3] * 0.5f;
    afStack_1c[1] = fStack_c * 0.5f;
    fStack_8 = afStack_1c[2] * 0.5f;
    *(float *)(&stack0xfffffffc + (uint)bVar4 * -8) = afStack_1c[(uint)bVar4 * -2];
    *(float *)(&stack0x00000000 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              (&this_ptr->base,(CVector3f *)(afStack_1c + 5),&CStack_44);
    CStack_2c.x = CStack_44.x;
    *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_44 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_44 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    fStack_5c = fStack_68 - fStack_74;
    fStack_58 = fStack_64 - fStack_70;
    fStack_54 = fStack_60 - fStack_6c;
    CStack_50.x = fStack_68 - fStack_74;
    *(uint *)((int)&CStack_50 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar4 * -8);
    *(uint *)((int)&CStack_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&stack0xffffffac + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    core_box_cpp_CBox_setupCorners_FUN_0041dac0
              (&this_ptr->physics_box,&CStack_2c,&(this_ptr->base).orient.vec,&CStack_50,
               this_ptr->weight);
    return;
  }
  return;
}
