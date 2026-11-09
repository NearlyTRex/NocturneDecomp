; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0043af20(int palette_index)
;
; Parameters:
; int              Stack[0x4]:4   palette_index
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043af20
        ;   Label: core_dcamera.cpp_getLightmapPaletteValue_FUN_0043af20
    MOV EAX,dword ptr [EAX*0x4 + 0xb6639c] ; 0043af24
    AND EAX,0xff                        ; 0043af2b
    RET                                 ; 0043af30

