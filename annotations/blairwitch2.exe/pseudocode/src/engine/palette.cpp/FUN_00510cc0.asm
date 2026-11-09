; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFont * __cdecl engine_palette_cpp_FUN_00510cc0(CFont *this_ptr,uint flags)
;
; Parameters:
; CFont *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_dtor_FUN_0058e050 at 0058e072
;
; Referenced Globals:
;   undefined1* PTR_engine_palette.cpp_FUN_00510cc0_005fa8bc = 00510cc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510cc0
        ;   Label: engine_palette.cpp_FUN_00510cc0
    MOV dword ptr [EAX + 0x6a44],0x5fa8bc ; 00510cc4 | PTR_engine_palette.cpp_FUN_00510cc0_005fa8bc
    RET                                 ; 00510cce

