// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
// Address: 0054b4b0
// Address Range: [[0054b4b0, 0054b51e]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0(CPackedBitmap * this_ptr, int processing_flags)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500 (0054c500) at 0054c52c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_raw_0063f07f
//   TerminatedCString s_pbm_0063f084
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
//   cockpit_pkbitmap.cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
          (CPackedBitmap *this_ptr,int processing_flags)

{
  int iVar1;
  CPackedBitmap *pCVar2;
  CPackedBitmap *str1;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  pCVar2 = this_ptr;
  do {
    str1 = pCVar2;
    if (pCVar2->filename[0] == '.') goto LAB_0054b4d2;
    if (pCVar2->filename[0] == '\0') break;
    str1 = (CPackedBitmap *)(pCVar2->filename + 1);
    if (str1->filename[0] == '.') goto LAB_0054b4d2;
    pCVar2 = (CPackedBitmap *)(pCVar2->filename + 2);
  } while (str1->filename[0] != '\0');
  str1 = (CPackedBitmap *)0x0;
LAB_0054b4d2:
  if (str1 != (CPackedBitmap *)0x0) {
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1->filename,".raw");
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
                (this_ptr,in_stack_0000000c);
      return;
    }
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1->filename,".pbm");
    if (iVar1 == 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910(this_ptr,in_stack_00000010);
      return;
    }
  }
  return;
}


// Assembly code:
// 0054b4b0: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
// 0054b4b1: PUSH ESI
// 0054b4b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0054b4b6: MOV DL,0x2e
// 0054b4b8: MOV ESI,EBX
// 0054b4ba: MOV AL,byte ptr [ESI]
//   Label: LAB_0054b4ba
// 0054b4bc: CMP AL,DL
// 0054b4be: JZ 0x0054b4d2
//   XREF to: 0054b4d2 (CONDITIONAL_JUMP)
// 0054b4c0: CMP AL,0x0
// 0054b4c2: JZ 0x0054b4d0
//   XREF to: 0054b4d0 (CONDITIONAL_JUMP)
// 0054b4c4: INC ESI
// 0054b4c5: MOV AL,byte ptr [ESI]
// 0054b4c7: CMP AL,DL
// 0054b4c9: JZ 0x0054b4d2
//   XREF to: 0054b4d2 (CONDITIONAL_JUMP)
// 0054b4cb: INC ESI
// 0054b4cc: CMP AL,0x0
// 0054b4ce: JNZ 0x0054b4ba
//   XREF to: 0054b4ba (CONDITIONAL_JUMP)
// 0054b4d0: SUB ESI,ESI
//   Label: LAB_0054b4d0
// 0054b4d2: TEST ESI,ESI
//   Label: LAB_0054b4d2
// 0054b4d4: JNZ 0x0054b4d9
//   XREF to: 0054b4d9 (CONDITIONAL_JUMP)
// 0054b4d6: POP ESI
//   Label: LAB_0054b4d6
// 0054b4d7: POP EBX
// 0054b4d8: RET
// 0054b4d9: PUSH 0x63f07f
//   Label: LAB_0054b4d9
//   XREF to: 0063f07f (DATA)
// 0054b4de: PUSH ESI
// 0054b4df: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0054b4e4: ADD ESP,0x8
// 0054b4e7: TEST EAX,EAX
// 0054b4e9: JZ 0x0054b50e
//   XREF to: 0054b50e (CONDITIONAL_JUMP)
// 0054b4eb: PUSH 0x63f084
//   XREF to: 0063f084 (DATA)
// 0054b4f0: PUSH ESI
// 0054b4f1: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0054b4f6: ADD ESP,0x8
// 0054b4f9: TEST EAX,EAX
// 0054b4fb: JNZ 0x0054b4d6
//   XREF to: 0054b4d6 (CONDITIONAL_JUMP)
// 0054b4fd: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0054b501: PUSH ECX
// 0054b502: PUSH EBX
// 0054b503: CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910
//   XREF to: 0054b910 (UNCONDITIONAL_CALL)
// 0054b508: ADD ESP,0x8
// 0054b50b: POP ESI
// 0054b50c: POP EBX
// 0054b50d: RET
// 0054b50e: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_0054b50e
//   XREF to: Stack[0x8] (READ)
// 0054b512: PUSH EDX
// 0054b513: PUSH EBX
// 0054b514: CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
//   XREF to: 0054b080 (UNCONDITIONAL_CALL)
// 0054b519: ADD ESP,0x8
// 0054b51c: POP ESI
// 0054b51d: POP EBX
// 0054b51e: RET
