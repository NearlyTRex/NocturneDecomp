; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_palette_cpp_CPaletteManager_reset_FUN_00544fb0(CPaletteManager *this_ptr)
;
; Parameters:
; CPaletteManager * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544fb0
        ;   Label: engine_palette.cpp_CPaletteManager_reset_FUN_00544fb0
    MOV dword ptr [EAX],0x0             ; 00544fb4
    RET                                 ; 00544fba

