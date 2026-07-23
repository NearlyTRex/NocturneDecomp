; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bc9c0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_0058647d
;   TerminatedCString s_modelName_00586483
;   TerminatedCString s_motion_state_0058648d
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc9c0
        ;   Label: FUN_004bc9c0
    PUSH ESI                            ; 004bc9c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004bc9c2
    PUSH ESI                            ; 004bc9c6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 004bc9c7
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_archive_FUN_004796c0()
    ADD ESP,0x4                         ; 004bc9cc
    PUSH 0x58647d                       ; 004bc9cf | = "speed"
    LEA EBX,[ESI + 0xbc8c]              ; 004bc9d4
    PUSH EBX                            ; 004bc9da
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004bc9db
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004bc9e0
    PUSH 0x586483                       ; 004bc9e3 | = "modelName"
    LEA EBX,[ESI + 0x150]               ; 004bc9e8
    PUSH EBX                            ; 004bc9ee
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 004bc9ef
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    ADD ESP,0x8                         ; 004bc9f4
    PUSH 0x58648d                       ; 004bc9f7 | = "motion state"
    PUSH EBX                            ; 004bc9fc
    CALL core_actor.cpp_FUN_0040cb00    ; 004bc9fd
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cb00()
    ADD ESP,0x8                         ; 004bca02
    POP ESI                             ; 004bca05
    POP EBX                             ; 004bca06
    RET                                 ; 004bca07

