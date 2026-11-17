; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_podmain_cpp_setMaxViewportScanline_FUN_0053d790(int max)
;
; Parameters:
; int              Stack[0x4]:4   max
;
; Referenced Globals:
;   int g_MaxViewportScanline = 0x4b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053d790
        ;   Label: core_podmain.cpp_setMaxViewportScanline_FUN_0053d790
    MOV [0x00622a84],EAX                ; 0053d794 | g_MaxViewportScanline
    RET                                 ; 0053d799

