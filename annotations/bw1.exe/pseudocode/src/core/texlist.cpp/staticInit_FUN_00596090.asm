; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_staticInit_FUN_00596090(void)
;
;
; Called Functions:
;   core_texlist.cpp_CTextureList_ctor_FUN_005960b0
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x2c838cc                      ; 00596090
        ;   Label: core_texlist.cpp_staticInit_FUN_00596090
    CALL core_texlist.cpp_CTextureList_ctor_FUN_005960b0 ; 00596095
        ;   XREF to: 005960b0 (UNCONDITIONAL_CALL)  ; CTextureList * core_texlist.cpp_CTextureList_ctor_FUN_005960b0(CTextureList * this_ptr)
    ADD ESP,0x4                         ; 0059609a
    PUSH 0x625a08                       ; 0059609d
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 005960a2
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005960a7
    RET                                 ; 005960aa

