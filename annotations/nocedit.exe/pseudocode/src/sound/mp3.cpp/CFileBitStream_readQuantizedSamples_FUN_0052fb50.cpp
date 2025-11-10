// Name: sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
// Address: 0052fb50
// Address Range: [[0052fb50, 0052fc41]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50(CFileBitStream * this_ptr, SMpegSubbandScalefactors * quantized_samples, SMpegSubbandAllocation * allocation, SBitAllocationTable * alloc_table)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 (00534d40) at 005350cb [UNCONDITIONAL_CALL]
// Function calls:
//   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
          (CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples,
          SMpegSubbandAllocation *allocation,SBitAllocationTable *alloc_table)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *local_18;
  int local_14;
  
  iVar1 = alloc_table->num_subbands;
  iVar4 = alloc_table->num_allocation_groups;
  if (0 < iVar4) {
    local_14 = 0;
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        puVar5 = (uint *)((int)allocation->granules + local_14);
        puVar3 = (uint *)((int)quantized_samples->codes[0] + local_14);
        do {
          uVar2 = *puVar5;
          if (uVar2 != 0) {
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,uVar2 + 1);
          }
          *puVar3 = uVar2;
          puVar3 = puVar3 + 0x60;
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 0x20;
        } while (iVar6 < iVar1);
      }
      local_14 = local_14 + 4;
    } while (local_14 < iVar4 << 2);
  }
  if (iVar4 < 0x20) {
    iVar6 = iVar4 * 4;
    local_18 = allocation->granules + iVar4;
    do {
      uVar2 = *local_18;
      if (uVar2 != 0) {
        uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,uVar2 + 1);
      }
      iVar4 = 0;
      if (0 < iVar1) {
        puVar3 = (uint *)((int)quantized_samples->codes[0] + iVar6);
        do {
          iVar4 = iVar4 + 1;
          *puVar3 = uVar2;
          puVar3 = puVar3 + 0x60;
        } while (iVar4 < iVar1);
      }
      local_18 = local_18 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x80);
  }
  return;
}


// Assembly code:
// 0052fb50: PUSH EBX
//   Label: sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
// 0052fb51: PUSH ESI
// 0052fb52: PUSH EDI
// 0052fb53: PUSH EBP
// 0052fb54: SUB ESP,0x10
// 0052fb57: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 0052fb5b: MOV EBP,dword ptr [EAX + 0x10]
// 0052fb5e: MOV EAX,dword ptr [EAX + 0x14]
// 0052fb61: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 0052fb64: TEST EAX,EAX
// 0052fb66: JLE 0x0052fbbf
//   XREF to: 0052fbbf (CONDITIONAL_JUMP)
// 0052fb68: SHL EAX,0x2
// 0052fb6b: XOR EDI,EDI
// 0052fb6d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052fb71: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0052fb75: XOR EDI,EDI
//   Label: LAB_0052fb75
// 0052fb77: TEST EBP,EBP
// 0052fb79: JLE 0x0052fbac
//   XREF to: 0052fbac (CONDITIONAL_JUMP)
// 0052fb7b: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0052fb7f: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0052fb83: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0052fb87: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0052fb8b: ADD ESI,EDX
// 0052fb8d: ADD EBX,EAX
// 0052fb8f: MOV EAX,dword ptr [ESI]
//   Label: LAB_0052fb8f
// 0052fb91: TEST EAX,EAX
// 0052fb93: JNZ 0x0052fc1d
//   XREF to: 0052fc1d (CONDITIONAL_JUMP)
// 0052fb99: MOV dword ptr [EBX],EAX
//   Label: LAB_0052fb99
// 0052fb9b: ADD EBX,0x180
// 0052fba1: INC EDI
// 0052fba2: ADD ESI,0x80
// 0052fba8: CMP EDI,EBP
// 0052fbaa: JL 0x0052fb8f
//   XREF to: 0052fb8f (CONDITIONAL_JUMP)
// 0052fbac: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_0052fbac
//   XREF to: Stack[-0x14] (READ)
// 0052fbb0: ADD ECX,0x4
// 0052fbb3: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0052fbb7: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0052fbbb: CMP ECX,EBX
// 0052fbbd: JL 0x0052fb75
//   XREF to: 0052fb75 (CONDITIONAL_JUMP)
// 0052fbbf: MOV ESI,dword ptr [ESP]
//   Label: LAB_0052fbbf
//   XREF to: Stack[-0x20] (DATA)
// 0052fbc2: CMP ESI,0x20
// 0052fbc5: JGE 0x0052fc15
//   XREF to: 0052fc15 (CONDITIONAL_JUMP)
// 0052fbc7: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0052fbcb: LEA EDI,[ESI*0x4 + 0x0]
// 0052fbd2: ADD EAX,EDI
// 0052fbd4: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052fbd8: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0052fbd8
//   XREF to: Stack[-0x18] (READ)
// 0052fbdc: MOV EAX,dword ptr [EAX]
// 0052fbde: TEST EAX,EAX
// 0052fbe0: JNZ 0x0052fc31
//   XREF to: 0052fc31 (CONDITIONAL_JUMP)
// 0052fbe2: XOR EBX,EBX
//   Label: LAB_0052fbe2
// 0052fbe4: TEST EBP,EBP
// 0052fbe6: JLE 0x0052fbff
//   XREF to: 0052fbff (CONDITIONAL_JUMP)
// 0052fbe8: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0052fbec: ADD ESI,EDI
// 0052fbee: ADD ESI,0x180
//   Label: LAB_0052fbee
// 0052fbf4: INC EBX
// 0052fbf5: MOV dword ptr [ESI + 0xfffffe80],EAX
// 0052fbfb: CMP EBX,EBP
// 0052fbfd: JL 0x0052fbee
//   XREF to: 0052fbee (CONDITIONAL_JUMP)
// 0052fbff: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_0052fbff
//   XREF to: Stack[-0x18] (READ)
// 0052fc03: ADD EBX,0x4
// 0052fc06: ADD EDI,0x4
// 0052fc09: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0052fc0d: CMP EDI,0x80
// 0052fc13: JL 0x0052fbd8
//   XREF to: 0052fbd8 (CONDITIONAL_JUMP)
// 0052fc15: ADD ESP,0x10
//   Label: LAB_0052fc15
// 0052fc18: POP EBP
// 0052fc19: POP EDI
// 0052fc1a: POP ESI
// 0052fc1b: POP EBX
// 0052fc1c: RET
// 0052fc1d: INC EAX
//   Label: LAB_0052fc1d
// 0052fc1e: PUSH EAX
// 0052fc1f: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0052fc23: PUSH ECX
// 0052fc24: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052fc29: ADD ESP,0x8
// 0052fc2c: JMP 0x0052fb99
//   XREF to: 0052fb99 (UNCONDITIONAL_JUMP)
// 0052fc31: INC EAX
//   Label: LAB_0052fc31
// 0052fc32: PUSH EAX
// 0052fc33: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0052fc37: PUSH ESI
// 0052fc38: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052fc3d: ADD ESP,0x8
// 0052fc40: JMP 0x0052fbe2
//   XREF to: 0052fbe2 (UNCONDITIONAL_JUMP)
