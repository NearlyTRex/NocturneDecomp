// Name: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140
// Address: 0040a140
// Address Range: [[0040a140, 0040a1fb]]
// Convention: unknown
// Signature: float core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140(CDemonActor *param_1,float param_2,char *param_3)

#include "nocturne.h"

float core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140(CDemonActor *param_1,float param_2,char *param_3)

{
  CDemonSet *pCVar1;
  float fVar2;
  CPlatform *pCVar3;
  char *pcVar4;
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(0x01E57284);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  core_setcolid_cpp_FUN_005117f0(0x01E57284);
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                    (0x01E57284,&(param_1->location).position,param_2);
  pCVar3 = (CPlatform *)
           core_actor_cpp_castToClassHash_FUN_0040d890
                     (*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18),
                      g_CPlatformActorType_01e42894.name_hash);
  param_1->standing_platform = pCVar3;
  pCVar1 = 0x01E57284;
  if (param_3 != (char *)0x0) {
    pcVar4 = 0x01E57284->lights[199].filter_names[0x12] + 0x24;
    if (param_3 != pcVar4) {
      *(uint *)param_3 = *(uint *)pcVar4;
      *(uint *)(param_3 + 4) = *(uint *)pCVar1->lights[199].filter_names[0x13];
      *(uint *)(param_3 + 8) = *(uint *)(pCVar1->lights[199].filter_names[0x13] + 4);
    }
  }
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(0x01E57284);
  return fVar2;
}
