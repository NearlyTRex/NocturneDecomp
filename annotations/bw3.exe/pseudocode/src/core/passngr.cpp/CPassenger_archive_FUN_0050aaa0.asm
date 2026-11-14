; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_passngr_cpp_CPassenger_archive_FUN_0050aaa0(CPassenger *this_ptr)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_transformEvent_005cb6e5
;   TerminatedCString s_wolfModelName_005cb6f4
;   TerminatedCString s_morphTime_005cb702
;   TerminatedCString s_modelName_005cb70c
;   TerminatedCString s_motion_state_005cb716
;   TerminatedCString s_wolfSize_005cb723
;   TerminatedCString s_nameOfWolf_005cb72c
;   TerminatedCString s_transformWav_005cb737
;   int g_CPassengerClassVersion = 0x6
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_npc.cpp_CNPC_archive_FUN_00509800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050aaa0
        ;   Label: core_passngr.cpp_CPassenger_archive_FUN_0050aaa0
    PUSH ESI                            ; 0050aaa1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050aaa2
    PUSH EBX                            ; 0050aaa6
    CALL core_npc.cpp_CNPC_archive_FUN_00509800 ; 0050aaa7
        ;   XREF to: 00509800 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_archive_FUN_00509800(CNPC * this_ptr)
    ADD ESP,0x4                         ; 0050aaac
    PUSH 0x5cb6e5                       ; 0050aaaf | = "transformEvent"
    LEA ESI,[EBX + 0x206c8]             ; 0050aab4
    PUSH ESI                            ; 0050aaba
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0050aabb
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050aac0
    PUSH 0x5cb6f4                       ; 0050aac3 | = "wolfModelName"
    LEA ESI,[EBX + 0x2072c]             ; 0050aac8
    PUSH ESI                            ; 0050aace
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0050aacf
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050aad4
    PUSH 0x5cb702                       ; 0050aad7 | = "morphTime"
    LEA ESI,[EBX + 0x21400]             ; 0050aadc
    PUSH ESI                            ; 0050aae2
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0050aae3
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x006035f4]      ; 0050aae8 | g_CPassengerClassVersion
    ADD ESP,0x8                         ; 0050aaee
    CMP EDX,0x2                         ; 0050aaf1
    JL 0x0050ab1d                       ; 0050aaf4
        ;   XREF to: 0050ab1d (CONDITIONAL_JUMP)  ; LAB_0050ab1d
    CMP EDX,0x5                         ; 0050aaf6
    JGE 0x0050ab1d                      ; 0050aaf9
        ;   XREF to: 0050ab1d (CONDITIONAL_JUMP)  ; LAB_0050ab1d
    PUSH 0x5cb70c                       ; 0050aafb | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 0050ab00
    PUSH ESI                            ; 0050ab06
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 0050ab07
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050ab0c
    PUSH 0x5cb716                       ; 0050ab0f | = "motion state"
    PUSH ESI                            ; 0050ab14
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 0050ab15
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0050ab1a
    CMP dword ptr [0x006035f4],0x3      ; 0050ab1d | g_CPassengerClassVersion
        ;   Label: LAB_0050ab1d
    JL 0x0050ab3a                       ; 0050ab24
        ;   XREF to: 0050ab3a (CONDITIONAL_JUMP)  ; LAB_0050ab3a
    PUSH 0x5cb723                       ; 0050ab26 | = "wolfSize"
    LEA ESI,[EBX + 0x21404]             ; 0050ab2b
    PUSH ESI                            ; 0050ab31
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0050ab32
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050ab37
    CMP dword ptr [0x006035f4],0x4      ; 0050ab3a | g_CPassengerClassVersion
        ;   Label: LAB_0050ab3a
    JL 0x0050ab57                       ; 0050ab41
        ;   XREF to: 0050ab57 (CONDITIONAL_JUMP)  ; LAB_0050ab57
    PUSH 0x5cb72c                       ; 0050ab43 | = "nameOfWolf"
    LEA ESI,[EBX + 0x2074c]             ; 0050ab48
    PUSH ESI                            ; 0050ab4e
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0050ab4f
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050ab54
    CMP dword ptr [0x006035f4],0x6      ; 0050ab57 | g_CPassengerClassVersion
        ;   Label: LAB_0050ab57
    JGE 0x0050ab63                      ; 0050ab5e
        ;   XREF to: 0050ab63 (CONDITIONAL_JUMP)  ; LAB_0050ab63
    POP ESI                             ; 0050ab60
    POP EBX                             ; 0050ab61
    RET                                 ; 0050ab62
    PUSH 0x5cb737                       ; 0050ab63 | = "transformWav"
        ;   Label: LAB_0050ab63
    ADD EBX,0x2076c                     ; 0050ab68
    PUSH EBX                            ; 0050ab6e
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0050ab6f
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050ab74
    POP ESI                             ; 0050ab77
    POP EBX                             ; 0050ab78
    RET                                 ; 0050ab79

