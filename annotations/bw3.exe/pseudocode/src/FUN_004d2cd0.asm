; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d2cd0(int param_1)
;
;
; XREF[1]:
;   FUN_004d24b0 at 004d25c2
;
; Called Functions:
;   FUN_004da4e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d2cd0
        ;   Label: FUN_004d2cd0
    ADD EAX,0x206e8                     ; 004d2cd4
    PUSH EAX                            ; 004d2cd9
    CALL FUN_004da4e0                   ; 004d2cda
        ;   XREF to: 004da4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004da4e0()
    ADD ESP,0x4                         ; 004d2cdf
    RET                                 ; 004d2ce2

