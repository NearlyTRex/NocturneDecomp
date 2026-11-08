; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a48a0(int param_1)
;
;
; Called Functions:
;   FUN_0041adf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a48a0
        ;   Label: FUN_004a48a0
    PUSH 0x0                            ; 004a48a4
    ADD EAX,0x4                         ; 004a48a6
    PUSH EAX                            ; 004a48a9
    CALL FUN_0041adf0                   ; 004a48aa
        ;   XREF to: 0041adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041adf0()
    ADD ESP,0x8                         ; 004a48af
    SUB EAX,0x4                         ; 004a48b2
    RET                                 ; 004a48b5

