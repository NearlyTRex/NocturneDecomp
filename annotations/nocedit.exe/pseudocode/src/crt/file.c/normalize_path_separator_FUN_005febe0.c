// Name: crt_file.c_normalize_path_separator_FUN_005febe0
// Address: 005febe0
// Address Range: [[005febe0, 005febfb]]
// Convention: __cdecl
// Signature: wchar_t crt_file.c_normalize_path_separator_FUN_005febe0(wchar_t ch, wchar_t * preferred_separator)
// Cross-references:
//   crt_file.c_makepath_FUN_005febfc (005febfc) at 005fed2a [UNCONDITIONAL_CALL]

#include "nocturne.h"

wchar_t __cdecl
crt_file_c_normalize_path_separator_FUN_005febe0(wchar_t ch,wchar_t *preferred_separator)

{
  undefined2 in_stack_00000006;
  
  if ((_ch == 0x5c) || (_ch == 0x2f)) {
    if (*(int *)preferred_separator == 0) {
      *(int *)preferred_separator = _ch;
    }
    _ch = *(int *)preferred_separator;
  }
  return (wchar_t)_ch;
}


// Assembly code:
// 005febe0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_file.c_normalize_path_separator_FUN_005febe0
//   XREF to: Stack[0x4] (READ)
// 005febe4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005febe8: CMP EAX,0x5c
// 005febeb: JZ 0x005febf2
//   XREF to: 005febf2 (CONDITIONAL_JUMP)
// 005febed: CMP EAX,0x2f
// 005febf0: JNZ 0x005febfb
//   XREF to: 005febfb (CONDITIONAL_JUMP)
// 005febf2: CMP dword ptr [EDX],0x0
//   Label: LAB_005febf2
// 005febf5: JNZ 0x005febf9
//   XREF to: 005febf9 (CONDITIONAL_JUMP)
// 005febf7: MOV dword ptr [EDX],EAX
// 005febf9: MOV EAX,dword ptr [EDX]
//   Label: LAB_005febf9
// 005febfb: RET
//   Label: LAB_005febfb
