// Name: engine_3d.c_setRenderAlpha_FUN_00406d60
// Address: 00406d60
// Address Range: [[00406d60, 00406d77]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_setRenderAlpha_FUN_00406d60(SMRGLHeaderExtended * block)
// Function calls:
//   engine_3d.c_setRenderAlpha_FUN_00406d80

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlpha_FUN_00406d60(SMRGLHeaderExtended *block)

{
  int in_stack_00000008;
  
  engine_3d_c_setRenderAlpha_FUN_00406d80((block->base).count);
  return (SMRGLHeaderExtended *)(in_stack_00000008 + 8);
}


// Assembly code:
// 00406d60: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_3d.c_setRenderAlpha_FUN_00406d60
//   XREF to: Stack[0x4] (READ)
// 00406d64: MOV EDX,dword ptr [EAX + 0x4]
// 00406d67: PUSH EDX
// 00406d68: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 00406d6d: ADD ESP,0x4
// 00406d70: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00406d74: ADD EAX,0x8
// 00406d77: RET
