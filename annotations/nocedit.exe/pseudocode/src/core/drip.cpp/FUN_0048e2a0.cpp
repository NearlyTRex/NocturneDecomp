// Name: core_drip.cpp_FUN_0048e2a0
// Address: 0048e2a0
// Address Range: [[0048e2a0, 0048e47e] [0048e5f0, 0048e604] [0048e696, 0048e6aa]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_FUN_0048e2a0(void)

#include "nocturne.h"

/* Signature: byte actors_other_drip.cpp_FUN_0048e2a0(uint param_1, uint param_2)
    */

void __cdecl core_drip_cpp_FUN_0048e2a0(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int in_stack_00000004;
  float in_stack_00000008;
  SDamageInfo SStack_b4;
  float fStack_74;
  float fStack_68;
  CVector3f CStack_60;
  CVector3f local_54;
  CVector3f local_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)(in_stack_00000004 + 0x2ec) == 0) {
    local_48.x = ((CVector3f *)(in_stack_00000004 + 0x2f8))->x;
    local_48.z = *(float *)(in_stack_00000004 + 0x300);
    local_48.y = *(float *)(in_stack_00000004 + 0x2fc) + -5000.0f;
    core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
              (&g_CDemonRaytraceInstance,&local_54,(CVector3f *)(in_stack_00000004 + 0x2f8),
               &local_48);
    *(uint *)(in_stack_00000004 + 0x2ec) = 1;
    *(float *)(in_stack_00000004 + 0x2f0) = local_54.y;
  }
  if ((*(uint *)(in_stack_00000004 + 0x2dc) & 0x7fffffff) == 0) {
    fVar2 = *(float *)(in_stack_00000004 + 0x308) - in_stack_00000008 * (float)32;
    *(float *)(in_stack_00000004 + 0x308) = fVar2;
    *(float *)(in_stack_00000004 + 0x24) =
         fVar2 * in_stack_00000008 + *(float *)(in_stack_00000004 + 0x24);
    (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
    if (*(float *)(in_stack_00000004 + 0x24) <
        *(float *)(in_stack_00000004 + 0x2f0) - (fStack_68 - fStack_74) * (float)0.84999999999999998) {
      if (*(int *)(in_stack_00000004 + 0x338) != 0) {
        core_set_cpp_CDemonSet_FUN_00570fa0(g_CDemonSetPtr);
        (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      }
      *(uint *)(in_stack_00000004 + 0x24) = *(uint *)(in_stack_00000004 + 0x2f0);
      if (*(int *)(in_stack_00000004 + 0x334) == 0) {
        iVar3 = 0;
        do {
          CStack_60.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          fStack_14 = CStack_60.x;
          CStack_60.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          fStack_14 = CStack_60.y;
          fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          CStack_60.x = CStack_60.x + *(float *)(in_stack_00000004 + 0x20);
          CStack_60.y = CStack_60.y + *(float *)(in_stack_00000004 + 0x24);
          CStack_60.z = fStack_14 + *(float *)(in_stack_00000004 + 0x28);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&CStack_60,0.5,(CVector3f *)0x0,0xffff);
          fStack_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
          fStack_14 = fStack_1c;
          fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
          fVar5 = (float10)fcos((float10)fStack_14);
          fVar6 = (float10)fcos((float10)fStack_1c);
          fVar7 = (float10)fsin((float10)fStack_14);
          fVar8 = (float10)fsin((float10)fStack_1c);
          fStack_18 = (float)fVar6;
          fStack_38 = (float)(fVar8 * (float10)20.0f);
          fStack_3c = (float)(fVar5 * (float10)20.0f * (float10)fStack_18);
          fStack_34 = (float)(fVar7 * (float10)20.0f * (float10)fStack_18);
          core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&DAT_02c9b170);
          iVar3 = iVar3 + 1;
          core_fire_cpp_CFireEffect_FUN_004c7e60(g_CFireEffectPtr);
        } while (iVar3 < 10);
      }
      *(uint *)(in_stack_00000004 + 0x24) = *(uint *)(in_stack_00000004 + 0x2fc);
      fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      *(float *)(in_stack_00000004 + 0x20) =
           fStack_14 * *(float *)(in_stack_00000004 + 0x2e8) + *(float *)(in_stack_00000004 + 0x2f8)
      ;
      fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      *(float *)(in_stack_00000004 + 0x28) =
           fStack_14 * *(float *)(in_stack_00000004 + 0x2e8) + *(float *)(in_stack_00000004 + 0x300)
      ;
      *(uint *)(in_stack_00000004 + 0x30c) = 0;
      *(uint *)(in_stack_00000004 + 0x308) = *(uint *)(in_stack_00000004 + 0x30c);
      *(uint *)(in_stack_00000004 + 0x304) = *(uint *)(in_stack_00000004 + 0x308);
      fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                            (*(float *)(in_stack_00000004 + 0x2e0),
                             *(float *)(in_stack_00000004 + 0x2e4));
      *(float *)(in_stack_00000004 + 0x2dc) = fStack_14;
    }
    iStack_20 = in_stack_00000004 + 0x20;
    iVar4 = 0;
    iVar3 = 0;
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar4) break;
      iVar1 = *(int *)(g_CDemonSetPtr->unk4 + iVar3 + -4);
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_b4);
      SStack_b4.damage_amount = *(float *)(in_stack_00000004 + 0x310);
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
      (**(code **)(*(int *)(iVar1 + 0x154) + 0x114))();
    }
  }
  else if ((*(int *)(in_stack_00000004 + 0x2d8) != 0) &&
          (fVar2 = *(float *)(in_stack_00000004 + 0x2dc) - in_stack_00000008,
          *(float *)(in_stack_00000004 + 0x2dc) = fVar2, fVar2 < 0.0)) {
    *(uint *)(in_stack_00000004 + 0x2dc) = 0;
    return;
  }
  return;
}
