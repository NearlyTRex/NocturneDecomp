// Name: shape_superopt.cpp_CObj_computeBoundingBox_FUN_005d3f60
// Address: 005d3f60
// Address Range: [[005d3f60, 005d4066]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_computeBoundingBox_FUN_005d3f60(CObj * this_ptr, CVector3d * out_min, CVector3d * out_max)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_computeBoundingBox_FUN_005d3f60
          (CObj *this_ptr,CVector3d *out_min,CVector3d *out_max)

{
  CVert *pCVar1;
  CVert *pCVar2;
  uint uVar3;
  
  pCVar1 = this_ptr->vertex_data;
  uVar3 = 1;
  *(undefined4 *)&out_min->x = *(undefined4 *)&(pCVar1->position).impl.x;
  *(undefined4 *)((int)&out_min->x + 4) = *(undefined4 *)((int)&(pCVar1->position).impl.x + 4);
  *(undefined4 *)&out_min->y = *(undefined4 *)&(pCVar1->position).impl.y;
  *(undefined4 *)((int)&out_min->y + 4) = *(undefined4 *)((int)&(pCVar1->position).impl.y + 4);
  *(undefined4 *)&out_min->z = *(undefined4 *)&(pCVar1->position).impl.z;
  *(undefined4 *)((int)&out_min->z + 4) = *(undefined4 *)((int)&(pCVar1->position).impl.z + 4);
  *(undefined4 *)&out_max->x = *(undefined4 *)&(pCVar1->position).impl.x;
  *(undefined4 *)((int)&out_max->x + 4) = *(undefined4 *)((int)&(pCVar1->position).impl.x + 4);
  *(undefined4 *)&out_max->y = *(undefined4 *)&(pCVar1->position).impl.y;
  *(undefined4 *)((int)&out_max->y + 4) = *(undefined4 *)((int)&(pCVar1->position).impl.y + 4);
  *(undefined4 *)&out_max->z = *(undefined4 *)&(pCVar1->position).impl.z;
  *(undefined4 *)((int)&out_max->z + 4) = *(undefined4 *)((int)&(pCVar1->position).impl.z + 4);
  if (1 < (uint)this_ptr->vertex_count) {
    do {
      pCVar2 = pCVar1 + 1;
      if ((pCVar2->position).impl.x < out_min->x) {
        *(undefined4 *)&out_min->x = *(undefined4 *)&(pCVar2->position).impl.x;
        *(undefined4 *)((int)&out_min->x + 4) = *(undefined4 *)((int)&pCVar1[1].position.impl.x + 4)
        ;
      }
      if (pCVar1[1].position.impl.y < out_min->y) {
        *(undefined4 *)&out_min->y = *(undefined4 *)&pCVar1[1].position.impl.y;
        *(undefined4 *)((int)&out_min->y + 4) = *(undefined4 *)((int)&pCVar1[1].position.impl.y + 4)
        ;
      }
      if (pCVar1[1].position.impl.z < out_min->z) {
        *(undefined4 *)&out_min->z = *(undefined4 *)&pCVar1[1].position.impl.z;
        *(undefined4 *)((int)&out_min->z + 4) = *(undefined4 *)((int)&pCVar1[1].position.impl.z + 4)
        ;
      }
      if (out_max->x < (pCVar2->position).impl.x) {
        *(undefined4 *)&out_max->x = *(undefined4 *)&(pCVar2->position).impl.x;
        *(undefined4 *)((int)&out_max->x + 4) = *(undefined4 *)((int)&pCVar1[1].position.impl.x + 4)
        ;
      }
      if (out_max->y < pCVar1[1].position.impl.y) {
        *(undefined4 *)&out_max->y = *(undefined4 *)&pCVar1[1].position.impl.y;
        *(undefined4 *)((int)&out_max->y + 4) = *(undefined4 *)((int)&pCVar1[1].position.impl.y + 4)
        ;
      }
      if (out_max->z < pCVar1[1].position.impl.z) {
        *(undefined4 *)&out_max->z = *(undefined4 *)&pCVar1[1].position.impl.z;
        *(undefined4 *)((int)&out_max->z + 4) = *(undefined4 *)((int)&pCVar1[1].position.impl.z + 4)
        ;
      }
      uVar3 = uVar3 + 1;
      pCVar1 = pCVar2;
    } while (uVar3 < (uint)this_ptr->vertex_count);
  }
  return;
}


// Assembly code:
// 005d3f60: PUSH EBX
//   Label: shape_superopt.cpp_CObj_computeBoundingBox_FUN_005d3f60
// 005d3f61: PUSH ESI
// 005d3f62: PUSH EDI
// 005d3f63: PUSH EBP
// 005d3f64: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3f68: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d3f6c: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d3f70: MOV EDX,dword ptr [EDI + 0x4]
// 005d3f73: MOV ESI,0x1
// 005d3f78: MOV EAX,dword ptr [EDX]
// 005d3f7a: MOV dword ptr [EBX],EAX
// 005d3f7c: MOV EAX,dword ptr [EDX + 0x4]
// 005d3f7f: MOV dword ptr [EBX + 0x4],EAX
// 005d3f82: MOV EAX,dword ptr [EDX + 0x8]
// 005d3f85: MOV dword ptr [EBX + 0x8],EAX
// 005d3f88: MOV EAX,dword ptr [EDX + 0xc]
// 005d3f8b: MOV dword ptr [EBX + 0xc],EAX
// 005d3f8e: MOV EAX,dword ptr [EDX + 0x10]
// 005d3f91: MOV dword ptr [EBX + 0x10],EAX
// 005d3f94: MOV EAX,dword ptr [EDX + 0x14]
// 005d3f97: MOV dword ptr [EBX + 0x14],EAX
// 005d3f9a: MOV EAX,dword ptr [EDX]
// 005d3f9c: MOV dword ptr [ECX],EAX
// 005d3f9e: MOV EAX,dword ptr [EDX + 0x4]
// 005d3fa1: MOV dword ptr [ECX + 0x4],EAX
// 005d3fa4: MOV EAX,dword ptr [EDX + 0x8]
// 005d3fa7: MOV dword ptr [ECX + 0x8],EAX
// 005d3faa: MOV EAX,dword ptr [EDX + 0xc]
// 005d3fad: MOV dword ptr [ECX + 0xc],EAX
// 005d3fb0: MOV EAX,dword ptr [EDX + 0x10]
// 005d3fb3: MOV dword ptr [ECX + 0x10],EAX
// 005d3fb6: MOV EAX,dword ptr [EDX + 0x14]
// 005d3fb9: MOV dword ptr [ECX + 0x14],EAX
// 005d3fbc: MOV EBP,dword ptr [EDI]
// 005d3fbe: ADD EDX,0x38
// 005d3fc1: CMP EBP,ESI
// 005d3fc3: JBE 0x005d4053
//   XREF to: 005d4053 (CONDITIONAL_JUMP)
// 005d3fc9: FLD double ptr [EDX]
//   Label: LAB_005d3fc9
// 005d3fcb: FCOMP double ptr [EBX]
// 005d3fcd: FNSTSW AX
// 005d3fcf: SAHF
// 005d3fd0: JC 0x005d4058
//   XREF to: 005d4058 (CONDITIONAL_JUMP)
// 005d3fd6: FLD double ptr [EDX + 0x8]
//   Label: LAB_005d3fd6
// 005d3fd9: FCOMP double ptr [EBX + 0x8]
// 005d3fdc: FNSTSW AX
// 005d3fde: SAHF
// 005d3fdf: JNC 0x005d3fed
//   XREF to: 005d3fed (CONDITIONAL_JUMP)
// 005d3fe1: MOV EAX,dword ptr [EDX + 0x8]
// 005d3fe4: MOV dword ptr [EBX + 0x8],EAX
// 005d3fe7: MOV EAX,dword ptr [EDX + 0xc]
// 005d3fea: MOV dword ptr [EBX + 0xc],EAX
// 005d3fed: FLD double ptr [EDX + 0x10]
//   Label: LAB_005d3fed
// 005d3ff0: FCOMP double ptr [EBX + 0x10]
// 005d3ff3: FNSTSW AX
// 005d3ff5: SAHF
// 005d3ff6: JNC 0x005d4004
//   XREF to: 005d4004 (CONDITIONAL_JUMP)
// 005d3ff8: MOV EAX,dword ptr [EDX + 0x10]
// 005d3ffb: MOV dword ptr [EBX + 0x10],EAX
// 005d3ffe: MOV EAX,dword ptr [EDX + 0x14]
// 005d4001: MOV dword ptr [EBX + 0x14],EAX
// 005d4004: FLD double ptr [EDX]
//   Label: LAB_005d4004
// 005d4006: FCOMP double ptr [ECX]
// 005d4008: FNSTSW AX
// 005d400a: SAHF
// 005d400b: JBE 0x005d4017
//   XREF to: 005d4017 (CONDITIONAL_JUMP)
// 005d400d: MOV EAX,dword ptr [EDX]
// 005d400f: MOV dword ptr [ECX],EAX
// 005d4011: MOV EAX,dword ptr [EDX + 0x4]
// 005d4014: MOV dword ptr [ECX + 0x4],EAX
// 005d4017: FLD double ptr [EDX + 0x8]
//   Label: LAB_005d4017
// 005d401a: FCOMP double ptr [ECX + 0x8]
// 005d401d: FNSTSW AX
// 005d401f: SAHF
// 005d4020: JBE 0x005d402e
//   XREF to: 005d402e (CONDITIONAL_JUMP)
// 005d4022: MOV EAX,dword ptr [EDX + 0x8]
// 005d4025: MOV dword ptr [ECX + 0x8],EAX
// 005d4028: MOV EAX,dword ptr [EDX + 0xc]
// 005d402b: MOV dword ptr [ECX + 0xc],EAX
// 005d402e: FLD double ptr [EDX + 0x10]
//   Label: LAB_005d402e
// 005d4031: FCOMP double ptr [ECX + 0x10]
// 005d4034: FNSTSW AX
// 005d4036: SAHF
// 005d4037: JBE 0x005d4045
//   XREF to: 005d4045 (CONDITIONAL_JUMP)
// 005d4039: MOV EAX,dword ptr [EDX + 0x10]
// 005d403c: MOV dword ptr [ECX + 0x10],EAX
// 005d403f: MOV EAX,dword ptr [EDX + 0x14]
// 005d4042: MOV dword ptr [ECX + 0x14],EAX
// 005d4045: INC ESI
//   Label: LAB_005d4045
// 005d4046: MOV EAX,dword ptr [EDI]
// 005d4048: ADD EDX,0x38
// 005d404b: CMP ESI,EAX
// 005d404d: JC 0x005d3fc9
//   XREF to: 005d3fc9 (CONDITIONAL_JUMP)
// 005d4053: POP EBP
//   Label: LAB_005d4053
// 005d4054: POP EDI
// 005d4055: POP ESI
// 005d4056: POP EBX
// 005d4057: RET
// 005d4058: MOV EAX,dword ptr [EDX]
//   Label: LAB_005d4058
// 005d405a: MOV dword ptr [EBX],EAX
// 005d405c: MOV EAX,dword ptr [EDX + 0x4]
// 005d405f: MOV dword ptr [EBX + 0x4],EAX
// 005d4062: JMP 0x005d3fd6
//   XREF to: 005d3fd6 (UNCONDITIONAL_JUMP)
