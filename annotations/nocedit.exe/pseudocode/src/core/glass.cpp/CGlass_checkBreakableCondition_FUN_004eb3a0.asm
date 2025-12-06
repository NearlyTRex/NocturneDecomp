; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass * this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a6aa
;   core_crossbow.cpp_CCrossbow_FUN_00448f20 at 004494c2
;   core_gun.cpp_FUN_004f0350 at 004f0a34
;   core_set.cpp_CDemonSet_FUN_0056b810 at 0056bbd5
;   core_tommygun.cpp_FUN_005ddb30 at 005de24d
;   core_turret.cpp_FUN_005e3750 at 005e3bdf
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eb3a0
        ;   Label: core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
    ADD EAX,0x30c                       ; 004eb3a4
    PUSH EAX                            ; 004eb3a9
    MOV EDX,dword ptr [0x006793d0]      ; 004eb3aa | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
    PUSH EDX                            ; 004eb3b0 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004eb3b1 | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004eb3b6
    RET                                 ; 004eb3b9

