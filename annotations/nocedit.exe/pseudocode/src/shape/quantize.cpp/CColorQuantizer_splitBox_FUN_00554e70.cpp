// Name: shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
// Address: 00554e70
// Address Range: [[00554e70, 00554fef]]
// Convention: __cdecl
// Signature: void shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70(CColorQuantizer * this_ptr, int source_box_index, int dest_box_index)
// Cross-references:
//   shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40 (00555a40) at 00555c68 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0

#include "nocturne.h"

void __cdecl
shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70
          (CColorQuantizer *this_ptr,int source_box_index,int dest_box_index)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  uchar *pixel_ptr;
  int iVar4;
  int iVar5;
  int in_stack_00000010;
  uchar *in_stack_ffffffdc;
  SColorBox *local_20;
  
  iVar4 = this_ptr->boxes[source_box_index].start_index;
  iVar5 = this_ptr->boxes[source_box_index].pixel_count + iVar4 + -1;
  local_20 = (SColorBox *)((int)this_ptr->pixel_data + iVar4 * 4);
  pixel_ptr = (uchar *)((int)this_ptr->pixel_data + iVar5 * 4);
  if (iVar4 < iVar5) {
    do {
      shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                (this_ptr,this_ptr->boxes + source_box_index,(uchar *)local_20);
      fVar3 = shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                        (this_ptr,local_20,in_stack_ffffffdc);
      if (fVar3 < (float)in_stack_ffffffdc) {
        for (; iVar4 < iVar5; iVar5 = iVar5 + -1) {
          shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                    (this_ptr,this_ptr->boxes + source_box_index,pixel_ptr);
          fVar3 = shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
                            (this_ptr,local_20,pixel_ptr);
          if ((float)in_stack_ffffffdc <= fVar3) break;
          pixel_ptr = pixel_ptr + -4;
        }
        uVar1 = *(undefined4 *)pixel_ptr;
        uVar2 = *(undefined4 *)local_20;
        local_20->avg_red = (short)uVar1;
        local_20->avg_green = (short)((uint)uVar1 >> 0x10);
        *(undefined4 *)pixel_ptr = uVar2;
      }
      local_20 = (SColorBox *)&local_20->avg_blue;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  this_ptr->boxes[dest_box_index].start_index = iVar5;
  this_ptr->boxes[dest_box_index].pixel_count =
       this_ptr->boxes[source_box_index].pixel_count -
       (iVar5 - this_ptr->boxes[source_box_index].start_index);
  this_ptr->boxes[source_box_index].pixel_count =
       iVar5 - this_ptr->boxes[source_box_index].start_index;
  shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,source_box_index);
  shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,in_stack_00000010);
  return;
}


// Assembly code:
// 00554e70: PUSH EBX
//   Label: shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
// 00554e71: PUSH ESI
// 00554e72: PUSH EDI
// 00554e73: PUSH EBP
// 00554e74: SUB ESP,0x14
// 00554e77: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00554e7b: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00554e7f: LEA EBX,[EDX*0x4 + 0x0]
// 00554e86: ADD EBX,EDX
// 00554e88: SHL EBX,0x3
// 00554e8b: LEA EAX,[EDI + EBX*0x1]
// 00554e8e: LEA EDX,[EDI + 0x2030]
// 00554e94: MOV EBP,dword ptr [EAX + 0x2050]
// 00554e9a: MOV ESI,dword ptr [EAX + 0x2054]
// 00554ea0: LEA EAX,[EDX + EBX*0x1]
// 00554ea3: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 00554ea7: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00554eab: LEA EAX,[EBX*0x4 + 0x0]
// 00554eb2: ADD ESI,EBP
// 00554eb4: ADD EAX,EBX
// 00554eb6: DEC ESI
// 00554eb7: SHL EAX,0x3
// 00554eba: MOV EBX,dword ptr [EDI + 0x4]
// 00554ebd: ADD EDX,EAX
// 00554ebf: LEA EAX,[EBP*0x4 + 0x0]
// 00554ec6: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00554eca: LEA EDX,[EBX + EAX*0x1]
// 00554ecd: LEA EAX,[ESI*0x4 + 0x0]
// 00554ed4: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00554ed8: ADD EBX,EAX
// 00554eda: CMP EBP,ESI
// 00554edc: JGE 0x00554f7c
//   XREF to: 00554f7c (CONDITIONAL_JUMP)
// 00554ee2: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_00554ee2
//   XREF to: Stack[-0x20] (READ)
// 00554ee6: PUSH ECX
// 00554ee7: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00554eeb: PUSH EAX
// 00554eec: PUSH EDI
// 00554eed: CALL shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
//   XREF to: 00554ff0 (UNCONDITIONAL_CALL)
// 00554ef2: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00554ef6: ADD ESP,0xc
// 00554ef9: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 00554efd: PUSH EDX
// 00554efe: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00554f02: PUSH ECX
// 00554f03: PUSH EDI
// 00554f04: CALL shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
//   XREF to: 00554ff0 (UNCONDITIONAL_CALL)
// 00554f09: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00554f0d: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00554f11: ADD ESP,0xc
// 00554f14: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00554f17: FNSTSW AX
// 00554f19: SAHF
// 00554f1a: JNC 0x00554f68
//   XREF to: 00554f68 (CONDITIONAL_JUMP)
// 00554f1c: CMP EBP,ESI
//   Label: LAB_00554f1c
// 00554f1e: JGE 0x00554f58
//   XREF to: 00554f58 (CONDITIONAL_JUMP)
// 00554f20: PUSH EBX
// 00554f21: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00554f25: PUSH EAX
// 00554f26: PUSH EDI
// 00554f27: CALL shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
//   XREF to: 00554ff0 (UNCONDITIONAL_CALL)
// 00554f2c: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00554f30: ADD ESP,0xc
// 00554f33: PUSH EBX
// 00554f34: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00554f38: PUSH EDX
// 00554f39: PUSH EDI
// 00554f3a: CALL shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
//   XREF to: 00554ff0 (UNCONDITIONAL_CALL)
// 00554f3f: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00554f43: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00554f47: ADD ESP,0xc
// 00554f4a: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00554f4d: FNSTSW AX
// 00554f4f: SAHF
// 00554f50: JNC 0x00554f58
//   XREF to: 00554f58 (CONDITIONAL_JUMP)
// 00554f52: SUB EBX,0x4
// 00554f55: DEC ESI
// 00554f56: JMP 0x00554f1c
//   XREF to: 00554f1c (UNCONDITIONAL_JUMP)
// 00554f58: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00554f58
//   XREF to: Stack[-0x20] (READ)
// 00554f5c: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 00554f60: MOV EDX,dword ptr [EBX]
// 00554f62: MOV EAX,dword ptr [EAX]
// 00554f64: MOV dword ptr [ECX],EDX
// 00554f66: MOV dword ptr [EBX],EAX
// 00554f68: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_00554f68
//   XREF to: Stack[-0x20] (READ)
// 00554f6c: ADD EDX,0x4
// 00554f6f: INC EBP
// 00554f70: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00554f74: CMP EBP,ESI
// 00554f76: JL 0x00554ee2
//   XREF to: 00554ee2 (CONDITIONAL_JUMP)
// 00554f7c: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_00554f7c
//   XREF to: Stack[0xc] (READ)
// 00554f80: LEA EAX,[EDX*0x4 + 0x0]
// 00554f87: ADD EAX,EDX
// 00554f89: SHL EAX,0x3
// 00554f8c: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00554f90: LEA EBX,[EDI + EAX*0x1]
// 00554f93: LEA EAX,[EDX*0x4 + 0x0]
// 00554f9a: ADD EAX,EDX
// 00554f9c: MOV dword ptr [EBX + 0x2050],ESI
// 00554fa2: MOV EDX,ESI
// 00554fa4: MOV ECX,dword ptr [EDI + EAX*0x8 + 0x2050]
// 00554fab: MOV EBP,dword ptr [EDI + EAX*0x8 + 0x2054]
// 00554fb2: SUB EDX,ECX
// 00554fb4: SUB EBP,EDX
// 00554fb6: MOV dword ptr [EBX + 0x2054],EBP
// 00554fbc: MOV EBX,dword ptr [EDI + EAX*0x8 + 0x2050]
// 00554fc3: SUB ESI,EBX
// 00554fc5: MOV dword ptr [EDI + EAX*0x8 + 0x2054],ESI
// 00554fcc: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00554fd0: PUSH ESI
// 00554fd1: PUSH EDI
// 00554fd2: CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   XREF to: 00555090 (UNCONDITIONAL_CALL)
// 00554fd7: ADD ESP,0x8
// 00554fda: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 00554fde: PUSH EBP
// 00554fdf: PUSH EDI
// 00554fe0: CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   XREF to: 00555090 (UNCONDITIONAL_CALL)
// 00554fe5: ADD ESP,0x8
// 00554fe8: ADD ESP,0x14
// 00554feb: POP EBP
// 00554fec: POP EDI
// 00554fed: POP ESI
// 00554fee: POP EBX
// 00554fef: RET
