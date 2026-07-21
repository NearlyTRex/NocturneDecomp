; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_health_cpp_CHealthItem_archive_FUN_004b4340(int param_1)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; Referenced Globals:
;   string s_modelName_00585642
;   string s_useCount_0058564c
;   string s_hpRestored_00585655
;   string s_descriptiveName_00585660
;   undefined4 DAT_005ba928
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveLocalizedString_FUN_0040c7f0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4340
        ;   Label: core_health.cpp_CHealthItem_archive_FUN_004b4340
    SUB ESP,0x100                       ; 004b4341
    MOV EBX,dword ptr [ESP + 0x108]     ; 004b4347
    PUSH EBX                            ; 004b434e
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004b434f
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 004b4354
    PUSH 0x585642                       ; 004b4357 | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 004b435c
    PUSH EAX                            ; 004b4362
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 004b4363
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    ADD ESP,0x8                         ; 004b4368
    PUSH 0x58564c                       ; 004b436b | = "useCount"
    LEA EAX,[EBX + 0x2cc]               ; 004b4370
    PUSH EAX                            ; 004b4376
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b4377
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004b437c
    PUSH 0x585655                       ; 004b437f | = "hpRestored"
    ADD EBX,0x2d0                       ; 004b4384
    PUSH EBX                            ; 004b438a
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004b438b
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    MOV EDX,dword ptr [0x005ba928]      ; 004b4390 | DAT_005ba928
    ADD ESP,0x8                         ; 004b4396
    CMP EDX,0x2                         ; 004b4399
    JZ 0x004b43a6                       ; 004b439c
        ;   XREF to: 004b43a6 (CONDITIONAL_JUMP)  ; LAB_004b43a6
    ADD ESP,0x100                       ; 004b439e
    POP EBX                             ; 004b43a4
    RET                                 ; 004b43a5
    PUSH 0x585660                       ; 004b43a6 | = "descriptiveName"
        ;   Label: LAB_004b43a6
    LEA EAX,[ESP + 0x4]                 ; 004b43ab
    PUSH EAX                            ; 004b43af
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040c7f0 ; 004b43b0
        ;   XREF to: 0040c7f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveLocalizedString_FUN_0040c7f0()
    ADD ESP,0x8                         ; 004b43b5
    ADD ESP,0x100                       ; 004b43b8
    POP EBX                             ; 004b43be
    RET                                 ; 004b43bf

