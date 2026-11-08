; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3b10(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a3b10
        ;   Label: FUN_005a3b10
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a3b12
    PUSH 0x7                            ; 005a3b16
    ADD EAX,0x2b4                       ; 005a3b18
    PUSH EAX                            ; 005a3b1d
    CALL FUN_00503620                   ; 005a3b1e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a3b23
    RET                                 ; 005a3b26

