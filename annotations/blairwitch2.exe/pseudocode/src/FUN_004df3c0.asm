; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df3c0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409ec0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004df3c0
        ;   Label: FUN_004df3c0
    PUSH EDX                            ; 004df3c4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004df3c5
    PUSH ECX                            ; 004df3c9
    CALL FUN_00409ec0                   ; 004df3ca
        ;   XREF to: 00409ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ec0()
    ADD ESP,0x8                         ; 004df3cf
    RET                                 ; 004df3d2

