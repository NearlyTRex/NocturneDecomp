; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a9e4b(WatcomStaticDestructorNode *param_1)
;
;
; XREF[1]:
;   crt_stdlib.c__atexit_FUN_005a3e13 at 005a3e18
;
; Referenced Globals:
;   WatcomStaticDestructorNode* g_WatcomStaticDestructorNode_PTR_00607b10 = 00000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9e4b
        ;   Label: crt_unknown.c_FUN_005a9e4b
    MOV EAX,[0x00607b10]                ; 005a9e4f | g_WatcomStaticDestructorNode_PTR_00607b10
    MOV dword ptr [EDX],EAX             ; 005a9e54
    MOV dword ptr [0x00607b10],EDX      ; 005a9e56 | g_WatcomStaticDestructorNode_PTR_00607b10
    RET                                 ; 005a9e5c

