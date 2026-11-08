; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a6720(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a6720
        ;   Label: FUN_005a6720
    PUSH 0x1                            ; 005a6724
    PUSH 0x0                            ; 005a6726
    ADD EAX,0x2b4                       ; 005a6728
    PUSH EAX                            ; 005a672d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005a672e
    CALL FUN_00503620                   ; 005a6738
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a673d
    RET                                 ; 005a6740
        ;   Label: LAB_005a6740

