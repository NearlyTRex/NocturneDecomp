; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_0047225e(float *param_1,float param_2,float param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005da2b4
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   crt_math.c_acos_FUN_005c1d04
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0047225e
        ;   Label: core_doc.cpp_FUN_0047225e
    PUSH EBX                            ; 00472260
    PUSH EBP                            ; 00472261
    MOV EBP,ESP                         ; 00472262
    SUB ESP,0x18                        ; 00472264
    AND ESP,0xfffffff8                  ; 00472267
    MOV EBX,dword ptr [EBP + 0xc]       ; 0047226a
    FLD float ptr [EBP + 0x10]          ; 0047226d
    FST double ptr [ESP + 0x8]          ; 00472270
    FCOMP double ptr [0x005da2b4]       ; 00472274 | DAT_005da2b4
    FNSTSW AX                           ; 0047227a
    SAHF                                ; 0047227c
    JC 0x004722de                       ; 0047227d
        ;   XREF to: 004722de (CONDITIONAL_JUMP)  ; LAB_004722de
    FLD float ptr [EBP + 0x10]          ; 0047227f
    FMUL ST0                            ; 00472282
    FLD float ptr [EBP + 0x14]          ; 00472284
    FMUL ST0                            ; 00472287
    FSUBP                               ; 00472289
    FSQRT                               ; 0047228b
    FDIV double ptr [ESP + 0x8]         ; 0047228d
    FLD1                                ; 00472291
    FXCH                                ; 00472293
    FSTP double ptr [ESP]               ; 00472295
    FCOMP double ptr [ESP]              ; 00472298
    FNSTSW AX                           ; 0047229b
    SAHF                                ; 0047229d
    JBE 0x004722de                      ; 0047229e
        ;   XREF to: 004722de (CONDITIONAL_JUMP)  ; LAB_004722de
    FLDZ                                ; 004722a0
    FCOMP double ptr [ESP]              ; 004722a2
    FNSTSW AX                           ; 004722a5
    SAHF                                ; 004722a7
    JA 0x004722de                       ; 004722a8
        ;   XREF to: 004722de (CONDITIONAL_JUMP)  ; LAB_004722de
    FLD double ptr [ESP]                ; 004722aa
    CALL crt_math.c_acos_FUN_005c1d04   ; 004722ad
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 004722b2
    FXCH                                ; 004722b4
    FSTP float ptr [ESP + 0x10]         ; 004722b6
    FCOMP float ptr [EBP + 0x14]        ; 004722ba
    FNSTSW AX                           ; 004722bd
    SAHF                                ; 004722bf
    JA 0x004722e3                       ; 004722c0
        ;   XREF to: 004722e3 (CONDITIONAL_JUMP)  ; LAB_004722e3
    FLD float ptr [EBX]                 ; 004722c2
    FADD float ptr [ESP + 0x10]         ; 004722c4
    FSTP float ptr [EBX]                ; 004722c8
        ;   Label: LAB_004722c8
    PUSH dword ptr [EBX]                ; 004722ca
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004722cc
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x18],EAX      ; 004722d1
    MOV EAX,dword ptr [ESP + 0x18]      ; 004722d5
    MOV dword ptr [EBX],EAX             ; 004722d9
    ADD ESP,0x4                         ; 004722db
    MOV ESP,EBP                         ; 004722de
        ;   Label: LAB_004722de
    POP EBP                             ; 004722e0
    POP EBX                             ; 004722e1
    RET                                 ; 004722e2
    FLD float ptr [EBX]                 ; 004722e3
        ;   Label: LAB_004722e3
    FSUB float ptr [ESP + 0x10]         ; 004722e5
    JMP 0x004722c8                      ; 004722e9
        ;   XREF to: 004722c8 (UNCONDITIONAL_JUMP)  ; LAB_004722c8

