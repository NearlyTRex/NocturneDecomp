// Name: core_emitter.cpp_FUN_004a8860
// Address: 004a8860
// Address Range: [[004a8860, 004a8a71]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a8860()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_02cf2b5c
//   undefined4 DAT_02cf2b60
//   undefined4 DAT_02cf2b6c
//   undefined4 DAT_02cf2b78
//   CFireEffect g_CFireEffectInstance
//   undefined4 DAT_02f33744
//   undefined4 DAT_02f33768
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_renderActorBoundingBox_FUN_0040d940
//   core_fire.cpp_CFireEffect_FUN_004c8230
//   core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a8860(undefined4 param_1) */

undefined4 core_emitter_cpp_FUN_004a8860(void)

{
  uchar uVar1;
  int iVar2;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CQuaternion4f *label_offset;
  void *in_stack_ffffff3c;
  undefined1 local_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  char local_64 [72];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 == 0) {
    if ((*(int *)in_stack_00000004[1].actor_name == 3) &&
       (*(int *)(in_stack_00000004[1].actor_name + 0x10) != 0)) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
      core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0((SLaserInfo *)local_7c);
      local_7c._8_4_ = in_stack_00000004[1].field_224.x;
      local_70 = in_stack_00000004[1].field_224.y;
      local_6c = in_stack_00000004[1].field_224.z;
      local_68 = in_stack_00000004[1].field_236.x;
      local_64[0] = '\0';
      local_64[1] = '\0';
      local_64[2] = '\0';
      local_64[3] = '\0';
      local_64[4] = '\0';
      local_64[5] = '\0';
      local_64[6] = '\0';
      local_64[7] = '\0';
      local_7c[0] = '\0';
      local_7c[1] = '\0';
      local_7c[2] = -0x80;
      local_7c[3] = '?';
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x42c80000;
      core_actor_cpp_CDemonActor_FUN_00408e80(in_stack_00000004);
      core_fire_cpp_CFireEffect_FUN_004c8230(g_CFireEffectPtr);
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      return 1;
    }
    if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
      iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
      if (iVar2 == 0) {
        core_actor_cpp_renderActorBoundingBox_FUN_0040d940(in_stack_00000004,0xfb);
        if ((((*(int *)in_stack_00000004[1].actor_name == 3) && (DAT_02cf2b5c != 0)) &&
            (in_stack_00000004 == DAT_02cf2b78)) &&
           (DAT_02cf2b78 == *(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c))) {
          label_offset = (CQuaternion4f *)&DAT_02cf2b6c;
          uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
                    (g_CEditorToolsPtr,0x3f800000,(CQuaternion4f *)CONCAT31(extraout_var,uVar1),
                     label_offset,in_stack_ffffff3c);
          return 0;
        }
      }
    }
  }
  return 0;
}


// Assembly code:
// 004a8860: PUSH EBX
//   Label: core_emitter.cpp_FUN_004a8860
// 004a8861: PUSH ESI
// 004a8862: PUSH EDI
// 004a8863: PUSH EBP
// 004a8864: MOV EBP,ESP
// 004a8866: SUB ESP,0xc0
// 004a886c: SUB EBP,0x7e
// 004a886f: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004a8875: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004a887b: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004a887c: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004a8881: ADD ESP,0x4
// 004a8884: TEST EAX,EAX
// 004a8886: JNZ 0x004a88a9
//   XREF to: 004a88a9 (CONDITIONAL_JUMP)
// 004a8888: CMP dword ptr [EBX + 0x158],0x3
// 004a888f: JNZ 0x004a889a
//   XREF to: 004a889a (CONDITIONAL_JUMP)
// 004a8891: CMP dword ptr [EBX + 0x168],0x0
// 004a8898: JNZ 0x004a88b3
//   XREF to: 004a88b3 (CONDITIONAL_JUMP)
// 004a889a: MOV EAX,[0x0067d550]
//   Label: LAB_004a889a
//   XREF to: 0067d550 (READ)
// 004a889f: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 004a88a3: JNZ 0x004a89df
//   XREF to: 004a89df (CONDITIONAL_JUMP)
// 004a88a9: XOR EAX,EAX
//   Label: LAB_004a88a9
// 004a88ab: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 004a88ae: POP EBP
// 004a88af: POP EDI
// 004a88b0: POP ESI
// 004a88b1: POP EBX
// 004a88b2: RET
// 004a88b3: MOV ECX,dword ptr [0x006810c8]
//   Label: LAB_004a88b3
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004a88b9: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004a88ba: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004a88bf: ADD ESP,0x4
// 004a88c2: PUSH EBX
// 004a88c3: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004a88c9: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004a88ca: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004a88cf: ADD ESP,0x8
// 004a88d2: LEA EAX,[EBP + 0x12]
//   XREF to: Stack[-0x7c] (DATA)
// 004a88d5: PUSH EAX
// 004a88d6: CALL core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
//   XREF to: 004c81f0 (UNCONDITIONAL_CALL)
// 004a88db: MOV EAX,dword ptr [EBX + 0x238]
// 004a88e1: MOV dword ptr [EBP + 0x1a],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 004a88e4: MOV EAX,dword ptr [EBX + 0x23c]
// 004a88ea: MOV dword ptr [EBP + 0x1e],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004a88ed: MOV EAX,dword ptr [EBX + 0x240]
// 004a88f3: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004a88f6: MOV EAX,dword ptr [EBX + 0x244]
// 004a88fc: MOV dword ptr [EBP + 0x26],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004a88ff: XOR EAX,EAX
// 004a8901: ADD ESP,0x4
// 004a8904: MOV dword ptr [EBP + 0x2a],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004a8907: MOV dword ptr [EBP + 0x2e],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 004a890a: PUSH EAX
// 004a890b: MOV EAX,dword ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (READ)
// 004a890e: MOV dword ptr [EBP + -0x3e],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 004a8911: MOV EAX,dword ptr [EBP + 0x1a]
//   XREF to: Stack[-0x74] (READ)
// 004a8914: MOV dword ptr [EBP + -0x3a],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 004a8917: MOV EAX,dword ptr [EBP + 0x1e]
//   XREF to: Stack[-0x70] (READ)
// 004a891a: MOV dword ptr [EBP + -0x36],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 004a891d: MOV EAX,dword ptr [EBP + 0x22]
//   XREF to: Stack[-0x6c] (READ)
// 004a8920: MOV dword ptr [EBP + -0x32],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 004a8923: MOV EAX,dword ptr [EBP + 0x26]
//   XREF to: Stack[-0x68] (READ)
// 004a8926: MOV dword ptr [EBP + -0x2e],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 004a8929: MOV EAX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x5c] (READ)
// 004a892c: MOV dword ptr [EBP + -0x22],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 004a892f: MOV EAX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x58] (READ)
// 004a8932: MOV dword ptr [EBP + -0x1e],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 004a8935: MOV EAX,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x54] (READ)
// 004a8938: MOV dword ptr [EBP + -0x1a],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 004a893b: MOV EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x50] (READ)
// 004a893e: MOV dword ptr [EBP + -0x16],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 004a8941: MOV EAX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x4c] (READ)
// 004a8944: MOV dword ptr [EBP + -0x12],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 004a8947: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x48] (READ)
// 004a894a: MOV dword ptr [EBP + -0xe],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 004a894d: MOV EAX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x44] (READ)
// 004a8950: MOV dword ptr [EBP + -0xa],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 004a8953: MOV EAX,dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x40] (READ)
// 004a8956: MOV dword ptr [EBP + -0x6],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 004a8959: MOV EAX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x3c] (READ)
// 004a895c: MOV dword ptr [EBP + -0x2],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 004a895f: MOV EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x38] (READ)
// 004a8962: MOV EDI,0x3f800000
// 004a8967: MOV dword ptr [EBP + 0x2],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 004a896a: MOV EAX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 004a896d: XOR ESI,ESI
// 004a896f: MOV dword ptr [EBP + 0x6],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 004a8972: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x30] (READ)
// 004a8975: MOV ECX,0x42c80000
// 004a897a: MOV dword ptr [EBP + 0xa],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 004a897d: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 004a8980: XOR EDX,EDX
// 004a8982: MOV dword ptr [EBP + 0xe],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 004a8985: LEA EAX,[EBP + -0x42]
//   XREF to: Stack[-0xd0] (DATA)
// 004a8988: MOV dword ptr [EBP + 0x12],EDI
//   XREF to: Stack[-0x7c] (WRITE)
// 004a898b: PUSH EAX
// 004a898c: LEA EAX,[EBP + 0x72]
//   XREF to: Stack[-0x1c] (DATA)
// 004a898f: MOV dword ptr [EBP + -0x42],EDI
//   XREF to: Stack[-0xd0] (WRITE)
// 004a8992: PUSH EAX
// 004a8993: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x28] (DATA)
// 004a8996: MOV dword ptr [EBP + -0x2a],ESI
//   XREF to: Stack[-0xb8] (WRITE)
// 004a8999: PUSH EAX
// 004a899a: MOV dword ptr [EBP + -0x26],EDX
//   XREF to: Stack[-0xb4] (WRITE)
// 004a899d: MOV dword ptr [EBP + 0x72],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004a89a0: PUSH EBX
// 004a89a1: MOV dword ptr [EBP + 0x76],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004a89a4: MOV dword ptr [EBP + 0x7a],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004a89a7: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004a89ac: ADD ESP,0xc
// 004a89af: PUSH EAX
// 004a89b0: ADD EBX,0x20
// 004a89b3: PUSH EBX
// 004a89b4: MOV EBX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004a89ba: PUSH EBX
//   XREF to: 02d12db0 (DATA)
// 004a89bb: CALL core_fire.cpp_CFireEffect_FUN_004c8230
//   XREF to: 004c8230 (UNCONDITIONAL_CALL)
// 004a89c0: ADD ESP,0x14
// 004a89c3: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004a89c9: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004a89ca: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004a89cf: MOV EAX,0x1
// 004a89d4: ADD ESP,0x4
// 004a89d7: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 004a89da: POP EBP
// 004a89db: POP EDI
// 004a89dc: POP ESI
// 004a89dd: POP EBX
// 004a89de: RET
// 004a89df: MOV EAX,[0x006703ec]
//   Label: LAB_004a89df
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004a89e4: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004a89e5: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004a89ea: ADD ESP,0x4
// 004a89ed: TEST EAX,EAX
// 004a89ef: JNZ 0x004a88a9
//   XREF to: 004a88a9 (CONDITIONAL_JUMP)
// 004a89f5: PUSH 0xfb
// 004a89fa: PUSH EBX
// 004a89fb: CALL core_actor.cpp_renderActorBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 004a8a00: MOV EDX,dword ptr [EBX + 0x158]
// 004a8a06: ADD ESP,0x8
// 004a8a09: CMP EDX,0x3
// 004a8a0c: JNZ 0x004a88a9
//   XREF to: 004a88a9 (CONDITIONAL_JUMP)
// 004a8a12: CMP dword ptr [0x02cf2b5c],0x0
//   XREF to: 02cf2b5c (READ)
// 004a8a19: JZ 0x004a88a9
//   XREF to: 004a88a9 (CONDITIONAL_JUMP)
// 004a8a1f: MOV ESI,dword ptr [0x02cf2b78]
//   XREF to: 02cf2b78 (READ)
// 004a8a25: CMP EBX,ESI
// 004a8a27: JNZ 0x004a88a9
//   XREF to: 004a88a9 (CONDITIONAL_JUMP)
// 004a8a2d: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 004a8a32: CMP ESI,dword ptr [EAX + 0x28]
//   XREF to: 02f33768 (READ)
// 004a8a35: JNZ 0x004a88a9
//   XREF to: 004a88a9 (CONDITIONAL_JUMP)
// 004a8a3b: PUSH 0x2cf2b6c
//   XREF to: 02cf2b6c (DATA)
// 004a8a40: PUSH 0x2cf2b60
//   XREF to: 02cf2b60 (DATA)
// 004a8a45: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004a8a4a: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004a8a4b: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 004a8a50: ADD ESP,0x4
// 004a8a53: PUSH EAX
// 004a8a54: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004a8a5a: PUSH 0x3f800000
// 004a8a5f: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004a8a60: CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
//   XREF to: 004a1e90 (UNCONDITIONAL_CALL)
// 004a8a65: ADD ESP,0x14
// 004a8a68: XOR EAX,EAX
// 004a8a6a: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 004a8a6d: POP EBP
// 004a8a6e: POP EDI
// 004a8a6f: POP ESI
// 004a8a70: POP EBX
// 004a8a71: RET
