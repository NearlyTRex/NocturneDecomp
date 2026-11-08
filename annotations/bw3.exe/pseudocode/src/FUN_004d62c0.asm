; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d62c0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d62c0
        ;   Label: FUN_004d62c0
    PUSH EDX                            ; 004d62c4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d62c5
    PUSH ECX                            ; 004d62c9
    CALL FUN_00430430                   ; 004d62ca
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; undefined FUN_00430430()
    ADD ESP,0x8                         ; 004d62cf
    RET                                 ; 004d62d2

