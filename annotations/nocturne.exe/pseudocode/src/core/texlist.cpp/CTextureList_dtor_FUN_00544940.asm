; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureList * __cdecl core_texlist_cpp_CTextureList_dtor_FUN_00544940(CTextureList *this_ptr,uint flags)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_ground.cpp_CGround_free_FUN_004b1470 at 004b14af
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544940
        ;   Label: core_texlist.cpp_CTextureList_dtor_FUN_00544940
    RET                                 ; 00544944

