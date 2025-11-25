// Name: shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40
// Address: 00555a40
// Address Range: [[00555a40, 00555fe4]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40(CColorQuantizer * this_ptr)
// Cross-references:
//   shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0 (00554cc0) at 00554cda [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Phase_2_00640d7b
// Function calls:
//   shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70

#include "nocturne.h"

int __cdecl shape_quantize_cpp_CColorQuantizer_reduceColors_FUN_00555a40(CColorQuantizer *this_ptr)

{
  undefined4 uVar1;
  CColorQuantizer *pCVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  float local_60;
  int local_5c;
  int local_58;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_48 = 0;
  iVar3 = local_48;
  while( true ) {
    local_48 = iVar3;
    iVar3 = this_ptr->num_colors + -1;
    if (iVar3 <= local_48) {
      return 1;
    }
    if ((this_ptr->progress_callback != (CColorQuantizer_ProgressCallback *)0x0) &&
       (iVar3 = (*this_ptr->progress_callback)("Phase 2",iVar3,local_48), iVar3 != 0))
    break;
    local_4c = 0;
    local_60 = this_ptr->boxes[0].weighted_variance;
    iVar3 = 1;
    local_50 = this_ptr->boxes[0].final_metric;
    pCVar2 = this_ptr;
    if (0 < local_48) {
      do {
        if (local_60 < pCVar2->boxes[1].weighted_variance) {
          local_60 = pCVar2->boxes[1].weighted_variance;
          local_50 = pCVar2->boxes[1].final_metric;
          local_4c = iVar3;
        }
        iVar3 = iVar3 + 1;
        pCVar2 = (CColorQuantizer *)&pCVar2->current_b;
      } while (iVar3 <= local_48);
    }
    if (local_60 <= 0.0) {
      return 1;
    }
    iVar3 = local_48 + 1;
    if (local_50 == this_ptr->boxes[local_4c].red_variance) {
      local_30 = this_ptr->boxes[local_4c].start_index;
      iVar4 = local_30 + this_ptr->boxes[local_4c].pixel_count + -1;
      iVar7 = *(int *)((int)&this_ptr->boxes[local_4c + -1].pixel_count + 2) >> 0x10;
      if (local_30 < iVar4) {
        local_44 = local_30 * 4;
        do {
          if (iVar7 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + local_44)) {
            for (iVar6 = iVar4 * 4;
                (local_30 * 4 < iVar6 &&
                (iVar7 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + iVar6)));
                iVar6 = iVar6 + -4) {
              iVar4 = iVar4 + -1;
            }
            puVar5 = (undefined4 *)(local_44 + (int)this_ptr->pixel_data);
            uVar1 = *puVar5;
            *puVar5 = *(undefined4 *)((int)this_ptr->pixel_data + iVar4 * 4);
            *(undefined4 *)((int)this_ptr->pixel_data + iVar4 * 4) = uVar1;
          }
          local_44 = local_44 + 4;
          local_30 = local_30 + 1;
        } while (local_30 < iVar4);
      }
      local_5c = this_ptr->boxes[local_4c].pixel_count;
      iVar7 = iVar4 - this_ptr->boxes[local_4c].start_index;
      this_ptr->boxes[local_48 + 1].start_index = iVar4;
      this_ptr->boxes[local_48 + 1].pixel_count = this_ptr->boxes[local_4c].pixel_count - iVar7;
      this_ptr->boxes[local_4c].pixel_count = iVar7;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_4c);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,iVar3);
      this_ptr->boxes[local_4c].pixel_count = (int)local_60;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,(int)local_50,iVar3);
    }
    else if (local_50 == this_ptr->boxes[local_4c].green_variance) {
      local_2c = this_ptr->boxes[local_4c].start_index;
      iVar7._0_2_ = this_ptr->boxes[local_4c].avg_red;
      iVar7._2_2_ = this_ptr->boxes[local_4c].avg_green;
      iVar4 = local_2c + this_ptr->boxes[local_4c].pixel_count + -1;
      if (local_2c < iVar4) {
        local_38 = local_2c * 4;
        do {
          if (iVar7 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + local_38 + 1)) {
            iVar6 = iVar4 * 4;
            while ((local_2c * 4 < iVar6 &&
                   (iVar7 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + iVar6 + 1)))) {
              iVar4 = iVar4 + -1;
              iVar6 = iVar6 + -4;
            }
            puVar5 = (undefined4 *)(local_38 + (int)this_ptr->pixel_data);
            uVar1 = *puVar5;
            *puVar5 = *(undefined4 *)((int)this_ptr->pixel_data + iVar4 * 4);
            *(undefined4 *)((int)this_ptr->pixel_data + iVar4 * 4) = uVar1;
          }
          local_38 = local_38 + 4;
          local_2c = local_2c + 1;
        } while (local_2c < iVar4);
      }
      local_58 = this_ptr->boxes[local_4c].pixel_count;
      iVar7 = iVar4 - this_ptr->boxes[local_4c].start_index;
      this_ptr->boxes[local_48 + 1].start_index = iVar4;
      this_ptr->boxes[local_48 + 1].pixel_count = this_ptr->boxes[local_4c].pixel_count - iVar7;
      this_ptr->boxes[local_4c].pixel_count = iVar7;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_4c);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,iVar3);
      this_ptr->boxes[local_4c].pixel_count = local_5c;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,(int)local_50,iVar3);
    }
    else if (local_50 == this_ptr->boxes[local_4c].blue_variance) {
      local_34 = this_ptr->boxes[local_4c].start_index;
      iVar4._0_2_ = this_ptr->boxes[local_4c].avg_green;
      iVar4._2_2_ = this_ptr->boxes[local_4c].avg_blue;
      iVar7 = local_34 + this_ptr->boxes[local_4c].pixel_count + -1;
      if (local_34 < iVar7) {
        local_40 = local_34 * 4;
        do {
          if (iVar4 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + local_40 + 2)) {
            iVar6 = iVar7 * 4;
            while ((local_34 * 4 < iVar6 &&
                   (iVar4 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + iVar6 + 2)))) {
              iVar7 = iVar7 + -1;
              iVar6 = iVar6 + -4;
            }
            puVar5 = (undefined4 *)(local_40 + (int)this_ptr->pixel_data);
            uVar1 = *puVar5;
            *puVar5 = *(undefined4 *)((int)this_ptr->pixel_data + iVar7 * 4);
            *(undefined4 *)((int)this_ptr->pixel_data + iVar7 * 4) = uVar1;
          }
          local_40 = local_40 + 4;
          local_34 = local_34 + 1;
        } while (local_34 < iVar7);
      }
      iVar4 = iVar7 - this_ptr->boxes[local_4c].start_index;
      this_ptr->boxes[local_48 + 1].start_index = iVar7;
      this_ptr->boxes[local_48 + 1].pixel_count = this_ptr->boxes[local_4c].pixel_count - iVar4;
      this_ptr->boxes[local_4c].pixel_count = iVar4;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_4c);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,iVar3);
      this_ptr->boxes[local_4c].pixel_count = local_58;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,(int)local_50,iVar3);
    }
    else if (local_50 == this_ptr->boxes[local_4c].intensity_variance) {
      local_28 = this_ptr->boxes[local_4c].start_index;
      iVar6._0_2_ = this_ptr->boxes[local_4c].avg_blue;
      iVar6._2_2_ = this_ptr->boxes[local_4c].avg_intensity;
      iVar7 = local_28 + this_ptr->boxes[local_4c].pixel_count + -1;
      if (local_28 < iVar7) {
        local_3c = local_28 * 4;
        do {
          if (iVar6 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + local_3c + 3)) {
            iVar4 = iVar7 * 4;
            while ((local_28 * 4 < iVar4 &&
                   (iVar6 >> 0x10 < (int)(uint)*(byte *)((int)this_ptr->pixel_data + iVar4 + 3)))) {
              iVar7 = iVar7 + -1;
              iVar4 = iVar4 + -4;
            }
            puVar5 = (undefined4 *)(local_3c + (int)this_ptr->pixel_data);
            uVar1 = *puVar5;
            *puVar5 = *(undefined4 *)((int)this_ptr->pixel_data + iVar7 * 4);
            *(undefined4 *)((int)this_ptr->pixel_data + iVar7 * 4) = uVar1;
          }
          local_3c = local_3c + 4;
          local_28 = local_28 + 1;
        } while (local_28 < iVar7);
      }
      iVar6 = iVar7 - this_ptr->boxes[local_4c].start_index;
      iVar4 = this_ptr->boxes[local_4c].pixel_count;
      this_ptr->boxes[local_48 + 1].start_index = iVar7;
      this_ptr->boxes[local_48 + 1].pixel_count = this_ptr->boxes[local_4c].pixel_count - iVar6;
      this_ptr->boxes[local_4c].pixel_count = iVar6;
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,local_4c);
      shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,(int)local_50);
      this_ptr->boxes[local_4c].pixel_count = iVar4;
      shape_quantize_cpp_CColorQuantizer_splitBox_FUN_00554e70(this_ptr,(int)local_50,local_4c);
    }
  }
  return 0;
}


// Assembly code:
// 00555a40: PUSH EBX
//   Label: shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40
// 00555a41: PUSH ESI
// 00555a42: PUSH EDI
// 00555a43: PUSH EBP
// 00555a44: MOV EBP,ESP
// 00555a46: SUB ESP,0x4c
// 00555a49: AND ESP,0xfffffff8
// 00555a4c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00555a4f: XOR EDX,EDX
// 00555a51: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 00555a55: MOV EAX,dword ptr [EBX + 0x4b40]
//   Label: LAB_00555a55
// 00555a5b: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00555a5f: DEC EAX
// 00555a60: CMP EAX,ECX
// 00555a62: JLE 0x00555fd9
//   XREF to: 00555fd9 (CONDITIONAL_JUMP)
// 00555a68: CMP dword ptr [EBX],0x0
// 00555a6b: JNZ 0x00555b38
//   XREF to: 00555b38 (CONDITIONAL_JUMP)
// 00555a71: XOR EAX,EAX
//   Label: LAB_00555a71
// 00555a73: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00555a77: MOV EAX,dword ptr [EBX + 0x2038]
// 00555a7d: MOV ECX,0x1
// 00555a82: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x60] (DATA)
// 00555a85: MOV EAX,dword ptr [EBX + 0x204c]
// 00555a8b: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00555a8f: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00555a93: CMP EDX,ECX
// 00555a95: JL 0x00555acb
//   XREF to: 00555acb (CONDITIONAL_JUMP)
// 00555a97: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00555a9b: LEA EDX,[EBX + 0x28]
// 00555a9e: FLD float ptr [EDX + 0x2038]
//   Label: LAB_00555a9e
// 00555aa4: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 00555aa7: FNSTSW AX
// 00555aa9: SAHF
// 00555aaa: JBE 0x00555ac3
//   XREF to: 00555ac3 (CONDITIONAL_JUMP)
// 00555aac: MOV EAX,dword ptr [EDX + 0x2038]
// 00555ab2: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x60] (DATA)
// 00555ab5: MOV EAX,dword ptr [EDX + 0x204c]
// 00555abb: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 00555abf: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00555ac3: INC ECX
//   Label: LAB_00555ac3
// 00555ac4: ADD EDX,0x28
// 00555ac7: CMP ECX,ESI
// 00555ac9: JLE 0x00555a9e
//   XREF to: 00555a9e (CONDITIONAL_JUMP)
// 00555acb: FLD float ptr [ESP]
//   Label: LAB_00555acb
//   XREF to: Stack[-0x60] (DATA)
// 00555ace: FLDZ
// 00555ad0: FCOMPP
// 00555ad2: FNSTSW AX
// 00555ad4: SAHF
// 00555ad5: JNC 0x00555fd9
//   XREF to: 00555fd9 (CONDITIONAL_JUMP)
// 00555adb: IMUL ECX,dword ptr [ESP + 0x14],0x28
//   XREF to: Stack[-0x4c] (READ)
// 00555ae0: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00555ae4: INC EAX
// 00555ae5: ADD ECX,EBX
// 00555ae7: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00555aeb: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00555aef: FCOMP float ptr [ECX + 0x203c]
// 00555af5: FNSTSW AX
// 00555af7: SAHF
// 00555af8: JZ 0x00555b55
//   XREF to: 00555b55 (CONDITIONAL_JUMP)
// 00555afa: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00555afe: FCOMP float ptr [ECX + 0x2040]
// 00555b04: FNSTSW AX
// 00555b06: SAHF
// 00555b07: JZ 0x00555c75
//   XREF to: 00555c75 (CONDITIONAL_JUMP)
// 00555b0d: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00555b11: FCOMP float ptr [ECX + 0x2044]
// 00555b17: FNSTSW AX
// 00555b19: SAHF
// 00555b1a: JZ 0x00555d98
//   XREF to: 00555d98 (CONDITIONAL_JUMP)
// 00555b20: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00555b24: FCOMP float ptr [ECX + 0x2048]
// 00555b2a: FNSTSW AX
// 00555b2c: SAHF
// 00555b2d: JZ 0x00555eba
//   XREF to: 00555eba (CONDITIONAL_JUMP)
// 00555b33: JMP 0x00555a55
//   XREF to: 00555a55 (UNCONDITIONAL_JUMP)
// 00555b38: PUSH ECX
//   Label: LAB_00555b38
// 00555b39: PUSH EAX
// 00555b3a: PUSH 0x640d7b
//   XREF to: 00640d7b (DATA)
// 00555b3f: CALL dword ptr [EBX]
// 00555b41: ADD ESP,0xc
// 00555b44: TEST EAX,EAX
// 00555b46: JZ 0x00555a71
//   XREF to: 00555a71 (CONDITIONAL_JUMP)
// 00555b4c: XOR EAX,EAX
// 00555b4e: MOV ESP,EBP
// 00555b50: POP EBP
// 00555b51: POP EDI
// 00555b52: POP ESI
// 00555b53: POP EBX
// 00555b54: RET
// 00555b55: MOV EAX,dword ptr [ECX + 0x2050]
//   Label: LAB_00555b55
// 00555b5b: MOV EDX,EAX
// 00555b5d: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00555b61: ADD EDX,dword ptr [ECX + 0x2054]
// 00555b67: MOV EAX,dword ptr [ECX + 0x202e]
// 00555b6d: DEC EDX
// 00555b6e: SAR EAX,0x10
// 00555b71: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 00555b75: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00555b79: CMP EDX,ECX
// 00555b7b: JLE 0x00555bfe
//   XREF to: 00555bfe (CONDITIONAL_JUMP)
// 00555b81: LEA EAX,[ECX*0x4 + 0x0]
// 00555b88: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00555b8c: MOV EDI,dword ptr [ESP + 0x1c]
//   Label: LAB_00555b8c
//   XREF to: Stack[-0x44] (READ)
// 00555b90: MOV EAX,dword ptr [EBX + 0x4]
// 00555b93: ADD EAX,EDI
// 00555b95: MOV AL,byte ptr [EAX]
// 00555b97: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 00555b9b: AND EAX,0xff
// 00555ba0: CMP EAX,ECX
// 00555ba2: JLE 0x00555be6
//   XREF to: 00555be6 (CONDITIONAL_JUMP)
// 00555ba4: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 00555ba8: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 00555bac: LEA EAX,[EDX*0x4 + 0x0]
// 00555bb3: SHL ESI,0x2
// 00555bb6: CMP ESI,EAX
//   Label: LAB_00555bb6
// 00555bb8: JGE 0x00555bd0
//   XREF to: 00555bd0 (CONDITIONAL_JUMP)
// 00555bba: MOV ECX,dword ptr [EBX + 0x4]
// 00555bbd: MOV CL,byte ptr [ECX + EAX*0x1]
// 00555bc0: AND ECX,0xff
// 00555bc6: CMP ECX,EDI
// 00555bc8: JLE 0x00555bd0
//   XREF to: 00555bd0 (CONDITIONAL_JUMP)
// 00555bca: DEC EDX
// 00555bcb: SUB EAX,0x4
// 00555bce: JMP 0x00555bb6
//   XREF to: 00555bb6 (UNCONDITIONAL_JUMP)
// 00555bd0: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00555bd0
//   XREF to: Stack[-0x44] (READ)
// 00555bd4: MOV ECX,dword ptr [EBX + 0x4]
// 00555bd7: ADD EAX,ECX
// 00555bd9: MOV ECX,dword ptr [ECX + EDX*0x4]
// 00555bdc: MOV ESI,dword ptr [EAX]
// 00555bde: MOV dword ptr [EAX],ECX
// 00555be0: MOV EAX,dword ptr [EBX + 0x4]
// 00555be3: MOV dword ptr [EAX + EDX*0x4],ESI
// 00555be6: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00555be6
//   XREF to: Stack[-0x44] (READ)
// 00555bea: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 00555bee: ADD EAX,0x4
// 00555bf1: INC ECX
// 00555bf2: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00555bf6: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00555bfa: CMP EDX,ECX
// 00555bfc: JG 0x00555b8c
//   XREF to: 00555b8c (CONDITIONAL_JUMP)
// 00555bfe: IMUL ESI,dword ptr [ESP + 0x14],0x28
//   Label: LAB_00555bfe
//   XREF to: Stack[-0x4c] (READ)
// 00555c03: MOV EAX,dword ptr [ESI + EBX*0x1 + 0x2054]
// 00555c0a: MOV ECX,EDX
// 00555c0c: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00555c10: MOV EAX,dword ptr [ESI + EBX*0x1 + 0x2050]
// 00555c17: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00555c1b: SUB ECX,EAX
// 00555c1d: IMUL EAX,EDI,0x28
// 00555c20: MOV dword ptr [EBX + EAX*0x1 + 0x2050],EDX
// 00555c27: MOV EDX,dword ptr [ESI + EBX*0x1 + 0x2054]
// 00555c2e: SUB EDX,ECX
// 00555c30: MOV dword ptr [EBX + EAX*0x1 + 0x2054],EDX
// 00555c37: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00555c3b: PUSH EAX
// 00555c3c: PUSH EBX
// 00555c3d: MOV dword ptr [ESI + EBX*0x1 + 0x2054],ECX
// 00555c44: CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   XREF to: 00555090 (UNCONDITIONAL_CALL)
// 00555c49: ADD ESP,0x8
// 00555c4c: PUSH EDI
// 00555c4d: PUSH EBX
// 00555c4e: CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   XREF to: 00555090 (UNCONDITIONAL_CALL)
// 00555c53: ADD ESP,0x8
// 00555c56: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x5c] (READ)
// 00555c5a: PUSH EDI
// 00555c5b: MOV dword ptr [ESI + EBX*0x1 + 0x2054],EAX
// 00555c62: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x4c] (READ)
// 00555c66: PUSH ESI
// 00555c67: PUSH EBX
// 00555c68: CALL shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
//   XREF to: 00554e70 (UNCONDITIONAL_CALL)
// 00555c6d: ADD ESP,0xc
// 00555c70: JMP 0x00555a55
//   XREF to: 00555a55 (UNCONDITIONAL_JUMP)
// 00555c75: MOV EAX,dword ptr [ECX + 0x2050]
//   Label: LAB_00555c75
// 00555c7b: MOV ESI,dword ptr [ECX + 0x2054]
// 00555c81: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00555c85: LEA EDX,[EAX + ESI*0x1]
// 00555c88: MOV EAX,dword ptr [ECX + 0x2030]
// 00555c8e: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00555c92: SAR EAX,0x10
// 00555c95: DEC EDX
// 00555c96: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00555c9a: CMP EDX,EDI
// 00555c9c: JLE 0x00555d21
//   XREF to: 00555d21 (CONDITIONAL_JUMP)
// 00555ca2: LEA EAX,[EDI*0x4 + 0x0]
// 00555ca9: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00555cad: MOV EDI,dword ptr [ESP + 0x28]
//   Label: LAB_00555cad
//   XREF to: Stack[-0x38] (READ)
// 00555cb1: MOV EAX,dword ptr [EBX + 0x4]
// 00555cb4: ADD EAX,EDI
// 00555cb6: MOV AL,byte ptr [EAX + 0x1]
// 00555cb9: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 00555cbd: AND EAX,0xff
// 00555cc2: CMP EAX,ECX
// 00555cc4: JLE 0x00555d09
//   XREF to: 00555d09 (CONDITIONAL_JUMP)
// 00555cc6: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00555cca: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 00555cce: LEA EAX,[EDX*0x4 + 0x0]
// 00555cd5: SHL ESI,0x2
// 00555cd8: CMP ESI,EAX
//   Label: LAB_00555cd8
// 00555cda: JGE 0x00555cf3
//   XREF to: 00555cf3 (CONDITIONAL_JUMP)
// 00555cdc: MOV ECX,dword ptr [EBX + 0x4]
// 00555cdf: MOV CL,byte ptr [ECX + EAX*0x1 + 0x1]
// 00555ce3: AND ECX,0xff
// 00555ce9: CMP ECX,EDI
// 00555ceb: JLE 0x00555cf3
//   XREF to: 00555cf3 (CONDITIONAL_JUMP)
// 00555ced: DEC EDX
// 00555cee: SUB EAX,0x4
// 00555cf1: JMP 0x00555cd8
//   XREF to: 00555cd8 (UNCONDITIONAL_JUMP)
// 00555cf3: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_00555cf3
//   XREF to: Stack[-0x38] (READ)
// 00555cf7: MOV EAX,dword ptr [EBX + 0x4]
// 00555cfa: ADD ECX,EAX
// 00555cfc: MOV EAX,dword ptr [EAX + EDX*0x4]
// 00555cff: MOV EDI,dword ptr [ECX]
// 00555d01: MOV dword ptr [ECX],EAX
// 00555d03: MOV EAX,dword ptr [EBX + 0x4]
// 00555d06: MOV dword ptr [EAX + EDX*0x4],EDI
// 00555d09: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00555d09
//   XREF to: Stack[-0x38] (READ)
// 00555d0d: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00555d11: ADD EAX,0x4
// 00555d14: INC ECX
// 00555d15: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00555d19: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00555d1d: CMP EDX,ECX
// 00555d1f: JG 0x00555cad
//   XREF to: 00555cad (CONDITIONAL_JUMP)
// 00555d21: IMUL ESI,dword ptr [ESP + 0x14],0x28
//   Label: LAB_00555d21
//   XREF to: Stack[-0x4c] (READ)
// 00555d26: MOV EAX,dword ptr [ESI + EBX*0x1 + 0x2054]
// 00555d2d: MOV ECX,EDX
// 00555d2f: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00555d33: MOV EAX,dword ptr [ESI + EBX*0x1 + 0x2050]
// 00555d3a: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00555d3e: SUB ECX,EAX
// 00555d40: IMUL EAX,EDI,0x28
// 00555d43: MOV dword ptr [EBX + EAX*0x1 + 0x2050],EDX
// 00555d4a: MOV EDX,dword ptr [ESI + EBX*0x1 + 0x2054]
// 00555d51: SUB EDX,ECX
// 00555d53: MOV dword ptr [EBX + EAX*0x1 + 0x2054],EDX
// 00555d5a: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00555d5e: PUSH EAX
// 00555d5f: PUSH EBX
// 00555d60: MOV dword ptr [ESI + EBX*0x1 + 0x2054],ECX
// 00555d67: CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   XREF to: 00555090 (UNCONDITIONAL_CALL)
// 00555d6c: ADD ESP,0x8
// 00555d6f: PUSH EDI
// 00555d70: PUSH EBX
// 00555d71: CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   XREF to: 00555090 (UNCONDITIONAL_CALL)
// 00555d76: ADD ESP,0x8
// 00555d79: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00555d7d: PUSH EDI
// 00555d7e: MOV dword ptr [ESI + EBX*0x1 + 0x2054],EAX
// 00555d85: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x4c] (READ)
// 00555d89: PUSH ESI
// 00555d8a: PUSH EBX
// 00555d8b: CALL shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
//   XREF to: 00554e70 (UNCONDITIONAL_CALL)
// 00555d90: ADD ESP,0xc
// 00555d93: JMP 0x00555a55
//   XREF to: 00555a55 (UNCONDITIONAL_JUMP)
// 00555d98: MOV EAX,dword ptr [ECX + 0x2050]
//   Label: LAB_00555d98
// 00555d9e: MOV EDX,EAX
// 00555da0: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00555da4: ADD EDX,dword ptr [ECX + 0x2054]
// 00555daa: MOV EAX,dword ptr [ECX + 0x2032]
// 00555db0: DEC EDX
// 00555db1: SAR EAX,0x10
// 00555db4: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 00555db8: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00555dbc: CMP EDX,ECX
// 00555dbe: JLE 0x00555e43
//   XREF to: 00555e43 (CONDITIONAL_JUMP)
// 00555dc4: LEA EAX,[ECX*0x4 + 0x0]
// 00555dcb: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00555dcf: MOV EDI,dword ptr [ESP + 0x20]
//   Label: LAB_00555dcf
//   XREF to: Stack[-0x40] (READ)
// 00555dd3: MOV EAX,dword ptr [EBX + 0x4]
// 00555dd6: ADD EAX,EDI
// 00555dd8: MOV AL,byte ptr [EAX + 0x2]
// 00555ddb: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 00555ddf: AND EAX,0xff
// 00555de4: CMP EAX,ECX
// 00555de6: JLE 0x00555e2b
//   XREF to: 00555e2b (CONDITIONAL_JUMP)
// 00555de8: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 00555dec: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 00555df0: LEA EAX,[EDX*0x4 + 0x0]
// 00555df7: SHL ESI,0x2
// 00555dfa: CMP ESI,EAX
//   Label: LAB_00555dfa
// 00555dfc: JGE 0x00555e15
//   XREF to: 00555e15 (CONDITIONAL_JUMP)
// 00555dfe: MOV ECX,dword ptr [EBX + 0x4]
// 00555e01: MOV CL,byte ptr [ECX + EAX*0x1 + 0x2]
// 00555e05: AND ECX,0xff
// 00555e0b: CMP ECX,EDI
// 00555e0d: JLE 0x00555e15
//   XREF to: 00555e15 (CONDITIONAL_JUMP)
// 00555e0f: DEC EDX
// 00555e10: SUB EAX,0x4
// 00555e13: JMP 0x00555dfa
//   XREF to: 00555dfa (UNCONDITIONAL_JUMP)
// 00555e15: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_00555e15
//   XREF to: Stack[-0x40] (READ)
// 00555e19: MOV ECX,dword ptr [EBX + 0x4]
// 00555e1c: ADD EAX,ECX
// 00555e1e: MOV ECX,dword ptr [ECX + EDX*0x4]
// 00555e21: MOV EDI,dword ptr [EAX]
// 00555e23: MOV dword ptr [EAX],ECX
// 00555e25: MOV EAX,dword ptr [EBX + 0x4]
// 00555e28: MOV dword ptr [EAX + EDX*0x4],EDI
// 00555e2b: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_00555e2b
//   XREF to: Stack[-0x40] (READ)
// 00555e2f: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 00555e33: ADD EAX,0x4
// 00555e36: INC ECX
// 00555e37: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00555e3b: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00555e3f: CMP EDX,ECX
// 00555e41: JG 0x00555dcf
//   XREF to: 00555dcf (CONDITIONAL_JUMP)
// 00555e43: IMUL ESI,dword ptr [ESP + 0x14],0x28
//   Label: LAB_00555e43
//   XREF to: Stack[-0x4c] (READ)
// 00555e48: MOV EAX,dword ptr [ESI + EBX*0x1 + 0x2054]
// 00555e4f: MOV ECX,dword ptr [ESI + EBX*0x1 + 0x2050]
// 00555e56: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00555e5a: MOV EAX,EDX
// 00555e5c: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00555e60: SUB EAX,ECX
// 00555e62: IMUL ECX,EDI,0x28
// 00555e65: MOV dword ptr [ECX + EBX*0x1 + 0x2050],EDX
// 00555e6c: MOV EDX,dword ptr [ESI + EBX*0x1 + 0x2054]
// 00555e73: SUB EDX,EAX
// 00555e75: MOV dword ptr [ECX + EBX*0x1 + 0x2054],EDX
// 00555e7c: MOV dword ptr [ESI + EBX*0x1 + 0x2054],EAX
// 00555e83: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00555e87: PUSH EAX
// 00555e88: PUSH EBX
// 00555e89: CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   XREF to: 00555090 (UNCONDITIONAL_CALL)
// 00555e8e: ADD ESP,0x8
// 00555e91: PUSH EDI
// 00555e92: PUSH EBX
// 00555e93: CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   XREF to: 00555090 (UNCONDITIONAL_CALL)
// 00555e98: ADD ESP,0x8
// 00555e9b: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x54] (READ)
// 00555e9f: PUSH EDI
// 00555ea0: MOV dword ptr [ESI + EBX*0x1 + 0x2054],EAX
// 00555ea7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x4c] (READ)
// 00555eab: PUSH ESI
// 00555eac: PUSH EBX
// 00555ead: CALL shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
//   XREF to: 00554e70 (UNCONDITIONAL_CALL)
// 00555eb2: ADD ESP,0xc
// 00555eb5: JMP 0x00555a55
//   XREF to: 00555a55 (UNCONDITIONAL_JUMP)
// 00555eba: MOV EAX,dword ptr [ECX + 0x2050]
//   Label: LAB_00555eba
// 00555ec0: MOV ESI,dword ptr [ECX + 0x2054]
// 00555ec6: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00555eca: LEA EDX,[EAX + ESI*0x1]
// 00555ecd: MOV EAX,dword ptr [ECX + 0x2034]
// 00555ed3: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00555ed7: SAR EAX,0x10
// 00555eda: DEC EDX
// 00555edb: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00555edf: CMP EDX,EDI
// 00555ee1: JLE 0x00555f66
//   XREF to: 00555f66 (CONDITIONAL_JUMP)
// 00555ee7: LEA EAX,[EDI*0x4 + 0x0]
// 00555eee: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00555ef2: MOV EDI,dword ptr [ESP + 0x24]
//   Label: LAB_00555ef2
//   XREF to: Stack[-0x3c] (READ)
// 00555ef6: MOV EAX,dword ptr [EBX + 0x4]
// 00555ef9: ADD EAX,EDI
// 00555efb: MOV AL,byte ptr [EAX + 0x3]
// 00555efe: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 00555f02: AND EAX,0xff
// 00555f07: CMP EAX,ECX
// 00555f09: JLE 0x00555f4e
//   XREF to: 00555f4e (CONDITIONAL_JUMP)
// 00555f0b: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00555f0f: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 00555f13: LEA EAX,[EDX*0x4 + 0x0]
// 00555f1a: SHL ESI,0x2
// 00555f1d: CMP ESI,EAX
//   Label: LAB_00555f1d
// 00555f1f: JGE 0x00555f38
//   XREF to: 00555f38 (CONDITIONAL_JUMP)
// 00555f21: MOV ECX,dword ptr [EBX + 0x4]
// 00555f24: MOV CL,byte ptr [ECX + EAX*0x1 + 0x3]
// 00555f28: AND ECX,0xff
// 00555f2e: CMP ECX,EDI
// 00555f30: JLE 0x00555f38
//   XREF to: 00555f38 (CONDITIONAL_JUMP)
// 00555f32: DEC EDX
// 00555f33: SUB EAX,0x4
// 00555f36: JMP 0x00555f1d
//   XREF to: 00555f1d (UNCONDITIONAL_JUMP)
// 00555f38: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00555f38
//   XREF to: Stack[-0x3c] (READ)
// 00555f3c: MOV ESI,dword ptr [EBX + 0x4]
// 00555f3f: ADD EAX,ESI
// 00555f41: MOV ESI,dword ptr [ESI + EDX*0x4]
// 00555f44: MOV EDI,dword ptr [EAX]
// 00555f46: MOV dword ptr [EAX],ESI
// 00555f48: MOV EAX,dword ptr [EBX + 0x4]
// 00555f4b: MOV dword ptr [EAX + EDX*0x4],EDI
// 00555f4e: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_00555f4e
//   XREF to: Stack[-0x3c] (READ)
// 00555f52: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00555f56: ADD ESI,0x4
// 00555f59: INC EDI
// 00555f5a: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 00555f5e: MOV dword ptr [ESP + 0x38],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00555f62: CMP EDX,EDI
// 00555f64: JG 0x00555ef2
//   XREF to: 00555ef2 (CONDITIONAL_JUMP)
// 00555f66: IMUL ESI,dword ptr [ESP + 0x14],0x28
//   Label: LAB_00555f66
//   XREF to: Stack[-0x4c] (READ)
// 00555f6b: MOV EAX,EDX
// 00555f6d: SUB EAX,dword ptr [ESI + EBX*0x1 + 0x2050]
// 00555f74: IMUL ECX,dword ptr [ESP + 0x18],0x28
//   XREF to: Stack[-0x48] (READ)
// 00555f79: MOV EDI,dword ptr [ESI + EBX*0x1 + 0x2054]
// 00555f80: MOV dword ptr [ECX + EBX*0x1 + 0x2050],EDX
// 00555f87: MOV EDX,dword ptr [ESI + EBX*0x1 + 0x2054]
// 00555f8e: SUB EDX,EAX
// 00555f90: MOV dword ptr [ECX + EBX*0x1 + 0x2054],EDX
// 00555f97: MOV dword ptr [ESI + EBX*0x1 + 0x2054],EAX
// 00555f9e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00555fa2: PUSH EAX
// 00555fa3: PUSH EBX
// 00555fa4: CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   XREF to: 00555090 (UNCONDITIONAL_CALL)
// 00555fa9: ADD ESP,0x8
// 00555fac: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00555fb0: PUSH EDX
// 00555fb1: PUSH EBX
// 00555fb2: CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   XREF to: 00555090 (UNCONDITIONAL_CALL)
// 00555fb7: ADD ESP,0x8
// 00555fba: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00555fbe: PUSH ECX
// 00555fbf: MOV dword ptr [ESI + EBX*0x1 + 0x2054],EDI
// 00555fc6: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x4c] (READ)
// 00555fca: PUSH ESI
// 00555fcb: PUSH EBX
// 00555fcc: CALL shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
//   XREF to: 00554e70 (UNCONDITIONAL_CALL)
// 00555fd1: ADD ESP,0xc
// 00555fd4: JMP 0x00555a55
//   XREF to: 00555a55 (UNCONDITIONAL_JUMP)
// 00555fd9: MOV EAX,0x1
//   Label: LAB_00555fd9
// 00555fde: MOV ESP,EBP
// 00555fe0: POP EBP
// 00555fe1: POP EDI
// 00555fe2: POP ESI
// 00555fe3: POP EBX
// 00555fe4: RET
