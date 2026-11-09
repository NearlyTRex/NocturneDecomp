; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_mimic_cpp_FUN_0049600c(void)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x6]         ; 0049600c
        ;   Label: unkafter_mimic.cpp_FUN_0049600c
    MOV byte ptr [ECX + 0x6],AL         ; 0049600f
    MOV AX,word ptr [EDX + 0x4]         ; 00496012
        ;   Label: LAB_00496012
    MOV word ptr [ECX + 0x4],AX         ; 00496016
    MOV EAX,dword ptr [EDX]             ; 0049601a
        ;   Label: LAB_0049601a
    MOV dword ptr [ECX],EAX             ; 0049601c
    RET 0x4                             ; 0049601e

