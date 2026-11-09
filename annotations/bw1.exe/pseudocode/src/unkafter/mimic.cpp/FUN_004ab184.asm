; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_mimic_cpp_FUN_004ab184(void)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x4]         ; 004ab184
        ;   Label: unkafter_mimic.cpp_FUN_004ab184
    MOV byte ptr [ECX + 0x4],AL         ; 004ab187
    MOV EAX,dword ptr [EDX]             ; 004ab18a
    MOV dword ptr [ECX],EAX             ; 004ab18c
    RET 0x4                             ; 004ab18e

