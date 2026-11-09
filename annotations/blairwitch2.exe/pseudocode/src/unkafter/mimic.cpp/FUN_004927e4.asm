; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_mimic_cpp_FUN_004927e4(void)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x2]         ; 004927e4
        ;   Label: unkafter_mimic.cpp_FUN_004927e4
    MOV byte ptr [ECX + 0x2],AL         ; 004927e7
    MOV AX,word ptr [EDX]               ; 004927ea
        ;   Label: LAB_004927ea
    MOV word ptr [ECX],AX               ; 004927ed
    RET 0x4                             ; 004927f0

