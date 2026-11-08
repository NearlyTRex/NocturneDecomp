; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00417cd0(int param_1)
;
;
; Called Functions:
;   FUN_00408930
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00417cd0
        ;   Label: FUN_00417cd0
    PUSH 0x1                            ; 00417cd4
    ADD EAX,0xc                         ; 00417cd6
    PUSH EAX                            ; 00417cd9
    CALL FUN_00408930                   ; 00417cda
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 00417cdf
    SUB EAX,0xc                         ; 00417ce2
    RET                                 ; 00417ce5

