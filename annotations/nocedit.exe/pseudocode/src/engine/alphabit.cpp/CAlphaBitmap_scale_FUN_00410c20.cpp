// Name: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20
// Address: 00410c20
// Address Range: [[00410c20, 00410ce5]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
// Cross-references:
//   core_inv.cpp_loadInventory_FUN_004fd220 (004fd220) at 004fd421 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00512f8a [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20
          (CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  
  iVar3 = this_ptr->width / scaleFactorX;
  iVar4 = this_ptr->height / scaleFactorY;
  local_14 = 0;
  if (0 < iVar4) {
    do {
      if (0 < iVar3) {
        iVar6 = local_14 * iVar3;
        iVar5 = 0;
        iVar7 = iVar3 + iVar6;
        do {
          iVar1 = local_14 * this_ptr->width * scaleFactorY + iVar5;
          this_ptr->ptrRaw[iVar6] = this_ptr->ptrRaw[iVar1];
          pcVar2 = this_ptr->ptrOpa + iVar6;
          iVar6 = iVar6 + 1;
          *pcVar2 = this_ptr->ptrOpa[iVar1];
          iVar5 = iVar5 + scaleFactorX;
        } while (iVar6 < iVar7);
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar4);
  }
  this_ptr->width = iVar3;
  this_ptr->height = iVar4;
  return;
}


// Assembly code:
// 00410c20: PUSH EBX
//   Label: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20
// 00410c21: PUSH ESI
// 00410c22: PUSH EDI
// 00410c23: PUSH EBP
// 00410c24: SUB ESP,0x18
// 00410c27: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00410c2b: MOV EAX,dword ptr [ECX + 0xc]
// 00410c2e: MOV EDX,EAX
// 00410c30: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 00410c34: SAR EDX,0x1f
// 00410c37: IDIV EBX
// 00410c39: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00410c3d: MOV EAX,dword ptr [ECX + 0x10]
// 00410c40: MOV EDX,EAX
// 00410c42: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 00410c46: SAR EDX,0x1f
// 00410c49: IDIV ESI
// 00410c4b: XOR EDI,EDI
// 00410c4d: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00410c51: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00410c55: TEST EAX,EAX
// 00410c57: JLE 0x00410cd0
//   XREF to: 00410cd0 (CONDITIONAL_JUMP)
// 00410c5d: CMP dword ptr [ESP + 0x8],0x0
//   Label: LAB_00410c5d
//   XREF to: Stack[-0x20] (READ)
// 00410c62: JLE 0x00410cbf
//   XREF to: 00410cbf (CONDITIONAL_JUMP)
// 00410c64: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00410c68: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00410c6c: IMUL EBX,ESI
// 00410c6f: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 00410c73: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00410c77: IMUL EDX,EDX,0x0
// 00410c7a: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00410c7e: ADD ESI,EBX
// 00410c80: MOV EAX,EBX
// 00410c82: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00410c86: MOV EBX,dword ptr [ESP + 0x14]
//   Label: LAB_00410c86
//   XREF to: Stack[-0x14] (READ)
// 00410c8a: IMUL EBX,dword ptr [ECX + 0xc]
// 00410c8e: IMUL EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 00410c93: LEA ESI,[EBX + EDX*0x1]
// 00410c96: MOV EBX,dword ptr [ECX]
// 00410c98: LEA EDI,[EBX + ESI*0x1]
// 00410c9b: ADD EBX,EAX
// 00410c9d: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x28] (DATA)
// 00410ca0: MOV BL,byte ptr [EDI]
// 00410ca2: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00410ca5: MOV byte ptr [EDI],BL
// 00410ca7: MOV EBX,dword ptr [ECX + 0x4]
// 00410caa: LEA EDI,[EBX + ESI*0x1]
// 00410cad: LEA ESI,[EBX + EAX*0x1]
// 00410cb0: MOV BL,byte ptr [EDI]
// 00410cb2: INC EAX
// 00410cb3: MOV byte ptr [ESI],BL
// 00410cb5: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00410cb9: ADD EDX,EBP
// 00410cbb: CMP EAX,EBX
// 00410cbd: JL 0x00410c86
//   XREF to: 00410c86 (CONDITIONAL_JUMP)
// 00410cbf: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00410cbf
//   XREF to: Stack[-0x14] (READ)
// 00410cc3: INC EAX
// 00410cc4: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 00410cc8: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00410ccc: CMP EAX,EDX
// 00410cce: JL 0x00410c5d
//   XREF to: 00410c5d (CONDITIONAL_JUMP)
// 00410cd0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00410cd0
//   XREF to: Stack[-0x20] (READ)
// 00410cd4: MOV dword ptr [ECX + 0xc],EAX
// 00410cd7: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 00410cdb: MOV dword ptr [ECX + 0x10],EAX
// 00410cde: ADD ESP,0x18
// 00410ce1: POP EBP
// 00410ce2: POP EDI
// 00410ce3: POP ESI
// 00410ce4: POP EBX
// 00410ce5: RET
