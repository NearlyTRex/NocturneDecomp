; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004180a0(int param_1)
;
;
; Called Functions:
;   FUN_0048cf60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004180a0
        ;   Label: FUN_004180a0
    ADD EAX,0xc                         ; 004180a4
    PUSH EAX                            ; 004180a7
    CALL FUN_0048cf60                   ; 004180a8
        ;   XREF to: 0048cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0048cf60()
    ADD ESP,0x4                         ; 004180ad
    SUB EAX,0xc                         ; 004180b0
    RET                                 ; 004180b3

