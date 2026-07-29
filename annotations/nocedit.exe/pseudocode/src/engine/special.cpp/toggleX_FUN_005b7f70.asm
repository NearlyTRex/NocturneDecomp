; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_toggleX_FUN_005b7f70(void)
;
;
; Referenced Globals:
;   APIDLL_toggleX* g_APIDLL_toggleX
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f6b944],0x0      ; 005b7f70 | g_APIDLL_toggleX
        ;   Label: engine_special.cpp_toggleX_FUN_005b7f70
    JNZ 0x005b7f7c                      ; 005b7f77
        ;   XREF to: 005b7f7c (CONDITIONAL_JUMP)  ; LAB_005b7f7c
    XOR EAX,EAX                         ; 005b7f79
    RET                                 ; 005b7f7b
    CALL dword ptr [0x03f6b944]         ; 005b7f7c | g_APIDLL_toggleX
        ;   Label: LAB_005b7f7c
    RET                                 ; 005b7f82

