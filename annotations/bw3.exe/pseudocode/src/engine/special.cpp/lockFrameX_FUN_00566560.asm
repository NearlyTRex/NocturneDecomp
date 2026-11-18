; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_lockFrameX_FUN_00566560(void)
;
;
; Referenced Globals:
;   int g_INT_005fba20 = 0x8
;   void* g_APIDLL_lockFrameX
;   int g_INT_02cf6128
;   int g_INT_02cf6130
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf6094],0x0      ; 00566560 | g_APIDLL_lockFrameX
        ;   Label: engine_special.cpp_lockFrameX_FUN_00566560
    JNZ 0x0056656c                      ; 00566567
        ;   XREF to: 0056656c (CONDITIONAL_JUMP)  ; LAB_0056656c
    XOR EAX,EAX                         ; 00566569
    RET                                 ; 0056656b
        ;   Label: LAB_0056656b
    CALL dword ptr [0x02cf6094]         ; 0056656c | g_APIDLL_lockFrameX
        ;   Label: LAB_0056656c
    TEST EAX,EAX                        ; 00566572
    JZ 0x0056656b                       ; 00566574
        ;   XREF to: 0056656b (CONDITIONAL_JUMP)  ; LAB_0056656b
    MOV EAX,[0x005fba20]                ; 00566576 | g_INT_005fba20
    MOV [0x02cf6128],EAX                ; 0056657b | g_INT_02cf6128
    MOV EAX,[0x02cf6130]                ; 00566580 | g_INT_02cf6130
    MOV [0x005fba20],EAX                ; 00566585 | g_INT_005fba20
    MOV EAX,0x1                         ; 0056658a
    RET                                 ; 0056658f

