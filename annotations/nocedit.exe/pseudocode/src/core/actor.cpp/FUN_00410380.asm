; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_actor.cpp_FUN_00410380()
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00410380
        ;   Label: core_actor.cpp_FUN_00410380
    MOV EAX,dword ptr [ESP + 0x8]       ; 00410383
    FLD float ptr [EAX + 0x4]           ; 00410387
    FMUL ST0                            ; 0041038a
    FLD float ptr [EAX]                 ; 0041038c
    FMUL ST0                            ; 0041038e
    FADDP                               ; 00410390
    FLD float ptr [EAX + 0x8]           ; 00410392
    FMUL ST0                            ; 00410395
    FADDP                               ; 00410397
    FSQRT                               ; 00410399
    FSTP float ptr [ESP]                ; 0041039b
    MOV EAX,dword ptr [ESP]             ; 0041039e
    ADD ESP,0x4                         ; 004103a1
    RET                                 ; 004103a4

