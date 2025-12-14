; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_staticInit_FUN_005591b0()
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode DAT_00680d10
;   WatcomStaticDestructorNode DAT_00680d20
;   WatcomStaticDestructorNode DAT_00680d30
;   WatcomStaticDestructorNode DAT_00680d40
;   undefined4 DAT_0310f4b0
;   CScript g_CScriptInstance
;   undefined4 DAT_0310fcd8
;   undefined4 DAT_0310fd0c
;
; Called Functions:
;   core_script.cpp_CScript_ctor_FUN_005597f0
;   crt_stdlib.c_atexit_FUN_005ff060
;   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;
; *****************************************************************************

section .text

    PUSH 0x310f4b0                      ; 005591b0 | DAT_0310f4b0
        ;   Label: core_script.cpp_staticInit_FUN_005591b0
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005591b5
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005591ba
    PUSH 0x680d10                       ; 005591bd | DAT_00680d10
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 005591c2
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005591c7
    PUSH 0x310f858                      ; 005591ca | g_CScriptInstance
    CALL core_script.cpp_CScript_ctor_FUN_005597f0 ; 005591cf
        ;   XREF to: 005597f0 (UNCONDITIONAL_CALL)  ; CScript * core_script.cpp_CScript_ctor_FUN_005597f0(CScript * this_ptr)
    ADD ESP,0x4                         ; 005591d4
    PUSH 0x680d20                       ; 005591d7 | DAT_00680d20
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 005591dc
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005591e1
    PUSH 0x310fcd8                      ; 005591e4 | DAT_0310fcd8
    CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0 ; 005591e9
        ;   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 005591ee
    PUSH 0x680d30                       ; 005591f1 | DAT_00680d30
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 005591f6
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005591fb
    PUSH 0x310fd0c                      ; 005591fe | DAT_0310fd0c
    CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0 ; 00559203
        ;   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00559208
    PUSH 0x680d40                       ; 0055920b | DAT_00680d40
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00559210
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00559215
    RET                                 ; 00559218

