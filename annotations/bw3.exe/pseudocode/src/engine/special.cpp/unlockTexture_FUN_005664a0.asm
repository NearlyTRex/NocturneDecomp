; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_unlockTexture_FUN_005664a0(void)
;
;
; Referenced Globals:
;   void* g_APIDLL_unlockTexture
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf6084],0x0      ; 005664a0 | g_APIDLL_unlockTexture
        ;   Label: engine_special.cpp_unlockTexture_FUN_005664a0
    JNZ 0x005664ac                      ; 005664a7
        ;   XREF to: 005664ac (CONDITIONAL_JUMP)  ; LAB_005664ac
    XOR EAX,EAX                         ; 005664a9
    RET                                 ; 005664ab
    CALL dword ptr [0x02cf6084]         ; 005664ac | g_APIDLL_unlockTexture
        ;   Label: LAB_005664ac
    RET                                 ; 005664b2

