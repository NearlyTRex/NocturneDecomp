// Name: core_setutil.cpp_generateSphereVertex_FUN_00587a40
// Address: 00587a40
// Address Range: [[00587a40, 00587b26]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_generateSphereVertex_FUN_00587a40(int longitude_index, int latitude_index, int vertex_buffer_index, float radius)
// Globals:
//   float FLOAT_00649a83 = 0.0625
//   double DOUBLE_00649a8b = 3.14159265350000
//   double DOUBLE_00649a93 = 2
//   float FLOAT_00649a9b = 0.25
//   double DOUBLE_00649aa3 = 0.5
//   float FLOAT_00662a40 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_00800000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_setutil_cpp_generateSphereVertex_FUN_00587a40
          (int longitude_index,int latitude_index,int vertex_buffer_index,float radius)

{
  CDemonRenderer *pCVar1;
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  CVector3i local_38 [3];
  int local_c;
  
  fVar2 = (float10)longitude_index * (float10)FLOAT_00649a83 * (float10)DOUBLE_00649a8b *
          (float10)DOUBLE_00649a93;
  local_c = latitude_index;
  fVar3 = (float10)fsin(fVar2);
  fVar2 = (float10)fcos(fVar2);
  fVar4 = (float10)radius;
  fVar5 = (float10)latitude_index * (float10)FLOAT_00649a9b * (float10)DOUBLE_00649a8b *
          (float10)DOUBLE_00649aa3;
  fVar6 = (float10)fcos(fVar5);
  fVar5 = (float10)fsin(fVar5);
  local_38[0].x = (int)ROUND((float)(fVar3 * fVar4 * fVar6) * FLOAT_00662a40);
  local_38[0].y = (int)ROUND((float)(fVar5 * fVar4) * FLOAT_00662a40);
  local_38[0].z = (int)ROUND((float)(fVar2 * fVar4 * fVar6) * FLOAT_00662a40);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[vertex_buffer_index].projected_vertex,local_38)
  ;
  pCVar1 = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr[vertex_buffer_index].u = 1.1754944e-38;
  pCVar1->vertex_buffer_ptr[vertex_buffer_index].v = 1.1754944e-38;
  return;
}


// Assembly code:
// 00587a40: PUSH EBX
//   Label: core_setutil.cpp_generateSphereVertex_FUN_00587a40
// 00587a41: PUSH ESI
// 00587a42: SUB ESP,0x3c
// 00587a45: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 00587a49: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00587a4d: FILD dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xc] (READ)
// 00587a51: FMUL float ptr [0x00649a83]
//   XREF to: 00649a83 (READ)
// 00587a57: FLD double ptr [0x00649a8b]
//   XREF to: 00649a8b (READ)
// 00587a5d: FXCH
// 00587a5f: FMUL ST1
// 00587a61: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 00587a65: FMUL double ptr [0x00649a93]
//   XREF to: 00649a93 (READ)
// 00587a6b: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00587a6f: FLD ST0
// 00587a71: FSIN
// 00587a73: FXCH
// 00587a75: FCOS
// 00587a77: FILD dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xc] (READ)
// 00587a7b: FMUL float ptr [0x00649a9b]
//   XREF to: 00649a9b (READ)
// 00587a81: FMULP ST3
// 00587a83: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[0x10] (READ)
// 00587a87: FXCH ST2
// 00587a89: FMUL ST2
// 00587a8b: FXCH ST3
// 00587a8d: FMUL double ptr [0x00649aa3]
//   XREF to: 00649aa3 (READ)
// 00587a93: FLD ST0
// 00587a95: FCOS
// 00587a97: FXCH
// 00587a99: FSIN
// 00587a9b: FXCH ST2
// 00587a9d: FMUL ST3
// 00587a9f: FMUL ST1
// 00587aa1: FXCH ST4
// 00587aa3: FMULP
// 00587aa5: FXCH
// 00587aa7: FMULP ST2
// 00587aa9: LEA EBX,[ESP + 0xc]
//   XREF to: Stack[-0x38] (DATA)
// 00587aad: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00587ab3: FXCH ST2
// 00587ab5: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x3c] (WRITE)
// 00587ab9: MOV EAX,ESP
// 00587abb: FXCH
// 00587abd: FSTP float ptr [ESP]
//   XREF to: Stack[-0x44] (DATA)
// 00587ac0: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x40] (WRITE)
// 00587ac4: FLD float ptr [EAX]
//   XREF to: Stack[-0x44] (DATA)
// 00587ac6: FMUL float ptr [0x00662a40]
//   XREF to: 00662a40 (READ)
// 00587acc: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x38] (DATA)
// 00587ace: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x40] (READ)
// 00587ad1: FMUL float ptr [0x00662a40]
//   XREF to: 00662a40 (READ)
// 00587ad7: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 00587ada: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x3c] (READ)
// 00587add: FMUL float ptr [0x00662a40]
//   XREF to: 00662a40 (READ)
// 00587ae3: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 00587ae6: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 00587aea: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x38] (DATA)
// 00587aee: LEA ESI,[EBX*0x4 + 0x0]
// 00587af5: PUSH EAX
// 00587af6: SUB ESI,EBX
// 00587af8: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00587afa: SHL ESI,0x4
// 00587afd: ADD EAX,ESI
// 00587aff: PUSH EAX
// 00587b00: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00587b05: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00587b0a: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00587b0c: MOV dword ptr [EDX + ESI*0x1 + 0x18],0x800000
//   XREF to: 00800000 (DATA)
// 00587b14: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00587b16: ADD ESP,0x8
// 00587b19: MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000
//   XREF to: 00800000 (DATA)
// 00587b21: ADD ESP,0x3c
// 00587b24: POP ESI
// 00587b25: POP EBX
// 00587b26: RET
