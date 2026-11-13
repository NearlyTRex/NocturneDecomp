; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_staticInit_FUN_00569080(void)
;
;
; Called Functions:
;   core_texlist.cpp_CTextureList_ctor_FUN_005690a0
;   crt_stdlib.c__atexit_FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x2cf631c                      ; 00569080
        ;   Label: core_texlist.cpp_staticInit_FUN_00569080
    CALL core_texlist.cpp_CTextureList_ctor_FUN_005690a0 ; 00569085
        ;   XREF to: 005690a0 (UNCONDITIONAL_CALL)  ; CTextureList * core_texlist.cpp_CTextureList_ctor_FUN_005690a0(CTextureList * this_ptr)
    ADD ESP,0x4                         ; 0056908a
    PUSH 0x6068e8                       ; 0056908d
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 00569092
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00569097
    RET                                 ; 0056909a

