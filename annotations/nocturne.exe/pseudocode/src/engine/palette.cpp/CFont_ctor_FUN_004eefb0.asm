; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFont * __cdecl engine_palette_cpp_CFont_ctor_FUN_004eefb0(CFont *this_ptr)
;
; Parameters:
; CFont *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_ctor_FUN_00557f50 at 00557f56
;
; Referenced Globals:
;   CFont_vtable g_CFontVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eefb0
        ;   Label: engine_palette.cpp_CFont_ctor_FUN_004eefb0
    MOV dword ptr [EAX],0x5a0ff0        ; 004eefb4 | g_CFontVTable
    RET                                 ; 004eefba

