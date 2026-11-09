; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_FUN_0040d320(float *param_1)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0040d320
        ;   Label: core_actor.cpp_FUN_0040d320
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d323
    FLD float ptr [EAX]                 ; 0040d327
    FSQRT                               ; 0040d329
    FSTP float ptr [ESP]                ; 0040d32b
    MOV EAX,dword ptr [ESP]             ; 0040d32e
    ADD ESP,0x4                         ; 0040d331
    RET                                 ; 0040d334

