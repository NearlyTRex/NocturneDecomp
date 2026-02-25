; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_staticInit_FUN_00576930(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_MissingBackdropFilesDestructorNode
;   CPickList g_MissingBackdropFiles
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005ff060
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;
; *****************************************************************************

section .text

    PUSH 0x3653fc0                      ; 00576930 | g_MissingBackdropFiles
        ;   Label: core_setedit.cpp_staticInit_FUN_00576930
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00576935
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057693a
    PUSH 0x6816a0                       ; 0057693d | g_MissingBackdropFilesDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 00576942
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00576947
    RET                                 ; 0057694a

