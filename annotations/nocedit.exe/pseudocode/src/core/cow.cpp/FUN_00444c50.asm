; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_cow.cpp_FUN_00444c50()
;
;
; Referenced Globals:
;   TerminatedCString s_Model_006195b6
;   TerminatedCString s_State_006195bc
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444c50
        ;   Label: core_cow.cpp_FUN_00444c50
    PUSH ESI                            ; 00444c51
    MOV EBX,dword ptr [ESP + 0xc]       ; 00444c52
    MOV ESI,dword ptr [ESP + 0x10]      ; 00444c56
    PUSH ESI                            ; 00444c5a
    PUSH EBX                            ; 00444c5b
    CALL core_enemy.cpp_CEnemy_FUN_004aa170 ; 00444c5c | int core_enemy.cpp_CEnemy_FUN_004aa170(CEnemy * this_ptr)
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00444c61
    PUSH 0x0                            ; 00444c64
    ADD EBX,0x158                       ; 00444c66
    PUSH EBX                            ; 00444c6c
    PUSH 0x6195b6                       ; 00444c6d | = "Model" | s_Model_006195b6 = Model
    PUSH ESI                            ; 00444c72
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 00444c73 | void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00444c78
    PUSH EBX                            ; 00444c7b
    PUSH 0x6195bc                       ; 00444c7c | = "State" | s_State_006195bc = State
    PUSH ESI                            ; 00444c81
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 00444c82 | void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00444c87
    POP ESI                             ; 00444c8a
    POP EBX                             ; 00444c8b
    RET                                 ; 00444c8c

