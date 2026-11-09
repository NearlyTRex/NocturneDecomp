; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004da840(void)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004b7f90 at 004b8655
;
; Called Functions:
;   engine_alphabit.cpp_FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH 0x1d70890                      ; 004da840
        ;   Label: core_inv.cpp_FUN_004da840
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004da845
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004da84a
    PUSH 0x1d708a4                      ; 004da84d
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004da852
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004da857
    PUSH 0x1d708b8                      ; 004da85a
    CALL engine_alphabit.cpp_FUN_0040d400 ; 004da85f
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004da864
    LEA EAX,[EAX]                       ; 004da867
    LEA EDX,[EDX]                       ; 004da86d
    RET                                 ; 004da870

