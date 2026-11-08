; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cdfe0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409ec0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004cdfe0
        ;   Label: FUN_004cdfe0
    PUSH EDX                            ; 004cdfe4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004cdfe5
    PUSH ECX                            ; 004cdfe9
    CALL FUN_00409ec0                   ; 004cdfea
        ;   XREF to: 00409ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ec0()
    ADD ESP,0x8                         ; 004cdfef
    RET                                 ; 004cdff2

