// Name: core_conveyor.cpp_FUN_0043b110
// Address: 0043b110
// Address Range: [[0043b110, 0043b19c]]
// Convention: unknown
// Signature: void core_conveyor_cpp_FUN_0043b110(CPlatform *param_1)

#include "nocturne.h"

void core_conveyor_cpp_FUN_0043b110(CPlatform *param_1)

{
  CLocation *pCVar1;
  CVector3f *pCVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_17f8 [1526];
  float local_1c;
  
  bVar7 = 0;
  pCVar2 = &param_1->end_pos;
  pCVar1 = &(param_1->base).location;
  if ((CLocation *)pCVar2 != pCVar1) {
    pCVar2->x = (pCVar1->position).x;
    (param_1->end_pos).y = (param_1->base).location.position.y;
    (param_1->end_pos).z = (param_1->base).location.position.z;
  }
  if (&param_1->start_pos != pCVar2) {
    (param_1->start_pos).x = pCVar2->x;
    (param_1->start_pos).y = (param_1->end_pos).y;
    (param_1->start_pos).z = (param_1->end_pos).z;
  }
  core_xform_cpp_eulerToQuaternion_FUN_0055d610(&(param_1->base).orient);
  puVar3 = (uint *)((int)param_1 + (uint)bVar7 * -8 + 0x340);
  (param_1->end_orient).w = local_1c;
  puVar4 = puVar3 + (uint)bVar7 * -2 + 1;
  *puVar3 = *(uint *)(&stack0xffffffe8 + (uint)bVar7 * -8);
  *puVar4 = *(uint *)(&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  puVar4[(uint)bVar7 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
  ;
  puVar5 = (uint *)((int)param_1 + (uint)bVar7 * -8 + 0x330);
  puVar3 = (uint *)((int)param_1 + (uint)bVar7 * -8 + 0x340);
  (param_1->orig_orient).w = (param_1->end_orient).w;
  puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
  puVar4 = puVar3 + (uint)bVar7 * -2 + 1;
  *puVar5 = *puVar3;
  *puVar6 = *puVar4;
  puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
  core_platfrm_cpp_FUN_004f5f60(param_1);
  (param_1->base).is_transparent = 1;
  return;
}
