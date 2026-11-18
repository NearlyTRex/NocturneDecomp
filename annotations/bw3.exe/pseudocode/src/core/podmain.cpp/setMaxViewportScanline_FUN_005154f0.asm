; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_podmain_cpp_setMaxViewportScanline_FUN_005154f0(int max)
;
; Parameters:
; int              Stack[0x4]:4   max
;
; Referenced Globals:
;   int g_MaxViewportScanline = 0x4b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005154f0
        ;   Label: core_podmain.cpp_setMaxViewportScanline_FUN_005154f0
    MOV [0x00603974],EAX                ; 005154f4 | g_MaxViewportScanline
    RET                                 ; 005154f9

