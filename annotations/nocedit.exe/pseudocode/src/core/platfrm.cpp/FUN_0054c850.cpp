// Name: core_platfrm.cpp_FUN_0054c850
// Address: 0054c850
// Address Range: [[0054c850, 0054ca1c]]
// Convention: __cdecl
// Signature: CPlatform * core_platfrm.cpp_FUN_0054c850(CPlatform * this_ptr)
// Cross-references:
//   core_conveyor.cpp_ctor_FUN_00441ca0 (00441ca0) at 00441ca7 [UNCONDITIONAL_CALL]
//   core_minecar.cpp_FUN_00520e50 (00520e50) at 00520e6a [UNCONDITIONAL_CALL]
//   core_minecar.cpp_FUN_00520f20 (00520f20) at 00520f25 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054c810 (0054c810) at 0054c82a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_slider1_kfm_0063f774
//   CDemonActor_vtable PTR_core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_006622a4
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_course.cpp_CCourse_ctor_FUN_004424c0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_FUN_0054c850(CPlatform *this_ptr)

{
  CCourse *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CKeyFramedModelInstance *pCVar4;
  CCourse *pCVar5;
  int *piVar6;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte bVar11;
  CCourseFrameList *unaff_retaddr;
  undefined4 auStackY_17dc [509];
  undefined4 auStackY_fe8 [1010];
  CVector3f *in_stack_fffffff4;
  
  bVar11 = 0;
  pCVar3 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar3 + 1));
  pCVar5 = core_course_cpp_CCourse_ctor_FUN_004424c0
                     ((CCourse *)(pCVar4[1].part_visibility_flags + 0xf));
  pCVar5[-0x25].len = (int)&PTR_core_platfrm_cpp_CPlatform_LoadCourseSomething_FUN_006622a4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar5[-0x25].frame_list,"slider1.kfm");
  *(undefined1 *)&pCVar5[5].loop = 0;
  *(undefined1 *)&pCVar5[0xe].len = 0;
  *(undefined1 *)&pCVar5[0x16].frame_list = 0;
  *(undefined1 *)&pCVar5[0x1e].loop = 0;
  *(undefined1 *)&pCVar5[0x20].frame_list = 0;
  *(undefined1 *)&pCVar5[0x22].len = 0;
  pCVar5[-5].len = 0;
  pCVar5[-5].loop = 0;
  pCVar5[-3].len = 0x40000000;
  pCVar5[-4].loop = 0x40000000;
  pCVar5[-5].frame_list = (CCourseFrameList *)0x0;
  pCVar1 = pCVar5 + 2;
  *(undefined1 *)&pCVar5[-3].frame_list = 0;
  if (pCVar1 != (CCourse *)&pCVar5[-0x3f].frame_list) {
    pCVar1->len = (int)pCVar5[-0x3f].frame_list;
    pCVar5[2].frame_list = (CCourseFrameList *)pCVar5[-0x3f].loop;
    pCVar5[2].loop = pCVar5[-0x3e].len;
  }
  if (pCVar5 + 1 != pCVar1) {
    pCVar5[1].len = pCVar1->len;
    pCVar5[1].frame_list = pCVar5[2].frame_list;
    pCVar5[1].loop = pCVar5[2].loop;
  }
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20
            ((CQuaternion4f *)&pCVar5[-0x3e].loop,in_stack_fffffff4);
  puVar7 = (undefined4 *)((int)pCVar5 + (uint)bVar11 * -8 + 0x38);
  pCVar5[4].frame_list = unaff_retaddr;
  puVar8 = puVar7 + (uint)bVar11 * -2 + 1;
  *puVar7 = (&this_ptr)[(uint)bVar11 * -2];
  *puVar8 = *(undefined4 *)(&stack0x00000008 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  puVar8[(uint)bVar11 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0x00000008 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
        ((uint)bVar11 * -2 + 1) * 4);
  puVar9 = (undefined4 *)((int)pCVar5 + (uint)bVar11 * -8 + 0x28);
  puVar7 = (undefined4 *)((int)pCVar5 + (uint)bVar11 * -8 + 0x38);
  pCVar5[3].len = (int)pCVar5[4].frame_list;
  puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
  puVar8 = puVar7 + (uint)bVar11 * -2 + 1;
  *puVar9 = *puVar7;
  *puVar10 = *puVar8;
  puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
  pCVar5[0x57].len = 0;
  pCVar5[0x24].len = 0;
  pCVar5[0x24].frame_list = (CCourseFrameList *)0x0;
  pCVar5[0x24].loop = 0;
  *(undefined1 *)&pCVar5[0x25].len = 0;
  pCVar5[0x57].frame_list = (CCourseFrameList *)0x0;
  pCVar5[-0x39].len = 0x32;
  pCVar5[0x2a].frame_list = (CCourseFrameList *)0x0;
  pCVar5[-4].len = 0;
  pCVar5[-4].frame_list = (CCourseFrameList *)0x0;
  piVar6 = &pCVar5[-0x42].loop;
  do {
    iVar2 = (int)(piVar6 + 0xd);
    piVar6[0x147] = 0;
    piVar6 = (int *)iVar2;
  } while ((CCourse *)iVar2 != pCVar5 + -0x16);
  pCVar5[0x2b].len = 0;
  pCVar5[0x2b].frame_list = (CCourseFrameList *)&DAT_00000001;
  pCVar5[0x2a].loop = 0;
  return (CPlatform *)&pCVar5[-0x42].loop;
}


// Assembly code:
// 0054c850: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054c850
// 0054c851: SUB ESP,0x10
// 0054c854: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0054c858: PUSH EDI
// 0054c859: PUSH ESI
// 0054c85a: PUSH EBX
// 0054c85b: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0054c860: ADD ESP,0x4
// 0054c863: ADD EAX,0x158
// 0054c868: PUSH EAX
// 0054c869: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 0054c86e: ADD ESP,0x4
// 0054c871: ADD EAX,0x1b8
// 0054c876: PUSH EAX
// 0054c877: CALL core_course.cpp_CCourse_ctor_FUN_004424c0
//   XREF to: 004424c0 (UNCONDITIONAL_CALL)
// 0054c87c: ADD ESP,0x4
// 0054c87f: LEA EBX,[EAX + 0xfffffcf0]
// 0054c885: PUSH 0x63f774
//   XREF to: 0063f774 (DATA)
// 0054c88a: LEA EAX,[EBX + 0x158]
// 0054c890: PUSH EAX
// 0054c891: MOV dword ptr [EBX + 0x154],0x6622a4
//   XREF to: 006622a4 (DATA)
// 0054c89b: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0054c8a0: MOV byte ptr [EBX + 0x354],0x0
// 0054c8a7: MOV byte ptr [EBX + 0x3b8],0x0
// 0054c8ae: MOV byte ptr [EBX + 0x41c],0x0
// 0054c8b5: MOV byte ptr [EBX + 0x480],0x0
// 0054c8bc: MOV byte ptr [EBX + 0x494],0x0
// 0054c8c3: MOV byte ptr [EBX + 0x4a8],0x0
// 0054c8ca: MOV dword ptr [EBX + 0x2d4],0x0
// 0054c8d4: MOV dword ptr [EBX + 0x2dc],0x0
// 0054c8de: MOV dword ptr [EBX + 0x2ec],0x40000000
// 0054c8e8: MOV dword ptr [EBX + 0x2e8],0x40000000
// 0054c8f2: ADD ESP,0x8
// 0054c8f5: MOV dword ptr [EBX + 0x2d8],0x0
// 0054c8ff: LEA EAX,[EBX + 0x328]
// 0054c905: MOV byte ptr [EBX + 0x2f0],0x0
// 0054c90c: LEA EDX,[EBX + 0x20]
// 0054c90f: MOV ECX,EAX
// 0054c911: CMP EAX,EDX
// 0054c913: JNZ 0x0054c9f3
//   XREF to: 0054c9f3 (CONDITIONAL_JUMP)
// 0054c919: LEA EAX,[EBX + 0x31c]
//   Label: LAB_0054c919
// 0054c91f: CMP EAX,ECX
// 0054c921: JNZ 0x0054ca08
//   XREF to: 0054ca08 (CONDITIONAL_JUMP)
// 0054c927: LEA EAX,[EBX + 0x30]
//   Label: LAB_0054c927
// 0054c92a: PUSH EAX
// 0054c92b: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x14] (DATA)
// 0054c92f: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 0054c934: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x14] (DATA)
// 0054c938: LEA EDI,[EBX + 0x344]
// 0054c93e: ADD ESP,0x4
// 0054c941: MOVSD ES:EDI,ESI
// 0054c942: MOVSD ES:EDI,ESI
// 0054c943: MOVSD ES:EDI,ESI
// 0054c944: MOVSD ES:EDI,ESI
// 0054c945: LEA EDI,[EBX + 0x334]
// 0054c94b: LEA ESI,[EBX + 0x344]
// 0054c951: MOVSD ES:EDI,ESI
// 0054c952: MOVSD ES:EDI,ESI
// 0054c953: MOVSD ES:EDI,ESI
// 0054c954: MOVSD ES:EDI,ESI
// 0054c955: MOV dword ptr [EBX + 0x724],0x0
// 0054c95f: MOV dword ptr [EBX + 0x4c0],0x0
// 0054c969: MOV dword ptr [EBX + 0x4c4],0x0
// 0054c973: MOV dword ptr [EBX + 0x4c8],0x0
// 0054c97d: MOV byte ptr [EBX + 0x4cc],0x0
// 0054c984: MOV dword ptr [EBX + 0x728],0x0
// 0054c98e: MOV dword ptr [EBX + 0x64],0x32
// 0054c995: MOV dword ptr [EBX + 0x50c],0x0
// 0054c99f: MOV EAX,EBX
// 0054c9a1: MOV dword ptr [EBX + 0x2e0],0x0
// 0054c9ab: LEA EDX,[EBX + 0x208]
// 0054c9b1: MOV dword ptr [EBX + 0x2e4],0x0
// 0054c9bb: POP ESI
// 0054c9bc: POP EDI
// 0054c9bd: ADD EAX,0x34
//   Label: LAB_0054c9bd
// 0054c9c0: MOV dword ptr [EAX + 0x4e8],0x0
// 0054c9ca: CMP EAX,EDX
// 0054c9cc: JNZ 0x0054c9bd
//   XREF to: 0054c9bd (CONDITIONAL_JUMP)
// 0054c9ce: MOV dword ptr [EBX + 0x514],0x0
// 0054c9d8: MOV dword ptr [EBX + 0x518],0x1
// 0054c9e2: MOV EAX,EBX
// 0054c9e4: MOV dword ptr [EBX + 0x510],0x0
// 0054c9ee: ADD ESP,0x10
// 0054c9f1: POP EBX
// 0054c9f2: RET
// 0054c9f3: MOV ESI,dword ptr [EDX]
//   Label: LAB_0054c9f3
// 0054c9f5: MOV dword ptr [EAX],ESI
// 0054c9f7: MOV ESI,dword ptr [EDX + 0x4]
// 0054c9fa: MOV dword ptr [EAX + 0x4],ESI
// 0054c9fd: MOV ESI,dword ptr [EDX + 0x8]
// 0054ca00: MOV dword ptr [EAX + 0x8],ESI
// 0054ca03: JMP 0x0054c919
//   XREF to: 0054c919 (UNCONDITIONAL_JUMP)
// 0054ca08: MOV EDX,dword ptr [ECX]
//   Label: LAB_0054ca08
// 0054ca0a: MOV dword ptr [EAX],EDX
// 0054ca0c: MOV EDX,dword ptr [ECX + 0x4]
// 0054ca0f: MOV dword ptr [EAX + 0x4],EDX
// 0054ca12: MOV EDX,dword ptr [ECX + 0x8]
// 0054ca15: MOV dword ptr [EAX + 0x8],EDX
// 0054ca18: JMP 0x0054c927
//   XREF to: 0054c927 (UNCONDITIONAL_JUMP)
