; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_podmain_cpp_setMaxViewportScanline_FUN_0051c190(int max)
;
; Parameters:
; int              Stack[0x4]:4   max
;
; Referenced Globals:
;   int g_MaxViewportScanline = 0x4b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051c190
        ;   Label: core_podmain.cpp_setMaxViewportScanline_FUN_0051c190
    MOV [0x0061b424],EAX                ; 0051c194 | g_MaxViewportScanline
    RET                                 ; 0051c199

