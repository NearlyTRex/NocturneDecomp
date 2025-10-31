// Name: engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
// Address: 004ba6c0
// Address Range: [[004ba6c0, 004ba739]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
// Cross-references:
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb4c7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bae68 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b7155 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8a49 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bcf44 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc38e [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_getFullPath_FUN_004820c0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
          (CFileManager *this_ptr,CStrList *pod_list,char *target_filename)

{
  char *input_path;
  int iVar1;
  int index;
  BADSPACEBASE *in_ESP;
  char acStack_204 [248];
  char local_10c [12];
  char acStack_100 [248];
  
  index = 0;
  engine_dosio_c_getFullPath_FUN_004820c0(local_10c,target_filename);
  while( true ) {
    if (pod_list->item_count <= index) {
      return -1;
    }
    input_path = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(pod_list,index);
    engine_dosio_c_getFullPath_FUN_004820c0(&stack0xfffffdf8,input_path);
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(acStack_100,acStack_204);
    if (iVar1 == 0) break;
    index = index + 1;
  }
  return index;
}


// Assembly code:
// 004ba6c0: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
// 004ba6c1: PUSH ESI
// 004ba6c2: SUB ESP,0x208
// 004ba6c8: MOV ESI,dword ptr [ESP + 0x218]
//   XREF to: Stack[0x8] (READ)
// 004ba6cf: MOV EDX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0xc] (READ)
// 004ba6d6: PUSH EDX
// 004ba6d7: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x10c] (DATA)
// 004ba6de: PUSH EAX
// 004ba6df: XOR EBX,EBX
// 004ba6e1: CALL engine_dosio.c_getFullPath_FUN_004820c0
//   XREF to: 004820c0 (UNCONDITIONAL_CALL)
// 004ba6e6: ADD ESP,0x8
// 004ba6e9: MOV EAX,dword ptr [ESI]
//   Label: LAB_004ba6e9
// 004ba6eb: CMP EBX,EAX
// 004ba6ed: JL 0x004ba700
//   XREF to: 004ba700 (CONDITIONAL_JUMP)
// 004ba6ef: MOV EAX,0xffffffff
// 004ba6f4: ADD ESP,0x208
// 004ba6fa: POP ESI
// 004ba6fb: POP EBX
// 004ba6fc: RET
// 004ba6fd: INC EBX
//   Label: LAB_004ba6fd
// 004ba6fe: JMP 0x004ba6e9
//   XREF to: 004ba6e9 (UNCONDITIONAL_JUMP)
// 004ba700: PUSH EBX
//   Label: LAB_004ba700
// 004ba701: PUSH ESI
// 004ba702: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004ba707: ADD ESP,0x8
// 004ba70a: PUSH EAX
// 004ba70b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x210] (DATA)
// 004ba70f: PUSH EAX
// 004ba710: CALL engine_dosio.c_getFullPath_FUN_004820c0
//   XREF to: 004820c0 (UNCONDITIONAL_CALL)
// 004ba715: ADD ESP,0x8
// 004ba718: MOV EAX,ESP
// 004ba71a: PUSH EAX
// 004ba71b: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x10c] (DATA)
// 004ba722: PUSH EAX
// 004ba723: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004ba728: ADD ESP,0x8
// 004ba72b: TEST EAX,EAX
// 004ba72d: JNZ 0x004ba6fd
//   XREF to: 004ba6fd (CONDITIONAL_JUMP)
// 004ba72f: MOV EAX,EBX
// 004ba731: ADD ESP,0x208
// 004ba737: POP ESI
// 004ba738: POP EBX
// 004ba739: RET
