; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c6fdb(WatcomStaticDestructorNode *param_1)
;
;
; XREF[1]:
;   crt_stdlib.c__atexit_FUN_005c1093 at 005c1098
;
; Referenced Globals:
;   WatcomStaticDestructorNode* g_AtexitListHead = 00000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c6fdb
        ;   Label: crt_unknown.c_FUN_005c6fdb
    MOV EAX,[0x0062676c]                ; 005c6fdf | g_AtexitListHead
    MOV dword ptr [EDX],EAX             ; 005c6fe4
    MOV dword ptr [0x0062676c],EDX      ; 005c6fe6 | g_AtexitListHead
    RET                                 ; 005c6fec

