; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_staticInit_FUN_004e7610(void)
;
;
; Called Functions:
;   core_moon.cpp_CMoon_ctor_FUN_004f9410
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 004e7610
        ;   Label: core_menu.cpp_staticInit_FUN_004e7610
    PUSH 0x8                            ; 004e7615
    PUSH 0x1d72c10                      ; 004e7617
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004e761c
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 004e7621
    PUSH 0x600358                       ; 004e7624
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004e7629
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004e762e
    PUSH 0x1d72cb0                      ; 004e7631
    CALL core_moon.cpp_CMoon_ctor_FUN_004f9410 ; 004e7636
        ;   XREF to: 004f9410 (UNCONDITIONAL_CALL)  ; CMoon * core_moon.cpp_CMoon_ctor_FUN_004f9410(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004e763b
    PUSH 0x600368                       ; 004e763e
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004e7643
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004e7648
    PUSH 0x1d73798                      ; 004e764b
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004e7650
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e7655
    PUSH 0x600378                       ; 004e7658
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004e765d
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004e7662
    PUSH 0x1d737ac                      ; 004e7665
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004e766a
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e766f
    PUSH 0x600388                       ; 004e7672
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004e7677
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004e767c
    PUSH 0x1d737c0                      ; 004e767f
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004e7684
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e7689
    PUSH 0x600398                       ; 004e768c
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004e7691
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004e7696
    PUSH 0x1d737e8                      ; 004e7699
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004e769e
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e76a3
    PUSH 0x6003a8                       ; 004e76a6
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004e76ab
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 004e76b0
    RET                                 ; 004e76b3

