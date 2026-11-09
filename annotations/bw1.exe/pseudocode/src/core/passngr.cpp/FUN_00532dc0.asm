; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_passngr_cpp_FUN_00532dc0(CNPC *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_transformEvent_005ec87d
;   TerminatedCString s_wolfModelName_005ec88c
;   TerminatedCString s_morphTime_005ec89a
;   TerminatedCString s_modelName_005ec8a4
;   TerminatedCString s_motion_state_005ec8ae
;   TerminatedCString s_wolfSize_005ec8bb
;   TerminatedCString s_nameOfWolf_005ec8c4
;   TerminatedCString s_transformWav_005ec8cf
;   int g_CPassengerClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_FUN_0040b7f0
;   core_actor.cpp_FUN_0040b870
;   core_npc.cpp_FUN_00531bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532dc0
        ;   Label: core_passngr.cpp_FUN_00532dc0
    PUSH ESI                            ; 00532dc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00532dc2
    PUSH EBX                            ; 00532dc6
    CALL core_npc.cpp_FUN_00531bf0      ; 00532dc7
        ;   XREF to: 00531bf0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_FUN_00531bf0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 00532dcc
    PUSH 0x5ec87d                       ; 00532dcf | = "transformEvent"
    LEA ESI,[EBX + 0x1fab8]             ; 00532dd4
    PUSH ESI                            ; 00532dda
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00532ddb
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00532de0
    PUSH 0x5ec88c                       ; 00532de3 | = "wolfModelName"
    LEA ESI,[EBX + 0x1fb1c]             ; 00532de8
    PUSH ESI                            ; 00532dee
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00532def
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00532df4
    PUSH 0x5ec89a                       ; 00532df7 | = "morphTime"
    LEA ESI,[EBX + 0x207f0]             ; 00532dfc
    PUSH ESI                            ; 00532e02
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00532e03
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    MOV EDX,dword ptr [0x00622718]      ; 00532e08 | g_CPassengerClassVersion
    ADD ESP,0x8                         ; 00532e0e
    CMP EDX,0x2                         ; 00532e11
    JL 0x00532e3d                       ; 00532e14
        ;   XREF to: 00532e3d (CONDITIONAL_JUMP)  ; LAB_00532e3d
    CMP EDX,0x5                         ; 00532e16
    JGE 0x00532e3d                      ; 00532e19
        ;   XREF to: 00532e3d (CONDITIONAL_JUMP)  ; LAB_00532e3d
    PUSH 0x5ec8a4                       ; 00532e1b | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00532e20
    PUSH ESI                            ; 00532e26
    CALL core_actor.cpp_FUN_0040b7f0    ; 00532e27
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00532e2c
    PUSH 0x5ec8ae                       ; 00532e2f | = "motion state"
    PUSH ESI                            ; 00532e34
    CALL core_actor.cpp_FUN_0040b870    ; 00532e35
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00532e3a
    CMP dword ptr [0x00622718],0x3      ; 00532e3d | g_CPassengerClassVersion
        ;   Label: LAB_00532e3d
    JL 0x00532e5a                       ; 00532e44
        ;   XREF to: 00532e5a (CONDITIONAL_JUMP)  ; LAB_00532e5a
    PUSH 0x5ec8bb                       ; 00532e46 | = "wolfSize"
    LEA ESI,[EBX + 0x207f4]             ; 00532e4b
    PUSH ESI                            ; 00532e51
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00532e52
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 00532e57
    CMP dword ptr [0x00622718],0x4      ; 00532e5a | g_CPassengerClassVersion
        ;   Label: LAB_00532e5a
    JL 0x00532e77                       ; 00532e61
        ;   XREF to: 00532e77 (CONDITIONAL_JUMP)  ; LAB_00532e77
    PUSH 0x5ec8c4                       ; 00532e63 | = "nameOfWolf"
    LEA ESI,[EBX + 0x1fb3c]             ; 00532e68
    PUSH ESI                            ; 00532e6e
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00532e6f
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00532e74
    CMP dword ptr [0x00622718],0x6      ; 00532e77 | g_CPassengerClassVersion
        ;   Label: LAB_00532e77
    JGE 0x00532e83                      ; 00532e7e
        ;   XREF to: 00532e83 (CONDITIONAL_JUMP)  ; LAB_00532e83
    POP ESI                             ; 00532e80
    POP EBX                             ; 00532e81
    RET                                 ; 00532e82
    PUSH 0x5ec8cf                       ; 00532e83 | = "transformWav"
        ;   Label: LAB_00532e83
    ADD EBX,0x1fb5c                     ; 00532e88
    PUSH EBX                            ; 00532e8e
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00532e8f
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00532e94
    POP ESI                             ; 00532e97
    POP EBX                             ; 00532e98
    RET                                 ; 00532e99

