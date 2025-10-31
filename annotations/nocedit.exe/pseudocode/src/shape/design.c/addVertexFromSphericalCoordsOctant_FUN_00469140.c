// Name: shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
// Address: 00469140
// Address Range: [[00469140, 00469219]]
// Convention: __cdecl
// Signature: void shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140(float heading_angle, float pitch_angle, float radius)
// Cross-references:
//   shape_design.c_generateOctant_FUN_00469420 (00469420) at 00469623 [UNCONDITIONAL_CALL]
// Globals:
//   double g_DegreesToRadiansFactor = 0.00555555555555555
//   double g_PiConstant = 3.14159265350000
//   double g_UvCoordinateScale = 0.0111111111111111
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626418
//   undefined4 DAT_0162641c

#include "nocturne.h"

void __cdecl
shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
          (float heading_angle,float pitch_angle,float radius)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)fsin((float10)pitch_angle * (float10)g_DegreesToRadiansFactor *
                        (float10)g_PiConstant);
  fVar2 = (float10)fcos((float10)pitch_angle * (float10)g_DegreesToRadiansFactor *
                        (float10)g_PiConstant);
  fVar3 = (float10)fcos((float10)heading_angle * (float10)g_DegreesToRadiansFactor *
                        (float10)g_PiConstant);
  fVar4 = (float10)fsin((float10)heading_angle * (float10)g_DegreesToRadiansFactor *
                        (float10)g_PiConstant);
  g_LoadedVertices[g_VertexCount].vertex.x =
       (float)((float10)(float)fVar2 * (float10)radius * fVar3);
  g_LoadedVertices[g_VertexCount].vertex.y = (float)((float10)radius * fVar1);
  g_LoadedVertices[g_VertexCount].vertex.z =
       (float)((float10)(float)fVar2 * (float10)radius * fVar4);
  g_LoadedVertices[g_VertexCount].u = heading_angle * (float)g_UvCoordinateScale;
  g_LoadedVertices[g_VertexCount].v = pitch_angle * (float)g_UvCoordinateScale;
  g_VertexCount = g_VertexCount + 1;
  return;
}


// Assembly code:
// 00469140: PUSH EBX
//   Label: shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
// 00469141: PUSH ESI
// 00469142: PUSH EDI
// 00469143: PUSH EBP
// 00469144: MOV EBP,ESP
// 00469146: SUB ESP,0x10
// 0046914c: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046914f: FMUL double ptr [0x0061cefe]
//   XREF to: 0061cefe (READ)
// 00469155: FMUL double ptr [0x0061cf06]
//   XREF to: 0061cf06 (READ)
// 0046915b: FSIN
// 0046915d: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00469160: FMULP
// 00469162: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00469165: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00469168: FMUL double ptr [0x0061cefe]
//   XREF to: 0061cefe (READ)
// 0046916e: FMUL double ptr [0x0061cf06]
//   XREF to: 0061cf06 (READ)
// 00469174: FCOS
// 00469176: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00469179: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046917c: FMUL double ptr [0x0061cefe]
//   XREF to: 0061cefe (READ)
// 00469182: FMUL double ptr [0x0061cf06]
//   XREF to: 0061cf06 (READ)
// 00469188: FCOS
// 0046918a: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046918d: FMUL float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00469190: FMULP
// 00469192: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00469195: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00469198: FMUL double ptr [0x0061cefe]
//   XREF to: 0061cefe (READ)
// 0046919e: FMUL double ptr [0x0061cf06]
//   XREF to: 0061cf06 (READ)
// 004691a4: FSIN
// 004691a6: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004691a9: FMUL float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004691ac: FMULP
// 004691ae: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 004691b1: IMUL EDX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 004691b8: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004691bb: MOV dword ptr [EDX + 0x162640c],EAX
//   XREF to: 0162640c (DATA)
// 004691c1: IMUL EDX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 004691c8: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004691cb: MOV dword ptr [EDX + 0x1626410],EAX
//   XREF to: 01626410 (DATA)
// 004691d1: IMUL EDX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 004691d8: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004691db: MOV dword ptr [EDX + 0x1626414],EAX
//   XREF to: 01626414 (DATA)
// 004691e1: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004691e4: FMUL double ptr [0x0061cf0e]
//   XREF to: 0061cf0e (READ)
// 004691ea: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 004691f1: FSTP float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 004691f7: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004691fa: FMUL double ptr [0x0061cf0e]
//   XREF to: 0061cf0e (READ)
// 00469200: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 00469207: FSTP float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 0046920d: INC dword ptr [0x01626408]
//   XREF to: 01626408 (READ_WRITE)
// 00469213: MOV ESP,EBP
// 00469215: POP EBP
// 00469216: POP EDI
// 00469217: POP ESI
// 00469218: POP EBX
// 00469219: RET
