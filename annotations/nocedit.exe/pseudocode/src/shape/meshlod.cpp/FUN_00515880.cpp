// Name: shape_meshlod.cpp_FUN_00515880
// Address: 00515880
// Address Range: [[00515880, 00515944]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00515880()
// Cross-references:
//   shape_meshlod.cpp_FreeSomething1_FUN_00515970 (00515970) at 00515aa8 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_LodMesh_copy_FUN_00515860 (00515860) at 00515866 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_LodMesh_ctor_FUN_00515840 (00515840) at 00515846 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_00515880(undefined4 param_1) */

void shape_meshlod_cpp_FUN_00515880(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[0xf] = 0;
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[0x10] = 0;
  in_stack_00000004[3] = 0;
  in_stack_00000004[0xd] = 0;
  in_stack_00000004[0x17] = 0;
  in_stack_00000004[0x18] = 0;
  in_stack_00000004[0x11] = 0;
  in_stack_00000004[0x12] = 0;
  in_stack_00000004[0x13] = 0;
  in_stack_00000004[0x14] = 0;
  in_stack_00000004[6] = 0;
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 9,0,0x10);
  in_stack_00000004[7] = 0;
  in_stack_00000004[8] = 0;
  in_stack_00000004[4] = 0;
  in_stack_00000004[5] = 0;
  in_stack_00000004[0x15] = 0;
  in_stack_00000004[0x16] = 0;
  in_stack_00000004[0x1c] = 0x3f800000;
  in_stack_00000004[0x1b] = 0;
  in_stack_00000004[0x1a] = in_stack_00000004[0x1b];
  in_stack_00000004[0x19] = in_stack_00000004[0x1a];
  in_stack_00000004[0xe] = 0;
  return;
}


// Assembly code:
// 00515880: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00515880
// 00515881: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00515885: MOV dword ptr [EBX],0x0
// 0051588b: MOV dword ptr [EBX + 0x3c],0x0
// 00515892: MOV dword ptr [EBX + 0x4],0x0
// 00515899: MOV dword ptr [EBX + 0x8],0x0
// 005158a0: MOV dword ptr [EBX + 0x40],0x0
// 005158a7: MOV dword ptr [EBX + 0xc],0x0
// 005158ae: MOV dword ptr [EBX + 0x34],0x0
// 005158b5: MOV dword ptr [EBX + 0x5c],0x0
// 005158bc: MOV dword ptr [EBX + 0x60],0x0
// 005158c3: MOV dword ptr [EBX + 0x44],0x0
// 005158ca: MOV dword ptr [EBX + 0x48],0x0
// 005158d1: PUSH 0x10
// 005158d3: MOV dword ptr [EBX + 0x4c],0x0
// 005158da: PUSH 0x0
// 005158dc: LEA EAX,[EBX + 0x24]
// 005158df: MOV dword ptr [EBX + 0x50],0x0
// 005158e6: PUSH EAX
// 005158e7: MOV dword ptr [EBX + 0x18],0x0
// 005158ee: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005158f3: MOV dword ptr [EBX + 0x1c],0x0
// 005158fa: MOV dword ptr [EBX + 0x20],0x0
// 00515901: MOV dword ptr [EBX + 0x10],0x0
// 00515908: MOV dword ptr [EBX + 0x14],0x0
// 0051590f: MOV dword ptr [EBX + 0x54],0x0
// 00515916: MOV dword ptr [EBX + 0x58],0x0
// 0051591d: LEA EAX,[EBX + 0x64]
// 00515920: MOV dword ptr [EBX + 0x70],0x3f800000
// 00515927: MOV dword ptr [EAX + 0x8],0x0
// 0051592e: ADD ESP,0xc
// 00515931: MOV EDX,dword ptr [EAX + 0x8]
// 00515934: MOV dword ptr [EAX + 0x4],EDX
// 00515937: MOV EDX,dword ptr [EAX + 0x4]
// 0051593a: MOV dword ptr [EAX],EDX
// 0051593c: MOV dword ptr [EBX + 0x38],0x0
// 00515943: POP EBX
// 00515944: RET
