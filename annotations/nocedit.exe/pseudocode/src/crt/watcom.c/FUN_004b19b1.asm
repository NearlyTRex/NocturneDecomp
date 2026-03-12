; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_watcom_c_FUN_004b19b1(int *param_1)
;
; Parameters:
; int *            Stack[0x4]:4   param_1
;
; *****************************************************************************

section .text

    PUSH ESP                            ; 004b19b1
        ;   Label: crt_watcom.c_FUN_004b19b1
    AND AL,0x4                          ; 004b19b2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b19b4
    MOV EAX,dword ptr [EAX]             ; 004b19b8
    MOV dword ptr [EDX],EAX             ; 004b19ba
    MOV EAX,EDX                         ; 004b19bc
    RET                                 ; 004b19be

