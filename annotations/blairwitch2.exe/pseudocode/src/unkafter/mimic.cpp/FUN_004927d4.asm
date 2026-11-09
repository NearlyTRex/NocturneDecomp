; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_mimic_cpp_FUN_004927d4(void)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x4]         ; 004927d4
        ;   Label: unkafter_mimic.cpp_FUN_004927d4
    MOV byte ptr [ECX + 0x4],AL         ; 004927d7
    MOV EAX,dword ptr [EDX]             ; 004927da
    MOV dword ptr [ECX],EAX             ; 004927dc
    RET 0x4                             ; 004927de

