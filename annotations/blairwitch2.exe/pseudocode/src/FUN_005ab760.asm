; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ab760(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ab760
        ;   Label: FUN_005ab760
    PUSH 0x1                            ; 005ab764
    PUSH 0x6                            ; 005ab766
    ADD EAX,0x2b4                       ; 005ab768
    PUSH EAX                            ; 005ab76d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005ab76e
    CALL FUN_00503620                   ; 005ab778
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005ab77d
    RET                                 ; 005ab780

