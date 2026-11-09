; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_FUN_0057f5b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d7b5a+1
;   TerminatedCString s_modelName_005d7b61
;   TerminatedCString s_guardDistance_005d7b6b
;   TerminatedCString s_motion_state_005d7b79
;   TerminatedCString s_lightUpEyes_005d7b86
;   TerminatedCString s_chainAnchor_005d7b92
;   TerminatedCString s_chainLength_005d7b9e
;   undefined4 DAT_005d7baa
;   TerminatedCString s_phase_005d7baf
;   TerminatedCString s_phaseTimer_005d7bb5
;   TerminatedCString s_alpha1_005d7bc0
;   TerminatedCString s_alpha2_005d7bc7
;   int g_CWerewolfClassVersion = 0x6
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

    PUSH EBX                            ; 0057f5b0
        ;   Label: core_werewolf.cpp_FUN_0057f5b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057f5b1
    PUSH EBX                            ; 0057f5b5
    CALL core_enemy.cpp_FUN_00489120    ; 0057f5b6
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489120()
    ADD ESP,0x4                         ; 0057f5bb
    PUSH 0x5d7b5b                       ; 0057f5be | s_speed_005d7b5a+1
    LEA EAX,[EBX + 0xcdcc]              ; 0057f5c3
    PUSH EAX                            ; 0057f5c9
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0057f5ca
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0057f5cf
    PUSH 0x5d7b61                       ; 0057f5d2 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0057f5d7
    PUSH EAX                            ; 0057f5dd
    CALL core_actor.cpp_FUN_0040ba30    ; 0057f5de
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0060723c]      ; 0057f5e3 | g_CWerewolfClassVersion
    ADD ESP,0x8                         ; 0057f5e9
    CMP EDX,0x3                         ; 0057f5ec
    JL 0x0057f681                       ; 0057f5ef
        ;   XREF to: 0057f681 (CONDITIONAL_JUMP)  ; LAB_0057f681
    PUSH 0x5d7b79                       ; 0057f5f5 | = "motion state"
        ;   Label: LAB_0057f5f5
    LEA EAX,[EBX + 0x158]               ; 0057f5fa
    PUSH EAX                            ; 0057f600
    CALL core_actor.cpp_FUN_0040bab0    ; 0057f601
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    MOV ECX,dword ptr [0x0060723c]      ; 0057f606 | g_CWerewolfClassVersion
    ADD ESP,0x8                         ; 0057f60c
    CMP ECX,0x2                         ; 0057f60f
    JL 0x0057f628                       ; 0057f612
        ;   XREF to: 0057f628 (CONDITIONAL_JUMP)  ; LAB_0057f628
    PUSH 0x5d7b86                       ; 0057f614 | = "lightUpEyes"
    LEA EAX,[EBX + 0xd06c]              ; 0057f619
    PUSH EAX                            ; 0057f61f
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057f620
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057f625
    CMP dword ptr [0x0060723c],0x4      ; 0057f628 | g_CWerewolfClassVersion
        ;   Label: LAB_0057f628
    JL 0x0057f659                       ; 0057f62f
        ;   XREF to: 0057f659 (CONDITIONAL_JUMP)  ; LAB_0057f659
    PUSH 0x5d7b92                       ; 0057f631 | = "chainAnchor"
    LEA EAX,[EBX + 0xd080]              ; 0057f636
    PUSH EAX                            ; 0057f63c
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0057f63d
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0057f642
    PUSH 0x5d7b9e                       ; 0057f645 | = "chainLength"
    LEA EAX,[EBX + 0xd084]              ; 0057f64a
    PUSH EAX                            ; 0057f650
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0057f651
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0057f656
    CMP dword ptr [0x0060723c],0x5      ; 0057f659 | g_CWerewolfClassVersion
        ;   Label: LAB_0057f659
    JL 0x0057f676                       ; 0057f660
        ;   XREF to: 0057f676 (CONDITIONAL_JUMP)  ; LAB_0057f676
    PUSH 0x5d7baa                       ; 0057f662 | DAT_005d7baa
    LEA EAX,[EBX + 0xd054]              ; 0057f667
    PUSH EAX                            ; 0057f66d
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057f66e
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057f673
    CMP dword ptr [0x0060723c],0x6      ; 0057f676 | g_CWerewolfClassVersion
        ;   Label: LAB_0057f676
    JGE 0x0057f69a                      ; 0057f67d
        ;   XREF to: 0057f69a (CONDITIONAL_JUMP)  ; LAB_0057f69a
    POP EBX                             ; 0057f67f
    RET                                 ; 0057f680
    PUSH 0x5d7b6b                       ; 0057f681 | = "guardDistance"
        ;   Label: LAB_0057f681
    LEA EAX,[EBX + 0xcddc]              ; 0057f686
    PUSH EAX                            ; 0057f68c
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0057f68d
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0057f692
    JMP 0x0057f5f5                      ; 0057f695
        ;   XREF to: 0057f5f5 (UNCONDITIONAL_JUMP)  ; LAB_0057f5f5
    PUSH 0x5d7baf                       ; 0057f69a | = "phase"
        ;   Label: LAB_0057f69a
    LEA EAX,[EBX + 0xd090]              ; 0057f69f
    PUSH EAX                            ; 0057f6a5
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057f6a6
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057f6ab
    PUSH 0x5d7bb5                       ; 0057f6ae | = "phaseTimer"
    LEA EAX,[EBX + 0xd094]              ; 0057f6b3
    PUSH EAX                            ; 0057f6b9
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0057f6ba
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0057f6bf
    PUSH 0x5d7bc0                       ; 0057f6c2 | = "alpha1"
    LEA EAX,[EBX + 0xd088]              ; 0057f6c7
    PUSH EAX                            ; 0057f6cd
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0057f6ce
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0057f6d3
    PUSH 0x5d7bc7                       ; 0057f6d6 | = "alpha2"
    ADD EBX,0xd08c                      ; 0057f6db
    PUSH EBX                            ; 0057f6e1
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0057f6e2
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0057f6e7
    POP EBX                             ; 0057f6ea
    RET                                 ; 0057f6eb

