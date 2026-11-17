; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c_atexitRegisterNode_FUN_0056b215(WatcomStaticDestructorNode *node_ptr)
;
; Parameters:
; WatcomStaticDestructorNode * Stack[0x4]:4   node_ptr
;
; XREF[1]:
;   crt_unknown.c__atexit_FUN_00564bb0 at 00564bb5
;
; Referenced Globals:
;   WatcomStaticDestructorNode* g_WatcomStaticDestructorNode_PTR_005c1f50 = 00000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056b215
        ;   Label: crt_stdlib.c_atexitRegisterNode_FUN_0056b215
    MOV EAX,[0x005c1f50]                ; 0056b219 | g_WatcomStaticDestructorNode_PTR_005c1f50
    MOV dword ptr [EDX],EAX             ; 0056b21e
    MOV dword ptr [0x005c1f50],EDX      ; 0056b220 | g_WatcomStaticDestructorNode_PTR_005c1f50
    RET                                 ; 0056b226

