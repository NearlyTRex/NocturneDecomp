// Name: core_frankgen.cpp_FUN_004d17b0
// Address: 004d17b0
// Address Range: [[004d17b0, 004d19d4]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d17b0()
// Globals:
//   void* switchdataD_004d178c = 004d17e3
//   TerminatedCString s_frankxbed_pth_0062a8fd
//   undefined4 s_rankxbed.pth_0062a8fe
//   undefined4 s_ankxbed.pth_0062a8ff
//   undefined4 s_nkxbed.pth_0062a900
//   TerminatedCString s_frankxbody_kfm_0062a90b
//   TerminatedCString s_frankxcrn1_kfm_0062a91a
//   TerminatedCString s_frankxcrn2_kfm_0062a929
//   TerminatedCString s_frankxcrn3_kfm_0062a938
//   TerminatedCString s_frankxstch_kfm_0062a947
//   TerminatedCString s_frankxarm_kfm_0062a956
//   TerminatedCString s_frankxflap1_kfm_0062a964
//   TerminatedCString s_frankxflap1_pth_0062a974
//   undefined4 s_rankxflap1.pth_0062a975
//   undefined4 s_ankxflap1.pth_0062a976
//   undefined4 s_nkxflap1.pth_0062a977
//   TerminatedCString s_frankxflap2_kfm_0062a984
//   TerminatedCString s_frankxflap2_pth_0062a994
//   undefined4 s_rankxflap2.pth_0062a995
//   undefined4 s_ankxflap2.pth_0062a996
//   undefined4 s_nkxflap2.pth_0062a997
//   TerminatedCString s_frankxramp_kfm_0062a9a4
//   TerminatedCString s_frankxramp_pth_0062a9b3
//   undefined4 s_rankxramp.pth_0062a9b4
//   undefined4 s_ankxramp.pth_0062a9b5
//   undefined4 s_nkxramp.pth_0062a9b6
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   core_course.cpp_CCourse_load_FUN_00442580
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_frankgen.cpp_LoadModel_FUN_004d2190

#include "nocturne.h"

/* Signature: undefined1 actors_other_frankgen.cpp_FUN_004d17b0(undefined4 param_1) */

void core_frankgen_cpp_FUN_004d17b0(void)

{
  float *this_ptr;
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  in_stack_00000004[1].actor_name[8] = '\0';
  uVar2 = *(undefined4 *)in_stack_00000004[1].actor_name;
  in_stack_00000004[3].create_event[8] = '\0';
  in_stack_00000004[3].create_event[9] = '\0';
  in_stack_00000004[3].create_event[10] = '\0';
  in_stack_00000004[3].create_event[0xb] = '\0';
  switch(uVar2) {
  case 0:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxbed.kfm");
    pcVar3 = "frankxbed.pth";
    pcVar4 = in_stack_00000004[1].actor_name + 8;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    this_ptr = &in_stack_00000004[2].orient_matrix.m[2].z;
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)this_ptr,"frankxbody.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
              ((CKeyFramedModelInstance *)this_ptr);
    break;
  case 1:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxcrn1.kfm");
    in_stack_00000004[3].create_event[8] = -0x52;
    in_stack_00000004[3].create_event[9] = '\0';
    in_stack_00000004[3].create_event[10] = '\0';
    in_stack_00000004[3].create_event[0xb] = '\0';
    break;
  case 2:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxcrn2.kfm");
    in_stack_00000004[3].create_event[8] = -0x74;
    in_stack_00000004[3].create_event[9] = '\0';
    in_stack_00000004[3].create_event[10] = '\0';
    in_stack_00000004[3].create_event[0xb] = '\0';
    break;
  case 3:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxcrn3.kfm");
    in_stack_00000004[3].create_event[8] = 'j';
    in_stack_00000004[3].create_event[9] = '\x01';
    in_stack_00000004[3].create_event[10] = '\0';
    in_stack_00000004[3].create_event[0xb] = '\0';
    break;
  case 4:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxstch.kfm");
    break;
  case 5:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxarm.kfm");
    break;
  case 6:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxflap1.kfm");
    pcVar3 = "frankxflap1.pth";
    pcVar4 = in_stack_00000004[1].actor_name + 8;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    break;
  case 7:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxflap2.kfm");
    pcVar3 = "frankxflap2.pth";
    pcVar4 = in_stack_00000004[1].actor_name + 8;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    break;
  case 8:
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               "frankxramp.kfm");
    pcVar3 = "frankxramp.pth";
    pcVar4 = in_stack_00000004[1].actor_name + 8;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id);
  if (in_stack_00000004[1].actor_name[8] != '\0') {
    core_course_cpp_CCourse_load_FUN_00442580
              ((CCourse *)&in_stack_00000004[2].orient_matrix.m[1].z,
               in_stack_00000004[1].actor_name + 8);
    core_frankgen_cpp_LoadModel_FUN_004d2190();
    return;
  }
  core_frankgen_cpp_LoadModel_FUN_004d2190();
  return;
}


// Assembly code:
// 004d17b0: PUSH EBX
//   Label: core_frankgen.cpp_FUN_004d17b0
// 004d17b1: PUSH ESI
// 004d17b2: PUSH EDI
// 004d17b3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004d17b7: PUSH EBX
// 004d17b8: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
// 004d17bd: MOV byte ptr [EBX + 0x160],0x0
// 004d17c4: ADD ESP,0x4
// 004d17c7: MOV EDI,dword ptr [EBX + 0x158]
// 004d17cd: MOV dword ptr [EBX + 0x488],0x0
// 004d17d7: CMP EDI,0x8
// 004d17da: JA 0x004d1839
//   XREF to: 004d1839 (CONDITIONAL_JUMP)
// 004d17dc: JMP dword ptr [EDI*0x4 + 0x4d178c]
//   Label: switchD
//   XREF to: 004d17e3 (COMPUTED_JUMP)
//   XREF to: 004d1863 (COMPUTED_JUMP)
//   XREF to: 004d1883 (COMPUTED_JUMP)
//   XREF to: 004d18a3 (COMPUTED_JUMP)
//   XREF to: 004d18c6 (COMPUTED_JUMP)
//   XREF to: 004d18df (COMPUTED_JUMP)
//   XREF to: 004d18f8 (COMPUTED_JUMP)
//   XREF to: 004d1936 (COMPUTED_JUMP)
//   XREF to: 004d1974 (COMPUTED_JUMP)
//   XREF to: 004d178c (DATA)
// 004d17e3: PUSH 0x62a8ef
//   Label: caseD_0
//   XREF to: 0062a8ef (DATA)
// 004d17e8: LEA EDI,[EBX + 0x184]
// 004d17ee: PUSH EDI
// 004d17ef: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004d17f4: ADD ESP,0x8
// 004d17f7: MOV ESI,0x62a8fd
//   XREF to: 0062a8fd (DATA)
// 004d17fc: LEA EDI,[EBX + 0x160]
// 004d1802: PUSH EDI
// 004d1803: MOV AL,byte ptr [ESI]
//   Label: LAB_004d1803
//   XREF to: 0062a8fd (READ)
//   XREF to: 0062a8ff (READ)
// 004d1805: MOV byte ptr [EDI],AL
// 004d1807: CMP AL,0x0
// 004d1809: JZ 0x004d181b
//   XREF to: 004d181b (CONDITIONAL_JUMP)
// 004d180b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062a8fe (READ)
//   XREF to: 0062a900 (READ)
// 004d180e: ADD ESI,0x2
// 004d1811: MOV byte ptr [EDI + 0x1],AL
// 004d1814: ADD EDI,0x2
// 004d1817: CMP AL,0x0
// 004d1819: JNZ 0x004d1803
//   XREF to: 004d1803 (CONDITIONAL_JUMP)
// 004d181b: POP EDI
//   Label: LAB_004d181b
// 004d181c: PUSH 0x62a90b
//   XREF to: 0062a90b (DATA)
// 004d1821: LEA EDI,[EBX + 0x30c]
// 004d1827: PUSH EDI
// 004d1828: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004d182d: ADD ESP,0x8
// 004d1830: PUSH EDI
// 004d1831: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004d1836: ADD ESP,0x4
// 004d1839: LEA EDI,[EBX + 0x184]
//   Label: default
// 004d183f: PUSH EDI
// 004d1840: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004d1845: MOV AH,byte ptr [EBX + 0x160]
// 004d184b: ADD ESP,0x4
// 004d184e: TEST AH,AH
// 004d1850: JNZ 0x004d19b2
//   XREF to: 004d19b2 (CONDITIONAL_JUMP)
// 004d1856: PUSH EBX
// 004d1857: CALL core_frankgen.cpp_LoadModel_FUN_004d2190
//   XREF to: 004d2190 (UNCONDITIONAL_CALL)
// 004d185c: ADD ESP,0x4
// 004d185f: POP EDI
// 004d1860: POP ESI
// 004d1861: POP EBX
// 004d1862: RET
// 004d1863: PUSH 0x62a91a
//   Label: caseD_1
//   XREF to: 0062a91a (DATA)
// 004d1868: LEA EDI,[EBX + 0x184]
// 004d186e: PUSH EDI
// 004d186f: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004d1874: ADD ESP,0x8
// 004d1877: MOV dword ptr [EBX + 0x488],0xae
// 004d1881: JMP 0x004d1839
//   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
// 004d1883: PUSH 0x62a929
//   Label: caseD_2
//   XREF to: 0062a929 (DATA)
// 004d1888: LEA EDI,[EBX + 0x184]
// 004d188e: PUSH EDI
// 004d188f: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004d1894: ADD ESP,0x8
// 004d1897: MOV dword ptr [EBX + 0x488],0x8c
// 004d18a1: JMP 0x004d1839
//   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
// 004d18a3: PUSH 0x62a938
//   Label: caseD_3
//   XREF to: 0062a938 (DATA)
// 004d18a8: LEA EDI,[EBX + 0x184]
// 004d18ae: PUSH EDI
// 004d18af: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004d18b4: ADD ESP,0x8
// 004d18b7: MOV dword ptr [EBX + 0x488],0x16a
// 004d18c1: JMP 0x004d1839
//   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
// 004d18c6: PUSH 0x62a947
//   Label: caseD_4
//   XREF to: 0062a947 (DATA)
// 004d18cb: LEA EDI,[EBX + 0x184]
// 004d18d1: PUSH EDI
// 004d18d2: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004d18d7: ADD ESP,0x8
// 004d18da: JMP 0x004d1839
//   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
// 004d18df: PUSH 0x62a956
//   Label: caseD_5
//   XREF to: 0062a956 (DATA)
// 004d18e4: LEA EDI,[EBX + 0x184]
// 004d18ea: PUSH EDI
// 004d18eb: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004d18f0: ADD ESP,0x8
// 004d18f3: JMP 0x004d1839
//   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
// 004d18f8: PUSH 0x62a964
//   Label: caseD_6
//   XREF to: 0062a964 (DATA)
// 004d18fd: LEA EDI,[EBX + 0x184]
// 004d1903: PUSH EDI
// 004d1904: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004d1909: ADD ESP,0x8
// 004d190c: MOV ESI,0x62a974
//   XREF to: 0062a974 (DATA)
// 004d1911: LEA EDI,[EBX + 0x160]
// 004d1917: PUSH EDI
// 004d1918: MOV AL,byte ptr [ESI]
//   Label: LAB_004d1918
//   XREF to: 0062a974 (READ)
//   XREF to: 0062a976 (READ)
// 004d191a: MOV byte ptr [EDI],AL
// 004d191c: CMP AL,0x0
// 004d191e: JZ 0x004d1930
//   XREF to: 004d1930 (CONDITIONAL_JUMP)
// 004d1920: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062a975 (READ)
//   XREF to: 0062a977 (READ)
// 004d1923: ADD ESI,0x2
// 004d1926: MOV byte ptr [EDI + 0x1],AL
// 004d1929: ADD EDI,0x2
// 004d192c: CMP AL,0x0
// 004d192e: JNZ 0x004d1918
//   XREF to: 004d1918 (CONDITIONAL_JUMP)
// 004d1930: POP EDI
//   Label: LAB_004d1930
// 004d1931: JMP 0x004d1839
//   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
// 004d1936: PUSH 0x62a984
//   Label: caseD_7
//   XREF to: 0062a984 (DATA)
// 004d193b: LEA EDI,[EBX + 0x184]
// 004d1941: PUSH EDI
// 004d1942: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004d1947: ADD ESP,0x8
// 004d194a: MOV ESI,0x62a994
//   XREF to: 0062a994 (DATA)
// 004d194f: LEA EDI,[EBX + 0x160]
// 004d1955: PUSH EDI
// 004d1956: MOV AL,byte ptr [ESI]
//   Label: LAB_004d1956
//   XREF to: 0062a994 (READ)
//   XREF to: 0062a996 (READ)
// 004d1958: MOV byte ptr [EDI],AL
// 004d195a: CMP AL,0x0
// 004d195c: JZ 0x004d196e
//   XREF to: 004d196e (CONDITIONAL_JUMP)
// 004d195e: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062a995 (READ)
//   XREF to: 0062a997 (READ)
// 004d1961: ADD ESI,0x2
// 004d1964: MOV byte ptr [EDI + 0x1],AL
// 004d1967: ADD EDI,0x2
// 004d196a: CMP AL,0x0
// 004d196c: JNZ 0x004d1956
//   XREF to: 004d1956 (CONDITIONAL_JUMP)
// 004d196e: POP EDI
//   Label: LAB_004d196e
// 004d196f: JMP 0x004d1839
//   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
// 004d1974: PUSH 0x62a9a4
//   Label: caseD_8
//   XREF to: 0062a9a4 (DATA)
// 004d1979: LEA EDI,[EBX + 0x184]
// 004d197f: PUSH EDI
// 004d1980: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004d1985: ADD ESP,0x8
// 004d1988: MOV ESI,0x62a9b3
//   XREF to: 0062a9b3 (DATA)
// 004d198d: LEA EDI,[EBX + 0x160]
// 004d1993: PUSH EDI
// 004d1994: MOV AL,byte ptr [ESI]
//   Label: LAB_004d1994
//   XREF to: 0062a9b3 (READ)
//   XREF to: 0062a9b5 (READ)
// 004d1996: MOV byte ptr [EDI],AL
// 004d1998: CMP AL,0x0
// 004d199a: JZ 0x004d19ac
//   XREF to: 004d19ac (CONDITIONAL_JUMP)
// 004d199c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062a9b4 (READ)
//   XREF to: 0062a9b6 (READ)
// 004d199f: ADD ESI,0x2
// 004d19a2: MOV byte ptr [EDI + 0x1],AL
// 004d19a5: ADD EDI,0x2
// 004d19a8: CMP AL,0x0
// 004d19aa: JNZ 0x004d1994
//   XREF to: 004d1994 (CONDITIONAL_JUMP)
// 004d19ac: POP EDI
//   Label: LAB_004d19ac
// 004d19ad: JMP 0x004d1839
//   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
// 004d19b2: LEA EDI,[EBX + 0x160]
//   Label: LAB_004d19b2
// 004d19b8: PUSH EDI
// 004d19b9: LEA EDI,[EBX + 0x300]
// 004d19bf: PUSH EDI
// 004d19c0: CALL core_course.cpp_CCourse_load_FUN_00442580
//   XREF to: 00442580 (UNCONDITIONAL_CALL)
// 004d19c5: ADD ESP,0x8
// 004d19c8: PUSH EBX
// 004d19c9: CALL core_frankgen.cpp_LoadModel_FUN_004d2190
//   XREF to: 004d2190 (UNCONDITIONAL_CALL)
// 004d19ce: ADD ESP,0x4
// 004d19d1: POP EDI
// 004d19d2: POP ESI
// 004d19d3: POP EBX
// 004d19d4: RET
