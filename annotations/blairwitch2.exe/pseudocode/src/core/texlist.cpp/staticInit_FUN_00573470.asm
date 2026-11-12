; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_texlist_cpp_staticInit_FUN_00573470(void)
;
;
; Called Functions:
;   core_texlist.cpp_CTextureList_ctor_FUN_00573490
;   crt_stdlib.c__atexit_FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x264c0fc                      ; 00573470
        ;   Label: core_texlist.cpp_staticInit_FUN_00573470
    CALL core_texlist.cpp_CTextureList_ctor_FUN_00573490 ; 00573475
        ;   XREF to: 00573490 (UNCONDITIONAL_CALL)  ; CTextureList * core_texlist.cpp_CTextureList_ctor_FUN_00573490(CTextureList * this_ptr)
    ADD ESP,0x4                         ; 0057347a
    PUSH 0x61e3b8                       ; 0057347d
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00573482
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00573487
    RET                                 ; 0057348a

