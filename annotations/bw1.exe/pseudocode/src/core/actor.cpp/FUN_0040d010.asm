; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_FUN_0040d010(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0040d010
        ;   Label: core_actor.cpp_FUN_0040d010
    MOV EBP,ESP                         ; 0040d011
    SUB ESP,0x4                         ; 0040d013
    AND ESP,0xfffffff8                  ; 0040d016
    MOV EAX,dword ptr [EBP + 0x8]       ; 0040d019
    FLD float ptr [EAX + 0x4]           ; 0040d01c
    FMUL ST0                            ; 0040d01f
    FLD float ptr [EAX]                 ; 0040d021
    FMUL ST0                            ; 0040d023
    FADDP                               ; 0040d025
    FLD float ptr [EAX + 0x8]           ; 0040d027
    FMUL ST0                            ; 0040d02a
    FADDP                               ; 0040d02c
    FSQRT                               ; 0040d02e
    FSTP float ptr [ESP]                ; 0040d030
    MOV EAX,dword ptr [ESP]             ; 0040d033
    MOV ESP,EBP                         ; 0040d036
    POP EBP                             ; 0040d038
    RET                                 ; 0040d039

