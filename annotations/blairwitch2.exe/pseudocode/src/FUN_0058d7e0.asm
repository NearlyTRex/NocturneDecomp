; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058d7e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005ee761+1
;   TerminatedCString s_modelName_005ee768
;   TerminatedCString s_guardDistance_005ee772
;   TerminatedCString s_motion_state_005ee780
;   TerminatedCString s_lightUpEyes_005ee78d
;   TerminatedCString s_chainAnchor_005ee799
;   TerminatedCString s_chainLength_005ee7a5
;   undefined4 DAT_005ee7b1
;   TerminatedCString s_phase_005ee7b6
;   TerminatedCString s_phaseTimer_005ee7bc
;   TerminatedCString s_alpha1_005ee7c7
;   TerminatedCString s_alpha2_005ee7ce
;   undefined4 DAT_0061e940
;
; Called Functions:
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_0040bae0
;   FUN_0040bb60
;   FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d7e0
        ;   Label: FUN_0058d7e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058d7e1
    PUSH EBX                            ; 0058d7e5
    CALL FUN_00487ec0                   ; 0058d7e6
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487ec0()
    ADD ESP,0x4                         ; 0058d7eb
    PUSH 0x5ee762                       ; 0058d7ee | s_speed_005ee761+1
    LEA EAX,[EBX + 0x10a60]             ; 0058d7f3
    PUSH EAX                            ; 0058d7f9
    CALL FUN_0040b8e0                   ; 0058d7fa
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0058d7ff
    PUSH 0x5ee768                       ; 0058d802 | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 0058d807
    PUSH EAX                            ; 0058d80d
    CALL FUN_0040bae0                   ; 0058d80e
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bae0()
    MOV EDX,dword ptr [0x0061e940]      ; 0058d813 | DAT_0061e940
    ADD ESP,0x8                         ; 0058d819
    CMP EDX,0x3                         ; 0058d81c
    JL 0x0058d8b1                       ; 0058d81f
        ;   XREF to: 0058d8b1 (CONDITIONAL_JUMP)  ; LAB_0058d8b1
    PUSH 0x5ee780                       ; 0058d825 | = "motion state"
        ;   Label: LAB_0058d825
    LEA EAX,[EBX + 0x2b4]               ; 0058d82a
    PUSH EAX                            ; 0058d830
    CALL FUN_0040bb60                   ; 0058d831
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bb60()
    MOV ECX,dword ptr [0x0061e940]      ; 0058d836 | DAT_0061e940
    ADD ESP,0x8                         ; 0058d83c
    CMP ECX,0x2                         ; 0058d83f
    JL 0x0058d858                       ; 0058d842
        ;   XREF to: 0058d858 (CONDITIONAL_JUMP)  ; LAB_0058d858
    PUSH 0x5ee78d                       ; 0058d844 | = "lightUpEyes"
    LEA EAX,[EBX + 0x10b10]             ; 0058d849
    PUSH EAX                            ; 0058d84f
    CALL FUN_0040b960                   ; 0058d850
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0058d855
    CMP dword ptr [0x0061e940],0x4      ; 0058d858 | DAT_0061e940
        ;   Label: LAB_0058d858
    JL 0x0058d889                       ; 0058d85f
        ;   XREF to: 0058d889 (CONDITIONAL_JUMP)  ; LAB_0058d889
    PUSH 0x5ee799                       ; 0058d861 | = "chainAnchor"
    LEA EAX,[EBX + 0x10b24]             ; 0058d866
    PUSH EAX                            ; 0058d86c
    CALL FUN_0040b9e0                   ; 0058d86d
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0058d872
    PUSH 0x5ee7a5                       ; 0058d875 | = "chainLength"
    LEA EAX,[EBX + 0x10b28]             ; 0058d87a
    PUSH EAX                            ; 0058d880
    CALL FUN_0040b8e0                   ; 0058d881
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0058d886
    CMP dword ptr [0x0061e940],0x5      ; 0058d889 | DAT_0061e940
        ;   Label: LAB_0058d889
    JL 0x0058d8a6                       ; 0058d890
        ;   XREF to: 0058d8a6 (CONDITIONAL_JUMP)  ; LAB_0058d8a6
    PUSH 0x5ee7b1                       ; 0058d892 | DAT_005ee7b1
    LEA EAX,[EBX + 0x10af8]             ; 0058d897
    PUSH EAX                            ; 0058d89d
    CALL FUN_0040b960                   ; 0058d89e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0058d8a3
    CMP dword ptr [0x0061e940],0x6      ; 0058d8a6 | DAT_0061e940
        ;   Label: LAB_0058d8a6
    JGE 0x0058d8ca                      ; 0058d8ad
        ;   XREF to: 0058d8ca (CONDITIONAL_JUMP)  ; LAB_0058d8ca
    POP EBX                             ; 0058d8af
    RET                                 ; 0058d8b0
    PUSH 0x5ee772                       ; 0058d8b1 | = "guardDistance"
        ;   Label: LAB_0058d8b1
    LEA EAX,[EBX + 0x10a70]             ; 0058d8b6
    PUSH EAX                            ; 0058d8bc
    CALL FUN_0040b8e0                   ; 0058d8bd
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0058d8c2
    JMP 0x0058d825                      ; 0058d8c5
        ;   XREF to: 0058d825 (UNCONDITIONAL_JUMP)  ; LAB_0058d825
    PUSH 0x5ee7b6                       ; 0058d8ca | = "phase"
        ;   Label: LAB_0058d8ca
    LEA EAX,[EBX + 0x10b34]             ; 0058d8cf
    PUSH EAX                            ; 0058d8d5
    CALL FUN_0040b960                   ; 0058d8d6
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0058d8db
    PUSH 0x5ee7bc                       ; 0058d8de | = "phaseTimer"
    LEA EAX,[EBX + 0x10b38]             ; 0058d8e3
    PUSH EAX                            ; 0058d8e9
    CALL FUN_0040b8e0                   ; 0058d8ea
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0058d8ef
    PUSH 0x5ee7c7                       ; 0058d8f2 | = "alpha1"
    LEA EAX,[EBX + 0x10b2c]             ; 0058d8f7
    PUSH EAX                            ; 0058d8fd
    CALL FUN_0040b9e0                   ; 0058d8fe
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0058d903
    PUSH 0x5ee7ce                       ; 0058d906 | = "alpha2"
    ADD EBX,0x10b30                     ; 0058d90b
    PUSH EBX                            ; 0058d911
    CALL FUN_0040b9e0                   ; 0058d912
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 0058d917
    POP EBX                             ; 0058d91a
    RET                                 ; 0058d91b

