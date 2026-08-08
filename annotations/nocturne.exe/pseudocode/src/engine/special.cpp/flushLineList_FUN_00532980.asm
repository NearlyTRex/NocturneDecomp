; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_flushLineList_FUN_00532980(void)
;
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_flushLineList* g_APIDLL_flushLineList
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532980 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_flushLineList_FUN_00532980
    JNZ 0x0053298c                      ; 00532987
        ;   XREF to: 0053298c (CONDITIONAL_JUMP)  ; LAB_0053298c
    XOR EAX,EAX                         ; 00532989
    RET                                 ; 0053298b
    CALL dword ptr [0x02dc9dc4]         ; 0053298c | g_APIDLL_flushLineList
        ;   Label: LAB_0053298c
    RET                                 ; 00532992

