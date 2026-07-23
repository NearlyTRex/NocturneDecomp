; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gargoyle_cpp_CGargoyle_archive_FUN_004a8270(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_00584a10
;   TerminatedCString s_modelName_00584a16
;   TerminatedCString s_motion_state_00584a20
;   TerminatedCString s_stoneRed_00584a2d
;   TerminatedCString s_stoneGreen_00584a36
;   TerminatedCString s_stoneBlue_00584a41
;   TerminatedCString s_homeBase_00584a4b
;   undefined4 DAT_005b9624
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8270
        ;   Label: core_gargoyle.cpp_CGargoyle_archive_FUN_004a8270
    PUSH ESI                            ; 004a8271
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a8272
    PUSH EBX                            ; 004a8276
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 004a8277
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_archive_FUN_004796c0()
    ADD ESP,0x4                         ; 004a827c
    PUSH 0x584a10                       ; 004a827f | = "speed"
    LEA ESI,[EBX + 0xbc8c]              ; 004a8284
    PUSH ESI                            ; 004a828a
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004a828b
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004a8290
    PUSH 0x584a16                       ; 004a8293 | = "modelName"
    LEA ESI,[EBX + 0x150]               ; 004a8298
    PUSH ESI                            ; 004a829e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 004a829f
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    ADD ESP,0x8                         ; 004a82a4
    PUSH 0x584a20                       ; 004a82a7 | = "motion state"
    PUSH ESI                            ; 004a82ac
    CALL core_actor.cpp_FUN_0040cb00    ; 004a82ad
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cb00()
    MOV EDX,dword ptr [0x005b9624]      ; 004a82b2 | DAT_005b9624
    ADD ESP,0x8                         ; 004a82b8
    CMP EDX,0x2                         ; 004a82bb
    JGE 0x004a82c3                      ; 004a82be
        ;   XREF to: 004a82c3 (CONDITIONAL_JUMP)  ; LAB_004a82c3
    POP ESI                             ; 004a82c0
    POP EBX                             ; 004a82c1
    RET                                 ; 004a82c2
    PUSH 0x584a2d                       ; 004a82c3 | = "stoneRed"
        ;   Label: LAB_004a82c3
    LEA ESI,[EBX + 0xbd54]              ; 004a82c8
    PUSH ESI                            ; 004a82ce
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004a82cf
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004a82d4
    PUSH 0x584a36                       ; 004a82d7 | = "stoneGreen"
    LEA ESI,[EBX + 0xbd58]              ; 004a82dc
    PUSH ESI                            ; 004a82e2
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004a82e3
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004a82e8
    PUSH 0x584a41                       ; 004a82eb | = "stoneBlue"
    LEA ESI,[EBX + 0xbd5c]              ; 004a82f0
    PUSH ESI                            ; 004a82f6
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004a82f7
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004a82fc
    PUSH 0x584a4b                       ; 004a82ff | = "homeBase"
    ADD EBX,0xbd60                      ; 004a8304
    PUSH EBX                            ; 004a830a
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004a830b
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 004a8310
    POP ESI                             ; 004a8313
    POP EBX                             ; 004a8314
    RET                                 ; 004a8315

