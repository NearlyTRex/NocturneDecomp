; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFont * __cdecl engine_palette_cpp_CFont_dtor_FUN_004eefc0(CFont *this_ptr,uint flags)
;
; Parameters:
; CFont *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_dtor_FUN_00558000 at 0055801e
;
; Referenced Globals:
;   CFont_vtable g_CFontVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eefc0
        ;   Label: engine_palette.cpp_CFont_dtor_FUN_004eefc0
    MOV dword ptr [EAX],0x5a0ff0        ; 004eefc4 | g_CFontVTable
    RET                                 ; 004eefca

