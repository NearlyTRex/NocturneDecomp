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
;   undefined1* PTR_engine_palette.cpp_CFont_dtor_FUN_004eefc0_005a0ff0 = 004eefc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eefb0
        ;   Label: engine_palette.cpp_CFont_ctor_FUN_004eefb0
    MOV dword ptr [EAX],0x5a0ff0        ; 004eefb4 | PTR_engine_palette.cpp_CFont_dtor_FUN_004eefc0_005a0ff0
    RET                                 ; 004eefba

