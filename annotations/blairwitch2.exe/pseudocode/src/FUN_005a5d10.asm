; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a5d10(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a5d10
        ;   Label: FUN_005a5d10
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a5d12
    PUSH 0x0                            ; 005a5d16
    ADD EAX,0x2b4                       ; 005a5d18
    PUSH EAX                            ; 005a5d1d
    CALL FUN_00503620                   ; 005a5d1e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a5d23
    RET                                 ; 005a5d26

