; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a90d0(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a90d0
        ;   Label: FUN_005a90d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a90d2
    PUSH 0x0                            ; 005a90d6
    ADD EAX,0x2b4                       ; 005a90d8
    PUSH EAX                            ; 005a90dd
    CALL FUN_00503620                   ; 005a90de
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a90e3
    RET                                 ; 005a90e6

