; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051e0a0(undefined4 param_1)
;
;
; XREF[33]:
;   FUN_00424260 at 004242f4
;   FUN_004269b0 at 004269c6
;   FUN_00426e80 at 00426ece
;   FUN_00427290 at 004272a4
;   FUN_00427730 at 004277c2
;   FUN_0042abd0 at 0042ac56
;   FUN_0042add0 at 0042ae0a
;   FUN_004363e0 at 004363f6
;   FUN_004a0550 at 004a2ceb
;   FUN_004d4ba0 at 004d4bb7
;   ... and 23 more
;
; Called Functions:
;   FUN_00518130
;   FUN_0051e020
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051e0a0
        ;   Label: FUN_0051e0a0
    PUSH EDX                            ; 0051e0a4
    CALL FUN_0051e020                   ; 0051e0a5
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    ADD ESP,0x4                         ; 0051e0aa
    PUSH EAX                            ; 0051e0ad
    CALL FUN_00518130                   ; 0051e0ae
        ;   XREF to: 00518130 (UNCONDITIONAL_CALL)  ; undefined FUN_00518130()
    ADD ESP,0x4                         ; 0051e0b3
    RET                                 ; 0051e0b6

