; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_flushLineList_FUN_005b7a09(void)
;
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_flushLineList* g_APIDLL_flushLineList
;
; *****************************************************************************

section .text

    LEA EAX,[EAX]                       ; 005b7a09
        ;   Label: wincore_windll.cpp_flushLineList_FUN_005b7a09
    NOP                                 ; 005b7a0f
    CMP dword ptr [0x02d03e94],0x0      ; 005b7a10 | g_UseExternalRenderer
    JNZ 0x005b7a1c                      ; 005b7a17
        ;   XREF to: 005b7a1c (CONDITIONAL_JUMP)  ; LAB_005b7a1c
    XOR EAX,EAX                         ; 005b7a19
    RET                                 ; 005b7a1b
    CALL dword ptr [0x03f6b8e8]         ; 005b7a1c | g_APIDLL_flushLineList
        ;   Label: LAB_005b7a1c
    RET                                 ; 005b7a22

