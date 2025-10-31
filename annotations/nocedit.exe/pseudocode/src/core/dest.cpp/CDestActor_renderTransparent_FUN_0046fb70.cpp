// Name: core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70
// Address: 0046fb70
// Address Range: [[0046fb70, 0046fcb8]]
// Convention: unknown
// Signature: undefined core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70()
// Globals:
//   TerminatedCString s_CBoxActor_0061e3b2
//   TerminatedCString s_core_dest_cpp_0061e3bc
//   TerminatedCString s_CDestActor_renderTranspa_0061e3cd
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   undefined4 g_CBoxActorClassInfo.name_hash
//   CDemonRenderer g_CDemonRendererInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_actor.cpp_FUN_0040dec0
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

/* Signature: undefined1 actors_other_dest.cpp_CDestActor_renderTransparent(undefined4 param_1) */

undefined4 core_dest_cpp_CDestActor_renderTransparent_FUN_0046fb70(void)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  CDemonActor *pCVar3;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_2c;
  
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar1 == 0) {
      if (*(CDemonActor **)in_stack_00000004[1].actor_name != (CDemonActor *)0x0) {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          (*(CDemonActor **)in_stack_00000004[1].actor_name,"CBoxActor");
        if (iVar1 != 0) {
          core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
          pCVar2 = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                             (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd0);
          iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
          if (iVar1 != 0) {
            pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (*(CDemonActor **)in_stack_00000004[1].actor_name,
                                g_CBoxActorClassInfo.name_hash);
            if (pCVar3 == (CDemonActor *)0x0) {
              g_CurrentFilename = "..\\core\\dest.cpp";
              g_CurrentLineNumber = 0xa5;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CDestActor::renderTransparent - Catch 22");
            }
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr,0x8000);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                      ((CKeyFramedModelInstance *)(pCVar3 + 1),0.0,0x2e6);
          }
          core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
          return 1;
        }
      }
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
      pCVar2 = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe8);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
      if (iVar1 != 0) {
        fStack_2c = 6.518866e-39;
        core_actor_cpp_FUN_0040dec0(in_stack_00000004);
        return 1;
      }
    }
  }
  return 0;
}


// Assembly code:
// 0046fb70: PUSH EBX
//   Label: core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70
// 0046fb71: PUSH ESI
// 0046fb72: PUSH EBP
// 0046fb73: SUB ESP,0x30
// 0046fb76: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0046fb7a: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0046fb7f: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 0046fb83: JNZ 0x0046fb8e
//   XREF to: 0046fb8e (CONDITIONAL_JUMP)
// 0046fb85: XOR EAX,EAX
//   Label: LAB_0046fb85
// 0046fb87: ADD ESP,0x30
// 0046fb8a: POP EBP
// 0046fb8b: POP ESI
// 0046fb8c: POP EBX
// 0046fb8d: RET
// 0046fb8e: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_0046fb8e
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0046fb94: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0046fb95: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0046fb9a: ADD ESP,0x4
// 0046fb9d: TEST EAX,EAX
// 0046fb9f: JNZ 0x0046fb85
//   XREF to: 0046fb85 (CONDITIONAL_JUMP)
// 0046fba1: MOV ESI,dword ptr [EBX + 0x158]
// 0046fba7: TEST ESI,ESI
// 0046fba9: JNZ 0x0046fc01
//   XREF to: 0046fc01 (CONDITIONAL_JUMP)
// 0046fbab: PUSH EBX
//   Label: LAB_0046fbab
// 0046fbac: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0046fbb1: ADD ESP,0x4
// 0046fbb4: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 0046fbb8: PUSH EAX
// 0046fbb9: MOV ESI,dword ptr [EBX + 0x154]
// 0046fbbf: PUSH EBX
// 0046fbc0: CALL dword ptr [ESI + 0x14]
// 0046fbc3: ADD ESP,0x8
// 0046fbc6: PUSH EAX
// 0046fbc7: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0046fbcc: ADD ESP,0x4
// 0046fbcf: PUSH EBX
// 0046fbd0: MOV ESI,EAX
// 0046fbd2: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0046fbd7: ADD ESP,0x4
// 0046fbda: TEST ESI,ESI
// 0046fbdc: JZ 0x0046fb85
//   XREF to: 0046fb85 (CONDITIONAL_JUMP)
// 0046fbde: PUSH 0x80
// 0046fbe3: PUSH 0x0
// 0046fbe5: PUSH 0x0
// 0046fbe7: PUSH 0xff
// 0046fbec: PUSH EBX
// 0046fbed: CALL core_actor.cpp_FUN_0040dec0
//   XREF to: 0040dec0 (UNCONDITIONAL_CALL)
// 0046fbf2: ADD ESP,0x14
// 0046fbf5: MOV EAX,0x1
// 0046fbfa: ADD ESP,0x30
// 0046fbfd: POP EBP
// 0046fbfe: POP ESI
// 0046fbff: POP EBX
// 0046fc00: RET
// 0046fc01: PUSH 0x61e3b2
//   Label: LAB_0046fc01
//   XREF to: 0061e3b2 (DATA)
// 0046fc06: PUSH ESI
// 0046fc07: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0046fc0c: ADD ESP,0x8
// 0046fc0f: TEST EAX,EAX
// 0046fc11: JZ 0x0046fbab
//   XREF to: 0046fbab (CONDITIONAL_JUMP)
// 0046fc13: PUSH EBX
// 0046fc14: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0046fc19: ADD ESP,0x4
// 0046fc1c: MOV ESI,ESP
// 0046fc1e: PUSH ESI
// 0046fc1f: MOV EAX,dword ptr [EBX + 0x154]
// 0046fc25: PUSH EBX
// 0046fc26: CALL dword ptr [EAX + 0x14]
// 0046fc29: ADD ESP,0x8
// 0046fc2c: PUSH EAX
// 0046fc2d: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0046fc32: ADD ESP,0x4
// 0046fc35: TEST EAX,EAX
// 0046fc37: JZ 0x0046fca4
//   XREF to: 0046fca4 (CONDITIONAL_JUMP)
// 0046fc39: MOV EBP,dword ptr [0x008229e8]
//   XREF to: 008229e8 (READ)
// 0046fc3f: PUSH EBP
// 0046fc40: MOV EAX,dword ptr [EBX + 0x158]
// 0046fc46: PUSH EAX
// 0046fc47: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0046fc4c: ADD ESP,0x8
// 0046fc4f: MOV ESI,EAX
// 0046fc51: TEST EAX,EAX
// 0046fc53: JNZ 0x0046fc78
//   XREF to: 0046fc78 (CONDITIONAL_JUMP)
// 0046fc55: MOV EDX,0x61e3bc
//   XREF to: 0061e3bc (PARAM)
// 0046fc5a: MOV ECX,0xa5
// 0046fc5f: PUSH 0x61e3cd
//   XREF to: 0061e3cd (DATA)
// 0046fc64: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0046fc6a: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0046fc70: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0046fc75: ADD ESP,0x4
// 0046fc78: PUSH EDI
//   Label: LAB_0046fc78
// 0046fc79: PUSH 0x8000
// 0046fc7e: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0046fc84: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0046fc85: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0046fc8a: ADD ESP,0x8
// 0046fc8d: PUSH 0x2e6
// 0046fc92: LEA EAX,[ESI + 0x158]
// 0046fc98: PUSH 0x0
// 0046fc9a: PUSH EAX
// 0046fc9b: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 0046fca0: ADD ESP,0xc
// 0046fca3: POP EDI
// 0046fca4: PUSH EBX
//   Label: LAB_0046fca4
// 0046fca5: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0046fcaa: ADD ESP,0x4
// 0046fcad: MOV EAX,0x1
// 0046fcb2: ADD ESP,0x30
// 0046fcb5: POP EBP
// 0046fcb6: POP ESI
// 0046fcb7: POP EBX
// 0046fcb8: RET
