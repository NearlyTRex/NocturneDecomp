// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
// Address: 0054c6f0
// Address Range: [[0054c6f0, 0054c70f]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(CPackedBitmapSet * this_ptr, char * filename)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054c162 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 (0054c480) at 0054c4b4 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_strncpy_FUN_00600f40

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
          (CPackedBitmapSet *this_ptr,char *filename)

{
  crt_string_c_strncpy_FUN_00600f40(this_ptr->filename,filename,0x13);
  filename[0x1b] = '\0';
  return;
}


// Assembly code:
// 0054c6f0: PUSH 0x13
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
// 0054c6f2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0054c6f6: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054c6fa: PUSH EDX
// 0054c6fb: ADD EAX,0x8
// 0054c6fe: PUSH EAX
// 0054c6ff: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 0054c704: ADD ESP,0xc
// 0054c707: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0054c70b: MOV byte ptr [EAX + 0x1b],0x0
// 0054c70f: RET
