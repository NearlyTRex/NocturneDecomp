// Name: core_zombie.cpp_CZombie_FUN_005fc720
// Address: 005fc720
// Address Range: [[005fc720, 005fc916]]
// Convention: __cdecl
// Signature: int core_zombie.cpp_CZombie_FUN_005fc720(CZombie * this_ptr)
// Globals:
//   void* switchdataD_005fc708 = 005fc78d
//   undefined4 DAT_00658a25
//   undefined4 DAT_00658a2d
//   undefined4 DAT_00658a35
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_CZombie_FUN_005fc720(CZombie *this_ptr)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  undefined4 *in_stack_00000008;
  float local_40;
  float local_3c;
  float fStack_38;
  undefined4 local_2c;
  float local_28;
  float local_24;
  int iStack_14;
  
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (&local_2c != in_stack_00000008) {
    *in_stack_00000008 = local_2c;
    in_stack_00000008[1] = local_28;
    in_stack_00000008[2] = local_24;
  }
  iVar5 = 1;
  iStack_14 = 0;
  do {
    switch((iStack_14 + (this_ptr->base_enemy).base_character.base_actor.field7_0x6c) % 4) {
    case 0:
      iVar1 = (this_ptr->base_enemy).base_character.model.part_visibility_flags
              [*(int *)(this_ptr->field4_0xbf48 + 0x30)];
      goto joined_r0x005fc871;
    case 1:
      iVar1 = (this_ptr->base_enemy).base_character.model.part_visibility_flags
              [*(int *)(this_ptr->field4_0xbf48 + 0x38)];
joined_r0x005fc871:
      if (iVar1 != 0) {
        pfVar2 = (float *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
        if (&local_40 != pfVar2) {
          local_40 = *pfVar2;
          local_3c = pfVar2[1];
          fStack_38 = pfVar2[2];
        }
        local_3c = local_24 * (float)_DAT_00658a35 + local_3c * (float)_DAT_00658a2d;
        local_40 = local_28 * (float)_DAT_00658a25 + local_40 * (float)_DAT_00658a25;
        pfVar2 = (float *)(in_stack_00000008 + iVar5 * 3);
        if (pfVar2 != &local_40) {
          *pfVar2 = local_40;
          pfVar2[1] = local_3c;
          pfVar2[2] = fStack_38;
        }
LAB_005fc82e:
        iVar5 = iVar5 + 1;
      }
      break;
    case 2:
      if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
          [*(int *)(this_ptr->field4_0xbf48 + 0x48)] == 0) break;
      puVar3 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
      puVar4 = in_stack_00000008 + iVar5 * 3;
      if (puVar4 != puVar3) {
        *puVar4 = *puVar3;
        puVar4[1] = puVar3[1];
        puVar4[2] = puVar3[2];
      }
      goto LAB_005fc82e;
    case 3:
      if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
          [*(int *)(this_ptr->field4_0xbf48 + 0x44)] != 0) {
        puVar3 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
        puVar4 = in_stack_00000008 + iVar5 * 3;
        if (puVar4 != puVar3) {
          *puVar4 = *puVar3;
          puVar4[1] = puVar3[1];
          puVar4[2] = puVar3[2];
        }
        goto LAB_005fc82e;
      }
    }
    iStack_14 = iStack_14 + 1;
    if (3 < iStack_14) {
      return iVar5;
    }
  } while( true );
}


// Assembly code:
// 005fc720: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fc720
// 005fc721: PUSH ESI
// 005fc722: PUSH EDI
// 005fc723: PUSH EBP
// 005fc724: MOV EBP,ESP
// 005fc726: SUB ESP,0x4c
// 005fc729: AND ESP,0xfffffff8
// 005fc72c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005fc72f: MOV EDX,dword ptr [EBX + 0xbf70]
// 005fc735: PUSH EDX
// 005fc736: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x30] (DATA)
// 005fc73a: PUSH EAX
// 005fc73b: LEA EAX,[EBX + 0x158]
// 005fc741: PUSH EAX
// 005fc742: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005fc747: ADD ESP,0xc
// 005fc74a: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x30] (DATA)
// 005fc74e: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005fc751: CMP EAX,ECX
// 005fc753: JNZ 0x005fc84a
//   XREF to: 005fc84a (CONDITIONAL_JUMP)
// 005fc759: XOR EDI,EDI
//   Label: LAB_005fc759
// 005fc75b: MOV ESI,0x1
// 005fc760: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005fc764: LEA EDI,[EBX + 0x158]
// 005fc76a: MOV EDX,dword ptr [ESP + 0x48]
//   Label: LAB_005fc76a
//   XREF to: Stack[-0x18] (READ)
// 005fc76e: ADD EDX,dword ptr [EBX + 0x6c]
// 005fc771: MOV ECX,0x4
// 005fc776: MOV EAX,EDX
// 005fc778: SAR EDX,0x1f
// 005fc77b: IDIV ECX
// 005fc77d: CMP EDX,0x3
// 005fc780: JA 0x005fc82f
//   XREF to: 005fc82f (CONDITIONAL_JUMP)
// 005fc786: JMP dword ptr [EDX*0x4 + 0x5fc708]
//   Label: switchD
//   XREF to: 005fc78d (COMPUTED_JUMP)
//   XREF to: 005fc863 (COMPUTED_JUMP)
//   XREF to: 005fc883 (COMPUTED_JUMP)
//   XREF to: 005fc8cb (COMPUTED_JUMP)
//   XREF to: 005fc708 (DATA)
// 005fc78d: MOV EAX,dword ptr [EBX + 0xbf78]
//   Label: caseD_0
// 005fc793: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005fc79b: JZ 0x005fc82f
//   XREF to: 005fc82f (CONDITIONAL_JUMP)
// 005fc7a1: MOV ECX,dword ptr [EBX + 0xbf60]
// 005fc7a7: PUSH ECX
// 005fc7a8: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x24] (DATA)
// 005fc7ac: PUSH EAX
//   Label: LAB_005fc7ac
// 005fc7ad: PUSH EDI
// 005fc7ae: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005fc7b3: MOV EDX,EAX
// 005fc7b5: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x48] (DATA)
// 005fc7b9: ADD ESP,0xc
// 005fc7bc: CMP EAX,EDX
// 005fc7be: JZ 0x005fc7d4
//   XREF to: 005fc7d4 (CONDITIONAL_JUMP)
// 005fc7c0: MOV EAX,dword ptr [EDX]
// 005fc7c2: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005fc7c6: MOV EAX,dword ptr [EDX + 0x4]
// 005fc7c9: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005fc7cd: MOV EAX,dword ptr [EDX + 0x8]
// 005fc7d0: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005fc7d4: IMUL EDX,ESI,0xc
//   Label: LAB_005fc7d4
// 005fc7d7: FLD double ptr [0x00658a25]
//   XREF to: 00658a25 (READ)
// 005fc7dd: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 005fc7e1: FMUL ST1
// 005fc7e3: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 005fc7e7: FMUL double ptr [0x00658a2d]
//   XREF to: 00658a2d (READ)
// 005fc7ed: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 005fc7f1: FMULP ST3
// 005fc7f3: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 005fc7f7: FMUL double ptr [0x00658a35]
//   XREF to: 00658a35 (READ)
// 005fc7fd: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005fc800: FADDP
// 005fc802: FXCH ST2
// 005fc804: FADDP
// 005fc806: FXCH
// 005fc808: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (WRITE)
// 005fc80c: ADD EDX,EAX
// 005fc80e: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x48] (DATA)
// 005fc812: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (WRITE)
// 005fc816: CMP EDX,EAX
// 005fc818: JZ 0x005fc82e
//   XREF to: 005fc82e (CONDITIONAL_JUMP)
// 005fc81a: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (DATA)
// 005fc81e: MOV dword ptr [EDX],EAX
// 005fc820: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 005fc824: MOV dword ptr [EDX + 0x4],EAX
// 005fc827: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 005fc82b: MOV dword ptr [EDX + 0x8],EAX
// 005fc82e: INC ESI
//   Label: LAB_005fc82e
// 005fc82f: MOV EDX,dword ptr [ESP + 0x48]
//   Label: default
//   XREF to: Stack[-0x18] (READ)
// 005fc833: INC EDX
// 005fc834: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005fc838: CMP EDX,0x4
// 005fc83b: JL 0x005fc76a
//   XREF to: 005fc76a (CONDITIONAL_JUMP)
// 005fc841: MOV EAX,ESI
// 005fc843: MOV ESP,EBP
// 005fc845: POP EBP
// 005fc846: POP EDI
// 005fc847: POP ESI
// 005fc848: POP EBX
// 005fc849: RET
// 005fc84a: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_005fc84a
//   XREF to: Stack[-0x30] (DATA)
// 005fc84e: MOV dword ptr [ECX],EAX
// 005fc850: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 005fc854: MOV dword ptr [ECX + 0x4],EAX
// 005fc857: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 005fc85b: MOV dword ptr [ECX + 0x8],EAX
// 005fc85e: JMP 0x005fc759
//   XREF to: 005fc759 (UNCONDITIONAL_JUMP)
// 005fc863: MOV EAX,dword ptr [EBX + 0xbf80]
//   Label: caseD_1
// 005fc869: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005fc871: JZ 0x005fc82f
//   XREF to: 005fc82f (CONDITIONAL_JUMP)
// 005fc873: MOV ECX,dword ptr [EBX + 0xbf64]
// 005fc879: PUSH ECX
// 005fc87a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x54] (DATA)
// 005fc87e: JMP 0x005fc7ac
//   XREF to: 005fc7ac (UNCONDITIONAL_JUMP)
// 005fc883: MOV EAX,dword ptr [EBX + 0xbf90]
//   Label: caseD_2
// 005fc889: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005fc891: JZ 0x005fc82f
//   XREF to: 005fc82f (CONDITIONAL_JUMP)
// 005fc893: MOV ECX,dword ptr [EBX + 0xbf4c]
// 005fc899: PUSH ECX
// 005fc89a: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x3c] (DATA)
// 005fc89e: PUSH EAX
// 005fc89f: PUSH EDI
// 005fc8a0: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005fc8a5: IMUL EDX,ESI,0xc
// 005fc8a8: ADD ESP,0xc
// 005fc8ab: ADD EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005fc8ae: CMP EDX,EAX
// 005fc8b0: JZ 0x005fc82e
//   XREF to: 005fc82e (CONDITIONAL_JUMP)
// 005fc8b6: MOV ECX,dword ptr [EAX]
// 005fc8b8: MOV dword ptr [EDX],ECX
// 005fc8ba: MOV ECX,dword ptr [EAX + 0x4]
// 005fc8bd: MOV dword ptr [EDX + 0x4],ECX
// 005fc8c0: MOV ECX,dword ptr [EAX + 0x8]
// 005fc8c3: MOV dword ptr [EDX + 0x8],ECX
// 005fc8c6: JMP 0x005fc82e
//   XREF to: 005fc82e (UNCONDITIONAL_JUMP)
// 005fc8cb: MOV EAX,dword ptr [EBX + 0xbf8c]
//   Label: caseD_3
// 005fc8d1: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005fc8d9: JZ 0x005fc82f
//   XREF to: 005fc82f (CONDITIONAL_JUMP)
// 005fc8df: MOV ECX,dword ptr [EBX + 0xbf74]
// 005fc8e5: PUSH ECX
// 005fc8e6: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x60] (DATA)
// 005fc8ea: PUSH EAX
// 005fc8eb: PUSH EDI
// 005fc8ec: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005fc8f1: IMUL EDX,ESI,0xc
// 005fc8f4: ADD ESP,0xc
// 005fc8f7: ADD EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005fc8fa: CMP EDX,EAX
// 005fc8fc: JZ 0x005fc82e
//   XREF to: 005fc82e (CONDITIONAL_JUMP)
// 005fc902: MOV ECX,dword ptr [EAX]
// 005fc904: MOV dword ptr [EDX],ECX
// 005fc906: MOV ECX,dword ptr [EAX + 0x4]
// 005fc909: MOV dword ptr [EDX + 0x4],ECX
// 005fc90c: MOV ECX,dword ptr [EAX + 0x8]
// 005fc90f: MOV dword ptr [EDX + 0x8],ECX
// 005fc912: JMP 0x005fc82e
//   XREF to: 005fc82e (UNCONDITIONAL_JUMP)
