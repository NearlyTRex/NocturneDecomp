; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d2130(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409d50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d2130
        ;   Label: FUN_004d2130
    PUSH EDX                            ; 004d2134
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d2135
    PUSH ECX                            ; 004d2139
    CALL FUN_00409d50                   ; 004d213a
        ;   XREF to: 00409d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d50()
    ADD ESP,0x8                         ; 004d213f
    RET                                 ; 004d2142

