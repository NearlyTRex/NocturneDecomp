// Name: core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00503b40
// Address: 00503b40
// Address Range: [[00503b40, 00503c80]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_00503b40(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_00503b40(CMansionPuzzleCircle *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860(pCVar3 + 1);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860(pCVar3 + 1);
  iVar4 = __arrinit(&pCVar3[1].field_0x24,0xc,&g_SPanelTypeInfo);
  iVar4 = __arrinit(iVar4 + 0x4b0,0xc,&g_SGemTypeInfo);
  iVar4 = __arrinit(iVar4 + 0x8a0,2,&g_SReflectorTypeInfo);
  *(byte **)(iVar4 + -0x11ec) = &g_CMansionPuzzleCircleVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(iVar4 + -0x11e8),(char *)0x5e7406);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(iVar4 + -0x106c),(char *)0x5e7413);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(iVar4 + -0xef0),"mirrhack.kfm");
  pcVar5 = "headlite.raw";
  pcVar6 = (char *)(iVar4 + 0x188);
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + -0xd6c) = 0;
  *(uint *)(iVar4 + -0xd70) = *(uint *)(iVar4 + -0xd6c);
  *(uint *)(iVar4 + -0xd74) = *(uint *)(iVar4 + -0xd70);
  *(uint *)(iVar4 + -0xd60) = 0;
  *(uint *)(iVar4 + -0xd64) = *(uint *)(iVar4 + -0xd60);
  *(uint *)(iVar4 + -0xd68) = *(uint *)(iVar4 + -0xd64);
  *(uint *)(iVar4 + -0xd54) = 0;
  *(uint *)(iVar4 + -0xd58) = *(uint *)(iVar4 + -0xd54);
  *(uint *)(iVar4 + -0xd5c) = *(uint *)(iVar4 + -0xd58);
  core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_00504cb0
            ((CMansionPuzzleCircle *)(iVar4 + -0x1340));
  return (CMansionPuzzleCircle *)(iVar4 + -0x1340);
}
