// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
// Address: 0054b0e0
// Address Range: [[0054b0e0, 0054b186]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0(CPackedBitmap * this_ptr, uchar * raw_bitmap_data, int row_stride)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080 (0054b080) at 0054b0a8 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 (0054c1e0) at 0054c3b2 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
          (CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride)

{
  ushort uVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ushort *puVar7;
  uchar *puVar8;
  ushort *puVar9;
  int local_18;
  int local_14;
  
  if (row_stride == 0) {
    row_stride = this_ptr->width;
  }
  local_14 = 0;
  local_18 = 0;
  do {
    piVar5 = (int *)((int)this_ptr->row_pointers + local_14);
    pcVar3 = this_ptr->packed_data;
    iVar4 = piVar5[1];
    puVar7 = (ushort *)(pcVar3 + *piVar5);
    while (puVar7 < pcVar3 + iVar4) {
      puVar9 = puVar7 + 2;
      uVar1 = puVar7[1];
      uVar2 = *puVar7;
      puVar7 = (ushort *)((uVar1 + 3 & 0xfffffffc) + (int)puVar9);
      puVar8 = raw_bitmap_data + uVar2;
      for (uVar6 = (uint)(uVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)puVar9 = *(undefined4 *)puVar8;
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 2;
      }
      for (uVar6 = (byte)uVar1 & 0xffffff03; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uchar *)puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = (ushort *)((int)puVar9 + 1);
      }
    }
    local_18 = local_18 + 1;
    raw_bitmap_data = raw_bitmap_data + row_stride;
    local_14 = local_14 + 4;
  } while (local_18 < this_ptr->height);
  return;
}


// Assembly code:
// 0054b0e0: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
// 0054b0e1: PUSH ESI
// 0054b0e2: PUSH EDI
// 0054b0e3: PUSH EBP
// 0054b0e4: SUB ESP,0x8
// 0054b0e7: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0054b0eb: CMP dword ptr [ESP + 0x24],0x0
//   XREF to: Stack[0xc] (READ)
// 0054b0f0: JZ 0x0054b177
//   XREF to: 0054b177 (CONDITIONAL_JUMP)
// 0054b0f6: XOR ECX,ECX
//   Label: LAB_0054b0f6
// 0054b0f8: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0054b0fc: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x18] (DATA)
// 0054b0ff: MOV ECX,dword ptr [ESP + 0x1c]
//   Label: LAB_0054b0ff
//   XREF to: Stack[0x4] (READ)
// 0054b103: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0054b107: MOV ECX,dword ptr [ECX + 0x20]
// 0054b10a: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0054b10e: ADD ECX,ESI
// 0054b110: MOV EBX,dword ptr [EBX + 0x14]
// 0054b113: MOV EDX,dword ptr [ECX]
// 0054b115: MOV EDI,dword ptr [ECX + 0x4]
// 0054b118: ADD EDX,EBX
// 0054b11a: ADD EBX,EDI
// 0054b11c: CMP EDX,EBX
// 0054b11e: JNC 0x0054b14c
//   XREF to: 0054b14c (CONDITIONAL_JUMP)
// 0054b120: LEA EDI,[EDX + 0x4]
//   Label: LAB_0054b120
// 0054b123: XOR ECX,ECX
// 0054b125: XOR ESI,ESI
// 0054b127: MOV CX,word ptr [EDX + 0x2]
// 0054b12b: MOV SI,word ptr [EDX]
// 0054b12e: LEA EDX,[ECX + 0x3]
// 0054b131: AND DL,0xfc
// 0054b134: ADD ESI,EBP
// 0054b136: ADD EDX,EDI
// 0054b138: PUSH EDI
// 0054b139: MOV EAX,ECX
// 0054b13b: SHR ECX,0x2
// 0054b13e: MOVSD.REP ES:EDI,ESI
// 0054b140: MOV CL,AL
// 0054b142: AND CL,0x3
// 0054b145: MOVSB.REP ES:EDI,ESI
// 0054b147: POP EDI
// 0054b148: CMP EDX,EBX
// 0054b14a: JC 0x0054b120
//   XREF to: 0054b120 (CONDITIONAL_JUMP)
// 0054b14c: MOV EDX,dword ptr [ESP]
//   Label: LAB_0054b14c
//   XREF to: Stack[-0x18] (DATA)
// 0054b14f: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0054b153: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0054b157: INC EDX
// 0054b158: ADD EBP,ECX
// 0054b15a: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0054b15e: ADD EAX,0x4
// 0054b161: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 0054b164: MOV EBX,dword ptr [ECX + 0x1c]
// 0054b167: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054b16b: CMP EDX,EBX
// 0054b16d: JL 0x0054b0ff
//   XREF to: 0054b0ff (CONDITIONAL_JUMP)
// 0054b16f: ADD ESP,0x8
// 0054b172: POP EBP
// 0054b173: POP EDI
// 0054b174: POP ESI
// 0054b175: POP EBX
// 0054b176: RET
// 0054b177: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_0054b177
//   XREF to: Stack[0x4] (READ)
// 0054b17b: MOV EDX,dword ptr [EDX + 0x18]
// 0054b17e: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[0xc] (WRITE)
// 0054b182: JMP 0x0054b0f6
//   XREF to: 0054b0f6 (UNCONDITIONAL_JUMP)
