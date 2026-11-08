; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a2a90(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a2a90
        ;   Label: FUN_005a2a90
    PUSH 0x1                            ; 005a2a94
    PUSH 0x3                            ; 005a2a96
    ADD EAX,0x2b4                       ; 005a2a98
    PUSH EAX                            ; 005a2a9d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005a2a9e
    CALL FUN_00503620                   ; 005a2aa8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a2aad
    RET                                 ; 005a2ab0

