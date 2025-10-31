// Name: shape_design.c_createKeyframeModel_FUN_00468320
// Address: 00468320
// Address Range: [[00468320, 004685d6]]
// Convention: __cdecl
// Signature: void shape_design.c_createKeyframeModel_FUN_00468320(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f6f0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_in_final_model_nam_0061cc90
//   TerminatedCString s_Enter_in_number_of_frame_0061ccad
//   TerminatedCString s_Enter_key_frame_of_objec_0061ccca
//   TerminatedCString s_Enter_in_time_per_frame__0061ccea
//   double g_MaxTimePerFrame = 127
//   TerminatedCString s_wb_0061cd1e
//   TerminatedCString s_models_0061cd21
//   double g_TimeConversionFactor = 65536
//   TerminatedCString s_shape_design_c_0061cd36
//   TerminatedCString s_Unable_to_write_keyframe_0061cd48
//   TerminatedCString s_shape_design_c_0061cd68
//   TerminatedCString s_Use_keyframe_0_to_center_0061cd7a
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fwrite_FUN_005fdc00
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_atoi_FUN_005ffef0
//   crt_string.c_strtod_FUN_005ff0f3
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_design.c_centerKeyframeModels_FUN_004681a0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_createKeyframeModel_FUN_00468320(void)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  byte *pbVar6;
  char *pcVar7;
  SMRGLKeyframe *pSVar8;
  byte bVar9;
  double dVar10;
  SMRGLKeyframe *in_stack_fffffdb0;
  char local_10c [80];
  char local_bc [80];
  byte local_6c [80];
  FILE *local_1c;
  int local_18;
  float local_14;
  
  bVar9 = 0;
  crt_memory_c_memset_FUN_005fde40(&stack0xfffffd9c,0,0x158);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_10c,0x28,0,0,"Enter in final model name : ");
  iVar4 = -1;
  pcVar7 = local_10c;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              ((char *)local_6c,2,0,0xb,"Enter in number of frames : ");
    iVar4 = -1;
    pbVar6 = local_6c;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
    } while (bVar2 != 0);
    if (((iVar4 != -2) && (iVar4 = crt_stdlib_c_atoi_FUN_005ffef0((char *)local_6c), 1 < iVar4)) &&
       (iVar4 < 0x11)) {
      for (local_18 = 0; local_18 < iVar4; local_18 = local_18 + 1) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        crt_stdio_c_sprintf_FUN_005fdbd0(local_bc,"Enter key frame of object %d : ");
        iVar4 = 0;
        engine_2d_c_getInputWithPrompt_FUN_004032c0((char *)local_6c,0x14,0,0,local_bc);
        iVar5 = -1;
        pbVar6 = local_6c;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
        } while (bVar2 != 0);
        if (iVar5 == -2) {
          return;
        }
        pbVar6 = local_6c;
        in_stack_fffffdb0 = (SMRGLKeyframe *)(&stack0xfffffdb4 + local_18 * 0x10);
        pSVar8 = in_stack_fffffdb0;
        do {
          bVar2 = *pbVar6;
          *(byte *)&(pSVar8->header).base.type = bVar2;
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          pbVar6 = pbVar6 + 2;
          *(byte *)((int)&(pSVar8->header).base.type + 1) = bVar2;
          pSVar8 = (SMRGLKeyframe *)((int)&(pSVar8->header).base.type + 2);
        } while (bVar2 != 0);
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)local_6c,0x14,0,0,"Enter in time per frame in decimal : ");
      iVar4 = -1;
      pbVar6 = local_6c;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
      } while (bVar2 != 0);
      if (iVar4 != -2) {
        dVar10 = crt_string_c_strtod_FUN_005ff0f3((char *)in_stack_fffffdb0);
        local_14 = (float)dVar10;
        if (0.0 < local_14) {
          fVar3 = (float)g_MaxTimePerFrame;
          if (local_14 < fVar3) {
            crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                        CONCAT22((short)((ulonglong)dVar10 >> 0x10),
                                                 (ushort)(local_14 < fVar3) << 8 |
                                                 (ushort)(NAN(local_14) || NAN(fVar3)) << 10 |
                                                 (ushort)(local_14 == fVar3) << 0xe)));
            local_1c = engine_dosio_c_getFile_FUN_00481a50
                                 ("models",local_10c,"wb");
            if (local_1c == (FILE *)0x0) {
              g_CurrentFilename = "..\\shape\\design.c";
              g_CurrentLineNumber = 0x2277;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write keyframed model");
            }
            crt_stdio_c_fwrite_FUN_005fdc00(&stack0xfffffd9c,1,0x158,local_1c);
            local_18 = 0;
            crt_stdio_c_fwrite_FUN_005fdc00(&local_18,1,4,local_1c);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\shape\\design.c",0x227c);
            wincore_windll_cpp_clearScreen_FUN_005b3e70();
            engine_2d_c_getInputWithPrompt_FUN_004032c0
                      ((char *)local_6c,1,0,0,"Use keyframe 0 to center (Y/N) ? ");
            iVar4 = crt_ctype_c_toupper_FUN_005ff9e0((uint)local_6c[0]);
            if (iVar4 == 0x59) {
              shape_design_c_centerKeyframeModels_FUN_004681a0
                        ((SMRGLKeyframeModel *)&stack0xfffffd9c);
            }
          }
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00468320: PUSH EBX
//   Label: shape_design.c_createKeyframeModel_FUN_00468320
// 00468321: PUSH ESI
// 00468322: PUSH EDI
// 00468323: PUSH EBP
// 00468324: MOV EBP,ESP
// 00468326: SUB ESP,0x25c
// 0046832c: PUSH 0x158
// 00468331: PUSH 0x0
// 00468333: LEA ECX,[EBP + 0xfffffdac]
//   XREF to: Stack[-0x264] (DATA)
// 00468339: PUSH ECX
// 0046833a: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0046833f: ADD ESP,0xc
// 00468342: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00468347: MOV ECX,0x61cc90
//   XREF to: 0061cc90 (DATA)
// 0046834c: PUSH ECX
//   XREF to: 0061cc90 (DATA)
// 0046834d: PUSH 0x0
// 0046834f: PUSH 0x0
// 00468351: PUSH 0x28
// 00468353: LEA ECX,[EBP + 0xffffff04]
//   XREF to: Stack[-0x10c] (DATA)
// 00468359: PUSH ECX
// 0046835a: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0046835f: ADD ESP,0x14
// 00468362: LEA EDI,[EBP + 0xffffff04]
//   XREF to: Stack[-0x10c] (DATA)
// 00468368: SUB ECX,ECX
// 0046836a: DEC ECX
// 0046836b: XOR EAX,EAX
// 0046836d: SCASB.REPNE ES:EDI
// 0046836f: NOT ECX
// 00468371: DEC ECX
// 00468372: TEST ECX,ECX
// 00468374: JNZ 0x0046837b
//   XREF to: 0046837b (CONDITIONAL_JUMP)
// 00468376: JMP 0x004685d0
//   XREF to: 004685d0 (UNCONDITIONAL_JUMP)
// 0046837b: MOV ECX,0x61ccad
//   Label: LAB_0046837b
//   XREF to: 0061ccad (DATA)
// 00468380: PUSH ECX
//   XREF to: 0061ccad (DATA)
// 00468381: PUSH 0xb
// 00468383: PUSH 0x0
// 00468385: PUSH 0x2
// 00468387: LEA ECX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0046838a: PUSH ECX
// 0046838b: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00468390: ADD ESP,0x14
// 00468393: LEA EDI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 00468396: SUB ECX,ECX
// 00468398: DEC ECX
// 00468399: XOR EAX,EAX
// 0046839b: SCASB.REPNE ES:EDI
// 0046839d: NOT ECX
// 0046839f: DEC ECX
// 004683a0: TEST ECX,ECX
// 004683a2: JNZ 0x004683a9
//   XREF to: 004683a9 (CONDITIONAL_JUMP)
// 004683a4: JMP 0x004685d0
//   XREF to: 004685d0 (UNCONDITIONAL_JUMP)
// 004683a9: LEA EAX,[EBP + -0x5c]
//   Label: LAB_004683a9
//   XREF to: Stack[-0x6c] (DATA)
// 004683ac: PUSH EAX
// 004683ad: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 004683b2: ADD ESP,0x4
// 004683b5: MOV dword ptr [EBP + 0xfffffdb4],EAX
//   XREF to: Stack[-0x25c] (WRITE)
// 004683bb: CMP dword ptr [EBP + 0xfffffdb4],0x2
//   XREF to: Stack[-0x25c] (READ)
// 004683c2: JL 0x004683cd
//   XREF to: 004683cd (CONDITIONAL_JUMP)
// 004683c4: CMP dword ptr [EBP + 0xfffffdb4],0x10
//   XREF to: Stack[-0x25c] (READ)
// 004683cb: JLE 0x004683d2
//   XREF to: 004683d2 (CONDITIONAL_JUMP)
// 004683cd: JMP 0x004685d0
//   Label: LAB_004683cd
//   XREF to: 004685d0 (UNCONDITIONAL_JUMP)
// 004683d2: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_004683d2
//   XREF to: Stack[-0x18] (WRITE)
// 004683d9: JMP 0x004683e1
//   XREF to: 004683e1 (UNCONDITIONAL_JUMP)
// 004683db: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_004683db
//   XREF to: Stack[-0x18] (READ)
// 004683de: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 004683e1: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_004683e1
//   XREF to: Stack[-0x18] (READ)
// 004683e4: CMP EAX,dword ptr [EBP + 0xfffffdb4]
//   XREF to: Stack[-0x25c] (READ)
// 004683ea: JGE 0x0046846e
//   XREF to: 0046846e (CONDITIONAL_JUMP)
// 004683f0: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004683f5: MOV ECX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004683f8: INC ECX
// 004683f9: PUSH ECX
// 004683fa: MOV ECX,0x61ccca
//   XREF to: 0061ccca (DATA)
// 004683ff: PUSH ECX
//   XREF to: 0061ccca (DATA)
// 00468400: LEA ECX,[EBP + 0xffffff54]
//   XREF to: Stack[-0xbc] (DATA)
// 00468406: PUSH ECX
// 00468407: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0046840c: ADD ESP,0xc
// 0046840f: LEA ECX,[EBP + 0xffffff54]
//   XREF to: Stack[-0xbc] (DATA)
// 00468415: PUSH ECX
// 00468416: PUSH 0x0
// 00468418: PUSH 0x0
// 0046841a: PUSH 0x14
// 0046841c: LEA ECX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0046841f: PUSH ECX
// 00468420: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00468425: ADD ESP,0x14
// 00468428: LEA EDI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0046842b: SUB ECX,ECX
// 0046842d: DEC ECX
// 0046842e: XOR EAX,EAX
// 00468430: SCASB.REPNE ES:EDI
// 00468432: NOT ECX
// 00468434: DEC ECX
// 00468435: TEST ECX,ECX
// 00468437: JNZ 0x0046843e
//   XREF to: 0046843e (CONDITIONAL_JUMP)
// 00468439: JMP 0x004685d0
//   XREF to: 004685d0 (UNCONDITIONAL_JUMP)
// 0046843e: LEA ESI,[EBP + -0x5c]
//   Label: LAB_0046843e
//   XREF to: Stack[-0x6c] (DATA)
// 00468441: MOV EDI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468444: SHL EDI,0x4
// 00468447: LEA EAX,[EBP + 0xfffffdc4]
//   XREF to: Stack[-0x24c] (DATA)
// 0046844d: ADD EDI,EAX
// 0046844f: PUSH EDI
// 00468450: MOV AL,byte ptr [ESI]
//   Label: LAB_00468450
//   XREF to: Stack[-0x6c] (DATA)
// 00468452: MOV byte ptr [EDI],AL
// 00468454: CMP AL,0x0
// 00468456: JZ 0x00468468
//   XREF to: 00468468 (CONDITIONAL_JUMP)
// 00468458: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x6b] (READ)
// 0046845b: ADD ESI,0x2
// 0046845e: MOV byte ptr [EDI + 0x1],AL
// 00468461: ADD EDI,0x2
// 00468464: CMP AL,0x0
// 00468466: JNZ 0x00468450
//   XREF to: 00468450 (CONDITIONAL_JUMP)
// 00468468: POP EDI
//   Label: LAB_00468468
// 00468469: JMP 0x004683db
//   XREF to: 004683db (UNCONDITIONAL_JUMP)
// 0046846e: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0046846e
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00468473: MOV ECX,0x61ccea
//   XREF to: 0061ccea (DATA)
// 00468478: PUSH ECX
//   XREF to: 0061ccea (DATA)
// 00468479: PUSH 0x0
// 0046847b: PUSH 0x0
// 0046847d: PUSH 0x14
// 0046847f: LEA ECX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 00468482: PUSH ECX
// 00468483: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00468488: ADD ESP,0x14
// 0046848b: LEA EDI,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0046848e: SUB ECX,ECX
// 00468490: DEC ECX
// 00468491: XOR EAX,EAX
// 00468493: SCASB.REPNE ES:EDI
// 00468495: NOT ECX
// 00468497: DEC ECX
// 00468498: TEST ECX,ECX
// 0046849a: JNZ 0x004684a1
//   XREF to: 004684a1 (CONDITIONAL_JUMP)
// 0046849c: JMP 0x004685d0
//   XREF to: 004685d0 (UNCONDITIONAL_JUMP)
// 004684a1: LEA EAX,[EBP + -0x5c]
//   Label: LAB_004684a1
//   XREF to: Stack[-0x6c] (DATA)
// 004684a4: PUSH EAX
// 004684a5: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 004684aa: MOV dword ptr [EBP + 0xfffffda4],EAX
//   XREF to: Stack[-0x26c] (WRITE)
// 004684b0: MOV dword ptr [EBP + 0xfffffda8],EDX
//   XREF to: Stack[-0x268] (WRITE)
// 004684b6: FLD double ptr [EBP + 0xfffffda4]
//   XREF to: Stack[-0x26c] (READ)
// 004684bc: ADD ESP,0x4
// 004684bf: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 004684c2: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004684c5: FLDZ
// 004684c7: FCOMPP
// 004684c9: FNSTSW AX
// 004684cb: SAHF
// 004684cc: JNC 0x004684dc
//   XREF to: 004684dc (CONDITIONAL_JUMP)
// 004684ce: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004684d1: FCOMP double ptr [0x0061cd16]
//   XREF to: 0061cd16 (READ)
// 004684d7: FNSTSW AX
// 004684d9: SAHF
// 004684da: JC 0x004684e1
//   XREF to: 004684e1 (CONDITIONAL_JUMP)
// 004684dc: JMP 0x004685d0
//   Label: LAB_004684dc
//   XREF to: 004685d0 (UNCONDITIONAL_JUMP)
// 004684e1: FLD float ptr [EBP + -0x4]
//   Label: LAB_004684e1
//   XREF to: Stack[-0x14] (READ)
// 004684e4: FMUL double ptr [0x0061cd2e]
//   XREF to: 0061cd2e (READ)
// 004684ea: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004684ef: FISTP dword ptr [EBP + 0xfffffdb8]
//   XREF to: Stack[-0x258] (WRITE)
// 004684f5: MOV dword ptr [EBP + 0xfffffdac],0x20
//   XREF to: Stack[-0x264] (WRITE)
// 004684ff: MOV EAX,0x61cd1e
//   XREF to: 0061cd1e (DATA)
// 00468504: PUSH EAX
//   XREF to: 0061cd1e (DATA)
// 00468505: LEA EAX,[EBP + 0xffffff04]
//   XREF to: Stack[-0x10c] (DATA)
// 0046850b: PUSH EAX
// 0046850c: MOV EAX,0x61cd21
//   XREF to: 0061cd21 (PARAM)
// 00468511: PUSH EAX
//   XREF to: 0061cd21 (DATA)
// 00468512: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00468517: ADD ESP,0xc
// 0046851a: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046851d: CMP dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (READ)
// 00468521: JNZ 0x00468545
//   XREF to: 00468545 (CONDITIONAL_JUMP)
// 00468523: MOV dword ptr [0x02f0ca48],0x61cd36
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061cd36 (DATA)
// 0046852d: MOV dword ptr [0x02f0ca4c],0x2277
//   XREF to: 02f0ca4c (WRITE)
// 00468537: MOV EAX,0x61cd48
//   XREF to: 0061cd48 (PARAM)
// 0046853c: PUSH EAX
//   XREF to: 0061cd48 (DATA)
// 0046853d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00468542: ADD ESP,0x4
// 00468545: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00468545
//   XREF to: Stack[-0x1c] (READ)
// 00468548: PUSH EAX
// 00468549: PUSH 0x158
// 0046854e: PUSH 0x1
// 00468550: LEA EAX,[EBP + 0xfffffdac]
//   XREF to: Stack[-0x264] (DATA)
// 00468556: PUSH EAX
// 00468557: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0046855c: ADD ESP,0x10
// 0046855f: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00468566: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468569: PUSH EAX
// 0046856a: PUSH 0x4
// 0046856c: PUSH 0x1
// 0046856e: LEA EAX,[EBP + -0x8]
//   XREF to: Stack[-0x18] (DATA)
// 00468571: PUSH EAX
// 00468572: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00468577: ADD ESP,0x10
// 0046857a: PUSH 0x227c
// 0046857f: MOV EAX,0x61cd68
//   XREF to: 0061cd68 (DATA)
// 00468584: PUSH EAX
//   XREF to: 0061cd68 (DATA)
// 00468585: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468588: PUSH EAX
// 00468589: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0046858e: ADD ESP,0xc
// 00468591: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00468596: MOV EAX,0x61cd7a
//   XREF to: 0061cd7a (DATA)
// 0046859b: PUSH EAX
//   XREF to: 0061cd7a (DATA)
// 0046859c: PUSH 0x0
// 0046859e: PUSH 0x0
// 004685a0: PUSH 0x1
// 004685a2: LEA EAX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 004685a5: PUSH EAX
// 004685a6: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 004685ab: ADD ESP,0x14
// 004685ae: XOR EAX,EAX
// 004685b0: MOV AL,byte ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (READ)
// 004685b3: PUSH EAX
// 004685b4: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004685b9: ADD ESP,0x4
// 004685bc: CMP EAX,0x59
// 004685bf: JNZ 0x004685d0
//   XREF to: 004685d0 (CONDITIONAL_JUMP)
// 004685c1: LEA EAX,[EBP + 0xfffffdac]
//   XREF to: Stack[-0x264] (DATA)
// 004685c7: PUSH EAX
// 004685c8: CALL shape_design.c_centerKeyframeModels_FUN_004681a0
//   XREF to: 004681a0 (UNCONDITIONAL_CALL)
// 004685cd: ADD ESP,0x4
// 004685d0: MOV ESP,EBP
//   Label: LAB_004685d0
// 004685d2: POP EBP
// 004685d3: POP EDI
// 004685d4: POP ESI
// 004685d5: POP EBX
// 004685d6: RET
