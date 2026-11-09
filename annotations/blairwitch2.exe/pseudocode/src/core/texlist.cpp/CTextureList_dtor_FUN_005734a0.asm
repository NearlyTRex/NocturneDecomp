; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureList * __cdecl core_texlist_cpp_CTextureList_dtor_FUN_005734a0(CTextureList *this_ptr,uint flags)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_ground.cpp_CGround_free_FUN_004caa60 at 004caa9f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005734a0
        ;   Label: core_texlist.cpp_CTextureList_dtor_FUN_005734a0
    RET                                 ; 005734a4

