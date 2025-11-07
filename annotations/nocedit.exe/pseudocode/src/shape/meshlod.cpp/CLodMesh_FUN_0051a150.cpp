// Name: shape_meshlod.cpp_CLodMesh_FUN_0051a150
// Address: 0051a150
// Address Range: [[0051a150, 0051a2f2]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_FUN_0051a150(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_0051b330 (0051b330) at 0051b386 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 (0051b920) at 0051ba39 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_FUN_0051a150(CLodMesh *this_ptr)

{
  char *pcVar1;
  int in_EAX;
  float fVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  float in_stack_00000008;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar5 = 0;
  if (0 < this_ptr->vertex_count) {
    in_EAX = 0;
    do {
      *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + in_EAX + -8) = iVar5;
      iVar5 = iVar5 + 1;
      in_EAX = in_EAX + 0x4c4;
    } while (iVar5 < this_ptr->vertex_count);
  }
  iVar5 = 0;
  if (0 < this_ptr->vertex_count) {
    local_1c = 0;
    do {
      iVar3 = *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + local_1c + -8);
      if ((iVar5 == iVar3) && (fVar2 = (float)(iVar3 + 1), (int)fVar2 < this_ptr->vertex_count)) {
        iVar3 = (int)fVar2 * 0x4c4;
        do {
          pcVar1 = this_ptr->vertex_data->field0_0x0 + iVar3;
          if ((fVar2 == *(float *)(pcVar1 + 0x3f4)) &&
             (pcVar4 = this_ptr->vertex_data->field0_0x0 + local_1c,
             (*(float *)(pcVar4 + 8) - *(float *)(pcVar1 + 8)) *
             (*(float *)(pcVar4 + 8) - *(float *)(pcVar1 + 8)) +
             (*(float *)pcVar4 - *(float *)pcVar1) * (*(float *)pcVar4 - *(float *)pcVar1) +
             (*(float *)(pcVar4 + 4) - *(float *)(pcVar1 + 4)) *
             (*(float *)(pcVar4 + 4) - *(float *)(pcVar1 + 4)) <=
             in_stack_00000008 * in_stack_00000008)) {
            *(int *)((int)this_ptr->vertex_data->adjacent_edge_indices + iVar3 + -8) = iVar5;
          }
          fVar2 = (float)((int)fVar2 + 1);
          iVar3 = iVar3 + 0x4c4;
        } while ((int)fVar2 < this_ptr->vertex_count);
      }
      iVar5 = iVar5 + 1;
      local_1c = local_1c + 0x4c4;
      in_EAX = this_ptr->vertex_count;
    } while (iVar5 < in_EAX);
  }
  local_20 = 0;
  if (0 < this_ptr->tri_count) {
    local_24 = 0;
    do {
      iVar5 = 0;
      do {
        iVar3 = iVar5 + local_24;
        iVar5 = iVar5 + 4;
        *(undefined4 *)(this_ptr->triangle_data->field4_0x1c + iVar5 + local_24 + -0x10) =
             *(undefined4 *)
              (this_ptr->vertex_data[*(int *)(this_ptr->triangle_data->field4_0x1c + iVar3 + -0xc)].
               field0_0x0 + 0x3f4);
      } while (iVar5 != 0xc);
      in_EAX = local_24 + 0x8c;
      local_20 = local_20 + 1;
      local_24 = in_EAX;
    } while (local_20 < this_ptr->tri_count);
  }
  iVar5 = 0;
  if (0 < this_ptr->edge_count) {
    in_EAX = 0;
    do {
      *(undefined4 *)(this_ptr->edges_ptr->field2_0x8 + in_EAX + -8) =
           *(undefined4 *)
            (this_ptr->vertex_data[*(int *)(this_ptr->edges_ptr->field2_0x8 + in_EAX + -8)].
             field0_0x0 + 0x3f4);
      *(undefined4 *)(this_ptr->edges_ptr->field2_0x8 + in_EAX + -4) =
           *(undefined4 *)
            (this_ptr->vertex_data[*(int *)(this_ptr->edges_ptr->field2_0x8 + in_EAX + -4)].
             field0_0x0 + 0x3f4);
      iVar5 = iVar5 + 1;
      in_EAX = in_EAX + 0xf0;
    } while (iVar5 < this_ptr->edge_count);
  }
  return in_EAX;
}


// Assembly code:
// 0051a150: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_0051a150
// 0051a151: PUSH ESI
// 0051a152: PUSH EDI
// 0051a153: PUSH EBP
// 0051a154: SUB ESP,0x20
// 0051a157: MOV EDX,dword ptr [ESP + 0x34]
// 0051a15b: MOV ECX,dword ptr [EDX]
// 0051a15d: XOR EDI,EDI
// 0051a15f: TEST ECX,ECX
// 0051a161: JLE 0x0051a180
//   XREF to: 0051a180 (CONDITIONAL_JUMP)
// 0051a163: XOR EAX,EAX
// 0051a165: MOV ECX,dword ptr [EDX + 0x4]
//   Label: LAB_0051a165
// 0051a168: MOV dword ptr [ECX + EAX*0x1 + 0x3f4],EDI
// 0051a16f: INC EDI
// 0051a170: MOV EBX,dword ptr [EDX]
// 0051a172: ADD EAX,0x4c4
// 0051a177: CMP EDI,EBX
// 0051a179: JL 0x0051a165
//   XREF to: 0051a165 (CONDITIONAL_JUMP)
// 0051a17b: LEA EAX,[EAX]
// 0051a17e: MOV ECX,ECX
// 0051a180: FLD float ptr [ESP + 0x38]
//   Label: LAB_0051a180
// 0051a184: FMUL ST0
// 0051a186: MOV ESI,dword ptr [EDX]
// 0051a188: XOR EDI,EDI
// 0051a18a: FSTP float ptr [ESP + 0x18]
// 0051a18e: TEST ESI,ESI
// 0051a190: JLE 0x0051a1c2
//   XREF to: 0051a1c2 (CONDITIONAL_JUMP)
// 0051a192: MOV dword ptr [ESP + 0x14],EDI
// 0051a196: MOV EBP,dword ptr [ESP + 0x14]
//   Label: LAB_0051a196
// 0051a19a: MOV EAX,dword ptr [EDX + 0x4]
// 0051a19d: ADD EAX,EBP
// 0051a19f: MOV ECX,dword ptr [EAX + 0x3f4]
// 0051a1a5: CMP EDI,ECX
// 0051a1a7: JZ 0x0051a278
//   XREF to: 0051a278 (CONDITIONAL_JUMP)
// 0051a1ad: MOV EBP,dword ptr [ESP + 0x14]
//   Label: LAB_0051a1ad
// 0051a1b1: INC EDI
// 0051a1b2: ADD EBP,0x4c4
// 0051a1b8: MOV EAX,dword ptr [EDX]
// 0051a1ba: MOV dword ptr [ESP + 0x14],EBP
// 0051a1be: CMP EDI,EAX
// 0051a1c0: JL 0x0051a196
//   XREF to: 0051a196 (CONDITIONAL_JUMP)
// 0051a1c2: XOR ECX,ECX
//   Label: LAB_0051a1c2
// 0051a1c4: MOV EBX,dword ptr [EDX + 0x8]
// 0051a1c7: MOV dword ptr [ESP + 0x10],ECX
// 0051a1cb: TEST EBX,EBX
// 0051a1cd: JLE 0x0051a219
//   XREF to: 0051a219 (CONDITIONAL_JUMP)
// 0051a1cf: MOV dword ptr [ESP + 0xc],ECX
// 0051a1d3: MOV EDI,dword ptr [ESP + 0xc]
//   Label: LAB_0051a1d3
// 0051a1d7: XOR EAX,EAX
// 0051a1d9: MOV ECX,dword ptr [EDX + 0xc]
//   Label: LAB_0051a1d9
// 0051a1dc: ADD ECX,EDI
// 0051a1de: IMUL EBX,dword ptr [ECX + EAX*0x1 + 0x10],0x4c4
// 0051a1e6: MOV ESI,dword ptr [EDX + 0x4]
// 0051a1e9: ADD EAX,0x4
// 0051a1ec: MOV EBX,dword ptr [ESI + EBX*0x1 + 0x3f4]
// 0051a1f3: MOV dword ptr [ECX + EAX*0x1 + 0xc],EBX
// 0051a1f7: CMP EAX,0xc
// 0051a1fa: JNZ 0x0051a1d9
//   XREF to: 0051a1d9 (CONDITIONAL_JUMP)
// 0051a1fc: MOV EAX,dword ptr [ESP + 0xc]
// 0051a200: MOV ECX,dword ptr [ESP + 0x10]
// 0051a204: MOV EBX,dword ptr [EDX + 0x8]
// 0051a207: ADD EAX,0x8c
// 0051a20c: INC ECX
// 0051a20d: MOV dword ptr [ESP + 0xc],EAX
// 0051a211: MOV dword ptr [ESP + 0x10],ECX
// 0051a215: CMP ECX,EBX
// 0051a217: JL 0x0051a1d3
//   XREF to: 0051a1d3 (CONDITIONAL_JUMP)
// 0051a219: MOV ESI,dword ptr [EDX + 0x44]
//   Label: LAB_0051a219
// 0051a21c: XOR EDI,EDI
// 0051a21e: TEST ESI,ESI
// 0051a220: JLE 0x0051a270
//   XREF to: 0051a270 (CONDITIONAL_JUMP)
// 0051a222: XOR EAX,EAX
// 0051a224: MOV ECX,dword ptr [EDX + 0x48]
//   Label: LAB_0051a224
// 0051a227: IMUL EBX,dword ptr [ECX + EAX*0x1],0x4c4
// 0051a22e: MOV ESI,dword ptr [EDX + 0x4]
// 0051a231: MOV EBX,dword ptr [ESI + EBX*0x1 + 0x3f4]
// 0051a238: MOV dword ptr [ECX + EAX*0x1],EBX
// 0051a23b: MOV ECX,dword ptr [EDX + 0x48]
// 0051a23e: IMUL ESI,dword ptr [ECX + EAX*0x1 + 0x4],0x4c4
// 0051a246: MOV EBX,dword ptr [EDX + 0x4]
// 0051a249: MOV EBX,dword ptr [ESI + EBX*0x1 + 0x3f4]
// 0051a250: MOV dword ptr [ECX + EAX*0x1 + 0x4],EBX
// 0051a254: INC EDI
// 0051a255: MOV ESI,dword ptr [EDX + 0x44]
// 0051a258: ADD EAX,0xf0
// 0051a25d: CMP EDI,ESI
// 0051a25f: JL 0x0051a224
//   XREF to: 0051a224 (CONDITIONAL_JUMP)
// 0051a261: LEA EAX,[EAX]
// 0051a267: LEA EDX,[EDX]
// 0051a26d: LEA EAX,[EAX]
// 0051a270: ADD ESP,0x20
//   Label: LAB_0051a270
// 0051a273: POP EBP
// 0051a274: POP EDI
// 0051a275: POP ESI
// 0051a276: POP EBX
// 0051a277: RET
// 0051a278: INC ECX
//   Label: LAB_0051a278
// 0051a279: CMP ECX,dword ptr [EDX]
// 0051a27b: JGE 0x0051a1ad
//   XREF to: 0051a1ad (CONDITIONAL_JUMP)
// 0051a281: MOV dword ptr [ESP + 0x1c],EBP
// 0051a285: IMUL EBX,ECX,0x4c4
// 0051a28b: MOV ESI,dword ptr [EDX + 0x4]
//   Label: LAB_0051a28b
// 0051a28e: LEA EAX,[ESI + EBX*0x1]
// 0051a291: CMP ECX,dword ptr [EAX + 0x3f4]
// 0051a297: JZ 0x0051a2ac
//   XREF to: 0051a2ac (CONDITIONAL_JUMP)
// 0051a299: INC ECX
//   Label: LAB_0051a299
// 0051a29a: MOV ESI,dword ptr [EDX]
// 0051a29c: ADD EBX,0x4c4
// 0051a2a2: CMP ECX,ESI
// 0051a2a4: JGE 0x0051a1ad
//   XREF to: 0051a1ad (CONDITIONAL_JUMP)
// 0051a2aa: JMP 0x0051a28b
//   XREF to: 0051a28b (UNCONDITIONAL_JUMP)
// 0051a2ac: ADD ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_0051a2ac
// 0051a2b0: FLD float ptr [ESI]
// 0051a2b2: FSUB float ptr [EAX]
// 0051a2b4: FSTP float ptr [ESP]
// 0051a2b7: FLD float ptr [ESI + 0x4]
// 0051a2ba: FSUB float ptr [EAX + 0x4]
// 0051a2bd: FST float ptr [ESP + 0x4]
// 0051a2c1: FMUL float ptr [ESP + 0x4]
// 0051a2c5: FLD float ptr [ESP]
// 0051a2c8: FMUL ST0
// 0051a2ca: FLD float ptr [ESI + 0x8]
// 0051a2cd: FSUB float ptr [EAX + 0x8]
// 0051a2d0: FXCH
// 0051a2d2: FADDP ST2,ST0
// 0051a2d4: FST float ptr [ESP + 0x8]
// 0051a2d8: FMUL float ptr [ESP + 0x8]
// 0051a2dc: FADDP
// 0051a2de: FCOMP float ptr [ESP + 0x18]
// 0051a2e2: FNSTSW AX
// 0051a2e4: SAHF
// 0051a2e5: JA 0x0051a299
//   XREF to: 0051a299 (CONDITIONAL_JUMP)
// 0051a2e7: MOV EAX,dword ptr [EDX + 0x4]
// 0051a2ea: MOV dword ptr [EBX + EAX*0x1 + 0x3f4],EDI
// 0051a2f1: JMP 0x0051a299
//   XREF to: 0051a299 (UNCONDITIONAL_JUMP)
