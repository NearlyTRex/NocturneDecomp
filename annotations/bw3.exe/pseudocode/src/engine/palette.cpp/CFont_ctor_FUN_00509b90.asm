; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFont * __cdecl engine_palette_cpp_CFont_ctor_FUN_00509b90(CFont *this_ptr)
;
; Parameters:
; CFont *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_ctor_FUN_0057fd50 at 0057fd56
;
; Referenced Globals:
;   void*[5] g_ARRAY_PTR_005e2f74
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509b90
        ;   Label: engine_palette.cpp_CFont_ctor_FUN_00509b90
    MOV dword ptr [EAX],0x0             ; 00509b94
    MOV dword ptr [EAX + 0x6a44],0x5e2f74 ; 00509b9a | g_ARRAY_PTR_005e2f74
    RET                                 ; 00509ba4

