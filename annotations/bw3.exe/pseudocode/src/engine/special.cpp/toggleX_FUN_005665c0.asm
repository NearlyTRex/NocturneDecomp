; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_toggleX_FUN_005665c0(void)
;
;
; Referenced Globals:
;   void* g_APIDLL_toggleX
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf609c],0x0      ; 005665c0 | g_APIDLL_toggleX
        ;   Label: engine_special.cpp_toggleX_FUN_005665c0
    JNZ 0x005665cc                      ; 005665c7
        ;   XREF to: 005665cc (CONDITIONAL_JUMP)  ; LAB_005665cc
    XOR EAX,EAX                         ; 005665c9
    RET                                 ; 005665cb
    CALL dword ptr [0x02cf609c]         ; 005665cc | g_APIDLL_toggleX
        ;   Label: LAB_005665cc
    RET                                 ; 005665d2

