// Name: core_mimic.cpp_FUN_0051f1d0
// Address: 0051f1d0
// Address Range: [[0051f1d0, 0051f2b6]]
// Convention: __cdecl
// Signature: CMimic * core_mimic.cpp_FUN_0051f1d0(CMimic * this_ptr)
// Cross-references:
//   core_mimic.cpp_FUN_0051f190 (0051f190) at 0051f1aa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CGhoul_00638554
//   undefined4 s_Ghoul_00638555
//   undefined4 s_houl_00638556
//   undefined4 s_oul_00638557
//   undefined4 DAT_0066140c
//   undefined4 PTR_FUN_0066140d+3
//   CDemonActor_vtable PTR_core_mimic.cpp_CMimic_setup_FUN_0051f3e0_00661424
// Function calls:
//   core_cloth.cpp_FUN_00438ba0
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_morph.cpp_FUN_0052b310

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMimic * __cdecl core_mimic_cpp_FUN_0051f1d0(CMimic *this_ptr)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->field0_0x0);
  core_cloth_cpp_FUN_00438ba0();
  iVar4 = core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(iVar4 + -0x4bcd0) =
       &PTR_core_mimic_cpp_CMimic_setup_FUN_0051f3e0_00661424;
  *(undefined4 *)(iVar4 + -0x49048) = 0x3f000000;
  pcVar5 = "CGhoul";
  *(undefined4 *)(iVar4 + -0x49044) = 0x3f800000;
  uVar2 = _DAT_0066140c;
  *(undefined1 *)(iVar4 + -0x3ff68) = 0;
  uVar3 = _PTR_FUN_0066140d_3;
  *(undefined1 *)(iVar4 + -0x3ff04) = 0;
  *(undefined4 *)(iVar4 + -0x49040) = uVar2;
  *(undefined4 *)(iVar4 + -0x4903c) = uVar3;
  *(undefined4 *)(iVar4 + -0x30) = 0;
  pcVar6 = (char *)(iVar4 + -0x28);
  *(undefined4 *)(iVar4 + -0x2c) = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)(iVar4 + 0xc30) = 0;
  *(undefined4 *)(iVar4 + 0xc2c) = 0xbf800000;
  *(undefined4 *)(iVar4 + -0x4bd1c) = 0x10000;
  *(undefined4 *)(iVar4 + -0x4bd18) = 0x10000;
  *(undefined4 *)(iVar4 + -0x4bd14) = 0x10000;
  return (CMimic *)(iVar4 + -0x4be24);
}


// Assembly code:
// 0051f1d0: PUSH ESI
//   Label: core_mimic.cpp_FUN_0051f1d0
// 0051f1d1: PUSH EDI
// 0051f1d2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0051f1d6: PUSH EDX
// 0051f1d7: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 0051f1dc: ADD ESP,0x4
// 0051f1df: ADD EAX,0xbf84
// 0051f1e4: PUSH EAX
// 0051f1e5: CALL core_cloth.cpp_FUN_00438ba0
//   XREF to: 00438ba0 (UNCONDITIONAL_CALL)
// 0051f1ea: ADD ESP,0x4
// 0051f1ed: ADD EAX,0x3fea0
// 0051f1f2: PUSH EAX
// 0051f1f3: CALL core_morph.cpp_FUN_0052b310
//   XREF to: 0052b310 (UNCONDITIONAL_CALL)
// 0051f1f8: LEA EDX,[EAX + 0xfffb41dc]
// 0051f1fe: MOV dword ptr [EDX + 0x154],0x661424
//   XREF to: 00661424 (DATA)
// 0051f208: MOV dword ptr [EDX + 0x2ddc],0x3f000000
// 0051f212: MOV ESI,0x638554
//   XREF to: 00638554 (DATA)
// 0051f217: MOV dword ptr [EDX + 0x2de0],0x3f800000
// 0051f221: FLD float ptr [0x0066140c]
//   XREF to: 0066140c (READ)
// 0051f227: MOV byte ptr [EDX + 0xbebc],0x0
// 0051f22e: FLD float ptr [0x00661410]
//   XREF to: 00661410 (READ)
// 0051f234: MOV byte ptr [EDX + 0xbf20],0x0
// 0051f23b: ADD ESP,0x4
// 0051f23e: FXCH
// 0051f240: FSTP float ptr [EDX + 0x2de4]
// 0051f246: FSTP float ptr [EDX + 0x2de8]
// 0051f24c: MOV dword ptr [EDX + 0x4bdf4],0x0
// 0051f256: LEA EDI,[EDX + 0x4bdfc]
// 0051f25c: MOV dword ptr [EDX + 0x4bdf8],0x0
// 0051f266: PUSH EDI
// 0051f267: MOV AL,byte ptr [ESI]
//   Label: LAB_0051f267
//   XREF to: 00638554 (READ)
//   XREF to: 00638556 (READ)
// 0051f269: MOV byte ptr [EDI],AL
// 0051f26b: CMP AL,0x0
// 0051f26d: JZ 0x0051f27f
//   XREF to: 0051f27f (CONDITIONAL_JUMP)
// 0051f26f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00638555 (READ)
//   XREF to: 00638557 (READ)
// 0051f272: ADD ESI,0x2
// 0051f275: MOV byte ptr [EDI + 0x1],AL
// 0051f278: ADD EDI,0x2
// 0051f27b: CMP AL,0x0
// 0051f27d: JNZ 0x0051f267
//   XREF to: 0051f267 (CONDITIONAL_JUMP)
// 0051f27f: POP EDI
//   Label: LAB_0051f27f
// 0051f280: MOV dword ptr [EDX + 0x4ca54],0x0
// 0051f28a: MOV dword ptr [EDX + 0x4ca50],0xbf800000
// 0051f294: MOV dword ptr [EDX + 0x108],0x10000
// 0051f29e: MOV dword ptr [EDX + 0x10c],0x10000
// 0051f2a8: MOV EAX,EDX
// 0051f2aa: MOV dword ptr [EDX + 0x110],0x10000
// 0051f2b4: POP EDI
// 0051f2b5: POP ESI
// 0051f2b6: RET
