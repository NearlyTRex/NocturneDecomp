; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a3810(void)
;
;
; Called Functions:
;   FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005a3810
        ;   Label: FUN_005a3810
    PUSH 0x41700000                     ; 005a3813
    PUSH 0x41200000                     ; 005a3818
    CALL FUN_0040cc00                   ; 005a381d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 005a3822
    FLD float ptr [ESP + 0xc]           ; 005a3826
    ADD ESP,0x8                         ; 005a382a
    FSTP float ptr [ESP]                ; 005a382d
    MOV EAX,dword ptr [ESP]             ; 005a3830
    ADD ESP,0x8                         ; 005a3833
    RET                                 ; 005a3836

