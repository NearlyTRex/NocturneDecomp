; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcamera_cpp_getLightmapPaletteValue_FUN_00448700(int palette_index)
;
; Parameters:
; int              Stack[0x4]:4   palette_index
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00448700
        ;   Label: core_dcamera.cpp_getLightmapPaletteValue_FUN_00448700
    MOV EAX,dword ptr [EAX*0x4 + 0xb9e14c] ; 00448704
    AND EAX,0xff                        ; 0044870b
    RET                                 ; 00448710

