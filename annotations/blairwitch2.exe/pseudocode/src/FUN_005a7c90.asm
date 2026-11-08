; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7c90(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a7c90
        ;   Label: FUN_005a7c90
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a7c92
    PUSH 0x0                            ; 005a7c96
    ADD EAX,0x2b4                       ; 005a7c98
    PUSH EAX                            ; 005a7c9d
    CALL FUN_00503620                   ; 005a7c9e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a7ca3
    RET                                 ; 005a7ca6

