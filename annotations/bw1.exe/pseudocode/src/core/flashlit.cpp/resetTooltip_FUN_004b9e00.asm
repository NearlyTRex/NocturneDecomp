; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flashlit_cpp_resetTooltip_FUN_004b9e00(void)
;
;
; Referenced Globals:
;   int g_INT_0061d310 = -0x1
;   int g_INT_01cc7f1c
;   char g_CHAR_01cc7f38
;   int g_INT_01cc8000
;
; *****************************************************************************

section .text

    MOV ECX,0xffffffff                  ; 004b9e00
        ;   Label: core_flashlit.cpp_resetTooltip_FUN_004b9e00
    XOR AH,AH                           ; 004b9e05
    XOR EDX,EDX                         ; 004b9e07
    MOV byte ptr [0x01cc7f38],AH        ; 004b9e09 | g_CHAR_01cc7f38
    MOV dword ptr [0x0061d310],ECX      ; 004b9e0f | g_INT_0061d310
    MOV dword ptr [0x01cc8000],EDX      ; 004b9e15 | g_INT_01cc8000
    MOV dword ptr [0x01cc7f1c],EDX      ; 004b9e1b | g_INT_01cc7f1c
    RET                                 ; 004b9e21

