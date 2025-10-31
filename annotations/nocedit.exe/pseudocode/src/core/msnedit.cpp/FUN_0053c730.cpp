// Name: core_msnedit.cpp_FUN_0053c730
// Address: 0053c730
// Address Range: [[0053c730, 0053c8c7]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053c730()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a971 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_s_0063c881
//   TerminatedCString s_Edit_s_properties_0063c887
//   undefined4 DAT_00680908
//   undefined4 DAT_0068090c
//   undefined4 DAT_02f79820
//   undefined4 DAT_02f79c20
//   undefined4 DAT_02f7a024
//   undefined4 DAT_02f7a028
//   undefined4 DAT_02f7a02c
//   undefined4 DAT_02f7a030
//   undefined4 DAT_02f7a031
//   undefined4 DAT_02f7a032
//   undefined4 DAT_02f7a033
//   undefined4 DAT_02f7a080
//   undefined4 DAT_02f7a118
// Function calls:
//   core_actor.cpp_AnotherActorParser_FUN_0040eed0
//   core_actor.cpp_CActorProperty_FUN_0040ea50
//   core_actor.cpp_FUN_0040e150
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053c730(undefined4 param_1) */

void core_msnedit_cpp_FUN_0053c730(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint unaff_ESI;
  undefined4 *puVar3;
  char *pcVar4;
  uint unaff_EDI;
  undefined *puVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000004;
  int config_param2;
  uint in_stack_fffffac0;
  uint in_stack_fffffac4;
  char **in_stack_fffffac8;
  char acStack_198 [300];
  char local_6c [100];
  
  bVar7 = 0;
  core_actor_cpp_FUN_0040e150();
  if (*(int *)(in_stack_00000004 + 0x28) != 0) {
    puVar3 = &DAT_00680908;
    pcVar4 = local_6c;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pcVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
      pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
    }
    while( true ) {
      core_actor_cpp_FUN_0040e150();
      (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x28) + 0x154) + 0xd4))();
      iVar2 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffac0);
      if (0 < DAT_02f7a028) {
        puVar5 = &DAT_02f7a030;
        do {
          core_actor_cpp_CActorProperty_FUN_0040ea50();
          crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f79c20,"%s\t%s",puVar5,&DAT_02f79820);
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 0xec;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffac0,&DAT_02f79c20);
        } while (iVar2 < DAT_02f7a028);
      }
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_198,"Edit %s properties",*(undefined4 *)(in_stack_00000004 + 0x28))
      ;
      config_param2 = 0;
      iVar2 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070
                        ((CStrList *)&stack0xfffffac0,local_6c);
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffac0,acStack_198,iVar2,config_param2);
      if (iVar2 < 0) break;
      pcVar6 = local_6c;
      pcVar4 = &DAT_02f7a030 + iVar2 * 0xec;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      if (*(int *)(&DAT_02f7a080 + iVar2 * 0xec) != 0) {
        core_actor_cpp_AnotherActorParser_FUN_0040eed0();
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffac0,0,unaff_ESI,unaff_EDI,in_stack_fffffac0,
                 in_stack_fffffac4,(uint)in_stack_fffffac8);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffac0,0,unaff_ESI,unaff_EDI,in_stack_fffffac0,
               in_stack_fffffac4,(uint)in_stack_fffffac8);
  }
  return;
}


// Assembly code:
// 0053c730: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053c730
// 0053c731: PUSH EBP
// 0053c732: SUB ESP,0x538
// 0053c738: MOV EBX,dword ptr [ESP + 0x544]
//   XREF to: Stack[0x4] (READ)
// 0053c73f: PUSH 0x2f7a024
//   XREF to: 02f7a024 (DATA)
// 0053c744: CALL core_actor.cpp_FUN_0040e150
//   XREF to: 0040e150 (UNCONDITIONAL_CALL)
// 0053c749: MOV EDX,dword ptr [EBX + 0x28]
// 0053c74c: ADD ESP,0x4
// 0053c74f: TEST EDX,EDX
// 0053c751: JZ 0x0053c8bf
//   XREF to: 0053c8bf (CONDITIONAL_JUMP)
// 0053c757: PUSH EDI
// 0053c758: PUSH ESI
// 0053c759: MOV ECX,0x19
// 0053c75e: LEA EDI,[ESP + 0x4dc]
//   XREF to: Stack[-0x6c] (DATA)
// 0053c765: MOV ESI,0x680908
//   XREF to: 00680908 (DATA)
// 0053c76a: MOVSD.REP ES:EDI,ESI
//   XREF to: 00680908 (READ)
//   XREF to: 0068090c (READ)
// 0053c76c: MOV EBP,0x2f79820
//   XREF to: 02f79820 (DATA)
// 0053c771: PUSH 0x2f7a024
//   Label: LAB_0053c771
//   XREF to: 02f7a024 (DATA)
// 0053c776: CALL core_actor.cpp_FUN_0040e150
//   XREF to: 0040e150 (UNCONDITIONAL_CALL)
// 0053c77b: ADD ESP,0x4
// 0053c77e: MOV EAX,dword ptr [EBX + 0x28]
// 0053c781: PUSH 0x2f7a024
//   XREF to: 02f7a024 (DATA)
// 0053c786: MOV EDX,dword ptr [EAX + 0x154]
// 0053c78c: PUSH EAX
// 0053c78d: CALL dword ptr [EDX + 0xd4]
// 0053c793: ADD ESP,0x8
// 0053c796: LEA EAX,[ESP + 0x8]
// 0053c79a: PUSH EAX
// 0053c79b: XOR ESI,ESI
// 0053c79d: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053c7a2: MOV ECX,dword ptr [0x02f7a028]
//   XREF to: 02f7a028 (READ)
// 0053c7a8: ADD ESP,0x4
// 0053c7ab: TEST ECX,ECX
// 0053c7ad: JLE 0x0053c807
//   XREF to: 0053c807 (CONDITIONAL_JUMP)
// 0053c7af: MOV EDI,0x2f7a02c
//   XREF to: 02f7a02c (DATA)
// 0053c7b4: ADD EDI,0x4
// 0053c7b7: PUSH EBP
//   Label: LAB_0053c7b7
//   XREF to: 02f79820 (DATA)
// 0053c7b8: MOV EAX,dword ptr [EBX + 0x28]
// 0053c7bb: PUSH EAX
// 0053c7bc: IMUL EAX,ESI,0xec
// 0053c7c2: ADD EAX,0x2f7a02c
//   XREF to: 02f7a118 (PARAM)
//   XREF to: 02f7a02c (PARAM)
// 0053c7c7: PUSH EAX
//   XREF to: 02f7a02c (DATA)
//   XREF to: 02f7a118 (DATA)
// 0053c7c8: CALL core_actor.cpp_CActorProperty_FUN_0040ea50
//   XREF to: 0040ea50 (UNCONDITIONAL_CALL)
// 0053c7cd: ADD ESP,0xc
// 0053c7d0: PUSH EBP
//   XREF to: 02f79820 (DATA)
// 0053c7d1: PUSH EDI
//   XREF to: 02f7a030 (DATA)
// 0053c7d2: PUSH 0x63c881
//   XREF to: 0063c881 (DATA)
// 0053c7d7: PUSH 0x2f79c20
//   XREF to: 02f79c20 (DATA)
// 0053c7dc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053c7e1: ADD ESP,0x10
// 0053c7e4: PUSH 0x2f79c20
//   XREF to: 02f79c20 (DATA)
// 0053c7e9: LEA EAX,[ESP + 0xc]
// 0053c7ed: PUSH EAX
// 0053c7ee: INC ESI
// 0053c7ef: ADD EDI,0xec
// 0053c7f5: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053c7fa: MOV EDX,dword ptr [0x02f7a028]
//   XREF to: 02f7a028 (READ)
// 0053c800: ADD ESP,0x8
// 0053c803: CMP ESI,EDX
// 0053c805: JL 0x0053c7b7
//   XREF to: 0053c7b7 (CONDITIONAL_JUMP)
// 0053c807: MOV ECX,dword ptr [EBX + 0x28]
//   Label: LAB_0053c807
// 0053c80a: PUSH ECX
// 0053c80b: PUSH 0x63c887
//   XREF to: 0063c887 (DATA)
// 0053c810: LEA EAX,[ESP + 0x3b8]
// 0053c817: PUSH EAX
// 0053c818: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053c81d: ADD ESP,0xc
// 0053c820: PUSH 0x0
// 0053c822: LEA EAX,[ESP + 0x4e0]
// 0053c829: PUSH EAX
// 0053c82a: LEA EAX,[ESP + 0x10]
// 0053c82e: PUSH EAX
// 0053c82f: CALL shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070
//   XREF to: 004a3070 (UNCONDITIONAL_CALL)
// 0053c834: ADD ESP,0x8
// 0053c837: PUSH EAX
// 0053c838: LEA EAX,[ESP + 0x3b8]
// 0053c83f: PUSH EAX
// 0053c840: LEA EAX,[ESP + 0x14]
// 0053c844: PUSH EAX
// 0053c845: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053c84a: ADD ESP,0x10
// 0053c84d: TEST EAX,EAX
// 0053c84f: JL 0x0053c8ae
//   XREF to: 0053c8ae (CONDITIONAL_JUMP)
// 0053c851: IMUL ECX,EAX,0xec
// 0053c857: MOV EDX,0x2f7a02c
//   XREF to: 02f7a02c (DATA)
// 0053c85c: ADD EDX,ECX
// 0053c85e: LEA EDI,[ESP + 0x4dc]
// 0053c865: LEA ESI,[EDX + 0x4]
// 0053c868: PUSH EDI
// 0053c869: MOV AL,byte ptr [ESI]
//   Label: LAB_0053c869
//   XREF to: 02f7a030 (DATA)
//   XREF to: 02f7a032 (DATA)
// 0053c86b: MOV byte ptr [EDI],AL
// 0053c86d: CMP AL,0x0
// 0053c86f: JZ 0x0053c881
//   XREF to: 0053c881 (CONDITIONAL_JUMP)
// 0053c871: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 02f7a031 (DATA)
//   XREF to: 02f7a033 (DATA)
// 0053c874: ADD ESI,0x2
// 0053c877: MOV byte ptr [EDI + 0x1],AL
// 0053c87a: ADD EDI,0x2
// 0053c87d: CMP AL,0x0
// 0053c87f: JNZ 0x0053c869
//   XREF to: 0053c869 (CONDITIONAL_JUMP)
// 0053c881: POP EDI
//   Label: LAB_0053c881
// 0053c882: CMP dword ptr [ECX + 0x2f7a080],0x0
//   XREF to: 02f7a080 (DATA)
// 0053c889: JNZ 0x0053c89f
//   XREF to: 0053c89f (CONDITIONAL_JUMP)
// 0053c88b: PUSH 0x0
//   Label: LAB_0053c88b
// 0053c88d: LEA EAX,[ESP + 0xc]
// 0053c891: PUSH EAX
// 0053c892: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053c897: ADD ESP,0x8
// 0053c89a: JMP 0x0053c771
//   XREF to: 0053c771 (UNCONDITIONAL_JUMP)
// 0053c89f: MOV EDI,dword ptr [EBX + 0x28]
//   Label: LAB_0053c89f
// 0053c8a2: PUSH EDI
// 0053c8a3: PUSH EDX
// 0053c8a4: CALL core_actor.cpp_AnotherActorParser_FUN_0040eed0
//   XREF to: 0040eed0 (UNCONDITIONAL_CALL)
// 0053c8a9: ADD ESP,0x8
// 0053c8ac: JMP 0x0053c88b
//   XREF to: 0053c88b (UNCONDITIONAL_JUMP)
// 0053c8ae: PUSH 0x0
//   Label: LAB_0053c8ae
// 0053c8b0: LEA EAX,[ESP + 0xc]
// 0053c8b4: PUSH EAX
// 0053c8b5: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053c8ba: ADD ESP,0x8
// 0053c8bd: POP ESI
// 0053c8be: POP EDI
// 0053c8bf: ADD ESP,0x538
//   Label: LAB_0053c8bf
// 0053c8c5: POP EBP
// 0053c8c6: POP EBX
// 0053c8c7: RET
