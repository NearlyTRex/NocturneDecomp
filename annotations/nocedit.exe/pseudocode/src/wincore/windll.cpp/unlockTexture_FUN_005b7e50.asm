; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_unlockTexture_FUN_005b7e50(void)
;
;
; Referenced Globals:
;   APIDLL_unlockTexture* g_APIDLL_unlockTexture
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f6b92c],0x0      ; 005b7e50 | g_APIDLL_unlockTexture
        ;   Label: wincore_windll.cpp_unlockTexture_FUN_005b7e50
    JNZ 0x005b7e5c                      ; 005b7e57
        ;   XREF to: 005b7e5c (CONDITIONAL_JUMP)  ; LAB_005b7e5c
    XOR EAX,EAX                         ; 005b7e59
    RET                                 ; 005b7e5b
    CALL dword ptr [0x03f6b92c]         ; 005b7e5c | g_APIDLL_unlockTexture
        ;   Label: LAB_005b7e5c
    RET                                 ; 005b7e62

