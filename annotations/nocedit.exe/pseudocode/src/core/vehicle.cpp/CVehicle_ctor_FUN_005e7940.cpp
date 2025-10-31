// Name: core_vehicle.cpp_CVehicle_ctor_FUN_005e7940
// Address: 005e7940
// Address Range: [[005e7940, 005e7b8a]]
// Convention: __cdecl
// Signature: CVehicle * core_vehicle.cpp_CVehicle_ctor_FUN_005e7940(CVehicle * this_ptr)
// Cross-references:
//   core_vehicle.cpp_FUN_005e7900 (005e7900) at 005e791a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_32ford_kfm_00656dcb
//   TerminatedCString s_s_32ltire_kfm_00656dd6
//   TerminatedCString s_s_32ltire_kfm_00656de2
//   TerminatedCString s_s_32rtire_kfm_00656dee
//   TerminatedCString s_s_32rtire_kfm_00656dfa
//   TerminatedCString s_chicpath_pth_00656e06
//   undefined4 s_hicpath.pth_00656e07
//   undefined4 s_icpath.pth_00656e08
//   undefined4 s_cpath.pth_00656e09
//   WatcomTypeInfo g_CKeyFramedModelInstanceTypeInfo
//   CDemonActor_vtable PTR_core_vehicle.cpp_FUN_00665064
//   WatcomTypeInfo g_CTireTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_course.cpp_CCourse_ctor_FUN_004424c0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_CVehicle_ctor_FUN_005e7940(CVehicle *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  void *pvVar4;
  CCourse *pCVar5;
  char *pcVar6;
  int *piVar7;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pvVar4 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (pCVar3 + 1,4,&g_CKeyFramedModelInstanceTypeInfo);
  pvVar4 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar4 + 0x668),4,&g_CTireTypeInfo);
  pCVar5 = core_course_cpp_CCourse_ctor_FUN_004424c0((CCourse *)((int)pvVar4 + 0x6e4));
  pCVar5[-0x13c].frame_list = (CCourseFrameList *)&PTR_core_vehicle_cpp_FUN_00665064;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar5[-0x13c].loop,"32ford.kfm");
  pCVar5[-0x94].loop = 4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar5[-0x92].loop,"32ltire.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar5[-0x49].frame_list,"32ltire.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(pCVar5 + -0x6d),"32rtire.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar5[-0x25].loop,"32rtire.kfm");
  pCVar5[-0x93].len = -0x3fe00000;
  pCVar5[-0x93].frame_list = (CCourseFrameList *)0xc0200000;
  pCVar5[-0x93].loop = 0x40a00000;
  pCVar5[-0x92].len = 0x3fa00000;
  pCVar5[-0x92].frame_list = (CCourseFrameList *)0x3e800000;
  pCVar5[-0x6f].frame_list = (CCourseFrameList *)0x40200000;
  pCVar5[-0x6f].loop = -0x3fe00000;
  pCVar5[-0x6e].len = 0x40a00000;
  pCVar5[-0x6e].frame_list = (CCourseFrameList *)0x3fa00000;
  pCVar5[-0x6e].loop = 0x3e800000;
  pCVar5[-0x4b].loop = -0x3fe00000;
  pCVar5[-0x4a].len = -0x3fe00000;
  pCVar5[-0x4a].frame_list = (CCourseFrameList *)0xc0900000;
  pCVar5[-0x4a].loop = 0x3fa00000;
  pCVar5[-0x49].len = 0x3e800000;
  pCVar5[-0x26].len = 0x40200000;
  pCVar5[-0x26].frame_list = (CCourseFrameList *)0xc0200000;
  pCVar5[-0x26].loop = -0x3f700000;
  pCVar5[-0x25].len = 0x3fa00000;
  pCVar5[-0x25].frame_list = (CCourseFrameList *)0x3e800000;
  pCVar5[-0x96].len = 0x44fa0000;
  pCVar5[-0x9c].loop = 0;
  pCVar5[-0x9c].frame_list = (CCourseFrameList *)pCVar5[-0x9c].loop;
  pCVar5[-0x9c].len = (int)pCVar5[-0x9c].frame_list;
  pCVar5[-0x9d].loop = 0;
  pCVar5[-0x9d].frame_list = (CCourseFrameList *)pCVar5[-0x9d].loop;
  pCVar5[-0x9d].len = (int)pCVar5[-0x9d].frame_list;
  pCVar5[-0x99].loop = 0;
  pcVar6 = "chicpath.pth";
  pCVar5[-0x99].frame_list = (CCourseFrameList *)pCVar5[-0x99].loop;
  pCVar5[-0x99].len = (int)pCVar5[-0x99].frame_list;
  pCVar5[1].len = 0;
  piVar7 = &pCVar5[1].loop;
  pCVar5[1].frame_list = (CCourseFrameList *)0x42c80000;
  do {
    cVar1 = *pcVar6;
    *(char *)piVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    *(char *)((int)piVar7 + 1) = cVar1;
    piVar7 = (int *)((int)piVar7 + 2);
  } while (cVar1 != '\0');
  pCVar5[6].frame_list = (CCourseFrameList *)0x0;
  pCVar5[6].loop = 0;
  pCVar5[7].len = 0;
  return (CVehicle *)(pCVar5 + -0x158);
}


// Assembly code:
// 005e7940: PUSH EBX
//   Label: core_vehicle.cpp_CVehicle_ctor_FUN_005e7940
// 005e7941: PUSH ESI
// 005e7942: PUSH EDI
// 005e7943: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e7947: PUSH EBX
// 005e7948: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005e794d: ADD ESP,0x4
// 005e7950: ADD EAX,0x158
// 005e7955: PUSH EAX
// 005e7956: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005e795b: ADD ESP,0x4
// 005e795e: PUSH 0x65b770
//   XREF to: 0065b770 (DATA)
// 005e7963: PUSH 0x4
// 005e7965: ADD EAX,0x17c
// 005e796a: PUSH EAX
// 005e796b: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005e7970: ADD ESP,0xc
// 005e7973: PUSH 0x665150
//   XREF to: 00665150 (DATA)
// 005e7978: PUSH 0x4
// 005e797a: ADD EAX,0x668
// 005e797f: PUSH EAX
// 005e7980: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005e7985: ADD ESP,0xc
// 005e7988: ADD EAX,0x6e4
// 005e798d: PUSH EAX
// 005e798e: CALL core_course.cpp_CCourse_ctor_FUN_004424c0
//   XREF to: 004424c0 (UNCONDITIONAL_CALL)
// 005e7993: ADD ESP,0x4
// 005e7996: LEA EBX,[EAX + 0xffffefe0]
// 005e799c: PUSH 0x656dcb
//   XREF to: 00656dcb (DATA)
// 005e79a1: LEA EAX,[EBX + 0x158]
// 005e79a7: PUSH EAX
// 005e79a8: MOV dword ptr [EBX + 0x154],0x665064
//   XREF to: 00665064 (DATA)
// 005e79b2: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005e79b7: ADD ESP,0x8
// 005e79ba: PUSH 0x656dd6
//   XREF to: 00656dd6 (DATA)
// 005e79bf: LEA EAX,[EBX + 0x950]
// 005e79c5: PUSH EAX
// 005e79c6: MOV dword ptr [EBX + 0x938],0x4
// 005e79d0: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005e79d5: ADD ESP,0x8
// 005e79d8: PUSH 0x656de2
//   XREF to: 00656de2 (DATA)
// 005e79dd: LEA EAX,[EBX + 0xcb8]
// 005e79e3: PUSH EAX
// 005e79e4: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005e79e9: ADD ESP,0x8
// 005e79ec: PUSH 0x656dee
//   XREF to: 00656dee (DATA)
// 005e79f1: LEA EAX,[EBX + 0xb04]
// 005e79f7: PUSH EAX
// 005e79f8: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005e79fd: ADD ESP,0x8
// 005e7a00: PUSH 0x656dfa
//   XREF to: 00656dfa (DATA)
// 005e7a05: LEA EAX,[EBX + 0xe6c]
// 005e7a0b: PUSH EAX
// 005e7a0c: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005e7a11: MOV dword ptr [EBX + 0x93c],0xc0200000
// 005e7a1b: MOV dword ptr [EBX + 0x940],0xc0200000
// 005e7a25: MOV dword ptr [EBX + 0x944],0x40a00000
// 005e7a2f: ADD ESP,0x8
// 005e7a32: MOV dword ptr [EBX + 0x948],0x3fa00000
// 005e7a3c: MOV dword ptr [EBX + 0x94c],0x3e800000
// 005e7a46: MOV dword ptr [EBX + 0xaf0],0x40200000
// 005e7a50: MOV dword ptr [EBX + 0xaf4],0xc0200000
// 005e7a5a: MOV dword ptr [EBX + 0xaf8],0x40a00000
// 005e7a64: MOV dword ptr [EBX + 0xafc],0x3fa00000
// 005e7a6e: MOV dword ptr [EBX + 0xb00],0x3e800000
// 005e7a78: MOV dword ptr [EBX + 0xca4],0xc0200000
// 005e7a82: MOV dword ptr [EBX + 0xca8],0xc0200000
// 005e7a8c: MOV dword ptr [EBX + 0xcac],0xc0900000
// 005e7a96: MOV dword ptr [EBX + 0xcb0],0x3fa00000
// 005e7aa0: MOV dword ptr [EBX + 0xcb4],0x3e800000
// 005e7aaa: MOV dword ptr [EBX + 0xe58],0x40200000
// 005e7ab4: MOV dword ptr [EBX + 0xe5c],0xc0200000
// 005e7abe: MOV dword ptr [EBX + 0xe60],0xc0900000
// 005e7ac8: MOV dword ptr [EBX + 0xe64],0x3fa00000
// 005e7ad2: MOV dword ptr [EBX + 0xe68],0x3e800000
// 005e7adc: LEA EAX,[EBX + 0x8d0]
// 005e7ae2: MOV dword ptr [EBX + 0x918],0x44fa0000
// 005e7aec: MOV dword ptr [EAX + 0x8],0x0
// 005e7af3: MOV EDX,dword ptr [EAX + 0x8]
// 005e7af6: MOV dword ptr [EAX + 0x4],EDX
// 005e7af9: MOV EDX,dword ptr [EAX + 0x4]
// 005e7afc: MOV dword ptr [EAX],EDX
// 005e7afe: LEA EAX,[EBX + 0x8c4]
// 005e7b04: MOV dword ptr [EAX + 0x8],0x0
// 005e7b0b: MOV EDX,dword ptr [EAX + 0x8]
// 005e7b0e: MOV dword ptr [EAX + 0x4],EDX
// 005e7b11: MOV EDX,dword ptr [EAX + 0x4]
// 005e7b14: MOV dword ptr [EAX],EDX
// 005e7b16: LEA EAX,[EBX + 0x8f4]
// 005e7b1c: MOV dword ptr [EAX + 0x8],0x0
// 005e7b23: MOV ESI,0x656e06
//   XREF to: 00656e06 (DATA)
// 005e7b28: MOV EDX,dword ptr [EAX + 0x8]
// 005e7b2b: MOV dword ptr [EAX + 0x4],EDX
// 005e7b2e: MOV EDX,dword ptr [EAX + 0x4]
// 005e7b31: MOV dword ptr [EAX],EDX
// 005e7b33: MOV dword ptr [EBX + 0x102c],0x0
// 005e7b3d: LEA EDI,[EBX + 0x1034]
// 005e7b43: MOV dword ptr [EBX + 0x1030],0x42c80000
// 005e7b4d: PUSH EDI
// 005e7b4e: MOV AL,byte ptr [ESI]
//   Label: LAB_005e7b4e
//   XREF to: 00656e06 (READ)
//   XREF to: 00656e08 (READ)
// 005e7b50: MOV byte ptr [EDI],AL
// 005e7b52: CMP AL,0x0
// 005e7b54: JZ 0x005e7b66
//   XREF to: 005e7b66 (CONDITIONAL_JUMP)
// 005e7b56: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00656e07 (READ)
//   XREF to: 00656e09 (READ)
// 005e7b59: ADD ESI,0x2
// 005e7b5c: MOV byte ptr [EDI + 0x1],AL
// 005e7b5f: ADD EDI,0x2
// 005e7b62: CMP AL,0x0
// 005e7b64: JNZ 0x005e7b4e
//   XREF to: 005e7b4e (CONDITIONAL_JUMP)
// 005e7b66: POP EDI
//   Label: LAB_005e7b66
// 005e7b67: MOV dword ptr [EBX + 0x106c],0x0
// 005e7b71: MOV dword ptr [EBX + 0x1070],0x0
// 005e7b7b: MOV EAX,EBX
// 005e7b7d: MOV dword ptr [EBX + 0x1074],0x0
// 005e7b87: POP EDI
// 005e7b88: POP ESI
// 005e7b89: POP EBX
// 005e7b8a: RET
