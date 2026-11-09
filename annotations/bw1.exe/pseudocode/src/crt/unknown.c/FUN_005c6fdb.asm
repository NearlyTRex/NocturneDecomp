; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c6fdb(undefined4 *param_1)
;
;
; XREF[1]:
;   crt_stdlib.c__atexit_FUN_005c1093 at 005c1098
;
; Referenced Globals:
;   undefined4 DAT_0062676c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c6fdb
        ;   Label: crt_unknown.c_FUN_005c6fdb
    MOV EAX,[0x0062676c]                ; 005c6fdf | DAT_0062676c
    MOV dword ptr [EDX],EAX             ; 005c6fe4
    MOV dword ptr [0x0062676c],EDX      ; 005c6fe6 | DAT_0062676c
    RET                                 ; 005c6fec

