; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_staticInit_FUN_004fde80(void)
;
;
; Called Functions:
;   core_script.cpp_FUN_004fe490
;   crt_unknown.c__atexit_FUN_00564bb0
;   shape_edittool.cpp_FUN_00474c90
;
; *****************************************************************************

section .text

    PUSH 0x1e56c30                      ; 004fde80
        ;   Label: core_script.cpp_staticInit_FUN_004fde80
    CALL shape_edittool.cpp_FUN_00474c90 ; 004fde85
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00474c90()
    ADD ESP,0x4                         ; 004fde8a
    PUSH 0x5be200                       ; 004fde8d
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004fde92
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fde97
    PUSH 0x1e56da0                      ; 004fde9a
    CALL core_script.cpp_FUN_004fe490   ; 004fde9f
        ;   XREF to: 004fe490 (UNCONDITIONAL_CALL)  ; CScript * core_script.cpp_FUN_004fe490(CScript * this_ptr)
    ADD ESP,0x4                         ; 004fdea4
    PUSH 0x5be210                       ; 004fdea7
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004fdeac
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004fdeb1
    RET                                 ; 004fdeb4

