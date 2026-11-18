; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flashlit_cpp_resetTooltip_FUN_004a1540(void)
;
;
; Referenced Globals:
;   int g_INT_00616040 = -0x1
;   int g_INT_01caf488
;   char g_CHAR_01caf4a0
;   int g_INT_01caf568
;
; *****************************************************************************

section .text

    MOV ECX,0xffffffff                  ; 004a1540
        ;   Label: core_flashlit.cpp_resetTooltip_FUN_004a1540
    XOR AH,AH                           ; 004a1545
    XOR EDX,EDX                         ; 004a1547
    MOV byte ptr [0x01caf4a0],AH        ; 004a1549 | g_CHAR_01caf4a0
    MOV dword ptr [0x00616040],ECX      ; 004a154f | g_INT_00616040
    MOV dword ptr [0x01caf568],EDX      ; 004a1555 | g_INT_01caf568
    MOV dword ptr [0x01caf488],EDX      ; 004a155b | g_INT_01caf488
    RET                                 ; 004a1561

