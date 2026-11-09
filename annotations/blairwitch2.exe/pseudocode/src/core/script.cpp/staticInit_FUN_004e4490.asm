; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_staticInit_FUN_004e4490(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
;
; *****************************************************************************

section .text

    PUSH 0x1d046ac                      ; 004e4490
        ;   Label: core_script.cpp_staticInit_FUN_004e4490
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004e4495
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e449a
    PUSH 0x617e7e                       ; 004e449d
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004e44a2
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 004e44a7
    PUSH 0x1d046c0                      ; 004e44aa
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004e44af
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e44b4
    PUSH 0x617e8e                       ; 004e44b7
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004e44bc
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 004e44c1
    PUSH 0x1d046d4                      ; 004e44c4
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004e44c9
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e44ce
    PUSH 0x617e9e                       ; 004e44d1
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004e44d6
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 004e44db
    PUSH 0x1d046e8                      ; 004e44de
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004e44e3
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e44e8
    PUSH 0x617eae                       ; 004e44eb
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004e44f0
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 004e44f5
    RET                                 ; 004e44f8

