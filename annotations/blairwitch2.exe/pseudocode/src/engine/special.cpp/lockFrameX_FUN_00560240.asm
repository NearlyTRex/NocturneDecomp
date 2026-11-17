; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_lockFrameX_FUN_00560240(void)
;
;
; Referenced Globals:
;   int g_INT_006141c0 = 0x8
;   void* g_PTR_0264bc68
;   int g_INT_0264bcfc
;   int g_INT_0264bd04
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bc68],0x0      ; 00560240 | g_PTR_0264bc68
        ;   Label: engine_special.cpp_lockFrameX_FUN_00560240
    JNZ 0x0056024c                      ; 00560247
        ;   XREF to: 0056024c (CONDITIONAL_JUMP)  ; LAB_0056024c
    XOR EAX,EAX                         ; 00560249
    RET                                 ; 0056024b
        ;   Label: LAB_0056024b
    CALL dword ptr [0x0264bc68]         ; 0056024c | g_PTR_0264bc68
        ;   Label: LAB_0056024c
    TEST EAX,EAX                        ; 00560252
    JZ 0x0056024b                       ; 00560254
        ;   XREF to: 0056024b (CONDITIONAL_JUMP)  ; LAB_0056024b
    MOV EAX,[0x006141c0]                ; 00560256 | g_INT_006141c0
    MOV [0x0264bcfc],EAX                ; 0056025b | g_INT_0264bcfc
    MOV EAX,[0x0264bd04]                ; 00560260 | g_INT_0264bd04
    MOV [0x006141c0],EAX                ; 00560265 | g_INT_006141c0
    MOV EAX,0x1                         ; 0056026a
    RET                                 ; 0056026f

