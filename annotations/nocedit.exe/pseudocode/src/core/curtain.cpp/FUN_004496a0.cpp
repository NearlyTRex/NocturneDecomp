// Name: core_curtain.cpp_FUN_004496a0
// Address: 004496a0
// Address Range: [[004496a0, 00449801]]
// Convention: __cdecl
// Signature: CCurtain * core_curtain.cpp_FUN_004496a0(CCurtain * this_ptr)
// Cross-references:
//   core_curtain.cpp_FUN_00449660 (00449660) at 0044967a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_SGLASS_RAW_00619bd7
//   undefined4 s_GLASS.RAW_00619bd8
//   undefined4 s_LASS.RAW_00619bd9
//   undefined4 s_ASS.RAW_00619bda
//   TerminatedCString s_none_00619be2
//   undefined4 s_one_00619be3
//   undefined4 s_ne_00619be4
//   undefined4 s_e_00619be5
//   CDemonActor_vtable PTR_core_curtain.cpp_FUN_0065c4e4
//   WatcomTypeInfo g_SCurtainVertexTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_FUN_004496a0(CCurtain *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (pCVar2[1].create_event + 0x38,1000,&g_SCurtainVertexTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar3 + -0xb4) = &PTR_core_curtain_cpp_FUN_0065c4e4;
  pcVar4 = "SGLASS.RAW";
  *(undefined4 *)((int)pvVar3 + -0xb0) = 0x40800000;
  *(undefined4 *)((int)pvVar3 + -0xac) = 0x40800000;
  pcVar5 = (char *)((int)pvVar3 + -0x9c);
  *(undefined4 *)((int)pvVar3 + -0xa8) = 0x3dcccccd;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)pvVar3 + -0xa0) = 0;
  *(undefined4 *)((int)pvVar3 + -0xa4) = 0xd;
  *(undefined4 *)((int)pvVar3 + -0x8c) = 0x8000;
  *(undefined4 *)((int)pvVar3 + -0x88) = 1;
  *(undefined4 *)((int)pvVar3 + -0x7c) = 0;
  *(undefined4 *)((int)pvVar3 + -0x80) = 0;
  pcVar4 = "none";
  *(undefined4 *)((int)pvVar3 + -0x84) = 0;
  pcVar5 = (char *)((int)pvVar3 + -0x74);
  *(undefined4 *)((int)pvVar3 + -0x78) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)pvVar3 + 0x6590c) = 0x3f800000;
  *(undefined4 *)((int)pvVar3 + 0x65910) = 0x3f733333;
  *(undefined4 *)((int)pvVar3 + 0x65914) = 0;
  *(undefined4 *)((int)pvVar3 + 0x65918) = 0x3f000000;
  *(undefined4 *)((int)pvVar3 + 0x6591c) = 0x42000000;
  *(undefined4 *)((int)pvVar3 + 0x65924) = 0;
  *(undefined4 *)((int)pvVar3 + 0x65928) = 0;
  *(undefined4 *)((int)pvVar3 + -0x10) = 1;
  *(undefined4 *)((int)pvVar3 + -0xc) = 0x3f000000;
  *(undefined4 *)((int)pvVar3 + -8) = 1;
  *(undefined4 *)((int)pvVar3 + 0x6592c) = 0;
  return (CCurtain *)((int)pvVar3 + -0x208);
}


// Assembly code:
// 004496a0: PUSH ESI
//   Label: core_curtain.cpp_FUN_004496a0
// 004496a1: PUSH EDI
// 004496a2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004496a6: PUSH EDX
// 004496a7: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004496ac: ADD ESP,0x4
// 004496af: PUSH 0x65c5f0
//   XREF to: 0065c5f0 (DATA)
// 004496b4: PUSH 0x3e8
// 004496b9: ADD EAX,0x208
// 004496be: PUSH EAX
// 004496bf: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004496c4: LEA EDX,[EAX + 0xfffffdf8]
// 004496ca: MOV dword ptr [EDX + 0x154],0x65c4e4
//   XREF to: 0065c4e4 (DATA)
// 004496d4: MOV ESI,0x619bd7
//   XREF to: 00619bd7 (DATA)
// 004496d9: MOV dword ptr [EDX + 0x158],0x40800000
// 004496e3: ADD ESP,0xc
// 004496e6: MOV dword ptr [EDX + 0x15c],0x40800000
// 004496f0: LEA EDI,[EDX + 0x16c]
// 004496f6: MOV dword ptr [EDX + 0x160],0x3dcccccd
// 00449700: PUSH EDI
// 00449701: MOV AL,byte ptr [ESI]
//   Label: LAB_00449701
//   XREF to: 00619bd7 (READ)
//   XREF to: 00619bd9 (READ)
// 00449703: MOV byte ptr [EDI],AL
// 00449705: CMP AL,0x0
// 00449707: JZ 0x00449719
//   XREF to: 00449719 (CONDITIONAL_JUMP)
// 00449709: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00619bd8 (READ)
//   XREF to: 00619bda (READ)
// 0044970c: ADD ESI,0x2
// 0044970f: MOV byte ptr [EDI + 0x1],AL
// 00449712: ADD EDI,0x2
// 00449715: CMP AL,0x0
// 00449717: JNZ 0x00449701
//   XREF to: 00449701 (CONDITIONAL_JUMP)
// 00449719: POP EDI
//   Label: LAB_00449719
// 0044971a: MOV dword ptr [EDX + 0x168],0x0
// 00449724: MOV dword ptr [EDX + 0x164],0xd
// 0044972e: MOV dword ptr [EDX + 0x17c],0x8000
// 00449738: MOV dword ptr [EDX + 0x180],0x1
// 00449742: MOV dword ptr [EDX + 0x18c],0x0
// 0044974c: MOV dword ptr [EDX + 0x188],0x0
// 00449756: MOV ESI,0x619be2
//   XREF to: 00619be2 (DATA)
// 0044975b: MOV dword ptr [EDX + 0x184],0x0
// 00449765: LEA EDI,[EDX + 0x194]
// 0044976b: MOV dword ptr [EDX + 0x190],0x0
// 00449775: PUSH EDI
// 00449776: MOV AL,byte ptr [ESI]
//   Label: LAB_00449776
//   XREF to: 00619be2 (READ)
//   XREF to: 00619be4 (READ)
// 00449778: MOV byte ptr [EDI],AL
// 0044977a: CMP AL,0x0
// 0044977c: JZ 0x0044978e
//   XREF to: 0044978e (CONDITIONAL_JUMP)
// 0044977e: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00619be3 (READ)
//   XREF to: 00619be5 (READ)
// 00449781: ADD ESI,0x2
// 00449784: MOV byte ptr [EDI + 0x1],AL
// 00449787: ADD EDI,0x2
// 0044978a: CMP AL,0x0
// 0044978c: JNZ 0x00449776
//   XREF to: 00449776 (CONDITIONAL_JUMP)
// 0044978e: POP EDI
//   Label: LAB_0044978e
// 0044978f: MOV dword ptr [EDX + 0x65b14],0x3f800000
// 00449799: MOV dword ptr [EDX + 0x65b18],0x3f733333
// 004497a3: MOV dword ptr [EDX + 0x65b1c],0x0
// 004497ad: MOV dword ptr [EDX + 0x65b20],0x3f000000
// 004497b7: MOV dword ptr [EDX + 0x65b24],0x42000000
// 004497c1: MOV dword ptr [EDX + 0x65b2c],0x0
// 004497cb: MOV dword ptr [EDX + 0x65b30],0x0
// 004497d5: MOV dword ptr [EDX + 0x1f8],0x1
// 004497df: MOV dword ptr [EDX + 0x1fc],0x3f000000
// 004497e9: MOV dword ptr [EDX + 0x200],0x1
// 004497f3: MOV EAX,EDX
// 004497f5: MOV dword ptr [EDX + 0x65b34],0x0
// 004497ff: POP EDI
// 00449800: POP ESI
// 00449801: RET
