; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a46c0(int param_1)
;
;
; Called Functions:
;   FUN_0041adf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a46c0
        ;   Label: FUN_004a46c0
    PUSH 0x0                            ; 004a46c4
    ADD EAX,0x180                       ; 004a46c6
    PUSH EAX                            ; 004a46cb
    CALL FUN_0041adf0                   ; 004a46cc
        ;   XREF to: 0041adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041adf0()
    ADD ESP,0x8                         ; 004a46d1
    SUB EAX,0x180                       ; 004a46d4
    RET                                 ; 004a46d9

