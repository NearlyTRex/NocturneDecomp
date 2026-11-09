; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_tawiscar_cpp_FUN_00595e90(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d93b8+1
;   TerminatedCString s_modelName_005d93bf
;   TerminatedCString s_guardDistance_005d93c9
;   TerminatedCString s_motion_state_005d93d7
;   TerminatedCString s_lightUpEyes_005d93e4
;   TerminatedCString s_chainAnchor_005d93f0
;   TerminatedCString s_chainLength_005d93fc
;   undefined4 DAT_005d9408
;   TerminatedCString s_phase_005d940d
;   TerminatedCString s_phaseTimer_005d9413
;   TerminatedCString s_alpha1_005d941e
;   TerminatedCString s_alpha2_005d9425
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_FUN_0040ba30
;   core_actor.cpp_FUN_0040bab0
;   core_enemy.cpp_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595e90
        ;   Label: unkafter_tawiscar.cpp_FUN_00595e90
    PUSH ESI                            ; 00595e91
    MOV EBX,dword ptr [ESP + 0xc]       ; 00595e92
    PUSH EBX                            ; 00595e96
    CALL core_enemy.cpp_FUN_00489120    ; 00595e97
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489120()
    ADD ESP,0x4                         ; 00595e9c
    PUSH 0x5d93b9                       ; 00595e9f | s_speed_005d93b8+1
    LEA ESI,[EBX + 0xcdcc]              ; 00595ea4
    PUSH ESI                            ; 00595eaa
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00595eab
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00595eb0
    PUSH 0x5d93bf                       ; 00595eb3 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00595eb8
    PUSH ESI                            ; 00595ebe
    CALL core_actor.cpp_FUN_0040ba30    ; 00595ebf
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00595ec4
    PUSH 0x5d93c9                       ; 00595ec7 | = "guardDistance"
    LEA EAX,[EBX + 0xcddc]              ; 00595ecc
    PUSH EAX                            ; 00595ed2
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00595ed3
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00595ed8
    PUSH 0x5d93d7                       ; 00595edb | = "motion state"
    PUSH ESI                            ; 00595ee0
    CALL core_actor.cpp_FUN_0040bab0    ; 00595ee1
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00595ee6
    PUSH 0x5d93e4                       ; 00595ee9 | = "lightUpEyes"
    LEA ESI,[EBX + 0xd06c]              ; 00595eee
    PUSH ESI                            ; 00595ef4
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00595ef5
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00595efa
    PUSH 0x5d93f0                       ; 00595efd | = "chainAnchor"
    LEA ESI,[EBX + 0xd080]              ; 00595f02
    PUSH ESI                            ; 00595f08
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00595f09
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00595f0e
    PUSH 0x5d93fc                       ; 00595f11 | = "chainLength"
    LEA EAX,[EBX + 0xd084]              ; 00595f16
    PUSH EAX                            ; 00595f1c
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00595f1d
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00595f22
    PUSH 0x5d9408                       ; 00595f25 | DAT_005d9408
    LEA EAX,[EBX + 0xd054]              ; 00595f2a
    PUSH EAX                            ; 00595f30
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00595f31
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00595f36
    PUSH 0x5d940d                       ; 00595f39 | = "phase"
    LEA EAX,[EBX + 0xd090]              ; 00595f3e
    PUSH EAX                            ; 00595f44
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00595f45
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00595f4a
    PUSH 0x5d9413                       ; 00595f4d | = "phaseTimer"
    LEA EAX,[EBX + 0xd094]              ; 00595f52
    PUSH EAX                            ; 00595f58
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00595f59
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00595f5e
    PUSH 0x5d941e                       ; 00595f61 | = "alpha1"
    LEA EAX,[EBX + 0xd088]              ; 00595f66
    PUSH EAX                            ; 00595f6c
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00595f6d
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00595f72
    PUSH 0x5d9425                       ; 00595f75 | = "alpha2"
    ADD EBX,0xd08c                      ; 00595f7a
    PUSH EBX                            ; 00595f80
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00595f81
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00595f86
    POP ESI                             ; 00595f89
    POP EBX                             ; 00595f8a
    RET                                 ; 00595f8b

