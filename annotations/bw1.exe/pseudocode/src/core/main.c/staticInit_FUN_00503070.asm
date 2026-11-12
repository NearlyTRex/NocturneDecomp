; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_staticInit_FUN_00503070(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005c1093
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;
; *****************************************************************************

section .text

    PUSH 0x1d1d40c                      ; 00503070
        ;   Label: core_main.c_staticInit_FUN_00503070
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 00503075
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0050307a
    PUSH 0x61f366                       ; 0050307d
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00503082
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 00503087
    PUSH 0x1d1d420                      ; 0050308a
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 0050308f
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00503094
    PUSH 0x61f376                       ; 00503097
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0050309c
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 005030a1
    PUSH 0x1d1d434                      ; 005030a4
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 005030a9
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 005030ae
    PUSH 0x61f386                       ; 005030b1
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 005030b6
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 005030bb
    PUSH 0x1d1d448                      ; 005030be
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 005030c3
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 005030c8
    PUSH 0x61f396                       ; 005030cb
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 005030d0
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 005030d5
    RET                                 ; 005030d8

