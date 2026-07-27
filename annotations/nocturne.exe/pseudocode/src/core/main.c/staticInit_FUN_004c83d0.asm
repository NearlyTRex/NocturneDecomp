; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_staticInit_FUN_004c83d0(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_00564bb0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320
;
; *****************************************************************************

section .text

    PUSH 0x1cc480c                      ; 004c83d0
        ;   Label: core_main.c_staticInit_FUN_004c83d0
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004c83d5
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320()
    ADD ESP,0x4                         ; 004c83da
    PUSH 0x5bad0e                       ; 004c83dd
    CALL crt_unknown.c_FUN_00564bb0     ; 004c83e2
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 004c83e7
    PUSH 0x1cc4820                      ; 004c83ea
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004c83ef
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320()
    ADD ESP,0x4                         ; 004c83f4
    PUSH 0x5bad1e                       ; 004c83f7
    CALL crt_unknown.c_FUN_00564bb0     ; 004c83fc
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 004c8401
    PUSH 0x1cc4834                      ; 004c8404
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004c8409
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320()
    ADD ESP,0x4                         ; 004c840e
    PUSH 0x5bad2e                       ; 004c8411
    CALL crt_unknown.c_FUN_00564bb0     ; 004c8416
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 004c841b
    PUSH 0x1cc4848                      ; 004c841e
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004c8423
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320()
    ADD ESP,0x4                         ; 004c8428
    PUSH 0x5bad3e                       ; 004c842b
    CALL crt_unknown.c_FUN_00564bb0     ; 004c8430
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 004c8435
    RET                                 ; 004c8438

