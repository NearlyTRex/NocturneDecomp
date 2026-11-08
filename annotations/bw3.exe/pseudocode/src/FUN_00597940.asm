; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00597940(int param_1)
;
;
; Called Functions:
;   FUN_0042e220
;   FUN_0042f6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597940
        ;   Label: FUN_00597940
    MOV EBX,dword ptr [ESP + 0x8]       ; 00597941
    CMP dword ptr [EBX + 0x33a0],0x0    ; 00597945
    JG 0x00597959                       ; 0059794c
        ;   XREF to: 00597959 (CONDITIONAL_JUMP)  ; LAB_00597959
    PUSH EBX                            ; 0059794e
    CALL FUN_0042e220                   ; 0059794f
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e220()
    ADD ESP,0x4                         ; 00597954
    POP EBX                             ; 00597957
    RET                                 ; 00597958
    PUSH EBX                            ; 00597959
        ;   Label: LAB_00597959
    CALL FUN_0042f6f0                   ; 0059795a
        ;   XREF to: 0042f6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f6f0()
    ADD ESP,0x4                         ; 0059795f
    PUSH EBX                            ; 00597962
    CALL FUN_0042e220                   ; 00597963
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e220()
    ADD ESP,0x4                         ; 00597968
    POP EBX                             ; 0059796b
    RET                                 ; 0059796c

