; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTextureList * __cdecl core_texlist_cpp_CTextureList_ctor_FUN_005dbdd0(CTextureList *this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_ground.cpp_CGround_init_FUN_004eef00 at 004eef4d
;   core_texlist.cpp_staticInit_FUN_005dbdb0 at 005dbdb5
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005dbdd0
        ;   Label: core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0
    MOV dword ptr [EAX + 0x6d64],0x0    ; 005dbdd4
    MOV dword ptr [EAX],0x0             ; 005dbdde
    RET                                 ; 005dbde4

