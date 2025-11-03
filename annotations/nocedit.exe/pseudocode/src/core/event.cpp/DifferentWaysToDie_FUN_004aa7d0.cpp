// Name: core_event.cpp_DifferentWaysToDie_FUN_004aa7d0
// Address: 004aa7d0
// Address Range: [[004aa7d0, 004aa95a]]
// Convention: unknown
// Signature: undefined core_event.cpp_DifferentWaysToDie_FUN_004aa7d0()
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004abe9d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_generic_0062457a
//   TerminatedCString s_drown_00624582
//   TerminatedCString s_fall_00624588
//   TerminatedCString s_explode_0062458d
//   TerminatedCString s_fallApart_00624595
//   TerminatedCString s_shatter_0062459f
//   TerminatedCString s_electrocute_006245a7
//   TerminatedCString s_gas_006245b3
//   TerminatedCString s_Chopped_006245b7
//   TerminatedCString s_Crushed_006245bf
//   TerminatedCString s_Impale_006245c7
//   TerminatedCString s_Fire_006245ce
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

undefined4 core_event_cpp_DifferentWaysToDie_FUN_004aa7d0(void)

{
  int iVar1;
  char *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"generic");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"drown");
  if (iVar1 == 0) {
    *in_stack_00000008 = 1;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"fall");
  if (iVar1 == 0) {
    *in_stack_00000008 = 2;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"explode");
  if (iVar1 == 0) {
    *in_stack_00000008 = 3;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"fallApart");
  if (iVar1 == 0) {
    *in_stack_00000008 = 4;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"shatter");
  if (iVar1 == 0) {
    *in_stack_00000008 = 5;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"electrocute");
  if (iVar1 == 0) {
    *in_stack_00000008 = 6;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"gas");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x69;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Chopped");
  if (iVar1 == 0) {
    *in_stack_00000008 = 7;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Crushed");
  if (iVar1 == 0) {
    *in_stack_00000008 = 8;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Impale");
  if (iVar1 == 0) {
    *in_stack_00000008 = 9;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Fire");
  if (iVar1 == 0) {
    *in_stack_00000008 = 10;
    return 1;
  }
  return 0;
}


// Assembly code:
// 004aa7d0: PUSH EBX
//   Label: core_event.cpp_DifferentWaysToDie_FUN_004aa7d0
// 004aa7d1: PUSH ESI
// 004aa7d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004aa7d6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004aa7da: PUSH 0x62457a
//   XREF to: 0062457a (DATA)
// 004aa7df: PUSH EBX
// 004aa7e0: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa7e5: ADD ESP,0x8
// 004aa7e8: TEST EAX,EAX
// 004aa7ea: JNZ 0x004aa7f6
//   XREF to: 004aa7f6 (CONDITIONAL_JUMP)
// 004aa7ec: MOV dword ptr [ESI],EAX
// 004aa7ee: MOV EAX,0x1
// 004aa7f3: POP ESI
// 004aa7f4: POP EBX
// 004aa7f5: RET
// 004aa7f6: PUSH 0x624582
//   Label: LAB_004aa7f6
//   XREF to: 00624582 (DATA)
// 004aa7fb: PUSH EBX
// 004aa7fc: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa801: ADD ESP,0x8
// 004aa804: TEST EAX,EAX
// 004aa806: JNZ 0x004aa816
//   XREF to: 004aa816 (CONDITIONAL_JUMP)
// 004aa808: MOV dword ptr [ESI],0x1
// 004aa80e: MOV EAX,0x1
// 004aa813: POP ESI
// 004aa814: POP EBX
// 004aa815: RET
// 004aa816: PUSH 0x624588
//   Label: LAB_004aa816
//   XREF to: 00624588 (DATA)
// 004aa81b: PUSH EBX
// 004aa81c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa821: ADD ESP,0x8
// 004aa824: TEST EAX,EAX
// 004aa826: JNZ 0x004aa836
//   XREF to: 004aa836 (CONDITIONAL_JUMP)
// 004aa828: MOV dword ptr [ESI],0x2
// 004aa82e: MOV EAX,0x1
// 004aa833: POP ESI
// 004aa834: POP EBX
// 004aa835: RET
// 004aa836: PUSH 0x62458d
//   Label: LAB_004aa836
//   XREF to: 0062458d (DATA)
// 004aa83b: PUSH EBX
// 004aa83c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa841: ADD ESP,0x8
// 004aa844: TEST EAX,EAX
// 004aa846: JNZ 0x004aa856
//   XREF to: 004aa856 (CONDITIONAL_JUMP)
// 004aa848: MOV dword ptr [ESI],0x3
// 004aa84e: MOV EAX,0x1
// 004aa853: POP ESI
// 004aa854: POP EBX
// 004aa855: RET
// 004aa856: PUSH 0x624595
//   Label: LAB_004aa856
//   XREF to: 00624595 (DATA)
// 004aa85b: PUSH EBX
// 004aa85c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa861: ADD ESP,0x8
// 004aa864: TEST EAX,EAX
// 004aa866: JNZ 0x004aa876
//   XREF to: 004aa876 (CONDITIONAL_JUMP)
// 004aa868: MOV dword ptr [ESI],0x4
// 004aa86e: MOV EAX,0x1
// 004aa873: POP ESI
// 004aa874: POP EBX
// 004aa875: RET
// 004aa876: PUSH 0x62459f
//   Label: LAB_004aa876
//   XREF to: 0062459f (DATA)
// 004aa87b: PUSH EBX
// 004aa87c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa881: ADD ESP,0x8
// 004aa884: TEST EAX,EAX
// 004aa886: JNZ 0x004aa896
//   XREF to: 004aa896 (CONDITIONAL_JUMP)
// 004aa888: MOV dword ptr [ESI],0x5
// 004aa88e: MOV EAX,0x1
// 004aa893: POP ESI
// 004aa894: POP EBX
// 004aa895: RET
// 004aa896: PUSH 0x6245a7
//   Label: LAB_004aa896
//   XREF to: 006245a7 (DATA)
// 004aa89b: PUSH EBX
// 004aa89c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa8a1: ADD ESP,0x8
// 004aa8a4: TEST EAX,EAX
// 004aa8a6: JNZ 0x004aa8b6
//   XREF to: 004aa8b6 (CONDITIONAL_JUMP)
// 004aa8a8: MOV dword ptr [ESI],0x6
// 004aa8ae: MOV EAX,0x1
// 004aa8b3: POP ESI
// 004aa8b4: POP EBX
// 004aa8b5: RET
// 004aa8b6: PUSH 0x6245b3
//   Label: LAB_004aa8b6
//   XREF to: 006245b3 (DATA)
// 004aa8bb: PUSH EBX
// 004aa8bc: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa8c1: ADD ESP,0x8
// 004aa8c4: TEST EAX,EAX
// 004aa8c6: JNZ 0x004aa8d6
//   XREF to: 004aa8d6 (CONDITIONAL_JUMP)
// 004aa8c8: MOV dword ptr [ESI],0x69
// 004aa8ce: MOV EAX,0x1
// 004aa8d3: POP ESI
// 004aa8d4: POP EBX
// 004aa8d5: RET
// 004aa8d6: PUSH 0x6245b7
//   Label: LAB_004aa8d6
//   XREF to: 006245b7 (DATA)
// 004aa8db: PUSH EBX
// 004aa8dc: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa8e1: ADD ESP,0x8
// 004aa8e4: TEST EAX,EAX
// 004aa8e6: JNZ 0x004aa8f6
//   XREF to: 004aa8f6 (CONDITIONAL_JUMP)
// 004aa8e8: MOV dword ptr [ESI],0x7
// 004aa8ee: MOV EAX,0x1
// 004aa8f3: POP ESI
// 004aa8f4: POP EBX
// 004aa8f5: RET
// 004aa8f6: PUSH 0x6245bf
//   Label: LAB_004aa8f6
//   XREF to: 006245bf (DATA)
// 004aa8fb: PUSH EBX
// 004aa8fc: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa901: ADD ESP,0x8
// 004aa904: TEST EAX,EAX
// 004aa906: JNZ 0x004aa916
//   XREF to: 004aa916 (CONDITIONAL_JUMP)
// 004aa908: MOV dword ptr [ESI],0x8
// 004aa90e: MOV EAX,0x1
// 004aa913: POP ESI
// 004aa914: POP EBX
// 004aa915: RET
// 004aa916: PUSH 0x6245c7
//   Label: LAB_004aa916
//   XREF to: 006245c7 (DATA)
// 004aa91b: PUSH EBX
// 004aa91c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa921: ADD ESP,0x8
// 004aa924: TEST EAX,EAX
// 004aa926: JNZ 0x004aa936
//   XREF to: 004aa936 (CONDITIONAL_JUMP)
// 004aa928: MOV dword ptr [ESI],0x9
// 004aa92e: MOV EAX,0x1
// 004aa933: POP ESI
// 004aa934: POP EBX
// 004aa935: RET
// 004aa936: PUSH 0x6245ce
//   Label: LAB_004aa936
//   XREF to: 006245ce (DATA)
// 004aa93b: PUSH EBX
// 004aa93c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa941: ADD ESP,0x8
// 004aa944: TEST EAX,EAX
// 004aa946: JNZ 0x004aa956
//   XREF to: 004aa956 (CONDITIONAL_JUMP)
// 004aa948: MOV dword ptr [ESI],0xa
// 004aa94e: MOV EAX,0x1
// 004aa953: POP ESI
// 004aa954: POP EBX
// 004aa955: RET
// 004aa956: XOR EAX,EAX
//   Label: LAB_004aa956
// 004aa958: POP ESI
// 004aa959: POP EBX
// 004aa95a: RET
