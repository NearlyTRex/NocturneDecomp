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
;   undefined1* PTR_engine_palette.cpp_CFont_dtor_FUN_004eefc0_005a0ff0 = 004eefc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eefc0
        ;   Label: engine_palette.cpp_CFont_dtor_FUN_004eefc0
    MOV dword ptr [EAX],0x5a0ff0        ; 004eefc4 | PTR_engine_palette.cpp_CFont_dtor_FUN_004eefc0_005a0ff0
    RET                                 ; 004eefca

