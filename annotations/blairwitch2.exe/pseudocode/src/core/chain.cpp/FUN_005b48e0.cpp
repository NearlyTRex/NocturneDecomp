// Name: core_chain.cpp_FUN_005b48e0
// Address: 005b48e0
// Address Range: [[005b48e0, 005b4a9c]]
// Convention: unknown
// Signature: void core_chain_cpp_FUN_005b48e0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_chain_cpp_FUN_005b48e0(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  uint *puVar6;
  void **ppvVar7;
  byte bVar8;
  float afStackY_1040 [1017];
  float fStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar8 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(param_1);
  if (param_1->particle_systems[0].active != 0) {
    core_chain_cpp_FUN_005b4860(param_1);
    fStack_40 = fStack_58;
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffffac + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffffb0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    fStack_28 = fStack_40 - (param_1->location).position.x;
    fStack_24 = fStack_3c - (param_1->location).position.y;
    fStack_20 = fStack_38 - (param_1->location).position.z;
    fStack_4c = fStack_28;
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffffbc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffffe0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    puVar6 = (uint *)((int)param_1 + (uint)bVar8 * -8 + 0x24);
    fStack_34 = (param_1->location).position.x;
    (&stack0xffffffd0)[(uint)bVar8 * 0xfffffffe] = (float)*puVar6;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         puVar6[(uint)bVar8 * -2 + 1];
    fVar1 = 1.0 / (float)((int)param_1->particle_systems[0].position.y + -1);
    iVar3 = 0;
    if (0 < (int)param_1->particle_systems[0].position.y) {
      ppvVar7 = &param_1->particle_systems[4].vtable;
      piVar4 = &param_1->particle_systems[4].stop_after_fade;
      do {
        pfVar5 = &param_1->particle_systems[4].fade_end + iVar3 * 9;
        if (pfVar5 != &stack0xffffffcc) {
          *pfVar5 = fStack_34;
          pfVar5[1] = fStack_30;
          pfVar5[2] = fStack_2c;
        }
        fStack_34 = fStack_34 + fStack_4c * fVar1;
        fStack_30 = fStack_30 + fStack_48 * fVar1;
        fStack_2c = fStack_2c + fStack_44 * fVar1;
        piVar4[2] = 0;
        piVar4[1] = (int)piVar4[2];
        pfVar5 = &param_1->particle_systems[4].fade_end + iVar3 * 9;
        *piVar4 = piVar4[1];
        if (ppvVar7 != (void **)pfVar5) {
          piVar4[3] = (int)*pfVar5;
          piVar4[4] = (int)pfVar5[1];
          piVar4[5] = (int)pfVar5[2];
        }
        ppvVar7 = ppvVar7 + 9;
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 9;
      } while (iVar3 < (int)param_1->particle_systems[0].position.y);
    }
  }
  fVar2 = param_1->particle_systems[0].position.y;
  fVar1 = param_1->particle_systems[0].position.z;
  param_1->particle_systems[2].particles = (void *)0x0;
  param_1->particle_systems[4].next_particle = 0;
  *(uint *)&param_1->particle_systems[4].field_0x20 = 0;
  param_1[2].actor_name[4] = -0x66;
  param_1[2].actor_name[5] = '?';
  param_1[2].actor_name[6] = '\x1c';
  param_1[2].actor_name[7] = -0x3a;
  param_1[2].actor_name[0xc] = '\0';
  param_1[2].actor_name[0xd] = '\0';
  param_1[2].actor_name[0xe] = '\0';
  param_1[2].actor_name[0xf] = '\0';
  param_1->particle_systems[0].fade_current = fVar1 / (float)((int)fVar2 + -1);
  return;
}
