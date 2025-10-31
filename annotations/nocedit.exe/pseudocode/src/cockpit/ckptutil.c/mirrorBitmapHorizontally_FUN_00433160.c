// Name: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_00433160
// Address: 00433160
// Address Range: [[00433160, 004331ef]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_00433160(void * bitmap_data, int width, int height)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_mirrorBitmapHorizontally_FUN_00433160(void *bitmap_data,int width,int height)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int in_stack_00000010;
  
  iVar2 = width * in_stack_00000010;
  uVar6 = 0;
  if (height / 2 != 0) {
    puVar4 = (undefined1 *)(height * iVar2 + (int)bitmap_data);
    do {
      puVar4 = puVar4 + -iVar2;
      if (iVar2 != 0) {
        puVar3 = (undefined1 *)bitmap_data;
        puVar5 = puVar4;
        do {
          uVar1 = *puVar3;
          *puVar3 = *puVar5;
          puVar3 = puVar3 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (puVar3 < (undefined1 *)((int)bitmap_data + iVar2));
      }
      uVar6 = uVar6 + 1;
      bitmap_data = (void *)((int)bitmap_data + iVar2);
    } while (uVar6 < (uint)(height / 2));
  }
  return;
}


// Assembly code:
// 00433160: PUSH EBX
//   Label: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_00433160
// 00433161: PUSH ESI
// 00433162: PUSH EDI
// 00433163: PUSH EBP
// 00433164: SUB ESP,0x10
// 00433167: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0043316b: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0043316f: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00433173: IMUL EAX,EDX
// 00433176: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043317a: MOV EDX,ECX
// 0043317c: MOV EAX,ECX
// 0043317e: SAR EDX,0x1f
// 00433181: SUB EAX,EDX
// 00433183: SAR EAX,0x1
// 00433185: XOR EBP,EBP
// 00433187: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0043318b: TEST EAX,EAX
// 0043318d: JBE 0x004331e8
//   XREF to: 004331e8 (CONDITIONAL_JUMP)
// 0043318f: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00433193: MOV EDX,EAX
// 00433195: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00433199: MOV EBX,EAX
// 0043319b: IMUL ESI,EAX,0x0
// 0043319e: IMUL ECX,EDX
// 004331a1: NEG EBX
// 004331a3: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004331a7: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004331ab: ADD ESI,EAX
// 004331ad: MOV EAX,EDX
// 004331af: ADD ECX,ESI
// 004331b1: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 004331b4: LEA EDI,[EBX + ECX*0x1]
// 004331b7: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_004331b7
//   XREF to: Stack[-0x14] (READ)
// 004331bb: TEST ECX,ECX
// 004331bd: JBE 0x004331d4
//   XREF to: 004331d4 (CONDITIONAL_JUMP)
// 004331bf: MOV EAX,ESI
// 004331c1: MOV EDX,EDI
// 004331c3: ADD ECX,ESI
// 004331c5: MOV BH,byte ptr [EAX]
//   Label: LAB_004331c5
// 004331c7: MOV BL,byte ptr [EDX]
// 004331c9: INC EDX
// 004331ca: MOV byte ptr [EAX],BL
// 004331cc: INC EAX
// 004331cd: MOV byte ptr [EDX + -0x1],BH
// 004331d0: CMP EAX,ECX
// 004331d2: JC 0x004331c5
//   XREF to: 004331c5 (CONDITIONAL_JUMP)
// 004331d4: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_004331d4
//   XREF to: Stack[-0x18] (READ)
// 004331d8: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004331db: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 004331df: INC EBP
// 004331e0: ADD EDI,EAX
// 004331e2: ADD ESI,EDX
// 004331e4: CMP EBP,ECX
// 004331e6: JC 0x004331b7
//   XREF to: 004331b7 (CONDITIONAL_JUMP)
// 004331e8: ADD ESP,0x10
//   Label: LAB_004331e8
// 004331eb: POP EBP
// 004331ec: POP EDI
// 004331ed: POP ESI
// 004331ee: POP EBX
// 004331ef: RET
