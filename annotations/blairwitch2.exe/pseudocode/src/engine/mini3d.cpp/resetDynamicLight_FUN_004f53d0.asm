; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_resetDynamicLight_FUN_004f53d0(void)
;
;
; XREF[1]:
;   engine_mini3d.cpp_setRenderViewport_FUN_004f2ac0 at 004f2b8d
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d0c3a0
;   undefined4 DAT_0264bcd0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004f53d0
        ;   Label: engine_mini3d.cpp_resetDynamicLight_FUN_004f53d0
    MOV ECX,dword ptr [0x0264bcd0]      ; 004f53d2 | DAT_0264bcd0
    MOV dword ptr [0x01d0c3a0],EDX      ; 004f53d8 | DAT_01d0c3a0
    TEST ECX,ECX                        ; 004f53de
    JZ 0x004f53eb                       ; 004f53e0
        ;   XREF to: 004f53eb (CONDITIONAL_JUMP)  ; LAB_004f53eb
    CMP dword ptr [0x01c37788],0x0      ; 004f53e2 | DAT_01c37788
    JNZ 0x004f53ec                      ; 004f53e9
        ;   XREF to: 004f53ec (CONDITIONAL_JUMP)  ; LAB_004f53ec
    RET                                 ; 004f53eb
        ;   Label: LAB_004f53eb
    CALL dword ptr [0x0264bcd0]         ; 004f53ec | DAT_0264bcd0
        ;   Label: LAB_004f53ec
    RET                                 ; 004f53f2

