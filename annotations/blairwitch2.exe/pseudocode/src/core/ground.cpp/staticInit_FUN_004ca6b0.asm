; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_staticInit_FUN_004ca6b0(void)
;
;
; Called Functions:
;   core_ground.cpp_CGround_ctor_FUN_004ca940
;   crt_stdlib.c__atexit_FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004ca6b0
        ;   Label: core_ground.cpp_staticInit_FUN_004ca6b0
    PUSH 0x100                          ; 004ca6b5
    PUSH 0x1cedd88                      ; 004ca6ba
    CALL core_ground.cpp_CGround_ctor_FUN_004ca940 ; 004ca6bf
        ;   XREF to: 004ca940 (UNCONDITIONAL_CALL)  ; CGround * core_ground.cpp_CGround_ctor_FUN_004ca940(CGround * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 004ca6c4
    PUSH 0x6179f8                       ; 004ca6c7
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004ca6cc
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 004ca6d1
    RET                                 ; 004ca6d4

