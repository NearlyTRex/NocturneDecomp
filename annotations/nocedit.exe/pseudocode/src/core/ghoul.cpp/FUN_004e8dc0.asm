; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ghoul.cpp_FUN_004e8dc0()
;
;
; Referenced Globals:
;   TerminatedCString s_Model_0062deea
;   TerminatedCString s_State_0062def0
;   TerminatedCString s_Lives_left_0062def6
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e220
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8dc0
        ;   Label: core_ghoul.cpp_FUN_004e8dc0
    PUSH ESI                            ; 004e8dc1
    PUSH EDI                            ; 004e8dc2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e8dc3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e8dc7
    PUSH ESI                            ; 004e8dcb
    PUSH EDI                            ; 004e8dcc
    CALL core_enemy.cpp_CEnemy_FUN_004aa170 ; 004e8dcd | int core_enemy.cpp_CEnemy_FUN_004aa170(CEnemy * this_ptr)
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e8dd2
    PUSH 0x0                            ; 004e8dd5
    LEA EBX,[EDI + 0x158]               ; 004e8dd7
    PUSH EBX                            ; 004e8ddd
    PUSH 0x62deea                       ; 004e8dde | = "Model" | s_Model_0062deea = Model
    PUSH ESI                            ; 004e8de3
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 004e8de4 | void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004e8de9
    PUSH EBX                            ; 004e8dec
    PUSH 0x62def0                       ; 004e8ded | = "State" | s_State_0062def0 = State
    PUSH ESI                            ; 004e8df2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 004e8df3 | void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e8df8
    PUSH 0x0                            ; 004e8dfb
    PUSH 0xf423f                        ; 004e8dfd
    PUSH 0x0                            ; 004e8e02
    ADD EDI,0xbed8                      ; 004e8e04
    PUSH EDI                            ; 004e8e0a
    PUSH 0x62def6                       ; 004e8e0b | = "Lives left" | s_Lives_left_0062def6 = Lives left
    PUSH ESI                            ; 004e8e10
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e220 ; 004e8e11 | void core_actor.cpp_CActorPropertyList_FUN_0040e220(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e220 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004e8e16
    POP EDI                             ; 004e8e19
    POP ESI                             ; 004e8e1a
    POP EBX                             ; 004e8e1b
    RET                                 ; 004e8e1c

