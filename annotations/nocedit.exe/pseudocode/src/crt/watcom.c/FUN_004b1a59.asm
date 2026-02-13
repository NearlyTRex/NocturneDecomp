; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char __cdecl crt_watcom_c_FUN_004b1a59(void)
;
;
; *****************************************************************************

section .text

    PUSH ECX                            ; 004b1a59
        ;   Label: crt_watcom.c_FUN_004b1a59
    ADD AL,0x89                         ; 004b1a5a
    ADC ESI,EBX                         ; 004b1a5c
    ENTER 0x4c2,0x0                     ; 004b1a5e
    MOV EAX,EAX                         ; 004b1a62
    MOV byte ptr [ECX + 0x2],DL         ; 004b1a64
    MOV word ptr [ECX],DX               ; 004b1a67
    FMULP ST0                           ; 004b1a6a
    RET 0x4                             ; 004b1a6c

