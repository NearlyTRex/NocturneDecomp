; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004150d0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004150d0
        ;   Label: FUN_004150d0
    PUSH EDX                            ; 004150d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004150d5
    PUSH ECX                            ; 004150d9
    CALL FUN_004310b0                   ; 004150da
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 004150df
    RET                                 ; 004150e2

