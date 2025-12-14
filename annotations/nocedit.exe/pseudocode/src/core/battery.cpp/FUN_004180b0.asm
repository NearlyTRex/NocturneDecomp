; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_battery.cpp_FUN_004180b0()
;
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00615a11
;   TerminatedCString s_Discharge_time_sec_00615a23
;   TerminatedCString s_Charge_time_sec_00615a38
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004180b0
        ;   Label: core_battery.cpp_FUN_004180b0
    PUSH ESI                            ; 004180b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004180b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004180b6
    PUSH ESI                            ; 004180ba
    PUSH EBX                            ; 004180bb
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004180bc
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004180c1
    PUSH 0x0                            ; 004180c4
    LEA EAX,[EBX + 0x158]               ; 004180c6
    PUSH EAX                            ; 004180cc
    PUSH 0x615a11                       ; 004180cd | = "Model file (.kfm)"
    PUSH ESI                            ; 004180d2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 004180d3
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004180d8
    PUSH 0x0                            ; 004180db
    LEA EAX,[EBX + 0x2dc]               ; 004180dd
    PUSH EAX                            ; 004180e3
    PUSH 0x615a23                       ; 004180e4 | = "Discharge time (sec)"
    PUSH ESI                            ; 004180e9
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 004180ea
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004180ef
    PUSH 0x0                            ; 004180f2
    ADD EBX,0x2d8                       ; 004180f4
    PUSH EBX                            ; 004180fa
    PUSH 0x615a38                       ; 004180fb | = "Charge time (sec)"
    PUSH ESI                            ; 00418100
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 00418101
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00418106
    POP ESI                             ; 00418109
    POP EBX                             ; 0041810a
    RET                                 ; 0041810b

