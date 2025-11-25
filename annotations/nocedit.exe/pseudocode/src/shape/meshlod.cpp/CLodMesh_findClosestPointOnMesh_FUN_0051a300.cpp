// Name: shape_meshlod.cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300
// Address: 0051a300
// Address Range: [[0051a300, 0051a3d5]]
// Convention: __cdecl
// Signature: CVector3f * shape_meshlod.cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300(CLodMesh * this_ptr, CVector3f * output_closest_point, CVector3f * target_point)
// Function calls:
//   shape_meshlod.cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0

#include "nocturne.h"

CVector3f * __cdecl
shape_meshlod_cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300
          (CLodMesh *this_ptr,CVector3f *output_closest_point,CVector3f *target_point)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  CLodFace *triangle_ptr;
  BADSPACEBASE *in_ESP;
  int iVar5;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 auStack_34 [8];
  CVector3f local_2c;
  int local_18;
  
  iVar5 = 0;
  local_18 = 0;
  uStack_3c = 0x46293e59;
  if (0 < this_ptr->tri_count) {
    do {
      triangle_ptr = (CLodFace *)((int)this_ptr->tri_data->attribute_indices + iVar5);
      dVar4 = (double)CONCAT44(local_38,uStack_3c);
      if (triangle_ptr->processed_flag == 0) {
        shape_meshlod_cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0
                  (this_ptr,(CVector3f *)(auStack_34 + 4),target_point,triangle_ptr);
        fVar1 = target_point->x - local_2c.x;
        fVar3 = target_point->y - local_2c.y;
        fVar2 = target_point->z - local_2c.z;
        fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
        auStack_34 = (undefined1  [8])(double)fVar1;
        dVar4 = (double)CONCAT44(local_38,uStack_3c);
        if (fVar1 < (float)(double)CONCAT44(local_38,uStack_3c)) {
          dVar4 = (double)auStack_34;
          if (output_closest_point != &local_2c) {
            output_closest_point->x = local_2c.x;
            output_closest_point->y = local_2c.y;
            output_closest_point->z = local_2c.z;
          }
        }
      }
      local_38 = (undefined4)((ulonglong)dVar4 >> 0x20);
      uStack_3c = SUB84(dVar4,0);
      local_18 = local_18 + 1;
      iVar5 = iVar5 + 0x8c;
    } while (local_18 < this_ptr->tri_count);
  }
  return output_closest_point;
}


// Assembly code:
// 0051a300: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300
// 0051a301: PUSH ESI
// 0051a302: PUSH EDI
// 0051a303: PUSH EBP
// 0051a304: MOV EBP,ESP
// 0051a306: SUB ESP,0x2c
// 0051a309: AND ESP,0xfffffff8
// 0051a30c: MOV EBX,dword ptr [EBP + 0x18]
// 0051a30f: MOV ESI,dword ptr [EBP + 0x1c]
// 0051a312: MOV EDX,0x39a08ce9
// 0051a317: MOV EAX,dword ptr [EBP + 0x14]
// 0051a31a: MOV ECX,0x46293e59
// 0051a31f: XOR EDI,EDI
// 0051a321: MOV dword ptr [ESP],EDX
// 0051a324: MOV dword ptr [ESP + 0x28],EDI
// 0051a328: MOV EDX,dword ptr [EAX + 0x8]
// 0051a32b: MOV dword ptr [ESP + 0x4],ECX
// 0051a32f: TEST EDX,EDX
// 0051a331: JLE 0x0051a35c
//   XREF to: 0051a35c (CONDITIONAL_JUMP)
// 0051a333: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0051a333
// 0051a336: MOV EAX,dword ptr [EAX + 0xc]
// 0051a339: ADD EAX,EDI
// 0051a33b: CMP dword ptr [EAX + 0x40],0x0
// 0051a33f: JZ 0x0051a365
//   XREF to: 0051a365 (CONDITIONAL_JUMP)
// 0051a341: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_0051a341
// 0051a345: INC ECX
// 0051a346: MOV EDX,dword ptr [EBP + 0x14]
// 0051a349: MOV dword ptr [ESP + 0x28],ECX
// 0051a34d: MOV EAX,ECX
// 0051a34f: MOV ECX,dword ptr [EDX + 0x8]
// 0051a352: ADD EDI,0x8c
// 0051a358: CMP EAX,ECX
// 0051a35a: JL 0x0051a333
//   XREF to: 0051a333 (CONDITIONAL_JUMP)
// 0051a35c: MOV EAX,EBX
//   Label: LAB_0051a35c
// 0051a35e: MOV ESP,EBP
// 0051a360: POP EBP
// 0051a361: POP EDI
// 0051a362: POP ESI
// 0051a363: POP EBX
// 0051a364: RET
// 0051a365: PUSH EAX
//   Label: LAB_0051a365
// 0051a366: PUSH ESI
// 0051a367: LEA EAX,[ESP + 0x18]
// 0051a36b: PUSH EAX
// 0051a36c: MOV ECX,dword ptr [EBP + 0x14]
// 0051a36f: PUSH ECX
// 0051a370: CALL shape_meshlod.cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0
//   XREF to: 0051a6b0 (UNCONDITIONAL_CALL)
// 0051a375: ADD ESP,0x10
// 0051a378: FLD float ptr [ESI]
// 0051a37a: FSUB float ptr [ESP + 0x10]
// 0051a37e: FMUL ST0
// 0051a380: FLD float ptr [ESI + 0x4]
// 0051a383: FSUB float ptr [ESP + 0x14]
// 0051a387: FMUL ST0
// 0051a389: FLD float ptr [ESI + 0x8]
// 0051a38c: FXCH
// 0051a38e: FADDP ST2,ST0
// 0051a390: FSUB float ptr [ESP + 0x18]
// 0051a394: FMUL ST0
// 0051a396: FADDP
// 0051a398: FSQRT
// 0051a39a: FST double ptr [ESP + 0x8]
// 0051a39e: FCOMP double ptr [ESP]
// 0051a3a1: FNSTSW AX
// 0051a3a3: SAHF
// 0051a3a4: JNC 0x0051a341
//   XREF to: 0051a341 (CONDITIONAL_JUMP)
// 0051a3a6: MOV EAX,dword ptr [ESP + 0x8]
// 0051a3aa: MOV dword ptr [ESP],EAX
// 0051a3ad: MOV EAX,dword ptr [ESP + 0xc]
// 0051a3b1: MOV dword ptr [ESP + 0x4],EAX
// 0051a3b5: LEA EAX,[ESP + 0x10]
// 0051a3b9: CMP EBX,EAX
// 0051a3bb: JZ 0x0051a341
//   XREF to: 0051a341 (CONDITIONAL_JUMP)
// 0051a3bd: MOV EAX,dword ptr [ESP + 0x10]
// 0051a3c1: MOV dword ptr [EBX],EAX
// 0051a3c3: MOV EAX,dword ptr [ESP + 0x14]
// 0051a3c7: MOV dword ptr [EBX + 0x4],EAX
// 0051a3ca: MOV EAX,dword ptr [ESP + 0x18]
// 0051a3ce: MOV dword ptr [EBX + 0x8],EAX
// 0051a3d1: JMP 0x0051a341
//   XREF to: 0051a341 (UNCONDITIONAL_JUMP)
