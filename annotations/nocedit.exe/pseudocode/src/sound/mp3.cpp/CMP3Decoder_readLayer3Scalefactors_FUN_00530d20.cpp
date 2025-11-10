// Name: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
// Address: 00530d20
// Address Range: [[00530d20, 005310ea]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3Granule * granule_info, int channel, int granule_index, SMpegFrame * frame)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 (00534d40) at 00535823 [UNCONDITIONAL_CALL]
// Globals:
//   int[5] g_Layer3LongBandBoundaries
//   undefined4 DAT_0067e62c
//   undefined4 DAT_0067e630
//   int[3] g_Layer3ShortBandBoundaries
//   undefined4 DAT_0067e640
//   undefined4 DAT_0067e644
//   int[16] g_Layer3ScalefacLengths1
//   int[16] g_Layer3ScalefacLengths2
// Function calls:
//   sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
          (CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info,int channel,
          int granule_index,SMpegFrame *frame)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar8;
  int local_60;
  int local_54;
  SMpegLayer3Granule *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_20;
  int local_18;
  int *piVar7;
  
  if ((granule_info[granule_index].table_select[channel * 0x12 + -3] != 0) &&
     (granule_info[granule_index].table_select[channel * 0x12 + -2] == 2)) {
    puVar8 = (uint *)(scalefactor_dest + granule_index * 0x3e);
    if (granule_info[granule_index].table_select[channel * 0x12 + -1] == 0) {
      local_48 = 0;
      local_34 = 0;
      do {
        iVar2 = *(int *)((int)g_Layer3ShortBandBoundaries + local_34);
        local_18 = local_48;
        local_20 = iVar2 * 4;
        if (iVar2 < *(int *)((int)g_Layer3ShortBandBoundaries + local_34 + 4)) {
          do {
            puVar5 = (uint *)(local_20 + (int)puVar8);
            do {
              puVar3 = puVar5 + 0xd;
              uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                                (this_ptr,*(uint *)((int)g_Layer3ScalefacLengths1 +
                                                   granule_info[granule_index].table_select
                                                   [channel * 0x12 + -4] * 4 + local_18));
              puVar5[0x17] = uVar1;
              puVar5 = puVar3;
            } while (puVar3 != puVar8 + iVar2 + 0x27);
            local_20 = local_20 + 4;
            local_18 = local_18 + 1;
          } while (local_18 < (int)puVar8[0x19f990]);
        }
        local_48 = local_48 + 0x40;
        local_34 = local_34 + 4;
      } while (local_48 != 0x80);
      piVar6 = scalefactor_dest + granule_index * 0x3e + 0xc;
      do {
        piVar7 = piVar6 + 0xd;
        piVar6[0x17] = 0;
        piVar6 = piVar7;
      } while (piVar7 != scalefactor_dest + granule_index * 0x3e + 0x33);
      return;
    }
    puVar5 = puVar8;
    do {
      puVar3 = puVar5 + 1;
      uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                        (this_ptr,g_Layer3ScalefacLengths1
                                  [granule_info[granule_index].table_select[channel * 0x12 + -4]]);
      *puVar5 = uVar1;
      puVar5 = puVar3;
    } while (puVar3 != puVar8 + 8);
    local_38 = 3;
    do {
      iVar2 = (int)granule_info + local_3c * 4 + (int)frame * 0xf8;
      do {
        iVar4 = iVar2 + 0x34;
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                          (this_ptr,g_Layer3ScalefacLengths1
                                    [granule_info[granule_index].table_select[channel * 0x12 + -4]])
        ;
        *(uint *)(iVar2 + 0x5c) = uVar1;
        iVar2 = iVar4;
      } while (iVar4 != local_60 + local_54);
      local_38 = local_38 + 1;
    } while (local_38 < 6);
    local_3c = 6;
    do {
      iVar2 = (int)granule_info + local_40 * 4 + (int)frame * 0xf8;
      do {
        iVar4 = iVar2 + 0x34;
        uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                          (this_ptr,g_Layer3ScalefacLengths2
                                    [granule_info[granule_index].table_select[channel * 0x12 + -4]])
        ;
        *(uint *)(iVar2 + 0x5c) = uVar1;
        iVar2 = iVar4;
      } while (iVar4 != (int)granule_info + local_4c + (int)frame * 0xf8);
      local_3c = local_3c + 1;
    } while (local_3c < 0xc);
    iVar2 = (int)granule_info + (int)frame * 0xf8 + 0x30;
    do {
      iVar4 = iVar2 + 0x34;
      *(undefined4 *)(iVar2 + 0x5c) = 0;
      iVar2 = iVar4;
    } while (iVar4 != (int)granule_info + (int)frame * 0xf8 + 0xcc);
    return;
  }
  local_38 = 0;
  local_50 = granule_info + granule_index;
  local_44 = 0;
  do {
    if ((*(int *)local_50->field2_0x8 == 0) || (channel == 0)) {
      iVar2 = *(int *)((int)g_Layer3LongBandBoundaries + local_38);
      puVar8 = (uint *)(scalefactor_dest + granule_index * 0x3e + iVar2);
      if (iVar2 < *(int *)((int)g_Layer3LongBandBoundaries + local_38 + 4)) {
        do {
          uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170
                            (this_ptr,g_Layer3ScalefacLengths1
                                      [(uint)(1 < local_44) * 0x10 +
                                       granule_info[granule_index].table_select[channel * 0x12 + -4]
                                      ]);
          *puVar8 = uVar1;
          iVar2 = iVar2 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar2 < *(int *)((int)g_Layer3LongBandBoundaries + local_2c + 4));
      }
    }
    local_38 = local_38 + 4;
    local_44 = local_44 + 1;
    local_50 = (SMpegLayer3Granule *)&local_50->field1_0x4;
  } while (local_44 < 4);
  scalefactor_dest[granule_index * 0x3e + 0x16] = 0;
  return;
}


// Assembly code:
// 00530d20: PUSH EBX
//   Label: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20
// 00530d21: PUSH ESI
// 00530d22: PUSH EDI
// 00530d23: PUSH EBP
// 00530d24: SUB ESP,0x58
// 00530d27: MOV EDI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00530d2b: MOV EBP,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 00530d2f: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x14] (READ)
// 00530d33: LEA EAX,[EDX*0x4 + 0x0]
// 00530d3a: ADD EAX,EDX
// 00530d3c: LEA EBX,[EBP + 0x8]
// 00530d3f: SHL EAX,0x5
// 00530d42: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x10] (READ)
// 00530d46: ADD EBX,EAX
// 00530d48: LEA EAX,[EDX*0x8 + 0x0]
// 00530d4f: ADD EAX,EDX
// 00530d51: ADD EBX,0x10
// 00530d54: SHL EAX,0x3
// 00530d57: LEA ESI,[EBX + EAX*0x1]
// 00530d5a: CMP dword ptr [ESI + 0x10],0x0
// 00530d5e: JZ 0x00530d6a
//   XREF to: 00530d6a (CONDITIONAL_JUMP)
// 00530d60: CMP dword ptr [ESI + 0x14],0x2
// 00530d64: JZ 0x00530e62
//   XREF to: 00530e62 (CONDITIONAL_JUMP)
// 00530d6a: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_00530d6a
//   XREF to: Stack[0x14] (READ)
// 00530d6e: SHL EAX,0x3
// 00530d71: MOV EDX,EAX
// 00530d73: SHL EAX,0x5
// 00530d76: SUB EAX,EDX
// 00530d78: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00530d7c: ADD EDX,EAX
// 00530d7e: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x64] (WRITE)
// 00530d82: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x14] (READ)
// 00530d86: LEA EAX,[EDX*0x4 + 0x0]
// 00530d8d: ADD EAX,EDX
// 00530d8f: XOR EBX,EBX
// 00530d91: SHL EAX,0x5
// 00530d94: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 00530d98: ADD EAX,EBP
// 00530d9a: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x44] (WRITE)
// 00530d9e: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00530da2: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00530da2
//   XREF to: Stack[-0x50] (READ)
// 00530da6: CMP dword ptr [EAX + 0x8],0x0
// 00530daa: JNZ 0x005310db
//   XREF to: 005310db (CONDITIONAL_JUMP)
// 00530db0: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_00530db0
//   XREF to: Stack[-0x38] (READ)
// 00530db4: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 00530db8: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00530dbc: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (READ)
// 00530dc0: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00530dc4: MOV EBX,dword ptr [EBX + 0x67e628]
//   XREF to: 0067e628 (DATA)
//   XREF to: 0067e62c (DATA)
// 00530dca: CMP EDX,0x2
// 00530dcd: SETGE byte ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (WRITE)
// 00530dd2: LEA EBP,[EBX*0x4 + 0x0]
// 00530dd9: MOV EDX,dword ptr [EAX + 0x67e62c]
//   XREF to: 0067e62c (DATA)
//   XREF to: 0067e630 (DATA)
// 00530ddf: ADD EBP,ECX
// 00530de1: CMP EBX,EDX
// 00530de3: JGE 0x00530e19
//   XREF to: 00530e19 (CONDITIONAL_JUMP)
// 00530de5: XOR EAX,EAX
//   Label: LAB_00530de5
// 00530de7: MOV AL,byte ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 00530deb: MOV EDX,EAX
// 00530ded: SHL EDX,0x6
// 00530df0: MOV EAX,dword ptr [ESI + 0xc]
// 00530df3: MOV ECX,dword ptr [EDX + EAX*0x4 + 0x67e648]
//   XREF to: 0067e648 (DATA)
// 00530dfa: PUSH ECX
// 00530dfb: PUSH EDI
// 00530dfc: CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 00530e01: ADD ESP,0x8
// 00530e04: MOV dword ptr [EBP],EAX
// 00530e07: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 00530e0b: INC EBX
// 00530e0c: MOV EDX,dword ptr [EAX + 0x67e62c]
//   XREF to: 0067e62c (DATA)
// 00530e12: ADD EBP,0x4
// 00530e15: CMP EBX,EDX
// 00530e17: JL 0x00530de5
//   XREF to: 00530de5 (CONDITIONAL_JUMP)
// 00530e19: MOV EBX,dword ptr [ESP + 0x30]
//   Label: LAB_00530e19
//   XREF to: Stack[-0x38] (READ)
// 00530e1d: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00530e21: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 00530e25: ADD EBX,0x4
// 00530e28: INC EBP
// 00530e29: ADD ECX,0x4
// 00530e2c: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 00530e30: MOV dword ptr [ESP + 0x24],EBP
//   XREF to: Stack[-0x44] (WRITE)
// 00530e34: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 00530e38: CMP EBP,0x4
// 00530e3b: JL 0x00530da2
//   XREF to: 00530da2 (CONDITIONAL_JUMP)
// 00530e41: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x14] (READ)
// 00530e45: SHL EAX,0x3
// 00530e48: MOV EDX,EAX
// 00530e4a: SHL EAX,0x5
// 00530e4d: SUB EAX,EDX
// 00530e4f: ADD EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00530e53: MOV dword ptr [EAX + 0x58],0x0
// 00530e5a: ADD ESP,0x58
// 00530e5d: POP EBP
// 00530e5e: POP EDI
// 00530e5f: POP ESI
// 00530e60: POP EBX
// 00530e61: RET
// 00530e62: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_00530e62
//   XREF to: Stack[0x14] (READ)
// 00530e66: SHL EAX,0x3
// 00530e69: MOV EDX,EAX
// 00530e6b: SHL EAX,0x5
// 00530e6e: MOV EBP,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00530e72: SUB EAX,EDX
// 00530e74: ADD EBP,EAX
// 00530e76: MOV EAX,dword ptr [ESI + 0x18]
// 00530e79: TEST EAX,EAX
// 00530e7b: JZ 0x00530fd0
//   XREF to: 00530fd0 (CONDITIONAL_JUMP)
// 00530e81: MOV EBX,EBP
// 00530e83: ADD EBP,0x20
// 00530e86: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_00530e86
// 00530e89: MOV EDX,dword ptr [EAX*0x4 + 0x67e648]
//   XREF to: 0067e648 (DATA)
// 00530e90: PUSH EDX
// 00530e91: PUSH EDI
// 00530e92: ADD EBX,0x4
// 00530e95: CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 00530e9a: ADD ESP,0x8
// 00530e9d: MOV dword ptr [EBX + -0x4],EAX
// 00530ea0: CMP EBX,EBP
// 00530ea2: JNZ 0x00530e86
//   XREF to: 00530e86 (CONDITIONAL_JUMP)
// 00530ea4: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x14] (READ)
// 00530ea8: SHL EAX,0x3
// 00530eab: MOV EBX,0xa8
// 00530eb0: MOV EDX,EAX
// 00530eb2: SHL EAX,0x5
// 00530eb5: MOV ECX,0x3
// 00530eba: SUB EAX,EDX
// 00530ebc: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00530ec0: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x54] (WRITE)
// 00530ec4: ADD EDX,EAX
// 00530ec6: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 00530eca: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 00530ece: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x60] (WRITE)
// 00530ed2: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00530ed2
//   XREF to: Stack[-0x3c] (READ)
// 00530ed6: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x5c] (READ)
// 00530eda: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 00530ede: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 00530ee2: SHL EAX,0x2
// 00530ee5: ADD EBP,ECX
// 00530ee7: ADD EBX,EAX
// 00530ee9: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_00530ee9
// 00530eec: MOV EDX,dword ptr [EAX*0x4 + 0x67e648]
//   XREF to: 0067e648 (DATA)
// 00530ef3: PUSH EDX
// 00530ef4: PUSH EDI
// 00530ef5: ADD EBX,0x34
// 00530ef8: CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 00530efd: ADD ESP,0x8
// 00530f00: MOV dword ptr [EBX + 0x28],EAX
// 00530f03: CMP EBX,EBP
// 00530f05: JNZ 0x00530ee9
//   XREF to: 00530ee9 (CONDITIONAL_JUMP)
// 00530f07: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00530f0b: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 00530f0f: INC EBX
// 00530f10: ADD ECX,0x4
// 00530f13: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 00530f17: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 00530f1b: CMP EBX,0x6
// 00530f1e: JL 0x00530ed2
//   XREF to: 00530ed2 (CONDITIONAL_JUMP)
// 00530f20: MOV dword ptr [ESP + 0x28],0x6
//   XREF to: Stack[-0x40] (WRITE)
// 00530f28: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x14] (READ)
// 00530f2c: SHL EAX,0x3
// 00530f2f: MOV EDX,EAX
// 00530f31: SHL EAX,0x5
// 00530f34: SUB EAX,EDX
// 00530f36: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00530f3a: ADD EDX,EAX
// 00530f3c: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 00530f40: MOV EDX,0xb4
// 00530f45: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 00530f49: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 00530f4d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x68] (DATA)
// 00530f50: MOV EBX,dword ptr [ESP + 0x28]
//   Label: LAB_00530f50
//   XREF to: Stack[-0x40] (READ)
// 00530f54: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 00530f58: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00530f5b: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 00530f5f: SHL EBX,0x2
// 00530f62: ADD EBP,EAX
// 00530f64: ADD EBX,ECX
// 00530f66: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_00530f66
// 00530f69: MOV EDX,dword ptr [EAX*0x4 + 0x67e688]
//   XREF to: 0067e688 (DATA)
// 00530f70: PUSH EDX
// 00530f71: PUSH EDI
// 00530f72: ADD EBX,0x34
// 00530f75: CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 00530f7a: ADD ESP,0x8
// 00530f7d: MOV dword ptr [EBX + 0x28],EAX
// 00530f80: CMP EBX,EBP
// 00530f82: JNZ 0x00530f66
//   XREF to: 00530f66 (CONDITIONAL_JUMP)
// 00530f84: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 00530f88: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 00530f8c: INC EBX
// 00530f8d: ADD ECX,0x4
// 00530f90: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 00530f94: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 00530f98: CMP EBX,0xc
// 00530f9b: JL 0x00530f50
//   XREF to: 00530f50 (CONDITIONAL_JUMP)
// 00530f9d: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x14] (READ)
// 00530fa1: SHL EAX,0x3
// 00530fa4: MOV EDX,EAX
// 00530fa6: SHL EAX,0x5
// 00530fa9: SUB EAX,EDX
// 00530fab: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00530faf: ADD EDX,EAX
// 00530fb1: LEA EAX,[EDX + 0x30]
// 00530fb4: ADD EDX,0xcc
// 00530fba: ADD EAX,0x34
//   Label: LAB_00530fba
// 00530fbd: MOV dword ptr [EAX + 0x28],0x0
// 00530fc4: CMP EAX,EDX
// 00530fc6: JNZ 0x00530fba
//   XREF to: 00530fba (CONDITIONAL_JUMP)
// 00530fc8: ADD ESP,0x58
// 00530fcb: POP EBP
// 00530fcc: POP EDI
// 00530fcd: POP ESI
// 00530fce: POP EBX
// 00530fcf: RET
// 00530fd0: MOV dword ptr [ESP + 0x34],EAX
//   Label: LAB_00530fd0
//   XREF to: Stack[-0x34] (WRITE)
// 00530fd4: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00530fd8: MOV dword ptr [ESP + 0x40],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 00530fdc: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_00530fdc
//   XREF to: Stack[-0x34] (READ)
// 00530fe0: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 00530fe4: MOV EAX,dword ptr [EAX + 0x67e63c]
//   XREF to: 0067e63c (DATA)
//   XREF to: 0067e640 (DATA)
// 00530fea: MOV ECX,dword ptr [EBP + 0x67e640]
//   XREF to: 0067e640 (DATA)
//   XREF to: 0067e644 (DATA)
// 00530ff0: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00530ff4: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 00530ff8: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 00530ffc: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 00531000: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00531004: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 00531008: SHL EBX,0x2
// 0053100b: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0053100f: LEA EAX,[EBX + 0x9c]
// 00531015: CMP EDX,ECX
// 00531017: JGE 0x00531086
//   XREF to: 00531086 (CONDITIONAL_JUMP)
// 00531019: ADD EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 0053101d: MOV dword ptr [ESP + 0x48],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00531021: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00531025: MOV EBX,dword ptr [ESP + 0x48]
//   Label: LAB_00531025
//   XREF to: Stack[-0x20] (READ)
// 00531029: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 0053102d: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 00531031: ADD EBX,ECX
// 00531033: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_00531033
// 00531036: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 0053103a: SHL EAX,0x2
// 0053103d: ADD EAX,EDX
// 0053103f: MOV ECX,dword ptr [EAX + 0x67e648]
//   XREF to: 0067e648 (DATA)
// 00531045: PUSH ECX
// 00531046: PUSH EDI
// 00531047: ADD EBX,0x34
// 0053104a: CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 0053104f: ADD ESP,0x8
// 00531052: MOV dword ptr [EBX + 0x28],EAX
// 00531055: CMP EBX,EBP
// 00531057: JNZ 0x00531033
//   XREF to: 00531033 (CONDITIONAL_JUMP)
// 00531059: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 0053105d: MOV EBP,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 00531061: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 00531065: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (READ)
// 00531069: ADD EBX,0x4
// 0053106c: ADD EBP,0x4
// 0053106f: INC EAX
// 00531070: MOV ECX,dword ptr [EDX + 0x67e640]
//   XREF to: 0067e640 (DATA)
// 00531076: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0053107a: MOV dword ptr [ESP + 0x48],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 0053107e: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00531082: CMP EAX,ECX
// 00531084: JL 0x00531025
//   XREF to: 00531025 (CONDITIONAL_JUMP)
// 00531086: MOV EBP,dword ptr [ESP + 0x20]
//   Label: LAB_00531086
//   XREF to: Stack[-0x48] (READ)
// 0053108a: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 0053108e: ADD EBP,0x40
// 00531091: ADD EBX,0x4
// 00531094: MOV dword ptr [ESP + 0x20],EBP
//   XREF to: Stack[-0x48] (WRITE)
// 00531098: MOV dword ptr [ESP + 0x34],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 0053109c: CMP EBP,0x80
// 005310a2: JNZ 0x00530fdc
//   XREF to: 00530fdc (CONDITIONAL_JUMP)
// 005310a8: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x14] (READ)
// 005310ac: SHL EAX,0x3
// 005310af: MOV EDX,EAX
// 005310b1: SHL EAX,0x5
// 005310b4: MOV EBP,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 005310b8: SUB EAX,EDX
// 005310ba: ADD EBP,EAX
// 005310bc: LEA EBX,[EBP + 0x30]
// 005310bf: ADD EBP,0xcc
// 005310c5: ADD EBX,0x34
//   Label: LAB_005310c5
// 005310c8: MOV dword ptr [EBX + 0x28],0x0
// 005310cf: CMP EBX,EBP
// 005310d1: JNZ 0x005310c5
//   XREF to: 005310c5 (CONDITIONAL_JUMP)
// 005310d3: ADD ESP,0x58
// 005310d6: POP EBP
// 005310d7: POP EDI
// 005310d8: POP ESI
// 005310d9: POP EBX
// 005310da: RET
// 005310db: CMP dword ptr [ESP + 0x78],0x0
//   Label: LAB_005310db
//   XREF to: Stack[0x10] (READ)
// 005310e0: JZ 0x00530db0
//   XREF to: 00530db0 (CONDITIONAL_JUMP)
// 005310e6: JMP 0x00530e19
//   XREF to: 00530e19 (UNCONDITIONAL_JUMP)
