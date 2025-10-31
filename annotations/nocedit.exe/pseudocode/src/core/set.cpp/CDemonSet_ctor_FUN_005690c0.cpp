// Name: core_set.cpp_CDemonSet_ctor_FUN_005690c0
// Address: 005690c0
// Address Range: [[005690c0, 0056934f]]
// Convention: __cdecl
// Signature: CDemonSet * core_set.cpp_CDemonSet_ctor_FUN_005690c0(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_staticInit_FUN_00569040 (00569040) at 00569045 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_006458e7
//   undefined4 s_one_006458e8
//   undefined4 s_ne_006458e9
//   undefined4 s_e_006458ea
//   TerminatedCString s_none_006458ec
//   undefined4 s_one_006458ed
//   undefined4 s_ne_006458ee
//   undefined4 s_e_006458ef
//   WatcomTypeInfo g_C3DSCameraTypeInfo
//   WatcomTypeInfo g_C3DSLightTypeInfo
//   WatcomTypeInfo g_SRoomTypeInfo
//   WatcomTypeInfo g_SVDBoxTypeInfo
// Function calls:
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CDemonSet * __cdecl core_set_cpp_CDemonSet_ctor_FUN_005690c0(CDemonSet *this_ptr)

{
  CDemonSet *this_ptr_00;
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->cameras,0xfa,&g_C3DSCameraTypeInfo);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar2 + 0x19a2c),200,&g_C3DSLightTypeInfo);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar2 + 0x141490),0x14,&g_SRoomTypeInfo);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar2 + 0x554),0xfa,&g_SVDBoxTypeInfo);
  this_ptr_00 = (CDemonSet *)((int)pvVar2 + -0x15b414);
  this_ptr_00->camera_count = 0;
  *(undefined4 *)((int)pvVar2 + -0x1419e8) = 0;
  *(undefined4 *)((int)pvVar2 + -0x57c) = 0xffffffff;
  *(undefined4 *)((int)pvVar2 + -0x578) = 0xffffffff;
  *(undefined1 *)((int)pvVar2 + -0xe324) = 0;
  *(undefined4 *)((int)pvVar2 + -0xe2c0) = 0;
  *(undefined4 *)((int)pvVar2 + -0xc37c) = 0;
  *(undefined4 *)((int)pvVar2 + -0xa438) = 0;
  *(undefined4 *)((int)pvVar2 + -0x84f4) = 0;
  *(undefined4 *)((int)pvVar2 + -0x65b0) = 0;
  *(undefined4 *)((int)pvVar2 + 0x42d0) = 0;
  *(undefined4 *)((int)pvVar2 + -0x466c) = 0;
  *(undefined4 *)((int)pvVar2 + -0x2728) = 0;
  *(undefined4 *)((int)pvVar2 + -0x574) = 1;
  *(undefined4 *)((int)pvVar2 + -0x570) = 0xffffffff;
  *(undefined4 *)((int)pvVar2 + -0x56c) = 0xffffffff;
  *(undefined4 *)((int)pvVar2 + -0x568) = 0;
  *(undefined4 *)((int)pvVar2 + -0x55c) = 0;
  *(undefined4 *)((int)pvVar2 + -0x558) = 0;
  *(undefined4 *)((int)pvVar2 + -0x794) = 0;
  *(undefined4 *)((int)pvVar2 + -0x790) = 0;
  *(undefined4 *)((int)pvVar2 + -0x788) = 0;
  pcVar3 = "none";
  *(undefined4 *)((int)pvVar2 + -0x784) = 0;
  pcVar4 = (char *)((int)pvVar2 + -0x77c);
  *(undefined4 *)((int)pvVar2 + -0x780) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr_00);
  *(undefined4 *)((int)pvVar2 + 0x42cc) = 0;
  *(undefined4 *)((int)pvVar2 + -0x768) = 0;
  *(undefined4 *)((int)pvVar2 + 17000) = 2;
  *(undefined4 *)((int)pvVar2 + -0x560) = 0;
  *(undefined4 *)((int)pvVar2 + -0x764) = 0;
  *(undefined4 *)((int)pvVar2 + 0x6214) = 0;
  *(undefined4 *)((int)pvVar2 + -0x760) = 0;
  *(undefined4 *)((int)pvVar2 + 0x6240) = 0;
  *(undefined4 *)((int)pvVar2 + -4) = 0;
  *(undefined4 *)((int)pvVar2 + -0x58c) = 0x10000;
  *(undefined4 *)((int)pvVar2 + -0x588) = 0x10000;
  pcVar3 = "none";
  *(undefined4 *)((int)pvVar2 + -0x584) = 0x10000;
  *(undefined4 *)((int)pvVar2 + 0x6244) = 0;
  pcVar4 = (char *)((int)pvVar2 + -0x5c4);
  *(undefined4 *)((int)pvVar2 + -0x5c8) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)pvVar2 + -0x78c) = 0;
  *(undefined4 *)((int)pvVar2 + -0x798) = 0;
  *(undefined4 *)((int)pvVar2 + -0x5a4) = 0;
  *(undefined4 *)((int)pvVar2 + -0x5a0) = 0xffff6f78;
  *(undefined4 *)((int)pvVar2 + -0x59c) = 0xffff6f78;
  *(undefined4 *)((int)pvVar2 + -0x598) = 37000;
  *(undefined4 *)((int)pvVar2 + -0x594) = 0x280;
  *(undefined4 *)((int)pvVar2 + -0x590) = 0;
  *(undefined4 *)((int)pvVar2 + -0x79c) = 0;
  return this_ptr_00;
}


// Assembly code:
// 005690c0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_ctor_FUN_005690c0
// 005690c1: PUSH ESI
// 005690c2: PUSH EDI
// 005690c3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005690c7: PUSH 0x6628b0
//   XREF to: 006628b0 (DATA)
// 005690cc: PUSH 0xfa
// 005690d1: ADD EBX,0x4
// 005690d4: PUSH EBX
// 005690d5: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005690da: ADD ESP,0xc
// 005690dd: PUSH 0x6628d0
//   XREF to: 006628d0 (DATA)
// 005690e2: PUSH 0xc8
// 005690e7: ADD EAX,0x19a2c
// 005690ec: PUSH EAX
// 005690ed: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005690f2: ADD ESP,0xc
// 005690f5: PUSH 0x6628f0
//   XREF to: 006628f0 (DATA)
// 005690fa: PUSH 0x14
// 005690fc: ADD EAX,0x141490
// 00569101: PUSH EAX
// 00569102: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00569107: ADD ESP,0xc
// 0056910a: PUSH 0x662910
//   XREF to: 00662910 (DATA)
// 0056910f: PUSH 0xfa
// 00569114: ADD EAX,0x554
// 00569119: PUSH EAX
// 0056911a: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0056911f: LEA EBX,[EAX + 0xffea4bec]
// 00569125: MOV dword ptr [EBX],0x0
// 0056912b: MOV dword ptr [EBX + 0x19a2c],0x0
// 00569135: MOV dword ptr [EBX + 0x15ae98],0xffffffff
// 0056913f: MOV dword ptr [EBX + 0x15ae9c],0xffffffff
// 00569149: MOV byte ptr [EBX + 0x14d0f0],0x0
// 00569150: MOV dword ptr [EBX + 0x14d154],0x0
// 0056915a: MOV dword ptr [EBX + 0x14f098],0x0
// 00569164: MOV dword ptr [EBX + 0x150fdc],0x0
// 0056916e: MOV dword ptr [EBX + 0x152f20],0x0
// 00569178: MOV dword ptr [EBX + 0x154e64],0x0
// 00569182: MOV dword ptr [EBX + 0x15f6e4],0x0
// 0056918c: MOV dword ptr [EBX + 0x156da8],0x0
// 00569196: MOV dword ptr [EBX + 0x158cec],0x0
// 005691a0: MOV dword ptr [EBX + 0x15aea0],0x1
// 005691aa: MOV dword ptr [EBX + 0x15aea4],0xffffffff
// 005691b4: MOV dword ptr [EBX + 0x15aea8],0xffffffff
// 005691be: MOV dword ptr [EBX + 0x15aeac],0x0
// 005691c8: MOV dword ptr [EBX + 0x15aeb8],0x0
// 005691d2: MOV dword ptr [EBX + 0x15aebc],0x0
// 005691dc: ADD ESP,0xc
// 005691df: MOV dword ptr [EBX + 0x15ac80],0x0
// 005691e9: MOV dword ptr [EBX + 0x15ac84],0x0
// 005691f3: MOV dword ptr [EBX + 0x15ac8c],0x0
// 005691fd: MOV ESI,0x6458e7
//   XREF to: 006458e7 (DATA)
// 00569202: MOV dword ptr [EBX + 0x15ac90],0x0
// 0056920c: LEA EDI,[EBX + 0x15ac98]
// 00569212: MOV dword ptr [EBX + 0x15ac94],0x0
// 0056921c: PUSH EDI
// 0056921d: MOV AL,byte ptr [ESI]
//   Label: LAB_0056921d
//   XREF to: 006458e7 (READ)
//   XREF to: 006458e9 (READ)
// 0056921f: MOV byte ptr [EDI],AL
// 00569221: CMP AL,0x0
// 00569223: JZ 0x00569235
//   XREF to: 00569235 (CONDITIONAL_JUMP)
// 00569225: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006458e8 (READ)
//   XREF to: 006458ea (READ)
// 00569228: ADD ESI,0x2
// 0056922b: MOV byte ptr [EDI + 0x1],AL
// 0056922e: ADD EDI,0x2
// 00569231: CMP AL,0x0
// 00569233: JNZ 0x0056921d
//   XREF to: 0056921d (CONDITIONAL_JUMP)
// 00569235: POP EDI
//   Label: LAB_00569235
// 00569236: PUSH EBX
// 00569237: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 0056923c: MOV dword ptr [EBX + 0x15f6e0],0x0
// 00569246: MOV dword ptr [EBX + 0x15acac],0x0
// 00569250: MOV dword ptr [EBX + 0x15f67c],0x2
// 0056925a: MOV dword ptr [EBX + 0x15aeb4],0x0
// 00569264: MOV dword ptr [EBX + 0x15acb0],0x0
// 0056926e: MOV dword ptr [EBX + 0x161628],0x0
// 00569278: MOV dword ptr [EBX + 0x15acb4],0x0
// 00569282: MOV dword ptr [EBX + 0x161654],0x0
// 0056928c: MOV dword ptr [EBX + 0x15b410],0x0
// 00569296: MOV dword ptr [EBX + 0x15ae88],0x10000
// 005692a0: MOV dword ptr [EBX + 0x15ae8c],0x10000
// 005692aa: MOV ESI,0x6458ec
//   XREF to: 006458ec (DATA)
// 005692af: MOV dword ptr [EBX + 0x15ae90],0x10000
// 005692b9: ADD ESP,0x4
// 005692bc: MOV dword ptr [EBX + 0x161658],0x0
// 005692c6: LEA EDI,[EBX + 0x15ae50]
// 005692cc: MOV dword ptr [EBX + 0x15ae4c],0x0
// 005692d6: PUSH EDI
// 005692d7: MOV AL,byte ptr [ESI]
//   Label: LAB_005692d7
//   XREF to: 006458ec (READ)
//   XREF to: 006458ee (READ)
// 005692d9: MOV byte ptr [EDI],AL
// 005692db: CMP AL,0x0
// 005692dd: JZ 0x005692ef
//   XREF to: 005692ef (CONDITIONAL_JUMP)
// 005692df: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006458ed (READ)
//   XREF to: 006458ef (READ)
// 005692e2: ADD ESI,0x2
// 005692e5: MOV byte ptr [EDI + 0x1],AL
// 005692e8: ADD EDI,0x2
// 005692eb: CMP AL,0x0
// 005692ed: JNZ 0x005692d7
//   XREF to: 005692d7 (CONDITIONAL_JUMP)
// 005692ef: POP EDI
//   Label: LAB_005692ef
// 005692f0: MOV dword ptr [EBX + 0x15ac88],0x0
// 005692fa: MOV dword ptr [EBX + 0x15ac7c],0x0
// 00569304: MOV dword ptr [EBX + 0x15ae70],0x0
// 0056930e: MOV dword ptr [EBX + 0x15ae74],0xffff6f78
// 00569318: MOV dword ptr [EBX + 0x15ae78],0xffff6f78
// 00569322: MOV dword ptr [EBX + 0x15ae7c],0x9088
// 0056932c: MOV dword ptr [EBX + 0x15ae80],0x280
// 00569336: MOV dword ptr [EBX + 0x15ae84],0x0
// 00569340: MOV EAX,EBX
// 00569342: MOV dword ptr [EBX + 0x15ac78],0x0
// 0056934c: POP EDI
// 0056934d: POP ESI
// 0056934e: POP EBX
// 0056934f: RET
