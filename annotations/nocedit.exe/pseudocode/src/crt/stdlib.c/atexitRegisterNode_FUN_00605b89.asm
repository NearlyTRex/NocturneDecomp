; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_stdlib.c_atexitRegisterNode_FUN_00605b89(WatcomStaticDestructorNode * node_ptr)
;
; Parameters:
; WatcomStaticDestructorNode * Stack[0x4]:4   node_ptr
;
; XREF[1]:
;   crt_stdlib.c_atexit_FUN_005ff060 at 005ff065
;
; Referenced Globals:
;   WatcomStaticDestructorNode* g_AtexitListHead = 00000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00605b89
        ;   Label: crt_stdlib.c_atexitRegisterNode_FUN_00605b89
    MOV EAX,[0x0068527c]                ; 00605b8d | WatcomStaticDestructorNode * g_AtexitListHead
    MOV dword ptr [EDX],EAX             ; 00605b92
    MOV dword ptr [0x0068527c],EDX      ; 00605b94 | WatcomStaticDestructorNode * g_AtexitListHead
    RET                                 ; 00605b9a

