; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTextureList * core_texlist.cpp_CTextureList_dtor_FUN_005dbdf0(CTextureList * this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ground.cpp_CGround_free_FUN_004eefb0 at 004ef005
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005dbdf0
        ;   Label: core_texlist.cpp_CTextureList_dtor_FUN_005dbdf0
    RET                                 ; 005dbdf4

