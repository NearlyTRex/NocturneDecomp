; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005417c0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005961cc
;   string s_modelName_005961d2
;   string s_motion_state_005961dc
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005417c0
        ;   Label: FUN_005417c0
    PUSH ESI                            ; 005417c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005417c2
    PUSH ESI                            ; 005417c6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 005417c7
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_archive_FUN_004796c0()
    ADD ESP,0x4                         ; 005417cc
    PUSH 0x5961cc                       ; 005417cf | = "speed"
    LEA EBX,[ESI + 0xbc8c]              ; 005417d4
    PUSH EBX                            ; 005417da
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 005417db
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 005417e0
    PUSH 0x5961d2                       ; 005417e3 | = "modelName"
    LEA EBX,[ESI + 0x150]               ; 005417e8
    PUSH EBX                            ; 005417ee
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 005417ef
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    ADD ESP,0x8                         ; 005417f4
    PUSH 0x5961dc                       ; 005417f7 | = "motion state"
    PUSH EBX                            ; 005417fc
    CALL core_actor.cpp_FUN_0040cb00    ; 005417fd
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cb00()
    ADD ESP,0x8                         ; 00541802
    POP ESI                             ; 00541805
    POP EBX                             ; 00541806
    RET                                 ; 00541807

