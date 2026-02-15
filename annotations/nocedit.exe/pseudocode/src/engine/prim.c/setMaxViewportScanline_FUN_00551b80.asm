; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_setMaxViewportScanline_FUN_00551b80(int max)
;
; Parameters:
; int              Stack[0x4]:4   max
;
; Referenced Globals:
;   int g_MaxViewportScanline = 0x4b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00551b80
        ;   Label: engine_prim.c_setMaxViewportScanline_FUN_00551b80
    MOV [0x00680cf4],EAX                ; 00551b84 | g_MaxViewportScanline
    RET                                 ; 00551b89

