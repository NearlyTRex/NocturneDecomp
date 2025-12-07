; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_unknown.c_staticFinal_FUN_00605b62(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode* g_AtexitListHead = 00000000
;
; *****************************************************************************

section .text

    MOV EAX,[0x0068527c]                ; 00605b62 | WatcomStaticDestructorNode * g_AtexitListHead
        ;   Label: crt_unknown.c_staticFinal_FUN_00605b62
    TEST EAX,EAX                        ; 00605b67
    JNZ 0x00605b6e                      ; 00605b69 | LAB_00605b6e
        ;   XREF to: 00605b6e (CONDITIONAL_JUMP)
    JNZ 0x00605b78                      ; 00605b6b | LAB_00605b78
        ;   Label: LAB_00605b6b
        ;   XREF to: 00605b78 (CONDITIONAL_JUMP)
    RET                                 ; 00605b6d
    MOV EDX,dword ptr [EAX]             ; 00605b6e
        ;   Label: LAB_00605b6e
    MOV dword ptr [0x0068527c],EDX      ; 00605b70 | WatcomStaticDestructorNode * g_AtexitListHead
    JMP 0x00605b6b                      ; 00605b76 | LAB_00605b6b
        ;   XREF to: 00605b6b (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x4]       ; 00605b78
        ;   Label: LAB_00605b78
    PUSH 0x0                            ; 00605b7b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00605b7d
    PUSH EDX                            ; 00605b80
    CALL dword ptr [EAX + 0x4]          ; 00605b81
    ADD ESP,0x8                         ; 00605b84
    JMP 0x00605b62                      ; 00605b87
        ;   XREF to: 00605b62 (UNCONDITIONAL_JUMP)

