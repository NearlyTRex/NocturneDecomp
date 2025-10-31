// Name: core_drip.cpp_staticInit_FUN_0048df80
// Address: 0048df80
// Address Range: [[0048df80, 0048dfb0]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * core_drip.cpp_staticInit_FUN_0048df80(void)
// Globals:
//   TerminatedCString s_CDrip_006221ff
//   undefined4 g_CDripClassVersion
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CDripClassInfo
//   undefined4 DAT_02c9b170
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl core_drip_cpp_staticInit_FUN_0048df80(void)

{
  CKeyFramedModelInstance *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDripClassInfo,"CDrip",core_drip_cpp_FUN_0048dfc0,&g_CDripClassVersion,6,
             &g_CDemonActorClassInfo);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)&DAT_02c9b170);
  return pCVar1;
}


// Assembly code:
// 0048df80: PUSH 0x821ff8
//   Label: core_drip.cpp_staticInit_FUN_0048df80
//   XREF to: 00821ff8 (DATA)
// 0048df85: PUSH 0x6
// 0048df87: PUSH 0x672334
//   XREF to: 00672334 (DATA)
// 0048df8c: PUSH 0x48dfc0
//   XREF to: 0048dfc0 (DATA)
// 0048df91: PUSH 0x6221ff
//   XREF to: 006221ff (DATA)
// 0048df96: PUSH 0x2c9b134
//   XREF to: 02c9b134 (DATA)
// 0048df9b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0048dfa0: ADD ESP,0x18
// 0048dfa3: PUSH 0x2c9b170
//   XREF to: 02c9b170 (DATA)
// 0048dfa8: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 0048dfad: ADD ESP,0x4
// 0048dfb0: RET
