; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eed10(int param_1)
;
;
; XREF[4]:
;   FUN_004b68b0 at 004b68b5
;   FUN_004b9b50 at 004b9b55
;   core_hostage.cpp_CHostage_archive_FUN_004b8320 at 004b8327
;   core_passngr.cpp_CPassenger_archive_FUN_004efb30 at 004efb37
;
; Referenced Globals:
;   TerminatedCString s_hitPoints_0058cb33
;   TerminatedCString s_modelName_0058cb3d
;   TerminatedCString s_motion_state_0058cb47
;   TerminatedCString s_shootMe_0058cb54
;   TerminatedCString s_poolMe_0058cb5c
;   undefined4 DAT_005be074
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;   core_actor.cpp_FUN_0040cb00
;   core_charactr.cpp_CCharacter_archive_FUN_004244b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eed10
        ;   Label: FUN_004eed10
    PUSH ESI                            ; 004eed11
    MOV EBX,dword ptr [ESP + 0xc]       ; 004eed12
    CMP dword ptr [0x005be074],0x2      ; 004eed16 | DAT_005be074
    JL 0x004eed7e                       ; 004eed1d
        ;   XREF to: 004eed7e (CONDITIONAL_JUMP)  ; LAB_004eed7e
    PUSH EBX                            ; 004eed1f
    CALL core_charactr.cpp_CCharacter_archive_FUN_004244b0 ; 004eed20
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_archive_FUN_004244b0()
    MOV ECX,dword ptr [0x005be074]      ; 004eed25 | DAT_005be074
    ADD ESP,0x4                         ; 004eed2b
    CMP ECX,0x3                         ; 004eed2e
    JL 0x004eed55                       ; 004eed31
        ;   XREF to: 004eed55 (CONDITIONAL_JUMP)  ; LAB_004eed55
    PUSH 0x58cb3d                       ; 004eed33 | = "modelName"
    LEA ESI,[EBX + 0x150]               ; 004eed38
    PUSH ESI                            ; 004eed3e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 004eed3f
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    ADD ESP,0x8                         ; 004eed44
    PUSH 0x58cb47                       ; 004eed47 | = "motion state"
    PUSH ESI                            ; 004eed4c
    CALL core_actor.cpp_FUN_0040cb00    ; 004eed4d
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cb00()
    ADD ESP,0x8                         ; 004eed52
    CMP dword ptr [0x005be074],0x4      ; 004eed55 | DAT_005be074
        ;   Label: LAB_004eed55
    JL 0x004eed72                       ; 004eed5c
        ;   XREF to: 004eed72 (CONDITIONAL_JUMP)  ; LAB_004eed72
    PUSH 0x58cb54                       ; 004eed5e | = "shootMe"
    LEA ESI,[EBX + 0x1f568]             ; 004eed63
    PUSH ESI                            ; 004eed69
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004eed6a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004eed6f
    CMP dword ptr [0x005be074],0x5      ; 004eed72 | DAT_005be074
        ;   Label: LAB_004eed72
    JGE 0x004eed9e                      ; 004eed79
        ;   XREF to: 004eed9e (CONDITIONAL_JUMP)  ; LAB_004eed9e
    POP ESI                             ; 004eed7b
    POP EBX                             ; 004eed7c
    RET                                 ; 004eed7d
    PUSH EBX                            ; 004eed7e
        ;   Label: LAB_004eed7e
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004eed7f
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 004eed84
    PUSH 0x58cb33                       ; 004eed87 | = "hitPoints"
    ADD EBX,0x2434                      ; 004eed8c
    PUSH EBX                            ; 004eed92
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004eed93
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004eed98
    POP ESI                             ; 004eed9b
    POP EBX                             ; 004eed9c
    RET                                 ; 004eed9d
    PUSH 0x58cb5c                       ; 004eed9e | = "poolMe"
        ;   Label: LAB_004eed9e
    ADD EBX,0x1f56c                     ; 004eeda3
    PUSH EBX                            ; 004eeda9
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004eedaa
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004eedaf
    POP ESI                             ; 004eedb2
    POP EBX                             ; 004eedb3
    RET                                 ; 004eedb4

