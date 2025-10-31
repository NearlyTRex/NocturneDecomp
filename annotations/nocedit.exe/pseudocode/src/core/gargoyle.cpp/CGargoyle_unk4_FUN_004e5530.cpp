// Name: core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530
// Address: 004e5530
// Address Range: [[004e5530, 004e57c8]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530()
// Cross-references:
//   core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0 (004e57d0) at 004e583d [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004e5518 = 004e556d
//   undefined4 DAT_0062da07
//   undefined4 DAT_0062da0f
//   undefined4 DAT_0062da17
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.field57_0x1e0
// Function calls:
//   core_actor.cpp_FUN_0040cd10
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   core_bodypart.cpp_FUN_0041a050
//   core_charactr.cpp_CCharacter_FUN_0042bcc0
//   core_charactr.cpp_CCharacter_FUN_0042bd30
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_gargoyle.cpp_CGargoyle_unk4(CGargoyle* param_1, undefined4
   param_2) */

void core_gargoyle_cpp_CGargoyle_unk4_FUN_004e5530(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20);
      break;
    case 1:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
      break;
    case 2:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x28);
      break;
    case 3:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
      break;
    case 4:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x48);
      break;
    case 5:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x44);
      break;
    default:
      goto switchD_004e5566_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_004e5566_default:
  iVar1 = *in_stack_00000008;
  if ((((((iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20)) ||
         (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24))) ||
        (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x28))) ||
       ((iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c) ||
        (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x44))))) ||
      (iVar1 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x48))) &&
     (iVar1 = core_actor_cpp_FUN_0040cd10(), iVar1 != 0)) {
    core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    if (*in_stack_00000008 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20)) {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x28) == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x44) == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
    }
    core_bodypart_cpp_FUN_0041a050();
    if (*(int *)((in_stack_00000004->model).padding_0x0 +
                *(int *)(in_stack_00000004[1].base_actor.create_event + 0x48) * 4 + 0x2140) == 0) {
      in_stack_00000008[1] = 0x461c3c00;
    }
    in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)_DAT_0062da07);
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x48)) {
    if ((iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x40)) &&
       (iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x44))) {
      in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)_DAT_0062da0f);
      return;
    }
    in_stack_00000008[1] = in_stack_00000008[1];
    return;
  }
  in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)_DAT_0062da17);
  return;
}


// Assembly code:
// 004e5530: PUSH EBX
//   Label: core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530
// 004e5531: PUSH ESI
// 004e5532: PUSH EDI
// 004e5533: PUSH EBP
// 004e5534: SUB ESP,0xc
// 004e5537: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004e553b: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004e553f: FLD float ptr [ESI + 0x2c]
// 004e5542: FLDZ
// 004e5544: FCOMPP
// 004e5546: FNSTSW AX
// 004e5548: SAHF
// 004e5549: JNC 0x004e5575
//   XREF to: 004e5575 (CONDITIONAL_JUMP)
// 004e554b: CMP dword ptr [ESI],-0x1
// 004e554e: JNZ 0x004e5575
//   XREF to: 004e5575 (CONDITIONAL_JUMP)
// 004e5550: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 004e5555: MOV EDX,EAX
// 004e5557: MOV EDI,0x6
// 004e555c: SAR EDX,0x1f
// 004e555f: IDIV EDI
// 004e5561: CMP EDX,0x5
// 004e5564: JA 0x004e5575
//   XREF to: 004e5575 (CONDITIONAL_JUMP)
// 004e5566: JMP dword ptr [EDX*0x4 + 0x4e5518]
//   Label: switchD
//   XREF to: 004e556d (COMPUTED_JUMP)
//   XREF to: 004e5715 (COMPUTED_JUMP)
//   XREF to: 004e5720 (COMPUTED_JUMP)
//   XREF to: 004e572b (COMPUTED_JUMP)
//   XREF to: 004e5736 (COMPUTED_JUMP)
//   XREF to: 004e5741 (COMPUTED_JUMP)
//   XREF to: 004e5518 (DATA)
// 004e556d: MOV EAX,dword ptr [EBX + 0xbebc]
//   Label: caseD_0
// 004e5573: MOV dword ptr [ESI],EAX
//   Label: LAB_004e5573
// 004e5575: MOV ECX,dword ptr [EBX + 0xbebc]
//   Label: default
// 004e557b: MOV EAX,dword ptr [ESI]
// 004e557d: CMP EAX,ECX
// 004e557f: JNZ 0x004e574c
//   XREF to: 004e574c (CONDITIONAL_JUMP)
// 004e5585: MOV EAX,dword ptr [ESI + 0x2c]
//   Label: LAB_004e5585
// 004e5588: MOV EBP,dword ptr [EBX + 0xbee4]
// 004e558e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e5592: CMP EBP,dword ptr [ESI]
// 004e5594: JNZ 0x004e559e
//   XREF to: 004e559e (CONDITIONAL_JUMP)
// 004e5596: MOV dword ptr [ESP + 0x8],0x3d4ccccd
//   XREF to: Stack[-0x14] (WRITE)
// 004e559e: MOV EDX,dword ptr [EBX + 0xbee0]
//   Label: LAB_004e559e
// 004e55a4: CMP EDX,dword ptr [ESI]
// 004e55a6: JNZ 0x004e55b0
//   XREF to: 004e55b0 (CONDITIONAL_JUMP)
// 004e55a8: MOV dword ptr [ESP + 0x8],0x3ca3d70a
//   XREF to: Stack[-0x14] (WRITE)
// 004e55b0: MOV EAX,[0x0067b654]
//   Label: LAB_004e55b0
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004e55b5: CMP dword ptr [EAX + 0x1e0],0x0
//   XREF to: 02d81c7c (READ)
// 004e55bc: JZ 0x004e55c6
//   XREF to: 004e55c6 (CONDITIONAL_JUMP)
// 004e55be: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x14] (WRITE)
// 004e55c6: PUSH dword ptr [ESP + 0x8]
//   Label: LAB_004e55c6
//   XREF to: Stack[-0x14] (READ)
// 004e55ca: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004e55cf: ADD ESP,0x4
// 004e55d2: TEST EAX,EAX
// 004e55d4: JZ 0x004e56e3
//   XREF to: 004e56e3 (CONDITIONAL_JUMP)
// 004e55da: MOV EAX,dword ptr [EBX + 0x2610]
// 004e55e0: PUSH EAX
// 004e55e1: PUSH 0x0
// 004e55e3: PUSH 0x0
// 004e55e5: PUSH EBX
// 004e55e6: LEA EAX,[ESI + 0xc]
// 004e55e9: PUSH EAX
// 004e55ea: LEA EAX,[EBX + 0x30]
// 004e55ed: PUSH EAX
// 004e55ee: LEA EAX,[EBX + 0x20]
// 004e55f1: PUSH EAX
// 004e55f2: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 004e55f7: ADD ESP,0x1c
// 004e55fa: PUSH 0x1
// 004e55fc: MOV EDX,dword ptr [ESI]
// 004e55fe: PUSH EDX
// 004e55ff: PUSH EAX
// 004e5600: PUSH EBX
// 004e5601: MOV EDI,EAX
// 004e5603: MOV EBP,EAX
// 004e5605: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 004e560a: MOV EAX,dword ptr [ESI]
// 004e560c: MOV ECX,dword ptr [EBX + 0xbebc]
// 004e5612: ADD ESP,0x10
// 004e5615: CMP EAX,ECX
// 004e5617: JNZ 0x004e562c
//   XREF to: 004e562c (CONDITIONAL_JUMP)
// 004e5619: PUSH 0x1
// 004e561b: MOV EAX,dword ptr [EBX + 0xbec0]
// 004e5621: PUSH EAX
// 004e5622: PUSH EDI
// 004e5623: PUSH EBX
// 004e5624: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 004e5629: ADD ESP,0x10
// 004e562c: MOV EDX,dword ptr [EBX + 0xbec4]
//   Label: LAB_004e562c
// 004e5632: CMP EDX,dword ptr [ESI]
// 004e5634: JNZ 0x004e5649
//   XREF to: 004e5649 (CONDITIONAL_JUMP)
// 004e5636: PUSH 0x1
// 004e5638: MOV ECX,dword ptr [EBX + 0xbec8]
// 004e563e: PUSH ECX
// 004e563f: PUSH EBP
// 004e5640: PUSH EBX
// 004e5641: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 004e5646: ADD ESP,0x10
// 004e5649: MOV EDI,dword ptr [EBX + 0xbee0]
//   Label: LAB_004e5649
// 004e564f: CMP EDI,dword ptr [ESI]
// 004e5651: JNZ 0x004e56b5
//   XREF to: 004e56b5 (CONDITIONAL_JUMP)
// 004e5653: PUSH 0x1
// 004e5655: LEA EDI,[ESI + 0xc]
// 004e5658: PUSH EDI
// 004e5659: MOV EAX,dword ptr [EBX + 0xbec4]
// 004e565f: PUSH EAX
// 004e5660: PUSH EBX
// 004e5661: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004e5666: ADD ESP,0x10
// 004e5669: PUSH 0x1
// 004e566b: PUSH EDI
// 004e566c: MOV EDX,dword ptr [EBX + 0xbec8]
// 004e5672: PUSH EDX
// 004e5673: PUSH EBX
// 004e5674: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004e5679: ADD ESP,0x10
// 004e567c: PUSH 0x1
// 004e567e: PUSH EDI
// 004e567f: MOV ECX,dword ptr [EBX + 0xbebc]
// 004e5685: PUSH ECX
// 004e5686: PUSH EBX
// 004e5687: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004e568c: ADD ESP,0x10
// 004e568f: PUSH 0x1
// 004e5691: PUSH EDI
// 004e5692: MOV EAX,dword ptr [EBX + 0xbec0]
// 004e5698: PUSH EAX
// 004e5699: PUSH EBX
// 004e569a: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004e569f: ADD ESP,0x10
// 004e56a2: PUSH 0x1
// 004e56a4: PUSH EDI
// 004e56a5: MOV EDX,dword ptr [EBX + 0xbee4]
// 004e56ab: PUSH EDX
// 004e56ac: PUSH EBX
// 004e56ad: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 004e56b2: ADD ESP,0x10
// 004e56b5: PUSH EBP
//   Label: LAB_004e56b5
// 004e56b6: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 004e56bb: MOV EAX,dword ptr [EBX + 0xbee4]
// 004e56c1: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 004e56c8: ADD ESP,0x4
// 004e56cb: TEST ECX,ECX
// 004e56cd: JZ 0x004e578d
//   XREF to: 004e578d (CONDITIONAL_JUMP)
// 004e56d3: FLD float ptr [ESI + 0x8]
//   Label: LAB_004e56d3
// 004e56d6: FLD ST0
// 004e56d8: FMUL double ptr [0x0062da07]
//   XREF to: 0062da07 (READ)
// 004e56de: FSTP ST1
// 004e56e0: FSTP float ptr [ESI + 0x8]
// 004e56e3: MOV EDI,dword ptr [EBX + 0xbee4]
//   Label: LAB_004e56e3
// 004e56e9: MOV EAX,dword ptr [ESI]
// 004e56eb: CMP EAX,EDI
// 004e56ed: JZ 0x004e5799
//   XREF to: 004e5799 (CONDITIONAL_JUMP)
// 004e56f3: CMP EAX,dword ptr [EBX + 0xbedc]
// 004e56f9: JZ 0x004e5707
//   XREF to: 004e5707 (CONDITIONAL_JUMP)
// 004e56fb: CMP EAX,dword ptr [EBX + 0xbee0]
// 004e5701: JNZ 0x004e57b1
//   XREF to: 004e57b1 (CONDITIONAL_JUMP)
// 004e5707: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_004e5707
// 004e570a: MOV dword ptr [ESI + 0x4],EAX
// 004e570d: ADD ESP,0xc
// 004e5710: POP EBP
// 004e5711: POP EDI
// 004e5712: POP ESI
// 004e5713: POP EBX
// 004e5714: RET
// 004e5715: MOV EAX,dword ptr [EBX + 0xbec0]
//   Label: caseD_1
// 004e571b: JMP 0x004e5573
//   XREF to: 004e5573 (UNCONDITIONAL_JUMP)
// 004e5720: MOV EAX,dword ptr [EBX + 0xbec4]
//   Label: caseD_2
// 004e5726: JMP 0x004e5573
//   XREF to: 004e5573 (UNCONDITIONAL_JUMP)
// 004e572b: MOV EAX,dword ptr [EBX + 0xbec8]
//   Label: caseD_3
// 004e5731: JMP 0x004e5573
//   XREF to: 004e5573 (UNCONDITIONAL_JUMP)
// 004e5736: MOV EAX,dword ptr [EBX + 0xbee4]
//   Label: caseD_4
// 004e573c: JMP 0x004e5573
//   XREF to: 004e5573 (UNCONDITIONAL_JUMP)
// 004e5741: MOV EAX,dword ptr [EBX + 0xbee0]
//   Label: caseD_5
// 004e5747: JMP 0x004e5573
//   XREF to: 004e5573 (UNCONDITIONAL_JUMP)
// 004e574c: CMP EAX,dword ptr [EBX + 0xbec0]
//   Label: LAB_004e574c
// 004e5752: JZ 0x004e5585
//   XREF to: 004e5585 (CONDITIONAL_JUMP)
// 004e5758: CMP EAX,dword ptr [EBX + 0xbec4]
// 004e575e: JZ 0x004e5585
//   XREF to: 004e5585 (CONDITIONAL_JUMP)
// 004e5764: CMP EAX,dword ptr [EBX + 0xbec8]
// 004e576a: JZ 0x004e5585
//   XREF to: 004e5585 (CONDITIONAL_JUMP)
// 004e5770: CMP EAX,dword ptr [EBX + 0xbee0]
// 004e5776: JZ 0x004e5585
//   XREF to: 004e5585 (CONDITIONAL_JUMP)
// 004e577c: CMP EAX,dword ptr [EBX + 0xbee4]
// 004e5782: JZ 0x004e5585
//   XREF to: 004e5585 (CONDITIONAL_JUMP)
// 004e5788: JMP 0x004e56e3
//   XREF to: 004e56e3 (UNCONDITIONAL_JUMP)
// 004e578d: MOV dword ptr [ESI + 0x4],0x461c3c00
//   Label: LAB_004e578d
// 004e5794: JMP 0x004e56d3
//   XREF to: 004e56d3 (UNCONDITIONAL_JUMP)
// 004e5799: FLD float ptr [ESI + 0x4]
//   Label: LAB_004e5799
// 004e579c: FLD ST0
// 004e579e: FMUL double ptr [0x0062da17]
//   XREF to: 0062da17 (READ)
// 004e57a4: FSTP ST1
// 004e57a6: FSTP float ptr [ESI + 0x4]
// 004e57a9: ADD ESP,0xc
// 004e57ac: POP EBP
// 004e57ad: POP EDI
// 004e57ae: POP ESI
// 004e57af: POP EBX
// 004e57b0: RET
// 004e57b1: FLD float ptr [ESI + 0x4]
//   Label: LAB_004e57b1
// 004e57b4: FLD ST0
// 004e57b6: FMUL double ptr [0x0062da0f]
//   XREF to: 0062da0f (READ)
// 004e57bc: FSTP ST1
// 004e57be: FSTP float ptr [ESI + 0x4]
// 004e57c1: ADD ESP,0xc
// 004e57c4: POP EBP
// 004e57c5: POP EDI
// 004e57c6: POP ESI
// 004e57c7: POP EBX
// 004e57c8: RET
