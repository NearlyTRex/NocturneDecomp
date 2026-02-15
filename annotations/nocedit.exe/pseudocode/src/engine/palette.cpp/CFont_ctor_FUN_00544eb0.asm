; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFont * __cdecl engine_palette_cpp_CFont_ctor_FUN_00544eb0(CFont *this_ptr)
;
; Parameters:
; CFont *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0 at 005f22e6
;
; Referenced Globals:
;   CFont_vtable g_CFontVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544eb0
        ;   Label: engine_palette.cpp_CFont_ctor_FUN_00544eb0
    MOV dword ptr [EAX],0x661eec        ; 00544eb4 | g_CFontVTable
    RET                                 ; 00544eba

