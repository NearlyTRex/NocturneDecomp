; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e5c00(void)
;
;
; XREF[4]:
;   FUN_004a1d00 at 004a4baa
;   FUN_004d6990 at 004d721f
;   FUN_004e5bd0 at 004e5bd6
;   FUN_0051a4f0 at 0051a9d4
;
; Referenced Globals:
;   undefined4 DAT_01cd0ea8
;   undefined4 DAT_01cd0ed0
;   undefined4 DAT_01cd0f18
;   undefined4 DAT_01cd56ac
;   undefined4 DAT_01cd56b0
;   undefined4 DAT_01cf69f4
;   undefined4 DAT_01cf69f8
;   undefined4 DAT_01cf6efc
;   undefined4 DAT_01cf6f00
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e5c00
        ;   Label: FUN_004e5c00
    XOR EDX,EDX                         ; 004e5c01
    MOV EAX,0x1cd0eac                   ; 004e5c03
    MOV dword ptr [0x01cd0ea8],EDX      ; 004e5c08 | DAT_01cd0ea8
    MOV dword ptr [0x01cd56ac],EDX      ; 004e5c0e | DAT_01cd56ac
    MOV dword ptr [0x01cd56b0],EDX      ; 004e5c14 | DAT_01cd56b0
    MOV dword ptr [0x01cf69f4],EDX      ; 004e5c1a | DAT_01cf69f4
    MOV dword ptr [0x01cf69f8],EDX      ; 004e5c20 | DAT_01cf69f8
    LEA EDX,[EAX + 0x4800]              ; 004e5c26
    ADD EAX,0x48                        ; 004e5c2c
        ;   Label: LAB_004e5c2c
    MOV dword ptr [EAX + -0x24],0x0     ; 004e5c2f | DAT_01cd0ed0 | DAT_01cd0f18
    CMP EAX,EDX                         ; 004e5c36
    JNZ 0x004e5c2c                      ; 004e5c38
        ;   XREF to: 004e5c2c (CONDITIONAL_JUMP)  ; LAB_004e5c2c
    XOR EAX,EDX                         ; 004e5c3a
    XOR EBP,EBP                         ; 004e5c3c
    MOV [0x01cf6f00],EAX                ; 004e5c3e | DAT_01cf6f00
    MOV dword ptr [0x01cf6efc],EBP      ; 004e5c43 | DAT_01cf6efc
    POP EBP                             ; 004e5c49
    RET                                 ; 004e5c4a

