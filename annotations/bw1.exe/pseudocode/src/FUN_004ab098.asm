; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ab098(void)
;
;
; *****************************************************************************

section .text

    MOV byte ptr [ECX + 0x6],DL         ; 004ab098
        ;   Label: FUN_004ab098
    MOV word ptr [ECX + 0x4],DX         ; 004ab09b
        ;   Label: LAB_004ab09b
    MOV dword ptr [ECX],EDX             ; 004ab09f
        ;   Label: LAB_004ab09f
    FMULP ST0                           ; 004ab0a1
        ;   Label: LAB_004ab0a1
    RET 0x4                             ; 004ab0a3

