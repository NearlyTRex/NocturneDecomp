// Name: core_drip.cpp_CDrip_process_FUN_0046d110
// Address: 0046d110
// Address Range: [[0046d110, 0046d55a]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_process_FUN_0046d110(CDrip *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_drip_cpp_CDrip_process_FUN_0046d110(CDrip *this_ptr,float delta_time)

{
  byte *position;
  int iVar1;
  float fVar2;
  float fVar3;
  CKeyFramedModel *model_ptr;
  int iVar4;
  CDrip **ppCVar5;
  uint *puVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_1054 [988];
  CBoundingBox3D *in_stack_ffffff28;
  SDamageInfo aSStack_c8 [4];
  float fStack_c4;
  CDrip *pCStack_94;
  CDrip *pCStack_90;
  uint auStack_84 [3];
  float fStack_78;
  float fStack_6c;
  float afStack_68 [5];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_38;
  CVector3f aCStack_2c [2];
  
  bVar8 = 0;
  if (this_ptr->is_ground_cached == 0) {
    fStack_54 = (this_ptr->home_pos).x;
    fStack_4c = (this_ptr->home_pos).z;
    fStack_50 = (this_ptr->home_pos).y + _DAT_005d1801;
    core_dtrace_cpp_FUN_00472b50(&g_CDemonRaytraceInstance,&this_ptr->home_pos,afStack_68 + 5);
    afStack_68[2] = fStack_6c;
    afStack_68[(uint)bVar8 * -2 + 3] = afStack_68[(uint)bVar8 * -2];
    afStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    this_ptr->is_ground_cached = 1;
    this_ptr->ground_y = afStack_68[3];
  }
  if (ABS(this_ptr->drip_timer) == 0.0) {
    fVar2 = (this_ptr->vel).y - delta_time * (float)_DAT_005d1805;
    (this_ptr->vel).y = fVar2;
    *(float *)&(this_ptr->base).field_0x24 =
         fVar2 * delta_time + *(float *)&(this_ptr->base).field_0x24;
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff28);
    ppCVar5 = &pCStack_94;
    puVar6 = auStack_84;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *ppCVar5;
      ppCVar5 = ppCVar5 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    if (*(float *)&(this_ptr->base).field_0x24 <
        this_ptr->ground_y - (fStack_6c - fStack_78) * (float)_DAT_005d180d) {
      if (this_ptr->is_visible != 0) {
        core_set_cpp_CDemonSet_initCameraShake_FUN_00534800(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->hit_sound);
      }
      iVar4 = this_ptr->no_rock_flag;
      *(float *)&(this_ptr->base).field_0x24 = this_ptr->ground_y;
      if (iVar4 == 0) {
        position = &(this_ptr->base).field_0x20;
        iVar4 = 0;
        do {
          aCStack_2c[0].x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.5,0.5);
          aCStack_2c[0].y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.5,0.5);
          aCStack_2c[0].z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.5,0.5);
          aCStack_2c[0].x = aCStack_2c[0].x + *(float *)position;
          aCStack_2c[0].y = aCStack_2c[0].y + *(float *)&(this_ptr->base).field_0x24;
          aCStack_2c[0].z = aCStack_2c[0].z + *(float *)&(this_ptr->base).field_0x28;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                    (0x01C3DEB4,aCStack_2c,0.5,(CVector3f *)0x0,0xffff);
          fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.7853982,1.5707964);
          fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fVar9 = (float10)fcos((float10)fVar3);
          fVar10 = (float10)fcos((float10)fVar2);
          fVar11 = (float10)fsin((float10)fVar3);
          fVar12 = (float10)fsin((float10)fVar2);
          CStack_38.y = (float)(fVar12 * (float10)_DAT_005d1815);
          CStack_38.x = (float)(fVar9 * (float10)_DAT_005d1815 * (float10)(float)fVar10);
          CStack_38.z = (float)(fVar11 * (float10)_DAT_005d1815 * (float10)(float)fVar10);
          model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                                ((CKeyFramedModelInstance *)0x1bd3848);
          iVar4 = iVar4 + 1;
          core_fire_cpp_CFireEffect_createRock_FUN_0049d5b0
                    (0x01C3DEB4,(CVector3f *)position,&CStack_38,model_ptr);
        } while (iVar4 < 10);
      }
      *(float *)&(this_ptr->base).field_0x24 = (this_ptr->home_pos).y;
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
      *(float *)&(this_ptr->base).field_0x20 =
           fVar2 * this_ptr->drip_radius + (this_ptr->home_pos).x;
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
      *(float *)&(this_ptr->base).field_0x28 =
           fVar2 * this_ptr->drip_radius + (this_ptr->home_pos).z;
      (this_ptr->vel).z = 0.0;
      (this_ptr->vel).y = (this_ptr->vel).z;
      (this_ptr->vel).x = (this_ptr->vel).y;
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                        (this_ptr->min_auto_drip_time,this_ptr->max_auto_drip_time);
      this_ptr->drip_timer = fVar2;
    }
    iVar4 = 0;
    iVar7 = 0;
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar4) break;
      iVar1 = *(int *)((int)g_CDemonSetPtr->characters + iVar7);
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_c8);
      fStack_c4 = this_ptr->damage;
      pCStack_94 = this_ptr;
      pCStack_90 = this_ptr;
      iVar7 = iVar7 + 4;
      iVar4 = iVar4 + 1;
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x108))
                (iVar1,&(this_ptr->base).field_0x20,0x3f800000,aSStack_c8);
    }
  }
  else if ((this_ptr->auto_drop != 0) &&
          (fVar2 = this_ptr->drip_timer - delta_time, this_ptr->drip_timer = fVar2, fVar2 < 0.0)) {
    this_ptr->drip_timer = 0.0;
    return;
  }
  return;
}
