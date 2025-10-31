// Name: core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
// Address: 004bd8e0
// Address Range: [[004bd8e0, 004bd92b]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0(CDemonFileManager * file_manager_ptr, char * set_filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdfdf [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930 (004bd930) at 004bd97c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_models_s_00629597
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_load_FUN_00569410
//   core_setedit.cpp_CDemonSet_FUN_00584e70
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
          (CDemonFileManager *file_manager_ptr,char *set_filename)

{
  char *in_stack_0000000c;
  
  crt_stdio_c_fprintf_FUN_005fe6d0
            ((file_manager_ptr->base_filemanager).file_ptr,"models\\%s\n",set_filename);
  core_set_cpp_CDemonSet_load_FUN_00569410(g_CDemonSetPtr,in_stack_0000000c);
  core_setedit_cpp_CDemonSet_FUN_00584e70(g_CDemonSetPtr);
  return;
}


// Assembly code:
// 004bd8e0: PUSH EBX
//   Label: core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
// 004bd8e1: PUSH ESI
// 004bd8e2: PUSH EDI
// 004bd8e3: PUSH EBP
// 004bd8e4: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004bd8e8: PUSH EDX
// 004bd8e9: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004bd8ed: PUSH 0x629597
//   XREF to: 00629597 (DATA)
// 004bd8f2: MOV ECX,dword ptr [EAX]
// 004bd8f4: PUSH ECX
// 004bd8f5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004bd8fa: ADD ESP,0xc
// 004bd8fd: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004bd901: PUSH EBX
// 004bd902: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004bd908: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004bd909: CALL core_set.cpp_CDemonSet_load_FUN_00569410
//   XREF to: 00569410 (UNCONDITIONAL_CALL)
// 004bd90e: ADD ESP,0x8
// 004bd911: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004bd915: MOV EDI,dword ptr [EAX]
// 004bd917: PUSH EDI
// 004bd918: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004bd91e: PUSH EBP
//   XREF to: 03114278 (DATA)
// 004bd91f: CALL core_setedit.cpp_CDemonSet_FUN_00584e70
//   XREF to: 00584e70 (UNCONDITIONAL_CALL)
// 004bd924: ADD ESP,0x8
// 004bd927: POP EBP
// 004bd928: POP EDI
// 004bd929: POP ESI
// 004bd92a: POP EBX
// 004bd92b: RET
