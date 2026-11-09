; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureList * __cdecl core_texlist_cpp_CTextureList_ctor_FUN_00573490(CTextureList *this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_ground.cpp_CGround_init_FUN_004ca9c0 at 004ca9f9
;   core_texlist.cpp_staticInit_FUN_00573470 at 00573475
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00573490
        ;   Label: core_texlist.cpp_CTextureList_ctor_FUN_00573490
    MOV dword ptr [EAX],0x0             ; 00573494
    RET                                 ; 0057349a

