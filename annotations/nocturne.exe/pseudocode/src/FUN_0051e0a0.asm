; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051e0a0(undefined4 param_1)
;
;
; XREF[71]:
;   FUN_004102c0 at 004102d6
;   FUN_00412160 at 00412180
;   FUN_004134a0 at 004134c0
;   FUN_00413800 at 00413ae7
;   FUN_00418800 at 00418817
;   FUN_0041fc20 at 0041fc3a
;   FUN_00424260 at 004242f4
;   FUN_004269b0 at 004269c6
;   FUN_00426e80 at 00426ece
;   FUN_00427290 at 004272a4
;   ... and 61 more
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

