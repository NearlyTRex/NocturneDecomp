; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_kedward_cpp_FUN_005919f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d8ecb+1
;   TerminatedCString s_modelName_005d8ed2
;   TerminatedCString s_guardDistance_005d8edc
;   TerminatedCString s_motion_state_005d8eea
;   TerminatedCString s_maxFadeTime_005d8ef7
;   TerminatedCString s_fadeOutOpacity_005d8f03
;   TerminatedCString s_ciniFlag_005d8f12
;   int g_CKedwardClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_FUN_0040ba30
;   core_actor.cpp_FUN_0040bab0
;   core_enemy.cpp_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005919f0
        ;   Label: core_kedward.cpp_FUN_005919f0
    PUSH ESI                            ; 005919f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005919f2
    PUSH EBX                            ; 005919f6
    CALL core_enemy.cpp_FUN_00489120    ; 005919f7
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489120()
    ADD ESP,0x4                         ; 005919fc
    PUSH 0x5d8ecc                       ; 005919ff | s_speed_005d8ecb+1
    LEA EAX,[EBX + 0xcdcc]              ; 00591a04
    PUSH EAX                            ; 00591a0a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00591a0b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00591a10
    PUSH 0x5d8ed2                       ; 00591a13 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00591a18
    PUSH ESI                            ; 00591a1e
    CALL core_actor.cpp_FUN_0040ba30    ; 00591a1f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00591a24
    PUSH 0x5d8edc                       ; 00591a27 | = "guardDistance"
    LEA EAX,[EBX + 0xcddc]              ; 00591a2c
    PUSH EAX                            ; 00591a32
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00591a33
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00591a38
    PUSH 0x5d8eea                       ; 00591a3b | = "motion state"
    PUSH ESI                            ; 00591a40
    CALL core_actor.cpp_FUN_0040bab0    ; 00591a41
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    MOV EDX,dword ptr [0x00607360]      ; 00591a46 | g_CKedwardClassVersion
    ADD ESP,0x8                         ; 00591a4c
    CMP EDX,0x1                         ; 00591a4f
    JG 0x00591a7d                       ; 00591a52
        ;   XREF to: 00591a7d (CONDITIONAL_JUMP)  ; LAB_00591a7d
    CMP dword ptr [0x00607360],0x2      ; 00591a54 | g_CKedwardClassVersion
        ;   Label: LAB_00591a54
    JLE 0x00591a71                      ; 00591a5b
        ;   XREF to: 00591a71 (CONDITIONAL_JUMP)  ; LAB_00591a71
    PUSH 0x5d8f03                       ; 00591a5d | = "fadeOutOpacity"
    LEA EAX,[EBX + 0xd070]              ; 00591a62
    PUSH EAX                            ; 00591a68
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00591a69
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00591a6e
    CMP dword ptr [0x00607360],0x3      ; 00591a71 | g_CKedwardClassVersion
        ;   Label: LAB_00591a71
    JG 0x00591a93                       ; 00591a78
        ;   XREF to: 00591a93 (CONDITIONAL_JUMP)  ; LAB_00591a93
    POP ESI                             ; 00591a7a
    POP EBX                             ; 00591a7b
    RET                                 ; 00591a7c
    PUSH 0x5d8ef7                       ; 00591a7d | = "maxFadeTime"
        ;   Label: LAB_00591a7d
    LEA ESI,[EBX + 0xd06c]              ; 00591a82
    PUSH ESI                            ; 00591a88
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00591a89
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00591a8e
    JMP 0x00591a54                      ; 00591a91
        ;   XREF to: 00591a54 (UNCONDITIONAL_JUMP)  ; LAB_00591a54
    PUSH 0x5d8f12                       ; 00591a93 | = "ciniFlag"
        ;   Label: LAB_00591a93
    ADD EBX,0xd094                      ; 00591a98
    PUSH EBX                            ; 00591a9e
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00591a9f
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00591aa4
    POP ESI                             ; 00591aa7
    POP EBX                             ; 00591aa8
    RET                                 ; 00591aa9

