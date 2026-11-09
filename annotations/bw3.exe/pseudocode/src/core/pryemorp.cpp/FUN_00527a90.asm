; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_pryemorp_cpp_FUN_00527a90(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_transformEvent_005cda65
;   TerminatedCString s_targetModelName_005cda74
;   TerminatedCString s_morphTime_005cda84
;   TerminatedCString s_modelName_005cda8e
;   TerminatedCString s_motion_state_005cda98
;   TerminatedCString s_morphSize_005cdaa5
;   TerminatedCString s_nameOfTarget_005cdaaf
;   TerminatedCString s_transformWav_005cdabc
;   TerminatedCString s_targetClass_005cdac9
;   TerminatedCString s_targetState_005cdad5
;   int g_CPryeMorphClassVersion = 0x8
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_FUN_0040ba30
;   core_actor.cpp_FUN_0040bab0
;   core_npc.cpp_FUN_00509800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527a90
        ;   Label: core_pryemorp.cpp_FUN_00527a90
    PUSH ESI                            ; 00527a91
    MOV EBX,dword ptr [ESP + 0xc]       ; 00527a92
    PUSH EBX                            ; 00527a96
    CALL core_npc.cpp_FUN_00509800      ; 00527a97
        ;   XREF to: 00509800 (UNCONDITIONAL_CALL)  ; undefined core_npc.cpp_FUN_00509800()
    ADD ESP,0x4                         ; 00527a9c
    PUSH 0x5cda65                       ; 00527a9f | = "transformEvent"
    LEA ESI,[EBX + 0x206c8]             ; 00527aa4
    PUSH ESI                            ; 00527aaa
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00527aab
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00527ab0
    PUSH 0x5cda74                       ; 00527ab3 | = "targetModelName"
    LEA ESI,[EBX + 0x2072c]             ; 00527ab8
    PUSH ESI                            ; 00527abe
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00527abf
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00527ac4
    PUSH 0x5cda84                       ; 00527ac7 | = "morphTime"
    LEA ESI,[EBX + 0x21440]             ; 00527acc
    PUSH ESI                            ; 00527ad2
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00527ad3
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    MOV EDX,dword ptr [0x0060398c]      ; 00527ad8 | g_CPryeMorphClassVersion
    ADD ESP,0x8                         ; 00527ade
    CMP EDX,0x2                         ; 00527ae1
    JL 0x00527b0d                       ; 00527ae4
        ;   XREF to: 00527b0d (CONDITIONAL_JUMP)  ; LAB_00527b0d
    CMP EDX,0x5                         ; 00527ae6
    JGE 0x00527b0d                      ; 00527ae9
        ;   XREF to: 00527b0d (CONDITIONAL_JUMP)  ; LAB_00527b0d
    PUSH 0x5cda8e                       ; 00527aeb | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00527af0
    PUSH ESI                            ; 00527af6
    CALL core_actor.cpp_FUN_0040ba30    ; 00527af7
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00527afc
    PUSH 0x5cda98                       ; 00527aff | = "motion state"
    PUSH ESI                            ; 00527b04
    CALL core_actor.cpp_FUN_0040bab0    ; 00527b05
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00527b0a
    CMP dword ptr [0x0060398c],0x3      ; 00527b0d | g_CPryeMorphClassVersion
        ;   Label: LAB_00527b0d
    JL 0x00527b2a                       ; 00527b14
        ;   XREF to: 00527b2a (CONDITIONAL_JUMP)  ; LAB_00527b2a
    PUSH 0x5cdaa5                       ; 00527b16 | = "morphSize"
    LEA ESI,[EBX + 0x21444]             ; 00527b1b
    PUSH ESI                            ; 00527b21
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00527b22
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00527b27
    CMP dword ptr [0x0060398c],0x4      ; 00527b2a | g_CPryeMorphClassVersion
        ;   Label: LAB_00527b2a
    JL 0x00527b47                       ; 00527b31
        ;   XREF to: 00527b47 (CONDITIONAL_JUMP)  ; LAB_00527b47
    PUSH 0x5cdaaf                       ; 00527b33 | = "nameOfTarget"
    LEA ESI,[EBX + 0x2074c]             ; 00527b38
    PUSH ESI                            ; 00527b3e
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00527b3f
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00527b44
    CMP dword ptr [0x0060398c],0x6      ; 00527b47 | g_CPryeMorphClassVersion
        ;   Label: LAB_00527b47
    JL 0x00527b64                       ; 00527b4e
        ;   XREF to: 00527b64 (CONDITIONAL_JUMP)  ; LAB_00527b64
    PUSH 0x5cdabc                       ; 00527b50 | = "transformWav"
    LEA ESI,[EBX + 0x207ac]             ; 00527b55
    PUSH ESI                            ; 00527b5b
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00527b5c
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00527b61
    CMP dword ptr [0x0060398c],0x7      ; 00527b64 | g_CPryeMorphClassVersion
        ;   Label: LAB_00527b64
    JL 0x00527b81                       ; 00527b6b
        ;   XREF to: 00527b81 (CONDITIONAL_JUMP)  ; LAB_00527b81
    PUSH 0x5cdac9                       ; 00527b6d | = "targetClass"
    LEA ESI,[EBX + 0x2076c]             ; 00527b72
    PUSH ESI                            ; 00527b78
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00527b79
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00527b7e
    CMP dword ptr [0x0060398c],0x8      ; 00527b81 | g_CPryeMorphClassVersion
        ;   Label: LAB_00527b81
    JGE 0x00527b8d                      ; 00527b88
        ;   XREF to: 00527b8d (CONDITIONAL_JUMP)  ; LAB_00527b8d
    POP ESI                             ; 00527b8a
    POP EBX                             ; 00527b8b
    RET                                 ; 00527b8c
    PUSH 0x5cdad5                       ; 00527b8d | = "targetState"
        ;   Label: LAB_00527b8d
    ADD EBX,0x2078c                     ; 00527b92
    PUSH EBX                            ; 00527b98
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00527b99
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00527b9e
    POP ESI                             ; 00527ba1
    POP EBX                             ; 00527ba2
    RET                                 ; 00527ba3

