// Name: core_dcamera.cpp_transformAndStoreVertex_FUN_00452110
// Address: 00452110
// Address Range: [[00452110, 0045217e]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_transformAndStoreVertex_FUN_00452110(int vertex_index, float x, float y, float z)
// Globals:
//   float g_CameraFixedPointScale = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_transformAndStoreVertex_FUN_00452110(int vertex_index,float x,float y,float z)

{
  BADSPACEBASE *in_ESP;
  CVector3i local_1c;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = x;
  local_c = y;
  local_8 = z;
  local_1c.x = (int)ROUND(x * g_CameraFixedPointScale);
  local_1c.y = (int)ROUND(y * g_CameraFixedPointScale);
  local_1c.z = (int)ROUND(z * g_CameraFixedPointScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[vertex_index].projected_vertex,&local_1c);
  return;
}


// Assembly code:
// 00452110: PUSH EBX
//   Label: core_dcamera.cpp_transformAndStoreVertex_FUN_00452110
// 00452111: SUB ESP,0x18
// 00452114: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00452118: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0045211c: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00452120: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00452124: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 00452128: MOV EBX,ESP
// 0045212a: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0045212e: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x10] (DATA)
// 00452132: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00452138: FLD float ptr [EAX]
//   XREF to: Stack[-0x10] (DATA)
// 0045213a: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452140: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x1c] (DATA)
// 00452142: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 00452145: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 0045214b: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 0045214e: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 00452151: FMUL float ptr [0x0065c63c]
//   XREF to: 0065c63c (READ)
// 00452157: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 0045215a: MOV EAX,ESP
// 0045215c: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00452160: PUSH EAX
// 00452161: LEA EAX,[EBX*0x4 + 0x0]
// 00452168: SUB EAX,EBX
// 0045216a: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0045216c: SHL EAX,0x4
// 0045216f: ADD EAX,EDX
// 00452171: PUSH EAX
// 00452172: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00452177: ADD ESP,0x8
// 0045217a: ADD ESP,0x18
// 0045217d: POP EBX
// 0045217e: RET
