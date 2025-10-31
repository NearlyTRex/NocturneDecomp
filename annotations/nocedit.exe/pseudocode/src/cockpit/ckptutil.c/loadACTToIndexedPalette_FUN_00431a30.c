// Name: cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
// Address: 00431a30
// Address Range: [[00431a30, 00431ab5]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30(char * filename, char * output_palette)
// Cross-references:
//   cockpit_ckptutil.c_applyActPalette_FUN_004319b0 (004319b0) at 004319c9 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_applyACTPaletteToBitmap_FUN_0054b3f0 (0054b3f0) at 0054b401 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 (0054bb40) at 0054bc50 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0 (0054c5d0) at 0054c5e1 [UNCONDITIONAL_CALL]
// Globals:
//   uchar[32768] g_ColorCubeLookup
// Function calls:
//   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(char *filename,char *output_palette)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  BADSPACEBASE *in_ESP;
  uchar *in_stack_0000000c;
  char local_30c [4];
  byte abStack_308 [764];
  
  cockpit_ckptutil_c_loadACTPaletteFile_FUN_00431ac0(filename,local_30c);
  pbVar4 = abStack_308;
  do {
    bVar3 = *pbVar4;
    pbVar1 = pbVar4 + 1;
    pbVar2 = pbVar4 + 2;
    pbVar4 = pbVar4 + 3;
    *in_stack_0000000c =
         g_ColorCubeLookup
         [((int)(uint)*pbVar2 >> 3) +
          ((int)(uint)bVar3 >> 3) * 0x400 + ((int)(uint)*pbVar1 >> 3) * 0x20];
    in_stack_0000000c = in_stack_0000000c + 1;
  } while (pbVar4 != &stack0xfffffff8);
  return;
}


// Assembly code:
// 00431a30: PUSH EBX
//   Label: cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
// 00431a31: PUSH ESI
// 00431a32: PUSH EDI
// 00431a33: SUB ESP,0x300
// 00431a39: MOV EAX,ESP
// 00431a3b: PUSH EAX
// 00431a3c: MOV EDX,dword ptr [ESP + 0x314]
//   XREF to: Stack[0x4] (READ)
// 00431a43: PUSH EDX
// 00431a44: CALL cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0
//   XREF to: 00431ac0 (UNCONDITIONAL_CALL)
// 00431a49: ADD ESP,0x8
// 00431a4c: MOV ECX,ESP
// 00431a4e: MOV EBX,dword ptr [ESP + 0x314]
//   XREF to: Stack[0x8] (READ)
// 00431a55: LEA EDI,[ECX + 0x300]
//   XREF to: Stack[-0xc] (DATA)
// 00431a5b: XOR EDX,EDX
//   Label: LAB_00431a5b
// 00431a5d: MOV DL,byte ptr [ECX]
//   XREF to: Stack[-0x30c] (DATA)
// 00431a5f: MOV EAX,EDX
// 00431a61: SAR EDX,0x1f
// 00431a64: SHL EDX,0x3
// 00431a67: SBB EAX,EDX
// 00431a69: SAR EAX,0x3
// 00431a6c: XOR EDX,EDX
// 00431a6e: MOV DL,byte ptr [ECX + 0x1]
//   XREF to: Stack[-0x30b] (READ)
// 00431a71: MOV ESI,EAX
// 00431a73: MOV EAX,EDX
// 00431a75: SAR EDX,0x1f
// 00431a78: SHL EDX,0x3
// 00431a7b: SBB EAX,EDX
// 00431a7d: SAR EAX,0x3
// 00431a80: SHL ESI,0xa
// 00431a83: XOR EDX,EDX
// 00431a85: SHL EAX,0x5
// 00431a88: MOV DL,byte ptr [ECX + 0x2]
//   XREF to: Stack[-0x30a] (READ)
// 00431a8b: ADD ESI,EAX
// 00431a8d: MOV EAX,EDX
// 00431a8f: SAR EDX,0x1f
// 00431a92: SHL EDX,0x3
// 00431a95: SBB EAX,EDX
// 00431a97: SAR EAX,0x3
// 00431a9a: INC EBX
// 00431a9b: MOV AL,byte ptr [ESI + EAX*0x1 + 0x2cf9020]
//   XREF to: 02cf9020 (DATA)
// 00431aa2: ADD ECX,0x3
// 00431aa5: MOV byte ptr [EBX + -0x1],AL
// 00431aa8: CMP ECX,EDI
// 00431aaa: JNZ 0x00431a5b
//   XREF to: 00431a5b (CONDITIONAL_JUMP)
// 00431aac: ADD ESP,0x300
// 00431ab2: POP EDI
//   XREF to: Stack[-0xc] (DATA)
// 00431ab3: POP ESI
// 00431ab4: POP EBX
// 00431ab5: RET
