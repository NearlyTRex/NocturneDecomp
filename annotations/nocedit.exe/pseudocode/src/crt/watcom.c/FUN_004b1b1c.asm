; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_watcom_c_FUN_004b1b1c(void)
;
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [EDX + 0x6]         ; 004b1b1c
        ;   Label: crt_watcom.c_FUN_004b1b1c
    MOV byte ptr [ECX + 0x6],AL         ; 004b1b1f
    MOV AX,word ptr [EDX + 0x4]         ; 004b1b22
    MOV word ptr [ECX + 0x4],AX         ; 004b1b26
    MOV EAX,dword ptr [EDX]             ; 004b1b2a
    MOV dword ptr [ECX],EAX             ; 004b1b2c
    RET 0x4                             ; 004b1b2e

