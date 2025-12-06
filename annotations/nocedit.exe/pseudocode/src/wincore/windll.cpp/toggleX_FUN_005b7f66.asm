; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_toggleX_FUN_005b7f66(void)
;
;
; Referenced Globals:
;   APIDLL_toggleX* g_APIDLL_toggleX
;
; *****************************************************************************

section .text

    LEA EAX,[EAX]                       ; 005b7f66
        ;   Label: wincore_windll.cpp_toggleX_FUN_005b7f66
    LEA EDX,[EDX]                       ; 005b7f6c
    CMP dword ptr [0x03f6b944],0x0      ; 005b7f70 | APIDLL_toggleX * g_APIDLL_toggleX
    JNZ 0x005b7f7c                      ; 005b7f77 | LAB_005b7f7c
        ;   XREF to: 005b7f7c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005b7f79
    RET                                 ; 005b7f7b
    CALL dword ptr [0x03f6b944]         ; 005b7f7c | APIDLL_toggleX * g_APIDLL_toggleX
        ;   Label: LAB_005b7f7c
    RET                                 ; 005b7f82

