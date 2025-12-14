; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_msnedit.cpp_staticInit_FUN_00535c30(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_CEdCheckDestructorNode
;   undefined4 DAT_02f7a024
;   CEdCheck g_CEdCheckInstance
;
; Called Functions:
;   core_actor.cpp_FUN_0040e130
;   crt_stdlib.c_atexit_FUN_005ff060
;   shape_edittool.cpp_CEdCheck_ctor_FUN_004a6a00
;
; *****************************************************************************

section .text

    PUSH 0x2f7a024                      ; 00535c30 | DAT_02f7a024
        ;   Label: core_msnedit.cpp_staticInit_FUN_00535c30
    CALL core_actor.cpp_FUN_0040e130    ; 00535c35
        ;   XREF to: 0040e130 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040e130()
    ADD ESP,0x4                         ; 00535c3a
    PUSH 0x2f7c544                      ; 00535c3d | g_CEdCheckInstance
    CALL shape_edittool.cpp_CEdCheck_ctor_FUN_004a6a00 ; 00535c42
        ;   XREF to: 004a6a00 (UNCONDITIONAL_CALL)  ; CEdCheck * shape_edittool.cpp_CEdCheck_ctor_FUN_004a6a00(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 00535c47
    PUSH 0x6804a0                       ; 00535c4a | g_CEdCheckDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00535c4f
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00535c54
    RET                                 ; 00535c57

