; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mimic_cpp_CMimic_archive_FUN_004d5bb0(int param_1)
;
;
; Referenced Globals:
;   string s_speed_0058949a
;   string s_modelName_005894a0
;   string s_attackCondition_005894aa
;   string s_attackMode_005894ba
;   string s_mirrorPlaneActor_005894c5
;   string s_motion_state_005894d6
;   string s_morphActorType_005894e3
;   string s_mirrorCondition_005894f2
;   undefined4 DAT_005baf48
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_FUN_0040cb00
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5bb0
        ;   Label: core_mimic.cpp_CMimic_archive_FUN_004d5bb0
    PUSH ESI                            ; 004d5bb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d5bb2
    PUSH EBX                            ; 004d5bb6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 004d5bb7
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_archive_FUN_004796c0()
    ADD ESP,0x4                         ; 004d5bbc
    PUSH 0x58949a                       ; 004d5bbf | = "speed"
    LEA ESI,[EBX + 0xbc8c]              ; 004d5bc4
    PUSH ESI                            ; 004d5bca
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004d5bcb
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004d5bd0
    PUSH 0x5894a0                       ; 004d5bd3 | = "modelName"
    LEA ESI,[EBX + 0x150]               ; 004d5bd8
    PUSH ESI                            ; 004d5bde
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 004d5bdf
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    ADD ESP,0x8                         ; 004d5be4
    PUSH 0x5894aa                       ; 004d5be7 | = "attackCondition"
    LEA EAX,[EBX + 0xbd88]              ; 004d5bec
    PUSH EAX                            ; 004d5bf2
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004d5bf3
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004d5bf8
    PUSH 0x5894ba                       ; 004d5bfb | = "attackMode"
    LEA EAX,[EBX + 0x4691c]             ; 004d5c00
    PUSH EAX                            ; 004d5c06
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004d5c07
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004d5c0c
    PUSH 0x5894c5                       ; 004d5c0f | = "mirrorPlaneActor"
    LEA EAX,[EBX + 0x46920]             ; 004d5c14
    PUSH EAX                            ; 004d5c1a
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004d5c1b
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    MOV EDX,dword ptr [0x005baf48]      ; 004d5c20 | DAT_005baf48
    ADD ESP,0x8                         ; 004d5c26
    CMP EDX,0x2                         ; 004d5c29
    JGE 0x004d5c3a                      ; 004d5c2c
        ;   XREF to: 004d5c3a (CONDITIONAL_JUMP)  ; LAB_004d5c3a
    CMP dword ptr [0x005baf48],0x3      ; 004d5c2e | DAT_005baf48
    JGE 0x004d5c68                      ; 004d5c35
        ;   XREF to: 004d5c68 (CONDITIONAL_JUMP)  ; LAB_004d5c68
    POP ESI                             ; 004d5c37
    POP EBX                             ; 004d5c38
    RET                                 ; 004d5c39
    PUSH 0x5894d6                       ; 004d5c3a | = "motion state"
        ;   Label: LAB_004d5c3a
    PUSH ESI                            ; 004d5c3f
    CALL core_actor.cpp_FUN_0040cb00    ; 004d5c40
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cb00()
    ADD ESP,0x8                         ; 004d5c45
    PUSH 0x5894e3                       ; 004d5c48 | = "morphActorType"
    LEA ESI,[EBX + 0x46924]             ; 004d5c4d
    PUSH ESI                            ; 004d5c53
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004d5c54
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004d5c59
    CMP dword ptr [0x005baf48],0x3      ; 004d5c5c | DAT_005baf48
    JGE 0x004d5c68                      ; 004d5c63
        ;   XREF to: 004d5c68 (CONDITIONAL_JUMP)  ; LAB_004d5c68
    POP ESI                             ; 004d5c65
    POP EBX                             ; 004d5c66
    RET                                 ; 004d5c67
    PUSH 0x5894f2                       ; 004d5c68 | = "mirrorCondition"
        ;   Label: LAB_004d5c68
    ADD EBX,0xbd24                      ; 004d5c6d
    PUSH EBX                            ; 004d5c73
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004d5c74
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004d5c79
    POP ESI                             ; 004d5c7c
    POP EBX                             ; 004d5c7d
    RET                                 ; 004d5c7e

