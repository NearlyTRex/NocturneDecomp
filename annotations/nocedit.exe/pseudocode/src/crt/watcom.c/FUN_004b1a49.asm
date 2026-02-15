; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_watcom_c_FUN_004b1a49(void)
;
;
; *****************************************************************************

section .text

    PUSH ECX                            ; 004b1a49
        ;   Label: crt_watcom.c_FUN_004b1a49
    PUSH ES                             ; 004b1a4a
    MOV word ptr [ECX + 0x4],DX         ; 004b1a4b
    MOV dword ptr [ECX],EDX             ; 004b1a4f
    FMULP ST0                           ; 004b1a51
    RET 0x4                             ; 004b1a53

