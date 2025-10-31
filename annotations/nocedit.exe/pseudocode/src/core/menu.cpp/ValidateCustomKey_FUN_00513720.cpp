// Name: core_menu.cpp_ValidateCustomKey_FUN_00513720
// Address: 00513720
// Address Range: [[00513720, 0051385d]]
// Convention: unknown
// Signature: undefined core_menu.cpp_ValidateCustomKey_FUN_00513720()
// Cross-references:
//   core_menu.cpp_SettingCustomKeys_FUN_005138e0 (005138e0) at 00514ea0 [UNCONDITIONAL_CALL]
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.game_control

#include "nocturne.h"

/* Signature: int core_menu.cpp_ValidateCustomKey(int* pAddrOfGameControl, char* sDescription) */

undefined4 core_menu_cpp_ValidateCustomKey_FUN_00513720(void)

{
  int iVar1;
  uint uVar2;
  uint *in_stack_00000004;
  
  iVar1 = g_CGamePtr->game_control;
  if (iVar1 == 0) {
    uVar2 = *in_stack_00000004;
    if (uVar2 < 0x209) {
      if (((uVar2 < 0x204) && (uVar2 < 0x201)) && (uVar2 != 0x200)) {
        return 0;
      }
    }
    else if (0x209 < uVar2) {
      if (uVar2 < 0x252) {
        if ((((0x20a < uVar2) && (0x20b < uVar2)) && (0x20c < uVar2)) && (uVar2 != 0x251)) {
          return 0;
        }
      }
      else if (((0x252 < uVar2) && (0x253 < uVar2)) &&
              ((0x254 < uVar2 && ((0x255 < uVar2 && (uVar2 != 0x256)))))) {
        return 0;
      }
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        uVar2 = *in_stack_00000004;
        if (0x20b < uVar2) {
          if (uVar2 < 0x20d) {
            return 1;
          }
          if (uVar2 < 0x255) {
            return 0;
          }
          if (uVar2 < 0x256) {
            return 1;
          }
          if (uVar2 == 0x256) {
            return 1;
          }
          return 0;
        }
        if (0x1ff < uVar2) {
          if (uVar2 < 0x201) {
            return 1;
          }
          if (uVar2 == 0x201) {
            return 1;
          }
        }
      }
      return 0;
    }
    uVar2 = *in_stack_00000004;
    if (uVar2 < 0x208) {
      if (uVar2 < 0x204) {
        if (uVar2 < 0x202) {
          return 0;
        }
        return 1;
      }
    }
    else if (0x208 < uVar2) {
      if (uVar2 < 0x251) {
        if (((0x209 < uVar2) && (0x20a < uVar2)) && (uVar2 != 0x20b)) {
          return 0;
        }
      }
      else if ((((0x251 < uVar2) && (0x252 < uVar2)) && (0x253 < uVar2)) && (uVar2 != 0x254)) {
        return 0;
      }
    }
  }
  return 1;
}


// Assembly code:
// 00513720: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: Stack[0x4] (READ)
// 00513724: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00513729: MOV ECX,dword ptr [EAX + 0xbc]
//   XREF to: 02d81b58 (READ)
// 0051372f: TEST ECX,ECX
// 00513731: JNZ 0x0051379a
//   XREF to: 0051379a (CONDITIONAL_JUMP)
// 00513737: MOV EAX,dword ptr [EDX]
// 00513739: CMP EAX,0x209
// 0051373e: JNC 0x0051375b
//   XREF to: 0051375b (CONDITIONAL_JUMP)
// 00513740: CMP EAX,0x204
// 00513745: JNC 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 00513747: CMP EAX,0x201
// 0051374c: JNC 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 0051374e: CMP EAX,0x200
// 00513753: JNZ 0x0051377b
//   XREF to: 0051377b (CONDITIONAL_JUMP)
// 00513755: MOV EAX,0x1
//   Label: LAB_00513755
// 0051375a: RET
// 0051375b: JBE 0x00513755
//   Label: LAB_0051375b
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 0051375d: CMP EAX,0x252
// 00513762: JNC 0x0051377e
//   XREF to: 0051377e (CONDITIONAL_JUMP)
// 00513764: CMP EAX,0x20b
// 00513769: JC 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 0051376b: JBE 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 0051376d: CMP EAX,0x20c
// 00513772: JBE 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 00513774: CMP EAX,0x251
// 00513779: JZ 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 0051377b: XOR EAX,EAX
//   Label: LAB_0051377b
// 0051377d: RET
// 0051377e: JBE 0x00513755
//   Label: LAB_0051377e
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 00513780: CMP EAX,0x254
// 00513785: JC 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 00513787: JBE 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 00513789: CMP EAX,0x255
// 0051378e: JBE 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 00513790: CMP EAX,0x256
// 00513795: JZ 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 00513797: XOR EAX,EAX
// 00513799: RET
// 0051379a: CMP ECX,0x1
//   Label: LAB_0051379a
// 0051379d: JNZ 0x00513805
//   XREF to: 00513805 (CONDITIONAL_JUMP)
// 005137a3: MOV EAX,dword ptr [EDX]
// 005137a5: CMP EAX,0x208
// 005137aa: JNC 0x005137c0
//   XREF to: 005137c0 (CONDITIONAL_JUMP)
// 005137ac: CMP EAX,0x204
// 005137b1: JNC 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 005137b3: CMP EAX,0x202
// 005137b8: JC 0x0051377b
//   XREF to: 0051377b (CONDITIONAL_JUMP)
// 005137ba: MOV EAX,0x1
// 005137bf: RET
// 005137c0: JBE 0x00513755
//   Label: LAB_005137c0
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 005137c2: CMP EAX,0x251
// 005137c7: JNC 0x005137e0
//   XREF to: 005137e0 (CONDITIONAL_JUMP)
// 005137c9: CMP EAX,0x20a
// 005137ce: JC 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 005137d0: JBE 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 005137d2: CMP EAX,0x20b
// 005137d7: JZ 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 005137dd: XOR EAX,EAX
// 005137df: RET
// 005137e0: JBE 0x00513755
//   Label: LAB_005137e0
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 005137e6: CMP EAX,0x253
// 005137eb: JC 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 005137f1: JBE 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 005137f7: CMP EAX,0x254
// 005137fc: JZ 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 00513802: XOR EAX,EAX
// 00513804: RET
// 00513805: CMP ECX,0x2
//   Label: LAB_00513805
// 00513808: JNZ 0x0051377b
//   XREF to: 0051377b (CONDITIONAL_JUMP)
// 0051380e: MOV EAX,dword ptr [EDX]
// 00513810: CMP EAX,0x20c
// 00513815: JNC 0x00513839
//   XREF to: 00513839 (CONDITIONAL_JUMP)
// 00513817: CMP EAX,0x200
// 0051381c: JC 0x0051377b
//   XREF to: 0051377b (CONDITIONAL_JUMP)
// 00513822: JBE 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 00513828: CMP EAX,0x201
// 0051382d: JNZ 0x0051377b
//   XREF to: 0051377b (CONDITIONAL_JUMP)
// 00513833: MOV EAX,0x1
// 00513838: RET
// 00513839: JBE 0x00513755
//   Label: LAB_00513839
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 0051383f: CMP EAX,0x255
// 00513844: JC 0x0051377b
//   XREF to: 0051377b (CONDITIONAL_JUMP)
// 0051384a: JBE 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 00513850: CMP EAX,0x256
// 00513855: JZ 0x00513755
//   XREF to: 00513755 (CONDITIONAL_JUMP)
// 0051385b: XOR EAX,EAX
// 0051385d: RET
