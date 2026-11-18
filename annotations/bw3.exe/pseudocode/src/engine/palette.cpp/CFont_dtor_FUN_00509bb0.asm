; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFont * __cdecl engine_palette_cpp_CFont_dtor_FUN_00509bb0(CFont *this_ptr,uint flags)
;
; Parameters:
; CFont *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_dtor_FUN_0057fe10 at 0057fe32
;
; Referenced Globals:
;   void*[5] g_ARRAY_PTR_005e2f74
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509bb0
        ;   Label: engine_palette.cpp_CFont_dtor_FUN_00509bb0
    MOV dword ptr [EAX + 0x6a44],0x5e2f74 ; 00509bb4 | g_ARRAY_PTR_005e2f74
    RET                                 ; 00509bbe

