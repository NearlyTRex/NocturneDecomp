// Name: shape_superopt.cpp_CObj_removePolygonsAtVertex_FUN_005d3050
// Address: 005d3050
// Address Range: [[005d3050, 005d30bb]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_removePolygonsAtVertex_FUN_005d3050(CObj * this_ptr, int vertex_index)

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_CObj_removePolygonsAtVertex_FUN_005d3050(CObj *this_ptr,int vertex_index)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint index;
  
  index = 0;
  if (this_ptr->poly_count == 0) {
    return 1;
  }
  do {
    piVar1 = &this_ptr->poly_array[index].vertex_idx_0;
    uVar3 = 0;
    iVar2 = *piVar1;
    while (vertex_index != iVar2) {
      piVar1 = piVar1 + 1;
      uVar3 = uVar3 + 1;
      if (this_ptr->poly_array[index].uv_coords <= piVar1) break;
      iVar2 = *piVar1;
    }
    if (uVar3 < 3) {
      iVar2 = (*this_ptr->vtable->removePolygon)(this_ptr,index);
      if (iVar2 == 0) {
        return 0;
      }
      if ((uint)this_ptr->poly_count <= index) {
        return 1;
      }
    }
    else {
      index = index + 1;
      if ((uint)this_ptr->poly_count <= index) {
        return 1;
      }
    }
  } while( true );
}


// Assembly code:
// 005d3050: PUSH EBX
//   Label: shape_superopt.cpp_CObj_removePolygonsAtVertex_FUN_005d3050
// 005d3051: PUSH ESI
// 005d3052: PUSH EDI
// 005d3053: PUSH EBP
// 005d3054: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d3058: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d305c: MOV EDX,dword ptr [EBP + 0x8]
// 005d305f: XOR ESI,ESI
// 005d3061: TEST EDX,EDX
// 005d3063: JBE 0x005d3092
//   XREF to: 005d3092 (CONDITIONAL_JUMP)
// 005d3065: IMUL EAX,ESI,0x68
//   Label: LAB_005d3065
// 005d3068: MOV EDX,dword ptr [EBP + 0xc]
// 005d306b: ADD EAX,EDX
// 005d306d: LEA EDI,[EAX + 0x4]
// 005d3070: XOR EDX,EDX
// 005d3072: MOV EAX,EDI
// 005d3074: LEA ECX,[EDI + 0xc]
// 005d3077: CMP EBX,dword ptr [EDI]
// 005d3079: JZ 0x005d3087
//   XREF to: 005d3087 (CONDITIONAL_JUMP)
// 005d307b: ADD EAX,0x4
//   Label: LAB_005d307b
// 005d307e: INC EDX
// 005d307f: CMP EAX,ECX
// 005d3081: JNC 0x005d3087
//   XREF to: 005d3087 (CONDITIONAL_JUMP)
// 005d3083: CMP EBX,dword ptr [EAX]
// 005d3085: JNZ 0x005d307b
//   XREF to: 005d307b (CONDITIONAL_JUMP)
// 005d3087: CMP EDX,0x3
//   Label: LAB_005d3087
// 005d308a: JC 0x005d309c
//   XREF to: 005d309c (CONDITIONAL_JUMP)
// 005d308c: INC ESI
// 005d308d: CMP ESI,dword ptr [EBP + 0x8]
// 005d3090: JC 0x005d3065
//   XREF to: 005d3065 (CONDITIONAL_JUMP)
// 005d3092: MOV EAX,0x1
//   Label: LAB_005d3092
// 005d3097: POP EBP
//   Label: LAB_005d3097
// 005d3098: POP EDI
// 005d3099: POP ESI
// 005d309a: POP EBX
// 005d309b: RET
// 005d309c: PUSH ESI
//   Label: LAB_005d309c
// 005d309d: MOV EAX,dword ptr [EBP + 0x18]
// 005d30a0: PUSH EBP
// 005d30a1: CALL dword ptr [EAX + 0x40]
// 005d30a4: ADD ESP,0x8
// 005d30a7: TEST EAX,EAX
// 005d30a9: JZ 0x005d3097
//   XREF to: 005d3097 (CONDITIONAL_JUMP)
// 005d30ab: DEC ESI
// 005d30ac: INC ESI
// 005d30ad: CMP ESI,dword ptr [EBP + 0x8]
// 005d30b0: JC 0x005d3065
//   XREF to: 005d3065 (CONDITIONAL_JUMP)
// 005d30b2: MOV EAX,0x1
// 005d30b7: POP EBP
// 005d30b8: POP EDI
// 005d30b9: POP ESI
// 005d30ba: POP EBX
// 005d30bb: RET
