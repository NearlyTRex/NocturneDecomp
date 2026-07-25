; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00423d40(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00423d40
        ;   Label: FUN_00423d40
    MOV EAX,dword ptr [ESP + 0x8]       ; 00423d44
    MOV EAX,dword ptr [EAX]             ; 00423d48
    MOV EDX,dword ptr [ECX]             ; 00423d4a
    MOV dword ptr [ECX],EAX             ; 00423d4c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00423d4e
    MOV dword ptr [EAX],EDX             ; 00423d52
    RET                                 ; 00423d54

