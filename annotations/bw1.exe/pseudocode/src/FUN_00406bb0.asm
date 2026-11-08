; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406bb0(int param_1)
;
;
; Called Functions:
;   FUN_00406bd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00406bb0
        ;   Label: FUN_00406bb0
    MOV EDX,dword ptr [EAX + 0x4]       ; 00406bb4
    PUSH EDX                            ; 00406bb7
    CALL FUN_00406bd0                   ; 00406bb8
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bd0()
    ADD ESP,0x4                         ; 00406bbd
    MOV EAX,dword ptr [ESP + 0x4]       ; 00406bc0
    ADD EAX,0x8                         ; 00406bc4
    RET                                 ; 00406bc7

