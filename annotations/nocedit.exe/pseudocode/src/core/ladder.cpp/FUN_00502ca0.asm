; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ladder.cpp_FUN_00502ca0()
;
;
; Referenced Globals:
;   TerminatedCString s_Model_00630e60
;   TerminatedCString s_Master_actor_00630e66
;   TerminatedCString s_ground_type_00630e73
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e300
;   core_actor.cpp_CActorPropertyList_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502ca0
        ;   Label: core_ladder.cpp_FUN_00502ca0
    PUSH ESI                            ; 00502ca1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00502ca2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00502ca6
    PUSH ESI                            ; 00502caa
    PUSH EBX                            ; 00502cab
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 00502cac | void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00502cb1
    PUSH 0x0                            ; 00502cb4
    LEA EAX,[EBX + 0x158]               ; 00502cb6
    PUSH EAX                            ; 00502cbc
    PUSH 0x630e60                       ; 00502cbd | = "Model" | s_Model_00630e60 = Model
    PUSH ESI                            ; 00502cc2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 00502cc3 | void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00502cc8
    PUSH 0x0                            ; 00502ccb
    PUSH 0x0                            ; 00502ccd
    PUSH 0x1                            ; 00502ccf
    LEA EAX,[EBX + 0x2e0]               ; 00502cd1
    PUSH EAX                            ; 00502cd7
    PUSH 0x630e66                       ; 00502cd8 | = "Master actor" | s_Master_actor_00630e66 = Master actor
    PUSH ESI                            ; 00502cdd
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e350 ; 00502cde | int core_actor.cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00502ce3
    ADD EBX,0x2fc                       ; 00502ce6
    PUSH EBX                            ; 00502cec
    PUSH 0x630e73                       ; 00502ced | = "ground type" | s_ground_type_00630e73 = ground type
    PUSH ESI                            ; 00502cf2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e300 ; 00502cf3 | void core_actor.cpp_CActorPropertyList_FUN_0040e300(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e300 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00502cf8
    POP ESI                             ; 00502cfb
    POP EBX                             ; 00502cfc
    RET                                 ; 00502cfd

