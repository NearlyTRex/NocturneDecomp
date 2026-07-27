; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00481acc(void)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x6]         ; 00481acc
        ;   Label: crt_unknown.c_FUN_00481acc
    MOV byte ptr [ECX + 0x6],AL         ; 00481acf
    MOV AX,word ptr [EDX + 0x4]         ; 00481ad2
        ;   Label: LAB_00481ad2
    MOV word ptr [ECX + 0x4],AX         ; 00481ad6
    MOV EAX,dword ptr [EDX]             ; 00481ada
        ;   Label: LAB_00481ada
    MOV dword ptr [ECX],EAX             ; 00481adc
    RET 0x4                             ; 00481ade

