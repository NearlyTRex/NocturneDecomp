; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a48a0(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a48a0
        ;   Label: FUN_005a48a0
    PUSH 0x1                            ; 005a48a4
    PUSH 0x0                            ; 005a48a6
    ADD EAX,0x2b4                       ; 005a48a8
    PUSH EAX                            ; 005a48ad
    MOV dword ptr [EAX + 0x3178],0x0    ; 005a48ae
    CALL FUN_00503620                   ; 005a48b8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a48bd
    RET                                 ; 005a48c0

