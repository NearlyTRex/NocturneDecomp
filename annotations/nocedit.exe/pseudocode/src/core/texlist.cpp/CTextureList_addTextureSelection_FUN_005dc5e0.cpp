// Name: core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0
// Address: 005dc5e0
// Address Range: [[005dc5e0, 005dc684]]
// Convention: __cdecl
// Signature: int core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0(CTextureList * this_ptr, char * filename)
// Cross-references:
//   core_texlist.cpp_CTextureList_addMasterTextureSelection_FUN_005dc68e (005dc68e) at 005dc697 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_texlist_cpp_00655095
//   TerminatedCString s_CTextureList_addTextureS_006550a9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

int __cdecl
core_texlist_cpp_CTextureList_addTextureSelection_FUN_005dc5e0
          (CTextureList *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *str1;
  
  if (filename == (char *)0x0) {
    filename = this_ptr->master_texture_names[this_ptr->current_master_selection];
  }
  str1 = this_ptr->texture_entries[0].texture_name;
  for (iVar3 = 0; iVar3 < this_ptr->texture_count; iVar3 = iVar3 + 1) {
    iVar2 = crt_string_c_strcmp_FUN_005fef20(str1,filename);
    if (iVar2 == 0) {
      return iVar3;
    }
    str1 = str1 + 0x18;
  }
  do {
    cVar1 = (*(char (*) [16])filename)[0];
    *str1 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = (*(char (*) [16])filename)[1];
    filename = *(char (*) [16])filename + 2;
    str1[1] = cVar1;
    str1 = str1 + 2;
  } while (cVar1 != '\0');
  this_ptr->texture_entries[iVar3].base.count = 0;
  iVar2 = this_ptr->texture_count + 1;
  this_ptr->texture_count = iVar2;
  if (iVar2 < 0x3e9) {
    return iVar3;
  }
  g_CurrentFilename = "..\\core\\texlist.cpp";
  g_CurrentLineNumber = 0x15e;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::addTextureSelection - Too many textures!");
  return iVar3;
}


// Assembly code:
// 005dc5e0: PUSH EBX
//   Label: core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0
// 005dc5e1: PUSH ESI
// 005dc5e2: PUSH EDI
// 005dc5e3: PUSH EBP
// 005dc5e4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005dc5e8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005dc5ec: TEST ESI,ESI
// 005dc5ee: JZ 0x005dc611
//   XREF to: 005dc611 (CONDITIONAL_JUMP)
// 005dc5f0: LEA EDI,[EBP + 0xc]
//   Label: LAB_005dc5f0
// 005dc5f3: XOR EBX,EBX
// 005dc5f5: IMUL EDX,EBX,0x18
//   Label: LAB_005dc5f5
// 005dc5f8: CMP EBX,dword ptr [EBP]
// 005dc5fb: JGE 0x005dc624
//   XREF to: 005dc624 (CONDITIONAL_JUMP)
// 005dc5fd: PUSH ESI
// 005dc5fe: PUSH EDI
// 005dc5ff: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 005dc604: ADD ESP,0x8
// 005dc607: TEST EAX,EAX
// 005dc609: JZ 0x005dc655
//   XREF to: 005dc655 (CONDITIONAL_JUMP)
// 005dc60b: INC EBX
// 005dc60c: ADD EDI,0x18
// 005dc60f: JMP 0x005dc5f5
//   XREF to: 005dc5f5 (UNCONDITIONAL_JUMP)
// 005dc611: MOV EAX,dword ptr [EBP + 0x1a5e8]
//   Label: LAB_005dc611
// 005dc617: LEA ESI,[EBP + 0x6d68]
// 005dc61d: SHL EAX,0x4
// 005dc620: ADD ESI,EAX
// 005dc622: JMP 0x005dc5f0
//   XREF to: 005dc5f0 (UNCONDITIONAL_JUMP)
// 005dc624: PUSH EDI
//   Label: LAB_005dc624
// 005dc625: MOV AL,byte ptr [ESI]
//   Label: LAB_005dc625
// 005dc627: MOV byte ptr [EDI],AL
// 005dc629: CMP AL,0x0
// 005dc62b: JZ 0x005dc63d
//   XREF to: 005dc63d (CONDITIONAL_JUMP)
// 005dc62d: MOV AL,byte ptr [ESI + 0x1]
// 005dc630: ADD ESI,0x2
// 005dc633: MOV byte ptr [EDI + 0x1],AL
// 005dc636: ADD EDI,0x2
// 005dc639: CMP AL,0x0
// 005dc63b: JNZ 0x005dc625
//   XREF to: 005dc625 (CONDITIONAL_JUMP)
// 005dc63d: POP EDI
//   Label: LAB_005dc63d
// 005dc63e: MOV dword ptr [EDX + EBP*0x1 + 0x8],0x0
// 005dc646: MOV ESI,dword ptr [EBP]
// 005dc649: INC ESI
// 005dc64a: MOV dword ptr [EBP],ESI
// 005dc64d: CMP ESI,0x3e8
// 005dc653: JG 0x005dc65c
//   XREF to: 005dc65c (CONDITIONAL_JUMP)
// 005dc655: MOV EAX,EBX
//   Label: LAB_005dc655
// 005dc657: POP EBP
// 005dc658: POP EDI
// 005dc659: POP ESI
// 005dc65a: POP EBX
// 005dc65b: RET
// 005dc65c: MOV EBP,0x655095
//   Label: LAB_005dc65c
//   XREF to: 00655095 (DATA)
// 005dc661: MOV EAX,0x15e
// 005dc666: PUSH 0x6550a9
//   XREF to: 006550a9 (DATA)
// 005dc66b: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005dc671: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005dc676: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dc67b: ADD ESP,0x4
// 005dc67e: MOV EAX,EBX
// 005dc680: POP EBP
// 005dc681: POP EDI
// 005dc682: POP ESI
// 005dc683: POP EBX
// 005dc684: RET
