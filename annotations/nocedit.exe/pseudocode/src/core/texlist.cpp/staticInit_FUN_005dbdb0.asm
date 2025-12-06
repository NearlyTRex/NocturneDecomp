; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_texlist.cpp_staticInit_FUN_005dbdb0(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_CTextureListDestructorNode
;   CTextureList g_CTextureListInstance
;
; Called Functions:
;   core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0
;   crt_stdlib.c_atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x3f6cd54                      ; 005dbdb0 | CTextureList g_CTextureListInstance
        ;   Label: core_texlist.cpp_staticInit_FUN_005dbdb0
    CALL core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0 ; 005dbdb5 | CTextureList * core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0(CTextureList * this_ptr)
        ;   XREF to: 005dbdd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dbdba
    PUSH 0x6842e0                       ; 005dbdbd | WatcomStaticDestructorNode g_CTextureListDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 005dbdc2 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dbdc7
    RET                                 ; 005dbdca

