; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c5250(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_00587834
;   TerminatedCString s_modelName_0058783a
;   TerminatedCString s_guardDistance_00587844
;   TerminatedCString s_motion_state_00587852
;   int INT_005bac7c = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5250
        ;   Label: FUN_004c5250
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c5251
    PUSH EBX                            ; 004c5255
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 004c5256
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_archive_FUN_004796c0()
    ADD ESP,0x4                         ; 004c525b
    PUSH 0x587834                       ; 004c525e | = "speed"
    LEA EAX,[EBX + 0xbc8c]              ; 004c5263
    PUSH EAX                            ; 004c5269
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004c526a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004c526f
    PUSH 0x58783a                       ; 004c5272 | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 004c5277
    PUSH EAX                            ; 004c527d
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 004c527e
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    MOV EDX,dword ptr [0x005bac7c]      ; 004c5283 | INT_005bac7c
    ADD ESP,0x8                         ; 004c5289
    CMP EDX,0x2                         ; 004c528c
    JL 0x004c52a7                       ; 004c528f
        ;   XREF to: 004c52a7 (CONDITIONAL_JUMP)  ; LAB_004c52a7
    PUSH 0x587852                       ; 004c5291 | = "motion state"
        ;   Label: LAB_004c5291
    ADD EBX,0x150                       ; 004c5296
    PUSH EBX                            ; 004c529c
    CALL core_actor.cpp_FUN_0040cb00    ; 004c529d
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cb00()
    ADD ESP,0x8                         ; 004c52a2
    POP EBX                             ; 004c52a5
    RET                                 ; 004c52a6
    PUSH 0x587844                       ; 004c52a7 | = "guardDistance"
        ;   Label: LAB_004c52a7
    LEA EAX,[EBX + 0xbc9c]              ; 004c52ac
    PUSH EAX                            ; 004c52b2
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004c52b3
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004c52b8
    JMP 0x004c5291                      ; 004c52bb
        ;   XREF to: 004c5291 (UNCONDITIONAL_JUMP)  ; LAB_004c5291

