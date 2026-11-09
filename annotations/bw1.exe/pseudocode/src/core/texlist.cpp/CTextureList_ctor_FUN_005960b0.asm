; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureList * __cdecl core_texlist_cpp_CTextureList_ctor_FUN_005960b0(CTextureList *this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_ground.cpp_CGround_init_FUN_004e7240 at 004e7279
;   core_texlist.cpp_staticInit_FUN_00596090 at 00596095
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005960b0
        ;   Label: core_texlist.cpp_CTextureList_ctor_FUN_005960b0
    MOV dword ptr [EAX],0x0             ; 005960b4
    RET                                 ; 005960ba

