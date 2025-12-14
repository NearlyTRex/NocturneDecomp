; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_ground.cpp_staticInit_FUN_004eeb90(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_CGroundDestructorNode
;   CGround g_CGroundInstance
;
; Called Functions:
;   core_ground.cpp_CGround_ctor_FUN_004eee80
;   crt_stdlib.c_atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004eeb90
        ;   Label: core_ground.cpp_staticInit_FUN_004eeb90
    PUSH 0x100                          ; 004eeb95
    PUSH 0x2db8668                      ; 004eeb9a | g_CGroundInstance
    CALL core_ground.cpp_CGround_ctor_FUN_004eee80 ; 004eeb9f
        ;   XREF to: 004eee80 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_ctor_FUN_004eee80(CGround * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 004eeba4
    PUSH 0x67cbb8                       ; 004eeba7 | g_CGroundDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004eebac
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004eebb1
    RET                                 ; 004eebb4

