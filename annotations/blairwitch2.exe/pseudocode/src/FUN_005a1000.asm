; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1000(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1000
        ;   Label: FUN_005a1000
    PUSH 0x1                            ; 005a1004
    PUSH 0x6                            ; 005a1006
    ADD EAX,0x2b4                       ; 005a1008
    PUSH EAX                            ; 005a100d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005a100e
    CALL FUN_00503620                   ; 005a1018
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a101d
    RET                                 ; 005a1020

