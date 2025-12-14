; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dracbrid.cpp_FUN_00486c90()
;
;
; Referenced Globals:
;   TerminatedCString s_Model_00621c46
;   TerminatedCString s_Rise_event_00621c4c
;   TerminatedCString s_State_00621c57
;   TerminatedCString s_Which_bride_voice_1_5_00621c5d
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486c90
        ;   Label: core_dracbrid.cpp_FUN_00486c90
    PUSH ESI                            ; 00486c91
    PUSH EDI                            ; 00486c92
    MOV EDI,dword ptr [ESP + 0x10]      ; 00486c93
    MOV EBX,dword ptr [ESP + 0x14]      ; 00486c97
    PUSH EBX                            ; 00486c9b
    PUSH EDI                            ; 00486c9c
    CALL core_enemy.cpp_CEnemy_FUN_004aa170 ; 00486c9d
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004aa170(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 00486ca2
    PUSH 0x0                            ; 00486ca5
    LEA ESI,[EDI + 0x158]               ; 00486ca7
    PUSH ESI                            ; 00486cad
    PUSH 0x621c46                       ; 00486cae | = "Model"
    PUSH EBX                            ; 00486cb3
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 00486cb4
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00486cb9
    LEA EAX,[EDI + 0xbee0]              ; 00486cbc
    PUSH EAX                            ; 00486cc2
    PUSH 0x621c4c                       ; 00486cc3 | = "Rise event"
    PUSH EBX                            ; 00486cc8
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 00486cc9
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00486cce
    PUSH ESI                            ; 00486cd1
    PUSH 0x621c57                       ; 00486cd2 | = "State"
    PUSH EBX                            ; 00486cd7
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 00486cd8
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00486cdd
    PUSH 0x0                            ; 00486ce0
    ADD EDI,0xbf44                      ; 00486ce2
    PUSH EDI                            ; 00486ce8
    PUSH 0x621c5d                       ; 00486ce9 | = "Which bride voice (1..5)"
    PUSH EBX                            ; 00486cee
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0 ; 00486cef
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00486cf4
    POP EDI                             ; 00486cf7
    POP ESI                             ; 00486cf8
    POP EBX                             ; 00486cf9
    RET                                 ; 00486cfa

