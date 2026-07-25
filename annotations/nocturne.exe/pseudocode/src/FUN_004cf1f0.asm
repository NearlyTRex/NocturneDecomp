; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cf1f0(void)
;
;
; Called Functions:
;   core_moon.cpp_CMoon_ctor_FUN_004de800
;   crt_memory.c___arrinit_FUN_005644a7
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320
;   FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x59df00                       ; 004cf1f0
        ;   Label: FUN_004cf1f0
    PUSH 0x8                            ; 004cf1f5
    PUSH 0x1cc56e0                      ; 004cf1f7
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004cf1fc
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004cf201
    PUSH 0x5badf8                       ; 004cf204
    CALL FUN_00564bb0                   ; 004cf209
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 004cf20e
    PUSH 0x1cc5780                      ; 004cf211
    CALL core_moon.cpp_CMoon_ctor_FUN_004de800 ; 004cf216
        ;   XREF to: 004de800 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_ctor_FUN_004de800()
    ADD ESP,0x4                         ; 004cf21b
    PUSH 0x5bae08                       ; 004cf21e
    CALL FUN_00564bb0                   ; 004cf223
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 004cf228
    PUSH 0x1cc5b20                      ; 004cf22b
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004cf230
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320()
    ADD ESP,0x4                         ; 004cf235
    PUSH 0x5bae18                       ; 004cf238
    CALL FUN_00564bb0                   ; 004cf23d
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 004cf242
    PUSH 0x1cc5b34                      ; 004cf245
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004cf24a
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320()
    ADD ESP,0x4                         ; 004cf24f
    PUSH 0x5bae28                       ; 004cf252
    CALL FUN_00564bb0                   ; 004cf257
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 004cf25c
    PUSH 0x1cc5b48                      ; 004cf25f
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004cf264
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320()
    ADD ESP,0x4                         ; 004cf269
    PUSH 0x5bae38                       ; 004cf26c
    CALL FUN_00564bb0                   ; 004cf271
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 004cf276
    PUSH 0x1cc5b6c                      ; 004cf279
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004cf27e
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320()
    ADD ESP,0x4                         ; 004cf283
    PUSH 0x5bae48                       ; 004cf286
    CALL FUN_00564bb0                   ; 004cf28b
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 004cf290
    RET                                 ; 004cf293

