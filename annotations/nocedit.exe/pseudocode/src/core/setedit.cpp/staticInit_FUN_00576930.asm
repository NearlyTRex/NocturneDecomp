; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setedit.cpp_staticInit_FUN_00576930(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode DAT_006816a0
;   CPickList CPickList_03653fc0
;
; Called Functions:
;   crt_stdlib.c_atexit_FUN_005ff060
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;
; *****************************************************************************

section .text

    PUSH 0x3653fc0                      ; 00576930 | CPickList CPickList_03653fc0
        ;   Label: core_setedit.cpp_staticInit_FUN_00576930
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00576935 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057693a
    PUSH 0x6816a0                       ; 0057693d | WatcomStaticDestructorNode DAT_006816a0
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00576942 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00576947
    RET                                 ; 0057694a

