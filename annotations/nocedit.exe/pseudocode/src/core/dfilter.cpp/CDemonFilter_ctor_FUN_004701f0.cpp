// Name: core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0
// Address: 004701f0
// Address Range: [[004701f0, 00470230]]
// Convention: __cdecl
// Signature: CDemonFilter * core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0(CDemonFilter * this_ptr)
// Cross-references:
//   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 (00470060) at 004700eb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_unnamed_0061e541
//   undefined4 s_nnamed_0061e542
//   undefined4 s_named_0061e543
//   undefined4 s_amed_0061e544

#include "nocturne.h"

CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_ctor_FUN_004701f0(CDemonFilter *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  this_ptr->data_buffer = (void *)0x0;
  pcVar2 = "unnamed";
  this_ptr->size = 0x40;
  pcVar3 = this_ptr->name;
  this_ptr->count = 0x40;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return this_ptr;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return this_ptr;
}


// Assembly code:
// 004701f0: PUSH ESI
//   Label: core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0
// 004701f1: PUSH EDI
// 004701f2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004701f6: MOV dword ptr [EDX + 0x48],0x0
// 004701fd: MOV ESI,0x61e541
//   XREF to: 0061e541 (DATA)
// 00470202: MOV dword ptr [EDX],0x40
// 00470208: LEA EDI,[EDX + 0x8]
// 0047020b: MOV dword ptr [EDX + 0x4],0x40
// 00470212: PUSH EDI
// 00470213: MOV AL,byte ptr [ESI]
//   Label: LAB_00470213
//   XREF to: 0061e541 (READ)
//   XREF to: 0061e543 (READ)
// 00470215: MOV byte ptr [EDI],AL
// 00470217: CMP AL,0x0
// 00470219: JZ 0x0047022b
//   XREF to: 0047022b (CONDITIONAL_JUMP)
// 0047021b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061e542 (READ)
//   XREF to: 0061e544 (READ)
// 0047021e: ADD ESI,0x2
// 00470221: MOV byte ptr [EDI + 0x1],AL
// 00470224: ADD EDI,0x2
// 00470227: CMP AL,0x0
// 00470229: JNZ 0x00470213
//   XREF to: 00470213 (CONDITIONAL_JUMP)
// 0047022b: POP EDI
//   Label: LAB_0047022b
// 0047022c: MOV EAX,EDX
// 0047022e: POP EDI
// 0047022f: POP ESI
// 00470230: RET
