// Name: shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
// Address: 00468c40
// Address Range: [[00468c40, 00468d1f]]
// Convention: __cdecl
// Signature: void shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40(float latitude_degrees, float longitude_degrees, float radius)
// Cross-references:
//   shape_design.c_generateShell_FUN_00468f20 (00468f20) at 00469104 [UNCONDITIONAL_CALL]
// Globals:
//   double g_DegreesToRadiansFactor = 0.00555555555555555
//   double g_Pi = 3.14159265350000
//   double g_LatitudeOffset = 90
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626418
//   undefined4 DAT_0162641c

#include "nocturne.h"

void __cdecl
shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
          (float latitude_degrees,float longitude_degrees,float radius)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)fsin((float10)longitude_degrees * (float10)g_DegreesToRadiansFactor *
                        (float10)g_Pi);
  fVar2 = (float10)fcos((float10)longitude_degrees * (float10)g_DegreesToRadiansFactor *
                        (float10)g_Pi);
  fVar3 = (float10)fcos((float10)latitude_degrees * (float10)g_DegreesToRadiansFactor *
                        (float10)g_Pi);
  fVar4 = (float10)fsin((float10)latitude_degrees * (float10)g_DegreesToRadiansFactor *
                        (float10)g_Pi);
  g_LoadedVertices[g_VertexCount].vertex.x =
       (float)((float10)(float)fVar2 * (float10)radius * fVar3);
  g_LoadedVertices[g_VertexCount].vertex.y = (float)((float10)radius * fVar1);
  g_LoadedVertices[g_VertexCount].vertex.z =
       (float)((float10)(float)fVar2 * (float10)radius * fVar4);
  g_LoadedVertices[g_VertexCount].u = latitude_degrees * (float)g_DegreesToRadiansFactor;
  g_LoadedVertices[g_VertexCount].v =
       (longitude_degrees + (float)g_LatitudeOffset) * (float)g_DegreesToRadiansFactor;
  g_VertexCount = g_VertexCount + 1;
  return;
}


// Assembly code:
// 00468c40: PUSH EBX
//   Label: shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
// 00468c41: PUSH ESI
// 00468c42: PUSH EDI
// 00468c43: PUSH EBP
// 00468c44: MOV EBP,ESP
// 00468c46: SUB ESP,0x10
// 00468c4c: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00468c4f: FMUL double ptr [0x0061ce66]
//   XREF to: 0061ce66 (READ)
// 00468c55: FMUL double ptr [0x0061ce6e]
//   XREF to: 0061ce6e (READ)
// 00468c5b: FSIN
// 00468c5d: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00468c60: FMULP
// 00468c62: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 00468c65: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00468c68: FMUL double ptr [0x0061ce66]
//   XREF to: 0061ce66 (READ)
// 00468c6e: FMUL double ptr [0x0061ce6e]
//   XREF to: 0061ce6e (READ)
// 00468c74: FCOS
// 00468c76: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00468c79: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468c7c: FMUL double ptr [0x0061ce66]
//   XREF to: 0061ce66 (READ)
// 00468c82: FMUL double ptr [0x0061ce6e]
//   XREF to: 0061ce6e (READ)
// 00468c88: FCOS
// 00468c8a: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468c8d: FMUL float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00468c90: FMULP
// 00468c92: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00468c95: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468c98: FMUL double ptr [0x0061ce66]
//   XREF to: 0061ce66 (READ)
// 00468c9e: FMUL double ptr [0x0061ce6e]
//   XREF to: 0061ce6e (READ)
// 00468ca4: FSIN
// 00468ca6: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468ca9: FMUL float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00468cac: FMULP
// 00468cae: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00468cb1: IMUL EDX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00468cb8: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468cbb: MOV dword ptr [EDX + 0x162640c],EAX
//   XREF to: 0162640c (DATA)
// 00468cc1: IMUL EDX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00468cc8: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468ccb: MOV dword ptr [EDX + 0x1626410],EAX
//   XREF to: 01626410 (DATA)
// 00468cd1: IMUL EDX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00468cd8: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468cdb: MOV dword ptr [EDX + 0x1626414],EAX
//   XREF to: 01626414 (DATA)
// 00468ce1: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468ce4: FMUL double ptr [0x0061ce66]
//   XREF to: 0061ce66 (READ)
// 00468cea: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00468cf1: FSTP float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 00468cf7: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00468cfa: FADD double ptr [0x0061ce76]
//   XREF to: 0061ce76 (READ)
// 00468d00: FMUL double ptr [0x0061ce66]
//   XREF to: 0061ce66 (READ)
// 00468d06: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00468d0d: FSTP float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 00468d13: INC dword ptr [0x01626408]
//   XREF to: 01626408 (READ_WRITE)
// 00468d19: MOV ESP,EBP
// 00468d1b: POP EBP
// 00468d1c: POP EDI
// 00468d1d: POP ESI
// 00468d1e: POP EBX
// 00468d1f: RET
