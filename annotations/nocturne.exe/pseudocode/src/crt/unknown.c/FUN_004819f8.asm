; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_004819f8(void)
;
;
; *****************************************************************************

section .text

    MOV byte ptr [ECX + 0x6],DL         ; 004819f8
        ;   Label: crt_unknown.c_FUN_004819f8
    MOV word ptr [ECX + 0x4],DX         ; 004819fb
        ;   Label: LAB_004819fb
    MOV dword ptr [ECX],EDX             ; 004819ff
        ;   Label: LAB_004819ff
    FMULP ST0                           ; 00481a01
        ;   Label: LAB_00481a01
    RET 0x4                             ; 00481a03

