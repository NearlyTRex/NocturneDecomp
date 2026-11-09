; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_mimic_cpp_FUN_004ab16c(void)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x6]         ; 004ab16c
        ;   Label: unkafter_mimic.cpp_FUN_004ab16c
    MOV byte ptr [ECX + 0x6],AL         ; 004ab16f
    MOV AX,word ptr [EDX + 0x4]         ; 004ab172
        ;   Label: LAB_004ab172
    MOV word ptr [ECX + 0x4],AX         ; 004ab176
    MOV EAX,dword ptr [EDX]             ; 004ab17a
        ;   Label: LAB_004ab17a
    MOV dword ptr [ECX],EAX             ; 004ab17c
    RET 0x4                             ; 004ab17e

