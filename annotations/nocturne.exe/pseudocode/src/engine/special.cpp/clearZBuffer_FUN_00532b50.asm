; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_clearZBuffer_FUN_00532b50(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 at 004404f4
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_clearZBuffer* g_APIDLL_clearZBuffer
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532b50 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_clearZBuffer_FUN_00532b50
    JNZ 0x00532b5c                      ; 00532b57
        ;   XREF to: 00532b5c (CONDITIONAL_JUMP)  ; LAB_00532b5c
    XOR EAX,EAX                         ; 00532b59
    RET                                 ; 00532b5b
    CALL dword ptr [0x02dc9dd4]         ; 00532b5c | g_APIDLL_clearZBuffer
        ;   Label: LAB_00532b5c
    RET                                 ; 00532b62

