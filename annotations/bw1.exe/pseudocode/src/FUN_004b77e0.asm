; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b77e0(int param_1)
;
;
; Called Functions:
;   FUN_0041da00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b77e0
        ;   Label: FUN_004b77e0
    ADD EAX,0x4                         ; 004b77e4
    PUSH EAX                            ; 004b77e7
    CALL FUN_0041da00                   ; 004b77e8
        ;   XREF to: 0041da00 (UNCONDITIONAL_CALL)  ; undefined FUN_0041da00()
    ADD ESP,0x4                         ; 004b77ed
    SUB EAX,0x4                         ; 004b77f0
    RET                                 ; 004b77f3

