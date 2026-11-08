; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f2430(void)
;
;
; XREF[1]:
;   FUN_004ee5b0 at 004ee5fe
;
; Referenced Globals:
;   undefined4 DAT_01c6e2ac
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;   undefined4 DAT_01d76c38
;   undefined4 DAT_01d76c3c
;   undefined4 DAT_01d76c44
;   undefined4 DAT_01d76c48
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d76c38]                ; 004f2430 | DAT_01d76c38
        ;   Label: FUN_004f2430
    MOV ECX,dword ptr [0x01d76c48]      ; 004f2435 | DAT_01d76c48
    XOR EDX,EDX                         ; 004f243b
    OR AX,0x205                         ; 004f243d
    MOV dword ptr [0x01c6e2b8],EDX      ; 004f2441 | DAT_01c6e2b8
    MOV [0x01c6e2b4],EAX                ; 004f2447 | DAT_01c6e2b4
    TEST ECX,ECX                        ; 004f244c
    JNZ 0x004f2464                      ; 004f244e
        ;   XREF to: 004f2464 (CONDITIONAL_JUMP)  ; LAB_004f2464
    CMP dword ptr [0x01d76c44],0x0      ; 004f2450 | DAT_01d76c44
        ;   Label: LAB_004f2450
    JNZ 0x004f246d                      ; 004f2457
        ;   XREF to: 004f246d (CONDITIONAL_JUMP)  ; LAB_004f246d
    MOV EAX,[0x01d76c3c]                ; 004f2459 | DAT_01d76c3c
    MOV [0x01c6e2ac],EAX                ; 004f245e | DAT_01c6e2ac
    RET                                 ; 004f2463
    OR byte ptr [0x01c6e2b4],0x8        ; 004f2464 | DAT_01c6e2b4
        ;   Label: LAB_004f2464
    JMP 0x004f2450                      ; 004f246b
        ;   XREF to: 004f2450 (UNCONDITIONAL_JUMP)  ; LAB_004f2450
    OR word ptr [0x01c6e2b4],0x122      ; 004f246d | DAT_01c6e2b4
        ;   Label: LAB_004f246d
    MOV EAX,[0x01d76c3c]                ; 004f2476 | DAT_01d76c3c
    MOV [0x01c6e2ac],EAX                ; 004f247b | DAT_01c6e2ac
    RET                                 ; 004f2480

