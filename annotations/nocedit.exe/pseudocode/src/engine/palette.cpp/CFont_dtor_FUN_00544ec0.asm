; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFont * engine_palette.cpp_CFont_dtor_FUN_00544ec0(CFont * this_ptr)
;
; Parameters:
; CFont *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_dtor_FUN_005f2390 at 005f23ae
;
; Referenced Globals:
;   CFont_vtable g_CFontVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544ec0
        ;   Label: engine_palette.cpp_CFont_dtor_FUN_00544ec0
    MOV dword ptr [EAX],0x661eec        ; 00544ec4 | CFont_vtable g_CFontVTable
    RET                                 ; 00544eca

