; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_smiley.cpp_FUN_005a3810()
;
;
; Referenced Globals:
;   TerminatedCString s_Model_0064f38b
;   TerminatedCString s_State_0064f391
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3810
        ;   Label: core_smiley.cpp_FUN_005a3810
    PUSH ESI                            ; 005a3811
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3812
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a3816
    PUSH ESI                            ; 005a381a
    PUSH EBX                            ; 005a381b
    CALL core_enemy.cpp_CEnemy_FUN_004aa170 ; 005a381c | int core_enemy.cpp_CEnemy_FUN_004aa170(CEnemy * this_ptr)
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a3821
    PUSH 0x0                            ; 005a3824
    ADD EBX,0x158                       ; 005a3826
    PUSH EBX                            ; 005a382c
    PUSH 0x64f38b                       ; 005a382d | = "Model" | s_Model_0064f38b = Model
    PUSH ESI                            ; 005a3832
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 005a3833 | void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005a3838
    PUSH EBX                            ; 005a383b
    PUSH 0x64f391                       ; 005a383c | = "State" | s_State_0064f391 = State
    PUSH ESI                            ; 005a3841
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 005a3842 | void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005a3847
    POP ESI                             ; 005a384a
    POP EBX                             ; 005a384b
    RET                                 ; 005a384c

