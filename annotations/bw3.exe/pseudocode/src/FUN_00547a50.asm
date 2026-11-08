; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00547a50(void)
;
;
; Called Functions:
;   FUN_004fb1f0
;   FUN_00547b90
;   FUN_005a5ff7
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 00547a50
        ;   Label: FUN_00547a50
    CALL FUN_005a5ff7                   ; 00547a55
        ;   XREF to: 005a5ff7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5ff7()
    PUSH 0x1                            ; 00547a5a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00547a5c
    PUSH EDX                            ; 00547a60
    CALL FUN_00547b90                   ; 00547a61
        ;   XREF to: 00547b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00547b90()
    ADD ESP,0x8                         ; 00547a66
    PUSH 0x1                            ; 00547a69
    MOV ECX,dword ptr [ESP + 0x8]       ; 00547a6b
    PUSH ECX                            ; 00547a6f
    CALL FUN_004fb1f0                   ; 00547a70
        ;   XREF to: 004fb1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb1f0()
    ADD ESP,0x8                         ; 00547a75
    RET                                 ; 00547a78

