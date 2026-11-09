; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spline_cpp_FUN_00561310(float *out_basis,float t,float tension)
;
; Parameters:
; float *          Stack[0x4]:4   out_basis
; float            Stack[0x8]:4   t
; float            Stack[0xc]:4   tension
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_dracbrid.cpp_FUN_00465400 at 00465796
;   core_dracbrid.cpp_FUN_004658e0 at 00465b24
;   core_flies.cpp_FUN_004a70b0 at 004a7174
;
; Referenced Globals:
;   undefined4 DAT_005eb0d8
;   undefined4 DAT_005eb0dc
;   undefined4 DAT_005eb0e0
;   undefined4 DAT_005eb0e4
;   undefined4 DAT_005eb0e8
;   undefined4 DAT_005eb0ec
;
; *****************************************************************************

section .text

    SUB ESP,0x24                        ; 00561310
        ;   Label: core_spline.cpp_FUN_00561310
    MOV EAX,dword ptr [ESP + 0x28]      ; 00561313
    FLD1                                ; 00561317
    FLD float ptr [ESP + 0x2c]          ; 00561319
    FXCH                                ; 0056131d
    FSUB float ptr [ESP + 0x30]         ; 0056131f
    FXCH                                ; 00561323
    FMUL float ptr [ESP + 0x2c]         ; 00561325
    FXCH                                ; 00561329
    FMUL float ptr [0x005eb0d8]         ; 0056132b | DAT_005eb0d8
    FXCH                                ; 00561331
    FST float ptr [ESP + 0x4]           ; 00561333
    FMUL float ptr [ESP + 0x2c]         ; 00561337
    FXCH                                ; 0056133b
    FST float ptr [ESP]                 ; 0056133d
    FMUL float ptr [0x005eb0dc]         ; 00561340 | DAT_005eb0dc
    FLD float ptr [0x005eb0e0]          ; 00561346 | DAT_005eb0e0
    FLD float ptr [ESP]                 ; 0056134c
    FMUL ST1                            ; 0056134f
    FLD float ptr [ESP]                 ; 00561351
    FXCH ST4                            ; 00561354
    FSTP float ptr [ESP + 0x8]          ; 00561356
    FXCH ST3                            ; 0056135a
    FMUL float ptr [ESP + 0x8]          ; 0056135c
    FLD float ptr [0x005eb0dc]          ; 00561360 | DAT_005eb0dc
    FSUB float ptr [ESP]                ; 00561366
    FXCH ST4                            ; 00561369
    FMUL float ptr [ESP + 0x4]          ; 0056136b
    FXCH ST4                            ; 0056136f
    FST float ptr [ESP + 0x14]          ; 00561371
    FMUL float ptr [ESP + 0x8]          ; 00561375
    FXCH ST3                            ; 00561379
    FST float ptr [ESP + 0xc]           ; 0056137b
    FMUL float ptr [ESP + 0x4]          ; 0056137f
    FLD float ptr [ESP]                 ; 00561383
    FLD ST0                             ; 00561386
    FCHS                                ; 00561388
    FXCH                                ; 0056138a
    FADDP ST4,ST0                       ; 0056138c
    FMUL float ptr [ESP + 0x8]          ; 0056138e
    FXCH ST3                            ; 00561392
    FST float ptr [ESP + 0x18]          ; 00561394
    FXCH ST3                            ; 00561398
    FADDP                               ; 0056139a
    FXCH ST2                            ; 0056139c
    FMUL float ptr [ESP + 0x4]          ; 0056139e
    FLD float ptr [ESP]                 ; 005613a2
    FMUL float ptr [ESP + 0x2c]         ; 005613a5
    FLD float ptr [0x005eb0e4]          ; 005613a9 | DAT_005eb0e4
    FXCH ST2                            ; 005613af
    FADDP ST5,ST0                       ; 005613b1
    FLD float ptr [ESP]                 ; 005613b3
    FXCH ST2                            ; 005613b6
    FSUB float ptr [ESP + 0xc]          ; 005613b8
    FXCH ST2                            ; 005613bc
    FMUL float ptr [ESP + 0x4]          ; 005613be
    FXCH ST2                            ; 005613c2
    FSTP float ptr [ESP + 0x1c]         ; 005613c4
    FSTP float ptr [ESP + 0x10]         ; 005613c8
    FLD1                                ; 005613cc
    FADDP ST4,ST0                       ; 005613ce
    FXCH ST2                            ; 005613d0
    FSUB float ptr [ESP + 0x10]         ; 005613d2
    FXCH ST3                            ; 005613d6
    FSTP float ptr [EAX + 0x4]          ; 005613d8
    FLD float ptr [ESP + 0x1c]          ; 005613db
    FMUL float ptr [ESP + 0x4]          ; 005613df
    FLD float ptr [ESP]                 ; 005613e3
    FMUL float ptr [0x005eb0ec]         ; 005613e6 | DAT_005eb0ec
    FLD float ptr [ESP]                 ; 005613ec
    FADD float ptr [0x005eb0e8]         ; 005613ef | DAT_005eb0e8
    FXCH ST4                            ; 005613f5
    FSUBP ST3,ST0                       ; 005613f7
    FXCH ST3                            ; 005613f9
    FST float ptr [ESP + 0x20]          ; 005613fb
    FMUL float ptr [ESP + 0x8]          ; 005613ff
    FXCH ST2                            ; 00561403
    FSTP float ptr [EAX + 0xc]          ; 00561405
    FLD float ptr [ESP]                 ; 00561408
    FMUL float ptr [0x005eb0e4]         ; 0056140b | DAT_005eb0e4
    FXCH ST3                            ; 00561411
    FMUL float ptr [ESP + 0x2c]         ; 00561413
    FLD float ptr [ESP + 0x14]          ; 00561417
    FXCH                                ; 0056141b
    FADDP ST6,ST0                       ; 0056141d
    FMUL float ptr [0x005eb0e4]         ; 0056141f | DAT_005eb0e4
    FXCH ST5                            ; 00561425
    FSUB float ptr [ESP]                ; 00561427
    FXCH ST5                            ; 0056142a
    FMUL float ptr [ESP + 0x4]          ; 0056142c
    FXCH ST5                            ; 00561430
    FSTP float ptr [EAX + 0x10]         ; 00561432
    FLD float ptr [ESP + 0x18]          ; 00561435
    FMUL float ptr [0x005eb0dc]         ; 00561439 | DAT_005eb0dc
    FXCH ST3                            ; 0056143f
    FMUL float ptr [ESP + 0x4]          ; 00561441
    FXCH ST3                            ; 00561445
    FMUL float ptr [ESP + 0x2c]         ; 00561447
    FLD float ptr [ESP + 0x1c]          ; 0056144b
    FMUL float ptr [0x005eb0dc]         ; 0056144f | DAT_005eb0dc
    FXCH                                ; 00561455
    FADDP ST6,ST0                       ; 00561457
    FMUL float ptr [ESP + 0x2c]         ; 00561459
    FXCH ST5                            ; 0056145d
    FSTP float ptr [EAX + 0x14]         ; 0056145f
    FLD float ptr [ESP + 0xc]           ; 00561462
    FMUL float ptr [ESP + 0x2c]         ; 00561466
    FLD float ptr [ESP + 0x20]          ; 0056146a
    FMUL float ptr [0x005eb0e4]         ; 0056146e | DAT_005eb0e4
    FXCH                                ; 00561474
    FSUBP ST4,ST0                       ; 00561476
    FMUL float ptr [ESP + 0x4]          ; 00561478
    FXCH ST3                            ; 0056147c
    FSTP float ptr [EAX + 0x1c]         ; 0056147e
    FADDP                               ; 00561481
    FXCH ST2                            ; 00561483
    FSTP float ptr [EAX]                ; 00561485
    FADDP ST2,ST0                       ; 00561487
    FADD float ptr [ESP + 0x10]         ; 00561489
    FXCH                                ; 0056148d
    FADD float ptr [ESP]                ; 0056148f
    FXCH                                ; 00561492
    FSTP float ptr [EAX + 0x8]          ; 00561494
    FSTP float ptr [EAX + 0x18]         ; 00561497
    ADD ESP,0x24                        ; 0056149a
    RET                                 ; 0056149d

