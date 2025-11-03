// Name: core_bodypart.cpp_CBodyPart_load_FUN_00419880
// Address: 00419880
// Address Range: [[00419880, 00419bd9]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_CBodyPart_load_FUN_00419880()
// Globals:
//   TerminatedCString s_vertexCount_00615cf9
//   TerminatedCString s_triCount_00615d05
//   TerminatedCString s_textureCount_00615d0e
//   TerminatedCString s_d_d_d_00615d1b
//   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_00615d25
//   TerminatedCString s_anon_00615d49
//   TerminatedCString s_d_d_d_00615d53
//   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_00615d5e
//   TerminatedCString s_s_00615d81
//   TerminatedCString s_simBox_00615d88
//   TerminatedCString s_carriedByActor_00615d8f
//   TerminatedCString s_bloodType_00615d9e
//   TerminatedCString s_dontUseNormals_00615da8
//   TerminatedCString s_transparentGeometryFlag_00615db7
//   TerminatedCString s_renderInBackground_00615dcf
//   TerminatedCString s_dontPickMeUp_00615de2
//   undefined4 g_CBodyPartClassVersion
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeSimBox_FUN_0040bd70
//   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   core_bodypart.cpp_FUN_0041a050
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void core_bodypart_cpp_CBodyPart_load_FUN_00419880(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  CBodyPart *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&in_stack_00000004->base_actor);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004->field1_0x158 + 0x1c),"vertexCount");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004->field1_0x158 + 0x28),"triCount");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004->field1_0x158 + 0x34),"textureCount");
  if (g_ActorReadingMode == 1) {
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(in_stack_00000004);
    iVar3 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c)) {
      iVar6 = 0;
      do {
        iVar7 = *(int *)(in_stack_00000004->field1_0x158 + 0x20) + iVar6;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0xc;
        crt_stdio_c_fscanf_FUN_005fe7c0
                  (g_ActorDataFile,"%d,%d,%d\n","%d,%d,%d\n",iVar7,iVar7 + 4,iVar7 + 8);
      } while (iVar3 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c));
    }
    iVar3 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x28)) {
      iVar6 = 0;
      iVar7 = 0;
      do {
        iVar4 = *(int *)(in_stack_00000004->field1_0x158 + 0x2c) + iVar6;
        iVar6 = iVar6 + 0x3c;
        crt_stdio_c_fscanf_FUN_005fe7c0
                  (g_ActorDataFile,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n","\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(int *)(in_stack_00000004->field1_0x158 + 0x30) + iVar7,iVar4 + 0x18,
                   iVar4 + 0x1c,iVar4 + 0x20,iVar4 + 0x24,iVar4 + 0x28,iVar4 + 0x2c,iVar4 + 0x30,
                   iVar4 + 0x34,iVar4 + 0x38);
        iVar7 = iVar7 + 4;
        *(undefined4 *)(iVar4 + 4) = 3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_stack_00000004->field1_0x158 + 0x28));
    }
    iVar3 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x34)) {
      pcVar5 = in_stack_00000004->field1_0x158 + 0x40;
      do {
        iVar3 = iVar3 + 1;
        crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile," \"%[^\"]\"\n"," \"%[^\"]\"\n",pcVar5);
        pcVar5 = pcVar5 + 0x18;
      } while (iVar3 < *(int *)(in_stack_00000004->field1_0x158 + 0x34));
    }
    core_bodypart_cpp_FUN_0041a050();
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c)) {
      iVar6 = 0;
      do {
        iVar2 = *(int *)(in_stack_00000004->field1_0x158 + 0x20);
        iVar7 = iVar6 + 8;
        iVar4 = iVar6 + 4;
        puVar1 = (undefined4 *)(iVar6 + iVar2);
        iVar6 = iVar6 + 0xc;
        iVar3 = iVar3 + 1;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (g_ActorDataFile,"\t%d,%d,%d\n",*puVar1,*(undefined4 *)(iVar4 + iVar2),
                   *(undefined4 *)(iVar7 + iVar2));
      } while (iVar3 < *(int *)(in_stack_00000004->field1_0x158 + 0x1c));
    }
    iVar3 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x28)) {
      iVar6 = 0;
      iVar7 = 0;
      do {
        iVar4 = *(int *)(in_stack_00000004->field1_0x158 + 0x2c) + iVar6;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (g_ActorDataFile,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(undefined4 *)(iVar7 + *(int *)(in_stack_00000004->field1_0x158 + 0x30)),
                   *(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c),
                   *(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24),
                   *(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c),
                   *(undefined4 *)(iVar4 + 0x30),*(undefined4 *)(iVar4 + 0x34),
                   *(undefined4 *)(iVar4 + 0x38));
        iVar7 = iVar7 + 4;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x3c;
      } while (iVar3 < *(int *)(in_stack_00000004->field1_0x158 + 0x28));
    }
    iVar3 = 0;
    if (0 < *(int *)(in_stack_00000004->field1_0x158 + 0x34)) {
      pcVar5 = in_stack_00000004->field1_0x158 + 0x40;
      do {
        iVar3 = iVar3 + 1;
        crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"\t\"%s\"\n",pcVar5);
        pcVar5 = pcVar5 + 0x18;
      } while (iVar3 < *(int *)(in_stack_00000004->field1_0x158 + 0x34));
    }
  }
  if (1 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeSimBox_FUN_0040bd70
              ((CSimBox *)(in_stack_00000004->field1_0x158 + 0xb74),"simBox");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(in_stack_00000004->field1_0x158 + 0xdd0),"carriedByActor");
  }
  if (2 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004->field1_0x158 + 0xb60),"bloodType");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004->field1_0x158 + 0xb58),"dontUseNormals");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004->field1_0x158 + 0xb5c),"transparentGeometryFlag");
  }
  if (3 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)in_stack_00000004->field1_0x158,"renderInBackground");
  }
  if (4 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004->field1_0x158 + 0xb6c),"dontPickMeUp");
    return;
  }
  return;
}


// Assembly code:
// 00419880: PUSH EBX
//   Label: core_bodypart.cpp_CBodyPart_load_FUN_00419880
// 00419881: PUSH ESI
// 00419882: PUSH EDI
// 00419883: PUSH EBP
// 00419884: SUB ESP,0x8
// 00419887: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0041988b: PUSH EBX
// 0041988c: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 00419891: ADD ESP,0x4
// 00419894: PUSH 0x615cf9
//   XREF to: 00615cf9 (DATA)
// 00419899: LEA EAX,[EBX + 0x174]
// 0041989f: PUSH EAX
// 004198a0: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004198a5: ADD ESP,0x8
// 004198a8: PUSH 0x615d05
//   XREF to: 00615d05 (DATA)
// 004198ad: LEA EAX,[EBX + 0x180]
// 004198b3: PUSH EAX
// 004198b4: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004198b9: ADD ESP,0x8
// 004198bc: PUSH 0x615d0e
//   XREF to: 00615d0e (DATA)
// 004198c1: LEA EAX,[EBX + 0x18c]
// 004198c7: PUSH EAX
// 004198c8: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004198cd: MOV EDX,dword ptr [0x00822038]
//   XREF to: 00822038 (READ)
// 004198d3: ADD ESP,0x8
// 004198d6: CMP EDX,0x1
// 004198d9: JZ 0x00419a98
//   XREF to: 00419a98 (CONDITIONAL_JUMP)
// 004198df: MOV ECX,dword ptr [EBX + 0x174]
// 004198e5: XOR EBP,EBP
// 004198e7: TEST ECX,ECX
// 004198e9: JLE 0x00419930
//   XREF to: 00419930 (CONDITIONAL_JUMP)
// 004198eb: XOR EDI,EDI
// 004198ed: MOV ESI,dword ptr [EBX + 0x178]
//   Label: LAB_004198ed
// 004198f3: MOV EAX,dword ptr [EDI + ESI*0x1 + 0x8]
// 004198f7: PUSH EAX
// 004198f8: MOV EDX,dword ptr [EDI + ESI*0x1 + 0x4]
// 004198fc: PUSH EDX
// 004198fd: MOV ECX,dword ptr [EDI + ESI*0x1]
// 00419900: PUSH ECX
// 00419901: PUSH 0x615d53
//   XREF to: 00615d53 (DATA)
// 00419906: MOV ESI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0041990c: PUSH ESI
// 0041990d: ADD EDI,0xc
// 00419910: INC EBP
// 00419911: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00419916: MOV EAX,dword ptr [EBX + 0x174]
// 0041991c: ADD ESP,0x14
// 0041991f: CMP EBP,EAX
// 00419921: JL 0x004198ed
//   XREF to: 004198ed (CONDITIONAL_JUMP)
// 00419923: LEA EAX,[EAX]
// 00419929: LEA EDX,[EDX]
// 0041992f: NOP
// 00419930: MOV EDX,dword ptr [EBX + 0x180]
//   Label: LAB_00419930
// 00419936: XOR EBP,EBP
// 00419938: TEST EDX,EDX
// 0041993a: JLE 0x004199b0
//   XREF to: 004199b0 (CONDITIONAL_JUMP)
// 0041993c: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x18] (DATA)
// 0041993f: XOR EDI,EDI
// 00419941: MOV ECX,dword ptr [ESP]
//   Label: LAB_00419941
//   XREF to: Stack[-0x18] (DATA)
// 00419944: MOV ESI,dword ptr [EBX + 0x184]
// 0041994a: ADD ESI,ECX
// 0041994c: MOV EAX,dword ptr [ESI + 0x38]
// 0041994f: PUSH EAX
// 00419950: MOV EDX,dword ptr [ESI + 0x34]
// 00419953: PUSH EDX
// 00419954: MOV ECX,dword ptr [ESI + 0x30]
// 00419957: PUSH ECX
// 00419958: MOV EAX,dword ptr [ESI + 0x2c]
// 0041995b: PUSH EAX
// 0041995c: MOV EDX,dword ptr [ESI + 0x28]
// 0041995f: PUSH EDX
// 00419960: MOV ECX,dword ptr [ESI + 0x24]
// 00419963: PUSH ECX
// 00419964: MOV EAX,dword ptr [ESI + 0x20]
// 00419967: PUSH EAX
// 00419968: MOV EDX,dword ptr [ESI + 0x1c]
// 0041996b: PUSH EDX
// 0041996c: MOV ECX,dword ptr [ESI + 0x18]
// 0041996f: MOV EAX,dword ptr [EBX + 0x188]
// 00419975: PUSH ECX
// 00419976: MOV ESI,dword ptr [EDI + EAX*0x1]
// 00419979: PUSH ESI
// 0041997a: PUSH 0x615d5e
//   XREF to: 00615d5e (DATA)
// 0041997f: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 00419984: PUSH EAX
// 00419985: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0041998a: ADD ESP,0x30
// 0041998d: ADD EDI,0x4
// 00419990: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00419993: INC EBP
// 00419994: ADD EDX,0x3c
// 00419997: MOV ECX,dword ptr [EBX + 0x180]
// 0041999d: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 004199a0: CMP EBP,ECX
// 004199a2: JL 0x00419941
//   XREF to: 00419941 (CONDITIONAL_JUMP)
// 004199a4: LEA EAX,[EAX]
// 004199aa: LEA EDX,[EDX]
// 004199b0: MOV ESI,dword ptr [EBX + 0x18c]
//   Label: LAB_004199b0
// 004199b6: XOR EDI,EDI
// 004199b8: TEST ESI,ESI
// 004199ba: JLE 0x004199f0
//   XREF to: 004199f0 (CONDITIONAL_JUMP)
// 004199bc: LEA ESI,[EBX + 0x198]
// 004199c2: PUSH ESI
//   Label: LAB_004199c2
// 004199c3: PUSH 0x615d81
//   XREF to: 00615d81 (DATA)
// 004199c8: MOV EDX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 004199ce: PUSH EDX
// 004199cf: INC EDI
// 004199d0: ADD ESI,0x18
// 004199d3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004199d8: MOV ECX,dword ptr [EBX + 0x18c]
// 004199de: ADD ESP,0xc
// 004199e1: CMP EDI,ECX
// 004199e3: JL 0x004199c2
//   XREF to: 004199c2 (CONDITIONAL_JUMP)
// 004199e5: LEA EAX,[EAX]
// 004199eb: LEA EDX,[EDX]
// 004199ee: MOV EBX,EBX
// 004199f0: CMP dword ptr [0x0066e52c],0x2
//   Label: LAB_004199f0
//   XREF to: 0066e52c (READ)
// 004199f7: JL 0x00419a21
//   XREF to: 00419a21 (CONDITIONAL_JUMP)
// 004199f9: PUSH 0x615d88
//   XREF to: 00615d88 (DATA)
// 004199fe: LEA EAX,[EBX + 0xccc]
// 00419a04: PUSH EAX
// 00419a05: CALL core_actor.cpp_serializeSimBox_FUN_0040bd70
//   XREF to: 0040bd70 (UNCONDITIONAL_CALL)
// 00419a0a: ADD ESP,0x8
// 00419a0d: PUSH 0x615d8f
//   XREF to: 00615d8f (DATA)
// 00419a12: LEA EAX,[EBX + 0xf28]
// 00419a18: PUSH EAX
// 00419a19: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 00419a1e: ADD ESP,0x8
// 00419a21: CMP dword ptr [0x0066e52c],0x3
//   Label: LAB_00419a21
//   XREF to: 0066e52c (READ)
// 00419a28: JL 0x00419a66
//   XREF to: 00419a66 (CONDITIONAL_JUMP)
// 00419a2a: PUSH 0x615d9e
//   XREF to: 00615d9e (DATA)
// 00419a2f: LEA EAX,[EBX + 0xcb8]
// 00419a35: PUSH EAX
// 00419a36: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00419a3b: ADD ESP,0x8
// 00419a3e: PUSH 0x615da8
//   XREF to: 00615da8 (DATA)
// 00419a43: LEA EAX,[EBX + 0xcb0]
// 00419a49: PUSH EAX
// 00419a4a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00419a4f: ADD ESP,0x8
// 00419a52: PUSH 0x615db7
//   XREF to: 00615db7 (DATA)
// 00419a57: LEA EAX,[EBX + 0xcb4]
// 00419a5d: PUSH EAX
// 00419a5e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00419a63: ADD ESP,0x8
// 00419a66: CMP dword ptr [0x0066e52c],0x4
//   Label: LAB_00419a66
//   XREF to: 0066e52c (READ)
// 00419a6d: JL 0x00419a83
//   XREF to: 00419a83 (CONDITIONAL_JUMP)
// 00419a6f: PUSH 0x615dcf
//   XREF to: 00615dcf (DATA)
// 00419a74: LEA EAX,[EBX + 0x158]
// 00419a7a: PUSH EAX
// 00419a7b: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00419a80: ADD ESP,0x8
// 00419a83: CMP dword ptr [0x0066e52c],0x5
//   Label: LAB_00419a83
//   XREF to: 0066e52c (READ)
// 00419a8a: JGE 0x00419bbe
//   XREF to: 00419bbe (CONDITIONAL_JUMP)
// 00419a90: ADD ESP,0x8
// 00419a93: POP EBP
// 00419a94: POP EDI
// 00419a95: POP ESI
// 00419a96: POP EBX
// 00419a97: RET
// 00419a98: MOV ESI,dword ptr [EBX + 0x180]
//   Label: LAB_00419a98
// 00419a9e: PUSH ESI
// 00419a9f: MOV EDI,dword ptr [EBX + 0x174]
// 00419aa5: PUSH EDI
// 00419aa6: PUSH EBX
// 00419aa7: CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   XREF to: 004191d0 (UNCONDITIONAL_CALL)
// 00419aac: XOR EDI,EDI
// 00419aae: MOV EBP,dword ptr [EBX + 0x174]
// 00419ab4: ADD ESP,0xc
// 00419ab7: TEST EBP,EBP
// 00419ab9: JLE 0x00419af0
//   XREF to: 00419af0 (CONDITIONAL_JUMP)
// 00419abb: XOR EBP,EBP
// 00419abd: MOV ESI,dword ptr [EBX + 0x178]
//   Label: LAB_00419abd
// 00419ac3: ADD ESI,EBP
// 00419ac5: LEA EAX,[ESI + 0x8]
// 00419ac8: PUSH EAX
// 00419ac9: LEA EAX,[ESI + 0x4]
// 00419acc: PUSH EAX
// 00419acd: PUSH ESI
// 00419ace: PUSH 0x615d1b
//   XREF to: 00615d1b (DATA)
// 00419ad3: MOV ESI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 00419ad9: PUSH ESI
// 00419ada: INC EDI
// 00419adb: ADD EBP,0xc
// 00419ade: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00419ae3: MOV EAX,dword ptr [EBX + 0x174]
// 00419ae9: ADD ESP,0x14
// 00419aec: CMP EDI,EAX
// 00419aee: JL 0x00419abd
//   XREF to: 00419abd (CONDITIONAL_JUMP)
// 00419af0: XOR EDX,EDX
//   Label: LAB_00419af0
// 00419af2: MOV ECX,dword ptr [EBX + 0x180]
// 00419af8: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00419afc: TEST ECX,ECX
// 00419afe: JLE 0x00419b70
//   XREF to: 00419b70 (CONDITIONAL_JUMP)
// 00419b04: XOR EBP,EBP
// 00419b06: XOR EDI,EDI
// 00419b08: MOV ESI,dword ptr [EBX + 0x184]
//   Label: LAB_00419b08
// 00419b0e: ADD ESI,EBP
// 00419b10: LEA EAX,[ESI + 0x38]
// 00419b13: PUSH EAX
// 00419b14: LEA EAX,[ESI + 0x34]
// 00419b17: PUSH EAX
// 00419b18: LEA EAX,[ESI + 0x30]
// 00419b1b: PUSH EAX
// 00419b1c: LEA EAX,[ESI + 0x2c]
// 00419b1f: PUSH EAX
// 00419b20: LEA EAX,[ESI + 0x28]
// 00419b23: PUSH EAX
// 00419b24: LEA EAX,[ESI + 0x24]
// 00419b27: PUSH EAX
// 00419b28: LEA EAX,[ESI + 0x20]
// 00419b2b: PUSH EAX
// 00419b2c: LEA EAX,[ESI + 0x1c]
// 00419b2f: PUSH EAX
// 00419b30: LEA EAX,[ESI + 0x18]
// 00419b33: PUSH EAX
// 00419b34: MOV EAX,dword ptr [EBX + 0x188]
// 00419b3a: ADD EAX,EDI
// 00419b3c: PUSH EAX
// 00419b3d: PUSH 0x615d25
//   XREF to: 00615d25 (DATA)
// 00419b42: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 00419b47: PUSH EAX
// 00419b48: ADD EBP,0x3c
// 00419b4b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00419b50: ADD ESP,0x30
// 00419b53: ADD EDI,0x4
// 00419b56: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00419b5a: MOV dword ptr [ESI + 0x4],0x3
// 00419b61: INC EDX
// 00419b62: MOV ECX,dword ptr [EBX + 0x180]
// 00419b68: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00419b6c: CMP EDX,ECX
// 00419b6e: JL 0x00419b08
//   XREF to: 00419b08 (CONDITIONAL_JUMP)
// 00419b70: MOV ESI,dword ptr [EBX + 0x18c]
//   Label: LAB_00419b70
// 00419b76: XOR EDI,EDI
// 00419b78: TEST ESI,ESI
// 00419b7a: JLE 0x00419bb0
//   XREF to: 00419bb0 (CONDITIONAL_JUMP)
// 00419b7c: LEA ESI,[EBX + 0x198]
// 00419b82: PUSH ESI
//   Label: LAB_00419b82
// 00419b83: PUSH 0x615d49
//   XREF to: 00615d49 (DATA)
// 00419b88: MOV EBP,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 00419b8e: PUSH EBP
// 00419b8f: INC EDI
// 00419b90: ADD ESI,0x18
// 00419b93: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00419b98: MOV EAX,dword ptr [EBX + 0x18c]
// 00419b9e: ADD ESP,0xc
// 00419ba1: CMP EDI,EAX
// 00419ba3: JL 0x00419b82
//   XREF to: 00419b82 (CONDITIONAL_JUMP)
// 00419ba5: LEA EAX,[EAX]
// 00419bab: LEA EDX,[EDX]
// 00419bae: MOV EBX,EBX
// 00419bb0: PUSH EBX
//   Label: LAB_00419bb0
// 00419bb1: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 00419bb6: ADD ESP,0x4
// 00419bb9: JMP 0x004199f0
//   XREF to: 004199f0 (UNCONDITIONAL_JUMP)
// 00419bbe: PUSH 0x615de2
//   Label: LAB_00419bbe
//   XREF to: 00615de2 (DATA)
// 00419bc3: ADD EBX,0xcc4
// 00419bc9: PUSH EBX
// 00419bca: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00419bcf: ADD ESP,0x8
// 00419bd2: ADD ESP,0x8
// 00419bd5: POP EBP
// 00419bd6: POP EDI
// 00419bd7: POP ESI
// 00419bd8: POP EBX
// 00419bd9: RET
