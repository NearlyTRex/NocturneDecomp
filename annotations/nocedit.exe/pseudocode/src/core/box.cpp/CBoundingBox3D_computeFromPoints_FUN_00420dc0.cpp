// Name: core_box.cpp_CBoundingBox3D_computeFromPoints_FUN_00420dc0
// Address: 00420dc0
// Address Range: [[00420dc0, 00420e8f]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBoundingBox3D_computeFromPoints_FUN_00420dc0(CBoundingBox3D * this_ptr, int point_count, CVector3f * points)

#include "nocturne.h"

void __cdecl
core_box_cpp_CBoundingBox3D_computeFromPoints_FUN_00420dc0
          (CBoundingBox3D *this_ptr,int point_count,CVector3f *points)

{
  CVector3f *pCVar1;
  int iVar2;
  
  pCVar1 = &this_ptr->max;
  if (pCVar1 != points) {
    pCVar1->x = points->x;
    (this_ptr->max).y = points->y;
    (this_ptr->max).z = points->z;
  }
  if (this_ptr != (CBoundingBox3D *)pCVar1) {
    (this_ptr->min).x = pCVar1->x;
    (this_ptr->min).y = (this_ptr->max).y;
    (this_ptr->min).z = (this_ptr->max).z;
  }
  iVar2 = 1;
  if (1 < point_count) {
    pCVar1 = points + 1;
    do {
      while( true ) {
        if (pCVar1->x < (this_ptr->min).x) {
          (this_ptr->min).x = pCVar1->x;
        }
        else if ((this_ptr->max).x < pCVar1->x) {
          (this_ptr->max).x = pCVar1->x;
        }
        if ((this_ptr->min).y <= pCVar1->y) {
          if ((this_ptr->max).y < pCVar1->y) {
            (this_ptr->max).y = pCVar1->y;
          }
        }
        else {
          (this_ptr->min).y = pCVar1->y;
        }
        if (pCVar1->z < (this_ptr->min).z) break;
        if (pCVar1->z <= (this_ptr->max).z) goto LAB_00420e38;
        (this_ptr->max).z = pCVar1->z;
        iVar2 = iVar2 + 1;
        pCVar1 = pCVar1 + 1;
        if (point_count <= iVar2) {
          return;
        }
      }
      (this_ptr->min).z = pCVar1->z;
LAB_00420e38:
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < point_count);
  }
  return;
}


// Assembly code:
// 00420dc0: PUSH EBX
//   Label: core_box.cpp_CBoundingBox3D_computeFromPoints_FUN_00420dc0
// 00420dc1: PUSH ESI
// 00420dc2: PUSH EDI
// 00420dc3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00420dc7: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00420dcb: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00420dcf: LEA ECX,[EDX + 0xc]
// 00420dd2: MOV EBX,ECX
// 00420dd4: CMP ECX,EAX
// 00420dd6: JNZ 0x00420e44
//   XREF to: 00420e44 (CONDITIONAL_JUMP)
// 00420ddc: CMP EDX,EBX
//   Label: LAB_00420ddc
// 00420dde: JZ 0x00420df0
//   XREF to: 00420df0 (CONDITIONAL_JUMP)
// 00420de0: MOV ECX,dword ptr [EBX]
// 00420de2: MOV dword ptr [EDX],ECX
// 00420de4: MOV ECX,dword ptr [EBX + 0x4]
// 00420de7: MOV dword ptr [EDX + 0x4],ECX
// 00420dea: MOV ECX,dword ptr [EBX + 0x8]
// 00420ded: MOV dword ptr [EDX + 0x8],ECX
// 00420df0: MOV ESI,0x1
//   Label: LAB_00420df0
// 00420df5: CMP EDI,ESI
// 00420df7: JLE 0x00420e40
//   XREF to: 00420e40 (CONDITIONAL_JUMP)
// 00420df9: LEA EBX,[EAX + 0xc]
// 00420dfc: FLD float ptr [EBX]
//   Label: LAB_00420dfc
// 00420dfe: MOV ECX,EBX
// 00420e00: FCOMP float ptr [EDX]
// 00420e02: FNSTSW AX
// 00420e04: SAHF
// 00420e05: JC 0x00420e56
//   XREF to: 00420e56 (CONDITIONAL_JUMP)
// 00420e07: FLD float ptr [EBX]
// 00420e09: FCOMP float ptr [EDX + 0xc]
// 00420e0c: FNSTSW AX
// 00420e0e: SAHF
// 00420e0f: JBE 0x00420e16
//   XREF to: 00420e16 (CONDITIONAL_JUMP)
// 00420e11: MOV EAX,dword ptr [EBX]
// 00420e13: MOV dword ptr [EDX + 0xc],EAX
// 00420e16: FLD float ptr [ECX + 0x4]
//   Label: LAB_00420e16
// 00420e19: FCOMP float ptr [EDX + 0x4]
// 00420e1c: FNSTSW AX
// 00420e1e: SAHF
// 00420e1f: JNC 0x00420e5c
//   XREF to: 00420e5c (CONDITIONAL_JUMP)
// 00420e21: MOV EAX,dword ptr [ECX + 0x4]
// 00420e24: MOV dword ptr [EDX + 0x4],EAX
// 00420e27: FLD float ptr [ECX + 0x8]
//   Label: LAB_00420e27
// 00420e2a: FCOMP float ptr [EDX + 0x8]
// 00420e2d: FNSTSW AX
// 00420e2f: SAHF
// 00420e30: JNC 0x00420e6f
//   XREF to: 00420e6f (CONDITIONAL_JUMP)
// 00420e32: MOV EAX,dword ptr [ECX + 0x8]
// 00420e35: MOV dword ptr [EDX + 0x8],EAX
// 00420e38: INC ESI
//   Label: LAB_00420e38
// 00420e39: ADD EBX,0xc
// 00420e3c: CMP ESI,EDI
// 00420e3e: JL 0x00420dfc
//   XREF to: 00420dfc (CONDITIONAL_JUMP)
// 00420e40: POP EDI
//   Label: LAB_00420e40
// 00420e41: POP ESI
// 00420e42: POP EBX
// 00420e43: RET
// 00420e44: MOV ESI,dword ptr [EAX]
//   Label: LAB_00420e44
// 00420e46: MOV dword ptr [ECX],ESI
// 00420e48: MOV ESI,dword ptr [EAX + 0x4]
// 00420e4b: MOV dword ptr [ECX + 0x4],ESI
// 00420e4e: MOV ESI,dword ptr [EAX + 0x8]
// 00420e51: MOV dword ptr [ECX + 0x8],ESI
// 00420e54: JMP 0x00420ddc
//   XREF to: 00420ddc (UNCONDITIONAL_JUMP)
// 00420e56: MOV EAX,dword ptr [EBX]
//   Label: LAB_00420e56
// 00420e58: MOV dword ptr [EDX],EAX
// 00420e5a: JMP 0x00420e16
//   XREF to: 00420e16 (UNCONDITIONAL_JUMP)
// 00420e5c: FLD float ptr [ECX + 0x4]
//   Label: LAB_00420e5c
// 00420e5f: FCOMP float ptr [EDX + 0x10]
// 00420e62: FNSTSW AX
// 00420e64: SAHF
// 00420e65: JBE 0x00420e27
//   XREF to: 00420e27 (CONDITIONAL_JUMP)
// 00420e67: MOV EAX,dword ptr [ECX + 0x4]
// 00420e6a: MOV dword ptr [EDX + 0x10],EAX
// 00420e6d: JMP 0x00420e27
//   XREF to: 00420e27 (UNCONDITIONAL_JUMP)
// 00420e6f: FLD float ptr [ECX + 0x8]
//   Label: LAB_00420e6f
// 00420e72: FCOMP float ptr [EDX + 0x14]
// 00420e75: FNSTSW AX
// 00420e77: SAHF
// 00420e78: JBE 0x00420e38
//   XREF to: 00420e38 (CONDITIONAL_JUMP)
// 00420e7a: MOV EAX,dword ptr [ECX + 0x8]
// 00420e7d: MOV dword ptr [EDX + 0x14],EAX
// 00420e80: INC ESI
// 00420e81: ADD EBX,0xc
// 00420e84: CMP ESI,EDI
// 00420e86: JL 0x00420dfc
//   XREF to: 00420dfc (CONDITIONAL_JUMP)
// 00420e8c: POP EDI
// 00420e8d: POP ESI
// 00420e8e: POP EBX
// 00420e8f: RET
