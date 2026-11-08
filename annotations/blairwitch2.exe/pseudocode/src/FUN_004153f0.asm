; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004153f0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004153f0
        ;   Label: FUN_004153f0
    PUSH EDX                            ; 004153f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004153f5
    PUSH ECX                            ; 004153f9
    CALL FUN_00427680                   ; 004153fa
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 004153ff
    RET                                 ; 00415402

