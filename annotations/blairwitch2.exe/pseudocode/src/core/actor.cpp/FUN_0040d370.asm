; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_FUN_0040d370(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0040d370
        ;   Label: core_actor.cpp_FUN_0040d370
    MOV EBP,ESP                         ; 0040d371
    SUB ESP,0x4                         ; 0040d373
    AND ESP,0xfffffff8                  ; 0040d376
    MOV EAX,dword ptr [EBP + 0x8]       ; 0040d379
    FLD float ptr [EAX + 0x4]           ; 0040d37c
    FMUL ST0                            ; 0040d37f
    FLD float ptr [EAX]                 ; 0040d381
    FMUL ST0                            ; 0040d383
    FADDP                               ; 0040d385
    FLD float ptr [EAX + 0x8]           ; 0040d387
    FMUL ST0                            ; 0040d38a
    FADDP                               ; 0040d38c
    FSQRT                               ; 0040d38e
    FSTP float ptr [ESP]                ; 0040d390
    MOV EAX,dword ptr [ESP]             ; 0040d393
    MOV ESP,EBP                         ; 0040d396
    POP EBP                             ; 0040d398
    RET                                 ; 0040d399

