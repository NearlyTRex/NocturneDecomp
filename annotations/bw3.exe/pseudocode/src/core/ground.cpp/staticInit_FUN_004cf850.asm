; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ground_cpp_staticInit_FUN_004cf850(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_CGroundDestructorNode
;   CGround g_CGroundInstance
;
; Called Functions:
;   core_ground.cpp_CGround_ctor_FUN_004cfb50
;   crt_stdlib.c__atexit_FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004cf850
        ;   Label: core_ground.cpp_staticInit_FUN_004cf850
    PUSH 0x100                          ; 004cf855
    PUSH 0x1d5b8a8                      ; 004cf85a | g_CGroundInstance
    CALL core_ground.cpp_CGround_ctor_FUN_004cfb50 ; 004cf85f
        ;   XREF to: 004cfb50 (UNCONDITIONAL_CALL)  ; CGround * core_ground.cpp_CGround_ctor_FUN_004cfb50(CGround * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 004cf864
    PUSH 0x5fff3c                       ; 004cf867 | g_CGroundDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004cf86c
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004cf871
    RET                                 ; 004cf874

