// Name: core_set.cpp_CDemonSet_FUN_00570cd0
// Address: 00570cd0
// Address Range: [[00570cd0, 00570d58]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570cd0(CDemonSet * this_ptr)
// Cross-references:
//   core_bugs.cpp_FUN_004251b0 (004251b0) at 004252af [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00662850 = 256
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
// Function calls:
//   core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570cd0(CDemonSet *this_ptr)

{
  float fVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  CVector3i local_10;
  
  if (in_stack_00000008 == (float *)0x0) {
    this_ptr->mirror_render_param1 = 0;
    return;
  }
  local_10.x = (int)ROUND(*in_stack_00000008 * FLOAT_00662850);
  local_10.y = (int)ROUND(in_stack_00000008[1] * FLOAT_00662850);
  local_10.z = (int)ROUND(in_stack_00000008[2] * FLOAT_00662850);
  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(this_ptr,&local_10,(CVector3i *)0x0,0,0);
  fVar1 = g_RenderVertexBuffer[0].light;
  this_ptr->mirror_render_param1 = 1;
  fVar2 = g_RenderVertexBuffer[0].fog;
  this_ptr->mirror_render_param2 = (int)fVar1;
  this_ptr->mirror_render_param4 = (int)fVar2;
  this_ptr->mirror_render_param3 = g_RenderVertexBuffer[0].color;
  return;
}


// Assembly code:
// 00570cd0: PUSH ESI
//   Label: core_set.cpp_CDemonSet_FUN_00570cd0
// 00570cd1: SUB ESP,0xc
// 00570cd4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00570cd8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00570cdc: TEST EAX,EAX
// 00570cde: JNZ 0x00570ceb
//   XREF to: 00570ceb (CONDITIONAL_JUMP)
// 00570ce0: MOV dword ptr [ESI + 0x161658],EAX
// 00570ce6: ADD ESP,0xc
// 00570ce9: POP ESI
// 00570cea: RET
// 00570ceb: PUSH EBX
//   Label: LAB_00570ceb
// 00570cec: LEA EBX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 00570cf0: FLD float ptr [EAX]
// 00570cf2: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 00570cf8: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x10] (DATA)
// 00570cfa: FLD float ptr [EAX + 0x4]
// 00570cfd: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 00570d03: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 00570d06: FLD float ptr [EAX + 0x8]
// 00570d09: FMUL float ptr [0x00662850]
//   XREF to: 00662850 (READ)
// 00570d0f: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 00570d12: PUSH 0x0
// 00570d14: PUSH 0x0
// 00570d16: PUSH 0x0
// 00570d18: LEA EBX,[ESP + 0x10]
//   XREF to: Stack[-0x10] (DATA)
// 00570d1c: PUSH EBX
// 00570d1d: PUSH ESI
// 00570d1e: CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
//   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)
// 00570d23: MOV EBX,dword ptr [0x00688034]
//   XREF to: 00688034 (READ)
// 00570d29: MOV dword ptr [ESI + 0x161658],0x1
// 00570d33: MOV EAX,[0x0068803c]
//   XREF to: 0068803c (READ)
// 00570d38: MOV dword ptr [ESI + 0x16165c],EBX
// 00570d3e: MOV dword ptr [ESI + 0x161664],EAX
// 00570d44: MOV EBX,dword ptr [0x00688038]
//   XREF to: 00688038 (READ)
// 00570d4a: ADD ESP,0x14
// 00570d4d: MOV dword ptr [ESI + 0x161660],EBX
// 00570d53: POP EBX
// 00570d54: ADD ESP,0xc
// 00570d57: POP ESI
// 00570d58: RET
