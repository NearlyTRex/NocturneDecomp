// Name: engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640
// Address: 004b5640
// Address Range: [[004b5640, 004b5904]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640(CFileManager * this_ptr, char * filename_list)
// Cross-references:
//   engine_fileio.cpp_CFileManager_load_FUN_004b6c00 (004b6c00) at 004b6cab [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_00627633
//   TerminatedCString s_Too_many_files_get_Mark_00627648
//   TerminatedCString s_art_00627662
//   TerminatedCString s_art_00627666
//   TerminatedCString s_raw_0062766b
//   TerminatedCString s_raw_0062766f
//   TerminatedCString s_OPA_00627674
//   TerminatedCString s_s_is_not_the_same_size_a_00627678
//   TerminatedCString s_engine_fileio_cpp_00627696
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strcmp_FUN_005fef20
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_getFileSize_FUN_00481880
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640
          (CFileManager *this_ptr,char *filename_list)

{
  char cVar1;
  int iVar2;
  char (*pacVar3) [128];
  BADSPACEBASE *in_ESP;
  int iVar4;
  char *pcVar5;
  char (*pacVar6) [128];
  char *pcVar7;
  CFileManager *in_stack_0000002c;
  char acStack_558 [220];
  char local_47c [4];
  char acStack_478 [4];
  char acStack_474 [12];
  char acStack_468 [236];
  char local_37c [12];
  char acStack_370 [4];
  char acStack_36c [240];
  char local_27c [20];
  char acStack_268 [268];
  char acStack_15c [4];
  char acStack_158 [164];
  char local_b4 [80];
  char local_64 [28];
  char acStack_48 [52];
  char (*local_14) [128];
  
  pcVar7 = local_64;
  pcVar5 = filename_list;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar7 = local_64;
  do {
    pcVar5 = pcVar7;
    if (*pcVar7 == ',') goto LAB_004b5693;
    if (*pcVar7 == '\0') break;
    pcVar5 = pcVar7 + 1;
    if (*pcVar5 == ',') goto LAB_004b5693;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_004b5693:
  if (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
  }
  pacVar3 = this_ptr->file_entries;
  local_14 = pacVar3;
  iVar4 = 0;
  if (0 < this_ptr->tracked_file_count) {
    do {
      pcVar7 = local_b4;
      pacVar6 = pacVar3;
      do {
        cVar1 = (*pacVar6)[0];
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = (*pacVar6)[1];
        pacVar6 = (char (*) [128])(*pacVar6 + 2);
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar7 = local_b4;
      do {
        pcVar5 = pcVar7;
        if (*pcVar7 == ',') goto LAB_004b5706;
        if (*pcVar7 == '\0') break;
        pcVar5 = pcVar7 + 1;
        if (*pcVar5 == ',') goto LAB_004b5706;
        pcVar7 = pcVar7 + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_004b5706:
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
      }
      iVar2 = crt_string_c_strcmp_FUN_005fef20(local_64,local_b4);
      if (iVar2 == 0) {
        return;
      }
      iVar4 = iVar4 + 1;
      pacVar3 = pacVar3 + 1;
    } while (iVar4 < this_ptr->tracked_file_count);
  }
  pacVar3 = local_14 + this_ptr->tracked_file_count;
  do {
    cVar1 = *filename_list;
    (*pacVar3)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename_list[1];
    filename_list = filename_list + 2;
    (*pacVar3)[1] = cVar1;
    pacVar3 = (char (*) [128])(*pacVar3 + 2);
  } while (cVar1 != '\0');
  iVar4 = this_ptr->tracked_file_count + 1;
  this_ptr->tracked_file_count = iVar4;
  if (9999 < iVar4) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x767;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many files - get Mark");
  }
  engine_dosio_c_splitPath_FUN_00481f20(local_64,(char *)0x0,local_47c,local_27c,local_37c);
  iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_478,"art");
  if ((iVar4 != 0) &&
     (iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_474,"art\\"), iVar4 != 0)) {
    return;
  }
  iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_370,"raw");
  if ((iVar4 != 0) &&
     (iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_36c,".raw"), iVar4 != 0)) {
    return;
  }
  engine_dosio_c_makePath_FUN_00481f50
            (&stack0xfffffa94,(char *)0x0,acStack_468,acStack_268,"OPA");
  iVar4 = engine_dosio_c_getFileSize_FUN_00481880((char *)0x0,&stack0xfffffa98);
  if (iVar4 < 0) {
    return;
  }
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880((char *)0x0,acStack_48);
  if (iVar4 != iVar2) {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_15c,"%s is not the same size as %s");
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x786;
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_158);
  }
  engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640(in_stack_0000002c,acStack_558);
  return;
}


// Assembly code:
// 004b5640: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640
// 004b5641: PUSH ESI
// 004b5642: PUSH EDI
// 004b5643: PUSH EBP
// 004b5644: SUB ESP,0x570
// 004b564a: MOV ESI,dword ptr [ESP + 0x588]
//   XREF to: Stack[0x8] (READ)
// 004b5651: LEA EDI,[ESP + 0x51c]
//   XREF to: Stack[-0x64] (DATA)
// 004b5658: MOV DL,0x2c
// 004b565a: PUSH EDI
// 004b565b: MOV AL,byte ptr [ESI]
//   Label: LAB_004b565b
// 004b565d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x64] (DATA)
// 004b565f: CMP AL,0x0
// 004b5661: JZ 0x004b5673
//   XREF to: 004b5673 (CONDITIONAL_JUMP)
// 004b5663: MOV AL,byte ptr [ESI + 0x1]
// 004b5666: ADD ESI,0x2
// 004b5669: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x63] (WRITE)
// 004b566c: ADD EDI,0x2
// 004b566f: CMP AL,0x0
// 004b5671: JNZ 0x004b565b
//   XREF to: 004b565b (CONDITIONAL_JUMP)
// 004b5673: POP EDI
//   Label: LAB_004b5673
// 004b5674: LEA ESI,[ESP + 0x51c]
//   XREF to: Stack[-0x64] (DATA)
// 004b567b: MOV AL,byte ptr [ESI]
//   Label: LAB_004b567b
//   XREF to: Stack[-0x64] (DATA)
// 004b567d: CMP AL,DL
// 004b567f: JZ 0x004b5693
//   XREF to: 004b5693 (CONDITIONAL_JUMP)
// 004b5681: CMP AL,0x0
// 004b5683: JZ 0x004b5691
//   XREF to: 004b5691 (CONDITIONAL_JUMP)
// 004b5685: INC ESI
// 004b5686: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x63] (DATA)
// 004b5688: CMP AL,DL
// 004b568a: JZ 0x004b5693
//   XREF to: 004b5693 (CONDITIONAL_JUMP)
// 004b568c: INC ESI
// 004b568d: CMP AL,0x0
// 004b568f: JNZ 0x004b567b
//   XREF to: 004b567b (CONDITIONAL_JUMP)
// 004b5691: SUB ESI,ESI
//   Label: LAB_004b5691
// 004b5693: TEST ESI,ESI
//   Label: LAB_004b5693
// 004b5695: JNZ 0x004b584a
//   XREF to: 004b584a (CONDITIONAL_JUMP)
// 004b569b: MOV EAX,dword ptr [ESP + 0x584]
//   Label: LAB_004b569b
//   XREF to: Stack[0x4] (READ)
// 004b56a2: ADD EAX,0x8
// 004b56a5: MOV dword ptr [ESP + 0x56c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004b56ac: MOV EBX,EAX
// 004b56ae: MOV EAX,dword ptr [ESP + 0x584]
//   XREF to: Stack[0x4] (READ)
// 004b56b5: MOV EDX,dword ptr [EAX + 0x4]
// 004b56b8: XOR EBP,EBP
// 004b56ba: TEST EDX,EDX
// 004b56bc: JLE 0x004b5742
//   XREF to: 004b5742 (CONDITIONAL_JUMP)
// 004b56c2: LEA EDI,[ESP + 0x4cc]
//   Label: LAB_004b56c2
//   XREF to: Stack[-0xb4] (DATA)
// 004b56c9: MOV ESI,EBX
// 004b56cb: MOV DL,0x2c
// 004b56cd: PUSH EDI
// 004b56ce: MOV AL,byte ptr [ESI]
//   Label: LAB_004b56ce
// 004b56d0: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xb4] (DATA)
// 004b56d2: CMP AL,0x0
// 004b56d4: JZ 0x004b56e6
//   XREF to: 004b56e6 (CONDITIONAL_JUMP)
// 004b56d6: MOV AL,byte ptr [ESI + 0x1]
// 004b56d9: ADD ESI,0x2
// 004b56dc: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xb3] (WRITE)
// 004b56df: ADD EDI,0x2
// 004b56e2: CMP AL,0x0
// 004b56e4: JNZ 0x004b56ce
//   XREF to: 004b56ce (CONDITIONAL_JUMP)
// 004b56e6: POP EDI
//   Label: LAB_004b56e6
// 004b56e7: LEA ESI,[ESP + 0x4cc]
//   XREF to: Stack[-0xb4] (DATA)
// 004b56ee: MOV AL,byte ptr [ESI]
//   Label: LAB_004b56ee
//   XREF to: Stack[-0xb4] (DATA)
// 004b56f0: CMP AL,DL
// 004b56f2: JZ 0x004b5706
//   XREF to: 004b5706 (CONDITIONAL_JUMP)
// 004b56f4: CMP AL,0x0
// 004b56f6: JZ 0x004b5704
//   XREF to: 004b5704 (CONDITIONAL_JUMP)
// 004b56f8: INC ESI
// 004b56f9: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0xb3] (DATA)
// 004b56fb: CMP AL,DL
// 004b56fd: JZ 0x004b5706
//   XREF to: 004b5706 (CONDITIONAL_JUMP)
// 004b56ff: INC ESI
// 004b5700: CMP AL,0x0
// 004b5702: JNZ 0x004b56ee
//   XREF to: 004b56ee (CONDITIONAL_JUMP)
// 004b5704: SUB ESI,ESI
//   Label: LAB_004b5704
// 004b5706: TEST ESI,ESI
//   Label: LAB_004b5706
// 004b5708: JZ 0x004b570d
//   XREF to: 004b570d (CONDITIONAL_JUMP)
// 004b570a: MOV byte ptr [ESI],0x0
//   XREF to: Stack[-0xb1] (DATA)
// 004b570d: LEA EAX,[ESP + 0x4cc]
//   Label: LAB_004b570d
//   XREF to: Stack[-0xb4] (DATA)
// 004b5714: PUSH EAX
// 004b5715: LEA EAX,[ESP + 0x520]
//   XREF to: Stack[-0x64] (DATA)
// 004b571c: PUSH EAX
// 004b571d: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004b5722: ADD ESP,0x8
// 004b5725: TEST EAX,EAX
// 004b5727: JZ 0x004b583f
//   XREF to: 004b583f (CONDITIONAL_JUMP)
// 004b572d: MOV EAX,dword ptr [ESP + 0x584]
//   XREF to: Stack[0x4] (READ)
// 004b5734: INC EBP
// 004b5735: MOV ECX,dword ptr [EAX + 0x4]
// 004b5738: ADD EBX,0x80
// 004b573e: CMP EBP,ECX
// 004b5740: JL 0x004b56c2
//   XREF to: 004b56c2 (CONDITIONAL_JUMP)
// 004b5742: MOV EDI,dword ptr [ESP + 0x584]
//   Label: LAB_004b5742
//   XREF to: Stack[0x4] (READ)
// 004b5749: MOV EDI,dword ptr [EDI + 0x4]
// 004b574c: MOV EBX,dword ptr [ESP + 0x56c]
//   XREF to: Stack[-0x14] (READ)
// 004b5753: SHL EDI,0x7
// 004b5756: MOV ESI,dword ptr [ESP + 0x588]
//   XREF to: Stack[0x8] (READ)
// 004b575d: ADD EDI,EBX
// 004b575f: PUSH EDI
// 004b5760: MOV AL,byte ptr [ESI]
//   Label: LAB_004b5760
// 004b5762: MOV byte ptr [EDI],AL
// 004b5764: CMP AL,0x0
// 004b5766: JZ 0x004b5778
//   XREF to: 004b5778 (CONDITIONAL_JUMP)
// 004b5768: MOV AL,byte ptr [ESI + 0x1]
// 004b576b: ADD ESI,0x2
// 004b576e: MOV byte ptr [EDI + 0x1],AL
// 004b5771: ADD EDI,0x2
// 004b5774: CMP AL,0x0
// 004b5776: JNZ 0x004b5760
//   XREF to: 004b5760 (CONDITIONAL_JUMP)
// 004b5778: POP EDI
//   Label: LAB_004b5778
// 004b5779: MOV EAX,dword ptr [ESP + 0x584]
//   XREF to: Stack[0x4] (READ)
// 004b5780: MOV ESI,dword ptr [EAX + 0x4]
// 004b5783: INC ESI
// 004b5784: MOV dword ptr [EAX + 0x4],ESI
// 004b5787: CMP ESI,0x2710
// 004b578d: JL 0x004b57b1
//   XREF to: 004b57b1 (CONDITIONAL_JUMP)
// 004b578f: MOV EBP,0x627633
//   XREF to: 00627633 (DATA)
// 004b5794: MOV EAX,0x767
// 004b5799: PUSH 0x627648
//   XREF to: 00627648 (DATA)
// 004b579e: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004b57a4: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004b57a9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b57ae: ADD ESP,0x4
// 004b57b1: LEA EAX,[ESP + 0x204]
//   Label: LAB_004b57b1
//   XREF to: Stack[-0x37c] (DATA)
// 004b57b8: PUSH EAX
// 004b57b9: LEA EAX,[ESP + 0x308]
//   XREF to: Stack[-0x27c] (DATA)
// 004b57c0: PUSH EAX
// 004b57c1: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x47c] (DATA)
// 004b57c8: PUSH EAX
// 004b57c9: PUSH 0x0
// 004b57cb: LEA EAX,[ESP + 0x52c]
//   XREF to: Stack[-0x64] (DATA)
// 004b57d2: PUSH EAX
// 004b57d3: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004b57d8: ADD ESP,0x14
// 004b57db: PUSH 0x627662
//   XREF to: 00627662 (DATA)
// 004b57e0: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x47c] (DATA)
// 004b57e7: PUSH EAX
// 004b57e8: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b57ed: ADD ESP,0x8
// 004b57f0: TEST EAX,EAX
// 004b57f2: JZ 0x004b580d
//   XREF to: 004b580d (CONDITIONAL_JUMP)
// 004b57f4: PUSH 0x627666
//   XREF to: 00627666 (DATA)
// 004b57f9: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x47c] (DATA)
// 004b5800: PUSH EAX
// 004b5801: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b5806: ADD ESP,0x8
// 004b5809: TEST EAX,EAX
// 004b580b: JNZ 0x004b583f
//   XREF to: 004b583f (CONDITIONAL_JUMP)
// 004b580d: PUSH 0x62766b
//   Label: LAB_004b580d
//   XREF to: 0062766b (DATA)
// 004b5812: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x37c] (DATA)
// 004b5819: PUSH EAX
// 004b581a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b581f: ADD ESP,0x8
// 004b5822: TEST EAX,EAX
// 004b5824: JZ 0x004b5852
//   XREF to: 004b5852 (CONDITIONAL_JUMP)
// 004b5826: PUSH 0x62766f
//   XREF to: 0062766f (DATA)
// 004b582b: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x37c] (DATA)
// 004b5832: PUSH EAX
// 004b5833: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b5838: ADD ESP,0x8
// 004b583b: TEST EAX,EAX
// 004b583d: JZ 0x004b5852
//   XREF to: 004b5852 (CONDITIONAL_JUMP)
// 004b583f: ADD ESP,0x570
//   Label: LAB_004b583f
// 004b5845: POP EBP
// 004b5846: POP EDI
// 004b5847: POP ESI
// 004b5848: POP EBX
// 004b5849: RET
// 004b584a: MOV byte ptr [ESI],0x0
//   Label: LAB_004b584a
// 004b584d: JMP 0x004b569b
//   XREF to: 004b569b (UNCONDITIONAL_JUMP)
// 004b5852: PUSH 0x627674
//   Label: LAB_004b5852
//   XREF to: 00627674 (DATA)
// 004b5857: LEA EAX,[ESP + 0x308]
//   XREF to: Stack[-0x27c] (DATA)
// 004b585e: PUSH EAX
// 004b585f: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x47c] (DATA)
// 004b5866: PUSH EAX
// 004b5867: PUSH 0x0
// 004b5869: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x580] (DATA)
// 004b586d: PUSH EAX
// 004b586e: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b5873: ADD ESP,0x14
// 004b5876: MOV EAX,ESP
// 004b5878: PUSH EAX
// 004b5879: PUSH 0x0
// 004b587b: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 004b5880: MOV EBX,EAX
// 004b5882: ADD ESP,0x8
// 004b5885: TEST EAX,EAX
// 004b5887: JL 0x004b583f
//   XREF to: 004b583f (CONDITIONAL_JUMP)
// 004b5889: LEA EAX,[ESP + 0x51c]
//   XREF to: Stack[-0x64] (DATA)
// 004b5890: PUSH EAX
// 004b5891: PUSH 0x0
// 004b5893: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 004b5898: ADD ESP,0x8
// 004b589b: CMP EBX,EAX
// 004b589d: JZ 0x004b58e7
//   XREF to: 004b58e7 (CONDITIONAL_JUMP)
// 004b589f: LEA EAX,[ESP + 0x51c]
//   XREF to: Stack[-0x64] (DATA)
// 004b58a6: PUSH EAX
// 004b58a7: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x580] (DATA)
// 004b58ab: PUSH EAX
// 004b58ac: PUSH 0x627678
//   XREF to: 00627678 (DATA)
// 004b58b1: LEA EAX,[ESP + 0x410]
//   XREF to: Stack[-0x17c] (DATA)
// 004b58b8: PUSH EAX
// 004b58b9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b58be: MOV EDX,0x627696
//   XREF to: 00627696 (PARAM)
// 004b58c3: ADD ESP,0x10
// 004b58c6: LEA EAX,[ESP + 0x404]
//   XREF to: Stack[-0x17c] (DATA)
// 004b58cd: MOV ECX,0x786
// 004b58d2: PUSH EAX
// 004b58d3: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b58d9: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b58df: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b58e4: ADD ESP,0x4
// 004b58e7: MOV EAX,ESP
//   Label: LAB_004b58e7
// 004b58e9: PUSH EAX
// 004b58ea: MOV EBX,dword ptr [ESP + 0x588]
//   XREF to: Stack[0x4] (READ)
// 004b58f1: PUSH EBX
// 004b58f2: CALL engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640
//   XREF to: 004b5640 (UNCONDITIONAL_CALL)
// 004b58f7: ADD ESP,0x8
// 004b58fa: ADD ESP,0x570
// 004b5900: POP EBP
// 004b5901: POP EDI
// 004b5902: POP ESI
// 004b5903: POP EBX
// 004b5904: RET
