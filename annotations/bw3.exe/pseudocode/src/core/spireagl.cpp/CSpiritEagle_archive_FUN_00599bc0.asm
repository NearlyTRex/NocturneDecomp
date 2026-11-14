; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spireagl_cpp_CSpiritEagle_archive_FUN_00599bc0(CSpiritEagle *this_ptr)
;
; Parameters:
; CSpiritEagle *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005d99c4+1
;   TerminatedCString s_motion_state_005d99cf
;   TerminatedCString s_hitPoints_005d99dc
;   TerminatedCString s_shootMe_005d99e6
;   TerminatedCString s_poolMe_005d99ee
;   TerminatedCString s_speed_005d99f5
;   TerminatedCString s_morphTime_005d99fb
;   int g_CSpiritEagleClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_charactr.cpp_CCharacter_archive_FUN_0042b450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599bc0
        ;   Label: core_spireagl.cpp_CSpiritEagle_archive_FUN_00599bc0
    PUSH ESI                            ; 00599bc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00599bc2
    PUSH EBX                            ; 00599bc6
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00599bc7
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00599bcc
    PUSH 0x5d99c5                       ; 00599bcf | s_modelName_005d99c4+1
    LEA ESI,[EBX + 0x158]               ; 00599bd4
    PUSH ESI                            ; 00599bda
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 00599bdb
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00599be0
    PUSH 0x5d99cf                       ; 00599be3 | = "motion state"
    PUSH ESI                            ; 00599be8
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 00599be9
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00599bee
    PUSH 0x5d99dc                       ; 00599bf1 | = "hitPoints"
    LEA ESI,[EBX + 0x2538]              ; 00599bf6
    PUSH ESI                            ; 00599bfc
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00599bfd
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00599c02
    PUSH 0x5d99e6                       ; 00599c05 | = "shootMe"
    LEA ESI,[EBX + 0x20864]             ; 00599c0a
    PUSH ESI                            ; 00599c10
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00599c11
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00599c16
    PUSH 0x5d99ee                       ; 00599c19 | = "poolMe"
    LEA ESI,[EBX + 0x20868]             ; 00599c1e
    PUSH ESI                            ; 00599c24
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00599c25
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00599c2a
    PUSH 0x5d99f5                       ; 00599c2d | = "speed"
    LEA ESI,[EBX + 0x2086c]             ; 00599c32
    PUSH ESI                            ; 00599c38
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00599c39
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x00607418]      ; 00599c3e | g_CSpiritEagleClassVersion
    ADD ESP,0x8                         ; 00599c44
    CMP EDX,0x1                         ; 00599c47
    JG 0x00599c58                       ; 00599c4a
        ;   XREF to: 00599c58 (CONDITIONAL_JUMP)  ; LAB_00599c58
    PUSH EBX                            ; 00599c4c
    CALL core_charactr.cpp_CCharacter_archive_FUN_0042b450 ; 00599c4d
        ;   XREF to: 0042b450 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_0042b450(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00599c52
    POP ESI                             ; 00599c55
    POP EBX                             ; 00599c56
    RET                                 ; 00599c57
    PUSH 0x5d99fb                       ; 00599c58 | = "morphTime"
        ;   Label: LAB_00599c58
    LEA ESI,[EBX + 0x214a0]             ; 00599c5d
    PUSH ESI                            ; 00599c63
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00599c64
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00599c69
    PUSH EBX                            ; 00599c6c
    CALL core_charactr.cpp_CCharacter_archive_FUN_0042b450 ; 00599c6d
        ;   XREF to: 0042b450 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_archive_FUN_0042b450(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00599c72
    POP ESI                             ; 00599c75
    POP EBX                             ; 00599c76
    RET                                 ; 00599c77

