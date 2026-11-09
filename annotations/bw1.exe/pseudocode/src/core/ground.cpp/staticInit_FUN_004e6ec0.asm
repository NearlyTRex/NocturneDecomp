; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_staticInit_FUN_004e6ec0(void)
;
;
; Called Functions:
;   core_ground.cpp_CGround_ctor_FUN_004e71c0
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004e6ec0
        ;   Label: core_ground.cpp_staticInit_FUN_004e6ec0
    PUSH 0x100                          ; 004e6ec5
    PUSH 0x1d06940                      ; 004e6eca
    CALL core_ground.cpp_CGround_ctor_FUN_004e71c0 ; 004e6ecf
        ;   XREF to: 004e71c0 (UNCONDITIONAL_CALL)  ; CGround * core_ground.cpp_CGround_ctor_FUN_004e71c0(CGround * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 004e6ed4
    PUSH 0x61eebc                       ; 004e6ed7
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 004e6edc
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 004e6ee1
    RET                                 ; 004e6ee4

