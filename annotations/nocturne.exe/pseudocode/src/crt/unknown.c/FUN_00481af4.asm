; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00481af4(void)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x2]         ; 00481af4
        ;   Label: crt_unknown.c_FUN_00481af4
    MOV byte ptr [ECX + 0x2],AL         ; 00481af7
    MOV AX,word ptr [EDX]               ; 00481afa
        ;   Label: LAB_00481afa
    MOV word ptr [ECX],AX               ; 00481afd
    RET 0x4                             ; 00481b00

