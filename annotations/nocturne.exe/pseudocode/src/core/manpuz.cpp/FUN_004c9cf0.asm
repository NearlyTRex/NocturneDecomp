; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_004c9cf0(CMansionPuzzleCircle *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c775ec
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_game.cpp_CGame_setFudgeTarget_FUN_0049b240
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0
;   core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90
;   core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0
;   core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640
;   core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900
;   core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980
;   core_manpuz.cpp_FUN_004cb010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9cf0
        ;   Label: core_manpuz.cpp_FUN_004c9cf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c9cf1
    LEA EAX,[EBX + 0x20]                ; 004c9cf5
    PUSH 0x41f00000                     ; 004c9cf8
    PUSH EAX                            ; 004c9cfd
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0 ; 004c9cfe
        ;   XREF to: 004b45b0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 004c9d03
    TEST EAX,EAX                        ; 004c9d06
    JZ 0x004c9dfc                       ; 004c9d08
        ;   XREF to: 004c9dfc (CONDITIONAL_JUMP)  ; LAB_004c9dfc
    PUSH ESI                            ; 004c9d0e
    XOR ESI,ESI                         ; 004c9d0f
    PUSH dword ptr [ESP + 0x10]         ; 004c9d11
        ;   Label: LAB_004c9d11
    PUSH ESI                            ; 004c9d15
    PUSH EBX                            ; 004c9d16
    CALL core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90 ; 004c9d17
        ;   XREF to: 004cac90 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90(CMansionPuzzleCircle * this_ptr, int panel_index, float delta_time)
    INC ESI                             ; 004c9d1c
    ADD ESP,0xc                         ; 004c9d1d
    CMP ESI,0xc                         ; 004c9d20
    JL 0x004c9d11                       ; 004c9d23
        ;   XREF to: 004c9d11 (CONDITIONAL_JUMP)  ; LAB_004c9d11
    XOR ESI,ESI                         ; 004c9d25
    PUSH dword ptr [ESP + 0x10]         ; 004c9d27
        ;   Label: LAB_004c9d27
    PUSH ESI                            ; 004c9d2b
    PUSH EBX                            ; 004c9d2c
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900 ; 004c9d2d
        ;   XREF to: 004cb900 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900(CMansionPuzzleCircle * this_ptr, int reflector_index, float delta_time)
    INC ESI                             ; 004c9d32
    ADD ESP,0xc                         ; 004c9d33
    CMP ESI,0x2                         ; 004c9d36
    JL 0x004c9d27                       ; 004c9d39
        ;   XREF to: 004c9d27 (CONDITIONAL_JUMP)  ; LAB_004c9d27
    XOR ESI,ESI                         ; 004c9d3b
    PUSH dword ptr [ESP + 0x10]         ; 004c9d3d
        ;   Label: LAB_004c9d3d
    PUSH ESI                            ; 004c9d41
    PUSH EBX                            ; 004c9d42
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0 ; 004c9d43
        ;   XREF to: 004cb2d0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0(CMansionPuzzleCircle * this_ptr, int panel_index, float delta_time)
    INC ESI                             ; 004c9d48
    ADD ESP,0xc                         ; 004c9d49
    CMP ESI,0xc                         ; 004c9d4c
    JL 0x004c9d3d                       ; 004c9d4f
        ;   XREF to: 004c9d3d (CONDITIONAL_JUMP)  ; LAB_004c9d3d
    XOR ESI,ESI                         ; 004c9d51
    PUSH dword ptr [ESP + 0x10]         ; 004c9d53
        ;   Label: LAB_004c9d53
    PUSH ESI                            ; 004c9d57
    PUSH EBX                            ; 004c9d58
    CALL core_manpuz.cpp_FUN_004cb010   ; 004c9d59
        ;   XREF to: 004cb010 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_FUN_004cb010(CMansionPuzzleCircle * this_ptr, int gem_index, float delta_time)
    INC ESI                             ; 004c9d5e
    ADD ESP,0xc                         ; 004c9d5f
    CMP ESI,0xc                         ; 004c9d62
    JL 0x004c9d53                       ; 004c9d65
        ;   XREF to: 004c9d53 (CONDITIONAL_JUMP)  ; LAB_004c9d53
    XOR ESI,ESI                         ; 004c9d67
    PUSH ESI                            ; 004c9d69
        ;   Label: LAB_004c9d69
    PUSH EBX                            ; 004c9d6a
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640 ; 004c9d6b
        ;   XREF to: 004ca640 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640()
    INC ESI                             ; 004c9d70
    ADD ESP,0x8                         ; 004c9d71
    CMP ESI,0xc                         ; 004c9d74
    JL 0x004c9d69                       ; 004c9d77
        ;   XREF to: 004c9d69 (CONDITIONAL_JUMP)  ; LAB_004c9d69
    XOR ESI,ESI                         ; 004c9d79
    PUSH ESI                            ; 004c9d7b
        ;   Label: LAB_004c9d7b
    PUSH EBX                            ; 004c9d7c
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980 ; 004c9d7d
        ;   XREF to: 004cb980 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980()
    INC ESI                             ; 004c9d82
    ADD ESP,0x8                         ; 004c9d83
    CMP ESI,0x2                         ; 004c9d86
    JL 0x004c9d7b                       ; 004c9d89
        ;   XREF to: 004c9d7b (CONDITIONAL_JUMP)  ; LAB_004c9d7b
    LEA ESI,[EBX + 0x13c0]              ; 004c9d8b
    LEA EAX,[EBX + 0x1360]              ; 004c9d91
    CMP ESI,EAX                         ; 004c9d97
    JZ 0x004c9dab                       ; 004c9d99
        ;   XREF to: 004c9dab (CONDITIONAL_JUMP)  ; LAB_004c9dab
    MOV EDX,dword ptr [EAX]             ; 004c9d9b
    MOV dword ptr [ESI],EDX             ; 004c9d9d
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c9d9f
    MOV dword ptr [ESI + 0x4],EDX       ; 004c9da2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c9da5
    MOV dword ptr [ESI + 0x8],EDX       ; 004c9da8
    MOV AH,byte ptr [EBX + 0x13c7]      ; 004c9dab
        ;   Label: LAB_004c9dab
    LEA ESI,[EBX + 0x1360]              ; 004c9db1
    XOR AH,0x80                         ; 004c9db7
    PUSH ESI                            ; 004c9dba
    MOV byte ptr [EBX + 0x13c7],AH      ; 004c9dbb
    LEA EAX,[EBX + 0x136c]              ; 004c9dc1
    PUSH EAX                            ; 004c9dc7
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004c9dc8
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004c9dcd
    LEA EAX,[EBX + 0x13c0]              ; 004c9dd0
    PUSH EAX                            ; 004c9dd6
    ADD EBX,0x13cc                      ; 004c9dd7
    PUSH EBX                            ; 004c9ddd
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004c9dde
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004c9de3
    PUSH 0x3c8efa35                     ; 004c9de6
    PUSH ESI                            ; 004c9deb
    MOV EDX,dword ptr [0x005b9354]      ; 004c9dec | DAT_005b9354
    PUSH EDX                            ; 004c9df2 | DAT_01c775ec
    CALL core_game.cpp_CGame_setFudgeTarget_FUN_0049b240 ; 004c9df3
        ;   XREF to: 0049b240 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setFudgeTarget_FUN_0049b240(CGame * this_ptr, CVector3f * fudge_target, float fudge_step)
    ADD ESP,0xc                         ; 004c9df8
    POP ESI                             ; 004c9dfb
    POP EBX                             ; 004c9dfc
        ;   Label: LAB_004c9dfc
    RET                                 ; 004c9dfd

