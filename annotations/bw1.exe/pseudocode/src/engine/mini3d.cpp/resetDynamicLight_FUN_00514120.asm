; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_resetDynamicLight_FUN_00514120(void)
;
;
; XREF[1]:
;   engine_mini3d.cpp_setRenderViewport_FUN_00511850 at 0051192a
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d25004
;   undefined4 DAT_02c834a0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00514120
        ;   Label: engine_mini3d.cpp_resetDynamicLight_FUN_00514120
    MOV ECX,dword ptr [0x02c834a0]      ; 00514122 | DAT_02c834a0
    MOV dword ptr [0x01d25004],EDX      ; 00514128 | DAT_01d25004
    TEST ECX,ECX                        ; 0051412e
    JZ 0x0051413b                       ; 00514130
        ;   XREF to: 0051413b (CONDITIONAL_JUMP)  ; LAB_0051413b
    CMP dword ptr [0x01c50948],0x0      ; 00514132 | DAT_01c50948
    JNZ 0x0051413c                      ; 00514139
        ;   XREF to: 0051413c (CONDITIONAL_JUMP)  ; LAB_0051413c
    RET                                 ; 0051413b
        ;   Label: LAB_0051413b
    CALL dword ptr [0x02c834a0]         ; 0051413c | DAT_02c834a0
        ;   Label: LAB_0051413c
    RET                                 ; 00514142

