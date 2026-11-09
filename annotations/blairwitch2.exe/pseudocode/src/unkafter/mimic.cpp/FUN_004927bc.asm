; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_mimic_cpp_FUN_004927bc(void)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x6]         ; 004927bc
        ;   Label: unkafter_mimic.cpp_FUN_004927bc
    MOV byte ptr [ECX + 0x6],AL         ; 004927bf
    MOV AX,word ptr [EDX + 0x4]         ; 004927c2
        ;   Label: LAB_004927c2
    MOV word ptr [ECX + 0x4],AX         ; 004927c6
    MOV EAX,dword ptr [EDX]             ; 004927ca
        ;   Label: LAB_004927ca
    MOV dword ptr [ECX],EAX             ; 004927cc
    RET 0x4                             ; 004927ce

