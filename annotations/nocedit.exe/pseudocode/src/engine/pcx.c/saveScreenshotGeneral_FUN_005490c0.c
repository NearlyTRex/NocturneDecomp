// Name: engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
// Address: 005490c0
// Address Range: [[005490c0, 00549312]]
// Convention: __cdecl
// Signature: void engine_pcx.c_saveScreenshotGeneral_FUN_005490c0(char * filename)
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043cb3a [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d57f [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da49b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00597394 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pcx_c_0063ec0c
//   TerminatedCString s_wb_0063ec1c
//   TerminatedCString s_engine_pcx_c_0063ec1f
//   TerminatedCString s_Cannot_write_PCX_0063ec2f
//   TerminatedCString s_engine_pcx_c_0063ec41
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f49
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_fwrite_FUN_005fdc00
//   engine_pcx.c_saveScreenRaw16_FUN_00548d20
//   engine_pcx.c_saveScreenRaw32_FUN_00548f00
//   engine_pcx.c_writePCXScanline_FUN_00548c50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(char *filename)

{
  byte bVar1;
  FILE *file;
  BADSPACEBASE *in_ESP;
  int iVar2;
  uint character;
  short sStack_7c;
  short sStack_7a;
  undefined1 uStack_43;
  short local_42;
  undefined2 local_40;
  short sStack_3e;
  short sStack_3c;
  
  if (g_BitsPerPixel == 0x10) {
    engine_pcx_c_saveScreenRaw16_FUN_00548d20(filename);
    return;
  }
  if (g_BitsPerPixel == 0x20) {
    engine_pcx_c_saveScreenRaw32_FUN_00548f00(filename);
    return;
  }
  crt_memory_c_memset_FUN_005fde40(&stack0xffffff78,0,0x80);
  local_40 = 1;
  sStack_7c = (short)g_WindowWidth + -1;
  uStack_43 = 1;
  sStack_7a = (short)g_WindowHeight + -1;
  local_42 = (short)g_WindowWidth;
  sStack_3e = (short)g_WindowWidth;
  sStack_3c = (short)g_WindowHeight;
  if ((g_WindowWidth == 0x280) && (g_WindowHeight == 0xf0)) {
    sStack_3c = (short)g_WindowHeight * 2;
    sStack_7a = (short)g_WindowHeight * 2 + -1;
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (filename,(char *)0x0,"wb","..\\engine\\pcx.c",0xec);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pcx.c";
    g_CurrentLineNumber = 0xed;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot write .PCX");
  }
  iVar2 = 0;
  crt_stdio_c_fwrite_FUN_005fdc00(&sStack_7c,1,0x80,file);
  if (0 < g_WindowHeight) {
    do {
      engine_pcx_c_writePCXScanline_FUN_00548c50(iVar2,file);
      if ((g_WindowWidth == 0x280) && (g_WindowHeight == 0xf0)) {
        engine_pcx_c_writePCXScanline_FUN_00548c50(iVar2,file);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < g_WindowHeight);
  }
  if (((file->_flag & 0x400) == 0) && (1 < file->_bufsize - file->_cnt)) {
    *file->_ptr = '\f';
    if (*file->_ptr != '\n') {
      bVar1 = *(byte *)((int)&file->_flag + 1);
      file->_cnt = file->_cnt + 1;
      file->_ptr = file->_ptr + 1;
      *(byte *)((int)&file->_flag + 1) = bVar1 | 0x10;
      goto LAB_0054923a;
    }
    iVar2 = 10;
  }
  else {
    iVar2 = 0xc;
  }
  crt_stdio_c_fputc_FUN_006007a0(iVar2,file);
LAB_0054923a:
  iVar2 = 0;
  do {
    if (((file->_flag & 0x400) == 0) && (1 < file->_bufsize - file->_cnt)) {
      *file->_ptr = g_SourcePaletteData[iVar2];
      if (*file->_ptr == '\n') {
        character = 10;
        goto LAB_00549250;
      }
      bVar1 = *(byte *)((int)&file->_flag + 1);
      file->_cnt = file->_cnt + 1;
      file->_ptr = file->_ptr + 1;
      *(byte *)((int)&file->_flag + 1) = bVar1 | 0x10;
    }
    else {
      character = (uint)(byte)g_SourcePaletteData[iVar2];
LAB_00549250:
      crt_stdio_c_fputc_FUN_006007a0(character,file);
    }
    iVar2 = iVar2 + 1;
    if (0x2ff < iVar2) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pcx.c",0x104);
      return;
    }
  } while( true );
}


// Assembly code:
// 005490c0: PUSH EBX
//   Label: engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
// 005490c1: PUSH EBP
// 005490c2: SUB ESP,0x80
// 005490c8: MOV EBX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 005490cf: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 005490d5: CMP EDX,0x10
// 005490d8: JZ 0x0054927f
//   XREF to: 0054927f (CONDITIONAL_JUMP)
// 005490de: CMP EDX,0x20
// 005490e1: JZ 0x0054928a
//   XREF to: 0054928a (CONDITIONAL_JUMP)
// 005490e7: PUSH EDI
// 005490e8: PUSH ESI
// 005490e9: PUSH 0x80
// 005490ee: PUSH 0x0
// 005490f0: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x88] (DATA)
// 005490f4: PUSH EAX
// 005490f5: MOV ESI,0x1
// 005490fa: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005490ff: MOV AH,0xa
// 00549101: MOV DL,0x5
// 00549103: ADD ESP,0xc
// 00549106: MOV CL,0x8
// 00549108: MOV byte ptr [ESP + 0x8],AH
//   XREF to: Stack[-0x88] (WRITE)
// 0054910c: MOV byte ptr [ESP + 0x9],DL
//   XREF to: Stack[-0x87] (WRITE)
// 00549110: MOV byte ptr [ESP + 0xb],CL
//   XREF to: Stack[-0x85] (WRITE)
// 00549114: MOV word ptr [ESP + 0x4c],SI
//   XREF to: Stack[-0x44] (WRITE)
// 00549119: MOV DH,0x1
// 0054911b: MOV CH,0x1
// 0054911d: MOV AX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00549123: MOV ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00549129: DEC EAX
// 0054912a: MOV byte ptr [ESP + 0xa],DH
//   XREF to: Stack[-0x86] (WRITE)
// 0054912e: MOV word ptr [ESP + 0x10],AX
//   XREF to: Stack[-0x80] (WRITE)
// 00549133: MOV AX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00549139: MOV byte ptr [ESP + 0x49],CH
//   XREF to: Stack[-0x47] (WRITE)
// 0054913d: DEC EAX
// 0054913e: XOR EDX,EDX
// 00549140: MOV word ptr [ESP + 0x12],AX
//   XREF to: Stack[-0x7e] (WRITE)
// 00549145: MOV AX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0054914b: MOV word ptr [ESP + 0xc],DX
//   XREF to: Stack[-0x84] (WRITE)
// 00549150: MOV word ptr [ESP + 0x4a],AX
//   XREF to: Stack[-0x46] (WRITE)
// 00549155: MOV word ptr [ESP + 0x4e],AX
//   XREF to: Stack[-0x42] (WRITE)
// 0054915a: MOV AX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00549160: MOV word ptr [ESP + 0xe],DX
//   XREF to: Stack[-0x82] (WRITE)
// 00549165: MOV word ptr [ESP + 0x50],AX
//   XREF to: Stack[-0x40] (WRITE)
// 0054916a: CMP ESI,0x280
// 00549170: JNZ 0x0054918f
//   XREF to: 0054918f (CONDITIONAL_JUMP)
// 00549172: CMP dword ptr [0x00679398],0xf0
//   XREF to: 00679398 (READ)
// 0054917c: JNZ 0x0054918f
//   XREF to: 0054918f (CONDITIONAL_JUMP)
// 0054917e: MOV EDI,EAX
// 00549180: ADD EDI,EAX
// 00549182: ADD EAX,EAX
// 00549184: DEC EAX
// 00549185: MOV word ptr [ESP + 0x50],DI
//   XREF to: Stack[-0x40] (WRITE)
// 0054918a: MOV word ptr [ESP + 0x12],AX
//   XREF to: Stack[-0x7e] (WRITE)
// 0054918f: PUSH 0xec
//   Label: LAB_0054918f
// 00549194: PUSH 0x63ec0c
//   XREF to: 0063ec0c (DATA)
// 00549199: PUSH 0x63ec1c
//   XREF to: 0063ec1c (DATA)
// 0054919e: PUSH 0x0
// 005491a0: PUSH EBX
// 005491a1: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005491a6: ADD ESP,0x14
// 005491a9: MOV EBX,EAX
// 005491ab: TEST EAX,EAX
// 005491ad: JNZ 0x005491d1
//   XREF to: 005491d1 (CONDITIONAL_JUMP)
// 005491af: MOV EBP,0x63ec1f
//   XREF to: 0063ec1f (DATA)
// 005491b4: MOV EAX,0xed
// 005491b9: PUSH 0x63ec2f
//   XREF to: 0063ec2f (DATA)
// 005491be: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005491c4: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005491c9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005491ce: ADD ESP,0x4
// 005491d1: PUSH EBX
//   Label: LAB_005491d1
// 005491d2: PUSH 0x80
// 005491d7: PUSH 0x1
// 005491d9: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x88] (DATA)
// 005491dd: PUSH EAX
// 005491de: XOR ESI,ESI
// 005491e0: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 005491e5: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005491eb: ADD ESP,0x10
// 005491ee: TEST EDX,EDX
// 005491f0: JLE 0x00549229
//   XREF to: 00549229 (CONDITIONAL_JUMP)
// 005491f2: PUSH EBX
//   Label: LAB_005491f2
// 005491f3: PUSH ESI
// 005491f4: CALL engine_pcx.c_writePCXScanline_FUN_00548c50
//   XREF to: 00548c50 (UNCONDITIONAL_CALL)
// 005491f9: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005491fe: ADD ESP,0x8
// 00549201: CMP EAX,0x280
// 00549206: JNZ 0x0054921e
//   XREF to: 0054921e (CONDITIONAL_JUMP)
// 00549208: CMP dword ptr [0x00679398],0xf0
//   XREF to: 00679398 (READ)
// 00549212: JNZ 0x0054921e
//   XREF to: 0054921e (CONDITIONAL_JUMP)
// 00549214: PUSH EBX
// 00549215: PUSH ESI
// 00549216: CALL engine_pcx.c_writePCXScanline_FUN_00548c50
//   XREF to: 00548c50 (UNCONDITIONAL_CALL)
// 0054921b: ADD ESP,0x8
// 0054921e: MOV ECX,dword ptr [0x00679398]
//   Label: LAB_0054921e
//   XREF to: 00679398 (READ)
// 00549224: INC ESI
// 00549225: CMP ESI,ECX
// 00549227: JL 0x005491f2
//   XREF to: 005491f2 (CONDITIONAL_JUMP)
// 00549229: TEST byte ptr [EBX + 0xd],0x4
//   Label: LAB_00549229
// 0054922d: JZ 0x00549295
//   XREF to: 00549295 (CONDITIONAL_JUMP)
// 0054922f: PUSH EBX
//   Label: LAB_0054922f
// 00549230: PUSH 0xc
// 00549232: CALL crt_stdio.c_fputc_FUN_006007a0
//   Label: LAB_00549232
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00549237: ADD ESP,0x8
// 0054923a: XOR ESI,ESI
//   Label: LAB_0054923a
// 0054923c: TEST byte ptr [EBX + 0xd],0x4
//   Label: LAB_0054923c
// 00549240: JZ 0x005492d0
//   XREF to: 005492d0 (CONDITIONAL_JUMP)
// 00549246: XOR EAX,EAX
//   Label: LAB_00549246
// 00549248: PUSH EBX
// 00549249: MOV AL,byte ptr [ESI + 0x2d01f48]
//   XREF to: 02d01f48 (READ)
//   XREF to: 02d01f49 (READ)
// 0054924f: PUSH EAX
// 00549250: CALL crt_stdio.c_fputc_FUN_006007a0
//   Label: LAB_00549250
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00549255: ADD ESP,0x8
// 00549258: INC ESI
//   Label: LAB_00549258
// 00549259: CMP ESI,0x300
// 0054925f: JL 0x0054923c
//   XREF to: 0054923c (CONDITIONAL_JUMP)
// 00549261: PUSH 0x104
// 00549266: PUSH 0x63ec41
//   XREF to: 0063ec41 (DATA)
// 0054926b: PUSH EBX
// 0054926c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00549271: ADD ESP,0xc
// 00549274: POP ESI
// 00549275: POP EDI
// 00549276: ADD ESP,0x80
//   Label: LAB_00549276
// 0054927c: POP EBP
// 0054927d: POP EBX
// 0054927e: RET
// 0054927f: PUSH EBX
//   Label: LAB_0054927f
// 00549280: CALL engine_pcx.c_saveScreenRaw16_FUN_00548d20
//   XREF to: 00548d20 (UNCONDITIONAL_CALL)
// 00549285: ADD ESP,0x4
// 00549288: JMP 0x00549276
//   XREF to: 00549276 (UNCONDITIONAL_JUMP)
// 0054928a: PUSH EBX
//   Label: LAB_0054928a
// 0054928b: CALL engine_pcx.c_saveScreenRaw32_FUN_00548f00
//   XREF to: 00548f00 (UNCONDITIONAL_CALL)
// 00549290: ADD ESP,0x4
// 00549293: JMP 0x00549276
//   XREF to: 00549276 (UNCONDITIONAL_JUMP)
// 00549295: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_00549295
// 00549298: MOV EAX,dword ptr [EBX + 0x14]
// 0054929b: SUB EAX,ESI
// 0054929d: CMP EAX,0x1
// 005492a0: JBE 0x0054922f
//   XREF to: 0054922f (CONDITIONAL_JUMP)
// 005492a2: MOV EAX,dword ptr [EBX]
// 005492a4: MOV byte ptr [EAX],0xc
// 005492a7: MOV EAX,dword ptr [EBX]
// 005492a9: CMP byte ptr [EAX],0xa
// 005492ac: JZ 0x005492c8
//   XREF to: 005492c8 (CONDITIONAL_JUMP)
// 005492ae: MOV EDI,dword ptr [EBX + 0x4]
// 005492b1: MOV EBP,dword ptr [EBX]
// 005492b3: MOV DH,byte ptr [EBX + 0xd]
// 005492b6: INC EDI
// 005492b7: INC EBP
// 005492b8: MOV dword ptr [EBX + 0x4],EDI
// 005492bb: OR DH,0x10
// 005492be: MOV dword ptr [EBX],EBP
// 005492c0: MOV byte ptr [EBX + 0xd],DH
// 005492c3: JMP 0x0054923a
//   XREF to: 0054923a (UNCONDITIONAL_JUMP)
// 005492c8: PUSH EBX
//   Label: LAB_005492c8
// 005492c9: PUSH 0xa
// 005492cb: JMP 0x00549232
//   XREF to: 00549232 (UNCONDITIONAL_JUMP)
// 005492d0: MOV ECX,dword ptr [EBX + 0x4]
//   Label: LAB_005492d0
// 005492d3: MOV EAX,dword ptr [EBX + 0x14]
// 005492d6: SUB EAX,ECX
// 005492d8: CMP EAX,0x1
// 005492db: JBE 0x00549246
//   XREF to: 00549246 (CONDITIONAL_JUMP)
// 005492e1: MOV EDX,dword ptr [EBX]
// 005492e3: MOV AL,byte ptr [ESI + 0x2d01f48]
//   XREF to: 02d01f48 (READ)
//   XREF to: 02d01f49 (READ)
// 005492e9: MOV byte ptr [EDX],AL
// 005492eb: MOV EAX,dword ptr [EBX]
// 005492ed: CMP byte ptr [EAX],0xa
// 005492f0: JZ 0x0054930b
//   XREF to: 0054930b (CONDITIONAL_JUMP)
// 005492f2: MOV EDI,dword ptr [EBX + 0x4]
// 005492f5: MOV EBP,dword ptr [EBX]
// 005492f7: MOV AL,byte ptr [EBX + 0xd]
// 005492fa: INC EDI
// 005492fb: INC EBP
// 005492fc: MOV dword ptr [EBX + 0x4],EDI
// 005492ff: OR AL,0x10
// 00549301: MOV dword ptr [EBX],EBP
// 00549303: MOV byte ptr [EBX + 0xd],AL
// 00549306: JMP 0x00549258
//   XREF to: 00549258 (UNCONDITIONAL_JUMP)
// 0054930b: PUSH EBX
//   Label: LAB_0054930b
// 0054930c: PUSH 0xa
// 0054930e: JMP 0x00549250
//   XREF to: 00549250 (UNCONDITIONAL_JUMP)
