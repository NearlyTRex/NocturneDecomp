; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005af042(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005abc85 at 005abcad
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005af042
        ;   Label: crt_unknown.c_FUN_005af042
    MOV EDX,dword ptr [ESP + 0x8]       ; 005af046
    MOV dword ptr [EAX],EDX             ; 005af04a
    RET                                 ; 005af04c

