// Name: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
// Address: 00501d40
// Address Range: [[00501d40, 00501f24]]
// Convention: __cdecl
// Signature: void engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40(SMRGLKeyframeModel * keyframe_model)
// Cross-references:
//   engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30 (00501f30) at 005022c9 [UNCONDITIONAL_CALL]
//   engine_model.c_initializeMRGLModel_FUN_00528940 (00528940) at 0052894b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_keyframe_c_00630ca8
//   TerminatedCString s_Bad_key_frame_00630cbd
//   TerminatedCString s_engine_keyframe_c_00630ccb
//   TerminatedCString s_Key_frame_vertex_mismatc_00630ce0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_model.c_getMRGLSize_FUN_00528700
//   engine_model.c_loadModelChunk_FUN_00528970
//   engine_model.c_loadModelFile_FUN_00527ec0

#include "nocturne.h"

void __cdecl
engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40(SMRGLKeyframeModel *keyframe_model)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderExtended *pSVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *filename;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (keyframe_model->base_keyframes == (SMRGLKeyframe *)0x0) {
    pSVar4 = engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[0]);
    *(SMRGLHeaderExtended **)(in_stack_00000008 + 0x14) = pSVar4;
  }
  iVar2 = engine_model_c_getMRGLSize_FUN_00528700
                    (*(SMRGLHeaderExtended **)(in_stack_00000008 + 0x14));
  iVar3 = engine_model_c_getMRGLSize_FUN_00528700
                    ((SMRGLHeaderExtended *)(*(int *)(in_stack_0000000c + 0x14) + iVar2));
  iVar10 = 0;
  if (0 < *(int *)(in_stack_00000010 + 8)) {
    filename = (char *)(in_stack_00000010 + 0x18);
    iVar9 = in_stack_00000010;
    do {
      if (*(int *)(iVar9 + 0x118) == 0) {
        pSVar4 = engine_model_c_loadModelChunk_FUN_00528970(filename,iVar2 + iVar3);
        *(SMRGLHeaderExtended **)(iVar9 + 0x118) = pSVar4;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar10 + 1;
      filename = filename + 0x10;
    } while (iVar10 < *(int *)(in_stack_00000010 + 8));
  }
  iVar10 = 0;
  iVar2 = *(int *)(in_stack_00000010 + 0x14);
  iVar3 = in_stack_00000010;
  if (0 < *(int *)(in_stack_00000010 + 8)) {
    do {
      iVar9 = *(int *)(iVar3 + 0x118);
      if (*(int *)(iVar9 + 8) != 2) {
        g_CurrentFilename = "..\\engine\\keyframe.c";
        g_CurrentLineNumber = 0xfd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Bad key frame");
      }
      if (*(int *)(iVar9 + 0x10) != *(int *)(iVar2 + 0x10)) {
        g_CurrentFilename = "..\\engine\\keyframe.c";
        g_CurrentLineNumber = 0xfe;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Key frame vertex mismatch");
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar10 < *(int *)(in_stack_00000010 + 8));
  }
  iVar2 = *(int *)(in_stack_00000010 + 0x14);
  iVar10 = 0;
  iVar3 = in_stack_00000010;
  if (0 < *(int *)(in_stack_00000010 + 8)) {
    do {
      uVar1 = *(uint *)(*(int *)(iVar3 + 0x118) + 4);
      if (*(uint *)(iVar2 + 4) != uVar1) {
        uVar5 = *(uint *)(iVar2 + 4);
        uVar8 = (int)uVar5 >> 0x1f;
        uVar5 = uVar5 ^ uVar8;
        uVar6 = uVar5 / uVar1;
        if (0x7ffe < uVar6) {
          uVar6 = 0x7fff;
        }
        uVar8 = ((uint)(((ulonglong)uVar5 % (ulonglong)uVar1 << 0x20) / (ulonglong)uVar1) >> 0x10 |
                uVar6 << 0x10) ^ uVar8;
        iVar11 = 0;
        iVar9 = *(int *)(iVar3 + 0x118);
        puVar7 = (uint *)(*(int *)(iVar3 + 0x118) + 0x14);
        if (0 < *(int *)(iVar9 + 0x10)) {
          do {
            *puVar7 = (uint)((longlong)(int)uVar8 * (longlong)(int)*puVar7) >> 0x10 |
                      (int)((ulonglong)((longlong)(int)uVar8 * (longlong)(int)*puVar7) >> 0x20) <<
                      0x10;
            puVar7[1] = (uint)((longlong)(int)uVar8 * (longlong)(int)puVar7[1]) >> 0x10 |
                        (int)((ulonglong)((longlong)(int)uVar8 * (longlong)(int)puVar7[1]) >> 0x20)
                        << 0x10;
            puVar7[2] = (uint)((longlong)(int)uVar8 * (longlong)(int)puVar7[2]) >> 0x10 |
                        (int)((ulonglong)((longlong)(int)uVar8 * (longlong)(int)puVar7[2]) >> 0x20)
                        << 0x10;
            iVar11 = iVar11 + 1;
            puVar7 = puVar7 + 3;
          } while (iVar11 < *(int *)(iVar9 + 0x10));
        }
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar10 < *(int *)(in_stack_00000010 + 8));
  }
  return;
}


// Assembly code:
// 00501d40: PUSH EBX
//   Label: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
// 00501d41: PUSH ESI
// 00501d42: PUSH EDI
// 00501d43: PUSH EBP
// 00501d44: SUB ESP,0x8
// 00501d47: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00501d4b: CMP dword ptr [EAX + 0x14],0x0
// 00501d4f: JZ 0x00501e8e
//   XREF to: 00501e8e (CONDITIONAL_JUMP)
// 00501d55: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00501d55
//   XREF to: Stack[0x4] (READ)
// 00501d59: MOV ECX,dword ptr [EAX + 0x14]
// 00501d5c: PUSH ECX
// 00501d5d: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 00501d62: ADD ESP,0x4
// 00501d65: MOV EBP,EAX
// 00501d67: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00501d6b: MOV EAX,dword ptr [EAX + 0x14]
// 00501d6e: ADD EAX,EBP
// 00501d70: PUSH EAX
// 00501d71: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 00501d76: ADD ESP,0x4
// 00501d79: ADD EBP,EAX
// 00501d7b: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00501d7f: MOV EBX,dword ptr [EAX + 0x8]
// 00501d82: XOR ESI,ESI
// 00501d84: TEST EBX,EBX
// 00501d86: JLE 0x00501db8
//   XREF to: 00501db8 (CONDITIONAL_JUMP)
// 00501d88: LEA EDI,[EAX + 0x18]
// 00501d8b: MOV EBX,EAX
// 00501d8d: CMP dword ptr [EBX + 0x118],0x0
//   Label: LAB_00501d8d
// 00501d94: JNZ 0x00501da6
//   XREF to: 00501da6 (CONDITIONAL_JUMP)
// 00501d96: PUSH EBP
// 00501d97: PUSH EDI
// 00501d98: CALL engine_model.c_loadModelChunk_FUN_00528970
//   XREF to: 00528970 (UNCONDITIONAL_CALL)
// 00501d9d: ADD ESP,0x8
// 00501da0: MOV dword ptr [EBX + 0x118],EAX
// 00501da6: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00501da6
//   XREF to: Stack[0x4] (READ)
// 00501daa: ADD EBX,0x4
// 00501dad: INC ESI
// 00501dae: MOV EDX,dword ptr [EAX + 0x8]
// 00501db1: ADD EDI,0x10
// 00501db4: CMP ESI,EDX
// 00501db6: JL 0x00501d8d
//   XREF to: 00501d8d (CONDITIONAL_JUMP)
// 00501db8: MOV EBP,dword ptr [ESP + 0x1c]
//   Label: LAB_00501db8
//   XREF to: Stack[0x4] (READ)
// 00501dbc: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00501dc0: XOR EBX,EBX
// 00501dc2: MOV EBP,dword ptr [EBP + 0x14]
// 00501dc5: MOV ECX,dword ptr [EAX + 0x8]
// 00501dc8: ADD EBP,0x8
// 00501dcb: TEST ECX,ECX
// 00501dcd: JLE 0x00501e3f
//   XREF to: 00501e3f (CONDITIONAL_JUMP)
// 00501dcf: MOV ESI,EAX
// 00501dd1: MOV EDI,dword ptr [ESI + 0x118]
//   Label: LAB_00501dd1
// 00501dd7: MOV EAX,dword ptr [EDI + 0x8]
// 00501dda: ADD EDI,0x8
// 00501ddd: CMP EAX,0x2
// 00501de0: JZ 0x00501e05
//   XREF to: 00501e05 (CONDITIONAL_JUMP)
// 00501de2: MOV EDX,0x630ca8
//   XREF to: 00630ca8 (PARAM)
// 00501de7: MOV ECX,0xfd
// 00501dec: PUSH 0x630cbd
//   XREF to: 00630cbd (DATA)
// 00501df1: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00501df7: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00501dfd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00501e02: ADD ESP,0x4
// 00501e05: MOV EDX,dword ptr [EDI + 0x8]
//   Label: LAB_00501e05
// 00501e08: CMP EDX,dword ptr [EBP + 0x8]
// 00501e0b: JZ 0x00501e30
//   XREF to: 00501e30 (CONDITIONAL_JUMP)
// 00501e0d: MOV ECX,0x630ccb
//   XREF to: 00630ccb (PARAM)
// 00501e12: MOV EDI,0xfe
// 00501e17: PUSH 0x630ce0
//   XREF to: 00630ce0 (DATA)
// 00501e1c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00501e22: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00501e28: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00501e2d: ADD ESP,0x4
// 00501e30: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00501e30
//   XREF to: Stack[0x4] (READ)
// 00501e34: INC EBX
// 00501e35: MOV EDX,dword ptr [EAX + 0x8]
// 00501e38: ADD ESI,0x4
// 00501e3b: CMP EBX,EDX
// 00501e3d: JL 0x00501dd1
//   XREF to: 00501dd1 (CONDITIONAL_JUMP)
// 00501e3f: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00501e3f
//   XREF to: Stack[0x4] (READ)
// 00501e43: MOV EAX,dword ptr [EAX + 0x14]
// 00501e46: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00501e49: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00501e4d: XOR ECX,ECX
// 00501e4f: MOV EBX,dword ptr [EAX + 0x8]
// 00501e52: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00501e56: TEST EBX,EBX
// 00501e58: JLE 0x00501e86
//   XREF to: 00501e86 (CONDITIONAL_JUMP)
// 00501e5a: MOV EBP,EAX
// 00501e5c: MOV EAX,dword ptr [ESP]
//   Label: LAB_00501e5c
//   XREF to: Stack[-0x18] (DATA)
// 00501e5f: MOV EBX,dword ptr [EBP + 0x118]
// 00501e65: MOV EAX,dword ptr [EAX + 0x4]
// 00501e68: MOV ESI,dword ptr [EBX + 0x4]
// 00501e6b: CMP EAX,ESI
// 00501e6d: JNZ 0x00501ea6
//   XREF to: 00501ea6 (CONDITIONAL_JUMP)
// 00501e6f: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00501e6f
//   XREF to: Stack[-0x14] (READ)
// 00501e73: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00501e77: ADD EBP,0x4
// 00501e7a: INC EAX
// 00501e7b: MOV ECX,dword ptr [EDX + 0x8]
// 00501e7e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00501e82: CMP EAX,ECX
// 00501e84: JL 0x00501e5c
//   XREF to: 00501e5c (CONDITIONAL_JUMP)
// 00501e86: ADD ESP,0x8
//   Label: LAB_00501e86
// 00501e89: POP EBP
// 00501e8a: POP EDI
// 00501e8b: POP ESI
// 00501e8c: POP EBX
// 00501e8d: RET
// 00501e8e: ADD EAX,0x18
//   Label: LAB_00501e8e
// 00501e91: PUSH EAX
// 00501e92: CALL engine_model.c_loadModelFile_FUN_00527ec0
//   XREF to: 00527ec0 (UNCONDITIONAL_CALL)
// 00501e97: ADD ESP,0x4
// 00501e9a: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00501e9e: MOV dword ptr [EDX + 0x14],EAX
// 00501ea1: JMP 0x00501d55
//   XREF to: 00501d55 (UNCONDITIONAL_JUMP)
// 00501ea6: MOV EAX,dword ptr [ESP]
//   Label: LAB_00501ea6
//   XREF to: Stack[-0x18] (DATA)
// 00501ea9: MOV EBX,ESI
// 00501eab: MOV EAX,dword ptr [EAX + 0x4]
// 00501eae: CDQ
// 00501eaf: MOV ECX,EDX
// 00501eb1: XOR EAX,EDX
// 00501eb3: XOR EDX,EDX
// 00501eb5: DIV EBX
// 00501eb7: CMP EAX,0x7fff
// 00501ebc: JC 0x00501ec3
//   XREF to: 00501ec3 (CONDITIONAL_JUMP)
// 00501ebe: MOV EAX,0x7fff
// 00501ec3: PUSH EAX
//   Label: LAB_00501ec3
// 00501ec4: XOR EAX,EAX
// 00501ec6: DIV EBX
// 00501ec8: POP EDX
// 00501ec9: SHRD EAX,EDX,0x10
// 00501ecd: XOR EAX,ECX
// 00501ecf: XOR ESI,ESI
// 00501ed1: MOV EDI,dword ptr [EBP + 0x118]
// 00501ed7: MOV EBX,EAX
// 00501ed9: MOV ECX,dword ptr [EBP + 0x118]
// 00501edf: MOV EAX,dword ptr [EDI + 0x10]
// 00501ee2: ADD EDI,0x8
// 00501ee5: ADD ECX,0x14
// 00501ee8: TEST EAX,EAX
// 00501eea: JLE 0x00501e6f
//   XREF to: 00501e6f (CONDITIONAL_JUMP)
// 00501eec: MOV EAX,EBX
//   Label: LAB_00501eec
// 00501eee: MOV EDX,dword ptr [ECX]
// 00501ef0: IMUL EDX
// 00501ef2: SHRD EAX,EDX,0x10
// 00501ef6: MOV EDX,dword ptr [ECX + 0x4]
// 00501ef9: MOV dword ptr [ECX],EAX
// 00501efb: MOV EAX,EBX
// 00501efd: IMUL EDX
// 00501eff: SHRD EAX,EDX,0x10
// 00501f03: MOV EDX,dword ptr [ECX + 0x8]
// 00501f06: MOV dword ptr [ECX + 0x4],EAX
// 00501f09: MOV EAX,EBX
// 00501f0b: IMUL EDX
// 00501f0d: SHRD EAX,EDX,0x10
// 00501f11: MOV dword ptr [ECX + 0x8],EAX
// 00501f14: INC ESI
// 00501f15: MOV EDX,dword ptr [EDI + 0x8]
// 00501f18: ADD ECX,0xc
// 00501f1b: CMP ESI,EDX
// 00501f1d: JGE 0x00501e6f
//   XREF to: 00501e6f (CONDITIONAL_JUMP)
// 00501f23: JMP 0x00501eec
//   XREF to: 00501eec (UNCONDITIONAL_JUMP)
