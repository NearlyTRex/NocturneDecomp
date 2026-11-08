; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0052c500(int param_1)
;
;
; Called Functions:
;   FUN_0059c8f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052c500
        ;   Label: FUN_0052c500
    PUSH 0x0                            ; 0052c504
    ADD EAX,0x178                       ; 0052c506
    PUSH EAX                            ; 0052c50b
    CALL FUN_0059c8f0                   ; 0052c50c
        ;   XREF to: 0059c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c8f0()
    ADD ESP,0x8                         ; 0052c511
    SUB EAX,0x178                       ; 0052c514
    RET                                 ; 0052c519

