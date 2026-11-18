; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFont * __cdecl engine_palette_cpp_CFont_ctor_FUN_00531eb0(CFont *this_ptr)
;
; Parameters:
; CFont *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_ctor_FUN_005b1ad0 at 005b1ad6
;
; Referenced Globals:
;   void*[5] g_ARRAY_PTR_006045b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00531eb0
        ;   Label: engine_palette.cpp_CFont_ctor_FUN_00531eb0
    MOV dword ptr [EAX],0x0             ; 00531eb4
    MOV dword ptr [EAX + 0x6a44],0x6045b0 ; 00531eba | g_ARRAY_PTR_006045b0
    RET                                 ; 00531ec4

