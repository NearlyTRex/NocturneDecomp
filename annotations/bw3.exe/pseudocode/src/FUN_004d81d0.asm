; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d81d0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d81d0
        ;   Label: FUN_004d81d0
    PUSH EDX                            ; 004d81d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d81d5
    PUSH ECX                            ; 004d81d9
    CALL FUN_00430430                   ; 004d81da
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; undefined FUN_00430430()
    ADD ESP,0x8                         ; 004d81df
    RET                                 ; 004d81e2

