; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00492600(void)
;
;
; Called Functions:
;   FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00492600
        ;   Label: FUN_00492600
    PUSH 0x43fa0000                     ; 00492603
    PUSH 0x43c80000                     ; 00492608
    CALL FUN_0040cc00                   ; 0049260d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 00492612
    FLD float ptr [ESP + 0xc]           ; 00492616
    ADD ESP,0x8                         ; 0049261a
    FSTP float ptr [ESP]                ; 0049261d
    MOV EAX,dword ptr [ESP]             ; 00492620
    ADD ESP,0x8                         ; 00492623
    LEA EAX,[EAX]                       ; 00492626
    LEA EDX,[EDX]                       ; 0049262c
    RET                                 ; 00492630
        ;   Label: LAB_00492630

