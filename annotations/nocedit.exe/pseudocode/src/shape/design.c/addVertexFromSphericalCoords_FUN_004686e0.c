// Name: shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
// Address: 004686e0
// Address Range: [[004686e0, 004687bf]]
// Convention: __cdecl
// Signature: void shape_design.c_addVertexFromSphericalCoords_FUN_004686e0(float latitude_degrees, float longitude_degrees, float radius)
// Cross-references:
//   shape_design.c_generateGlobe_FUN_00468910 (00468910) at 00468c04 [UNCONDITIONAL_CALL]
// Globals:
//   double g_DegreesToRadiansFactor = 0.00555555555555555
//   double g_Pi = 3.14159265350000
//   double g_UVScaleFactor = 0.00277777777777778
//   double g_LatitudeOffset = 90
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626418
//   undefined4 DAT_0162641c

#include "nocturne.h"

void __cdecl
shape_design_c_addVertexFromSphericalCoords_FUN_004686e0
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
  g_LoadedVertices[g_VertexCount].u = latitude_degrees * (float)g_UVScaleFactor;
  g_LoadedVertices[g_VertexCount].v =
       (longitude_degrees + (float)g_LatitudeOffset) * (float)g_DegreesToRadiansFactor;
  g_VertexCount = g_VertexCount + 1;
  return;
}


// Assembly code:
// 004686e0: PUSH EBX
//   Label: shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
// 004686e1: PUSH ESI
// 004686e2: PUSH EDI
// 004686e3: PUSH EBP
// 004686e4: MOV EBP,ESP
// 004686e6: SUB ESP,0x10
// 004686ec: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004686ef: FMUL double ptr [0x0061cdbe]
//   XREF to: 0061cdbe (READ)
// 004686f5: FMUL double ptr [0x0061cdc6]
//   XREF to: 0061cdc6 (READ)
// 004686fb: FSIN
// 004686fd: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00468700: FMULP
// 00468702: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 00468705: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00468708: FMUL double ptr [0x0061cdbe]
//   XREF to: 0061cdbe (READ)
// 0046870e: FMUL double ptr [0x0061cdc6]
//   XREF to: 0061cdc6 (READ)
// 00468714: FCOS
// 00468716: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00468719: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046871c: FMUL double ptr [0x0061cdbe]
//   XREF to: 0061cdbe (READ)
// 00468722: FMUL double ptr [0x0061cdc6]
//   XREF to: 0061cdc6 (READ)
// 00468728: FCOS
// 0046872a: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046872d: FMUL float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00468730: FMULP
// 00468732: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00468735: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468738: FMUL double ptr [0x0061cdbe]
//   XREF to: 0061cdbe (READ)
// 0046873e: FMUL double ptr [0x0061cdc6]
//   XREF to: 0061cdc6 (READ)
// 00468744: FSIN
// 00468746: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468749: FMUL float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046874c: FMULP
// 0046874e: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00468751: IMUL EDX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00468758: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046875b: MOV dword ptr [EDX + 0x162640c],EAX
//   XREF to: 0162640c (DATA)
// 00468761: IMUL EDX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00468768: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046876b: MOV dword ptr [EDX + 0x1626410],EAX
//   XREF to: 01626410 (DATA)
// 00468771: IMUL EDX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00468778: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046877b: MOV dword ptr [EDX + 0x1626414],EAX
//   XREF to: 01626414 (DATA)
// 00468781: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468784: FMUL double ptr [0x0061cdce]
//   XREF to: 0061cdce (READ)
// 0046878a: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00468791: FSTP float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 00468797: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046879a: FADD double ptr [0x0061cdd6]
//   XREF to: 0061cdd6 (READ)
// 004687a0: FMUL double ptr [0x0061cdbe]
//   XREF to: 0061cdbe (READ)
// 004687a6: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 004687ad: FSTP float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 004687b3: INC dword ptr [0x01626408]
//   XREF to: 01626408 (READ_WRITE)
// 004687b9: MOV ESP,EBP
// 004687bb: POP EBP
// 004687bc: POP EDI
// 004687bd: POP ESI
// 004687be: POP EBX
// 004687bf: RET
