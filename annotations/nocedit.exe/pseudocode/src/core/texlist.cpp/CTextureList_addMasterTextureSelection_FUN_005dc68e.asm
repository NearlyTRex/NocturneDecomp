; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_texlist.cpp_CTextureList_addMasterTextureSelection_FUN_005dc68e(CTextureList * this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 005dc68e
        ;   Label: core_texlist.cpp_CTextureList_addMasterTextureSelection_FUN_005dc68e
    PUSH 0x0                            ; 005dc690
    MOV EDX,dword ptr [ESP + 0x8]       ; 005dc692
    PUSH EDX                            ; 005dc696
    CALL core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0 ; 005dc697 | int core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0(CTextureList * this_ptr, char * filename)
        ;   XREF to: 005dc5e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005dc69c
    RET                                 ; 005dc69f

