// Name: core_texlist.cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0
// Address: 005dc6c0
// Address Range: [[005dc6c0, 005dc755]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0(CTextureList * this_ptr, char * filename)
// Globals:
//   TerminatedCString s_core_texlist_cpp_006550e0
//   TerminatedCString s_CTextureList_setMasterTe_006550f4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

void __cdecl
core_texlist_cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0
          (CTextureList *this_ptr,char *filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  char (*str2) [16];
  int local_14;
  
  iVar3 = 0;
  local_14 = -1;
  iVar1 = local_14;
  if (0 < this_ptr->master_texture_count) {
    str2 = this_ptr->master_texture_names;
    do {
      iVar2 = crt_string_c_strcmp_FUN_005fef20(filename,*str2);
      iVar1 = iVar3;
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 1;
      str2 = str2 + 1;
      iVar1 = local_14;
    } while (iVar3 < this_ptr->master_texture_count);
  }
  local_14 = iVar1;
  if (local_14 == -1) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 399;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::setMasterTextureSelection - Texture %s not found!",filename);
    this_ptr->current_master_selection = unaff_EBP;
    return;
  }
  this_ptr->current_master_selection = local_14;
  return;
}


// Assembly code:
// 005dc6c0: PUSH EBX
//   Label: core_texlist.cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0
// 005dc6c1: PUSH ESI
// 005dc6c2: PUSH EDI
// 005dc6c3: PUSH EBP
// 005dc6c4: SUB ESP,0x4
// 005dc6c7: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005dc6cb: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005dc6cf: MOV EDX,0xffffffff
// 005dc6d4: MOV ECX,dword ptr [EDI + 0x6d64]
// 005dc6da: XOR EBX,EBX
// 005dc6dc: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 005dc6df: TEST ECX,ECX
// 005dc6e1: JLE 0x005dc705
//   XREF to: 005dc705 (CONDITIONAL_JUMP)
// 005dc6e3: LEA ESI,[EDI + 0x6d68]
// 005dc6e9: PUSH ESI
//   Label: LAB_005dc6e9
// 005dc6ea: PUSH EBP
// 005dc6eb: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 005dc6f0: ADD ESP,0x8
// 005dc6f3: TEST EAX,EAX
// 005dc6f5: JZ 0x005dc71c
//   XREF to: 005dc71c (CONDITIONAL_JUMP)
// 005dc6f7: INC EBX
// 005dc6f8: MOV EAX,dword ptr [EDI + 0x6d64]
// 005dc6fe: ADD ESI,0x10
// 005dc701: CMP EBX,EAX
// 005dc703: JL 0x005dc6e9
//   XREF to: 005dc6e9 (CONDITIONAL_JUMP)
// 005dc705: CMP dword ptr [ESP],-0x1
//   Label: LAB_005dc705
//   XREF to: Stack[-0x14] (DATA)
// 005dc709: JZ 0x005dc721
//   XREF to: 005dc721 (CONDITIONAL_JUMP)
// 005dc70b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005dc70e: MOV dword ptr [EDI + 0x1a5e8],EAX
// 005dc714: ADD ESP,0x4
// 005dc717: POP EBP
// 005dc718: POP EDI
// 005dc719: POP ESI
// 005dc71a: POP EBX
// 005dc71b: RET
// 005dc71c: MOV dword ptr [ESP],EBX
//   Label: LAB_005dc71c
//   XREF to: Stack[-0x14] (DATA)
// 005dc71f: JMP 0x005dc705
//   XREF to: 005dc705 (UNCONDITIONAL_JUMP)
// 005dc721: PUSH EBP
//   Label: LAB_005dc721
// 005dc722: MOV ECX,0x6550e0
//   XREF to: 006550e0 (DATA)
// 005dc727: MOV EBX,0x18f
// 005dc72c: PUSH 0x6550f4
//   XREF to: 006550f4 (DATA)
// 005dc731: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005dc737: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005dc73d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dc742: ADD ESP,0x8
// 005dc745: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005dc748: MOV dword ptr [EDI + 0x1a5e8],EAX
// 005dc74e: ADD ESP,0x4
// 005dc751: POP EBP
// 005dc752: POP EDI
// 005dc753: POP ESI
// 005dc754: POP EBX
// 005dc755: RET
