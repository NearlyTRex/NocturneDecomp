; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053a150(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_0053a090
;   FUN_0053a720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a150
        ;   Label: FUN_0053a150
    PUSH ESI                            ; 0053a151
    PUSH EDI                            ; 0053a152
    PUSH EBP                            ; 0053a153
    MOV ESI,dword ptr [ESP + 0x14]      ; 0053a154
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0053a158
    MOV EDX,dword ptr [ESP + 0x18]      ; 0053a15c
    PUSH EDX                            ; 0053a160
    PUSH ESI                            ; 0053a161
    XOR EBX,EBX                         ; 0053a162
    CALL FUN_0053a720                   ; 0053a164
        ;   XREF to: 0053a720 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a720()
    ADD ESP,0x8                         ; 0053a169
    MOV ECX,dword ptr [ESI + 0x15b424]  ; 0053a16c
    MOV EDI,EAX                         ; 0053a172
    TEST ECX,ECX                        ; 0053a174
    JLE 0x0053a18f                      ; 0053a176
        ;   XREF to: 0053a18f (CONDITIONAL_JUMP)  ; LAB_0053a18f
    PUSH EBX                            ; 0053a178
        ;   Label: LAB_0053a178
    PUSH ESI                            ; 0053a179
    CALL FUN_0053a720                   ; 0053a17a
        ;   XREF to: 0053a720 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a720()
    ADD ESP,0x8                         ; 0053a17f
    CMP EAX,EDI                         ; 0053a182
    JZ 0x0053a196                       ; 0053a184
        ;   XREF to: 0053a196 (CONDITIONAL_JUMP)  ; LAB_0053a196
    INC EBX                             ; 0053a186
        ;   Label: LAB_0053a186
    CMP EBX,dword ptr [ESI + 0x15b424]  ; 0053a187
    JL 0x0053a178                       ; 0053a18d
        ;   XREF to: 0053a178 (CONDITIONAL_JUMP)  ; LAB_0053a178
    XOR EAX,EAX                         ; 0053a18f
        ;   Label: LAB_0053a18f
    POP EBP                             ; 0053a191
    POP EDI                             ; 0053a192
    POP ESI                             ; 0053a193
    POP EBX                             ; 0053a194
    RET                                 ; 0053a195
    PUSH EBP                            ; 0053a196
        ;   Label: LAB_0053a196
    PUSH EBX                            ; 0053a197
    PUSH ESI                            ; 0053a198
    CALL FUN_0053a090                   ; 0053a199
        ;   XREF to: 0053a090 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a090()
    ADD ESP,0xc                         ; 0053a19e
    TEST EAX,EAX                        ; 0053a1a1
    JZ 0x0053a186                       ; 0053a1a3
        ;   XREF to: 0053a186 (CONDITIONAL_JUMP)  ; LAB_0053a186
    MOV EAX,0x1                         ; 0053a1a5
    POP EBP                             ; 0053a1aa
    POP EDI                             ; 0053a1ab
    POP ESI                             ; 0053a1ac
    POP EBX                             ; 0053a1ad
    RET                                 ; 0053a1ae

