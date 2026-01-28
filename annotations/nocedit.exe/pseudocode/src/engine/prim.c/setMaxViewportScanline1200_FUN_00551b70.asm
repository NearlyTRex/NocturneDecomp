; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_prim_c_setMaxViewportScanline1200_FUN_00551b70(void)
;
;
; Referenced Globals:
;   int g_MaxViewportScanline = 0x4b0
;
; *****************************************************************************

section .text

    MOV dword ptr [0x00680cf4],0x4b0    ; 00551b70 | g_MaxViewportScanline
        ;   Label: engine_prim.c_setMaxViewportScanline1200_FUN_00551b70
    RET                                 ; 00551b7a

