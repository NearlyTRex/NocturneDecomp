// Name: core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700
// Address: 00411700
// Address Range: [[00411700, 00411813]]
// Convention: unknown
// Signature: undefined core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700()
// Cross-references:
//   core_gabriela.cpp_FUN_004d5c10 (004d5c10) at 004d5c3d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1f00 (005c1f00) at 005c1f3c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_ammobox_cpp_00614be0
//   TerminatedCString s_core_ammobox_cpp_00614bf4
//   TerminatedCString s_Out_of_memory_00614c08
//   TerminatedCString s_Some_ammo_00614c16
//   undefined4 s_ome_ammo_00614c17
//   undefined4 s_me_ammo_00614c18
//   undefined4 s_e_ammo_00614c19
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
//   core_ammo.cpp_CAmmo_FUN_00410fd0
//   core_ammo.cpp_CAmmo_FUN_004111b0
//   core_inv.cpp_CInventory_addItem_FUN_004fd600
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

/* Signature: undefined1 actors_other_ammobox.cpp_AllocateMemoryMaybe(CAmmoBox* param_1, undefined4
   param_2) */

void core_ammobox_cpp_AllocateMemoryMaybe_FUN_00411700(void)

{
  char cVar1;
  CAmmo *this_ptr;
  char *pcVar2;
  CAmmo *pCVar3;
  int in_stack_00000004;
  CInventory *in_stack_00000008;
  CInventory *in_stack_0000002c;
  
  if (*(CDemonActor **)(in_stack_00000004 + 800) != (CDemonActor *)0x0) {
    core_inv_cpp_CInventory_addItem_FUN_004fd600
              (in_stack_00000008,*(CDemonActor **)(in_stack_00000004 + 800),1);
    *(undefined4 *)(in_stack_00000004 + 800) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x314) = 0;
    return;
  }
  if (*(int *)(in_stack_00000004 + 0x314) == 0) {
    return;
  }
  this_ptr = (CAmmo *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                                (0x31c,"..\\core\\ammobox.cpp",0xa1);
  if (this_ptr != (CAmmo *)0x0) {
    this_ptr = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(this_ptr);
  }
  if (this_ptr == (CAmmo *)0x0) {
    g_CurrentFilename = "..\\core\\ammobox.cpp";
    g_CurrentLineNumber = 0xa2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  core_ammo_cpp_CAmmo_FUN_00410fd0();
  core_ammo_cpp_CAmmo_FUN_004111b0();
  this_ptr->ammo_type = *(int *)(in_stack_00000004 + 0x318);
  (*((this_ptr->base_actor).vtable)->setup)(&this_ptr->base_actor);
  core_ammo_cpp_CAmmo_FUN_00410fd0();
  pcVar2 = "Some_ammo";
  pCVar3 = this_ptr;
  do {
    cVar1 = *pcVar2;
    (pCVar3->base_actor).actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    (pCVar3->base_actor).actor_name[1] = cVar1;
    pCVar3 = (CAmmo *)((pCVar3->base_actor).actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004fd600(in_stack_0000002c,&this_ptr->base_actor,1);
  *(undefined4 *)(in_stack_00000004 + 0x314) = 0;
  return;
}


// Assembly code:
// 00411700: PUSH EBX
//   Label: core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700
// 00411701: PUSH EBP
// 00411702: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00411706: MOV EDX,dword ptr [EBP + 0x320]
// 0041170c: TEST EDX,EDX
// 0041170e: JNZ 0x0041171c
//   XREF to: 0041171c (CONDITIONAL_JUMP)
// 00411710: CMP dword ptr [EBP + 0x314],0x0
// 00411717: JNZ 0x00411743
//   XREF to: 00411743 (CONDITIONAL_JUMP)
// 00411719: POP EBP
// 0041171a: POP EBX
// 0041171b: RET
// 0041171c: PUSH 0x1
//   Label: LAB_0041171c
// 0041171e: PUSH EDX
// 0041171f: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00411723: PUSH EBX
// 00411724: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 00411729: MOV dword ptr [EBP + 0x320],0x0
// 00411733: ADD ESP,0xc
// 00411736: MOV dword ptr [EBP + 0x314],0x0
// 00411740: POP EBP
// 00411741: POP EBX
// 00411742: RET
// 00411743: PUSH 0xa1
//   Label: LAB_00411743
// 00411748: PUSH 0x614be0
//   XREF to: 00614be0 (DATA)
// 0041174d: PUSH 0x31c
// 00411752: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00411757: ADD ESP,0xc
// 0041175a: TEST EAX,EAX
// 0041175c: JZ 0x00411767
//   XREF to: 00411767 (CONDITIONAL_JUMP)
// 0041175e: PUSH EAX
// 0041175f: CALL core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
//   XREF to: 00410dc0 (UNCONDITIONAL_CALL)
// 00411764: ADD ESP,0x4
// 00411767: PUSH EDI
//   Label: LAB_00411767
// 00411768: PUSH ESI
// 00411769: MOV EBX,EAX
// 0041176b: TEST EAX,EAX
// 0041176d: JNZ 0x00411792
//   XREF to: 00411792 (CONDITIONAL_JUMP)
// 0041176f: MOV ESI,0x614bf4
//   XREF to: 00614bf4 (DATA)
// 00411774: MOV EDI,0xa2
// 00411779: PUSH 0x614c08
//   XREF to: 00614c08 (DATA)
// 0041177e: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00411784: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0041178a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041178f: ADD ESP,0x4
// 00411792: LEA ESI,[EBP + 0x2d4]
//   Label: LAB_00411792
// 00411798: PUSH ESI
// 00411799: PUSH EBX
// 0041179a: CALL core_ammo.cpp_CAmmo_FUN_00410fd0
//   XREF to: 00410fd0 (UNCONDITIONAL_CALL)
// 0041179f: ADD ESP,0x8
// 004117a2: MOV EAX,dword ptr [EBP + 0x314]
// 004117a8: PUSH EAX
// 004117a9: PUSH EBX
// 004117aa: CALL core_ammo.cpp_CAmmo_FUN_004111b0
//   XREF to: 004111b0 (UNCONDITIONAL_CALL)
// 004117af: MOV EAX,dword ptr [EBP + 0x318]
// 004117b5: ADD ESP,0x8
// 004117b8: MOV dword ptr [EBX + 0x318],EAX
// 004117be: PUSH EBX
// 004117bf: MOV EAX,dword ptr [EBX + 0x154]
// 004117c5: CALL dword ptr [EAX]
// 004117c7: ADD ESP,0x4
// 004117ca: PUSH ESI
// 004117cb: PUSH EBX
// 004117cc: CALL core_ammo.cpp_CAmmo_FUN_00410fd0
//   XREF to: 00410fd0 (UNCONDITIONAL_CALL)
// 004117d1: ADD ESP,0x8
// 004117d4: MOV EDI,EBX
// 004117d6: MOV ESI,0x614c16
//   XREF to: 00614c16 (DATA)
// 004117db: PUSH EDI
// 004117dc: MOV AL,byte ptr [ESI]
//   Label: LAB_004117dc
//   XREF to: 00614c16 (READ)
//   XREF to: 00614c18 (READ)
// 004117de: MOV byte ptr [EDI],AL
// 004117e0: CMP AL,0x0
// 004117e2: JZ 0x004117f4
//   XREF to: 004117f4 (CONDITIONAL_JUMP)
// 004117e4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614c17 (READ)
//   XREF to: 00614c19 (READ)
// 004117e7: ADD ESI,0x2
// 004117ea: MOV byte ptr [EDI + 0x1],AL
// 004117ed: ADD EDI,0x2
// 004117f0: CMP AL,0x0
// 004117f2: JNZ 0x004117dc
//   XREF to: 004117dc (CONDITIONAL_JUMP)
// 004117f4: POP EDI
//   Label: LAB_004117f4
// 004117f5: PUSH 0x1
// 004117f7: PUSH EBX
// 004117f8: MOV EDX,dword ptr [ESP + 0x20]
// 004117fc: PUSH EDX
// 004117fd: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 00411802: ADD ESP,0xc
// 00411805: MOV dword ptr [EBP + 0x314],0x0
// 0041180f: POP ESI
// 00411810: POP EDI
// 00411811: POP EBP
// 00411812: POP EBX
// 00411813: RET
