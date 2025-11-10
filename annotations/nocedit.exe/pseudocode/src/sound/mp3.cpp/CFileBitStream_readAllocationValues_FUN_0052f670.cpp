// Name: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670
// Address: 0052f670
// Address Range: [[0052f670, 0052f79f]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670(CFileBitStream * this_ptr, SMpegSubbandAllocation * output_allocation, SBitAllocationTable * alloc_table_info)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 (00534d40) at 005353c9 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670
          (CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,
          SBitAllocationTable *alloc_table_info)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  void *local_18;
  int local_14;
  
  iVar9 = alloc_table_info->num_granules;
  iVar1 = alloc_table_info->num_subbands;
  iVar6 = alloc_table_info->num_allocation_groups;
  pvVar8 = alloc_table_info->allocation_data_ptr;
  if (0 < iVar6) {
    local_14 = 0;
    local_18 = pvVar8;
    do {
      iVar7 = 0;
      if (0 < iVar1) {
        puVar3 = (uint *)((int)output_allocation->granules + local_14);
        do {
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40
                            (this_ptr,*(int *)((int)local_18 + 4));
          iVar7 = iVar7 + 1;
          *puVar3 = uVar2 & 0xff;
          puVar3 = puVar3 + 0x20;
        } while (iVar7 < iVar1);
      }
      local_14 = local_14 + 4;
      local_18 = (void *)((int)local_18 + 0x100);
    } while (local_14 < iVar6 * 4);
  }
  if (iVar6 < iVar9) {
    pvVar8 = (void *)(iVar6 * 0x100 + (int)pvVar8);
    piVar4 = output_allocation->granules + iVar6;
    do {
      uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,*(int *)((int)pvVar8 + 4))
      ;
      pvVar8 = (void *)((int)pvVar8 + 0x100);
      piVar4[0x20] = uVar2 & 0xff;
      iVar6 = iVar6 + 1;
      *piVar4 = uVar2 & 0xff;
      piVar4 = piVar4 + 1;
    } while (iVar6 < iVar9);
  }
  if (iVar9 < 0x20) {
    iVar9 = iVar9 * 4;
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        puVar5 = (undefined4 *)((int)output_allocation->granules + iVar9);
        do {
          iVar6 = iVar6 + 1;
          *puVar5 = 0;
          puVar5 = puVar5 + 0x20;
        } while (iVar6 < iVar1);
      }
      iVar9 = iVar9 + 4;
    } while (iVar9 < 0x80);
  }
  return;
}


// Assembly code:
// 0052f670: PUSH EBX
//   Label: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670
// 0052f671: PUSH ESI
// 0052f672: PUSH EDI
// 0052f673: PUSH EBP
// 0052f674: SUB ESP,0x18
// 0052f677: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 0052f67b: MOV EBX,dword ptr [EAX + 0x18]
// 0052f67e: MOV EDI,dword ptr [EAX + 0x10]
// 0052f681: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052f685: MOV EBX,dword ptr [EAX + 0x14]
// 0052f688: MOV EAX,dword ptr [EAX + 0x8]
// 0052f68b: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0052f68f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0052f692: TEST EBX,EBX
// 0052f694: JLE 0x0052f704
//   XREF to: 0052f704 (CONDITIONAL_JUMP)
// 0052f696: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052f69a: XOR ECX,ECX
// 0052f69c: LEA EAX,[EBX*0x4 + 0x0]
// 0052f6a3: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0052f6a7: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052f6ab: XOR ESI,ESI
//   Label: LAB_0052f6ab
// 0052f6ad: TEST EDI,EDI
// 0052f6af: JLE 0x0052f6e3
//   XREF to: 0052f6e3 (CONDITIONAL_JUMP)
// 0052f6b1: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052f6b5: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0052f6b9: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0052f6bd: ADD EBX,EAX
// 0052f6bf: MOV EDX,dword ptr [EBP + 0x4]
//   Label: LAB_0052f6bf
// 0052f6c2: PUSH EDX
// 0052f6c3: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0052f6c7: PUSH ECX
// 0052f6c8: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f6cd: ADD ESP,0x8
// 0052f6d0: ADD EBX,0x80
// 0052f6d6: AND EAX,0xff
// 0052f6db: INC ESI
// 0052f6dc: MOV dword ptr [EBX + -0x80],EAX
// 0052f6df: CMP ESI,EDI
// 0052f6e1: JL 0x0052f6bf
//   XREF to: 0052f6bf (CONDITIONAL_JUMP)
// 0052f6e3: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_0052f6e3
//   XREF to: Stack[-0x14] (READ)
// 0052f6e7: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0052f6eb: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0052f6ef: ADD ECX,0x4
// 0052f6f2: ADD EBX,0x100
// 0052f6f8: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0052f6fc: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0052f700: CMP ECX,ESI
// 0052f702: JL 0x0052f6ab
//   XREF to: 0052f6ab (CONDITIONAL_JUMP)
// 0052f704: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0052f704
//   XREF to: Stack[-0x1c] (READ)
// 0052f708: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0052f70c: CMP EBP,EDX
// 0052f70e: JGE 0x0052f760
//   XREF to: 0052f760 (CONDITIONAL_JUMP)
// 0052f710: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0052f714: LEA EBX,[EBP*0x4 + 0x0]
// 0052f71b: ADD EBX,ESI
// 0052f71d: MOV ESI,EBP
// 0052f71f: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052f722: SHL ESI,0x8
// 0052f725: ADD ESI,EAX
// 0052f727: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_0052f727
// 0052f72a: PUSH EAX
// 0052f72b: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0052f72f: PUSH EDX
// 0052f730: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f735: ADD ESP,0x8
// 0052f738: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0052f73c: ADD EBX,0x4
// 0052f73f: AND EAX,0xff
// 0052f744: ADD ESI,0x100
// 0052f74a: MOV dword ptr [EBX + 0x7c],EAX
// 0052f74d: INC EBP
// 0052f74e: MOV dword ptr [EBX + -0x4],EAX
// 0052f751: CMP EBP,ECX
// 0052f753: JL 0x0052f727
//   XREF to: 0052f727 (CONDITIONAL_JUMP)
// 0052f755: LEA EAX,[EAX]
// 0052f75b: LEA EDX,[EDX]
// 0052f75e: MOV EBX,EBX
// 0052f760: MOV EBX,dword ptr [ESP + 0xc]
//   Label: LAB_0052f760
//   XREF to: Stack[-0x1c] (READ)
// 0052f764: CMP EBX,0x20
// 0052f767: JGE 0x0052f798
//   XREF to: 0052f798 (CONDITIONAL_JUMP)
// 0052f769: LEA ESI,[EBX*0x4 + 0x0]
// 0052f770: XOR EAX,EAX
//   Label: LAB_0052f770
// 0052f772: TEST EDI,EDI
// 0052f774: JLE 0x0052f78d
//   XREF to: 0052f78d (CONDITIONAL_JUMP)
// 0052f776: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0052f77a: ADD EBX,ESI
// 0052f77c: INC EAX
//   Label: LAB_0052f77c
// 0052f77d: MOV dword ptr [EBX],0x0
// 0052f783: ADD EBX,0x80
// 0052f789: CMP EAX,EDI
// 0052f78b: JL 0x0052f77c
//   XREF to: 0052f77c (CONDITIONAL_JUMP)
// 0052f78d: ADD ESI,0x4
//   Label: LAB_0052f78d
// 0052f790: CMP ESI,0x80
// 0052f796: JL 0x0052f770
//   XREF to: 0052f770 (CONDITIONAL_JUMP)
// 0052f798: ADD ESP,0x18
//   Label: LAB_0052f798
// 0052f79b: POP EBP
// 0052f79c: POP EDI
// 0052f79d: POP ESI
// 0052f79e: POP EBX
// 0052f79f: RET
