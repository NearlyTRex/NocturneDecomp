// Name: core_teleport.cpp_CTeleport_process_FUN_00543910
// Address: 00543910
// Address Range: [[00543910, 005439b8]]
// Convention: unknown
// Signature: void core_teleport_cpp_CTeleport_process_FUN_00543910(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_teleport_cpp_CTeleport_process_FUN_00543910(CDemonActor *param_1)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  CBoundingBox3D CStack_2c;
  CVector3f local_14;
  
  if (*(int *)(param_1[1].actor_name + 0xc) != 0) {
    pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       (param_1,&local_14,
                        (CVector3f *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x20));
    pCVar2 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&CStack_2c);
    if (((((pCVar2->min).x <= pCVar1->x) && ((pCVar2->min).y <= pCVar1->y)) &&
        ((pCVar2->min).z <= pCVar1->z)) &&
       (((pCVar1->x <= (pCVar2->max).x && (pCVar1->y <= (pCVar2->max).y)) &&
        (pCVar1->z <= (pCVar2->max).z)))) {
      core_mission_cpp_FUN_004d90e0
                (0x01CC9450,(CLocation *)(*(int *)(param_1[1].actor_name + 0xc) + 0x20));
      return;
    }
  }
  return;
}
