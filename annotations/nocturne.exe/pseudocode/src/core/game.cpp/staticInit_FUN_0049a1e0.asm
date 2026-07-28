; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_staticInit_FUN_0049a1e0(void)
;
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_ctor_FUN_0044e110
;   core_game.cpp_CGame_ctor_FUN_0049a650
;   crt_unknown.c__atexit_FUN_00564bb0
;   shape_edittool.cpp_FUN_00474c90
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 0049a1e0
        ;   Label: core_game.cpp_staticInit_FUN_0049a1e0
    PUSH 0x100                          ; 0049a1e5
    PUSH 0x1c74640                      ; 0049a1ea
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_0044e110 ; 0049a1ef
        ;   XREF to: 0044e110 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_0044e110(CDemonLight * this_ptr, int shadow_map_width, int shadow_map_height)
    ADD ESP,0xc                         ; 0049a1f4
    PUSH 0x5b92c0                       ; 0049a1f7
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 0049a1fc
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0049a201
    PUSH 0x1c775ec                      ; 0049a204
    CALL core_game.cpp_CGame_ctor_FUN_0049a650 ; 0049a209
        ;   XREF to: 0049a650 (UNCONDITIONAL_CALL)  ; CGame * core_game.cpp_CGame_ctor_FUN_0049a650(CGame * this_ptr)
    ADD ESP,0x4                         ; 0049a20e
    PUSH 0x5b92d0                       ; 0049a211
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 0049a216
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0049a21b
    PUSH 0x1c78424                      ; 0049a21e
    CALL shape_edittool.cpp_FUN_00474c90 ; 0049a223
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00474c90()
    ADD ESP,0x4                         ; 0049a228
    PUSH 0x5b92e0                       ; 0049a22b
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 0049a230
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0049a235
    RET                                 ; 0049a238

