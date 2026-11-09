; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureList * __cdecl core_texlist_cpp_CTextureList_ctor_FUN_005690a0(CTextureList *this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_ground.cpp_CGround_init_FUN_004cfbd0 at 004cfc09
;   core_texlist.cpp_staticInit_FUN_00569080 at 00569085
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005690a0
        ;   Label: core_texlist.cpp_CTextureList_ctor_FUN_005690a0
    MOV dword ptr [EAX],0x0             ; 005690a4
    RET                                 ; 005690aa

