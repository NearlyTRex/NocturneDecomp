; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_staticInit_FUN_00544910(void)
;
;
; Called Functions:
;   core_texlist.cpp_CTextureList_ctor_FUN_00544930
;   crt_unknown.c_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x2dca21c                      ; 00544910
        ;   Label: core_texlist.cpp_staticInit_FUN_00544910
    CALL core_texlist.cpp_CTextureList_ctor_FUN_00544930 ; 00544915
        ;   XREF to: 00544930 (UNCONDITIONAL_CALL)  ; undefined core_texlist.cpp_CTextureList_ctor_FUN_00544930()
    ADD ESP,0x4                         ; 0054491a
    PUSH 0x5c10c8                       ; 0054491d
    CALL crt_unknown.c_FUN_00564bb0     ; 00544922
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 00544927
    RET                                 ; 0054492a

