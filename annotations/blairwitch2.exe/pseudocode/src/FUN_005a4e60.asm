; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4e60(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a4e60
        ;   Label: FUN_005a4e60
    PUSH 0x1                            ; 005a4e64
    PUSH 0x6                            ; 005a4e66
    ADD EAX,0x2b4                       ; 005a4e68
    PUSH EAX                            ; 005a4e6d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005a4e6e
    CALL FUN_00503620                   ; 005a4e78
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a4e7d
    RET                                 ; 005a4e80

