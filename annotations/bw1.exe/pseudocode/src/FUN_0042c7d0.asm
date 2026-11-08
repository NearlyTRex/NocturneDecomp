; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042c7d0(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_005249b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042c7d0
        ;   Label: FUN_0042c7d0
    ADD EAX,0x158                       ; 0042c7d4
    PUSH EAX                            ; 0042c7d9
    CALL FUN_005249b0                   ; 0042c7da
        ;   XREF to: 005249b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005249b0()
    ADD ESP,0x4                         ; 0042c7df
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042c7e2
    PUSH EDX                            ; 0042c7e6
    CALL FUN_00408890                   ; 0042c7e7
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0042c7ec
    RET                                 ; 0042c7ef

