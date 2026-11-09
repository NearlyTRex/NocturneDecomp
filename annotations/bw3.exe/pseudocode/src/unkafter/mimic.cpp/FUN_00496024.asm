; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_mimic_cpp_FUN_00496024(void)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x4]         ; 00496024
        ;   Label: unkafter_mimic.cpp_FUN_00496024
    MOV byte ptr [ECX + 0x4],AL         ; 00496027
    MOV EAX,dword ptr [EDX]             ; 0049602a
    MOV dword ptr [ECX],EAX             ; 0049602c
    RET 0x4                             ; 0049602e

