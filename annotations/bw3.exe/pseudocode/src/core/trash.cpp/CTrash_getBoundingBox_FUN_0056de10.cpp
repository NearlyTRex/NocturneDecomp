// Name: core_trash.cpp_CTrash_getBoundingBox_FUN_0056de10
// Address: 0056de10
// Address Range: [[0056de10, 0056ded8]]
// Convention: __stack_esi
// Signature: CBoundingBox3D * __stack_esi core_trash_cpp_CTrash_getBoundingBox_FUN_0056de10(CTrash *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __stack_esi core_trash_cpp_CTrash_getBoundingBox_FUN_0056de10(CTrash *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_100c [1007];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  float fStack_24;
  float afStack_20 [2];
  CVector3f CStack_18;
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  pCVar3 = pCVar1->frame_bounds;
  pfVar4 = &stack0xffffffb8;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  CStack_30.y = this_ptr->collision_radius;
  CStack_30.x = 0.0;
  CStack_30.z = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
            (&this_ptr->base,&CStack_30,&CStack_18);
  fStack_24 = CStack_18.x;
  afStack_20[(uint)bVar5 * -2] = *(float *)((int)&CStack_18 + (uint)bVar5 * -8 + 4);
  afStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_18 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  fStack_48 = fStack_48 + fStack_24;
  fStack_44 = fStack_44 + afStack_20[0];
  fStack_40 = fStack_40 + afStack_20[1];
  fStack_3c = fStack_3c + fStack_24;
  fStack_38 = fStack_38 + afStack_20[0];
  fStack_34 = fStack_34 + afStack_20[1];
  pfVar4 = &stack0xffffffb8;
  pCVar3 = out_box;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar3->min).x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
  }
  return out_box;
}
