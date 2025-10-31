// Name: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
// Address: 00524120
// Address Range: [[00524120, 00524249]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(CDemonMission * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_process_FUN_00524250 (00524250) at 005242bb [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 0052448c [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538c95 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_006391fb
//   TerminatedCString s_none_0063920f
//   TerminatedCString s_core_mission_cpp_00639214
//   TerminatedCString s_CDemonMission_buildActiv_00639228
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02d05310
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_actor.cpp_FUN_0040cd10
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_FUN_00570fc0
//   core_setcolid.cpp_CDemonSet_FUN_005743e0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl
core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  CDemonSet *pCVar1;
  int iVar2;
  
  g_CDemonSetPtr->actor_list_ptr = (void *)0x0;
  this_ptr_00 = this_ptr->first_actor;
  do {
    if (this_ptr_00 == (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
      core_set_cpp_CDemonSet_FUN_00570fc0(g_CDemonSetPtr);
      return;
    }
    core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
              (this_ptr_00,"..\\core\\mission.cpp",0x423);
    if ((this_ptr_00->location).area_id == *(int *)this_ptr->field0_0x0) {
      if (this_ptr_00->was_created == 0) {
        if (this_ptr_00->create_event[0] != '\0') {
          iVar2 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr_00->create_event,"none");
          if ((iVar2 != 0) &&
             (iVar2 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                                (g_CEventListPtr,this_ptr_00->create_event), iVar2 == 0))
          goto LAB_0052422f;
        }
        iVar2 = core_actor_cpp_FUN_0040cd10();
        if (iVar2 == 0) {
          this_ptr_00->was_created = 2;
        }
        else {
          this_ptr_00->was_created = 1;
LAB_005241b1:
          if (1999 < (int)g_CDemonSetPtr->actor_list_ptr) {
            g_CurrentFilename = "..\\core\\mission.cpp";
            g_CurrentLineNumber = 0x44e;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::buildActiveSetActorList - Too many actors in current set!");
          }
          pCVar1 = g_CDemonSetPtr;
          *(CDemonActor **)
           (g_CDemonSetPtr->actor_list_data + (int)g_CDemonSetPtr->actor_list_ptr * 4) = this_ptr_00
          ;
          pCVar1->actor_list_ptr = (void *)((int)pCVar1->actor_list_ptr + 1);
        }
      }
      else {
LAB_0052422f:
        if (this_ptr_00->was_created == 1) goto LAB_005241b1;
      }
    }
    this_ptr_00 = (this_ptr_00->metadata).next_actor;
  } while( true );
}


// Assembly code:
// 00524120: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
// 00524121: PUSH ESI
// 00524122: PUSH EDI
// 00524123: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00524127: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0052412c: MOV dword ptr [EAX + 0x14d154],0x0
//   XREF to: 032613cc (WRITE)
// 00524136: MOV EBX,dword ptr [EDI + 0x548]
// 0052413c: TEST EBX,EBX
// 0052413e: JZ 0x00524166
//   XREF to: 00524166 (CONDITIONAL_JUMP)
// 00524140: PUSH 0x423
//   Label: LAB_00524140
// 00524145: PUSH 0x6391fb
//   XREF to: 006391fb (DATA)
// 0052414a: PUSH EBX
// 0052414b: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00524150: MOV EAX,dword ptr [EBX + 0x2c]
// 00524153: MOV EDX,dword ptr [EDI]
// 00524155: ADD ESP,0xc
// 00524158: CMP EAX,EDX
// 0052415a: JZ 0x00524187
//   XREF to: 00524187 (CONDITIONAL_JUMP)
// 0052415c: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_0052415c
// 00524162: TEST EBX,EBX
// 00524164: JNZ 0x00524140
//   XREF to: 00524140 (CONDITIONAL_JUMP)
// 00524166: MOV EAX,[0x006810c8]
//   Label: LAB_00524166
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0052416b: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0052416c: CALL core_setcolid.cpp_CDemonSet_FUN_005743e0
//   XREF to: 005743e0 (UNCONDITIONAL_CALL)
// 00524171: ADD ESP,0x4
// 00524174: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0052417a: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0052417b: CALL core_set.cpp_CDemonSet_FUN_00570fc0
//   XREF to: 00570fc0 (UNCONDITIONAL_CALL)
// 00524180: ADD ESP,0x4
// 00524183: POP EDI
// 00524184: POP ESI
// 00524185: POP EBX
// 00524186: RET
// 00524187: CMP dword ptr [EBX + 0x70],0x0
//   Label: LAB_00524187
// 0052418b: JNZ 0x0052422f
//   XREF to: 0052422f (CONDITIONAL_JUMP)
// 00524191: CMP byte ptr [EBX + 0x78],0x0
// 00524195: JNZ 0x00524202
//   XREF to: 00524202 (CONDITIONAL_JUMP)
// 00524197: PUSH dword ptr [EBX + 0x74]
//   Label: LAB_00524197
// 0052419a: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0052419f: ADD ESP,0x4
// 005241a2: TEST EAX,EAX
// 005241a4: JZ 0x0052423e
//   XREF to: 0052423e (CONDITIONAL_JUMP)
// 005241aa: MOV dword ptr [EBX + 0x70],0x1
// 005241b1: MOV EAX,[0x006810c8]
//   Label: LAB_005241b1
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005241b6: CMP dword ptr [EAX + 0x14d154],0x7d0
//   XREF to: 032613cc (READ)
// 005241c0: JL 0x005241e5
//   XREF to: 005241e5 (CONDITIONAL_JUMP)
// 005241c2: MOV ECX,0x639214
//   XREF to: 00639214 (PARAM)
// 005241c7: MOV ESI,0x44e
// 005241cc: PUSH 0x639228
//   XREF to: 00639228 (DATA)
// 005241d1: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005241d7: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005241dd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005241e2: ADD ESP,0x4
// 005241e5: MOV EAX,[0x006810c8]
//   Label: LAB_005241e5
//   XREF to: 006810c8 (READ)
// 005241ea: MOV ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005241f0: MOV dword ptr [EAX + ESI*0x4 + 0x14d158],EBX
//   XREF to: 032613d0 (WRITE)
// 005241f7: INC dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ_WRITE)
// 005241fd: JMP 0x0052415c
//   XREF to: 0052415c (UNCONDITIONAL_JUMP)
// 00524202: PUSH 0x63920f
//   Label: LAB_00524202
//   XREF to: 0063920f (DATA)
// 00524207: LEA ESI,[EBX + 0x78]
// 0052420a: PUSH ESI
// 0052420b: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00524210: ADD ESP,0x8
// 00524213: TEST EAX,EAX
// 00524215: JZ 0x00524197
//   XREF to: 00524197 (CONDITIONAL_JUMP)
// 00524217: PUSH ESI
// 00524218: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 0052421e: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 0052421f: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00524224: ADD ESP,0x8
// 00524227: TEST EAX,EAX
// 00524229: JNZ 0x00524197
//   XREF to: 00524197 (CONDITIONAL_JUMP)
// 0052422f: CMP dword ptr [EBX + 0x70],0x1
//   Label: LAB_0052422f
// 00524233: JZ 0x005241b1
//   XREF to: 005241b1 (CONDITIONAL_JUMP)
// 00524239: JMP 0x0052415c
//   XREF to: 0052415c (UNCONDITIONAL_JUMP)
// 0052423e: MOV dword ptr [EBX + 0x70],0x2
//   Label: LAB_0052423e
// 00524245: JMP 0x0052415c
//   XREF to: 0052415c (UNCONDITIONAL_JUMP)
