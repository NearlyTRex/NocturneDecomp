; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050fab0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0046aff0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0050fab0
        ;   Label: FUN_0050fab0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050fab3
    PUSH EDX                            ; 0050fab7
    PUSH 0x1fba938                      ; 0050fab8
    CALL FUN_0046aff0                   ; 0050fabd
        ;   XREF to: 0046aff0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046aff0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0050fac2
    FLD float ptr [ESP + 0xc]           ; 0050fac6
    ADD ESP,0x8                         ; 0050faca
    FSTP float ptr [ESP]                ; 0050facd
    MOV EAX,dword ptr [ESP]             ; 0050fad0
    ADD ESP,0x8                         ; 0050fad3
    RET                                 ; 0050fad6

