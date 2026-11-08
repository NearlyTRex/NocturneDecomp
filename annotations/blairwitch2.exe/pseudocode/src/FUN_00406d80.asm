; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406d80(int param_1)
;
;
; Called Functions:
;   FUN_00406da0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00406d80
        ;   Label: FUN_00406d80
    MOV EDX,dword ptr [EAX + 0x4]       ; 00406d84
    PUSH EDX                            ; 00406d87
    CALL FUN_00406da0                   ; 00406d88
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406da0()
    ADD ESP,0x4                         ; 00406d8d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00406d90
    ADD EAX,0x8                         ; 00406d94
    RET                                 ; 00406d97

