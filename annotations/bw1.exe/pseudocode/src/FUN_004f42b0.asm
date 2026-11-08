; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f42b0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f42b0
        ;   Label: FUN_004f42b0
    PUSH EDX                            ; 004f42b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f42b5
    PUSH ECX                            ; 004f42b9
    CALL FUN_004310b0                   ; 004f42ba
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 004f42bf
    RET                                 ; 004f42c2

