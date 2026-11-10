// Name: core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10
// Address: 0052dc10
// Address Range: [[0052dc10, 0052dd78]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(CDemonSet *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(CDemonSet *this_ptr,int layer_flag)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  int unaff_EBX;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int in_stack_00000010;
  CDemonSet *in_stack_ffffffa0;
  CVector3f CStack_4c;
  uint auStack_40 [4];
  uint local_30 [5];
  CVector3f CStack_1c;
  
  bVar4 = 0;
  CStack_1c.z = 0.0;
  if (0 < this_ptr->sorted_render_actor_count) {
    CStack_1c.y = (float)this_ptr;
    do {
      this_ptr_00 = *(CDemonActor **)((int)CStack_1c.y + 0x15f6fc);
      (*((this_ptr_00->vtable)._ub)->getBoundingBox)
                (this_ptr_00,(CBoundingBox3D *)in_stack_ffffffa0);
      puVar2 = auStack_40;
      puVar3 = local_30;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      if (&CStack_4c != &CStack_1c) {
        CStack_4c.x = CStack_1c.x;
        CStack_4c.y = CStack_1c.y;
        CStack_4c.z = CStack_1c.z;
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
                (this_ptr,(CVector3f *)&this_ptr_00->field_0x20,&this_ptr_00->orient,
                 (CVector3f *)&stack0xffffffa8,&CStack_4c,&this_ptr_00->orient_matrix);
      core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0
                (this_ptr,*(int *)&this_ptr_00->field_0x108,*(int *)&this_ptr_00->field_0x10c,
                 *(int *)&this_ptr_00->field_0x110);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
      (*((this_ptr_00->vtable)._ub)->renderBackground)(this_ptr_00,in_stack_00000010);
      in_stack_ffffffa0 = this_ptr;
      core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(this_ptr,0x10000,0x10000,0x10000);
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
      unaff_EBX = unaff_EBX + 1;
    } while (unaff_EBX < this_ptr->sorted_render_actor_count);
  }
  return;
}
