; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_FUN_0040d250(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0040d250
        ;   Label: core_actor.cpp_FUN_0040d250
    MOV EBP,ESP                         ; 0040d251
    SUB ESP,0x4                         ; 0040d253
    AND ESP,0xfffffff8                  ; 0040d256
    MOV EAX,dword ptr [EBP + 0x8]       ; 0040d259
    FLD float ptr [EAX + 0x4]           ; 0040d25c
    FMUL ST0                            ; 0040d25f
    FLD float ptr [EAX]                 ; 0040d261
    FMUL ST0                            ; 0040d263
    FADDP                               ; 0040d265
    FLD float ptr [EAX + 0x8]           ; 0040d267
    FMUL ST0                            ; 0040d26a
    FADDP                               ; 0040d26c
    FSQRT                               ; 0040d26e
    FSTP float ptr [ESP]                ; 0040d270
    MOV EAX,dword ptr [ESP]             ; 0040d273
    MOV ESP,EBP                         ; 0040d276
    POP EBP                             ; 0040d278
    RET                                 ; 0040d279

