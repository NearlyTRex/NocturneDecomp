// Name: shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
// Address: 0050eea0
// Address Range: [[0050eea0, 0050eee4]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead * header, char * source_filename)
// Cross-references:
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350 (0050f350) at 0050f404 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250 (0050f250) at 0050f2fc [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f665 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_unknown_00635ded
//   undefined4 s_unknown)_00635dee
//   undefined4 s_nknown)_00635def
//   undefined4 s_known)_00635df0
// Function calls:
//   crt_string.c_splitpath_FUN_005ff178

#include "nocturne.h"

void __cdecl
shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead *header,char *source_filename)

{
  char cVar1;
  char *pcVar2;
  char *fname;
  
  fname = header->source_file;
  if (source_filename != (char *)0x0) {
    crt_string_c_splitpath_FUN_005ff178(source_filename,(char *)0x0,(char *)0x0,fname,(char *)0x0);
    return;
  }
  pcVar2 = "(unknown)";
  do {
    cVar1 = *pcVar2;
    *fname = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    fname[1] = cVar1;
    fname = fname + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 0050eea0: PUSH EDI
//   Label: shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
// 0050eea1: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050eea5: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050eea9: ADD EDI,0xc
// 0050eeac: TEST EAX,EAX
// 0050eeae: JNZ 0x0050eed3
//   XREF to: 0050eed3 (CONDITIONAL_JUMP)
// 0050eeb0: PUSH ESI
// 0050eeb1: MOV ESI,0x635ded
//   XREF to: 00635ded (DATA)
// 0050eeb6: PUSH EDI
// 0050eeb7: MOV AL,byte ptr [ESI]
//   Label: LAB_0050eeb7
//   XREF to: 00635ded (READ)
//   XREF to: 00635def (READ)
// 0050eeb9: MOV byte ptr [EDI],AL
// 0050eebb: CMP AL,0x0
// 0050eebd: JZ 0x0050eecf
//   XREF to: 0050eecf (CONDITIONAL_JUMP)
// 0050eebf: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00635dee (READ)
//   XREF to: 00635df0 (READ)
// 0050eec2: ADD ESI,0x2
// 0050eec5: MOV byte ptr [EDI + 0x1],AL
// 0050eec8: ADD EDI,0x2
// 0050eecb: CMP AL,0x0
// 0050eecd: JNZ 0x0050eeb7
//   XREF to: 0050eeb7 (CONDITIONAL_JUMP)
// 0050eecf: POP EDI
//   Label: LAB_0050eecf
// 0050eed0: POP ESI
// 0050eed1: POP EDI
// 0050eed2: RET
// 0050eed3: PUSH 0x0
//   Label: LAB_0050eed3
// 0050eed5: PUSH EDI
// 0050eed6: PUSH 0x0
// 0050eed8: PUSH 0x0
// 0050eeda: PUSH EAX
// 0050eedb: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0050eee0: ADD ESP,0x14
// 0050eee3: POP EDI
// 0050eee4: RET
