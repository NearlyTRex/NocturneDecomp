; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFont * __cdecl engine_palette_cpp_FUN_00531ed0(CFont *this_ptr,uint flags)
;
; Parameters:
; CFont *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_dtor_FUN_005b1b90 at 005b1bb2
;
; Referenced Globals:
;   undefined1* PTR_engine_palette.cpp_FUN_00531ed0_006045b0 = 00531ed0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00531ed0
        ;   Label: engine_palette.cpp_FUN_00531ed0
    MOV dword ptr [EAX + 0x6a44],0x6045b0 ; 00531ed4 | PTR_engine_palette.cpp_FUN_00531ed0_006045b0
    RET                                 ; 00531ede

