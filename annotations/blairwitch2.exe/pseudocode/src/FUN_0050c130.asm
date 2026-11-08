; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050c130(int param_1)
;
;
; XREF[1]:
;   FUN_0050b790 at 0050b81d
;
; Referenced Globals:
;   undefined4 DAT_0061e990
;
; Called Functions:
;   FUN_00579090
;   FUN_00579240
;   FUN_00589560
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050c130
        ;   Label: FUN_0050c130
    PUSH EBP                            ; 0050c131
    MOV ESI,dword ptr [ESP + 0xc]       ; 0050c132
    ADD ESI,0x180                       ; 0050c136
    PUSH ESI                            ; 0050c13c
    CALL FUN_00579090                   ; 0050c13d
        ;   XREF to: 00579090 (UNCONDITIONAL_CALL)  ; undefined FUN_00579090()
    ADD ESP,0x4                         ; 0050c142
    TEST EAX,EAX                        ; 0050c145
    JZ 0x0050c18a                       ; 0050c147
        ;   XREF to: 0050c18a (CONDITIONAL_JUMP)  ; LAB_0050c18a
    PUSH EDI                            ; 0050c149
    PUSH EBX                            ; 0050c14a
    XOR EDX,EDX                         ; 0050c14b
    MOV EDI,dword ptr [0x0061e990]      ; 0050c14d | DAT_0061e990
    MOV dword ptr [0x0061e990],EDX      ; 0050c153 | DAT_0061e990
    XOR EBP,EBP                         ; 0050c159
    CALL FUN_00589560                   ; 0050c15b
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
        ;   Label: LAB_0050c15b
    MOV EBX,EBP                         ; 0050c160
    PUSH EBP                            ; 0050c162
        ;   Label: LAB_0050c162
    PUSH 0x405                          ; 0050c163
    PUSH 0x1d62e48                      ; 0050c168
    PUSH ESI                            ; 0050c16d
    CALL FUN_00579240                   ; 0050c16e
        ;   XREF to: 00579240 (UNCONDITIONAL_CALL)  ; undefined FUN_00579240()
    ADD ESP,0x10                        ; 0050c173
    TEST EAX,EAX                        ; 0050c176
    JLE 0x0050c182                      ; 0050c178
        ;   XREF to: 0050c182 (CONDITIONAL_JUMP)  ; LAB_0050c182
    INC EBX                             ; 0050c17a
    CMP EBX,0x14                        ; 0050c17b
    JL 0x0050c162                       ; 0050c17e
        ;   XREF to: 0050c162 (CONDITIONAL_JUMP)  ; LAB_0050c162
    JMP 0x0050c15b                      ; 0050c180
        ;   XREF to: 0050c15b (UNCONDITIONAL_JUMP)  ; LAB_0050c15b
    MOV dword ptr [0x0061e990],EDI      ; 0050c182 | DAT_0061e990
        ;   Label: LAB_0050c182
    POP EBX                             ; 0050c188
    POP EDI                             ; 0050c189
    POP EBP                             ; 0050c18a
        ;   Label: LAB_0050c18a
    POP ESI                             ; 0050c18b
    RET                                 ; 0050c18c

