// Name: core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
// Address: 004d2330
// Address Range: [[004d2330, 004d2393]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330()
// Cross-references:
//   core_frankgen.cpp_FUN_004d1f70 (004d1f70) at 004d1f8a [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d2500 (004d2500) at 004d2536 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d25f0 (004d25f0) at 004d2653 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_PlaySounds_FUN_004d1a40 (004d1a40) at 004d1a57 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_frankgen_cpp_0062ab4f
//   TerminatedCString s_CFrankenstienMachine_fin_0062ab64
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CFrankenstienMachineClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 actors_other_frankgen.cpp_CFrankenstienMachine_findLeader() */

CDemonActor * core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar2) {
      g_CurrentFilename = "..\\core\\frankgen.cpp";
      g_CurrentLineNumber = 0x1cf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CFrankenstienMachine::findLeader - no leader found!");
      return (CDemonActor *)0x0;
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3),
                        g_CFrankenstienMachineClassInfo.name_hash);
    if (pCVar1 != (CDemonActor *)0x0) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return pCVar1;
}


// Assembly code:
// 004d2330: PUSH EBX
//   Label: core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
// 004d2331: PUSH ESI
// 004d2332: PUSH EDI
// 004d2333: PUSH EBP
// 004d2334: XOR ESI,ESI
// 004d2336: XOR EBX,EBX
// 004d2338: MOV EAX,[0x006810c8]
//   Label: LAB_004d2338
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d233d: CMP EBX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004d2343: JGE 0x004d236a
//   XREF to: 004d236a (CONDITIONAL_JUMP)
// 004d2345: MOV EDI,dword ptr [0x02d7b7ec]
//   XREF to: 02d7b7ec (READ)
// 004d234b: PUSH EDI
// 004d234c: MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
// 004d2353: PUSH EBP
// 004d2354: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d2359: ADD ESP,0x8
// 004d235c: TEST EAX,EAX
// 004d235e: JNZ 0x004d2260
//   XREF to: 004d2260 (CONDITIONAL_JUMP)
// 004d2364: INC EBX
// 004d2365: ADD ESI,0x4
// 004d2368: JMP 0x004d2338
//   XREF to: 004d2338 (UNCONDITIONAL_JUMP)
// 004d236a: MOV ECX,0x62ab4f
//   Label: LAB_004d236a
//   XREF to: 0062ab4f (PARAM)
// 004d236f: MOV EBX,0x1cf
// 004d2374: PUSH 0x62ab64
//   XREF to: 0062ab64 (DATA)
// 004d2379: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004d237f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004d2385: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004d238a: ADD ESP,0x4
// 004d238d: XOR EAX,EAX
// 004d238f: POP EBP
// 004d2390: POP EDI
// 004d2391: POP ESI
// 004d2392: POP EBX
// 004d2393: RET
