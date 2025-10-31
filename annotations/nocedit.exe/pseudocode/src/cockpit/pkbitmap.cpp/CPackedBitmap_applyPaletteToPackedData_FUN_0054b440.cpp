// Name: cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
// Address: 0054b440
// Address Range: [[0054b440, 0054b49a]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(CPackedBitmap * this_ptr, uchar * palette_buffer)
// Cross-references:
//   cockpit_pkbitmap.cpp_applyACTPaletteToBitmap_FUN_0054b3f0 (0054b3f0) at 0054b414 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 (0054bb40) at 0054bc81 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620 (0054c620) at 0054c63e [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
          (CPackedBitmap *this_ptr,uchar *palette_buffer)

{
  char *pcVar1;
  void *pvVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  pcVar1 = this_ptr->packed_data;
  pvVar2 = this_ptr->row_pointers[this_ptr->height];
  pbVar6 = (byte *)((int)*this_ptr->row_pointers + (int)pcVar1);
  while (pbVar6 < (byte *)((int)pvVar2 + (int)pcVar1)) {
    uVar5 = (uint)*(ushort *)(pbVar6 + 2);
    pbVar3 = pbVar6 + 4;
    pbVar6 = pbVar3 + (uVar5 + 3 & 0xfffffffc);
    iVar4 = 0;
    if (uVar5 != 0) {
      do {
        iVar4 = iVar4 + 1;
        *pbVar3 = palette_buffer[*pbVar3];
        pbVar3 = pbVar3 + 1;
      } while (iVar4 < (int)uVar5);
    }
  }
  return;
}


// Assembly code:
// 0054b440: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
// 0054b441: PUSH ESI
// 0054b442: PUSH EDI
// 0054b443: SUB ESP,0x4
// 0054b446: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054b44a: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054b44e: MOV EDX,dword ptr [ECX + 0x20]
// 0054b451: MOV EAX,dword ptr [ECX + 0x14]
// 0054b454: MOV ECX,dword ptr [ECX + 0x1c]
// 0054b457: MOV EDI,dword ptr [EDX]
// 0054b459: MOV EDX,dword ptr [EDX + ECX*0x4]
// 0054b45c: ADD EDX,EAX
// 0054b45e: ADD EDI,EAX
// 0054b460: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x10] (DATA)
// 0054b463: CMP EDI,EDX
// 0054b465: JNC 0x0054b494
//   XREF to: 0054b494 (CONDITIONAL_JUMP)
// 0054b467: XOR EBX,EBX
//   Label: LAB_0054b467
// 0054b469: MOV BX,word ptr [EDI + 0x2]
// 0054b46d: LEA EDX,[EBX + 0x3]
// 0054b470: LEA EAX,[EDI + 0x4]
// 0054b473: AND DL,0xfc
// 0054b476: LEA EDI,[EAX + EDX*0x1]
// 0054b479: XOR EDX,EDX
// 0054b47b: TEST EBX,EBX
// 0054b47d: JLE 0x0054b48f
//   XREF to: 0054b48f (CONDITIONAL_JUMP)
// 0054b47f: XOR ECX,ECX
//   Label: LAB_0054b47f
// 0054b481: MOV CL,byte ptr [EAX]
// 0054b483: INC EAX
// 0054b484: MOV CL,byte ptr [ECX + ESI*0x1]
// 0054b487: INC EDX
// 0054b488: MOV byte ptr [EAX + -0x1],CL
// 0054b48b: CMP EDX,EBX
// 0054b48d: JL 0x0054b47f
//   XREF to: 0054b47f (CONDITIONAL_JUMP)
// 0054b48f: CMP EDI,dword ptr [ESP]
//   Label: LAB_0054b48f
//   XREF to: Stack[-0x10] (DATA)
// 0054b492: JC 0x0054b467
//   XREF to: 0054b467 (CONDITIONAL_JUMP)
// 0054b494: ADD ESP,0x4
//   Label: LAB_0054b494
// 0054b497: POP EDI
// 0054b498: POP ESI
// 0054b499: POP EBX
// 0054b49a: RET
