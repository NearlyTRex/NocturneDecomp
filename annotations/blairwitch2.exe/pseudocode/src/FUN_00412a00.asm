; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00412a00(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00412a00
        ;   Label: FUN_00412a00
    PUSH EDX                            ; 00412a04
    MOV ECX,dword ptr [ESP + 0x8]       ; 00412a05
    PUSH ECX                            ; 00412a09
    CALL FUN_00427680                   ; 00412a0a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 00412a0f
    RET                                 ; 00412a12

