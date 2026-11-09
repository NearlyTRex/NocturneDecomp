; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_0044c5c0(int palette_index)
;
; Parameters:
; int              Stack[0x4]:4   palette_index
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044c5c0
        ;   Label: core_dcamera.cpp_getLightmapPaletteValue_FUN_0044c5c0
    MOV EAX,dword ptr [EAX*0x4 + 0xb8189c] ; 0044c5c4
    AND EAX,0xff                        ; 0044c5cb
    RET                                 ; 0044c5d0

