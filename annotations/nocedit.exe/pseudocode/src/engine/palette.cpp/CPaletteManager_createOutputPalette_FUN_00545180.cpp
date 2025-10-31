// Name: engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180
// Address: 00545180
// Address Range: [[00545180, 00545643]]
// Convention: unknown
// Signature: undefined engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180()
// Globals:
//   TerminatedCString s_engine_palette_cpp_0063e4c8
//   TerminatedCString s_engine_palette_cpp_0063e4de
//   TerminatedCString s_paletteManager_createOut_0063e4f4
//   TerminatedCString s_engine_palette_cpp_0063e532
//   TerminatedCString s_engine_palette_cpp_0063e548
//   TerminatedCString s_paletteManager_createOut_0063e55e
//   TerminatedCString s_ACT_0063e597
//   undefined4 s_ACT_0063e598
//   undefined4 s_CT_0063e599
//   undefined4 s_T_0063e59a
//   TerminatedCString s_rb_0063e59c
//   TerminatedCString s_art_0063e59f
//   TerminatedCString s_rb_0063e5a3
//   undefined4 DAT_0063e5a6
//   TerminatedCString s_engine_palette_cpp_0063e5a7
//   TerminatedCString s_art_0063e5bd
//   undefined4 DAT_0063e5c1
//   TerminatedCString s_rb_0063e5c2
//   TerminatedCString s_art_0063e5c5
//   TerminatedCString s_rb_0063e5c9
//   undefined4 DAT_0063e5cc
//   TerminatedCString s_engine_palette_cpp_0063e5cd
//   TerminatedCString s_paletteManager_createOut_0063e5e3
//   TerminatedCString s_engine_palette_cpp_0063e620
//   TerminatedCString s_paletteManager_createOut_0063e636
//   TerminatedCString s_engine_palette_cpp_0063e66c
//   TerminatedCString s_wb_0063e682
//   TerminatedCString s_art_0063e685
//   TerminatedCString s_wb_0063e689
//   undefined4 DAT_0063e68c
//   TerminatedCString s_engine_palette_cpp_0063e68d
//   TerminatedCString s_paletteManager_createOut_0063e6a3
//   TerminatedCString s_engine_palette_cpp_0063e6e2
//   TerminatedCString s_engine_palette_cpp_0063e6f8
//   TerminatedCString s_engine_palette_cpp_0063e70e
//   char* g_CurrentDebugFilename = 0067d200
//   uchar[768] g_DefaultPalette
//   undefined4 UCHAR_ARRAY_02d0224c
//   undefined4 UCHAR_ARRAY_02d0224d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   undefined4 DAT_02fd8d20
//   undefined4 DAT_02fd8d20+1
//   undefined4 DAT_02fd8d20+2
//   undefined1 DAT_02fd8d24
//   undefined1 DAT_02fd8d25
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fwrite_FUN_005fdc00
//   engine_colquant.c_FUN_004406c0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

undefined1 * engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  void *pvVar5;
  undefined1 *puVar6;
  FILE *pFVar7;
  int iVar8;
  uint uVar9;
  BADSPACEBASE *in_ESP;
  uint uVar10;
  char *pcVar11;
  uchar *puVar12;
  char *pcVar13;
  uchar *puVar14;
  byte bVar15;
  int unaff_retaddr;
  int in_stack_00000004;
  void *in_stack_0000000c;
  int *in_stack_00000010;
  char *in_stack_00000018;
  int local_10;
  int local_c;
  uint uVar16;
  
  bVar15 = 0;
  pvVar5 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8308,"..\\engine\\palette.cpp",0xb4);
  uVar10 = 0;
  if (pvVar5 == (void *)0x0) {
    g_CurrentFilename = "..\\engine\\palette.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create mapper");
  }
  puVar6 = (undefined1 *)
           shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (*(SIZE_T *)((int)in_stack_0000000c + 8),4,"..\\engine\\palette.cpp",0xbb);
  if (puVar6 != (undefined1 *)0x0) {
    local_10 = 0;
    if (0 < *in_stack_00000010) {
      uVar16 = 0;
      do {
        pcVar13 = &stack0xffffffa0;
        pcVar11 = (char *)(in_stack_00000010[1] + uVar16);
        do {
          cVar1 = *pcVar11;
          *pcVar13 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar13[1] = cVar1;
          pcVar13 = pcVar13 + 2;
        } while (cVar1 != '\0');
        pcVar13 = &stack0xffffffa0;
        do {
          pcVar11 = pcVar13;
          if (*pcVar13 == '.') goto LAB_00545254;
          if (*pcVar13 == '\0') break;
          pcVar11 = pcVar13 + 1;
          if (*pcVar11 == '.') goto LAB_00545254;
          pcVar13 = pcVar13 + 2;
        } while (*pcVar11 != '\0');
        pcVar11 = (char *)0x0;
LAB_00545254:
        if (pcVar11 == (char *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xcb;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - No extension found");
        }
        pcVar13 = ".ACT";
        do {
          cVar1 = *pcVar13;
          *pcVar11 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar11[1] = cVar1;
          pcVar11 = pcVar11 + 2;
        } while (cVar1 != '\0');
        pcVar13 = &stack0xffffff8c;
        do {
          pcVar11 = pcVar13;
          if (*pcVar13 == '\\') goto LAB_005452ba;
          if (*pcVar13 == '\0') break;
          pcVar11 = pcVar13 + 1;
          if (*pcVar11 == '\\') goto LAB_005452ba;
          pcVar13 = pcVar13 + 2;
        } while (*pcVar11 != '\0');
        pcVar11 = (char *)0x0;
LAB_005452ba:
        if (pcVar11 == (char *)0x0) {
          pcVar11 = "rb";
          pcVar13 = "art";
        }
        else {
          pcVar11 = "rb";
          pcVar13 = &DAT_0063e5a6;
        }
        pFVar7 = engine_dosio_c_getFile_FUN_00481a50(pcVar13,&stack0xffffff8c,pcVar11);
        if (pFVar7 == (FILE *)0x0) {
          puVar12 = g_DefaultPalette;
          puVar14 = (uchar *)&DAT_02fd8d20;
          for (iVar8 = 0xc0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined4 *)puVar14 = *(undefined4 *)puVar12;
            puVar12 = puVar12 + ((uint)bVar15 * -2 + 1) * 4;
            puVar14 = puVar14 + ((uint)bVar15 * -2 + 1) * 4;
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
            puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
          }
        }
        else {
          crt_stdio_c_fread_FUN_005fd990(&DAT_02fd8d20,0x300,1,pFVar7);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar7,"..\\engine\\palette.cpp",0xd9);
        }
        pcVar13 = (char *)(*(int *)(unaff_retaddr + 4) + (int)pvVar5);
        do {
          pcVar11 = pcVar13;
          if (*pcVar13 == '\\') goto LAB_00545332;
          if (*pcVar13 == '\0') break;
          pcVar11 = pcVar13 + 1;
          if (*pcVar11 == '\\') goto LAB_00545332;
          pcVar13 = pcVar13 + 2;
        } while (*pcVar11 != '\0');
        pcVar11 = (char *)0x0;
LAB_00545332:
        if (pcVar11 == (char *)0x0) {
          iVar8 = *(int *)(unaff_retaddr + 4);
          pcVar13 = "art";
        }
        else {
          iVar8 = *(int *)(unaff_retaddr + 4);
          pcVar13 = &DAT_0063e5c1;
        }
        iVar8 = engine_dosio_c_getFileSize_FUN_00481880(pcVar13,(char *)(iVar8 + (int)pvVar5));
        pcVar13 = (char *)(*(int *)(in_stack_00000004 + 4) + local_10);
        do {
          pcVar11 = pcVar13;
          if (*pcVar13 == '\\') goto LAB_0054537a;
          if (*pcVar13 == '\0') break;
          pcVar11 = pcVar13 + 1;
          if (*pcVar11 == '\\') goto LAB_0054537a;
          pcVar13 = pcVar13 + 2;
        } while (*pcVar11 != '\0');
        pcVar11 = (char *)0x0;
LAB_0054537a:
        if (pcVar11 == (char *)0x0) {
          iVar3 = *(int *)(in_stack_00000004 + 4);
          pcVar11 = "rb";
          pcVar13 = "art";
        }
        else {
          iVar3 = *(int *)(in_stack_00000004 + 4);
          pcVar11 = "rb";
          pcVar13 = &DAT_0063e5cc;
        }
        pFVar7 = engine_dosio_c_getFile_FUN_00481a50(pcVar13,(char *)(iVar3 + local_10),pcVar11);
        if (pFVar7 == (FILE *)0x0) {
          g_CurrentFilename = "..\\engine\\palette.cpp";
          g_CurrentLineNumber = 0xf1;
          core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to open texture");
        }
        pcVar13 = (char *)(uVar10 * 4 + local_c);
        while (0 < iVar8) {
          if ((pFVar7->_cnt < 1) || ((byte)*pFVar7->_ptr - 0xd < 0xfe)) {
            uVar9 = crt_stdio_c_fgetc_FUN_005fe840(pFVar7);
          }
          else {
            pbVar4 = (byte *)pFVar7->_ptr;
            pFVar7->_cnt = pFVar7->_cnt + -1;
            pFVar7->_ptr = (char *)(pbVar4 + 1);
            uVar9 = (uint)*pbVar4;
          }
          if (uVar9 == 0xffffffff) break;
          iVar3 = uVar9 * 3;
          bVar2 = *(byte *)((int)&DAT_02fd8d20 + iVar3 + 1);
          uVar16 = (uint)bVar2;
          cVar1 = *(char *)((int)&DAT_02fd8d20 + iVar3 + 2);
          if (((*(char *)((int)&DAT_02fd8d20 + iVar3) != '\0') || (uVar16 != 0)) || (cVar1 != '\0'))
          {
            *pcVar13 = *(char *)((int)&DAT_02fd8d20 + iVar3);
            pcVar13[1] = bVar2;
            uVar10 = uVar10 + 1;
            pcVar13[2] = cVar1;
            pcVar13 = pcVar13 + 4;
          }
          iVar8 = iVar8 + -1;
          if (*(uint *)((int)in_stack_0000000c + 8) < uVar10) {
            g_CurrentFilename = "..\\engine\\palette.cpp";
            g_CurrentLineNumber = 0x10c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Too many pixels");
          }
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar7,"..\\engine\\palette.cpp",0x110);
        uVar16 = uVar16 + 0x40;
        local_10 = local_10 + 1;
      } while (local_10 < *in_stack_00000010);
    }
    pvVar5 = (void *)engine_colquant_c_FUN_004406c0();
    pcVar13 = in_stack_00000018;
    do {
      pcVar11 = pcVar13;
      if (*pcVar13 == '\\') goto LAB_00545459;
      if (*pcVar13 == '\0') break;
      pcVar11 = pcVar13 + 1;
      if (*pcVar11 == '\\') goto LAB_00545459;
      pcVar13 = pcVar13 + 2;
    } while (*pcVar11 != '\0');
    pcVar11 = (char *)0x0;
LAB_00545459:
    if (pcVar11 == (char *)0x0) {
      pcVar11 = "wb";
      pcVar13 = "art";
    }
    else {
      pcVar11 = "wb";
      pcVar13 = &DAT_0063e68c;
    }
    pFVar7 = engine_dosio_c_getFile_FUN_00481a50(pcVar13,in_stack_00000018,pcVar11);
    if (pFVar7 == (FILE *)0x0) {
      g_CurrentFilename = "..\\engine\\palette.cpp";
      g_CurrentLineNumber = 0x122;
      core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::createOutputPalette - Unable to create output!");
    }
    crt_stdio_c_fwrite_FUN_005fdc00(pvVar5,0x300,1,pFVar7);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar7,"..\\engine\\palette.cpp",0x125);
    shape_memdbg_cpp_debugFree_FUN_0050f460(in_stack_0000000c,"..\\engine\\palette.cpp",0x129);
    g_CurrentDebugFilename = "..\\engine\\palette.cpp";
    g_CurrentDebugLine = 0x12a;
    shape_memdbg_cpp_debugFree_FUN_0050f210(in_stack_0000000c);
    puVar6 = &DAT_00000001;
  }
  return puVar6;
}


// Assembly code:
// 00545180: PUSH EBX
//   Label: engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180
// 00545181: PUSH EBP
// 00545182: SUB ESP,0x64
// 00545185: PUSH 0xb4
// 0054518a: PUSH 0x63e4c8
//   XREF to: 0063e4c8 (DATA)
// 0054518f: PUSH 0x8308
// 00545194: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00545199: ADD ESP,0xc
// 0054519c: XOR EBP,EBP
// 0054519e: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005451a2: TEST EAX,EAX
// 005451a4: JNZ 0x005451c9
//   XREF to: 005451c9 (CONDITIONAL_JUMP)
// 005451a6: MOV EDX,0x63e4de
//   XREF to: 0063e4de (DATA)
// 005451ab: MOV ECX,0xb6
// 005451b0: PUSH 0x63e4f4
//   XREF to: 0063e4f4 (DATA)
// 005451b5: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005451bb: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005451c1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005451c6: ADD ESP,0x4
// 005451c9: PUSH 0xbb
//   Label: LAB_005451c9
// 005451ce: PUSH 0x63e532
//   XREF to: 0063e532 (DATA)
// 005451d3: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 005451d7: PUSH 0x4
// 005451d9: MOV EBX,dword ptr [EAX + 0x8]
// 005451dc: PUSH EBX
// 005451dd: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 005451e2: ADD ESP,0x10
// 005451e5: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005451e9: TEST EAX,EAX
// 005451eb: JZ 0x00545509
//   XREF to: 00545509 (CONDITIONAL_JUMP)
// 005451f1: PUSH EDI
// 005451f2: PUSH ESI
// 005451f3: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 005451f7: XOR ESI,ESI
// 005451f9: MOV EDI,dword ptr [EAX]
// 005451fb: MOV dword ptr [ESP + 0x58],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005451ff: TEST EDI,EDI
// 00545201: JLE 0x0054541e
//   XREF to: 0054541e (CONDITIONAL_JUMP)
// 00545207: MOV dword ptr [ESP + 0x64],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0054520b: MOV ESI,dword ptr [ESP + 0x78]
//   Label: LAB_0054520b
//   XREF to: Stack[0x4] (READ)
// 0054520f: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x10] (READ)
// 00545213: MOV ESI,dword ptr [ESI + 0x4]
// 00545216: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 0054521a: ADD ESI,EDX
// 0054521c: PUSH EDI
// 0054521d: MOV AL,byte ptr [ESI]
//   Label: LAB_0054521d
// 0054521f: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x6c] (DATA)
// 00545221: CMP AL,0x0
// 00545223: JZ 0x00545235
//   XREF to: 00545235 (CONDITIONAL_JUMP)
// 00545225: MOV AL,byte ptr [ESI + 0x1]
// 00545228: ADD ESI,0x2
// 0054522b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6b] (WRITE)
// 0054522e: ADD EDI,0x2
// 00545231: CMP AL,0x0
// 00545233: JNZ 0x0054521d
//   XREF to: 0054521d (CONDITIONAL_JUMP)
// 00545235: POP EDI
//   Label: LAB_00545235
// 00545236: MOV DL,0x2e
// 00545238: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 0054523c: MOV AL,byte ptr [ESI]
//   Label: LAB_0054523c
//   XREF to: Stack[-0x6c] (DATA)
// 0054523e: CMP AL,DL
// 00545240: JZ 0x00545254
//   XREF to: 00545254 (CONDITIONAL_JUMP)
// 00545242: CMP AL,0x0
// 00545244: JZ 0x00545252
//   XREF to: 00545252 (CONDITIONAL_JUMP)
// 00545246: INC ESI
// 00545247: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x6b] (DATA)
// 00545249: CMP AL,DL
// 0054524b: JZ 0x00545254
//   XREF to: 00545254 (CONDITIONAL_JUMP)
// 0054524d: INC ESI
// 0054524e: CMP AL,0x0
// 00545250: JNZ 0x0054523c
//   XREF to: 0054523c (CONDITIONAL_JUMP)
// 00545252: SUB ESI,ESI
//   Label: LAB_00545252
// 00545254: MOV EDI,ESI
//   Label: LAB_00545254
// 00545256: TEST ESI,ESI
// 00545258: JNZ 0x0054527d
//   XREF to: 0054527d (CONDITIONAL_JUMP)
// 0054525a: MOV ECX,0x63e548
//   XREF to: 0063e548 (DATA)
// 0054525f: MOV EBX,0xcb
// 00545264: PUSH 0x63e55e
//   XREF to: 0063e55e (DATA)
// 00545269: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054526f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00545275: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054527a: ADD ESP,0x4
// 0054527d: MOV ESI,0x63e597
//   Label: LAB_0054527d
//   XREF to: 0063e597 (DATA)
// 00545282: MOV DL,0x5c
// 00545284: PUSH EDI
// 00545285: MOV AL,byte ptr [ESI]
//   Label: LAB_00545285
//   XREF to: 0063e597 (READ)
//   XREF to: 0063e599 (READ)
// 00545287: MOV byte ptr [EDI],AL
// 00545289: CMP AL,0x0
// 0054528b: JZ 0x0054529d
//   XREF to: 0054529d (CONDITIONAL_JUMP)
// 0054528d: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063e598 (READ)
//   XREF to: 0063e59a (READ)
// 00545290: ADD ESI,0x2
// 00545293: MOV byte ptr [EDI + 0x1],AL
// 00545296: ADD EDI,0x2
// 00545299: CMP AL,0x0
// 0054529b: JNZ 0x00545285
//   XREF to: 00545285 (CONDITIONAL_JUMP)
// 0054529d: POP EDI
//   Label: LAB_0054529d
// 0054529e: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 005452a2: MOV AL,byte ptr [ESI]
//   Label: LAB_005452a2
//   XREF to: Stack[-0x6c] (DATA)
// 005452a4: CMP AL,DL
// 005452a6: JZ 0x005452ba
//   XREF to: 005452ba (CONDITIONAL_JUMP)
// 005452a8: CMP AL,0x0
// 005452aa: JZ 0x005452b8
//   XREF to: 005452b8 (CONDITIONAL_JUMP)
// 005452ac: INC ESI
// 005452ad: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x6b] (DATA)
// 005452af: CMP AL,DL
// 005452b1: JZ 0x005452ba
//   XREF to: 005452ba (CONDITIONAL_JUMP)
// 005452b3: INC ESI
// 005452b4: CMP AL,0x0
// 005452b6: JNZ 0x005452a2
//   XREF to: 005452a2 (CONDITIONAL_JUMP)
// 005452b8: SUB ESI,ESI
//   Label: LAB_005452b8
// 005452ba: TEST ESI,ESI
//   Label: LAB_005452ba
// 005452bc: JNZ 0x0054550f
//   XREF to: 0054550f (CONDITIONAL_JUMP)
// 005452c2: PUSH 0x63e59c
//   XREF to: 0063e59c (DATA)
// 005452c7: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6c] (DATA)
// 005452cb: PUSH EAX
// 005452cc: PUSH 0x63e59f
//   XREF to: 0063e59f (DATA)
// 005452d1: CALL engine_dosio.c_getFile_FUN_00481a50
//   Label: LAB_005452d1
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005452d6: ADD ESP,0xc
// 005452d9: MOV ESI,EAX
// 005452db: TEST ESI,ESI
// 005452dd: JZ 0x00545523
//   XREF to: 00545523 (CONDITIONAL_JUMP)
// 005452e3: PUSH ESI
// 005452e4: PUSH 0x1
// 005452e6: PUSH 0x300
// 005452eb: PUSH 0x2fd8d20
//   XREF to: 02fd8d20 (DATA)
// 005452f0: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005452f5: ADD ESP,0x10
// 005452f8: PUSH 0xd9
// 005452fd: PUSH 0x63e5a7
//   XREF to: 0063e5a7 (DATA)
// 00545302: PUSH ESI
// 00545303: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00545308: ADD ESP,0xc
// 0054530b: MOV ESI,dword ptr [ESP + 0x78]
//   Label: LAB_0054530b
//   XREF to: Stack[0x4] (READ)
// 0054530f: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x10] (READ)
// 00545313: MOV ESI,dword ptr [ESI + 0x4]
// 00545316: MOV DL,0x5c
// 00545318: ADD ESI,EDI
// 0054531a: MOV AL,byte ptr [ESI]
//   Label: LAB_0054531a
// 0054531c: CMP AL,DL
// 0054531e: JZ 0x00545332
//   XREF to: 00545332 (CONDITIONAL_JUMP)
// 00545320: CMP AL,0x0
// 00545322: JZ 0x00545330
//   XREF to: 00545330 (CONDITIONAL_JUMP)
// 00545324: INC ESI
// 00545325: MOV AL,byte ptr [ESI]
// 00545327: CMP AL,DL
// 00545329: JZ 0x00545332
//   XREF to: 00545332 (CONDITIONAL_JUMP)
// 0054532b: INC ESI
// 0054532c: CMP AL,0x0
// 0054532e: JNZ 0x0054531a
//   XREF to: 0054531a (CONDITIONAL_JUMP)
// 00545330: SUB ESI,ESI
//   Label: LAB_00545330
// 00545332: TEST ESI,ESI
//   Label: LAB_00545332
// 00545334: JNZ 0x00545547
//   XREF to: 00545547 (CONDITIONAL_JUMP)
// 0054533a: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 0054533e: MOV EAX,dword ptr [EAX + 0x4]
// 00545341: ADD EAX,EDI
// 00545343: PUSH EAX
// 00545344: PUSH 0x63e5bd
//   XREF to: 0063e5bd (DATA)
// 00545349: CALL engine_dosio.c_getFileSize_FUN_00481880
//   Label: LAB_00545349
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 0054534e: ADD ESP,0x8
// 00545351: MOV EDI,EAX
// 00545353: MOV ESI,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 00545357: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x10] (READ)
// 0054535b: MOV ESI,dword ptr [ESI + 0x4]
// 0054535e: MOV DL,0x5c
// 00545360: ADD ESI,EBX
// 00545362: MOV AL,byte ptr [ESI]
//   Label: LAB_00545362
// 00545364: CMP AL,DL
// 00545366: JZ 0x0054537a
//   XREF to: 0054537a (CONDITIONAL_JUMP)
// 00545368: CMP AL,0x0
// 0054536a: JZ 0x00545378
//   XREF to: 00545378 (CONDITIONAL_JUMP)
// 0054536c: INC ESI
// 0054536d: MOV AL,byte ptr [ESI]
// 0054536f: CMP AL,DL
// 00545371: JZ 0x0054537a
//   XREF to: 0054537a (CONDITIONAL_JUMP)
// 00545373: INC ESI
// 00545374: CMP AL,0x0
// 00545376: JNZ 0x00545362
//   XREF to: 00545362 (CONDITIONAL_JUMP)
// 00545378: SUB ESI,ESI
//   Label: LAB_00545378
// 0054537a: TEST ESI,ESI
//   Label: LAB_0054537a
// 0054537c: JNZ 0x0054555b
//   XREF to: 0054555b (CONDITIONAL_JUMP)
// 00545382: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 00545386: MOV EAX,dword ptr [EAX + 0x4]
// 00545389: PUSH 0x63e5c2
//   XREF to: 0063e5c2 (DATA)
// 0054538e: ADD EAX,EBX
// 00545390: PUSH EAX
// 00545391: PUSH 0x63e5c5
//   XREF to: 0063e5c5 (DATA)
// 00545396: CALL engine_dosio.c_getFile_FUN_00481a50
//   Label: LAB_00545396
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0054539b: ADD ESP,0xc
// 0054539e: MOV ESI,EAX
// 005453a0: TEST ESI,ESI
// 005453a2: JZ 0x00545574
//   XREF to: 00545574 (CONDITIONAL_JUMP)
// 005453a8: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_005453a8
//   XREF to: Stack[-0x14] (READ)
// 005453ac: LEA EBX,[EBP*0x4 + 0x0]
// 005453b3: ADD EBX,EAX
// 005453b5: TEST EDI,EDI
//   Label: LAB_005453b5
// 005453b7: JLE 0x005453e9
//   XREF to: 005453e9 (CONDITIONAL_JUMP)
// 005453b9: MOV EDX,dword ptr [ESI + 0x4]
// 005453bc: TEST EDX,EDX
// 005453be: JLE 0x005453d7
//   XREF to: 005453d7 (CONDITIONAL_JUMP)
// 005453c0: MOV EAX,dword ptr [ESI]
// 005453c2: MOV AL,byte ptr [EAX]
// 005453c4: AND EAX,0xff
// 005453c9: SUB EAX,0xd
// 005453cc: CMP EAX,0xfd
// 005453d1: JA 0x0054559c
//   XREF to: 0054559c (CONDITIONAL_JUMP)
// 005453d7: PUSH ESI
//   Label: LAB_005453d7
// 005453d8: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005453dd: ADD ESP,0x4
// 005453e0: CMP EAX,-0x1
//   Label: LAB_005453e0
// 005453e3: JNZ 0x005455b5
//   XREF to: 005455b5 (CONDITIONAL_JUMP)
// 005453e9: PUSH 0x110
//   Label: LAB_005453e9
// 005453ee: PUSH 0x63e66c
//   XREF to: 0063e66c (DATA)
// 005453f3: PUSH ESI
// 005453f4: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005453f9: ADD ESP,0xc
// 005453fc: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x10] (READ)
// 00545400: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x1c] (READ)
// 00545404: ADD EAX,0x40
// 00545407: INC EDX
// 00545408: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0054540c: MOV dword ptr [ESP + 0x58],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00545410: MOV EAX,EDX
// 00545412: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 00545416: CMP EAX,dword ptr [EDX]
// 00545418: JL 0x0054520b
//   XREF to: 0054520b (CONDITIONAL_JUMP)
// 0054541e: MOV EBX,dword ptr [ESP + 0x80]
//   Label: LAB_0054541e
//   XREF to: Stack[0xc] (READ)
// 00545425: PUSH EBX
// 00545426: PUSH EBP
// 00545427: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x14] (READ)
// 0054542b: PUSH ESI
// 0054542c: MOV EDI,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 00545430: PUSH EDI
// 00545431: CALL engine_colquant.c_FUN_004406c0
//   XREF to: 004406c0 (UNCONDITIONAL_CALL)
// 00545436: ADD ESP,0x10
// 00545439: MOV DL,0x5c
// 0054543b: MOV ESI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x8] (READ)
// 0054543f: MOV EDI,EAX
// 00545441: MOV AL,byte ptr [ESI]
//   Label: LAB_00545441
// 00545443: CMP AL,DL
// 00545445: JZ 0x00545459
//   XREF to: 00545459 (CONDITIONAL_JUMP)
// 00545447: CMP AL,0x0
// 00545449: JZ 0x00545457
//   XREF to: 00545457 (CONDITIONAL_JUMP)
// 0054544b: INC ESI
// 0054544c: MOV AL,byte ptr [ESI]
// 0054544e: CMP AL,DL
// 00545450: JZ 0x00545459
//   XREF to: 00545459 (CONDITIONAL_JUMP)
// 00545452: INC ESI
// 00545453: CMP AL,0x0
// 00545455: JNZ 0x00545441
//   XREF to: 00545441 (CONDITIONAL_JUMP)
// 00545457: SUB ESI,ESI
//   Label: LAB_00545457
// 00545459: TEST ESI,ESI
//   Label: LAB_00545459
// 0054545b: JNZ 0x0054562d
//   XREF to: 0054562d (CONDITIONAL_JUMP)
// 00545461: PUSH 0x63e682
//   XREF to: 0063e682 (DATA)
// 00545466: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 0054546d: PUSH EAX
// 0054546e: PUSH 0x63e685
//   XREF to: 0063e685 (DATA)
// 00545473: CALL engine_dosio.c_getFile_FUN_00481a50
//   Label: LAB_00545473
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00545478: ADD ESP,0xc
// 0054547b: MOV EBX,EAX
// 0054547d: TEST EBX,EBX
// 0054547f: JNZ 0x005454a4
//   XREF to: 005454a4 (CONDITIONAL_JUMP)
// 00545481: MOV EDX,0x63e68d
//   XREF to: 0063e68d (DATA)
// 00545486: MOV ECX,0x122
// 0054548b: PUSH 0x63e6a3
//   XREF to: 0063e6a3 (DATA)
// 00545490: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00545496: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0054549c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005454a1: ADD ESP,0x4
// 005454a4: PUSH EBX
//   Label: LAB_005454a4
// 005454a5: PUSH 0x1
// 005454a7: PUSH 0x300
// 005454ac: PUSH EDI
// 005454ad: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 005454b2: ADD ESP,0x10
// 005454b5: PUSH 0x125
// 005454ba: PUSH 0x63e6e2
//   XREF to: 0063e6e2 (DATA)
// 005454bf: PUSH EBX
// 005454c0: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005454c5: ADD ESP,0xc
// 005454c8: PUSH 0x129
// 005454cd: PUSH 0x63e6f8
//   XREF to: 0063e6f8 (DATA)
// 005454d2: MOV EBX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x14] (READ)
// 005454d6: PUSH EBX
// 005454d7: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005454dc: ADD ESP,0xc
// 005454df: MOV ESI,0x63e70e
//   XREF to: 0063e70e (DATA)
// 005454e4: MOV EBP,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x18] (READ)
// 005454e8: MOV EDI,0x12a
// 005454ed: PUSH EBP
// 005454ee: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 005454f4: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 005454fa: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005454ff: MOV EAX,0x1
// 00545504: ADD ESP,0x4
// 00545507: POP ESI
// 00545508: POP EDI
// 00545509: ADD ESP,0x64
//   Label: LAB_00545509
// 0054550c: POP EBP
// 0054550d: POP EBX
// 0054550e: RET
// 0054550f: PUSH 0x63e5a3
//   Label: LAB_0054550f
//   XREF to: 0063e5a3 (DATA)
// 00545514: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6c] (DATA)
// 00545518: PUSH EAX
// 00545519: PUSH 0x63e5a6
//   XREF to: 0063e5a6 (DATA)
// 0054551e: JMP 0x005452d1
//   XREF to: 005452d1 (UNCONDITIONAL_JUMP)
// 00545523: MOV ECX,0x300
//   Label: LAB_00545523
// 00545528: MOV ESI,0x2d02248
//   XREF to: 02d02248 (DATA)
// 0054552d: MOV EDI,0x2fd8d20
//   XREF to: 02fd8d20 (DATA)
// 00545532: PUSH EDI
//   XREF to: 02fd8d20 (DATA)
// 00545533: MOV EAX,ECX
// 00545535: SHR ECX,0x2
// 00545538: MOVSD.REP ES:EDI,ESI
//   XREF to: 02d02248 (READ)
//   XREF to: 02fd8d20 (WRITE)
//   XREF to: 02d0224c (READ)
//   XREF to: 02fd8d24 (WRITE)
// 0054553a: MOV CL,AL
// 0054553c: AND CL,0x3
// 0054553f: MOVSB.REP ES:EDI,ESI
//   XREF to: 02d0224c (READ)
//   XREF to: 02fd8d24 (WRITE)
//   XREF to: 02d0224d (READ)
//   XREF to: 02fd8d25 (WRITE)
// 00545541: POP EDI
// 00545542: JMP 0x0054530b
//   XREF to: 0054530b (UNCONDITIONAL_JUMP)
// 00545547: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00545547
//   XREF to: Stack[0x4] (READ)
// 0054554b: MOV EAX,dword ptr [EAX + 0x4]
// 0054554e: ADD EAX,EDI
// 00545550: PUSH EAX
// 00545551: PUSH 0x63e5c1
//   XREF to: 0063e5c1 (DATA)
// 00545556: JMP 0x00545349
//   XREF to: 00545349 (UNCONDITIONAL_JUMP)
// 0054555b: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_0054555b
//   XREF to: Stack[0x4] (READ)
// 0054555f: MOV EAX,dword ptr [EAX + 0x4]
// 00545562: PUSH 0x63e5c9
//   XREF to: 0063e5c9 (DATA)
// 00545567: ADD EAX,EBX
// 00545569: PUSH EAX
// 0054556a: PUSH 0x63e5cc
//   XREF to: 0063e5cc (DATA)
// 0054556f: JMP 0x00545396
//   XREF to: 00545396 (UNCONDITIONAL_JUMP)
// 00545574: MOV ECX,0x63e5cd
//   Label: LAB_00545574
//   XREF to: 0063e5cd (DATA)
// 00545579: MOV EBX,0xf1
// 0054557e: PUSH 0x63e5e3
//   XREF to: 0063e5e3 (DATA)
// 00545583: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00545589: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0054558f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00545594: ADD ESP,0x4
// 00545597: JMP 0x005453a8
//   XREF to: 005453a8 (UNCONDITIONAL_JUMP)
// 0054559c: LEA ECX,[EDX + -0x1]
//   Label: LAB_0054559c
// 0054559f: MOV EAX,dword ptr [ESI]
// 005455a1: LEA EDX,[EAX + 0x1]
// 005455a4: MOV dword ptr [ESI + 0x4],ECX
// 005455a7: MOV dword ptr [ESI],EDX
// 005455a9: MOV AL,byte ptr [EAX]
// 005455ab: AND EAX,0xff
// 005455b0: JMP 0x005453e0
//   XREF to: 005453e0 (UNCONDITIONAL_JUMP)
// 005455b5: LEA EAX,[EAX + EAX*0x2]
//   Label: LAB_005455b5
// 005455b8: XOR ECX,ECX
// 005455ba: XOR EDX,EDX
// 005455bc: MOV CL,byte ptr [EAX + 0x2fd8d21]
//   XREF to: 02fd8d21 (DATA)
// 005455c2: MOV DL,byte ptr [EAX + 0x2fd8d20]
//   XREF to: 02fd8d20 (DATA)
// 005455c8: MOV dword ptr [ESP + 0x68],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 005455cc: MOV AL,byte ptr [EAX + 0x2fd8d22]
//   XREF to: 02fd8d22 (DATA)
// 005455d2: AND EAX,0xff
// 005455d7: TEST EDX,EDX
// 005455d9: JZ 0x00545623
//   XREF to: 00545623 (CONDITIONAL_JUMP)
// 005455db: ADD EBX,0x4
//   Label: LAB_005455db
// 005455de: MOV AH,byte ptr [ESP + 0x68]
//   XREF to: Stack[-0xc] (READ)
// 005455e2: MOV byte ptr [EBX + -0x4],DL
// 005455e5: MOV byte ptr [EBX + -0x3],AH
// 005455e8: INC EBP
// 005455e9: MOV byte ptr [EBX + -0x2],AL
// 005455ec: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_005455ec
//   XREF to: Stack[0x4] (READ)
// 005455f0: MOV EDX,dword ptr [EAX + 0x8]
// 005455f3: DEC EDI
// 005455f4: CMP EBP,EDX
// 005455f6: JBE 0x005453b5
//   XREF to: 005453b5 (CONDITIONAL_JUMP)
// 005455fc: MOV ECX,0x63e620
//   XREF to: 0063e620 (DATA)
// 00545601: MOV EAX,0x10c
// 00545606: PUSH 0x63e636
//   XREF to: 0063e636 (DATA)
// 0054560b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00545611: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00545616: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054561b: ADD ESP,0x4
// 0054561e: JMP 0x005453b5
//   XREF to: 005453b5 (UNCONDITIONAL_JUMP)
// 00545623: TEST ECX,ECX
//   Label: LAB_00545623
// 00545625: JNZ 0x005455db
//   XREF to: 005455db (CONDITIONAL_JUMP)
// 00545627: TEST EAX,EAX
// 00545629: JNZ 0x005455db
//   XREF to: 005455db (CONDITIONAL_JUMP)
// 0054562b: JMP 0x005455ec
//   XREF to: 005455ec (UNCONDITIONAL_JUMP)
// 0054562d: PUSH 0x63e689
//   Label: LAB_0054562d
//   XREF to: 0063e689 (DATA)
// 00545632: MOV EBP,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 00545639: PUSH EBP
// 0054563a: PUSH 0x63e68c
//   XREF to: 0063e68c (DATA)
// 0054563f: JMP 0x00545473
//   XREF to: 00545473 (UNCONDITIONAL_JUMP)
