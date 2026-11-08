; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484370(int param_1)
;
;
; XREF[1]:
;   FUN_00484350 at 00484356
;
; Referenced Globals:
;   undefined4 DAT_01c26410
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00484370
        ;   Label: FUN_00484370
    CMP EDX,dword ptr [0x01c26410]      ; 00484374 | DAT_01c26410
    JZ 0x0048437d                       ; 0048437a
        ;   XREF to: 0048437d (CONDITIONAL_JUMP)  ; LAB_0048437d
    RET                                 ; 0048437c
    XOR ECX,ECX                         ; 0048437d
        ;   Label: LAB_0048437d
    MOV dword ptr [0x01c26410],ECX      ; 0048437f | DAT_01c26410
    RET                                 ; 00484385

