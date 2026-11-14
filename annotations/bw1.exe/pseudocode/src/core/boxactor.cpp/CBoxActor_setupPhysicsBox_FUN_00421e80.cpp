// Name: core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_00421e80
// Address: 00421e80
// Address Range: [[00421e80, 00421ff7]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_00421e80(CBoxActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_00421e80(CBoxActor *this_ptr)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
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
  float afStack_34 [4];
  float fStack_24;
  float afStack_20 [3];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  bVar5 = 0;
  fVar1 = this_ptr->weight_in_pounds;
  (this_ptr->physics_box).is_valid = 0;
  if ((0.0 < fVar1) && ((byte *)(this_ptr->base).validation_magic == &DAT_0078a123)) {
    if ((this_ptr->model).model_ptr != (CKeyFramedModel *)0x0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,unaff_ESI);
      puVar3 = (uint *)&stack0xffffff74;
      puVar4 = (uint *)&stack0xffffff84;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      fStack_8 = fStack_74 + fStack_68;
      fStack_14 = fStack_74 + fStack_68;
      afStack_34[(uint)bVar5 * -2 + 9] = *(float *)(&stack0xfffffffc + (uint)bVar5 * -8);
      afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           *(float *)(&stack0x00000000 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      afStack_34[2] = fStack_14 * _DAT_005d4c04;
      afStack_34[3] = fStack_10 * _DAT_005d4c04;
      fStack_24 = fStack_c * _DAT_005d4c04;
      afStack_20[0] = fStack_14 * _DAT_005d4c04;
      afStack_34[(uint)bVar5 * -2 + 6] = afStack_34[(uint)bVar5 * -2 + 3];
      afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      core_actor_cpp_FUN_00408b40(this_ptr,afStack_34 + 5);
      CStack_44.x = fStack_38;
      *(float *)((int)&CStack_44 + (uint)bVar5 * -8 + 4) = afStack_34[(uint)bVar5 * -2];
      *(float *)((int)&CStack_44 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      fStack_5c = fStack_68 - fStack_74;
      fStack_58 = fStack_64 - fStack_70;
      fStack_54 = fStack_60 - fStack_6c;
      CStack_50.x = fStack_68 - fStack_74;
      *(uint *)((int)&CStack_50 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8);
      *(uint *)((int)&CStack_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      core_box_cpp_CBox_setupCorners_FUN_0041dac0
                (&this_ptr->physics_box,&CStack_44,&(this_ptr->base).orient.vec,&CStack_50,
                 this_ptr->weight_in_pounds);
      return;
    }
    (this_ptr->physics_box).is_valid = -1;
  }
  return;
}
