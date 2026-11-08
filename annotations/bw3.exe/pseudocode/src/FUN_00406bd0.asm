; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406bd0(int param_1)
;
;
; Called Functions:
;   FUN_00406bf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00406bd0
        ;   Label: FUN_00406bd0
    MOV EDX,dword ptr [EAX + 0x4]       ; 00406bd4
    PUSH EDX                            ; 00406bd7
    CALL FUN_00406bf0                   ; 00406bd8
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bf0()
    ADD ESP,0x4                         ; 00406bdd
    MOV EAX,dword ptr [ESP + 0x4]       ; 00406be0
    ADD EAX,0x8                         ; 00406be4
    RET                                 ; 00406be7

