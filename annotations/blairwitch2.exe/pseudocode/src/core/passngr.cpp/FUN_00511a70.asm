; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_passngr_cpp_FUN_00511a70(CNPC *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_transformEvent_005e1622
;   TerminatedCString s_wolfModelName_005e1631
;   TerminatedCString s_morphTime_005e163f
;   TerminatedCString s_modelName_005e1649
;   TerminatedCString s_motion_state_005e1653
;   TerminatedCString s_wolfSize_005e1660
;   TerminatedCString s_nameOfWolf_005e1669
;   TerminatedCString s_transformWav_005e1674
;   int g_CPassengerClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_npc.cpp_FUN_005109e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511a70
        ;   Label: core_passngr.cpp_FUN_00511a70
    PUSH ESI                            ; 00511a71
    MOV EBX,dword ptr [ESP + 0xc]       ; 00511a72
    PUSH EBX                            ; 00511a76
    CALL core_npc.cpp_FUN_005109e0      ; 00511a77
        ;   XREF to: 005109e0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_FUN_005109e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 00511a7c
    PUSH 0x5e1622                       ; 00511a7f | = "transformEvent"
    LEA ESI,[EBX + 0x24348]             ; 00511a84
    PUSH ESI                            ; 00511a8a
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00511a8b
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00511a90
    PUSH 0x5e1631                       ; 00511a93 | = "wolfModelName"
    LEA ESI,[EBX + 0x243ac]             ; 00511a98
    PUSH ESI                            ; 00511a9e
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00511a9f
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00511aa4
    PUSH 0x5e163f                       ; 00511aa7 | = "morphTime"
    LEA ESI,[EBX + 0x25080]             ; 00511aac
    PUSH ESI                            ; 00511ab2
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00511ab3
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    MOV EDX,dword ptr [0x0061b2b8]      ; 00511ab8 | g_CPassengerClassVersion
    ADD ESP,0x8                         ; 00511abe
    CMP EDX,0x2                         ; 00511ac1
    JL 0x00511aed                       ; 00511ac4
        ;   XREF to: 00511aed (CONDITIONAL_JUMP)  ; LAB_00511aed
    CMP EDX,0x5                         ; 00511ac6
    JGE 0x00511aed                      ; 00511ac9
        ;   XREF to: 00511aed (CONDITIONAL_JUMP)  ; LAB_00511aed
    PUSH 0x5e1649                       ; 00511acb | = "modelName"
    LEA ESI,[EBX + 0x2b4]               ; 00511ad0
    PUSH ESI                            ; 00511ad6
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 00511ad7
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    ADD ESP,0x8                         ; 00511adc
    PUSH 0x5e1653                       ; 00511adf | = "motion state"
    PUSH ESI                            ; 00511ae4
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 00511ae5
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 00511aea
    CMP dword ptr [0x0061b2b8],0x3      ; 00511aed | g_CPassengerClassVersion
        ;   Label: LAB_00511aed
    JL 0x00511b0a                       ; 00511af4
        ;   XREF to: 00511b0a (CONDITIONAL_JUMP)  ; LAB_00511b0a
    PUSH 0x5e1660                       ; 00511af6 | = "wolfSize"
    LEA ESI,[EBX + 0x25084]             ; 00511afb
    PUSH ESI                            ; 00511b01
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00511b02
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00511b07
    CMP dword ptr [0x0061b2b8],0x4      ; 00511b0a | g_CPassengerClassVersion
        ;   Label: LAB_00511b0a
    JL 0x00511b27                       ; 00511b11
        ;   XREF to: 00511b27 (CONDITIONAL_JUMP)  ; LAB_00511b27
    PUSH 0x5e1669                       ; 00511b13 | = "nameOfWolf"
    LEA ESI,[EBX + 0x243cc]             ; 00511b18
    PUSH ESI                            ; 00511b1e
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00511b1f
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00511b24
    CMP dword ptr [0x0061b2b8],0x6      ; 00511b27 | g_CPassengerClassVersion
        ;   Label: LAB_00511b27
    JGE 0x00511b33                      ; 00511b2e
        ;   XREF to: 00511b33 (CONDITIONAL_JUMP)  ; LAB_00511b33
    POP ESI                             ; 00511b30
    POP EBX                             ; 00511b31
    RET                                 ; 00511b32
    PUSH 0x5e1674                       ; 00511b33 | = "transformWav"
        ;   Label: LAB_00511b33
    ADD EBX,0x243ec                     ; 00511b38
    PUSH EBX                            ; 00511b3e
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00511b3f
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00511b44
    POP ESI                             ; 00511b47
    POP EBX                             ; 00511b48
    RET                                 ; 00511b49

