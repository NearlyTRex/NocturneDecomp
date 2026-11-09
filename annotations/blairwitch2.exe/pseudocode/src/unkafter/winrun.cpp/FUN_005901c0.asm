; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float unkafter_winrun_cpp_FUN_005901c0(int param_1,int *param_2,float param_3,float param_4)
;
;
; XREF[1]:
;   unkafter_winrun.cpp_FUN_005902a0 at 00590398
;
; Referenced Globals:
;   undefined4 DAT_005eeaf5
;   undefined4 DAT_02665a44
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005901c0
        ;   Label: unkafter_winrun.cpp_FUN_005901c0
    PUSH EDI                            ; 005901c1
    SUB ESP,0x10                        ; 005901c2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005901c5
    MOV EAX,dword ptr [ESP + 0x20]      ; 005901c9
    CMP EDX,dword ptr [EAX]             ; 005901cd
    JL 0x0059025f                       ; 005901cf
        ;   XREF to: 0059025f (CONDITIONAL_JUMP)  ; LAB_0059025f
    CMP EDX,dword ptr [EAX + 0x4]       ; 005901d5
        ;   Label: LAB_005901d5
    JLE 0x005901dd                      ; 005901d8
        ;   XREF to: 005901dd (CONDITIONAL_JUMP)  ; LAB_005901dd
    MOV dword ptr [EAX + 0x4],EDX       ; 005901da
    FLD float ptr [ESP + 0x24]          ; 005901dd
        ;   Label: LAB_005901dd
    FADD float ptr [ESP + 0x28]         ; 005901e1
    FMUL double ptr [0x005eeaf5]        ; 005901e5 | DAT_005eeaf5
    MOV ESI,dword ptr [0x02665a44]      ; 005901eb | DAT_02665a44
    FSTP float ptr [ESP]                ; 005901f1
    TEST ESI,ESI                        ; 005901f4
    JZ 0x005901fb                       ; 005901f6
        ;   XREF to: 005901fb (CONDITIONAL_JUMP)  ; LAB_005901fb
    MOV dword ptr [EAX + 0x8],EDX       ; 005901f8
    MOV EDI,dword ptr [EAX + 0x8]       ; 005901fb
        ;   Label: LAB_005901fb
    CMP EDX,EDI                         ; 005901fe
    JGE 0x0059026b                      ; 00590200
        ;   XREF to: 0059026b (CONDITIONAL_JUMP)  ; LAB_0059026b
    MOV ECX,dword ptr [EAX]             ; 00590202
    CMP ECX,EDI                         ; 00590204
    JGE 0x00590266                      ; 00590206
        ;   XREF to: 00590266 (CONDITIONAL_JUMP)  ; LAB_00590266
    SUB EDX,ECX                         ; 00590208
    MOV dword ptr [ESP + 0xc],EDX       ; 0059020a
    FILD dword ptr [ESP + 0xc]          ; 0059020e
    FLD float ptr [ESP]                 ; 00590212
    MOV EDX,EDI                         ; 00590215
    FLD float ptr [ESP + 0x24]          ; 00590217
    FXCH                                ; 0059021b
        ;   Label: LAB_0059021b
    FSUB ST0,ST1                        ; 0059021d
    SUB EDX,ECX                         ; 0059021f
    FMULP ST2                           ; 00590221
    MOV dword ptr [ESP + 0xc],EDX       ; 00590223
    FILD dword ptr [ESP + 0xc]          ; 00590227
    FDIVP ST2,ST0                       ; 0059022b
    FADDP                               ; 0059022d
    FSTP float ptr [ESP + 0x4]          ; 0059022f
    FLD float ptr [ESP + 0x4]           ; 00590233
    FCOMP float ptr [ESP + 0x24]        ; 00590237
    FNSTSW AX                           ; 0059023b
    SAHF                                ; 0059023d
    JC 0x00590287                       ; 0059023e
        ;   XREF to: 00590287 (CONDITIONAL_JUMP)  ; LAB_00590287
    FLD float ptr [ESP + 0x4]           ; 00590240
    FCOMP float ptr [ESP + 0x28]        ; 00590244
    FNSTSW AX                           ; 00590248
    SAHF                                ; 0059024a
    JBE 0x0059028d                      ; 0059024b
        ;   XREF to: 0059028d (CONDITIONAL_JUMP)  ; LAB_0059028d
    MOV EAX,dword ptr [ESP + 0x28]      ; 0059024d
    MOV dword ptr [ESP + 0x8],EAX       ; 00590251
        ;   Label: LAB_00590251
    MOV EAX,dword ptr [ESP + 0x8]       ; 00590255
    ADD ESP,0x10                        ; 00590259
    POP EDI                             ; 0059025c
    POP ESI                             ; 0059025d
    RET                                 ; 0059025e
    MOV dword ptr [EAX],EDX             ; 0059025f
        ;   Label: LAB_0059025f
    JMP 0x005901d5                      ; 00590261
        ;   XREF to: 005901d5 (UNCONDITIONAL_JUMP)  ; LAB_005901d5
    MOV EAX,dword ptr [ESP]             ; 00590266
        ;   Label: LAB_00590266
    JMP 0x00590251                      ; 00590269
        ;   XREF to: 00590251 (UNCONDITIONAL_JUMP)  ; LAB_00590251
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059026b
        ;   Label: LAB_0059026b
    CMP ECX,EDI                         ; 0059026e
    JLE 0x00590266                      ; 00590270
        ;   XREF to: 00590266 (CONDITIONAL_JUMP)  ; LAB_00590266
    SUB EDX,ECX                         ; 00590272
    MOV dword ptr [ESP + 0xc],EDX       ; 00590274
    FILD dword ptr [ESP + 0xc]          ; 00590278
    FLD float ptr [ESP]                 ; 0059027c
    MOV EDX,EDI                         ; 0059027f
    FLD float ptr [ESP + 0x28]          ; 00590281
    JMP 0x0059021b                      ; 00590285
        ;   XREF to: 0059021b (UNCONDITIONAL_JUMP)  ; LAB_0059021b
    MOV EAX,dword ptr [ESP + 0x24]      ; 00590287
        ;   Label: LAB_00590287
    JMP 0x00590251                      ; 0059028b
        ;   XREF to: 00590251 (UNCONDITIONAL_JUMP)  ; LAB_00590251
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059028d
        ;   Label: LAB_0059028d
    MOV dword ptr [ESP + 0x8],EAX       ; 00590291
    MOV EAX,dword ptr [ESP + 0x8]       ; 00590295
    ADD ESP,0x10                        ; 00590299
    POP EDI                             ; 0059029c
    POP ESI                             ; 0059029d
    RET                                 ; 0059029e

