; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0044bb50(int palette_index)
;
; Parameters:
; int              Stack[0x4]:4   palette_index
;
; Referenced Globals:
;   uint[256] g_LightmapTexturePalette
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044bb50
        ;   Label: core_dcamera.cpp_getLightmapPaletteValue_FUN_0044bb50
    MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc] ; 0044bb54 | g_LightmapTexturePalette
    AND EAX,0xff                        ; 0044bb5b
    RET                                 ; 0044bb60

