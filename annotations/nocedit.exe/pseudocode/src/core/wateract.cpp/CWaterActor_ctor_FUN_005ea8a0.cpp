// Name: core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0
// Address: 005ea8a0
// Address Range: [[005ea8a0, 005ea9e5]]
// Convention: __cdecl
// Signature: CWaterActor * core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0(CWaterActor * this_ptr)
// Cross-references:
//   core_wateract.cpp_FUN_005ea860 (005ea860) at 005ea87a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_00657268
//   undefined4 s_one_00657269
//   undefined4 s_ne_0065726a
//   undefined4 s_e_0065726b
//   TerminatedCString s_none_0065726d
//   undefined4 s_one_0065726e
//   undefined4 s_ne_0065726f
//   undefined4 s_e_00657270
//   CDemonActor_vtable PTR_core_wateract.cpp_FUN_00665334
//   WatcomTypeInfo g_SWaterVertexTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_005ea8a0(CWaterActor *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (pCVar2[1].metadata.field3_0x1c,1000,&g_SWaterVertexTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar3 + -0x148) = &PTR_core_wateract_cpp_FUN_00665334;
  *(undefined4 *)((int)pvVar3 + -0x144) = 0x40800000;
  *(undefined4 *)((int)pvVar3 + -0x140) = 0x3dcccccd;
  *(undefined4 *)((int)pvVar3 + -0x13c) = 0x40800000;
  *(undefined4 *)((int)pvVar3 + -0x138) = 0x8000;
  *(undefined4 *)((int)pvVar3 + 0x2af8c) = 0;
  *(undefined4 *)((int)pvVar3 + 0x2af90) = 0;
  *(undefined4 *)((int)pvVar3 + -0x1a0) = 1;
  *(undefined4 *)((int)pvVar3 + -0x1a4) = 0;
  *(undefined4 *)((int)pvVar3 + -0x130) = 0x3f800000;
  *(undefined4 *)((int)pvVar3 + -300) = 0x3f800000;
  *(undefined4 *)((int)pvVar3 + -0x134) = 0;
  pcVar4 = "none";
  *(undefined4 *)((int)pvVar3 + -0x20) = 0;
  *(undefined1 *)((int)pvVar3 + -0x128) = 0;
  pcVar5 = (char *)((int)pvVar3 + -0xe8);
  *(undefined1 *)((int)pvVar3 + -0x108) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "none";
  pcVar5 = (char *)((int)pvVar3 + -0x84);
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)pvVar3 + -0x1c) = 0;
  *(undefined4 *)((int)pvVar3 + -0x18) = 0x3f800000;
  *(undefined4 *)((int)pvVar3 + -0x14) = 0;
  *(undefined4 *)((int)pvVar3 + -8) = 0xff;
  *(undefined4 *)((int)pvVar3 + -0xc) = *(undefined4 *)((int)pvVar3 + -8);
  *(undefined4 *)((int)pvVar3 + -0x10) = *(undefined4 *)((int)pvVar3 + -8);
  return (CWaterActor *)((int)pvVar3 + -0x29c);
}


// Assembly code:
// 005ea8a0: PUSH ESI
//   Label: core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0
// 005ea8a1: PUSH EDI
// 005ea8a2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ea8a6: PUSH EDX
// 005ea8a7: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005ea8ac: ADD ESP,0x4
// 005ea8af: PUSH 0x665420
//   XREF to: 00665420 (DATA)
// 005ea8b4: PUSH 0x3e8
// 005ea8b9: ADD EAX,0x29c
// 005ea8be: PUSH EAX
// 005ea8bf: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005ea8c4: LEA EDX,[EAX + 0xfffffd64]
// 005ea8ca: MOV dword ptr [EDX + 0x154],0x665334
//   XREF to: 00665334 (DATA)
// 005ea8d4: MOV dword ptr [EDX + 0x158],0x40800000
// 005ea8de: MOV dword ptr [EDX + 0x15c],0x3dcccccd
// 005ea8e8: MOV dword ptr [EDX + 0x160],0x40800000
// 005ea8f2: MOV dword ptr [EDX + 0x164],0x8000
// 005ea8fc: MOV dword ptr [EDX + 0x2b228],0x0
// 005ea906: MOV dword ptr [EDX + 0x2b22c],0x0
// 005ea910: MOV dword ptr [EDX + 0xfc],0x1
// 005ea91a: MOV dword ptr [EDX + 0xf8],0x0
// 005ea924: MOV dword ptr [EDX + 0x16c],0x3f800000
// 005ea92e: MOV dword ptr [EDX + 0x170],0x3f800000
// 005ea938: MOV dword ptr [EDX + 0x168],0x0
// 005ea942: MOV ESI,0x657268
//   XREF to: 00657268 (DATA)
// 005ea947: MOV dword ptr [EDX + 0x27c],0x0
// 005ea951: ADD ESP,0xc
// 005ea954: MOV byte ptr [EDX + 0x174],0x0
// 005ea95b: LEA EDI,[EDX + 0x1b4]
// 005ea961: MOV byte ptr [EDX + 0x194],0x0
// 005ea968: PUSH EDI
// 005ea969: MOV AL,byte ptr [ESI]
//   Label: LAB_005ea969
//   XREF to: 00657268 (READ)
//   XREF to: 0065726a (READ)
// 005ea96b: MOV byte ptr [EDI],AL
// 005ea96d: CMP AL,0x0
// 005ea96f: JZ 0x005ea981
//   XREF to: 005ea981 (CONDITIONAL_JUMP)
// 005ea971: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00657269 (READ)
//   XREF to: 0065726b (READ)
// 005ea974: ADD ESI,0x2
// 005ea977: MOV byte ptr [EDI + 0x1],AL
// 005ea97a: ADD EDI,0x2
// 005ea97d: CMP AL,0x0
// 005ea97f: JNZ 0x005ea969
//   XREF to: 005ea969 (CONDITIONAL_JUMP)
// 005ea981: POP EDI
//   Label: LAB_005ea981
// 005ea982: MOV ESI,0x65726d
//   XREF to: 0065726d (DATA)
// 005ea987: LEA EDI,[EDX + 0x218]
// 005ea98d: PUSH EDI
// 005ea98e: MOV AL,byte ptr [ESI]
//   Label: LAB_005ea98e
//   XREF to: 0065726d (READ)
//   XREF to: 0065726f (READ)
// 005ea990: MOV byte ptr [EDI],AL
// 005ea992: CMP AL,0x0
// 005ea994: JZ 0x005ea9a6
//   XREF to: 005ea9a6 (CONDITIONAL_JUMP)
// 005ea996: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0065726e (READ)
//   XREF to: 00657270 (READ)
// 005ea999: ADD ESI,0x2
// 005ea99c: MOV byte ptr [EDI + 0x1],AL
// 005ea99f: ADD EDI,0x2
// 005ea9a2: CMP AL,0x0
// 005ea9a4: JNZ 0x005ea98e
//   XREF to: 005ea98e (CONDITIONAL_JUMP)
// 005ea9a6: POP EDI
//   Label: LAB_005ea9a6
// 005ea9a7: MOV dword ptr [EDX + 0x280],0x0
// 005ea9b1: MOV dword ptr [EDX + 0x284],0x3f800000
// 005ea9bb: MOV dword ptr [EDX + 0x288],0x0
// 005ea9c5: MOV dword ptr [EDX + 0x294],0xff
// 005ea9cf: MOV EAX,dword ptr [EDX + 0x294]
// 005ea9d5: MOV dword ptr [EDX + 0x290],EAX
// 005ea9db: MOV dword ptr [EDX + 0x28c],EAX
// 005ea9e1: MOV EAX,EDX
// 005ea9e3: POP EDI
// 005ea9e4: POP ESI
// 005ea9e5: RET
