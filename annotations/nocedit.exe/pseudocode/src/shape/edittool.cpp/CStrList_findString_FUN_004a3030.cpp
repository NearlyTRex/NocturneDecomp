// Name: shape_edittool.cpp_CStrList_findString_FUN_004a3030
// Address: 004a3030
// Address Range: [[004a3030, 004a306e]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
// Cross-references:
//   core_script.cpp_FUN_00562920 (00562920) at 00562d60 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 0056796e [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1fd0 (005b1fd0) at 005b243c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b978c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a38a5 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CStrList_findString_FUN_004a3030(CStrList *this_ptr,char *search_string)

{
  char *str1;
  int iVar1;
  int index;
  char *unaff_EDI;
  
  index = 0;
  if (0 < this_ptr->item_count) {
    do {
      str1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,unaff_EDI);
      if (iVar1 == 0) {
        return index;
      }
      index = index + 1;
    } while (index < this_ptr->item_count);
  }
  return -1;
}


// Assembly code:
// 004a3030: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_findString_FUN_004a3030
// 004a3031: PUSH ESI
// 004a3032: PUSH EDI
// 004a3033: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004a3037: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004a303b: MOV EDX,dword ptr [ESI]
// 004a303d: XOR EBX,EBX
// 004a303f: TEST EDX,EDX
// 004a3041: JLE 0x004a3060
//   XREF to: 004a3060 (CONDITIONAL_JUMP)
// 004a3043: PUSH EDI
//   Label: LAB_004a3043
// 004a3044: PUSH EBX
// 004a3045: PUSH ESI
// 004a3046: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a304b: ADD ESP,0x8
// 004a304e: PUSH EAX
// 004a304f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004a3054: ADD ESP,0x8
// 004a3057: TEST EAX,EAX
// 004a3059: JZ 0x004a3069
//   XREF to: 004a3069 (CONDITIONAL_JUMP)
// 004a305b: INC EBX
// 004a305c: CMP EBX,dword ptr [ESI]
// 004a305e: JL 0x004a3043
//   XREF to: 004a3043 (CONDITIONAL_JUMP)
// 004a3060: MOV EAX,0xffffffff
//   Label: LAB_004a3060
// 004a3065: POP EDI
// 004a3066: POP ESI
// 004a3067: POP EBX
// 004a3068: RET
// 004a3069: MOV EAX,EBX
//   Label: LAB_004a3069
// 004a306b: POP EDI
// 004a306c: POP ESI
// 004a306d: POP EBX
// 004a306e: RET
