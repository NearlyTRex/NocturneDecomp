; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_trigger.cpp_CTrigger_FUN_005df990(CTrigger * this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_CWaypoint_FUN_005ebeb0 at 005ebebb
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005df990
        ;   Label: core_trigger.cpp_CTrigger_FUN_005df990
    MOV EBX,dword ptr [ESP + 0x8]       ; 005df991
    PUSH EBX                            ; 005df995
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005df996
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

