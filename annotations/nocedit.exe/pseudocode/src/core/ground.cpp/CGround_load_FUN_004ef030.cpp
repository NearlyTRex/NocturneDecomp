// Name: core_ground.cpp_CGround_load_FUN_004ef030
// Address: 004ef030
// Address Range: [[004ef030, 004ef370]]
// Convention: __cdecl
// Signature: int core_ground.cpp_CGround_load_FUN_004ef030(CGround * this_ptr, char * filename)
// Cross-references:
//   core_terrain.cpp_CTerrain_ctor_FUN_005e1ef0 (005e1ef0) at 005e1f1b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_ground_cpp_0062e571
//   TerminatedCString s_eopen_ext_not_found_0062e584
//   TerminatedCString s_core_ground_cpp_0062e59b
//   TerminatedCString s_eopen_Cannot_open_file_0062e5ae
//   undefined4 s_cpp_0062e72e
//   TerminatedCString s_rb_0062e745
//   TerminatedCString s_raw_0062e748
//   undefined4 DAT_0062e749
//   undefined4 DAT_0062e74a
//   undefined4 DAT_0062e74b
//   TerminatedCString s_data_0062e74c
//   TerminatedCString s_core_ground_cpp_0062e751
//   TerminatedCString s_rb_0062e764
//   TerminatedCString s_clr_0062e767
//   undefined4 DAT_0062e768
//   undefined4 DAT_0062e769
//   undefined4 DAT_0062e76a
//   TerminatedCString s_data_0062e76b
//   TerminatedCString s_core_ground_cpp_0062e770
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_texlist.cpp_CTextureList_load_FUN_005dbe00
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fread_FUN_005fd990
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_load_FUN_004ef030(CGround *this_ptr,char *filename)

{
  char cVar1;
  byte *pbVar2;
  FILE *pFVar3;
  uint uVar4;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *in_stack_00000018;
  char *in_stack_00000028;
  char acStack_70 [76];
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  int iVar8;
  
  pcVar6 = &stack0xffffff34;
  pcVar5 = &stack0xffffff34;
  do {
    cVar1 = *filename;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  local_24 = "data";
  local_20 = "rb";
  do {
    pcVar6 = pcVar5;
    if (*pcVar5 == '.') goto LAB_004ef09d;
    if (*pcVar5 == '\0') break;
    pcVar6 = pcVar5 + 1;
    if (*pcVar6 == '.') goto LAB_004ef09d;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004ef09d:
  if (pcVar6 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar6 = pcVar6 + 1;
  pcVar5 = "raw";
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50(local_20,&stack0xffffff38,local_1c);
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x44;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
  }
  iVar8 = 0;
  if (0 < this_ptr->height) {
    do {
      iVar7 = 0;
      if (0 < this_ptr->width) {
        do {
          if ((pFVar3->_cnt < 1) || ((byte)*pFVar3->_ptr - 0xd < 0xfe)) {
            uVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar3);
          }
          else {
            pFVar3->_cnt = pFVar3->_cnt + -1;
            pbVar2 = (byte *)pFVar3->_ptr;
            pFVar3->_ptr = (char *)(pbVar2 + 1);
            uVar4 = (uint)*pbVar2;
          }
          *(short *)((int)this_ptr->terrain_data + (iVar8 * this_ptr->width + iVar7) * 4) =
               (short)(uVar4 << 7);
          iVar7 = iVar7 + 1;
        } while (iVar7 < this_ptr->width);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < this_ptr->height);
  }
  pcVar6 = acStack_70;
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\core\\ground.cpp",0x102);
  local_18 = "data";
  local_1c = "rb";
  do {
    cVar1 = *in_stack_00000018;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000018[1];
    in_stack_00000018 = in_stack_00000018 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar6 = acStack_70 + 4;
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_004ef1f1;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_004ef1f1;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_004ef1f1:
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar5 = pcVar5 + 1;
  pcVar6 = "clr";
  do {
    cVar1 = *pcVar6;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50(local_14,acStack_70 + 8,local_18);
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x44;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
  }
  filename = (char *)0x0;
  if (0 < this_ptr->height) {
    do {
      iVar8 = 0;
      if (0 < this_ptr->width) {
        do {
          iVar7 = (int)filename * this_ptr->width + iVar8;
          iVar8 = iVar8 + 1;
          crt_stdio_c_fread_FUN_005fd990
                    ((void *)((int)this_ptr->terrain_data + iVar7 * 4 + 2),1,2,pFVar3);
        } while (iVar8 < this_ptr->width);
      }
      filename = filename + 1;
    } while ((int)filename < this_ptr->height);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\core\\ground.cpp",0x10c);
  core_texlist_cpp_CTextureList_load_FUN_005dbe00(this_ptr->texture_list,in_stack_00000028);
  return extraout_EAX;
}


// Assembly code:
// 004ef030: PUSH EBX
//   Label: core_ground.cpp_CGround_load_FUN_004ef030
// 004ef031: PUSH ESI
// 004ef032: PUSH EDI
// 004ef033: PUSH EBP
// 004ef034: SUB ESP,0xbc
// 004ef03a: MOV EBX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[0x4] (READ)
// 004ef041: MOV EDX,0x62e74c
//   XREF to: 0062e74c (DATA)
// 004ef046: MOV EBP,0x62e748
//   XREF to: 0062e748 (DATA)
// 004ef04b: MOV ESI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[0x8] (READ)
// 004ef052: MOV EDI,ESP
// 004ef054: MOV ECX,0x62e745
//   XREF to: 0062e745 (PARAM)
// 004ef059: PUSH EDI
// 004ef05a: MOV AL,byte ptr [ESI]
//   Label: LAB_004ef05a
// 004ef05c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xcc] (DATA)
// 004ef05e: CMP AL,0x0
// 004ef060: JZ 0x004ef072
//   XREF to: 004ef072 (CONDITIONAL_JUMP)
// 004ef062: MOV AL,byte ptr [ESI + 0x1]
// 004ef065: ADD ESI,0x2
// 004ef068: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xcb] (WRITE)
// 004ef06b: ADD EDI,0x2
// 004ef06e: CMP AL,0x0
// 004ef070: JNZ 0x004ef05a
//   XREF to: 004ef05a (CONDITIONAL_JUMP)
// 004ef072: POP EDI
//   Label: LAB_004ef072
// 004ef073: MOV ESI,ESP
// 004ef075: MOV dword ptr [ESP + 0xa8],EDX
//   XREF to: Stack[-0x24] (WRITE)
//   XREF to: 0062e74c (DATA)
// 004ef07c: MOV DL,0x2e
//   XREF to: 0062e72e (PARAM)
// 004ef07e: MOV dword ptr [ESP + 0xac],ECX
//   XREF to: Stack[-0x20] (WRITE)
//   XREF to: 0062e745 (DATA)
// 004ef085: MOV AL,byte ptr [ESI]
//   Label: LAB_004ef085
//   XREF to: Stack[-0xcc] (DATA)
// 004ef087: CMP AL,DL
// 004ef089: JZ 0x004ef09d
//   XREF to: 004ef09d (CONDITIONAL_JUMP)
// 004ef08b: CMP AL,0x0
// 004ef08d: JZ 0x004ef09b
//   XREF to: 004ef09b (CONDITIONAL_JUMP)
// 004ef08f: INC ESI
// 004ef090: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0xcb] (DATA)
// 004ef092: CMP AL,DL
// 004ef094: JZ 0x004ef09d
//   XREF to: 004ef09d (CONDITIONAL_JUMP)
// 004ef096: INC ESI
// 004ef097: CMP AL,0x0
// 004ef099: JNZ 0x004ef085
//   XREF to: 004ef085 (CONDITIONAL_JUMP)
// 004ef09b: SUB ESI,ESI
//   Label: LAB_004ef09b
// 004ef09d: MOV EDI,ESI
//   Label: LAB_004ef09d
// 004ef09f: TEST ESI,ESI
// 004ef0a1: JZ 0x004ef331
//   XREF to: 004ef331 (CONDITIONAL_JUMP)
// 004ef0a7: INC EDI
//   Label: LAB_004ef0a7
// 004ef0a8: MOV ESI,EBP
// 004ef0aa: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x20] (READ)
//   XREF to: 0062e745 (PARAM)
// 004ef0b1: PUSH EDI
// 004ef0b2: MOV AL,byte ptr [ESI]
//   Label: LAB_004ef0b2
//   XREF to: 0062e748 (READ)
//   XREF to: 0062e74a (READ)
// 004ef0b4: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xc8] (DATA)
// 004ef0b6: CMP AL,0x0
// 004ef0b8: JZ 0x004ef0ca
//   XREF to: 004ef0ca (CONDITIONAL_JUMP)
// 004ef0ba: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062e749 (READ)
//   XREF to: 0062e74b (READ)
// 004ef0bd: ADD ESI,0x2
// 004ef0c0: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xc8] (WRITE)
// 004ef0c3: ADD EDI,0x2
// 004ef0c6: CMP AL,0x0
// 004ef0c8: JNZ 0x004ef0b2
//   XREF to: 004ef0b2 (CONDITIONAL_JUMP)
// 004ef0ca: POP EDI
//   Label: LAB_004ef0ca
// 004ef0cb: PUSH EDX
//   XREF to: 0062e745 (DATA)
// 004ef0cc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xcc] (DATA)
// 004ef0d0: PUSH EAX
// 004ef0d1: MOV ECX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x24] (READ)
//   XREF to: 0062e74c (PARAM)
// 004ef0d8: PUSH ECX
//   XREF to: 0062e74c (DATA)
// 004ef0d9: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004ef0de: ADD ESP,0xc
// 004ef0e1: MOV ESI,EAX
// 004ef0e3: TEST EAX,EAX
// 004ef0e5: JNZ 0x004ef10a
//   XREF to: 004ef10a (CONDITIONAL_JUMP)
// 004ef0e7: MOV EDI,0x62e59b
//   XREF to: 0062e59b (DATA)
// 004ef0ec: MOV EBP,0x44
// 004ef0f1: PUSH 0x62e5ae
//   XREF to: 0062e5ae (DATA)
// 004ef0f6: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004ef0fc: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004ef102: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ef107: ADD ESP,0x4
// 004ef10a: XOR EAX,EAX
//   Label: LAB_004ef10a
// 004ef10c: MOV EDX,dword ptr [EBX + 0x4]
// 004ef10f: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004ef116: TEST EDX,EDX
// 004ef118: JLE 0x004ef17e
//   XREF to: 004ef17e (CONDITIONAL_JUMP)
// 004ef11a: MOV EBP,dword ptr [EBX]
//   Label: LAB_004ef11a
// 004ef11c: XOR EDI,EDI
// 004ef11e: TEST EBP,EBP
// 004ef120: JLE 0x004ef168
//   XREF to: 004ef168 (CONDITIONAL_JUMP)
// 004ef122: MOV EBP,dword ptr [ESI + 0x4]
//   Label: LAB_004ef122
// 004ef125: TEST EBP,EBP
// 004ef127: JLE 0x004ef140
//   XREF to: 004ef140 (CONDITIONAL_JUMP)
// 004ef129: MOV EAX,dword ptr [ESI]
// 004ef12b: MOV AL,byte ptr [EAX]
// 004ef12d: AND EAX,0xff
// 004ef132: SUB EAX,0xd
// 004ef135: CMP EAX,0xfd
// 004ef13a: JA 0x004ef358
//   XREF to: 004ef358 (CONDITIONAL_JUMP)
// 004ef140: PUSH ESI
//   Label: LAB_004ef140
// 004ef141: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004ef146: ADD ESP,0x4
// 004ef149: SHL EAX,0x7
//   Label: LAB_004ef149
// 004ef14c: MOV EDX,dword ptr [EBX]
// 004ef14e: MOV ECX,EAX
// 004ef150: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x18] (READ)
// 004ef157: IMUL EAX,EDX
// 004ef15a: MOV EDX,dword ptr [EBX + 0x24]
// 004ef15d: ADD EAX,EDI
// 004ef15f: MOV word ptr [EDX + EAX*0x4],CX
// 004ef163: INC EDI
// 004ef164: CMP EDI,dword ptr [EBX]
// 004ef166: JL 0x004ef122
//   XREF to: 004ef122 (CONDITIONAL_JUMP)
// 004ef168: MOV ECX,dword ptr [ESP + 0xb4]
//   Label: LAB_004ef168
//   XREF to: Stack[-0x18] (READ)
// 004ef16f: INC ECX
// 004ef170: MOV EDI,dword ptr [EBX + 0x4]
// 004ef173: MOV dword ptr [ESP + 0xb4],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004ef17a: CMP ECX,EDI
// 004ef17c: JL 0x004ef11a
//   XREF to: 004ef11a (CONDITIONAL_JUMP)
// 004ef17e: PUSH 0x102
//   Label: LAB_004ef17e
// 004ef183: PUSH 0x62e751
//   XREF to: 0062e751 (DATA)
// 004ef188: PUSH ESI
// 004ef189: MOV EBP,0x62e76b
//   XREF to: 0062e76b (DATA)
// 004ef18e: LEA EDI,[ESP + 0x5c]
//   XREF to: Stack[-0x7c] (DATA)
// 004ef192: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004ef197: MOV EAX,0x62e764
//   XREF to: 0062e764 (DATA)
// 004ef19c: ADD ESP,0xc
// 004ef19f: MOV DL,0x2e
// 004ef1a1: MOV ESI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[0x8] (READ)
// 004ef1a8: MOV dword ptr [ESP + 0xa4],EBP
//   XREF to: Stack[-0x28] (WRITE)
//   XREF to: 0062e76b (DATA)
// 004ef1af: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x2c] (WRITE)
//   XREF to: 0062e764 (DATA)
// 004ef1b6: PUSH EDI
// 004ef1b7: MOV AL,byte ptr [ESI]
//   Label: LAB_004ef1b7
// 004ef1b9: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x7c] (DATA)
// 004ef1bb: CMP AL,0x0
// 004ef1bd: JZ 0x004ef1cf
//   XREF to: 004ef1cf (CONDITIONAL_JUMP)
// 004ef1bf: MOV AL,byte ptr [ESI + 0x1]
// 004ef1c2: ADD ESI,0x2
// 004ef1c5: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x7b] (WRITE)
// 004ef1c8: ADD EDI,0x2
// 004ef1cb: CMP AL,0x0
// 004ef1cd: JNZ 0x004ef1b7
//   XREF to: 004ef1b7 (CONDITIONAL_JUMP)
// 004ef1cf: POP EDI
//   Label: LAB_004ef1cf
// 004ef1d0: LEA ESI,[ESP + 0x50]
//   XREF to: Stack[-0x7c] (DATA)
// 004ef1d4: MOV EBP,0x62e767
//   XREF to: 0062e767 (DATA)
// 004ef1d9: MOV AL,byte ptr [ESI]
//   Label: LAB_004ef1d9
//   XREF to: Stack[-0x7c] (DATA)
// 004ef1db: CMP AL,DL
// 004ef1dd: JZ 0x004ef1f1
//   XREF to: 004ef1f1 (CONDITIONAL_JUMP)
// 004ef1df: CMP AL,0x0
// 004ef1e1: JZ 0x004ef1ef
//   XREF to: 004ef1ef (CONDITIONAL_JUMP)
// 004ef1e3: INC ESI
// 004ef1e4: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x7b] (DATA)
// 004ef1e6: CMP AL,DL
// 004ef1e8: JZ 0x004ef1f1
//   XREF to: 004ef1f1 (CONDITIONAL_JUMP)
// 004ef1ea: INC ESI
// 004ef1eb: CMP AL,0x0
// 004ef1ed: JNZ 0x004ef1d9
//   XREF to: 004ef1d9 (CONDITIONAL_JUMP)
// 004ef1ef: SUB ESI,ESI
//   Label: LAB_004ef1ef
// 004ef1f1: MOV EDI,ESI
//   Label: LAB_004ef1f1
// 004ef1f3: TEST ESI,ESI
// 004ef1f5: JNZ 0x004ef21a
//   XREF to: 004ef21a (CONDITIONAL_JUMP)
// 004ef1f7: MOV EDX,0x62e571
//   XREF to: 0062e571 (PARAM)
// 004ef1fc: MOV ECX,0x40
// 004ef201: PUSH 0x62e584
//   XREF to: 0062e584 (DATA)
// 004ef206: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004ef20c: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004ef212: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ef217: ADD ESP,0x4
// 004ef21a: INC EDI
//   Label: LAB_004ef21a
// 004ef21b: MOV ESI,EBP
// 004ef21d: PUSH EDI
// 004ef21e: MOV AL,byte ptr [ESI]
//   Label: LAB_004ef21e
//   XREF to: 0062e767 (READ)
//   XREF to: 0062e769 (READ)
// 004ef220: MOV byte ptr [EDI],AL
// 004ef222: CMP AL,0x0
// 004ef224: JZ 0x004ef236
//   XREF to: 004ef236 (CONDITIONAL_JUMP)
// 004ef226: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062e768 (READ)
//   XREF to: 0062e76a (READ)
// 004ef229: ADD ESI,0x2
// 004ef22c: MOV byte ptr [EDI + 0x1],AL
// 004ef22f: ADD EDI,0x2
// 004ef232: CMP AL,0x0
// 004ef234: JNZ 0x004ef21e
//   XREF to: 004ef21e (CONDITIONAL_JUMP)
// 004ef236: POP EDI
//   Label: LAB_004ef236
// 004ef237: MOV ESI,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x2c] (READ)
// 004ef23e: PUSH ESI
//   XREF to: 0062e764 (DATA)
// 004ef23f: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x7c] (DATA)
// 004ef243: PUSH EAX
// 004ef244: MOV EDI,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x28] (READ)
// 004ef24b: PUSH EDI
//   XREF to: 0062e76b (DATA)
// 004ef24c: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004ef251: ADD ESP,0xc
// 004ef254: MOV ESI,EAX
// 004ef256: TEST EAX,EAX
// 004ef258: JNZ 0x004ef27c
//   XREF to: 004ef27c (CONDITIONAL_JUMP)
// 004ef25a: MOV EBP,0x62e59b
//   XREF to: 0062e59b (DATA)
// 004ef25f: MOV EAX,0x44
// 004ef264: PUSH 0x62e5ae
//   XREF to: 0062e5ae (DATA)
// 004ef269: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004ef26f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004ef274: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ef279: ADD ESP,0x4
// 004ef27c: MOV dword ptr [ESP + 0xb0],ESI
//   Label: LAB_004ef27c
//   XREF to: Stack[-0x1c] (WRITE)
// 004ef283: XOR EDX,EDX
// 004ef285: MOV ECX,dword ptr [EBX + 0x4]
// 004ef288: MOV dword ptr [ESP + 0xb8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004ef28f: TEST ECX,ECX
// 004ef291: JLE 0x004ef2ea
//   XREF to: 004ef2ea (CONDITIONAL_JUMP)
// 004ef293: MOV EBP,0x2
// 004ef298: MOV EDI,dword ptr [EBX]
//   Label: LAB_004ef298
// 004ef29a: XOR ESI,ESI
// 004ef29c: TEST EDI,EDI
// 004ef29e: JLE 0x004ef2d4
//   XREF to: 004ef2d4 (CONDITIONAL_JUMP)
// 004ef2a0: MOV EAX,dword ptr [ESP + 0xb0]
//   Label: LAB_004ef2a0
//   XREF to: Stack[-0x1c] (READ)
// 004ef2a7: MOV EDX,dword ptr [EBX]
// 004ef2a9: PUSH EAX
// 004ef2aa: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x14] (READ)
// 004ef2b1: IMUL EAX,EDX
// 004ef2b4: ADD EAX,ESI
// 004ef2b6: MOV EDI,dword ptr [EBX + 0x24]
// 004ef2b9: SHL EAX,0x2
// 004ef2bc: PUSH EBP
// 004ef2bd: ADD EAX,EDI
// 004ef2bf: PUSH 0x1
// 004ef2c1: ADD EAX,0x2
// 004ef2c4: PUSH EAX
// 004ef2c5: INC ESI
// 004ef2c6: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004ef2cb: MOV ECX,dword ptr [EBX]
// 004ef2cd: ADD ESP,0x10
// 004ef2d0: CMP ESI,ECX
// 004ef2d2: JL 0x004ef2a0
//   XREF to: 004ef2a0 (CONDITIONAL_JUMP)
// 004ef2d4: MOV EDX,dword ptr [ESP + 0xb8]
//   Label: LAB_004ef2d4
//   XREF to: Stack[-0x14] (READ)
// 004ef2db: INC EDX
// 004ef2dc: MOV ECX,dword ptr [EBX + 0x4]
// 004ef2df: MOV dword ptr [ESP + 0xb8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004ef2e6: CMP EDX,ECX
// 004ef2e8: JL 0x004ef298
//   XREF to: 004ef298 (CONDITIONAL_JUMP)
// 004ef2ea: PUSH 0x10c
//   Label: LAB_004ef2ea
// 004ef2ef: PUSH 0x62e770
//   XREF to: 0062e770 (DATA)
// 004ef2f4: MOV ESI,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x1c] (READ)
// 004ef2fb: PUSH ESI
// 004ef2fc: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004ef301: ADD ESP,0xc
// 004ef304: MOV EDI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[0x8] (READ)
// 004ef30b: PUSH EDI
// 004ef30c: MOV EBP,dword ptr [EBX + 0x28]
// 004ef30f: PUSH EBP
// 004ef310: CALL core_texlist.cpp_CTextureList_load_FUN_005dbe00
//   XREF to: 005dbe00 (UNCONDITIONAL_CALL)
// 004ef315: ADD ESP,0x8
// 004ef318: ADD ESP,0xbc
// 004ef31e: POP EBP
// 004ef31f: POP EDI
// 004ef320: POP ESI
// 004ef321: POP EBX
// 004ef322: LEA EAX,[EAX]
// 004ef328: LEA EDX,[EDX]
// 004ef32e: MOV EAX,EAX
// 004ef330: RET
// 004ef331: MOV ESI,0x62e571
//   Label: LAB_004ef331
//   XREF to: 0062e571 (DATA)
// 004ef336: MOV EAX,0x40
// 004ef33b: PUSH 0x62e584
//   XREF to: 0062e584 (DATA)
// 004ef340: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004ef346: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004ef34b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ef350: ADD ESP,0x4
// 004ef353: JMP 0x004ef0a7
//   XREF to: 004ef0a7 (UNCONDITIONAL_JUMP)
// 004ef358: LEA EAX,[EBP + -0x1]
//   Label: LAB_004ef358
// 004ef35b: MOV dword ptr [ESI + 0x4],EAX
// 004ef35e: MOV EAX,dword ptr [ESI]
// 004ef360: LEA EDX,[EAX + 0x1]
// 004ef363: MOV dword ptr [ESI],EDX
// 004ef365: MOV AL,byte ptr [EAX]
// 004ef367: AND EAX,0xff
// 004ef36c: JMP 0x004ef149
//   XREF to: 004ef149 (UNCONDITIONAL_JUMP)
