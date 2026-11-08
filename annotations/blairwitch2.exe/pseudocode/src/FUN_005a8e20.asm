; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8e20(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a8e20
        ;   Label: FUN_005a8e20
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a8e22
    PUSH 0x0                            ; 005a8e26
    ADD EAX,0x2b4                       ; 005a8e28
    PUSH EAX                            ; 005a8e2d
    CALL FUN_00503620                   ; 005a8e2e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a8e33
    RET                                 ; 005a8e36

