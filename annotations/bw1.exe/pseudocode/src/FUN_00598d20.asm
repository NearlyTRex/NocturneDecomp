; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00598d20(void)
;
;
; Called Functions:
;   FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00598d20
        ;   Label: FUN_00598d20
    PUSH 0x41700000                     ; 00598d23
    PUSH 0x41200000                     ; 00598d28
    CALL FUN_0040cc00                   ; 00598d2d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 00598d32
    FLD float ptr [ESP + 0xc]           ; 00598d36
    ADD ESP,0x8                         ; 00598d3a
    FSTP float ptr [ESP]                ; 00598d3d
    MOV EAX,dword ptr [ESP]             ; 00598d40
    ADD ESP,0x8                         ; 00598d43
    RET                                 ; 00598d46

