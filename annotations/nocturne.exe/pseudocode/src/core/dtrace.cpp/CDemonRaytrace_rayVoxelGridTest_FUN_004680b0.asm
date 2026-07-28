; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_pos
; CVector3f *      Stack[0xc]:4   end_pos
; Local Variables:
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined8       Stack[-0x7c]:8  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30 at 0050fa49
;
; Referenced Globals:
;   float FLOAT_0057e1de = 2.684355E+8
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004680b0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0
    PUSH ESI                            ; 004680b1
    PUSH EDI                            ; 004680b2
    PUSH EBP                            ; 004680b3
    MOV EBP,ESP                         ; 004680b4
    SUB ESP,0x90                        ; 004680b6
    AND ESP,0xfffffff8                  ; 004680bc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004680bf
    MOV EDI,dword ptr [EBP + 0x18]      ; 004680c2
    FLD float ptr [EDI + 0x4]           ; 004680c5
    FSUB float ptr [ESI + 0x14]         ; 004680c8
    FDIV float ptr [ESI + 0x2c]         ; 004680cb
    FLD float ptr [EDI]                 ; 004680ce
    FSUB float ptr [ESI + 0x10]         ; 004680d0
    FLD1                                ; 004680d3
    FDIV float ptr [ESI + 0x28]         ; 004680d5
    FLD float ptr [EDI + 0x8]           ; 004680d8
    FSUB float ptr [ESI + 0x18]         ; 004680db
    FDIV float ptr [ESI + 0x30]         ; 004680de
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004680e1
    FLD float ptr [EAX]                 ; 004680e4
    FSUB float ptr [ESI + 0x10]         ; 004680e6
    FXCH ST3                            ; 004680e9
    FMUL ST2                            ; 004680eb
    FXCH ST3                            ; 004680ed
    FMULP ST2                           ; 004680ef
    FXCH ST3                            ; 004680f1
    FSTP float ptr [ESP + 0x50]         ; 004680f3
    FXCH ST2                            ; 004680f7
    FST float ptr [ESP + 0x48]          ; 004680f9
    FLD float ptr [ESP + 0x50]          ; 004680fd
    CALL crt_math.c_round_FUN_00563a30  ; 00468101
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 00468106
    CALL crt_math.c_round_FUN_00563a30  ; 00468108
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 0046810d
    FISTP dword ptr [ESP + 0x70]        ; 0046810f
    FISTP dword ptr [ESP + 0x78]        ; 00468113
    FST float ptr [ESP + 0x54]          ; 00468117
    CALL crt_math.c_round_FUN_00563a30  ; 0046811b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x74]        ; 00468120
    SUB ESP,0x8                         ; 00468124
    FSTP double ptr [ESP]               ; 00468127
    CALL crt_math.c_floor_FUN_005648c0  ; 0046812a
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 0046812f
    MOV dword ptr [ESP + 0x30],EDX      ; 00468133
    FLD double ptr [ESP + 0x2c]         ; 00468137
    ADD ESP,0x8                         ; 0046813b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046813e
    FLD float ptr [EAX + 0x4]           ; 00468141
    FSUB float ptr [ESI + 0x14]         ; 00468144
    FDIV float ptr [ESI + 0x2c]         ; 00468147
    FXCH                                ; 0046814a
    CALL crt_math.c_round_FUN_00563a30  ; 0046814c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x44]        ; 00468151
    SUB ESP,0x8                         ; 00468155
    FSTP double ptr [ESP]               ; 00468158
    CALL crt_math.c_floor_FUN_005648c0  ; 0046815b
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00468160
    MOV dword ptr [ESP + 0x30],EDX      ; 00468164
    FLD double ptr [ESP + 0x2c]         ; 00468168
    ADD ESP,0x8                         ; 0046816c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046816f
    FLD float ptr [EAX + 0x8]           ; 00468172
    FSUB float ptr [ESI + 0x18]         ; 00468175
    FDIV float ptr [ESI + 0x30]         ; 00468178
    FXCH                                ; 0046817b
    CALL crt_math.c_round_FUN_00563a30  ; 0046817d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x38]        ; 00468182
    SUB ESP,0x8                         ; 00468186
    FSTP double ptr [ESP]               ; 00468189
    CALL crt_math.c_floor_FUN_005648c0  ; 0046818c
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00468191
    MOV dword ptr [ESP + 0x30],EDX      ; 00468195
    FLD double ptr [ESP + 0x2c]         ; 00468199
    ADD ESP,0x8                         ; 0046819d
    MOV EBX,0x1                         ; 004681a0
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004681a5
    CALL crt_math.c_round_FUN_00563a30  ; 004681a8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FLD float ptr [EAX]                 ; 004681ad
    FSUB float ptr [EDI]                ; 004681af
    FXCH                                ; 004681b1
    FISTP dword ptr [ESP + 0x40]        ; 004681b3
    FSTP float ptr [ESP + 0xc]          ; 004681b7
    FLD float ptr [EAX + 0x4]           ; 004681bb
    FSUB float ptr [EDI + 0x4]          ; 004681be
    MOV EDX,dword ptr [ESP + 0x44]      ; 004681c1
    FSTP float ptr [ESP + 0x10]         ; 004681c5
    FLD float ptr [EAX + 0x8]           ; 004681c9
    FSUB float ptr [EDI + 0x8]          ; 004681cc
    MOV EAX,dword ptr [ESP + 0x74]      ; 004681cf
    FSTP float ptr [ESP + 0x14]         ; 004681d3
    CMP EAX,EDX                         ; 004681d7
    JNZ 0x004681e9                      ; 004681d9
        ;   XREF to: 004681e9 (CONDITIONAL_JUMP)  ; LAB_004681e9
    MOV EAX,dword ptr [ESP + 0x70]      ; 004681db
    CMP EAX,dword ptr [ESP + 0x38]      ; 004681df
    JZ 0x0046843c                       ; 004681e3
        ;   XREF to: 0046843c (CONDITIONAL_JUMP)  ; LAB_0046843c
    FLD float ptr [ESP + 0x10]          ; 004681e9
        ;   Label: LAB_004681e9
    FMUL ST0                            ; 004681ed
    FLD float ptr [ESP + 0xc]           ; 004681ef
    FMUL ST0                            ; 004681f3
    FADDP                               ; 004681f5
    FLD float ptr [ESP + 0x14]          ; 004681f7
    FMUL ST0                            ; 004681fb
    FADDP                               ; 004681fd
    FSQRT                               ; 004681ff
    FST float ptr [ESP + 0x8]           ; 00468201
    FLDZ                                ; 00468205
    FCOMPP                              ; 00468207
    FNSTSW AX                           ; 00468209
    SAHF                                ; 0046820b
    JNC 0x0046844f                      ; 0046820c
        ;   XREF to: 0046844f (CONDITIONAL_JUMP)  ; LAB_0046844f
    FLD float ptr [ESP + 0x10]          ; 00468212
    FABS                                ; 00468216
    FLD float ptr [ESP + 0x14]          ; 00468218
    FABS                                ; 0046821c
    FLD float ptr [ESP + 0xc]           ; 0046821e
    FLD ST0                             ; 00468222
    FABS                                ; 00468224
    FLD float ptr [0x0057e1de]          ; 00468226 | FLOAT_0057e1de
    FDIV float ptr [ESP + 0x8]          ; 0046822c
    FXCH                                ; 00468230
    FMUL ST1                            ; 00468232
    FXCH ST4                            ; 00468234
    FMUL ST1                            ; 00468236
    FXCH ST3                            ; 00468238
    FMULP                               ; 0046823a
    FXCH ST3                            ; 0046823c
    CALL crt_math.c_round_FUN_00563a30  ; 0046823e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x68]        ; 00468243
    FLDZ                                ; 00468247
    FXCH ST2                            ; 00468249
    CALL crt_math.c_round_FUN_00563a30  ; 0046824b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST3                            ; 00468250
    CALL crt_math.c_round_FUN_00563a30  ; 00468252
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST3                            ; 00468257
    FISTP dword ptr [ESP + 0x64]        ; 00468259
    FXCH ST2                            ; 0046825d
    FISTP dword ptr [ESP + 0x6c]        ; 0046825f
    FCOMPP                              ; 00468263
    FNSTSW AX                           ; 00468265
    SAHF                                ; 00468267
    JA 0x00468458                       ; 00468268
        ;   XREF to: 00468458 (CONDITIONAL_JUMP)  ; LAB_00468458
    MOV EAX,dword ptr [ESP + 0x44]      ; 0046826e
    MOV EDX,dword ptr [ESP + 0x74]      ; 00468272
    SUB EAX,EDX                         ; 00468276
    MOV ECX,0x1                         ; 00468278
    ADD EBX,EAX                         ; 0046827d
    LEA EAX,[EDX + ECX*0x1]             ; 0046827f
    MOV dword ptr [ESP + 0x8c],EAX      ; 00468282
    FILD dword ptr [ESP + 0x8c]         ; 00468289
    FSUB float ptr [ESP + 0x54]         ; 00468290
    MOV dword ptr [ESP + 0x5c],ECX      ; 00468294
        ;   Label: LAB_00468294
    FSTP float ptr [ESP + 0x34]         ; 00468298
    FLD float ptr [ESP + 0x10]          ; 0046829c
    FLDZ                                ; 004682a0
    FCOMPP                              ; 004682a2
    FNSTSW AX                           ; 004682a4
    SAHF                                ; 004682a6
    JA 0x00468482                       ; 004682a7
        ;   XREF to: 00468482 (CONDITIONAL_JUMP)  ; LAB_00468482
    MOV EAX,dword ptr [ESP + 0x38]      ; 004682ad
    MOV EDX,dword ptr [ESP + 0x70]      ; 004682b1
    SUB EAX,EDX                         ; 004682b5
    MOV ECX,0x1                         ; 004682b7
    ADD EBX,EAX                         ; 004682bc
    LEA EAX,[EDX + ECX*0x1]             ; 004682be
    MOV dword ptr [ESP + 0x8c],EAX      ; 004682c1
    FILD dword ptr [ESP + 0x8c]         ; 004682c8
    FSUB float ptr [ESP + 0x50]         ; 004682cf
    MOV dword ptr [ESP + 0x58],ECX      ; 004682d3
        ;   Label: LAB_004682d3
    FSTP float ptr [ESP + 0x4c]         ; 004682d7
    FLD float ptr [ESP + 0x14]          ; 004682db
    FLDZ                                ; 004682df
    FCOMPP                              ; 004682e1
    FNSTSW AX                           ; 004682e3
    SAHF                                ; 004682e5
    JA 0x004684ac                       ; 004682e6
        ;   XREF to: 004684ac (CONDITIONAL_JUMP)  ; LAB_004684ac
    MOV EAX,dword ptr [ESP + 0x40]      ; 004682ec
    MOV EDX,dword ptr [ESP + 0x78]      ; 004682f0
    SUB EAX,EDX                         ; 004682f4
    MOV ECX,0x1                         ; 004682f6
    ADD EBX,EAX                         ; 004682fb
    LEA EAX,[EDX + ECX*0x1]             ; 004682fd
    MOV dword ptr [ESP + 0x8c],EAX      ; 00468300
    FILD dword ptr [ESP + 0x8c]         ; 00468307
    FSUB float ptr [ESP + 0x48]         ; 0046830e
    MOV dword ptr [ESP + 0x60],ECX      ; 00468312
        ;   Label: LAB_00468312
    FSTP float ptr [ESP + 0x3c]         ; 00468316
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046831a
    MOV dword ptr [ESP + 0x8c],EAX      ; 0046831e
    FILD dword ptr [ESP + 0x8c]         ; 00468325
    FLD ST0                             ; 0046832c
    FMUL float ptr [ESP + 0x34]         ; 0046832e
    MOV EAX,dword ptr [ESP + 0x68]      ; 00468332
    FXCH                                ; 00468336
    FLD float ptr [ESP + 0x3c]          ; 00468338
    FXCH                                ; 0046833c
    FMUL ST1                            ; 0046833e
    MOV dword ptr [ESP + 0x8c],EAX      ; 00468340
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00468347
    FILD dword ptr [ESP + 0x8c]         ; 0046834b
    MOV dword ptr [ESP + 0x8c],EAX      ; 00468352
    FLD ST0                             ; 00468359
    FMUL float ptr [ESP + 0x4c]         ; 0046835b
    FILD dword ptr [ESP + 0x8c]         ; 0046835f
    FLD ST0                             ; 00468366
    FMUL float ptr [ESP + 0x34]         ; 00468368
    FXCH                                ; 0046836c
    FMUL float ptr [ESP + 0x4c]         ; 0046836e
    FXCH ST2                            ; 00468372
    FSUBP ST6,ST0                       ; 00468374
    FXCH ST2                            ; 00468376
    FMULP ST4                           ; 00468378
    FXCH ST4                            ; 0046837a
    CALL crt_math.c_round_FUN_00563a30  ; 0046837c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST4                            ; 00468381
    FSUBP ST2,ST0                       ; 00468383
    FXCH ST3                            ; 00468385
    FISTP dword ptr [ESP + 0x7c]        ; 00468387
    CALL crt_math.c_round_FUN_00563a30  ; 0046838b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 00468390
    FSUBP ST2,ST0                       ; 00468392
    FISTP dword ptr [ESP + 0x80]        ; 00468394
    CALL crt_math.c_round_FUN_00563a30  ; 0046839b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x84]        ; 004683a0
    MOV ECX,dword ptr [ESP + 0x78]      ; 004683a7
        ;   Label: LAB_004683a7
    PUSH ECX                            ; 004683ab
    MOV EAX,dword ptr [ESP + 0x74]      ; 004683ac
    PUSH EAX                            ; 004683b0
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004683b1
    PUSH EDX                            ; 004683b5
    PUSH ESI                            ; 004683b6
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0 ; 004683b7
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 004683bc
    TEST EAX,EAX                        ; 004683bf
    JNZ 0x004684d6                      ; 004683c1
        ;   XREF to: 004684d6 (CONDITIONAL_JUMP)  ; LAB_004684d6
    DEC EBX                             ; 004683c7
        ;   Label: LAB_004683c7
    TEST EBX,EBX                        ; 004683c8
    JLE 0x0046844f                      ; 004683ca
        ;   XREF to: 0046844f (CONDITIONAL_JUMP)  ; LAB_0046844f
    MOV EAX,dword ptr [ESP + 0x80]      ; 004683d0
    MOV ECX,dword ptr [ESP + 0x64]      ; 004683d7
    MOV EDX,dword ptr [ESP + 0x78]      ; 004683db
    ADD EAX,ECX                         ; 004683df
    ADD EDX,dword ptr [ESP + 0x60]      ; 004683e1
    MOV ECX,dword ptr [ESP + 0x84]      ; 004683e5
    SUB ECX,dword ptr [ESP + 0x68]      ; 004683ec
    CMP dword ptr [ESP + 0x7c],0x0      ; 004683f0
    JL 0x0046852a                       ; 004683f5
        ;   XREF to: 0046852a (CONDITIONAL_JUMP)  ; LAB_0046852a
    CMP dword ptr [ESP + 0x80],0x0      ; 004683fb
    JL 0x00468534                       ; 00468403
        ;   XREF to: 00468534 (CONDITIONAL_JUMP)  ; LAB_00468534
    MOV EAX,dword ptr [ESP + 0x58]      ; 00468409
    MOV EDX,dword ptr [ESP + 0x70]      ; 0046840d
    MOV ECX,dword ptr [ESP + 0x7c]      ; 00468411
    ADD EDX,EAX                         ; 00468415
    MOV EAX,dword ptr [ESP + 0x68]      ; 00468417
    MOV dword ptr [ESP + 0x70],EDX      ; 0046841b
    MOV EDX,dword ptr [ESP + 0x80]      ; 0046841f
    SUB ECX,EAX                         ; 00468426
    SUB EDX,dword ptr [ESP + 0x6c]      ; 00468428
    MOV dword ptr [ESP + 0x7c],ECX      ; 0046842c
    MOV dword ptr [ESP + 0x80],EDX      ; 00468430
    JMP 0x004683a7                      ; 00468437
        ;   XREF to: 004683a7 (UNCONDITIONAL_JUMP)  ; LAB_004683a7
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046843c
        ;   Label: LAB_0046843c
    CMP EAX,dword ptr [ESP + 0x40]      ; 00468440
    JNZ 0x004681e9                      ; 00468444
        ;   XREF to: 004681e9 (CONDITIONAL_JUMP)  ; LAB_004681e9
    JMP 0x004683a7                      ; 0046844a
        ;   XREF to: 004683a7 (UNCONDITIONAL_JUMP)  ; LAB_004683a7
    XOR EAX,EAX                         ; 0046844f
        ;   Label: LAB_0046844f
    MOV ESP,EBP                         ; 00468451
    POP EBP                             ; 00468453
    POP EDI                             ; 00468454
    POP ESI                             ; 00468455
    POP EBX                             ; 00468456
    RET                                 ; 00468457
    MOV EAX,dword ptr [ESP + 0x74]      ; 00468458
        ;   Label: LAB_00468458
    SUB EAX,dword ptr [ESP + 0x44]      ; 0046845c
    ADD EBX,EAX                         ; 00468460
    MOV EAX,dword ptr [ESP + 0x74]      ; 00468462
    MOV dword ptr [ESP + 0x8c],EAX      ; 00468466
    MOV ECX,0xffffffff                  ; 0046846d
    FILD dword ptr [ESP + 0x8c]         ; 00468472
    FSUBR float ptr [ESP + 0x54]        ; 00468479
    JMP 0x00468294                      ; 0046847d
        ;   XREF to: 00468294 (UNCONDITIONAL_JUMP)  ; LAB_00468294
    MOV EAX,dword ptr [ESP + 0x70]      ; 00468482
        ;   Label: LAB_00468482
    SUB EAX,dword ptr [ESP + 0x38]      ; 00468486
    ADD EBX,EAX                         ; 0046848a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0046848c
    MOV dword ptr [ESP + 0x8c],EAX      ; 00468490
    MOV ECX,0xffffffff                  ; 00468497
    FILD dword ptr [ESP + 0x8c]         ; 0046849c
    FSUBR float ptr [ESP + 0x50]        ; 004684a3
    JMP 0x004682d3                      ; 004684a7
        ;   XREF to: 004682d3 (UNCONDITIONAL_JUMP)  ; LAB_004682d3
    MOV EAX,dword ptr [ESP + 0x78]      ; 004684ac
        ;   Label: LAB_004684ac
    SUB EAX,dword ptr [ESP + 0x40]      ; 004684b0
    ADD EBX,EAX                         ; 004684b4
    MOV EAX,dword ptr [ESP + 0x78]      ; 004684b6
    MOV dword ptr [ESP + 0x8c],EAX      ; 004684ba
    MOV ECX,0xffffffff                  ; 004684c1
    FILD dword ptr [ESP + 0x8c]         ; 004684c6
    FSUBR float ptr [ESP + 0x48]        ; 004684cd
    JMP 0x00468312                      ; 004684d1
        ;   XREF to: 00468312 (UNCONDITIONAL_JUMP)  ; LAB_00468312
    LEA EDX,[ESP + 0x30]                ; 004684d6
        ;   Label: LAB_004684d6
    PUSH EDX                            ; 004684da
    LEA EDX,[ESP + 0x1c]                ; 004684db
    PUSH EDX                            ; 004684df
    LEA EDX,[ESP + 0x14]                ; 004684e0
    PUSH EDX                            ; 004684e4
    PUSH EDI                            ; 004684e5
    PUSH EAX                            ; 004684e6
    CALL core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290 ; 004684e7
        ;   XREF to: 0044b290 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290()
    MOV dword ptr [ESP + 0xa0],EAX      ; 004684ec
    FLD float ptr [ESP + 0xa0]          ; 004684f3
    ADD ESP,0x14                        ; 004684fa
    FLDZ                                ; 004684fd
    FXCH                                ; 004684ff
    FSTP double ptr [ESP]               ; 00468501
    FCOMP double ptr [ESP]              ; 00468504
    FNSTSW AX                           ; 00468507
    SAHF                                ; 00468509
    JA 0x004683c7                       ; 0046850a
        ;   XREF to: 004683c7 (CONDITIONAL_JUMP)  ; LAB_004683c7
    FLD1                                ; 00468510
    FCOMP double ptr [ESP]              ; 00468512
    FNSTSW AX                           ; 00468515
    SAHF                                ; 00468517
    JC 0x004683c7                       ; 00468518
        ;   XREF to: 004683c7 (CONDITIONAL_JUMP)  ; LAB_004683c7
    MOV EAX,0x1                         ; 0046851e
    MOV ESP,EBP                         ; 00468523
    POP EBP                             ; 00468525
    POP EDI                             ; 00468526
    POP ESI                             ; 00468527
    POP EBX                             ; 00468528
    RET                                 ; 00468529
    CMP dword ptr [ESP + 0x84],0x0      ; 0046852a
        ;   Label: LAB_0046852a
    JL 0x0046854b                       ; 00468532
        ;   XREF to: 0046854b (CONDITIONAL_JUMP)  ; LAB_0046854b
    MOV dword ptr [ESP + 0x84],ECX      ; 00468534
        ;   Label: LAB_00468534
    MOV dword ptr [ESP + 0x80],EAX      ; 0046853b
    MOV dword ptr [ESP + 0x78],EDX      ; 00468542
    JMP 0x004683a7                      ; 00468546
        ;   XREF to: 004683a7 (UNCONDITIONAL_JUMP)  ; LAB_004683a7
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0046854b
        ;   Label: LAB_0046854b
    MOV ECX,dword ptr [ESP + 0x74]      ; 0046854f
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00468553
    ADD ECX,EAX                         ; 00468557
    MOV EAX,dword ptr [ESP + 0x64]      ; 00468559
    MOV dword ptr [ESP + 0x74],ECX      ; 0046855d
    MOV ECX,dword ptr [ESP + 0x84]      ; 00468561
    ADD EDX,EAX                         ; 00468568
    ADD ECX,dword ptr [ESP + 0x6c]      ; 0046856a
    MOV dword ptr [ESP + 0x7c],EDX      ; 0046856e
    MOV dword ptr [ESP + 0x84],ECX      ; 00468572
    JMP 0x004683a7                      ; 00468579
        ;   XREF to: 004683a7 (UNCONDITIONAL_JUMP)  ; LAB_004683a7

