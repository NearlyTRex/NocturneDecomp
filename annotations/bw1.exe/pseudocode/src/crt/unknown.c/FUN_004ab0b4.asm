; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_004ab0b4(void)
;
;
; *****************************************************************************

section .text

    MOV byte ptr [ECX + 0x2],DL         ; 004ab0b4
        ;   Label: crt_unknown.c_FUN_004ab0b4
    MOV word ptr [ECX],DX               ; 004ab0b7
        ;   Label: LAB_004ab0b7
    FMULP ST0                           ; 004ab0ba
    RET 0x4                             ; 004ab0bc

