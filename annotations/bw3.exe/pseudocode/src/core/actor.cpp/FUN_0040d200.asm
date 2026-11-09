; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_FUN_0040d200(float *param_1)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0040d200
        ;   Label: core_actor.cpp_FUN_0040d200
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d203
    FLD float ptr [EAX]                 ; 0040d207
    FSQRT                               ; 0040d209
    FSTP float ptr [ESP]                ; 0040d20b
    MOV EAX,dword ptr [ESP]             ; 0040d20e
    ADD ESP,0x4                         ; 0040d211
    RET                                 ; 0040d214

