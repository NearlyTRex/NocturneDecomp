// Name: sound_mp3.cpp_requantizeLayer3Samples_FUN_0052fee0
// Address: 0052fee0
// Address Range: [[0052fee0, 005301ac]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_requantizeLayer3Samples_FUN_0052fee0(int * scalefactor_indices, uint * quantized_samples, float * dequantized_output, SMpegFrame * frame_info)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 (00534d40) at 00535452 [UNCONDITIONAL_CALL]
// Globals:
//   double[17] g_MpegRequantizationScaleTable
//   double[17] g_MpegRequantizationOffsetTable

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_requantizeLayer3Samples_FUN_0052fee0
          (int *scalefactor_indices,uint *quantized_samples,float *dequantized_output,
          SMpegFrame *frame_info)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SBitAllocationTable *local_58;
  int local_54;
  int local_40;
  undefined4 *local_34;
  uint *local_30;
  uint *local_2c;
  int *local_28;
  undefined4 *local_24;
  int *local_20;
  int local_1c;
  float *local_18;
  
  iVar1 = frame_info->samples_per_granule;
  iVar6 = frame_info->sblimit;
  local_58 = frame_info->allocation_table;
  if (0 < iVar6) {
    local_54 = 0;
    do {
      local_40 = 0;
      do {
        local_1c = 0;
        if (0 < iVar1) {
          local_34 = (undefined4 *)(local_54 + local_40 + (int)dequantized_output);
          local_24 = (undefined4 *)((int)dequantized_output + local_40 + local_54);
          local_2c = (uint *)(local_40 + local_54 + (int)scalefactor_indices);
          local_30 = (uint *)(local_54 + local_40 + (int)scalefactor_indices);
          local_18 = (float *)(local_54 + local_40 + (int)dequantized_output);
          local_28 = (int *)(local_54 + (int)quantized_samples);
          local_20 = (int *)(local_54 + (int)quantized_samples);
          do {
            if (*local_28 == 0) {
              *local_34 = 0;
            }
            else {
              for (bVar2 = 0;
                  (uint)(1 << (bVar2 & 0x1f)) <
                  (uint)(&local_58->table_version)
                        [*(int *)((int)quantized_samples + local_54 + local_1c * 0x80) * 4];
                  bVar2 = bVar2 + 1) {
              }
              if ((*local_2c >> (bVar2 - 1 & 0x1f) & 1) == 1) {
                *local_24 = 0;
              }
              else {
                *local_24 = 0xbf800000;
              }
              iVar4 = 1 << (bVar2 - 1 & 0x1f);
              *local_18 = (float)(iVar4 - 1U & *local_30) / (float)iVar4 + *local_18;
              *local_18 = *local_18 +
                          (float)g_MpegRequantizationOffsetTable
                                 [(&local_58->table_index)[*local_20 * 4]];
              *local_18 = *local_18 *
                          (float)g_MpegRequantizationScaleTable
                                 [(&local_58->table_index)[*local_20 * 4]];
            }
            local_28 = local_28 + 0x20;
            local_34 = local_34 + 0x60;
            local_24 = local_24 + 0x60;
            local_2c = local_2c + 0x60;
            local_20 = local_20 + 0x20;
            local_30 = local_30 + 0x60;
            local_18 = local_18 + 0x60;
            local_1c = local_1c + 1;
          } while (local_1c < iVar1);
        }
        local_40 = local_40 + 0x80;
      } while (local_40 != 0x180);
      local_54 = local_54 + 4;
      local_58 = (SBitAllocationTable *)&local_58[9].num_lines;
    } while (local_54 < iVar6 * 4);
  }
  if (iVar6 < 0x20) {
    iVar6 = iVar6 * 4;
    do {
      iVar4 = 0;
      do {
        iVar5 = 0;
        if (0 < iVar1) {
          puVar3 = (undefined4 *)(iVar6 + iVar4 + (int)dequantized_output);
          do {
            iVar5 = iVar5 + 1;
            *puVar3 = 0;
            puVar3 = puVar3 + 0x60;
          } while (iVar5 < iVar1);
        }
        iVar4 = iVar4 + 0x80;
      } while (iVar4 != 0x180);
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x80);
  }
  return;
}


// Assembly code:
// 0052fee0: PUSH EBX
//   Label: sound_mp3.cpp_requantizeLayer3Samples_FUN_0052fee0
// 0052fee1: PUSH ESI
// 0052fee2: PUSH EDI
// 0052fee3: PUSH EBP
// 0052fee4: SUB ESP,0x58
// 0052fee7: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x10] (READ)
// 0052feeb: MOV EDX,dword ptr [EAX + 0x10]
// 0052feee: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0052fef2: MOV EDX,dword ptr [EAX + 0x18]
// 0052fef5: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x60] (WRITE)
// 0052fef9: MOV EAX,dword ptr [EAX + 0x8]
// 0052fefc: TEST EDX,EDX
// 0052fefe: JLE 0x00530008
//   XREF to: 00530008 (CONDITIONAL_JUMP)
// 0052ff04: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0052ff08: XOR EBP,EBP
// 0052ff0a: LEA EAX,[EDX*0x4 + 0x0]
// 0052ff11: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x54] (WRITE)
// 0052ff15: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0052ff19: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0052ff19
//   XREF to: Stack[-0x54] (READ)
// 0052ff1d: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0052ff21: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 0052ff25: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 0052ff29: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0052ff2d: MOV EDI,EAX
// 0052ff2f: MOV EAX,ESI
// 0052ff31: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 0052ff35: XOR EAX,ESI
// 0052ff37: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 0052ff3b: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0052ff3f: LEA EAX,[ESI + EDX*0x1]
// 0052ff42: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0052ff46: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0052ff4a: XOR EBP,EBP
//   Label: LAB_0052ff4a
// 0052ff4c: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 0052ff50: MOV dword ptr [ESP + 0x4c],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 0052ff54: TEST EAX,EAX
// 0052ff56: JLE 0x00530064
//   XREF to: 00530064 (CONDITIONAL_JUMP)
// 0052ff5c: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 0052ff60: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 0052ff64: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0052ff68: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 0052ff6c: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 0052ff70: ADD EAX,ECX
// 0052ff72: ADD EAX,EBX
// 0052ff74: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0052ff78: LEA EAX,[ECX + ESI*0x1]
// 0052ff7b: MOV EBP,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 0052ff7f: LEA EDX,[EBX + EAX*0x1]
// 0052ff82: ADD EAX,EBP
// 0052ff84: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0052ff88: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 0052ff8c: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052ff90: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 0052ff94: ADD EAX,ECX
// 0052ff96: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0052ff9a: LEA EDX,[EAX + EBP*0x1]
// 0052ff9d: ADD EAX,EBX
// 0052ff9f: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0052ffa3: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052ffa7: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_0052ffa7
//   XREF to: Stack[-0x1c] (READ)
// 0052ffab: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 0052ffaf: SHL EAX,0x7
// 0052ffb2: ADD EBX,EAX
// 0052ffb4: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 0052ffb8: MOV EBP,dword ptr [EAX]
// 0052ffba: TEST EBP,EBP
// 0052ffbc: JZ 0x0053012c
//   XREF to: 0053012c (CONDITIONAL_JUMP)
// 0052ffc2: XOR EAX,EAX
// 0052ffc4: LEA EDX,[EBX + ESI*0x1]
//   Label: LAB_0052ffc4
// 0052ffc7: MOV EBP,0x1
// 0052ffcc: MOV CL,AL
// 0052ffce: MOV EDX,dword ptr [EDX]
// 0052ffd0: SHL EBP,CL
// 0052ffd2: SHL EDX,0x4
// 0052ffd5: MOV ECX,EBP
// 0052ffd7: CMP ECX,dword ptr [EDX + EDI*0x1]
// 0052ffda: JNC 0x00530081
//   XREF to: 00530081 (CONDITIONAL_JUMP)
// 0052ffe0: INC EAX
// 0052ffe1: JMP 0x0052ffc4
//   XREF to: 0052ffc4 (UNCONDITIONAL_JUMP)
// 0052ffe3: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_0052ffe3
//   XREF to: Stack[-0x54] (READ)
// 0052ffe7: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 0052ffeb: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x5c] (READ)
// 0052ffef: ADD ECX,0x4
// 0052fff2: ADD EBX,0x100
// 0052fff8: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 0052fffc: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x58] (WRITE)
// 00530000: CMP ECX,ESI
// 00530002: JL 0x0052ff19
//   XREF to: 0052ff19 (CONDITIONAL_JUMP)
// 00530008: MOV EDI,dword ptr [ESP + 0x8]
//   Label: LAB_00530008
//   XREF to: Stack[-0x60] (READ)
// 0053000c: CMP EDI,0x20
// 0053000f: JGE 0x0053005c
//   XREF to: 0053005c (CONDITIONAL_JUMP)
// 00530011: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 00530015: LEA ESI,[EDI*0x4 + 0x0]
// 0053001c: MOV EBX,ESI
//   Label: LAB_0053001c
// 0053001e: XOR ECX,ECX
// 00530020: MOV EDI,dword ptr [ESP + 0x30]
//   Label: LAB_00530020
//   XREF to: Stack[-0x38] (READ)
// 00530024: XOR EDX,EDX
// 00530026: TEST EDI,EDI
// 00530028: JLE 0x00530043
//   XREF to: 00530043 (CONDITIONAL_JUMP)
// 0053002a: MOV EDI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 0053002e: LEA EAX,[EBX + ECX*0x1]
// 00530031: ADD EAX,EDI
// 00530033: INC EDX
//   Label: LAB_00530033
// 00530034: MOV dword ptr [EAX],0x0
// 0053003a: ADD EAX,0x180
// 0053003f: CMP EDX,EBP
// 00530041: JL 0x00530033
//   XREF to: 00530033 (CONDITIONAL_JUMP)
// 00530043: ADD ECX,0x80
//   Label: LAB_00530043
// 00530049: CMP ECX,0x180
// 0053004f: JNZ 0x00530020
//   XREF to: 00530020 (CONDITIONAL_JUMP)
// 00530051: ADD ESI,0x4
// 00530054: CMP ESI,0x80
// 0053005a: JL 0x0053001c
//   XREF to: 0053001c (CONDITIONAL_JUMP)
// 0053005c: ADD ESP,0x58
//   Label: LAB_0053005c
// 0053005f: POP EBP
// 00530060: POP EDI
// 00530061: POP ESI
// 00530062: POP EBX
// 00530063: RET
// 00530064: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00530064
//   XREF to: Stack[-0x40] (READ)
// 00530068: ADD EAX,0x80
// 0053006d: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00530071: CMP EAX,0x180
// 00530076: JZ 0x0052ffe3
//   XREF to: 0052ffe3 (CONDITIONAL_JUMP)
// 0053007c: JMP 0x0052ff4a
//   XREF to: 0052ff4a (UNCONDITIONAL_JUMP)
// 00530081: MOV EDX,dword ptr [ESP + 0x3c]
//   Label: LAB_00530081
//   XREF to: Stack[-0x2c] (READ)
// 00530085: LEA ECX,[EAX + -0x1]
// 00530088: MOV EDX,dword ptr [EDX]
// 0053008a: SHR EDX,CL
// 0053008c: AND EDX,0x1
// 0053008f: CMP EDX,0x1
// 00530092: JNZ 0x0053011d
//   XREF to: 0053011d (CONDITIONAL_JUMP)
// 00530098: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 0053009c: MOV dword ptr [EDX],0x0
// 005300a2: DEC EAX
//   Label: LAB_005300a2
// 005300a3: MOV CL,AL
// 005300a5: MOV EAX,0x1
// 005300aa: SHL EAX,CL
// 005300ac: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 005300b0: LEA EDX,[EAX + -0x1]
// 005300b3: MOV EBX,dword ptr [ECX]
// 005300b5: XOR EBP,EBP
// 005300b7: AND EDX,EBX
// 005300b9: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x64] (WRITE)
// 005300bd: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x68] (DATA)
// 005300c0: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005300c4: FILD qword ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 005300c7: FILD dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 005300cb: FDIVP
// 005300cd: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 005300d1: FADD float ptr [EAX]
// 005300d3: FSTP float ptr [EAX]
// 005300d5: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 005300d9: MOV EAX,dword ptr [EAX]
// 005300db: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 005300df: SHL EAX,0x4
// 005300e2: ADD EAX,EDX
// 005300e4: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 005300e8: MOV EAX,dword ptr [EAX + 0xc]
// 005300eb: FLD float ptr [EDX]
// 005300ed: FLD ST0
// 005300ef: FADD double ptr [EAX*0x8 + 0x67d8e8]
//   XREF to: 0067d8e8 (DATA)
// 005300f6: FSTP ST1
// 005300f8: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 005300fc: FSTP float ptr [EDX]
// 005300fe: MOV EAX,dword ptr [EAX]
// 00530100: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00530104: SHL EAX,0x4
// 00530107: ADD EAX,ECX
// 00530109: FLD float ptr [EDX]
// 0053010b: MOV EAX,dword ptr [EAX + 0xc]
// 0053010e: FLD ST0
// 00530110: FMUL double ptr [EAX*0x8 + 0x67d860]
//   XREF to: 0067d860 (DATA)
// 00530117: FSTP ST1
// 00530119: FSTP float ptr [EDX]
// 0053011b: JMP 0x00530132
//   XREF to: 00530132 (UNCONDITIONAL_JUMP)
// 0053011d: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_0053011d
//   XREF to: Stack[-0x24] (READ)
// 00530121: MOV dword ptr [EDX],0xbf800000
// 00530127: JMP 0x005300a2
//   XREF to: 005300a2 (UNCONDITIONAL_JUMP)
// 0053012c: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_0053012c
//   XREF to: Stack[-0x34] (READ)
// 00530130: MOV dword ptr [EAX],EBP
// 00530132: MOV EDX,dword ptr [ESP + 0x40]
//   Label: LAB_00530132
//   XREF to: Stack[-0x28] (READ)
// 00530136: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 0053013a: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 0053013e: MOV EBP,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (READ)
// 00530142: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 00530146: ADD EDX,0x80
// 0053014c: ADD ECX,0x180
// 00530152: ADD EBX,0x180
// 00530158: ADD EBP,0x180
// 0053015e: ADD EAX,0x80
// 00530163: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00530167: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 0053016b: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0053016f: MOV dword ptr [ESP + 0x3c],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 00530173: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00530177: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 0053017b: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 0053017f: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 00530183: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 00530187: ADD EDX,0x180
// 0053018d: ADD ECX,0x180
// 00530193: INC EBX
// 00530194: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00530198: MOV dword ptr [ESP + 0x50],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0053019c: MOV dword ptr [ESP + 0x4c],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005301a0: CMP EBX,EBP
// 005301a2: JGE 0x00530064
//   XREF to: 00530064 (CONDITIONAL_JUMP)
// 005301a8: JMP 0x0052ffa7
//   XREF to: 0052ffa7 (UNCONDITIONAL_JUMP)
