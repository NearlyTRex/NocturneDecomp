; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415a10(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00415a10
        ;   Label: FUN_00415a10
    PUSH EDX                            ; 00415a14
    MOV ECX,dword ptr [ESP + 0x8]       ; 00415a15
    PUSH ECX                            ; 00415a19
    CALL FUN_00427da0                   ; 00415a1a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427da0()
    ADD ESP,0x8                         ; 00415a1f
    RET                                 ; 00415a22

