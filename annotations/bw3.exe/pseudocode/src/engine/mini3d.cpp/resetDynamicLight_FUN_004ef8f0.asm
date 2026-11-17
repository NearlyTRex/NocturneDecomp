; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_resetDynamicLight_FUN_004ef8f0(void)
;
;
; XREF[1]:
;   engine_mini3d.cpp_setRenderViewport_FUN_004ed020 at 004ed0fa
;
; Referenced Globals:
;   int g_INT_01c6cee8
;   int g_INT_01d79784
;   void* g_PTR_02cf60fc
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004ef8f0
        ;   Label: engine_mini3d.cpp_resetDynamicLight_FUN_004ef8f0
    MOV ECX,dword ptr [0x02cf60fc]      ; 004ef8f2 | g_PTR_02cf60fc
    MOV dword ptr [0x01d79784],EDX      ; 004ef8f8 | g_INT_01d79784
    TEST ECX,ECX                        ; 004ef8fe
    JZ 0x004ef90b                       ; 004ef900
        ;   XREF to: 004ef90b (CONDITIONAL_JUMP)  ; LAB_004ef90b
    CMP dword ptr [0x01c6cee8],0x0      ; 004ef902 | g_INT_01c6cee8
    JNZ 0x004ef90c                      ; 004ef909
        ;   XREF to: 004ef90c (CONDITIONAL_JUMP)  ; LAB_004ef90c
    RET                                 ; 004ef90b
        ;   Label: LAB_004ef90b
    CALL dword ptr [0x02cf60fc]         ; 004ef90c | g_PTR_02cf60fc
        ;   Label: LAB_004ef90c
    RET                                 ; 004ef912

