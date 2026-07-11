; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00428710(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0057a04a
;   undefined4 DAT_0057a04e
;
; Called Functions:
;   FUN_004e18a0
;   FUN_00564520
;   FUN_00564bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428710
        ;   Label: FUN_00428710
    MOV EBX,dword ptr [ESP + 0x8]       ; 00428711
    MOV EDX,dword ptr [EBX + 0x70]      ; 00428715
    CMP EDX,0x2                         ; 00428718
    JNZ 0x00428721                      ; 0042871b
        ;   XREF to: 00428721 (CONDITIONAL_JUMP)  ; LAB_00428721
    MOV EAX,EDX                         ; 0042871d
    POP EBX                             ; 0042871f
    RET                                 ; 00428720
    PUSH 0x3                            ; 00428721
        ;   Label: LAB_00428721
    PUSH 0x57a04a                       ; 00428723 | DAT_0057a04a
    ADD EBX,0x150                       ; 00428728
    PUSH EBX                            ; 0042872e
    CALL FUN_004e18a0                   ; 0042872f
        ;   XREF to: 004e18a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e18a0()
    ADD ESP,0x4                         ; 00428734
    PUSH EAX                            ; 00428737
    CALL FUN_00564bc0                   ; 00428738
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bc0()
    ADD ESP,0xc                         ; 0042873d
    TEST EAX,EAX                        ; 00428740
    JNZ 0x0042874b                      ; 00428742
        ;   XREF to: 0042874b (CONDITIONAL_JUMP)  ; LAB_0042874b
    MOV EAX,0x1                         ; 00428744
    POP EBX                             ; 00428749
    RET                                 ; 0042874a
    PUSH 0x57a04e                       ; 0042874b | DAT_0057a04e
        ;   Label: LAB_0042874b
    PUSH EBX                            ; 00428750
    CALL FUN_004e18a0                   ; 00428751
        ;   XREF to: 004e18a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e18a0()
    ADD ESP,0x4                         ; 00428756
    PUSH EAX                            ; 00428759
    CALL FUN_00564520                   ; 0042875a
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 0042875f
    TEST EAX,EAX                        ; 00428762
    JNZ 0x0042876d                      ; 00428764
        ;   XREF to: 0042876d (CONDITIONAL_JUMP)  ; LAB_0042876d
    MOV EAX,0x2                         ; 00428766
    POP EBX                             ; 0042876b
    RET                                 ; 0042876c
    XOR EAX,EAX                         ; 0042876d
        ;   Label: LAB_0042876d
    POP EBX                             ; 0042876f
    RET                                 ; 00428770

