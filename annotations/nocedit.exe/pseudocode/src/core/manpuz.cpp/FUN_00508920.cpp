// Name: core_manpuz.cpp_FUN_00508920
// Address: 00508920
// Address Range: [[00508920, 00508a60]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * core_manpuz.cpp_FUN_00508920(CMansionPuzzleCircle * this_ptr)
// Cross-references:
//   core_manpuz.cpp_FUN_005088e0 (005088e0) at 005088fd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_doorpuzz_kfm_006356a1
//   TerminatedCString s_puzz_rec_kfm_006356ae
//   TerminatedCString s_mirrhack_kfm_006356bb
//   TerminatedCString s_headlite_raw_006356c8
//   undefined4 s_eadlite.raw_006356c9
//   undefined4 s_adlite.raw_006356ca
//   undefined4 s_dlite.raw_006356cb
//   CDemonActor_vtable PTR_core_manpuz.cpp_FUN_00660da4
//   WatcomTypeInfo g_SPanelTypeInfo
//   WatcomTypeInfo g_SGemTypeInfo
//   WatcomTypeInfo g_SReflectorTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_manpuz.cpp_FUN_005098f0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl core_manpuz_cpp_FUN_00508920(CMansionPuzzleCircle *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcStack00000018;
  undefined4 uStack0000001c;
  CMansionPuzzleCircle *pCStack00000020;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(pCVar3 + 1);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(pCVar3 + 1);
  pvVar4 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (pCVar3[1].part_visibility_flags + 9,0xc,&g_SPanelTypeInfo);
  pvVar4 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar4 + 0x4b0),0xc,&g_SGemTypeInfo);
  pvVar4 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar4 + 0x8a0),2,&g_SReflectorTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar4 + -0x11ec) = &PTR_core_manpuz_cpp_FUN_00660da4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)((int)pvVar4 + -0x11e8),"doorpuzz.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)((int)pvVar4 + -0x106c),"puzz-rec.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)((int)pvVar4 + -0xef0),"mirrhack.kfm");
  pcVar5 = "headlite.raw";
  pcStack00000018 = (char *)((int)pvVar4 + 0x188);
  pcVar6 = pcStack00000018;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)pvVar4 + -0xd6c) = 0;
  *(undefined4 *)((int)pvVar4 + -0xd70) = *(undefined4 *)((int)pvVar4 + -0xd6c);
  *(undefined4 *)((int)pvVar4 + -0xd74) = *(undefined4 *)((int)pvVar4 + -0xd70);
  *(undefined4 *)((int)pvVar4 + -0xd60) = 0;
  *(undefined4 *)((int)pvVar4 + -0xd64) = *(undefined4 *)((int)pvVar4 + -0xd60);
  *(undefined4 *)((int)pvVar4 + -0xd68) = *(undefined4 *)((int)pvVar4 + -0xd64);
  *(undefined4 *)((int)pvVar4 + -0xd54) = 0;
  *(undefined4 *)((int)pvVar4 + -0xd58) = *(undefined4 *)((int)pvVar4 + -0xd54);
  *(undefined4 *)((int)pvVar4 + -0xd5c) = *(undefined4 *)((int)pvVar4 + -0xd58);
  uStack0000001c = 0x508a5a;
  pCStack00000020 = (CMansionPuzzleCircle *)((int)pvVar4 + -0x1340);
  core_manpuz_cpp_FUN_005098f0();
  return (CMansionPuzzleCircle *)((int)pvVar4 + -0x1340);
}


// Assembly code:
// 00508920: PUSH EBX
//   Label: core_manpuz.cpp_FUN_00508920
// 00508921: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00508925: PUSH EDI
// 00508926: PUSH ESI
// 00508927: PUSH EBX
// 00508928: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0050892d: ADD ESP,0x4
// 00508930: ADD EAX,0x158
// 00508935: PUSH EAX
// 00508936: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 0050893b: ADD ESP,0x4
// 0050893e: ADD EAX,0x17c
// 00508943: PUSH EAX
// 00508944: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 00508949: ADD ESP,0x4
// 0050894c: ADD EAX,0x17c
// 00508951: PUSH EAX
// 00508952: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 00508957: ADD ESP,0x4
// 0050895a: PUSH 0x660f80
//   XREF to: 00660f80 (DATA)
// 0050895f: PUSH 0xc
// 00508961: ADD EAX,0x1a0
// 00508966: PUSH EAX
// 00508967: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0050896c: ADD ESP,0xc
// 0050896f: PUSH 0x660fa0
//   XREF to: 00660fa0 (DATA)
// 00508974: PUSH 0xc
// 00508976: ADD EAX,0x4b0
// 0050897b: PUSH EAX
// 0050897c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00508981: ADD ESP,0xc
// 00508984: PUSH 0x660fc0
//   XREF to: 00660fc0 (DATA)
// 00508989: PUSH 0x2
// 0050898b: ADD EAX,0x8a0
// 00508990: PUSH EAX
// 00508991: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00508996: ADD ESP,0xc
// 00508999: LEA EBX,[EAX + 0xffffecc0]
// 0050899f: PUSH 0x6356a1
//   XREF to: 006356a1 (DATA)
// 005089a4: LEA EAX,[EBX + 0x158]
// 005089aa: PUSH EAX
// 005089ab: MOV dword ptr [EBX + 0x154],0x660da4
//   XREF to: 00660da4 (DATA)
// 005089b5: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005089ba: ADD ESP,0x8
// 005089bd: PUSH 0x6356ae
//   XREF to: 006356ae (DATA)
// 005089c2: LEA EAX,[EBX + 0x2d4]
// 005089c8: PUSH EAX
// 005089c9: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005089ce: ADD ESP,0x8
// 005089d1: PUSH 0x6356bb
//   XREF to: 006356bb (DATA)
// 005089d6: LEA EAX,[EBX + 0x450]
// 005089dc: PUSH EAX
// 005089dd: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005089e2: ADD ESP,0x8
// 005089e5: MOV ESI,0x6356c8
//   XREF to: 006356c8 (DATA)
// 005089ea: LEA EDI,[EBX + 0x14c8]
// 005089f0: PUSH EDI
// 005089f1: MOV AL,byte ptr [ESI]
//   Label: LAB_005089f1
//   XREF to: 006356c8 (READ)
//   XREF to: 006356ca (READ)
// 005089f3: MOV byte ptr [EDI],AL
// 005089f5: CMP AL,0x0
// 005089f7: JZ 0x00508a09
//   XREF to: 00508a09 (CONDITIONAL_JUMP)
// 005089f9: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006356c9 (READ)
//   XREF to: 006356cb (READ)
// 005089fc: ADD ESI,0x2
// 005089ff: MOV byte ptr [EDI + 0x1],AL
// 00508a02: ADD EDI,0x2
// 00508a05: CMP AL,0x0
// 00508a07: JNZ 0x005089f1
//   XREF to: 005089f1 (CONDITIONAL_JUMP)
// 00508a09: POP EDI
//   Label: LAB_00508a09
// 00508a0a: POP ESI
// 00508a0b: POP EDI
// 00508a0c: LEA EAX,[EBX + 0x5cc]
// 00508a12: MOV dword ptr [EAX + 0x8],0x0
// 00508a19: MOV EDX,dword ptr [EAX + 0x8]
// 00508a1c: MOV dword ptr [EAX + 0x4],EDX
// 00508a1f: MOV EDX,dword ptr [EAX + 0x4]
// 00508a22: MOV dword ptr [EAX],EDX
// 00508a24: LEA EAX,[EBX + 0x5d8]
// 00508a2a: MOV dword ptr [EAX + 0x8],0x0
// 00508a31: MOV EDX,dword ptr [EAX + 0x8]
// 00508a34: MOV dword ptr [EAX + 0x4],EDX
// 00508a37: MOV EDX,dword ptr [EAX + 0x4]
// 00508a3a: MOV dword ptr [EAX],EDX
// 00508a3c: LEA EAX,[EBX + 0x5e4]
// 00508a42: MOV dword ptr [EAX + 0x8],0x0
// 00508a49: PUSH EBX
// 00508a4a: MOV EDX,dword ptr [EAX + 0x8]
// 00508a4d: MOV dword ptr [EAX + 0x4],EDX
// 00508a50: MOV EDX,dword ptr [EAX + 0x4]
// 00508a53: MOV dword ptr [EAX],EDX
// 00508a55: CALL core_manpuz.cpp_FUN_005098f0
//   XREF to: 005098f0 (UNCONDITIONAL_CALL)
// 00508a5a: ADD ESP,0x4
// 00508a5d: MOV EAX,EBX
// 00508a5f: POP EBX
// 00508a60: RET
