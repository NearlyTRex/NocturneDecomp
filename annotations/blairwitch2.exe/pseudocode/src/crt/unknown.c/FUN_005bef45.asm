; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bef45(undefined4 *param_1)
;
;
; XREF[1]:
;   crt_stdlib.c__atexit_FUN_005b8d8c at 005b8d91
;
; Referenced Globals:
;   undefined4 DAT_0061f64c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005bef45
        ;   Label: crt_unknown.c_FUN_005bef45
    MOV EAX,[0x0061f64c]                ; 005bef49 | DAT_0061f64c
    MOV dword ptr [EDX],EAX             ; 005bef4e
    MOV dword ptr [0x0061f64c],EDX      ; 005bef50 | DAT_0061f64c
    RET                                 ; 005bef56

