; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_watcom_c_FUN_004b1b31(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004b1b31
        ;   Label: crt_watcom.c_FUN_004b1b31
    MOV AL,byte ptr [EDX + 0x4]         ; 004b1b34
    MOV byte ptr [ECX + 0x4],AL         ; 004b1b37
    MOV EAX,dword ptr [EDX]             ; 004b1b3a
    MOV dword ptr [ECX],EAX             ; 004b1b3c
    RET 0x4                             ; 004b1b3e

