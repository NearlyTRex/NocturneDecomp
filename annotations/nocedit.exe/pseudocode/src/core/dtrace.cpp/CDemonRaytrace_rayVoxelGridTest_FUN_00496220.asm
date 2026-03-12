; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_pos
; CVector3f *      Stack[0xc]:4   end_pos
; Local Variables:
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined4       Stack[-0x98]:4  local_98
; CVector3f        Stack[-0x94]:12  local_94
; CVector3f        Stack[-0x88]:12  local_88
; double           Stack[-0x7c]:8  local_7c
; uint             Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; int              Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; int              Stack[-0x60]:4  local_60
; int              Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460 at 00572479
;
; Referenced Globals:
;   float g_VoxelGridSize2 = 2.684355E+8
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496220
        ;   Label: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
    PUSH ESI                            ; 00496221
    PUSH EDI                            ; 00496222
    PUSH EBP                            ; 00496223
    MOV EBP,ESP                         ; 00496224
    SUB ESP,0x90                        ; 00496226
    AND ESP,0xfffffff8                  ; 0049622c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0049622f
    MOV EDI,dword ptr [EBP + 0x18]      ; 00496232
    FLD float ptr [EDI + 0x4]           ; 00496235
    FSUB float ptr [ESI + 0x14]         ; 00496238
    FDIV float ptr [ESI + 0x2c]         ; 0049623b
    FLD float ptr [EDI]                 ; 0049623e
    FSUB float ptr [ESI + 0x10]         ; 00496240
    FLD1                                ; 00496243
    FDIV float ptr [ESI + 0x28]         ; 00496245
    FLD float ptr [EDI + 0x8]           ; 00496248
    FSUB float ptr [ESI + 0x18]         ; 0049624b
    FDIV float ptr [ESI + 0x30]         ; 0049624e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00496251
    FLD float ptr [EAX]                 ; 00496254
    FSUB float ptr [ESI + 0x10]         ; 00496256
    FXCH ST3                            ; 00496259
    FMUL ST2                            ; 0049625b
    FXCH ST3                            ; 0049625d
    FMULP ST2                           ; 0049625f
    FXCH ST3                            ; 00496261
    FSTP float ptr [ESP + 0x50]         ; 00496263
    FXCH ST2                            ; 00496267
    FST float ptr [ESP + 0x48]          ; 00496269
    FLD float ptr [ESP + 0x50]          ; 0049626d
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496271
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00496276
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496278
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0049627d
    FISTP dword ptr [ESP + 0x70]        ; 0049627f
    FISTP dword ptr [ESP + 0x78]        ; 00496283
    FST float ptr [ESP + 0x54]          ; 00496287
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049628b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x74]        ; 00496290
    SUB ESP,0x8                         ; 00496294
    FSTP double ptr [ESP]               ; 00496297
    CALL crt_math.c_floor_FUN_005feb90  ; 0049629a
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049629f
    MOV dword ptr [ESP + 0x30],EDX      ; 004962a3
    FLD double ptr [ESP + 0x2c]         ; 004962a7
    ADD ESP,0x8                         ; 004962ab
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004962ae
    FLD float ptr [EAX + 0x4]           ; 004962b1
    FSUB float ptr [ESI + 0x14]         ; 004962b4
    FDIV float ptr [ESI + 0x2c]         ; 004962b7
    FXCH                                ; 004962ba
    CALL crt_math.c_round_FUN_005fe6b0  ; 004962bc
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x44]        ; 004962c1
    SUB ESP,0x8                         ; 004962c5
    FSTP double ptr [ESP]               ; 004962c8
    CALL crt_math.c_floor_FUN_005feb90  ; 004962cb
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 004962d0
    MOV dword ptr [ESP + 0x30],EDX      ; 004962d4
    FLD double ptr [ESP + 0x2c]         ; 004962d8
    ADD ESP,0x8                         ; 004962dc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004962df
    FLD float ptr [EAX + 0x8]           ; 004962e2
    FSUB float ptr [ESI + 0x18]         ; 004962e5
    FDIV float ptr [ESI + 0x30]         ; 004962e8
    FXCH                                ; 004962eb
    CALL crt_math.c_round_FUN_005fe6b0  ; 004962ed
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x38]        ; 004962f2
    SUB ESP,0x8                         ; 004962f6
    FSTP double ptr [ESP]               ; 004962f9
    CALL crt_math.c_floor_FUN_005feb90  ; 004962fc
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00496301
    MOV dword ptr [ESP + 0x30],EDX      ; 00496305
    FLD double ptr [ESP + 0x2c]         ; 00496309
    ADD ESP,0x8                         ; 0049630d
    MOV EBX,0x1                         ; 00496310
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00496315
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496318
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FLD float ptr [EAX]                 ; 0049631d
    FSUB float ptr [EDI]                ; 0049631f
    FXCH                                ; 00496321
    FISTP dword ptr [ESP + 0x40]        ; 00496323
    FSTP float ptr [ESP + 0xc]          ; 00496327
    FLD float ptr [EAX + 0x4]           ; 0049632b
    FSUB float ptr [EDI + 0x4]          ; 0049632e
    MOV EDX,dword ptr [ESP + 0x44]      ; 00496331
    FSTP float ptr [ESP + 0x10]         ; 00496335
    FLD float ptr [EAX + 0x8]           ; 00496339
    FSUB float ptr [EDI + 0x8]          ; 0049633c
    MOV EAX,dword ptr [ESP + 0x74]      ; 0049633f
    FSTP float ptr [ESP + 0x14]         ; 00496343
    CMP EAX,EDX                         ; 00496347
    JNZ 0x00496359                      ; 00496349
        ;   XREF to: 00496359 (CONDITIONAL_JUMP)  ; LAB_00496359
    MOV EAX,dword ptr [ESP + 0x70]      ; 0049634b
    CMP EAX,dword ptr [ESP + 0x38]      ; 0049634f
    JZ 0x004965ac                       ; 00496353
        ;   XREF to: 004965ac (CONDITIONAL_JUMP)  ; LAB_004965ac
    FLD float ptr [ESP + 0x10]          ; 00496359
        ;   Label: LAB_00496359
    FMUL ST0                            ; 0049635d
    FLD float ptr [ESP + 0xc]           ; 0049635f
    FMUL ST0                            ; 00496363
    FADDP                               ; 00496365
    FLD float ptr [ESP + 0x14]          ; 00496367
    FMUL ST0                            ; 0049636b
    FADDP                               ; 0049636d
    FSQRT                               ; 0049636f
    FST float ptr [ESP + 0x8]           ; 00496371
    FLDZ                                ; 00496375
    FCOMPP                              ; 00496377
    FNSTSW AX                           ; 00496379
    SAHF                                ; 0049637b
    JNC 0x004965bf                      ; 0049637c
        ;   XREF to: 004965bf (CONDITIONAL_JUMP)  ; LAB_004965bf
    FLD float ptr [ESP + 0x10]          ; 00496382
    FABS                                ; 00496386
    FLD float ptr [ESP + 0x14]          ; 00496388
    FABS                                ; 0049638c
    FLD float ptr [ESP + 0xc]           ; 0049638e
    FLD ST0                             ; 00496392
    FABS                                ; 00496394
    FLD float ptr [0x00622b66]          ; 00496396 | g_VoxelGridSize2
    FDIV float ptr [ESP + 0x8]          ; 0049639c
    FXCH                                ; 004963a0
    FMUL ST1                            ; 004963a2
    FXCH ST4                            ; 004963a4
    FMUL ST1                            ; 004963a6
    FXCH ST3                            ; 004963a8
    FMULP                               ; 004963aa
    FXCH ST3                            ; 004963ac
    CALL crt_math.c_round_FUN_005fe6b0  ; 004963ae
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x68]        ; 004963b3
    FLDZ                                ; 004963b7
    FXCH ST2                            ; 004963b9
    CALL crt_math.c_round_FUN_005fe6b0  ; 004963bb
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 004963c0
    CALL crt_math.c_round_FUN_005fe6b0  ; 004963c2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 004963c7
    FISTP dword ptr [ESP + 0x64]        ; 004963c9
    FXCH ST2                            ; 004963cd
    FISTP dword ptr [ESP + 0x6c]        ; 004963cf
    FCOMPP                              ; 004963d3
    FNSTSW AX                           ; 004963d5
    SAHF                                ; 004963d7
    JA 0x004965c8                       ; 004963d8
        ;   XREF to: 004965c8 (CONDITIONAL_JUMP)  ; LAB_004965c8
    MOV EAX,dword ptr [ESP + 0x44]      ; 004963de
    MOV EDX,dword ptr [ESP + 0x74]      ; 004963e2
    SUB EAX,EDX                         ; 004963e6
    MOV ECX,0x1                         ; 004963e8
    ADD EBX,EAX                         ; 004963ed
    LEA EAX,[EDX + ECX*0x1]             ; 004963ef
    MOV dword ptr [ESP + 0x8c],EAX      ; 004963f2
    FILD dword ptr [ESP + 0x8c]         ; 004963f9
    FSUB float ptr [ESP + 0x54]         ; 00496400
    MOV dword ptr [ESP + 0x5c],ECX      ; 00496404
        ;   Label: LAB_00496404
    FSTP float ptr [ESP + 0x34]         ; 00496408
    FLD float ptr [ESP + 0x10]          ; 0049640c
    FLDZ                                ; 00496410
    FCOMPP                              ; 00496412
    FNSTSW AX                           ; 00496414
    SAHF                                ; 00496416
    JA 0x004965f2                       ; 00496417
        ;   XREF to: 004965f2 (CONDITIONAL_JUMP)  ; LAB_004965f2
    MOV EAX,dword ptr [ESP + 0x38]      ; 0049641d
    MOV EDX,dword ptr [ESP + 0x70]      ; 00496421
    SUB EAX,EDX                         ; 00496425
    MOV ECX,0x1                         ; 00496427
    ADD EBX,EAX                         ; 0049642c
    LEA EAX,[EDX + ECX*0x1]             ; 0049642e
    MOV dword ptr [ESP + 0x8c],EAX      ; 00496431
    FILD dword ptr [ESP + 0x8c]         ; 00496438
    FSUB float ptr [ESP + 0x50]         ; 0049643f
    MOV dword ptr [ESP + 0x58],ECX      ; 00496443
        ;   Label: LAB_00496443
    FSTP float ptr [ESP + 0x4c]         ; 00496447
    FLD float ptr [ESP + 0x14]          ; 0049644b
    FLDZ                                ; 0049644f
    FCOMPP                              ; 00496451
    FNSTSW AX                           ; 00496453
    SAHF                                ; 00496455
    JA 0x0049661c                       ; 00496456
        ;   XREF to: 0049661c (CONDITIONAL_JUMP)  ; LAB_0049661c
    MOV EAX,dword ptr [ESP + 0x40]      ; 0049645c
    MOV EDX,dword ptr [ESP + 0x78]      ; 00496460
    SUB EAX,EDX                         ; 00496464
    MOV ECX,0x1                         ; 00496466
    ADD EBX,EAX                         ; 0049646b
    LEA EAX,[EDX + ECX*0x1]             ; 0049646d
    MOV dword ptr [ESP + 0x8c],EAX      ; 00496470
    FILD dword ptr [ESP + 0x8c]         ; 00496477
    FSUB float ptr [ESP + 0x48]         ; 0049647e
    MOV dword ptr [ESP + 0x60],ECX      ; 00496482
        ;   Label: LAB_00496482
    FSTP float ptr [ESP + 0x3c]         ; 00496486
    MOV EAX,dword ptr [ESP + 0x64]      ; 0049648a
    MOV dword ptr [ESP + 0x8c],EAX      ; 0049648e
    FILD dword ptr [ESP + 0x8c]         ; 00496495
    FLD ST0                             ; 0049649c
    FMUL float ptr [ESP + 0x34]         ; 0049649e
    MOV EAX,dword ptr [ESP + 0x68]      ; 004964a2
    FXCH                                ; 004964a6
    FLD float ptr [ESP + 0x3c]          ; 004964a8
    FXCH                                ; 004964ac
    FMUL ST1                            ; 004964ae
    MOV dword ptr [ESP + 0x8c],EAX      ; 004964b0
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004964b7
    FILD dword ptr [ESP + 0x8c]         ; 004964bb
    MOV dword ptr [ESP + 0x8c],EAX      ; 004964c2
    FLD ST0                             ; 004964c9
    FMUL float ptr [ESP + 0x4c]         ; 004964cb
    FILD dword ptr [ESP + 0x8c]         ; 004964cf
    FLD ST0                             ; 004964d6
    FMUL float ptr [ESP + 0x34]         ; 004964d8
    FXCH                                ; 004964dc
    FMUL float ptr [ESP + 0x4c]         ; 004964de
    FXCH ST2                            ; 004964e2
    FSUBP ST6,ST0                       ; 004964e4
    FXCH ST2                            ; 004964e6
    FMULP ST4                           ; 004964e8
    FXCH ST4                            ; 004964ea
    CALL crt_math.c_round_FUN_005fe6b0  ; 004964ec
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST4                            ; 004964f1
    FSUBP ST2,ST0                       ; 004964f3
    FXCH ST3                            ; 004964f5
    FISTP dword ptr [ESP + 0x7c]        ; 004964f7
    CALL crt_math.c_round_FUN_005fe6b0  ; 004964fb
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00496500
    FSUBP ST2,ST0                       ; 00496502
    FISTP dword ptr [ESP + 0x80]        ; 00496504
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049650b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x84]        ; 00496510
    MOV ECX,dword ptr [ESP + 0x78]      ; 00496517
        ;   Label: LAB_00496517
    PUSH ECX                            ; 0049651b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0049651c
    PUSH EAX                            ; 00496520
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00496521
    PUSH EDX                            ; 00496525
    PUSH ESI                            ; 00496526
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 00496527
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0049652c
    TEST EAX,EAX                        ; 0049652f
    JNZ 0x00496646                      ; 00496531
        ;   XREF to: 00496646 (CONDITIONAL_JUMP)  ; LAB_00496646
    DEC EBX                             ; 00496537
        ;   Label: LAB_00496537
    TEST EBX,EBX                        ; 00496538
    JLE 0x004965bf                      ; 0049653a
        ;   XREF to: 004965bf (CONDITIONAL_JUMP)  ; LAB_004965bf
    MOV EAX,dword ptr [ESP + 0x80]      ; 00496540
    MOV ECX,dword ptr [ESP + 0x64]      ; 00496547
    MOV EDX,dword ptr [ESP + 0x78]      ; 0049654b
    ADD EAX,ECX                         ; 0049654f
    ADD EDX,dword ptr [ESP + 0x60]      ; 00496551
    MOV ECX,dword ptr [ESP + 0x84]      ; 00496555
    SUB ECX,dword ptr [ESP + 0x68]      ; 0049655c
    CMP dword ptr [ESP + 0x7c],0x0      ; 00496560
    JL 0x0049669a                       ; 00496565
        ;   XREF to: 0049669a (CONDITIONAL_JUMP)  ; LAB_0049669a
    CMP dword ptr [ESP + 0x80],0x0      ; 0049656b
    JL 0x004966a4                       ; 00496573
        ;   XREF to: 004966a4 (CONDITIONAL_JUMP)  ; LAB_004966a4
    MOV EAX,dword ptr [ESP + 0x58]      ; 00496579
    MOV EDX,dword ptr [ESP + 0x70]      ; 0049657d
    MOV ECX,dword ptr [ESP + 0x7c]      ; 00496581
    ADD EDX,EAX                         ; 00496585
    MOV EAX,dword ptr [ESP + 0x68]      ; 00496587
    MOV dword ptr [ESP + 0x70],EDX      ; 0049658b
    MOV EDX,dword ptr [ESP + 0x80]      ; 0049658f
    SUB ECX,EAX                         ; 00496596
    SUB EDX,dword ptr [ESP + 0x6c]      ; 00496598
    MOV dword ptr [ESP + 0x7c],ECX      ; 0049659c
    MOV dword ptr [ESP + 0x80],EDX      ; 004965a0
    JMP 0x00496517                      ; 004965a7
        ;   XREF to: 00496517 (UNCONDITIONAL_JUMP)  ; LAB_00496517
    MOV EAX,dword ptr [ESP + 0x78]      ; 004965ac
        ;   Label: LAB_004965ac
    CMP EAX,dword ptr [ESP + 0x40]      ; 004965b0
    JNZ 0x00496359                      ; 004965b4
        ;   XREF to: 00496359 (CONDITIONAL_JUMP)  ; LAB_00496359
    JMP 0x00496517                      ; 004965ba
        ;   XREF to: 00496517 (UNCONDITIONAL_JUMP)  ; LAB_00496517
    XOR EAX,EAX                         ; 004965bf
        ;   Label: LAB_004965bf
    MOV ESP,EBP                         ; 004965c1
    POP EBP                             ; 004965c3
    POP EDI                             ; 004965c4
    POP ESI                             ; 004965c5
    POP EBX                             ; 004965c6
    RET                                 ; 004965c7
    MOV EAX,dword ptr [ESP + 0x74]      ; 004965c8
        ;   Label: LAB_004965c8
    SUB EAX,dword ptr [ESP + 0x44]      ; 004965cc
    ADD EBX,EAX                         ; 004965d0
    MOV EAX,dword ptr [ESP + 0x74]      ; 004965d2
    MOV dword ptr [ESP + 0x8c],EAX      ; 004965d6
    MOV ECX,0xffffffff                  ; 004965dd
    FILD dword ptr [ESP + 0x8c]         ; 004965e2
    FSUBR float ptr [ESP + 0x54]        ; 004965e9
    JMP 0x00496404                      ; 004965ed
        ;   XREF to: 00496404 (UNCONDITIONAL_JUMP)  ; LAB_00496404
    MOV EAX,dword ptr [ESP + 0x70]      ; 004965f2
        ;   Label: LAB_004965f2
    SUB EAX,dword ptr [ESP + 0x38]      ; 004965f6
    ADD EBX,EAX                         ; 004965fa
    MOV EAX,dword ptr [ESP + 0x70]      ; 004965fc
    MOV dword ptr [ESP + 0x8c],EAX      ; 00496600
    MOV ECX,0xffffffff                  ; 00496607
    FILD dword ptr [ESP + 0x8c]         ; 0049660c
    FSUBR float ptr [ESP + 0x50]        ; 00496613
    JMP 0x00496443                      ; 00496617
        ;   XREF to: 00496443 (UNCONDITIONAL_JUMP)  ; LAB_00496443
    MOV EAX,dword ptr [ESP + 0x78]      ; 0049661c
        ;   Label: LAB_0049661c
    SUB EAX,dword ptr [ESP + 0x40]      ; 00496620
    ADD EBX,EAX                         ; 00496624
    MOV EAX,dword ptr [ESP + 0x78]      ; 00496626
    MOV dword ptr [ESP + 0x8c],EAX      ; 0049662a
    MOV ECX,0xffffffff                  ; 00496631
    FILD dword ptr [ESP + 0x8c]         ; 00496636
    FSUBR float ptr [ESP + 0x48]        ; 0049663d
    JMP 0x00496482                      ; 00496641
        ;   XREF to: 00496482 (UNCONDITIONAL_JUMP)  ; LAB_00496482
    LEA EDX,[ESP + 0x30]                ; 00496646
        ;   Label: LAB_00496646
    PUSH EDX                            ; 0049664a
    LEA EDX,[ESP + 0x1c]                ; 0049664b
    PUSH EDX                            ; 0049664f
    LEA EDX,[ESP + 0x14]                ; 00496650
    PUSH EDX                            ; 00496654
    PUSH EDI                            ; 00496655
    PUSH EAX                            ; 00496656
    CALL core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0 ; 00496657
        ;   XREF to: 004578f0 (UNCONDITIONAL_CALL)  ; float core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0(CDemonCube * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * hit_normal, ...)
    MOV dword ptr [ESP + 0xa0],EAX      ; 0049665c
    FLD float ptr [ESP + 0xa0]          ; 00496663
    ADD ESP,0x14                        ; 0049666a
    FLDZ                                ; 0049666d
    FXCH                                ; 0049666f
    FSTP double ptr [ESP]               ; 00496671
    FCOMP double ptr [ESP]              ; 00496674
    FNSTSW AX                           ; 00496677
    SAHF                                ; 00496679
    JA 0x00496537                       ; 0049667a
        ;   XREF to: 00496537 (CONDITIONAL_JUMP)  ; LAB_00496537
    FLD1                                ; 00496680
    FCOMP double ptr [ESP]              ; 00496682
    FNSTSW AX                           ; 00496685
    SAHF                                ; 00496687
    JC 0x00496537                       ; 00496688
        ;   XREF to: 00496537 (CONDITIONAL_JUMP)  ; LAB_00496537
    MOV EAX,0x1                         ; 0049668e
    MOV ESP,EBP                         ; 00496693
    POP EBP                             ; 00496695
    POP EDI                             ; 00496696
    POP ESI                             ; 00496697
    POP EBX                             ; 00496698
    RET                                 ; 00496699
    CMP dword ptr [ESP + 0x84],0x0      ; 0049669a
        ;   Label: LAB_0049669a
    JL 0x004966bb                       ; 004966a2
        ;   XREF to: 004966bb (CONDITIONAL_JUMP)  ; LAB_004966bb
    MOV dword ptr [ESP + 0x84],ECX      ; 004966a4
        ;   Label: LAB_004966a4
    MOV dword ptr [ESP + 0x80],EAX      ; 004966ab
    MOV dword ptr [ESP + 0x78],EDX      ; 004966b2
    JMP 0x00496517                      ; 004966b6
        ;   XREF to: 00496517 (UNCONDITIONAL_JUMP)  ; LAB_00496517
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004966bb
        ;   Label: LAB_004966bb
    MOV ECX,dword ptr [ESP + 0x74]      ; 004966bf
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004966c3
    ADD ECX,EAX                         ; 004966c7
    MOV EAX,dword ptr [ESP + 0x64]      ; 004966c9
    MOV dword ptr [ESP + 0x74],ECX      ; 004966cd
    MOV ECX,dword ptr [ESP + 0x84]      ; 004966d1
    ADD EDX,EAX                         ; 004966d8
    ADD ECX,dword ptr [ESP + 0x6c]      ; 004966da
    MOV dword ptr [ESP + 0x7c],EDX      ; 004966de
    MOV dword ptr [ESP + 0x84],ECX      ; 004966e2
    JMP 0x00496517                      ; 004966e9
        ;   XREF to: 00496517 (UNCONDITIONAL_JUMP)  ; LAB_00496517

