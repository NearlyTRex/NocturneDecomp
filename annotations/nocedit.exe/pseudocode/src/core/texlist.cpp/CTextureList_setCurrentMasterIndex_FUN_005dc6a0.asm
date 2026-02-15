; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_setCurrentMasterIndex_FUN_005dc6a0(CTextureList *this_ptr,uint master_index)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   master_index
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005dc6a0
        ;   Label: core_texlist.cpp_CTextureList_setCurrentMasterIndex_FUN_005dc6a0
    MOV EDX,dword ptr [ESP + 0x4]       ; 005dc6a4
    AND EAX,0xfff                       ; 005dc6a8
    MOV dword ptr [EDX + 0x1a5e8],EAX   ; 005dc6ad
    RET                                 ; 005dc6b3

