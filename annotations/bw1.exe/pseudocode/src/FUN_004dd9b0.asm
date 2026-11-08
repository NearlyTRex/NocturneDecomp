; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dd9b0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004dd9b0
        ;   Label: FUN_004dd9b0
    PUSH EDX                            ; 004dd9b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004dd9b5
    PUSH ECX                            ; 004dd9b9
    CALL FUN_004310b0                   ; 004dd9ba
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 004dd9bf
    RET                                 ; 004dd9c2

