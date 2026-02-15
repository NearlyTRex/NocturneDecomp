; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureList * __cdecl core_texlist_cpp_CTextureList_dtor_FUN_005dbdf0(CTextureList *this_ptr,uint flags)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_ground.cpp_CGround_free_FUN_004eefb0 at 004ef005
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005dbdf0
        ;   Label: core_texlist.cpp_CTextureList_dtor_FUN_005dbdf0
    RET                                 ; 005dbdf4

