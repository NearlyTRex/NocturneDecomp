; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0(CDemonCubeTriangle *this_ptr)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dcube.cpp_CDemonCubeTriangle_init_FUN_00455430 at 00455449
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004552c0
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0
    MOV EBP,ESP                         ; 004552c1
    SUB ESP,0x38                        ; 004552c3
    AND ESP,0xfffffff8                  ; 004552c6
    MOV EDX,dword ptr [EBP + 0x8]       ; 004552c9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004552cc
    MOV ECX,dword ptr [EDX]             ; 004552cf
    FLD float ptr [EAX]                 ; 004552d1
    FLD float ptr [EAX + 0x4]           ; 004552d3
    FLD float ptr [EAX + 0x8]           ; 004552d6
    FXCH ST2                            ; 004552d9
    FSUB float ptr [ECX]                ; 004552db
    FXCH ST2                            ; 004552dd
    FSUB float ptr [ECX + 0x8]          ; 004552df
    FXCH                                ; 004552e2
    FSUB float ptr [ECX + 0x4]          ; 004552e4
    MOV ECX,dword ptr [EDX + 0x8]       ; 004552e7
    FST float ptr [ESP + 0x2c]          ; 004552ea
    FLD float ptr [ECX + 0x8]           ; 004552ee
    FSUB float ptr [EAX + 0x8]          ; 004552f1
    FSTP float ptr [ESP + 0x24]         ; 004552f4
    FMUL float ptr [ESP + 0x24]         ; 004552f8
    FLD float ptr [ECX + 0x4]           ; 004552fc
    FSUB float ptr [EAX + 0x4]          ; 004552ff
    FXCH ST3                            ; 00455302
    FST float ptr [ESP + 0x18]          ; 00455304
    FMUL ST3                            ; 00455308
    FLD float ptr [ECX]                 ; 0045530a
    FSUB float ptr [EAX]                ; 0045530c
    FLD ST0                             ; 0045530e
    FMUL ST4                            ; 00455310
    FXCH ST5                            ; 00455312
    FMULP ST4                           ; 00455314
    FMUL float ptr [ESP + 0x2c]         ; 00455316
    FLD float ptr [ESP + 0x18]          ; 0045531a
    FMUL float ptr [ESP + 0x24]         ; 0045531e
    FXCH ST4                            ; 00455322
    FSUBP ST3,ST0                       ; 00455324
    FXCH ST3                            ; 00455326
    FSUBP ST4,ST0                       ; 00455328
    FXCH                                ; 0045532a
    FST float ptr [EDX + 0xc]           ; 0045532c
    FMUL float ptr [EDX + 0xc]          ; 0045532f
    FXCH ST3                            ; 00455332
    FST float ptr [EDX + 0x10]          ; 00455334
    FMUL float ptr [EDX + 0x10]         ; 00455337
    FXCH ST2                            ; 0045533a
    FSUBP                               ; 0045533c
    FXCH                                ; 0045533e
    FADDP ST2,ST0                       ; 00455340
    FST float ptr [EDX + 0x14]          ; 00455342
    FMUL float ptr [EDX + 0x14]         ; 00455345
    FADDP                               ; 00455348
    FSQRT                               ; 0045534a
    FSTP float ptr [ESP + 0x30]         ; 0045534c
    TEST dword ptr [ESP + 0x30],0x7fffffff ; 00455350
    JZ 0x00455402                       ; 00455358
        ;   XREF to: 00455402 (CONDITIONAL_JUMP)  ; LAB_00455402
    FLD float ptr [EDX + 0xc]           ; 0045535e
        ;   Label: LAB_0045535e
    FCHS                                ; 00455361
    FLD1                                ; 00455363
    FDIV float ptr [ESP + 0x30]         ; 00455365
    FXCH                                ; 00455369
    FMUL ST1                            ; 0045536b
    FLD float ptr [EDX + 0x10]          ; 0045536d
    FCHS                                ; 00455370
    FMUL ST2                            ; 00455372
    FLD float ptr [EDX + 0x14]          ; 00455374
    FCHS                                ; 00455377
    FMULP ST3                           ; 00455379
    MOV EAX,dword ptr [EDX]             ; 0045537b
    FXCH                                ; 0045537d
    FSTP float ptr [EDX + 0xc]          ; 0045537f
    FSTP float ptr [EDX + 0x10]         ; 00455382
    FSTP float ptr [EDX + 0x14]         ; 00455385
    FLD float ptr [EAX + 0x4]           ; 00455388
    FMUL float ptr [EDX + 0x10]         ; 0045538b
    FLD float ptr [EAX]                 ; 0045538e
    FMUL float ptr [EDX + 0xc]          ; 00455390
    FLD float ptr [EDX + 0xc]           ; 00455393
    FSTP double ptr [ESP + 0x10]        ; 00455396
    FCHS                                ; 0045539a
    FSUBRP                              ; 0045539c
    FLD float ptr [EAX + 0x8]           ; 0045539e
    FLD double ptr [ESP + 0x10]         ; 004553a1
    FABS                                ; 004553a5
    FLD float ptr [EDX + 0x10]          ; 004553a7
    FABS                                ; 004553aa
    FXCH ST2                            ; 004553ac
    FMUL float ptr [EDX + 0x14]         ; 004553ae
    FSUBP ST3,ST0                       ; 004553b1
    FXCH ST2                            ; 004553b3
    FSTP float ptr [EDX + 0x18]         ; 004553b5
    FXCH                                ; 004553b8
    FSTP double ptr [ESP]               ; 004553ba
    FCOMP double ptr [ESP]              ; 004553bd
    FNSTSW AX                           ; 004553c0
    SAHF                                ; 004553c2
    JNC 0x004553d2                      ; 004553c3
        ;   XREF to: 004553d2 (CONDITIONAL_JUMP)  ; LAB_004553d2
    FLD float ptr [EDX + 0x14]          ; 004553c5
    FABS                                ; 004553c8
    FCOMP double ptr [ESP]              ; 004553ca
    FNSTSW AX                           ; 004553cd
    SAHF                                ; 004553cf
    JC 0x0045540f                       ; 004553d0
        ;   XREF to: 0045540f (CONDITIONAL_JUMP)  ; LAB_0045540f
    FLD float ptr [EDX + 0xc]           ; 004553d2
        ;   Label: LAB_004553d2
    FABS                                ; 004553d5
    FLD float ptr [EDX + 0x10]          ; 004553d7
    FABS                                ; 004553da
    FSTP double ptr [ESP + 0x8]         ; 004553dc
    FCOMP double ptr [ESP + 0x8]        ; 004553e0
    FNSTSW AX                           ; 004553e4
    SAHF                                ; 004553e6
    JNC 0x0045541a                      ; 004553e7
        ;   XREF to: 0045541a (CONDITIONAL_JUMP)  ; LAB_0045541a
    FLD float ptr [EDX + 0x14]          ; 004553e9
    FABS                                ; 004553ec
    FCOMP double ptr [ESP + 0x8]        ; 004553ee
    FNSTSW AX                           ; 004553f2
    SAHF                                ; 004553f4
    JNC 0x0045541a                      ; 004553f5
        ;   XREF to: 0045541a (CONDITIONAL_JUMP)  ; LAB_0045541a
    MOV dword ptr [EDX + 0x1c],0x1      ; 004553f7
    MOV ESP,EBP                         ; 004553fe
    POP EBP                             ; 00455400
    RET                                 ; 00455401
    MOV dword ptr [ESP + 0x30],0x3f800000 ; 00455402
        ;   Label: LAB_00455402
    JMP 0x0045535e                      ; 0045540a
        ;   XREF to: 0045535e (UNCONDITIONAL_JUMP)  ; LAB_0045535e
    MOV dword ptr [EDX + 0x1c],0x0      ; 0045540f
        ;   Label: LAB_0045540f
    MOV ESP,EBP                         ; 00455416
    POP EBP                             ; 00455418
    RET                                 ; 00455419
    MOV dword ptr [EDX + 0x1c],0x2      ; 0045541a
        ;   Label: LAB_0045541a
    MOV ESP,EBP                         ; 00455421
    POP EBP                             ; 00455423
    RET                                 ; 00455424

