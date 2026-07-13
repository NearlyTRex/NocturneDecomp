; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046fa80(void)
;
;
; XREF[1]:
;   FUN_0046f9f0 at 0046fa11
;
; Referenced Globals:
;   undefined4 DAT_01bcddc8
;   undefined4 DAT_01bcddcc
;   undefined4 DAT_01bcddd0
;   undefined4 DAT_01bcddd4
;   undefined4 DAT_01bcddd8
;   undefined4 DAT_01bcdddc
;   undefined4 DAT_01bcdde0
;   undefined4 DAT_01bcdde4
;   undefined4 DAT_01bcdde8
;   undefined4 DAT_01bcddec
;   undefined4 DAT_01bcddf0
;   undefined4 DAT_01bcddf4
;   undefined4 DAT_01bcddf8
;   undefined4 DAT_01bcddfc
;   undefined4 DAT_01bcde00
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046fa80
        ;   Label: FUN_0046fa80
    PUSH ESI                            ; 0046fa81
    PUSH EDI                            ; 0046fa82
    PUSH EBP                            ; 0046fa83
    MOV ECX,0x7                         ; 0046fa84
    MOV EBX,0xfb                        ; 0046fa89
    MOV ESI,0xff                        ; 0046fa8e
    MOV EBP,0x4                         ; 0046fa93
    MOV EDI,0xfa                        ; 0046fa98
    XOR EDX,EDX                         ; 0046fa9d
    MOV dword ptr [0x01bcddcc],ECX      ; 0046fa9f | DAT_01bcddcc
    MOV dword ptr [0x01bcddd0],EBX      ; 0046faa5 | DAT_01bcddd0
    MOV dword ptr [0x01bcddd4],ESI      ; 0046faab | DAT_01bcddd4
    MOV dword ptr [0x01bcddd8],ESI      ; 0046fab1 | DAT_01bcddd8
    MOV dword ptr [0x01bcdddc],EBP      ; 0046fab7 | DAT_01bcdddc
    MOV dword ptr [0x01bcdde0],ESI      ; 0046fabd | DAT_01bcdde0
    MOV dword ptr [0x01bcdde4],ESI      ; 0046fac3 | DAT_01bcdde4
    MOV dword ptr [0x01bcdde8],ESI      ; 0046fac9 | DAT_01bcdde8
    MOV dword ptr [0x01bcddec],ESI      ; 0046facf | DAT_01bcddec
    MOV dword ptr [0x01bcddf0],ESI      ; 0046fad5 | DAT_01bcddf0
    MOV dword ptr [0x01bcddf4],EDI      ; 0046fadb | DAT_01bcddf4
    MOV dword ptr [0x01bcddf8],EDX      ; 0046fae1 | DAT_01bcddf8
    MOV dword ptr [0x01bcddfc],EBP      ; 0046fae7 | DAT_01bcddfc
    MOV dword ptr [0x01bcde00],ESI      ; 0046faed | DAT_01bcde00
    MOV dword ptr [0x01bcde04],ESI      ; 0046faf3 | DAT_01bcde04
    MOV dword ptr [0x01bcde08],ESI      ; 0046faf9 | DAT_01bcde08
    MOV dword ptr [0x01bcde18],ECX      ; 0046faff | DAT_01bcde18
    MOV dword ptr [0x01bcddc8],EDX      ; 0046fb05 | DAT_01bcddc8
    MOV ESI,0xf8                        ; 0046fb0b
    MOV EDI,0x2                         ; 0046fb10
    MOV EBP,0xfa                        ; 0046fb15
    MOV dword ptr [0x01bcde0c],ESI      ; 0046fb1a | DAT_01bcde0c
    MOV dword ptr [0x01bcde10],EDI      ; 0046fb20 | DAT_01bcde10
    MOV dword ptr [0x01bcde14],EBP      ; 0046fb26 | DAT_01bcde14
    POP EBP                             ; 0046fb2c
    POP EDI                             ; 0046fb2d
    POP ESI                             ; 0046fb2e
    POP EBX                             ; 0046fb2f
    RET                                 ; 0046fb30

