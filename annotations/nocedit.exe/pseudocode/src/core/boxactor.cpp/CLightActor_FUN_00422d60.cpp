// Name: core_boxactor.cpp_CLightActor_FUN_00422d60
// Address: 00422d60
// Address Range: [[00422d60, 00423067]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_FUN_00422d60(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_FUN_00422d60(CLightActor *this_ptr)

{
  CKeyFramedModelInstance *this_ptr_00;
  ELightActorType EVar1;
  float fVar2;
  int iVar3;
  int unaff_EBP;
  CDemonFilter *this_ptr_01;
  char acStack_c8 [32];
  CBoundingBox3D local_a8;
  CBoundingBox3D local_90;
  float fStack_78;
  float fStack_74;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  byte *local_18;
  
  EVar1 = this_ptr->light_actor_type;
  if (EVar1 != LIGHT_TYPE_CUSTOM) {
    local_18 = this_ptr->unk;
    this_ptr_00 = &(this_ptr->base).model;
    if (EVar1 < LIGHT_TYPE_LANTERN) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                (this_ptr_00,"flashlit.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr_00);
      (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&local_90);
      fVar2 = 0.5f;
      *(float *)(this_ptr->unk + 0x2fac) = (local_90.min.z + local_90.max.z) * 0.5f;
      *(float *)(this_ptr->unk + 0x2fb0) = (local_90.max.x + fStack_78) * fVar2;
      *(float *)(this_ptr->unk + 0x2fb4) = fStack_74 + (float)0.10000000000000001;
      *(uint *)(this_ptr->unk + 0x2fc0) = 0;
      *(uint *)(this_ptr->unk + 0x2fbc) = *(uint *)(this_ptr->unk + 0x2fc0);
      *(uint *)(this_ptr->unk + 0x2fb8) = *(uint *)(this_ptr->unk + 0x2fbc);
      *(uint *)(this_ptr->unk + 0x1cb4) = 0;
      *(uint *)(unaff_EBP + 0x38) = 0x42600000;
      *(uint *)(this_ptr->unk + 0x140) = 0x42000000;
      (this_ptr->base).pickup_type = 3;
      return;
    }
    if (EVar1 == LIGHT_TYPE_LANTERN) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                (this_ptr_00,"lantern.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr_00);
      (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&local_a8);
      fStack_44 = 0.5f;
      fStack_40 = local_a8.min.z + local_a8.max.z;
      fStack_34 = fStack_40 * 0.5f;
      fStack_3c = local_a8.max.x + local_90.min.x;
      fStack_38 = local_a8.max.y + local_90.min.y;
      fStack_30 = fStack_3c * 0.5f;
      fStack_2c = fStack_38 * 0.5f;
      *(float *)(this_ptr->unk + 0x2fac) = fStack_34;
      fStack_64 = local_a8.min.z + local_a8.max.z;
      fStack_4c = fStack_64 * fStack_44;
      fStack_60 = local_a8.max.x + local_90.min.x;
      fStack_5c = local_a8.max.y + local_90.min.y;
      fStack_48 = fStack_60 * fStack_44;
      fStack_44 = fStack_5c * fStack_44;
      *(float *)(this_ptr->unk + 0x2fb0) = fStack_48;
      *(float *)(this_ptr->unk + 0x2fb4) = local_90.min.y;
      *(uint *)(this_ptr->unk + 0x2fc0) = 0;
      *(uint *)(this_ptr->unk + 0x2fbc) = *(uint *)(this_ptr->unk + 0x2fc0);
      *(uint *)(this_ptr->unk + 0x2fb8) = *(uint *)(this_ptr->unk + 0x2fbc);
      *(uint *)(this_ptr->unk + 0x2fb8) = 0x3e860a92;
      *(uint *)(this_ptr->unk + 0x1cb4) = 0;
      *(uint *)(unaff_EBP + 0x38) = 0x42600000;
      *(uint *)(this_ptr->unk + 0x140) = 0x42000000;
      iVar3 = DAT_008229ac;
      (this_ptr->base).pickup_type = 3;
      if (iVar3 == 0) {
        this_ptr_01 = CDemonFilter_ARRAY_008229ec;
        iVar3 = 0;
        do {
          _sprintf(acStack_c8,"lantern%d.raw",iVar3);
          iVar3 = iVar3 + 1;
          core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(this_ptr_01,acStack_c8);
          this_ptr_01 = this_ptr_01 + 1;
        } while (iVar3 < 8);
        DAT_008229ac = 1;
      }
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
                ((CDemonLight *)this_ptr->unk,CDemonFilter_ARRAY_008229ec,0,0,0);
      return;
    }
  }
  return;
}
