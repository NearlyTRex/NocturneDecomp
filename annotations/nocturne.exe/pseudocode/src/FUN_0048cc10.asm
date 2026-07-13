; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0048cc10(int param_1)
;
;
; Called Functions:
;   FUN_0041a610
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048cc10
        ;   Label: FUN_0048cc10
    ADD EAX,0x4                         ; 0048cc14
    PUSH EAX                            ; 0048cc17
    CALL FUN_0041a610                   ; 0048cc18
        ;   XREF to: 0041a610 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a610()
    ADD ESP,0x4                         ; 0048cc1d
    SUB EAX,0x4                         ; 0048cc20
    RET                                 ; 0048cc23

