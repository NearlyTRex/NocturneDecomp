; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_setMaxViewportScanline1200_FUN_004f9430(void)
;
;
; Referenced Globals:
;   int g_MaxViewportScanline = 0x4b0
;
; *****************************************************************************

section .text

    MOV dword ptr [0x005be1e4],0x4b0    ; 004f9430 | g_MaxViewportScanline
        ;   Label: engine_prim.c_setMaxViewportScanline1200_FUN_004f9430
    RET                                 ; 004f943a

