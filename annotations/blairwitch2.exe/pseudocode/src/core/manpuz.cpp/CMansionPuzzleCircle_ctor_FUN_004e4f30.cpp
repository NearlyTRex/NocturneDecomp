// Name: core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004e4f30
// Address: 004e4f30
// Address Range: [[004e4f30, 004e5070]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_004e4f30(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_004e4f30(CMansionPuzzleCircle *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(pCVar3 + 1);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(pCVar3 + 1);
  pvVar4 = __arrinit
                     (pCVar3[1].part_visibility_flags + 9,0xc,&g_SPanelTypeInfo);
  pvVar4 = __arrinit((void *)((int)pvVar4 + 0x4b0),0xc,&g_SGemTypeInfo);
  pvVar4 = __arrinit
                     ((void *)((int)pvVar4 + 0x8a0),2,&g_SReflectorTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar4 + -0x11ec) = &g_CMansionPuzzleCircleVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)((int)pvVar4 + -0x11e8),(char *)0x5dc4b6);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)((int)pvVar4 + -0x106c),(char *)0x5dc4c3);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
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
  core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004e6010
            ((CMansionPuzzleCircle *)((int)pvVar4 + -0x149c));
  return (CMansionPuzzleCircle *)((int)pvVar4 + -0x149c);
}
