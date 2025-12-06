; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   box_index
; Local Variables:
; undefined8       Stack[-0x58]:8  local_58
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0 at 00554cd1
;   shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40 at 00555c44
;   shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70 at 00554fe0
;
; Referenced Globals:
;   double DOUBLE_00640c4b = 0.300000000000000
;   double DOUBLE_00640c53 = 0.590000000000000
;   double DOUBLE_00640c5b = 0.110000000000000
;   double DOUBLE_00640c63 = 0.700000000000000
;   double DOUBLE_00640c6b = 0.330000000000000
;
; Called Functions:
;   core_bugs.cpp_FUN_00427ba0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555090
        ;   Label: shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
    PUSH ESI                            ; 00555091
    PUSH EDI                            ; 00555092
    PUSH EBP                            ; 00555093
    SUB ESP,0x58                        ; 00555094
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00555097
    MOV EBP,dword ptr [ESP + 0x70]      ; 0055509b
    LEA EAX,[EBP*0x4 + 0x0]             ; 0055509f
    ADD EAX,EBP                         ; 005550a6
    XOR ESI,ESI                         ; 005550a8
    SHL EAX,0x3                         ; 005550aa
    MOV dword ptr [ESP + 0x24],ESI      ; 005550ad
    LEA EBX,[EDI + EAX*0x1]             ; 005550b1
    MOV dword ptr [ESP + 0x38],ESI      ; 005550b4
    MOV dword ptr [ESP + 0x2c],ESI      ; 005550b8
    MOV EDX,dword ptr [EBX + 0x2050]    ; 005550bc
    MOV ECX,dword ptr [EBX + 0x2054]    ; 005550c2
    MOV EBX,dword ptr [EBX + 0x2050]    ; 005550c8
    ADD EDX,ECX                         ; 005550ce
    MOV dword ptr [ESP + 0x30],ESI      ; 005550d0
    CMP EBX,EDX                         ; 005550d4
    JGE 0x0055514f                      ; 005550d6 | LAB_0055514f
        ;   XREF to: 0055514f (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x30]          ; 005550d8
    FLD float ptr [ESP + 0x2c]          ; 005550dc
    LEA ESI,[EBX*0x4 + 0x0]             ; 005550e0
    MOV EAX,dword ptr [EDI + 0x4]       ; 005550e7
    FLD float ptr [ESP + 0x24]          ; 005550ea
    ADD ESI,EAX                         ; 005550ee
    XOR EAX,EAX                         ; 005550f0
        ;   Label: LAB_005550f0
    MOV AL,byte ptr [ESI]               ; 005550f2
    ADD ESI,0x4                         ; 005550f4
    MOV dword ptr [ESP + 0x54],EAX      ; 005550f7
    XOR EAX,EAX                         ; 005550fb
    INC EBX                             ; 005550fd
    MOV AL,byte ptr [ESI + -0x3]        ; 005550fe
    FILD word ptr [ESP + 0x54]          ; 00555101
    MOV dword ptr [ESP + 0x54],EAX      ; 00555105
    XOR EAX,EAX                         ; 00555109
    FADD ST0,ST1                        ; 0055510b
    MOV AL,byte ptr [ESI + -0x2]        ; 0055510d
    FILD word ptr [ESP + 0x54]          ; 00555110
    MOV dword ptr [ESP + 0x54],EAX      ; 00555114
    XOR EAX,EAX                         ; 00555118
    FADD float ptr [ESP + 0x38]         ; 0055511a
    MOV AL,byte ptr [ESI + -0x1]        ; 0055511e
    FILD word ptr [ESP + 0x54]          ; 00555121
    MOV dword ptr [ESP + 0x54],EAX      ; 00555125
    FADD ST0,ST4                        ; 00555129
    FILD word ptr [ESP + 0x54]          ; 0055512b
    FADD ST0,ST6                        ; 0055512f
    FXCH ST3                            ; 00555131
    FSTP ST4                            ; 00555133
    FXCH                                ; 00555135
    FSTP float ptr [ESP + 0x38]         ; 00555137
    FSTP ST3                            ; 0055513b
    FSTP ST3                            ; 0055513d
    CMP EBX,EDX                         ; 0055513f
    JL 0x005550f0                       ; 00555141 | LAB_005550f0
        ;   XREF to: 005550f0 (CONDITIONAL_JUMP)
    FSTP float ptr [ESP + 0x24]         ; 00555143
    FSTP float ptr [ESP + 0x2c]         ; 00555147
    FSTP float ptr [ESP + 0x30]         ; 0055514b
    LEA EAX,[EBP*0x4 + 0x0]             ; 0055514f
        ;   Label: LAB_0055514f
    LEA EBX,[EAX + EBP*0x1]             ; 00555156
    SHL EBX,0x3                         ; 00555159
    XOR EAX,EAX                         ; 0055515c
    LEA EBP,[EDI + EBX*0x1]             ; 0055515e
    MOV dword ptr [ESP + 0x14],EAX      ; 00555161
    MOV EAX,dword ptr [EBP + 0x2054]    ; 00555165
    MOV dword ptr [ESP + 0x10],EAX      ; 0055516b
    FILD qword ptr [ESP + 0x10]         ; 0055516f
    FDIVR float ptr [ESP + 0x24]        ; 00555173
    CALL crt_math.c_round_FUN_005fe6b0  ; 00555177 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x50]        ; 0055517c
    MOV EAX,dword ptr [ESP + 0x50]      ; 00555180
    XOR ECX,ECX                         ; 00555184
    MOV word ptr [EBP + 0x2030],AX      ; 00555186
    MOV EAX,dword ptr [EBP + 0x2054]    ; 0055518d
    MOV dword ptr [ESP + 0x14],ECX      ; 00555193
    MOV dword ptr [ESP + 0x10],EAX      ; 00555197
    FILD qword ptr [ESP + 0x10]         ; 0055519b
    FDIVR float ptr [ESP + 0x38]        ; 0055519f
    CALL crt_math.c_round_FUN_005fe6b0  ; 005551a3 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x50]        ; 005551a8
    MOV EAX,dword ptr [ESP + 0x50]      ; 005551ac
    MOV word ptr [EBP + 0x2032],AX      ; 005551b0
    MOV EAX,dword ptr [EBP + 0x2054]    ; 005551b7
    MOV dword ptr [ESP + 0x14],ECX      ; 005551bd
    MOV dword ptr [ESP + 0x10],EAX      ; 005551c1
    FILD qword ptr [ESP + 0x10]         ; 005551c5
    FDIVR float ptr [ESP + 0x2c]        ; 005551c9
    CALL crt_math.c_round_FUN_005fe6b0  ; 005551cd | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x50]        ; 005551d2
    MOV EAX,dword ptr [ESP + 0x50]      ; 005551d6
    MOV word ptr [EBP + 0x2034],AX      ; 005551da
    MOV EAX,dword ptr [EBP + 0x2054]    ; 005551e1
    MOV dword ptr [ESP + 0x14],ECX      ; 005551e7
    MOV dword ptr [ESP + 0x10],EAX      ; 005551eb
    FILD qword ptr [ESP + 0x10]         ; 005551ef
    FDIVR float ptr [ESP + 0x30]        ; 005551f3
    SHL EDX,0x2                         ; 005551f7
    MOV dword ptr [EBP + 0x203c],ECX    ; 005551fa
    MOV dword ptr [ESP + 0x20],ECX      ; 00555200
    MOV dword ptr [EBP + 0x2040],ECX    ; 00555204
    MOV dword ptr [ESP + 0x34],ECX      ; 0055520a
    MOV dword ptr [EBP + 0x2044],ECX    ; 0055520e
    MOV dword ptr [ESP + 0x28],ECX      ; 00555214
    MOV dword ptr [EBP + 0x2048],ECX    ; 00555218
    MOV dword ptr [ESP + 0x3c],ECX      ; 0055521e
    MOV dword ptr [EBP + 0x2038],ECX    ; 00555222
    CALL crt_math.c_round_FUN_005fe6b0  ; 00555228 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x50]        ; 0055522d
    MOV EAX,dword ptr [ESP + 0x50]      ; 00555231
    MOV dword ptr [ESP + 0x1c],EDX      ; 00555235
    MOV word ptr [EBP + 0x2036],AX      ; 00555239
    MOV dword ptr [ESP + 0x18],EBX      ; 00555240
    MOV EBP,dword ptr [EBP + 0x2050]    ; 00555244
    LEA ESI,[EBP*0x4 + 0x0]             ; 0055524a
    MOV EBX,dword ptr [ESP + 0x18]      ; 00555251
        ;   Label: LAB_00555251
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00555255
    ADD EBX,EDI                         ; 00555259
    CMP ESI,EAX                         ; 0055525b
    JL 0x00555347                       ; 0055525d | LAB_00555347
        ;   XREF to: 00555347 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x203c]        ; 00555263
    FLD ST0                             ; 00555269
    FMUL double ptr [0x00640c6b]        ; 0055526b | double DOUBLE_00640c6b
    FLD float ptr [EBX + 0x2040]        ; 00555271
    FMUL double ptr [0x00640c53]        ; 00555277 | double DOUBLE_00640c53
    FLD float ptr [EBX + 0x2044]        ; 0055527d
    FLD ST0                             ; 00555283
    FMUL double ptr [0x00640c5b]        ; 00555285 | double DOUBLE_00640c5b
    FLD float ptr [EBX + 0x2048]        ; 0055528b
    FLD ST0                             ; 00555291
    FMUL double ptr [0x00640c63]        ; 00555293 | double DOUBLE_00640c63
    FXCH ST5                            ; 00555299
    FSTP ST6                            ; 0055529b
    FXCH ST5                            ; 0055529d
    FMUL float ptr [ESP + 0x20]         ; 0055529f
    FXCH ST3                            ; 005552a3
    FMUL float ptr [ESP + 0x34]         ; 005552a5
    FXCH                                ; 005552a9
    FSTP ST2                            ; 005552ab
    FXCH                                ; 005552ad
    FMUL float ptr [ESP + 0x28]         ; 005552af
    FXCH ST3                            ; 005552b3
    FSTP ST4                            ; 005552b5
    FXCH ST3                            ; 005552b7
    FMUL float ptr [ESP + 0x3c]         ; 005552b9
    FXCH                                ; 005552bd
    FSTP float ptr [EBX + 0x203c]       ; 005552bf
    FXCH ST2                            ; 005552c5
    FSTP float ptr [EBX + 0x2040]       ; 005552c7
    PUSH dword ptr [EBX + 0x2040]       ; 005552cd
    FSTP float ptr [EBX + 0x2044]       ; 005552d3
    PUSH dword ptr [EBX + 0x203c]       ; 005552d9
    FSTP float ptr [EBX + 0x2048]       ; 005552df
    CALL core_bugs.cpp_FUN_00427ba0     ; 005552e5 | undefined core_bugs.cpp_FUN_00427ba0()
        ;   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x58],EAX      ; 005552ea
    FLD float ptr [ESP + 0x58]          ; 005552ee
    ADD ESP,0x8                         ; 005552f2
    PUSH dword ptr [EBX + 0x2044]       ; 005552f5
    FSTP float ptr [EBX + 0x204c]       ; 005552fb
    PUSH dword ptr [EBX + 0x204c]       ; 00555301
    CALL core_bugs.cpp_FUN_00427ba0     ; 00555307 | undefined core_bugs.cpp_FUN_00427ba0()
        ;   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x58],EAX      ; 0055530c
    FLD float ptr [ESP + 0x58]          ; 00555310
    ADD ESP,0x8                         ; 00555314
    PUSH dword ptr [EBX + 0x2048]       ; 00555317
    FSTP float ptr [EBX + 0x204c]       ; 0055531d
    PUSH dword ptr [EBX + 0x204c]       ; 00555323
    CALL core_bugs.cpp_FUN_00427ba0     ; 00555329 | undefined core_bugs.cpp_FUN_00427ba0()
        ;   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x58],EAX      ; 0055532e
    MOV EAX,dword ptr [ESP + 0x58]      ; 00555332
    MOV dword ptr [EBX + 0x204c],EAX    ; 00555336
    ADD ESP,0x8                         ; 0055533c
    ADD ESP,0x58                        ; 0055533f
    POP EBP                             ; 00555342
    POP EDI                             ; 00555343
    POP ESI                             ; 00555344
    POP EBX                             ; 00555345
    RET                                 ; 00555346
    MOV EAX,dword ptr [EDI + 0x4]       ; 00555347
        ;   Label: LAB_00555347
    MOV AL,byte ptr [ESI + EAX*0x1]     ; 0055534a
    MOV EDX,dword ptr [EBX + 0x202e]    ; 0055534d
    AND EAX,0xff                        ; 00555353
    SAR EDX,0x10                        ; 00555358
    SUB EDX,EAX                         ; 0055535b
    MOV EAX,EDX                         ; 0055535d
    CDQ                                 ; 0055535f
    XOR EAX,EDX                         ; 00555360
    SUB EAX,EDX                         ; 00555362
    MOV dword ptr [ESP + 0x50],EAX      ; 00555364
    FILD dword ptr [ESP + 0x50]         ; 00555368
    MOV EAX,dword ptr [EDI + 0x4]       ; 0055536c
    FSTP float ptr [ESP + 0x44]         ; 0055536f
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1] ; 00555373
    MOV EDX,dword ptr [EBX + 0x2030]    ; 00555377
    AND EAX,0xff                        ; 0055537d
    SAR EDX,0x10                        ; 00555382
    SUB EDX,EAX                         ; 00555385
    MOV EAX,EDX                         ; 00555387
    CDQ                                 ; 00555389
    XOR EAX,EDX                         ; 0055538a
    SUB EAX,EDX                         ; 0055538c
    MOV dword ptr [ESP + 0x50],EAX      ; 0055538e
    MOV EAX,dword ptr [EDI + 0x4]       ; 00555392
    XOR EDX,EDX                         ; 00555395
    MOV DL,byte ptr [ESI + EAX*0x1 + 0x2] ; 00555397
    MOV EAX,dword ptr [EBX + 0x2032]    ; 0055539b
    SAR EAX,0x10                        ; 005553a1
    FILD dword ptr [ESP + 0x50]         ; 005553a4
    SUB EAX,EDX                         ; 005553a8
    FSTP float ptr [ESP + 0x4c]         ; 005553aa
    CDQ                                 ; 005553ae
    XOR EAX,EDX                         ; 005553af
    SUB EAX,EDX                         ; 005553b1
    MOV dword ptr [ESP + 0x50],EAX      ; 005553b3
    FILD dword ptr [ESP + 0x50]         ; 005553b7
    MOV EAX,dword ptr [EDI + 0x4]       ; 005553bb
    FSTP float ptr [ESP + 0x40]         ; 005553be
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x3] ; 005553c2
    MOV EDX,dword ptr [EBX + 0x2034]    ; 005553c6
    AND EAX,0xff                        ; 005553cc
    SAR EDX,0x10                        ; 005553d1
    SUB EDX,EAX                         ; 005553d4
    MOV EAX,EDX                         ; 005553d6
    CDQ                                 ; 005553d8
    XOR EAX,EDX                         ; 005553d9
    SUB EAX,EDX                         ; 005553db
    PUSH dword ptr [ESP + 0x44]         ; 005553dd
    FLD float ptr [EBX + 0x203c]        ; 005553e1
    FLD float ptr [EBX + 0x2040]        ; 005553e7
    FLD float ptr [EBX + 0x2044]        ; 005553ed
    FLD float ptr [EBX + 0x2048]        ; 005553f3
    MOV dword ptr [ESP + 0x54],EAX      ; 005553f9
    PUSH dword ptr [ESP + 0x24]         ; 005553fd
    FILD dword ptr [ESP + 0x58]         ; 00555401
    FSTP float ptr [ESP + 0x50]         ; 00555405
    FXCH ST3                            ; 00555409
    FADD float ptr [ESP + 0x4c]         ; 0055540b
    FXCH ST2                            ; 0055540f
    FADD float ptr [ESP + 0x54]         ; 00555411
    FXCH                                ; 00555415
    FADD float ptr [ESP + 0x48]         ; 00555417
    FXCH ST2                            ; 0055541b
    FSTP float ptr [EBX + 0x203c]       ; 0055541d
    FSTP float ptr [EBX + 0x2040]       ; 00555423
    FXCH                                ; 00555429
    FADD float ptr [ESP + 0x50]         ; 0055542b
    FXCH                                ; 0055542f
    FSTP float ptr [EBX + 0x2044]       ; 00555431
    FSTP float ptr [EBX + 0x2048]       ; 00555437
    CALL core_bugs.cpp_FUN_00427ba0     ; 0055543d | undefined core_bugs.cpp_FUN_00427ba0()
        ;   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x58],EAX      ; 00555442
    FLD float ptr [ESP + 0x58]          ; 00555446
    ADD ESP,0x8                         ; 0055544a
    PUSH dword ptr [ESP + 0x4c]         ; 0055544d
    PUSH dword ptr [ESP + 0x38]         ; 00555451
    FSTP float ptr [ESP + 0x28]         ; 00555455
    CALL core_bugs.cpp_FUN_00427ba0     ; 00555459 | undefined core_bugs.cpp_FUN_00427ba0()
        ;   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x58],EAX      ; 0055545e
    FLD float ptr [ESP + 0x58]          ; 00555462
    ADD ESP,0x8                         ; 00555466
    PUSH dword ptr [ESP + 0x40]         ; 00555469
    PUSH dword ptr [ESP + 0x2c]         ; 0055546d
    FSTP float ptr [ESP + 0x3c]         ; 00555471
    CALL core_bugs.cpp_FUN_00427ba0     ; 00555475 | undefined core_bugs.cpp_FUN_00427ba0()
        ;   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x58],EAX      ; 0055547a
    FLD float ptr [ESP + 0x58]          ; 0055547e
    ADD ESP,0x8                         ; 00555482
    FSTP float ptr [ESP + 0x28]         ; 00555485
    PUSH dword ptr [ESP + 0x48]         ; 00555489
    PUSH dword ptr [ESP + 0x40]         ; 0055548d
    CALL core_bugs.cpp_FUN_00427ba0     ; 00555491 | undefined core_bugs.cpp_FUN_00427ba0()
        ;   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x58],EAX      ; 00555496
    FLD float ptr [ESP + 0x58]          ; 0055549a
    ADD ESP,0x8                         ; 0055549e
    FLD float ptr [ESP + 0x44]          ; 005554a1
    FMUL ST0                            ; 005554a5
    FMUL double ptr [0x00640c4b]        ; 005554a7 | double DOUBLE_00640c4b
    FLD float ptr [ESP + 0x4c]          ; 005554ad
    FMUL ST0                            ; 005554b1
    FMUL double ptr [0x00640c53]        ; 005554b3 | double DOUBLE_00640c53
    FADDP                               ; 005554b9
    FLD float ptr [ESP + 0x40]          ; 005554bb
    FMUL ST0                            ; 005554bf
    FMUL double ptr [0x00640c5b]        ; 005554c1 | double DOUBLE_00640c5b
    FADDP                               ; 005554c7
    FLD float ptr [ESP + 0x48]          ; 005554c9
    FMUL ST0                            ; 005554cd
    FMUL double ptr [0x00640c63]        ; 005554cf | double DOUBLE_00640c63
    ADD ESI,0x4                         ; 005554d5
    FADDP                               ; 005554d8
    INC EBP                             ; 005554da
    FLD float ptr [EBX + 0x2038]        ; 005554db
    FXCH                                ; 005554e1
    FADD ST0,ST1                        ; 005554e3
    FXCH ST2                            ; 005554e5
    FSTP float ptr [ESP + 0x3c]         ; 005554e7
    FXCH                                ; 005554eb
    FSTP ST1                            ; 005554ed
    FSTP float ptr [EBX + 0x2038]       ; 005554ef
    JMP 0x00555251                      ; 005554f5 | LAB_00555251
        ;   XREF to: 00555251 (UNCONDITIONAL_JUMP)

