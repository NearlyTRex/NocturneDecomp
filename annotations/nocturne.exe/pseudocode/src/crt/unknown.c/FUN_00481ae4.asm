; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00481ae4(void)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x4]         ; 00481ae4
        ;   Label: crt_unknown.c_FUN_00481ae4
    MOV byte ptr [ECX + 0x4],AL         ; 00481ae7
    MOV EAX,dword ptr [EDX]             ; 00481aea
    MOV dword ptr [ECX],EAX             ; 00481aec
    RET 0x4                             ; 00481aee

