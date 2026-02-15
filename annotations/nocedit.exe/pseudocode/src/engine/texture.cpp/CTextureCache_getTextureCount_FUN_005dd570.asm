; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_CTextureCache_getTextureCount_FUN_005dd570(CTextureCache *this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005dd570
        ;   Label: engine_texture.cpp_CTextureCache_getTextureCount_FUN_005dd570
    MOV EAX,dword ptr [EAX + 0x14008]   ; 005dd574
    RET                                 ; 005dd57a

