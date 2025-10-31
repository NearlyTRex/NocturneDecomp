// Name: core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90
// Address: 00456a90
// Address Range: [[00456a90, 00456aef]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90(CDemonCube * this_ptr, CVector3f * min_bounds, CVector3f * max_bounds)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 (00495310) at 00495796 [UNCONDITIONAL_CALL]
// Globals:
//   int g_VertexCount
//   int g_PolygonCount

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCube_setBounds_FUN_00456a90
          (CDemonCube *this_ptr,CVector3f *min_bounds,CVector3f *max_bounds)

{
  if (&this_ptr->min_bounds != min_bounds) {
    (this_ptr->min_bounds).x = min_bounds->x;
    (this_ptr->min_bounds).y = min_bounds->y;
    (this_ptr->min_bounds).z = min_bounds->z;
  }
  if (&this_ptr->max_bounds == max_bounds) {
    g_PolygonCount = 0;
    g_VertexCount = 0;
    return;
  }
  (this_ptr->max_bounds).x = max_bounds->x;
  (this_ptr->max_bounds).y = max_bounds->y;
  (this_ptr->max_bounds).z = max_bounds->z;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  return;
}


// Assembly code:
// 00456a90: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90
//   XREF to: Stack[0x8] (READ)
// 00456a94: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00456a98: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00456a9c: ADD EAX,0x8
// 00456a9f: CMP EAX,EDX
// 00456aa1: JNZ 0x00456abd
//   XREF to: 00456abd (CONDITIONAL_JUMP)
// 00456aa3: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00456aa3
//   XREF to: Stack[0x4] (READ)
// 00456aa7: ADD EAX,0x14
// 00456aaa: CMP EAX,ECX
// 00456aac: JNZ 0x00456ad1
//   XREF to: 00456ad1 (CONDITIONAL_JUMP)
// 00456aae: XOR EDX,EDX
// 00456ab0: MOV dword ptr [0x016e990c],EDX
//   XREF to: 016e990c (WRITE)
// 00456ab6: MOV dword ptr [0x01626408],EDX
//   XREF to: 01626408 (WRITE)
// 00456abc: RET
// 00456abd: PUSH EBX
//   Label: LAB_00456abd
// 00456abe: MOV EBX,dword ptr [EDX]
// 00456ac0: MOV dword ptr [EAX],EBX
// 00456ac2: MOV EBX,dword ptr [EDX + 0x4]
// 00456ac5: MOV dword ptr [EAX + 0x4],EBX
// 00456ac8: MOV EBX,dword ptr [EDX + 0x8]
// 00456acb: MOV dword ptr [EAX + 0x8],EBX
// 00456ace: POP EBX
// 00456acf: JMP 0x00456aa3
//   XREF to: 00456aa3 (UNCONDITIONAL_JUMP)
// 00456ad1: MOV EDX,dword ptr [ECX]
//   Label: LAB_00456ad1
// 00456ad3: MOV dword ptr [EAX],EDX
// 00456ad5: MOV EDX,dword ptr [ECX + 0x4]
// 00456ad8: MOV dword ptr [EAX + 0x4],EDX
// 00456adb: MOV EDX,dword ptr [ECX + 0x8]
// 00456ade: MOV dword ptr [EAX + 0x8],EDX
// 00456ae1: XOR EDX,EDX
// 00456ae3: MOV dword ptr [0x016e990c],EDX
//   XREF to: 016e990c (WRITE)
// 00456ae9: MOV dword ptr [0x01626408],EDX
//   XREF to: 01626408 (WRITE)
// 00456aef: RET
