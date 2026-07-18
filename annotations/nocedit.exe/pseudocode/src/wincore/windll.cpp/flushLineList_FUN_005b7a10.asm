; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_flushLineList_FUN_005b7a10(void)
;
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_flushLineList* g_APIDLL_flushLineList
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7a10 | g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_flushLineList_FUN_005b7a10
    JNZ 0x005b7a1c                      ; 005b7a17
        ;   XREF to: 005b7a1c (CONDITIONAL_JUMP)  ; LAB_005b7a1c
    XOR EAX,EAX                         ; 005b7a19
    RET                                 ; 005b7a1b
    CALL dword ptr [0x03f6b8e8]         ; 005b7a1c | g_APIDLL_flushLineList
        ;   Label: LAB_005b7a1c
    RET                                 ; 005b7a22

