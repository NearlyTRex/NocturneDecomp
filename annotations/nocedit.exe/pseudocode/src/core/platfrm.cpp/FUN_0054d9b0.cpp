// Name: core_platfrm.cpp_FUN_0054d9b0
// Address: 0054d9b0
// Address Range: [[0054d9b0, 0054db69]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054d9b0()
// Globals:
//   undefined4 DAT_00662280
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonCamera* g_CurrentSceneCamera
//   int g_FlatShadingLightLevel
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02d05310
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326eef0
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_platform.cpp_FUN_0054d9b0(undefined4 param_1, undefined4
   param_2) */

void core_platfrm_cpp_FUN_0054d9b0(void)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D *this_ptr;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 != 0) {
    return;
  }
  if (in_stack_00000008 == 0) {
    return;
  }
  if ((*(int *)(in_stack_00000004[3].create_event + 0x40) < 2) &&
     (*(int *)(in_stack_00000004[3].create_event + 0x48) == 0)) {
    return;
  }
  if (*(int *)(in_stack_00000004[3].create_event + 0x48) != 0) {
    fVar1 = in_stack_00000004[2].location.position.y;
    if ((fVar1 == 4.2039e-45) || (fVar1 == 5.60519e-45)) {
      return;
    }
    iVar2 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].scale);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[2].create_event + 0x2c);
    if (iVar2 != 0) {
      return;
    }
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 == 0) {
    if (*(int *)(in_stack_00000004[3].create_event + 0x48) == 0) {
      in_stack_00000004[3].create_event[0x40] = '\x03';
      in_stack_00000004[3].create_event[0x41] = '\0';
      in_stack_00000004[3].create_event[0x42] = '\0';
      in_stack_00000004[3].create_event[0x43] = '\0';
    }
    else {
      in_stack_00000004[5].was_created = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd4);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar2 != 0) {
    if ((in_stack_00000004[3].scale.y == 0) ||
       (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
       iVar2 != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
      return;
    }
    g_CDemonSetPtr->per_pixel_lighting_enabled = 1;
    g_FlatShadingLightLevel =
         (*(code *)((g_CurrentSceneCamera->base).vtable)->calculatePerspective)();
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
    g_CDemonSetPtr->per_pixel_lighting_enabled = 0;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return;
}


// Assembly code:
// 0054d9b0: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054d9b0
// 0054d9b1: PUSH ESI
// 0054d9b2: SUB ESP,0x24
// 0054d9b5: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0054d9b9: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0054d9bf: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0054d9c0: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0054d9c5: ADD ESP,0x4
// 0054d9c8: TEST EAX,EAX
// 0054d9ca: JNZ 0x0054d9fe
//   XREF to: 0054d9fe (CONDITIONAL_JUMP)
// 0054d9cc: CMP dword ptr [ESP + 0x34],0x0
//   XREF to: Stack[0x8] (READ)
// 0054d9d1: JZ 0x0054d9fe
//   XREF to: 0054d9fe (CONDITIONAL_JUMP)
// 0054d9d3: CMP dword ptr [ESI + 0x4c0],0x2
// 0054d9da: JGE 0x0054d9e5
//   XREF to: 0054d9e5 (CONDITIONAL_JUMP)
// 0054d9dc: CMP dword ptr [ESI + 0x4c8],0x0
// 0054d9e3: JZ 0x0054d9fe
//   XREF to: 0054d9fe (CONDITIONAL_JUMP)
// 0054d9e5: CMP dword ptr [ESI + 0x4c8],0x0
//   Label: LAB_0054d9e5
// 0054d9ec: JZ 0x0054da38
//   XREF to: 0054da38 (CONDITIONAL_JUMP)
// 0054d9ee: MOV EAX,dword ptr [ESI + 0x2d4]
// 0054d9f4: CMP EAX,0x3
// 0054d9f7: JZ 0x0054d9fe
//   XREF to: 0054d9fe (CONDITIONAL_JUMP)
// 0054d9f9: CMP EAX,0x4
// 0054d9fc: JNZ 0x0054da04
//   XREF to: 0054da04 (CONDITIONAL_JUMP)
// 0054d9fe: ADD ESP,0x24
//   Label: LAB_0054d9fe
// 0054da01: POP ESI
// 0054da02: POP EBX
// 0054da03: RET
// 0054da04: LEA EAX,[ESI + 0x3b8]
//   Label: LAB_0054da04
// 0054da0a: PUSH EAX
// 0054da0b: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0054da11: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 0054da12: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0054da17: ADD ESP,0x8
// 0054da1a: TEST EAX,EAX
// 0054da1c: JNZ 0x0054d9fe
//   XREF to: 0054d9fe (CONDITIONAL_JUMP)
// 0054da1e: LEA EAX,[ESI + 0x354]
// 0054da24: PUSH EAX
// 0054da25: MOV EBX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0054da2b: PUSH EBX
//   XREF to: 02d05310 (DATA)
// 0054da2c: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0054da31: ADD ESP,0x8
// 0054da34: TEST EAX,EAX
// 0054da36: JNZ 0x0054d9fe
//   XREF to: 0054d9fe (CONDITIONAL_JUMP)
// 0054da38: PUSH EDI
//   Label: LAB_0054da38
// 0054da39: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0054da3f: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0054da40: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0054da45: ADD ESP,0x4
// 0054da48: TEST EAX,EAX
// 0054da4a: JNZ 0x0054da63
//   XREF to: 0054da63 (CONDITIONAL_JUMP)
// 0054da4c: CMP dword ptr [ESI + 0x4c8],0x0
// 0054da53: JNZ 0x0054db38
//   XREF to: 0054db38 (CONDITIONAL_JUMP)
// 0054da59: MOV dword ptr [ESI + 0x4c0],0x3
// 0054da63: PUSH ESI
//   Label: LAB_0054da63
// 0054da64: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0054da69: ADD ESP,0x4
// 0054da6c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2c] (DATA)
// 0054da70: PUSH EAX
// 0054da71: MOV EBX,dword ptr [ESI + 0x154]
// 0054da77: PUSH ESI
// 0054da78: CALL dword ptr [EBX + 0x14]
// 0054da7b: ADD ESP,0x8
// 0054da7e: PUSH EAX
// 0054da7f: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0054da84: ADD ESP,0x4
// 0054da87: TEST EAX,EAX
// 0054da89: JZ 0x0054db28
//   XREF to: 0054db28 (CONDITIONAL_JUMP)
// 0054da8f: CMP dword ptr [ESI + 0x514],0x0
// 0054da96: JZ 0x0054db47
//   XREF to: 0054db47 (CONDITIONAL_JUMP)
// 0054da9c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0054daa2: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0054daa3: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0054daa8: ADD ESP,0x4
// 0054daab: TEST EAX,EAX
// 0054daad: JNZ 0x0054db47
//   XREF to: 0054db47 (CONDITIONAL_JUMP)
// 0054dab3: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0054dab8: LEA EBX,[ESP + 0x1c]
// 0054dabc: MOV dword ptr [EAX + 0x15ac78],0x1
//   XREF to: 0326eef0 (WRITE)
// 0054dac6: LEA EAX,[ESI + 0x20]
// 0054dac9: FLD float ptr [EAX]
// 0054dacb: FMUL float ptr [0x00662280]
//   XREF to: 00662280 (READ)
// 0054dad1: FISTP dword ptr [EBX]
// 0054dad3: FLD float ptr [EAX + 0x4]
// 0054dad6: FMUL float ptr [0x00662280]
//   XREF to: 00662280 (READ)
// 0054dadc: FISTP dword ptr [EBX + 0x4]
// 0054dadf: FLD float ptr [EAX + 0x8]
// 0054dae2: FMUL float ptr [0x00662280]
//   XREF to: 00662280 (READ)
// 0054dae8: FISTP dword ptr [EBX + 0x8]
// 0054daeb: PUSH 0x0
// 0054daed: LEA EBX,[ESP + 0x20]
// 0054daf1: MOV EAX,[0x00823a74]
//   XREF to: 00823a74 (READ)
// 0054daf6: PUSH EBX
// 0054daf7: MOV EDX,dword ptr [EAX + 0x3c]
// 0054dafa: PUSH EAX
// 0054dafb: CALL dword ptr [EDX + 0x8]
// 0054dafe: ADD ESP,0xc
// 0054db01: PUSH -0x1
// 0054db03: MOV [0x015c2ea8],EAX
//   XREF to: 015c2ea8 (WRITE)
// 0054db08: LEA EAX,[ESI + 0x158]
// 0054db0e: PUSH 0x0
// 0054db10: PUSH EAX
// 0054db11: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 0054db16: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0054db1b: ADD ESP,0xc
// 0054db1e: MOV dword ptr [EAX + 0x15ac78],0x0
//   XREF to: 0326eef0 (WRITE)
// 0054db28: PUSH ESI
//   Label: LAB_0054db28
// 0054db29: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0054db2e: ADD ESP,0x4
// 0054db31: POP EDI
// 0054db32: ADD ESP,0x24
// 0054db35: POP ESI
// 0054db36: POP EBX
// 0054db37: RET
// 0054db38: MOV dword ptr [ESI + 0x728],0x1
//   Label: LAB_0054db38
// 0054db42: JMP 0x0054da63
//   XREF to: 0054da63 (UNCONDITIONAL_JUMP)
// 0054db47: PUSH -0x1
//   Label: LAB_0054db47
// 0054db49: LEA EAX,[ESI + 0x158]
// 0054db4f: PUSH 0x0
// 0054db51: PUSH EAX
// 0054db52: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 0054db57: ADD ESP,0xc
// 0054db5a: PUSH ESI
// 0054db5b: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0054db60: ADD ESP,0x4
// 0054db63: POP EDI
// 0054db64: ADD ESP,0x24
// 0054db67: POP ESI
// 0054db68: POP EBX
// 0054db69: RET
