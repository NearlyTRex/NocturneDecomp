; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_0056c488(undefined4 param_1,uint param_2)
;
;
; XREF[1]:
;   crt_fstream.cpp_FUN_00572446 at 00572479
;
; Called Functions:
;   crt_math.c_pentiumFdivpWorkaround_FUN_0056c403
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 0056c488
        ;   Label: crt_unknown.c_FUN_0056c488
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056c489
    AND EAX,0x7ff00000                  ; 0056c48d
    CMP EAX,0x7ff00000                  ; 0056c492
    JZ 0x0056c4cc                       ; 0056c497
        ;   XREF to: 0056c4cc (CONDITIONAL_JUMP)  ; LAB_0056c4cc
    FNSTSW AX                           ; 0056c499
    AND EAX,0x3800                      ; 0056c49b
    JZ 0x0056c4af                       ; 0056c4a0
        ;   XREF to: 0056c4af (CONDITIONAL_JUMP)  ; LAB_0056c4af
    FLD double ptr [ESP + 0x8]          ; 0056c4a2
    CALL crt_math.c_pentiumFdivpWorkaround_FUN_0056c403 ; 0056c4a6
        ;   XREF to: 0056c403 (UNCONDITIONAL_CALL)  ; void crt_math.c_pentiumFdivpWorkaround_FUN_0056c403()
    POP EAX                             ; 0056c4ab
    RET 0x8                             ; 0056c4ac
    FXCH                                ; 0056c4af
        ;   Label: LAB_0056c4af
    SUB ESP,0xc                         ; 0056c4b1
    FSTP extended double ptr [ESP]      ; 0056c4b4
    FLD double ptr [ESP + 0x14]         ; 0056c4b7
    CALL crt_math.c_pentiumFdivpWorkaround_FUN_0056c403 ; 0056c4bb
        ;   XREF to: 0056c403 (UNCONDITIONAL_CALL)  ; void crt_math.c_pentiumFdivpWorkaround_FUN_0056c403()
    FLD extended double ptr [ESP]       ; 0056c4c0
    FXCH                                ; 0056c4c3
    ADD ESP,0xc                         ; 0056c4c5
    POP EAX                             ; 0056c4c8
    RET 0x8                             ; 0056c4c9
    FDIV double ptr [ESP + 0x8]         ; 0056c4cc
        ;   Label: LAB_0056c4cc
    POP EAX                             ; 0056c4d0
    RET 0x8                             ; 0056c4d1

