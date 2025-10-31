// Name: shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
// Address: 004a6550
// Address Range: [[004a6550, 004a658c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550(CEdButton * this_ptr, int x_pos, int y_pos, char * button_text)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507619 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 0050722e [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
          (CEdButton *this_ptr,int x_pos,int y_pos,char *button_text)

{
  int iVar1;
  char *unaff_EBX;
  int unaff_EDI;
  int in_stack_00000014;
  
  shape_edittool_cpp_calculateButtonHeight_FUN_004a6970(button_text);
  iVar1 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(button_text);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
            ((CEdButton *)y_pos,(int)button_text,in_stack_00000014,(int)(button_text + iVar1 + -1),
             unaff_EDI,unaff_EBX);
  return;
}


// Assembly code:
// 004a6550: PUSH EBX
//   Label: shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
// 004a6551: PUSH EDI
// 004a6552: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 004a6556: PUSH EBX
// 004a6557: PUSH EBX
// 004a6558: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 004a655d: ADD ESP,0x4
// 004a6560: ADD EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004a6564: DEC EAX
// 004a6565: PUSH EAX
// 004a6566: PUSH EBX
// 004a6567: CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
// 004a656c: ADD ESP,0x4
// 004a656f: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a6573: ADD EAX,ECX
// 004a6575: DEC EAX
// 004a6576: PUSH EAX
// 004a6577: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004a657b: PUSH EBX
// 004a657c: PUSH ECX
// 004a657d: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004a6581: PUSH EDI
// 004a6582: CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
//   XREF to: 004a6590 (UNCONDITIONAL_CALL)
// 004a6587: ADD ESP,0x18
// 004a658a: POP EDI
// 004a658b: POP EBX
// 004a658c: RET
