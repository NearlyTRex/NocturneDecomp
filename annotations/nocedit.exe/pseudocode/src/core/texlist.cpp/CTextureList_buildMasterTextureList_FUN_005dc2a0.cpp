// Name: core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0
// Address: 005dc2a0
// Address Range: [[005dc2a0, 005dc5de]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList * this_ptr)
// Globals:
//   TerminatedCString s_art_raw_00654ff3
//   TerminatedCString s_core_texlist_cpp_00654ffd
//   TerminatedCString s_Unable_to_build_list_of__00655011
//   TerminatedCString s_Please_wait_building_tex_00655036
//   TerminatedCString s_s_4d_s_0065505c
//   TerminatedCString s_core_texlist_cpp_00655065
//   TerminatedCString s_Too_many_editable_textur_00655079
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_io.c_findCloseWrapper_FUN_00602380
//   crt_io.c_findFirstFileWrapper_FUN_006021f0
//   crt_io.c_findNextFileWrapper_FUN_00602300
//   crt_string.c_strcmp_FUN_005fef20
//   shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
//   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0

#include "nocturne.h"

void __cdecl
core_texlist_cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList *this_ptr)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  BADSPACEBASE *in_ESP;
  HANDLE unaff_EBP;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int unaff_EDI;
  char *pcVar9;
  char *pcVar10;
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000020;
  DWORD DStack_1c4;
  char acStack_1c0 [260];
  char acStack_bc [96];
  char acStack_5c [60];
  HANDLE local_20;
  HANDLE local_18;
  int iVar11;
  
  if (this_ptr->master_texture_count == 0) {
    this_ptr->current_master_selection = 0;
    local_20 = crt_io_c_findFirstFileWrapper_FUN_006021f0
                         ("art\\*.raw",(LPWIN32_FIND_DATAA)&stack0xfffffe20);
    if (local_20 == (HANDLE)0xffffffff) {
      g_CurrentFilename = "..\\core\\texlist.cpp";
      g_CurrentLineNumber = 0xff;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to build list of *.raw files!");
    }
    shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940
              (g_CEditorToolsPtr,"Please wait, building texture list...");
    do {
      pcVar6 = acStack_1c0;
      pcVar9 = acStack_bc;
      do {
        cVar1 = *pcVar6;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      if ((DStack_1c4 == 0x1000) || (DStack_1c4 == 0x10000)) {
        pcVar6 = acStack_bc;
        pcVar9 = (char *)(*(int *)(in_stack_00000010 + 0x6d64) * 0x10 + in_stack_00000010 + 0x6d68);
        do {
          cVar1 = *pcVar6;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        pbVar5 = (byte *)(*(int *)(in_stack_00000010 + 0x6d64) * 0x10 + in_stack_00000010 + 0x6d68);
        bVar2 = *pbVar5;
        while (bVar2 != 0) {
          iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar5);
          *pbVar5 = (byte)iVar3;
          bVar2 = pbVar5[1];
          pbVar5 = pbVar5 + 1;
        }
        if ((*(byte *)(in_stack_00000010 + 0x6d64) & 0x1f) == 0) {
          shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
                    (g_CEditorToolsPtr,"[%4d] %s");
        }
        iVar3 = *(int *)(in_stack_00000010 + 0x6d64) + 1;
        *(int *)(in_stack_00000010 + 0x6d64) = iVar3;
        if (4999 < iVar3) {
          g_CurrentFilename = "..\\core\\texlist.cpp";
          g_CurrentLineNumber = 0x124;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many editable textures!");
        }
      }
      iVar3 = crt_io_c_findNextFileWrapper_FUN_00602300
                        (local_18,(LPWIN32_FIND_DATAA)&stack0xfffffe2c);
    } while (iVar3 == 0);
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    crt_io_c_findCloseWrapper_FUN_00602380(unaff_EBP);
    iVar11 = 0;
    for (iVar3 = 0; iVar3 < *(int *)(in_stack_0000001c + 0x6d64) + -1; iVar3 = iVar3 + 1) {
      if (iVar3 + 1 < *(int *)(in_stack_0000001c + 0x6d64)) {
        pcVar6 = (char *)((iVar3 + 1) * 0x10 + in_stack_0000001c + 0x6d68);
        do {
          pcVar9 = (char *)(in_stack_0000001c + 0x6d68 + iVar11);
          iVar4 = crt_string_c_strcmp_FUN_005fef20(pcVar9,pcVar6);
          if (0 < iVar4) {
            pcVar10 = acStack_5c;
            pcVar7 = pcVar9;
            do {
              cVar1 = *pcVar7;
              *pcVar10 = cVar1;
              pcVar8 = pcVar6;
              if (cVar1 == '\0') break;
              cVar1 = pcVar7[1];
              pcVar7 = pcVar7 + 2;
              pcVar10[1] = cVar1;
              pcVar10 = pcVar10 + 2;
            } while (cVar1 != '\0');
            do {
              cVar1 = *pcVar8;
              *pcVar9 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar8[1];
              pcVar9[1] = cVar1;
              pcVar9 = pcVar9 + 2;
              pcVar8 = pcVar8 + 2;
            } while (cVar1 != '\0');
            pcVar9 = acStack_5c;
            pcVar10 = pcVar6;
            do {
              cVar1 = *pcVar9;
              *pcVar10 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar9[1];
              pcVar9 = pcVar9 + 2;
              pcVar10[1] = cVar1;
              pcVar10 = pcVar10 + 2;
            } while (cVar1 != '\0');
          }
          pcVar6 = pcVar6 + 0x10;
          unaff_EDI = unaff_EDI + 1;
        } while (unaff_EDI < *(int *)(in_stack_00000020 + 0x6d64));
      }
      iVar11 = iVar11 + 0x10;
    }
  }
  return;
}


// Assembly code:
// 005dc2a0: PUSH EBX
//   Label: core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0
// 005dc2a1: PUSH ESI
// 005dc2a2: PUSH EDI
// 005dc2a3: PUSH EBP
// 005dc2a4: SUB ESP,0x1d0
// 005dc2aa: MOV EAX,dword ptr [ESP + 0x1e4]
//   XREF to: Stack[0x4] (READ)
// 005dc2b1: MOV EDX,dword ptr [EAX + 0x6d64]
// 005dc2b7: TEST EDX,EDX
// 005dc2b9: JZ 0x005dc2c6
//   XREF to: 005dc2c6 (CONDITIONAL_JUMP)
// 005dc2bb: ADD ESP,0x1d0
//   Label: LAB_005dc2bb
// 005dc2c1: POP EBP
// 005dc2c2: POP EDI
// 005dc2c3: POP ESI
// 005dc2c4: POP EBX
// 005dc2c5: RET
// 005dc2c6: MOV dword ptr [EAX + 0x1a5e8],EDX
//   Label: LAB_005dc2c6
// 005dc2cc: MOV EAX,ESP
// 005dc2ce: PUSH EAX
// 005dc2cf: PUSH 0x654ff3
//   XREF to: 00654ff3 (DATA)
// 005dc2d4: CALL crt_io.c_findFirstFileWrapper_FUN_006021f0
//   XREF to: 006021f0 (UNCONDITIONAL_CALL)
// 005dc2d9: ADD ESP,0x8
// 005dc2dc: MOV dword ptr [ESP + 0x1bc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005dc2e3: CMP EAX,-0x1
// 005dc2e6: JZ 0x005dc4d6
//   XREF to: 005dc4d6 (CONDITIONAL_JUMP)
// 005dc2ec: PUSH 0x655036
//   Label: LAB_005dc2ec
//   XREF to: 00655036 (DATA)
// 005dc2f1: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005dc2f7: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 005dc2f8: CALL shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
//   XREF to: 0049e940 (UNCONDITIONAL_CALL)
// 005dc2fd: ADD ESP,0x8
// 005dc300: MOV EBP,dword ptr [ESP + 0x1e4]
//   XREF to: Stack[0x4] (READ)
// 005dc307: ADD EBP,0x6d68
// 005dc30d: LEA ESI,[ESP + 0x14]
//   Label: LAB_005dc30d
//   XREF to: Stack[-0x1cc] (DATA)
// 005dc311: LEA EDI,[ESP + 0x118]
//   XREF to: Stack[-0xc8] (DATA)
// 005dc318: PUSH EDI
// 005dc319: MOV AL,byte ptr [ESI]
//   Label: LAB_005dc319
//   XREF to: Stack[-0x1cc] (DATA)
// 005dc31b: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xc8] (DATA)
// 005dc31d: CMP AL,0x0
// 005dc31f: JZ 0x005dc331
//   XREF to: 005dc331 (CONDITIONAL_JUMP)
// 005dc321: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x1cb] (READ)
// 005dc324: ADD ESI,0x2
// 005dc327: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xc7] (WRITE)
// 005dc32a: ADD EDI,0x2
// 005dc32d: CMP AL,0x0
// 005dc32f: JNZ 0x005dc319
//   XREF to: 005dc319 (CONDITIONAL_JUMP)
// 005dc331: POP EDI
//   Label: LAB_005dc331
// 005dc332: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1d0] (READ)
// 005dc336: CMP EDI,0x1000
// 005dc33c: JNZ 0x005dc4fe
//   XREF to: 005dc4fe (CONDITIONAL_JUMP)
// 005dc342: MOV EDI,dword ptr [ESP + 0x1e4]
//   Label: LAB_005dc342
//   XREF to: Stack[0x4] (READ)
// 005dc349: MOV EDI,dword ptr [EDI + 0x6d64]
// 005dc34f: SHL EDI,0x4
// 005dc352: LEA ESI,[ESP + 0x118]
//   XREF to: Stack[-0xc8] (DATA)
// 005dc359: ADD EDI,EBP
// 005dc35b: MOV EBX,dword ptr [ESP + 0x1e4]
//   XREF to: Stack[0x4] (READ)
// 005dc362: PUSH EDI
// 005dc363: MOV AL,byte ptr [ESI]
//   Label: LAB_005dc363
//   XREF to: Stack[-0xc8] (DATA)
// 005dc365: MOV byte ptr [EDI],AL
// 005dc367: CMP AL,0x0
// 005dc369: JZ 0x005dc37b
//   XREF to: 005dc37b (CONDITIONAL_JUMP)
// 005dc36b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0xc7] (READ)
// 005dc36e: ADD ESI,0x2
// 005dc371: MOV byte ptr [EDI + 0x1],AL
// 005dc374: ADD EDI,0x2
// 005dc377: CMP AL,0x0
// 005dc379: JNZ 0x005dc363
//   XREF to: 005dc363 (CONDITIONAL_JUMP)
// 005dc37b: POP EDI
//   Label: LAB_005dc37b
// 005dc37c: MOV EBX,dword ptr [EBX + 0x6d64]
// 005dc382: SHL EBX,0x4
// 005dc385: ADD EBX,EBP
// 005dc387: CMP byte ptr [EBX],0x0
// 005dc38a: JZ 0x005dc3a3
//   XREF to: 005dc3a3 (CONDITIONAL_JUMP)
// 005dc38c: XOR EAX,EAX
//   Label: LAB_005dc38c
// 005dc38e: MOV AL,byte ptr [EBX]
// 005dc390: PUSH EAX
// 005dc391: INC EBX
// 005dc392: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 005dc397: MOV byte ptr [EBX + -0x1],AL
// 005dc39a: MOV DL,byte ptr [EBX]
// 005dc39c: ADD ESP,0x4
// 005dc39f: TEST DL,DL
// 005dc3a1: JNZ 0x005dc38c
//   XREF to: 005dc38c (CONDITIONAL_JUMP)
// 005dc3a3: MOV EAX,dword ptr [ESP + 0x1e4]
//   Label: LAB_005dc3a3
//   XREF to: Stack[0x4] (READ)
// 005dc3aa: TEST byte ptr [EAX + 0x6d64],0x1f
// 005dc3b1: JNZ 0x005dc3dd
//   XREF to: 005dc3dd (CONDITIONAL_JUMP)
// 005dc3b3: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0xc8] (DATA)
// 005dc3ba: PUSH EAX
// 005dc3bb: MOV EAX,dword ptr [ESP + 0x1e8]
//   XREF to: Stack[0x4] (READ)
// 005dc3c2: MOV EDX,dword ptr [EAX + 0x6d64]
// 005dc3c8: PUSH EDX
// 005dc3c9: PUSH 0x65505c
//   XREF to: 0065505c (DATA)
// 005dc3ce: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005dc3d4: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005dc3d5: CALL shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
//   XREF to: 0049e870 (UNCONDITIONAL_CALL)
// 005dc3da: ADD ESP,0x10
// 005dc3dd: MOV EAX,dword ptr [ESP + 0x1e4]
//   Label: LAB_005dc3dd
//   XREF to: Stack[0x4] (READ)
// 005dc3e4: MOV EBX,dword ptr [EAX + 0x6d64]
// 005dc3ea: INC EBX
// 005dc3eb: MOV dword ptr [EAX + 0x6d64],EBX
// 005dc3f1: CMP EBX,0x1388
// 005dc3f7: JL 0x005dc41b
//   XREF to: 005dc41b (CONDITIONAL_JUMP)
// 005dc3f9: MOV EDI,0x655065
//   XREF to: 00655065 (DATA)
// 005dc3fe: MOV EAX,0x124
// 005dc403: PUSH 0x655079
//   XREF to: 00655079 (DATA)
// 005dc408: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005dc40e: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005dc413: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dc418: ADD ESP,0x4
// 005dc41b: MOV EAX,ESP
//   Label: LAB_005dc41b
// 005dc41d: PUSH EAX
// 005dc41e: MOV EDX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x24] (READ)
// 005dc425: PUSH EDX
// 005dc426: CALL crt_io.c_findNextFileWrapper_FUN_00602300
//   XREF to: 00602300 (UNCONDITIONAL_CALL)
// 005dc42b: ADD ESP,0x8
// 005dc42e: TEST EAX,EAX
// 005dc430: JZ 0x005dc30d
//   XREF to: 005dc30d (CONDITIONAL_JUMP)
// 005dc436: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005dc43c: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005dc43d: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 005dc442: ADD ESP,0x4
// 005dc445: MOV EBX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x24] (READ)
// 005dc44c: PUSH EBX
// 005dc44d: CALL crt_io.c_findCloseWrapper_FUN_00602380
//   XREF to: 00602380 (UNCONDITIONAL_CALL)
// 005dc452: ADD ESP,0x4
// 005dc455: XOR ESI,ESI
// 005dc457: MOV EAX,dword ptr [ESP + 0x1e4]
//   XREF to: Stack[0x4] (READ)
// 005dc45e: MOV dword ptr [ESP + 0x1c4],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005dc465: ADD EAX,0x6d68
// 005dc46a: MOV dword ptr [ESP + 0x1c0],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005dc471: MOV dword ptr [ESP + 0x1cc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005dc478: MOV EAX,dword ptr [ESP + 0x1e4]
//   Label: LAB_005dc478
//   XREF to: Stack[0x4] (READ)
// 005dc47f: MOV EAX,dword ptr [EAX + 0x6d64]
// 005dc485: MOV EBP,dword ptr [ESP + 0x1c4]
//   XREF to: Stack[-0x1c] (READ)
// 005dc48c: DEC EAX
// 005dc48d: CMP EAX,EBP
// 005dc48f: JLE 0x005dc2bb
//   XREF to: 005dc2bb (CONDITIONAL_JUMP)
// 005dc495: MOV EBX,dword ptr [ESP + 0x1e4]
//   XREF to: Stack[0x4] (READ)
// 005dc49c: LEA EAX,[EBP + 0x1]
// 005dc49f: MOV EDX,dword ptr [EBX + 0x6d64]
// 005dc4a5: MOV dword ptr [ESP + 0x1b8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005dc4ac: CMP EAX,EDX
// 005dc4ae: JL 0x005dc5b9
//   XREF to: 005dc5b9 (CONDITIONAL_JUMP)
// 005dc4b4: MOV EAX,dword ptr [ESP + 0x1c4]
//   Label: LAB_005dc4b4
//   XREF to: Stack[-0x1c] (READ)
// 005dc4bb: MOV EBP,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x20] (READ)
// 005dc4c2: INC EAX
// 005dc4c3: ADD EBP,0x10
// 005dc4c6: MOV dword ptr [ESP + 0x1c4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005dc4cd: MOV dword ptr [ESP + 0x1c0],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 005dc4d4: JMP 0x005dc478
//   XREF to: 005dc478 (UNCONDITIONAL_JUMP)
// 005dc4d6: MOV ECX,0x654ffd
//   Label: LAB_005dc4d6
//   XREF to: 00654ffd (PARAM)
// 005dc4db: MOV EBX,0xff
// 005dc4e0: PUSH 0x655011
//   XREF to: 00655011 (DATA)
// 005dc4e5: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005dc4eb: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005dc4f1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dc4f6: ADD ESP,0x4
// 005dc4f9: JMP 0x005dc2ec
//   XREF to: 005dc2ec (UNCONDITIONAL_JUMP)
// 005dc4fe: CMP EDI,0x10000
//   Label: LAB_005dc4fe
// 005dc504: JZ 0x005dc342
//   XREF to: 005dc342 (CONDITIONAL_JUMP)
// 005dc50a: JMP 0x005dc41b
//   XREF to: 005dc41b (UNCONDITIONAL_JUMP)
// 005dc50f: MOV ECX,dword ptr [ESP + 0x1b8]
//   Label: LAB_005dc50f
//   XREF to: Stack[-0x28] (READ)
// 005dc516: MOV ESI,dword ptr [ESP + 0x1e4]
//   XREF to: Stack[0x4] (READ)
// 005dc51d: ADD EBX,0x10
// 005dc520: INC ECX
// 005dc521: MOV EDI,dword ptr [ESI + 0x6d64]
// 005dc527: MOV dword ptr [ESP + 0x1b8],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005dc52e: CMP ECX,EDI
// 005dc530: JGE 0x005dc4b4
//   XREF to: 005dc4b4 (CONDITIONAL_JUMP)
// 005dc532: MOV EBP,dword ptr [ESP + 0x1cc]
//   Label: LAB_005dc532
//   XREF to: Stack[-0x14] (READ)
// 005dc539: MOV ECX,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x18] (READ)
// 005dc540: PUSH EBX
// 005dc541: ADD EBP,ECX
// 005dc543: PUSH EBP
// 005dc544: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 005dc549: ADD ESP,0x8
// 005dc54c: TEST EAX,EAX
// 005dc54e: JLE 0x005dc50f
//   XREF to: 005dc50f (CONDITIONAL_JUMP)
// 005dc550: LEA EDI,[ESP + 0x168]
//   XREF to: Stack[-0x78] (DATA)
// 005dc557: MOV ESI,EBP
// 005dc559: PUSH EDI
// 005dc55a: MOV AL,byte ptr [ESI]
//   Label: LAB_005dc55a
// 005dc55c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x78] (DATA)
// 005dc55e: CMP AL,0x0
// 005dc560: JZ 0x005dc572
//   XREF to: 005dc572 (CONDITIONAL_JUMP)
// 005dc562: MOV AL,byte ptr [ESI + 0x1]
// 005dc565: ADD ESI,0x2
// 005dc568: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x77] (WRITE)
// 005dc56b: ADD EDI,0x2
// 005dc56e: CMP AL,0x0
// 005dc570: JNZ 0x005dc55a
//   XREF to: 005dc55a (CONDITIONAL_JUMP)
// 005dc572: POP EDI
//   Label: LAB_005dc572
// 005dc573: MOV ESI,EBX
// 005dc575: MOV EDI,EBP
// 005dc577: PUSH EDI
// 005dc578: MOV AL,byte ptr [ESI]
//   Label: LAB_005dc578
// 005dc57a: MOV byte ptr [EDI],AL
// 005dc57c: CMP AL,0x0
// 005dc57e: JZ 0x005dc590
//   XREF to: 005dc590 (CONDITIONAL_JUMP)
// 005dc580: MOV AL,byte ptr [ESI + 0x1]
// 005dc583: ADD ESI,0x2
// 005dc586: MOV byte ptr [EDI + 0x1],AL
// 005dc589: ADD EDI,0x2
// 005dc58c: CMP AL,0x0
// 005dc58e: JNZ 0x005dc578
//   XREF to: 005dc578 (CONDITIONAL_JUMP)
// 005dc590: POP EDI
//   Label: LAB_005dc590
// 005dc591: LEA ESI,[ESP + 0x168]
//   XREF to: Stack[-0x78] (DATA)
// 005dc598: MOV EDI,EBX
// 005dc59a: PUSH EDI
// 005dc59b: MOV AL,byte ptr [ESI]
//   Label: LAB_005dc59b
//   XREF to: Stack[-0x78] (DATA)
// 005dc59d: MOV byte ptr [EDI],AL
// 005dc59f: CMP AL,0x0
// 005dc5a1: JZ 0x005dc5b3
//   XREF to: 005dc5b3 (CONDITIONAL_JUMP)
// 005dc5a3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x77] (READ)
// 005dc5a6: ADD ESI,0x2
// 005dc5a9: MOV byte ptr [EDI + 0x1],AL
// 005dc5ac: ADD EDI,0x2
// 005dc5af: CMP AL,0x0
// 005dc5b1: JNZ 0x005dc59b
//   XREF to: 005dc59b (CONDITIONAL_JUMP)
// 005dc5b3: POP EDI
//   Label: LAB_005dc5b3
// 005dc5b4: JMP 0x005dc50f
//   XREF to: 005dc50f (UNCONDITIONAL_JUMP)
// 005dc5b9: MOV EBX,dword ptr [ESP + 0x1b8]
//   Label: LAB_005dc5b9
//   XREF to: Stack[-0x28] (READ)
// 005dc5c0: MOV EAX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x20] (READ)
// 005dc5c7: MOV EDX,dword ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x14] (READ)
// 005dc5ce: SHL EBX,0x4
// 005dc5d1: MOV dword ptr [ESP + 0x1c8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005dc5d8: ADD EBX,EDX
// 005dc5da: JMP 0x005dc532
//   XREF to: 005dc532 (UNCONDITIONAL_JUMP)
