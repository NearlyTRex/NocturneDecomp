// Name: core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00508920
// Address: 00508920
// Address Range: [[00508920, 00508a60]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00508920(CMansionPuzzleCircle * this_ptr)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_00508920(CMansionPuzzleCircle *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(pCVar3 + 1);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(pCVar3 + 1);
  pvVar4 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (pCVar3[1].part_visibility_flags + 9,0xc,&g_SPanelTypeInfo);
  pvVar4 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar4 + 0x4b0),0xc,&g_SGemTypeInfo);
  pvVar4 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar4 + 0x8a0),2,&g_SReflectorTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar4 + -0x11ec) = &g_CMansionPuzzleCircleVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)((int)pvVar4 + -0x11e8),"doorpuzz.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)((int)pvVar4 + -0x106c),"puzz-rec.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)((int)pvVar4 + -0xef0),"mirrhack.kfm");
  pcVar5 = "headlite.raw";
  pcVar6 = (char *)((int)pvVar4 + 0x188);
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar4 + -0xd6c) = 0;
  *(uint *)((int)pvVar4 + -0xd70) = *(uint *)((int)pvVar4 + -0xd6c);
  *(uint *)((int)pvVar4 + -0xd74) = *(uint *)((int)pvVar4 + -0xd70);
  *(uint *)((int)pvVar4 + -0xd60) = 0;
  *(uint *)((int)pvVar4 + -0xd64) = *(uint *)((int)pvVar4 + -0xd60);
  *(uint *)((int)pvVar4 + -0xd68) = *(uint *)((int)pvVar4 + -0xd64);
  *(uint *)((int)pvVar4 + -0xd54) = 0;
  *(uint *)((int)pvVar4 + -0xd58) = *(uint *)((int)pvVar4 + -0xd54);
  *(uint *)((int)pvVar4 + -0xd5c) = *(uint *)((int)pvVar4 + -0xd58);
  core_manpuz_cpp_CMansionPuzzleCircle_FUN_005098f0((CMansionPuzzleCircle *)((int)pvVar4 + -0x1340))
  ;
  return (CMansionPuzzleCircle *)((int)pvVar4 + -0x1340);
}
