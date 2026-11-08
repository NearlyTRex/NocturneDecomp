; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00486c30(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d1e364
;   undefined4 DAT_01d1e368
;   undefined4 DAT_01d1e36c
;   undefined4 DAT_01d1e398
;   undefined4 DAT_01d1e4a0
;   undefined4 DAT_01d20014
;   undefined4 DAT_01d2001c
;   undefined4 DAT_01d20030
;
; Called Functions:
;   FUN_00408b80
;   FUN_0045b550
;   FUN_0045fab0
;   FUN_00537270
;   FUN_0057b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486c30
        ;   Label: FUN_00486c30
    PUSH EBP                            ; 00486c31
    SUB ESP,0x30                        ; 00486c32
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00486c35
    CMP dword ptr [EBX + 0x598],0x0     ; 00486c39
    JNZ 0x00486c5f                      ; 00486c40
        ;   XREF to: 00486c5f (CONDITIONAL_JUMP)  ; LAB_00486c5f
    PUSH dword ptr [ESP + 0x40]         ; 00486c42
        ;   Label: LAB_00486c42
    PUSH EBX                            ; 00486c46
    MOV dword ptr [EBX + 0x598],0x0     ; 00486c47
    CALL FUN_0057b160                   ; 00486c51
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b160()
    ADD ESP,0x8                         ; 00486c56
    ADD ESP,0x30                        ; 00486c59
    POP EBP                             ; 00486c5c
    POP EBX                             ; 00486c5d
    RET                                 ; 00486c5e
    PUSH EDI                            ; 00486c5f
        ;   Label: LAB_00486c5f
    PUSH ESI                            ; 00486c60
    MOV ECX,0x1                         ; 00486c61
    LEA ESI,[ESP + 0x20]                ; 00486c66
    PUSH EBX                            ; 00486c6a
    MOV EAX,dword ptr [EBX + 0x154]     ; 00486c6b
    LEA EDI,[ESP + 0xc]                 ; 00486c71
    MOV dword ptr [0x01d20014],ECX      ; 00486c75 | DAT_01d20014
    CALL dword ptr [EAX + 0xe0]         ; 00486c7b
    ADD ESP,0x4                         ; 00486c81
    LEA EAX,[ESP + 0x8]                 ; 00486c84
    LEA ESI,[ESP + 0x20]                ; 00486c88
    PUSH EAX                            ; 00486c8c
    MOVSD ES:EDI,ESI                    ; 00486c8d
    MOVSD ES:EDI,ESI                    ; 00486c8e
    MOVSD ES:EDI,ESI                    ; 00486c8f
    PUSH EBX                            ; 00486c90
    LEA ESI,[ESP + 0x34]                ; 00486c91
    LEA EDI,[ESP + 0x1c]                ; 00486c95
    CALL FUN_00408b80                   ; 00486c99
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x34]                ; 00486c9e
    ADD ESP,0x8                         ; 00486ca2
    MOVSD ES:EDI,ESI                    ; 00486ca5
    MOVSD ES:EDI,ESI                    ; 00486ca6
    MOVSD ES:EDI,ESI                    ; 00486ca7
    XOR ESI,ESI                         ; 00486ca8
    LEA EAX,[ESP + 0x14]                ; 00486caa
    MOV dword ptr [0x01d2001c],ESI      ; 00486cae | DAT_01d2001c
    CMP EAX,0x1d1e364                   ; 00486cb4
    JZ 0x00486cd6                       ; 00486cb9
        ;   XREF to: 00486cd6 (CONDITIONAL_JUMP)  ; LAB_00486cd6
    MOV EAX,dword ptr [ESP + 0x14]      ; 00486cbb
    MOV [0x01d1e364],EAX                ; 00486cbf | DAT_01d1e364
    MOV EAX,dword ptr [ESP + 0x18]      ; 00486cc4
    MOV [0x01d1e368],EAX                ; 00486cc8 | DAT_01d1e368
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00486ccd
    MOV [0x01d1e36c],EAX                ; 00486cd1 | DAT_01d1e36c
    LEA EAX,[EBX + 0x30]                ; 00486cd6
        ;   Label: LAB_00486cd6
    PUSH EAX                            ; 00486cd9
    PUSH 0x1d1e370                      ; 00486cda
    CALL FUN_0045b550                   ; 00486cdf
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b550()
    ADD ESP,0x8                         ; 00486ce4
    MOV EDI,0x42e00000                  ; 00486ce7
    PUSH 0x3f800000                     ; 00486cec
    FLD float ptr [EBX + 0x59c]         ; 00486cf1
    PUSH 0x1d1e360                      ; 00486cf7
    FSTP float ptr [0x01d1e4a0]         ; 00486cfc | DAT_01d1e4a0
    MOV dword ptr [0x01d1e398],EDI      ; 00486d02 | DAT_01d1e398
    CALL FUN_0045fab0                   ; 00486d08
        ;   XREF to: 0045fab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045fab0()
    ADD ESP,0x8                         ; 00486d0d
    PUSH 0x1d1e360                      ; 00486d10
    MOV EAX,[0x00603b28]                ; 00486d15 | DAT_00603b28
    XOR EBP,EBP                         ; 00486d1a
    PUSH EAX                            ; 00486d1c
    MOV dword ptr [0x01d20030],EBP      ; 00486d1d | DAT_01d20030
    CALL FUN_00537270                   ; 00486d23
        ;   XREF to: 00537270 (UNCONDITIONAL_CALL)  ; undefined FUN_00537270()
    ADD ESP,0x8                         ; 00486d28
    POP ESI                             ; 00486d2b
    POP EDI                             ; 00486d2c
    JMP 0x00486c42                      ; 00486d2d
        ;   XREF to: 00486c42 (UNCONDITIONAL_JUMP)  ; LAB_00486c42

