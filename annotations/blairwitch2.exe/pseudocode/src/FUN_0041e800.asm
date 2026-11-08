; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041e800(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005cc888+1
;   TerminatedCString s_modelName_005cc88f
;   TerminatedCString s_guardDistance_005cc899
;   TerminatedCString s_state_005cc8a7
;   undefined4 DAT_006099a0
;
; Called Functions:
;   FUN_0040b8e0
;   FUN_0040bae0
;   FUN_0040bb60
;   FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e800
        ;   Label: FUN_0041e800
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041e801
    PUSH EBX                            ; 0041e805
    CALL FUN_00487ec0                   ; 0041e806
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487ec0()
    MOV EDX,dword ptr [0x006099a0]      ; 0041e80b | DAT_006099a0
    ADD ESP,0x4                         ; 0041e811
    CMP EDX,0x2                         ; 0041e814
    JL 0x0041e85c                       ; 0041e817
        ;   XREF to: 0041e85c (CONDITIONAL_JUMP)  ; LAB_0041e85c
    PUSH 0x5cc88f                       ; 0041e819 | = "modelName"
        ;   Label: LAB_0041e819
    LEA EAX,[EBX + 0x2b4]               ; 0041e81e
    PUSH EAX                            ; 0041e824
    CALL FUN_0040bae0                   ; 0041e825
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bae0()
    MOV ECX,dword ptr [0x006099a0]      ; 0041e82a | DAT_006099a0
    ADD ESP,0x8                         ; 0041e830
    CMP ECX,0x2                         ; 0041e833
    JL 0x0041e851                       ; 0041e836
        ;   XREF to: 0041e851 (CONDITIONAL_JUMP)  ; LAB_0041e851
    CMP ECX,0x4                         ; 0041e838
    JGE 0x0041e851                      ; 0041e83b
        ;   XREF to: 0041e851 (CONDITIONAL_JUMP)  ; LAB_0041e851
    PUSH 0x5cc899                       ; 0041e83d | = "guardDistance"
    LEA EAX,[EBX + 0x10a70]             ; 0041e842
    PUSH EAX                            ; 0041e848
    CALL FUN_0040b8e0                   ; 0041e849
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0041e84e
    CMP dword ptr [0x006099a0],0x3      ; 0041e851 | DAT_006099a0
        ;   Label: LAB_0041e851
    JGE 0x0041e872                      ; 0041e858
        ;   XREF to: 0041e872 (CONDITIONAL_JUMP)  ; LAB_0041e872
    POP EBX                             ; 0041e85a
    RET                                 ; 0041e85b
    PUSH 0x5cc889                       ; 0041e85c | s_speed_005cc888+1
        ;   Label: LAB_0041e85c
    LEA EAX,[EBX + 0x10a60]             ; 0041e861
    PUSH EAX                            ; 0041e867
    CALL FUN_0040b8e0                   ; 0041e868
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0041e86d
    JMP 0x0041e819                      ; 0041e870
        ;   XREF to: 0041e819 (UNCONDITIONAL_JUMP)  ; LAB_0041e819
    PUSH 0x5cc8a7                       ; 0041e872 | = "state"
        ;   Label: LAB_0041e872
    ADD EBX,0x2b4                       ; 0041e877
    PUSH EBX                            ; 0041e87d
    CALL FUN_0040bb60                   ; 0041e87e
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bb60()
    ADD ESP,0x8                         ; 0041e883
    POP EBX                             ; 0041e886
    RET                                 ; 0041e887

