; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052b830(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005e5409
;   TerminatedCString s_guardDistance_005e5413
;   TerminatedCString s_motion_state_005e5421
;   undefined4 DAT_0061b550
;
; Called Functions:
;   FUN_0040b8e0
;   FUN_0040bae0
;   FUN_0040bb60
;   FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b830
        ;   Label: FUN_0052b830
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052b831
    PUSH EBX                            ; 0052b835
    CALL FUN_00487ec0                   ; 0052b836
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487ec0()
    ADD ESP,0x4                         ; 0052b83b
    PUSH 0x5e5409                       ; 0052b83e | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 0052b843
    PUSH EAX                            ; 0052b849
    CALL FUN_0040bae0                   ; 0052b84a
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bae0()
    MOV EDX,dword ptr [0x0061b550]      ; 0052b84f | DAT_0061b550
    ADD ESP,0x8                         ; 0052b855
    CMP EDX,0x2                         ; 0052b858
    JL 0x0052b873                       ; 0052b85b
        ;   XREF to: 0052b873 (CONDITIONAL_JUMP)  ; LAB_0052b873
    PUSH 0x5e5421                       ; 0052b85d | = "motion state"
        ;   Label: LAB_0052b85d
    ADD EBX,0x2b4                       ; 0052b862
    PUSH EBX                            ; 0052b868
    CALL FUN_0040bb60                   ; 0052b869
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bb60()
    ADD ESP,0x8                         ; 0052b86e
    POP EBX                             ; 0052b871
    RET                                 ; 0052b872
    PUSH 0x5e5413                       ; 0052b873 | = "guardDistance"
        ;   Label: LAB_0052b873
    LEA EAX,[EBX + 0x10a70]             ; 0052b878
    PUSH EAX                            ; 0052b87e
    CALL FUN_0040b8e0                   ; 0052b87f
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0052b884
    JMP 0x0052b85d                      ; 0052b887
        ;   XREF to: 0052b85d (UNCONDITIONAL_JUMP)  ; LAB_0052b85d

