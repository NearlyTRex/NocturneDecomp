; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *mrgl_data,SMRGLModelBounds *output_bounds)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
; Local Variables:
; char[80]         Stack[-0x160]:80  local_160
; uint[13]         Stack[-0x110]:52  local_110
; uint[13]         Stack[-0xdc]:52  local_dc
; uint             Stack[-0xa8]:4  local_a8
; uint             Stack[-0xa4]:4  local_a4
; uint             Stack[-0xa0]:4  local_a0
; uint             Stack[-0x9c]:4  local_9c
; uint             Stack[-0x98]:4  local_98
; uint             Stack[-0x94]:4  local_94
; uint             Stack[-0x90]:4  local_90
; uint             Stack[-0x8c]:4  local_8c
; uint             Stack[-0x88]:4  local_88
; int              Stack[-0x84]:4  local_84
; int              Stack[-0x80]:4  local_80
; int              Stack[-0x7c]:4  local_7c
; int              Stack[-0x78]:4  local_78
; SMRGLModelBounds Stack[-0x74]:52  local_74
; int *            Stack[-0x34]:4  local_34
; SMRGLModelBounds * Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int *            Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
;
; XREF[2]:
;   shape_design.c_loadModelBinary_FUN_00458170 at 004588c3
;   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 at 0048ff39
;
; Referenced Globals:
;   TerminatedCString s_engine_model_c_00639bd7
;   TerminatedCString s_Unable_to_read_magnify_00639be9
;   TerminatedCString s_Unable_to_read_verticies_00639c01
;   TerminatedCString s_engine_model_c_00639c24
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_boss.c_modelStructNotSupported4_FUN_0041dbe0
;   engine_model.c_freeMRGLData_FUN_005280b0
;   engine_model.c_loadModelFile_FUN_00527ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528140
        ;   Label: engine_model.c_getMRGLBounds_FUN_00528140
    PUSH EDI                            ; 00528141
    PUSH EBP                            ; 00528142
    SUB ESP,0x154                       ; 00528143
    MOV EAX,dword ptr [ESP + 0x164]     ; 00528149
    MOV dword ptr [ESP + 0x130],ESI     ; 00528150
    MOV EDX,dword ptr [EAX]             ; 00528157
    MOV EBX,EAX                         ; 00528159
    CMP EDX,0x20                        ; 0052815b
    JZ 0x00528550                       ; 0052815e
        ;   XREF to: 00528550 (CONDITIONAL_JUMP)  ; LAB_00528550
    CMP EDX,0x26                        ; 00528164
    JZ 0x0052859e                       ; 00528167
        ;   XREF to: 0052859e (CONDITIONAL_JUMP)  ; LAB_0052859e
    LEA EDX,[EAX + 0x8]                 ; 0052816d
    MOV dword ptr [ESP + 0x138],EDX     ; 00528170
    LEA EDX,[EAX + 0x14]                ; 00528177
    MOV ESI,dword ptr [EAX]             ; 0052817a
    MOV dword ptr [ESP + 0x12c],EDX     ; 0052817c
    CMP ESI,0x14                        ; 00528183
    JNZ 0x005285c3                      ; 00528186
        ;   XREF to: 005285c3 (CONDITIONAL_JUMP)  ; LAB_005285c3
    MOV EAX,0x7fffffff                  ; 0052818c
        ;   Label: LAB_0052818c
    MOV EDX,EAX                         ; 00528191
    MOV ECX,dword ptr [EBX + 0x4]       ; 00528193
    SAR EDX,0x1f                        ; 00528196
    IDIV ECX                            ; 00528199
    ADD EAX,EAX                         ; 0052819b
    MOV dword ptr [ESP + 0x134],EAX     ; 0052819d
    MOV EAX,dword ptr [ESP + 0x138]     ; 005281a4
    CMP dword ptr [EAX],0x2             ; 005281ab
    JZ 0x005281e3                       ; 005281ae
        ;   XREF to: 005281e3 (CONDITIONAL_JUMP)  ; LAB_005281e3
    PUSH 0x639c01                       ; 005281b0 | = "Unable to read verticies in model!"
    LEA EAX,[ESP + 0x4]                 ; 005281b5
    PUSH EAX                            ; 005281b9
    MOV ESI,0x639c24                    ; 005281ba | = "..\\engine\\model.c"
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005281bf
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 005281c4
    MOV EAX,ESP                         ; 005281c7
    MOV EDI,0x176                       ; 005281c9
    PUSH EAX                            ; 005281ce
    MOV dword ptr [0x02f0ca48],ESI      ; 005281cf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005281d5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005281db
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005281e0
    MOV EBP,0x80000000                  ; 005281e3
        ;   Label: LAB_005281e3
    MOV EAX,0x7fffffff                  ; 005281e8
    XOR EDX,EDX                         ; 005281ed
    MOV EDI,EBP                         ; 005281ef
    MOV ESI,EBP                         ; 005281f1
    MOV dword ptr [ESP + 0x140],EAX     ; 005281f3
    MOV ECX,EAX                         ; 005281fa
    MOV EBX,EAX                         ; 005281fc
    MOV dword ptr [ESP + 0x13c],EBP     ; 005281fe
    MOV EAX,dword ptr [ESP + 0x138]     ; 00528205
    MOV dword ptr [ESP + 0x144],EDX     ; 0052820c
    MOV dword ptr [ESP + 0x148],EDX     ; 00528213
    MOV EBP,dword ptr [EAX + 0x8]       ; 0052821a
    MOV dword ptr [ESP + 0x14c],EDX     ; 0052821d
    TEST EBP,EBP                        ; 00528224
    JLE 0x005282cb                      ; 00528226
        ;   XREF to: 005282cb (CONDITIONAL_JUMP)  ; LAB_005282cb
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0052822c
    MOV EBP,dword ptr [EAX]             ; 00528233
        ;   Label: LAB_00528233
    CMP ESI,EBP                         ; 00528235
    JGE 0x0052823b                      ; 00528237
        ;   XREF to: 0052823b (CONDITIONAL_JUMP)  ; LAB_0052823b
    MOV ESI,EBP                         ; 00528239
    MOV EBP,dword ptr [EAX + 0x4]       ; 0052823b
        ;   Label: LAB_0052823b
    CMP EDI,EBP                         ; 0052823e
    JGE 0x00528244                      ; 00528240
        ;   XREF to: 00528244 (CONDITIONAL_JUMP)  ; LAB_00528244
    MOV EDI,EBP                         ; 00528242
    MOV EBP,dword ptr [EAX + 0x8]       ; 00528244
        ;   Label: LAB_00528244
    CMP EBP,dword ptr [ESP + 0x13c]     ; 00528247
    JLE 0x00528257                      ; 0052824e
        ;   XREF to: 00528257 (CONDITIONAL_JUMP)  ; LAB_00528257
    MOV dword ptr [ESP + 0x13c],EBP     ; 00528250
    MOV EBP,dword ptr [EAX]             ; 00528257
        ;   Label: LAB_00528257
    CMP EBX,EBP                         ; 00528259
    JLE 0x0052825f                      ; 0052825b
        ;   XREF to: 0052825f (CONDITIONAL_JUMP)  ; LAB_0052825f
    MOV EBX,EBP                         ; 0052825d
    MOV EBP,dword ptr [EAX + 0x4]       ; 0052825f
        ;   Label: LAB_0052825f
    CMP ECX,EBP                         ; 00528262
    JLE 0x00528268                      ; 00528264
        ;   XREF to: 00528268 (CONDITIONAL_JUMP)  ; LAB_00528268
    MOV ECX,EBP                         ; 00528266
    MOV EBP,dword ptr [EAX + 0x8]       ; 00528268
        ;   Label: LAB_00528268
    CMP EBP,dword ptr [ESP + 0x140]     ; 0052826b
    JGE 0x0052827b                      ; 00528272
        ;   XREF to: 0052827b (CONDITIONAL_JUMP)  ; LAB_0052827b
    MOV dword ptr [ESP + 0x140],EBP     ; 00528274
    FILD dword ptr [EAX]                ; 0052827b
        ;   Label: LAB_0052827b
    FILD dword ptr [EAX + 0x4]          ; 0052827d
    FILD dword ptr [EAX + 0x8]          ; 00528280
    MOV EBP,dword ptr [ESP + 0x138]     ; 00528283
    ADD EAX,0xc                         ; 0052828a
    INC EDX                             ; 0052828d
    FXCH ST2                            ; 0052828e
    FADD float ptr [ESP + 0x14c]        ; 00528290
    FXCH                                ; 00528297
    FADD float ptr [ESP + 0x148]        ; 00528299
    FXCH ST2                            ; 005282a0
    FADD float ptr [ESP + 0x144]        ; 005282a2
    FXCH                                ; 005282a9
    FSTP float ptr [ESP + 0x14c]        ; 005282ab
    FXCH                                ; 005282b2
    FSTP float ptr [ESP + 0x148]        ; 005282b4
    FSTP float ptr [ESP + 0x144]        ; 005282bb
    CMP EDX,dword ptr [EBP + 0x8]       ; 005282c2
    JL 0x00528233                       ; 005282c5
        ;   XREF to: 00528233 (CONDITIONAL_JUMP)  ; LAB_00528233
    MOV EAX,dword ptr [ESP + 0x134]     ; 005282cb
        ;   Label: LAB_005282cb
    MOV EDX,ESI                         ; 005282d2
    IMUL EDX                            ; 005282d4
    SHRD EAX,EDX,0x10                   ; 005282d6
    MOV ESI,EAX                         ; 005282da
    MOV dword ptr [ESP + 0xc4],EAX      ; 005282dc
    MOV EDX,EDI                         ; 005282e3
    MOV EAX,dword ptr [ESP + 0x134]     ; 005282e5
    IMUL EDX                            ; 005282ec
    SHRD EAX,EDX,0x10                   ; 005282ee
    MOV EDX,dword ptr [ESP + 0x13c]     ; 005282f2
    MOV dword ptr [ESP + 0xc8],EAX      ; 005282f9
    MOV EAX,dword ptr [ESP + 0x134]     ; 00528300
    IMUL EDX                            ; 00528307
    SHRD EAX,EDX,0x10                   ; 00528309
    MOV dword ptr [ESP + 0xcc],EAX      ; 0052830d
    MOV EDX,EBX                         ; 00528314
    MOV EAX,dword ptr [ESP + 0x134]     ; 00528316
    IMUL EDX                            ; 0052831d
    SHRD EAX,EDX,0x10                   ; 0052831f
    MOV EBX,EAX                         ; 00528323
    MOV dword ptr [ESP + 0xb8],EAX      ; 00528325
    MOV EDX,ECX                         ; 0052832c
    MOV EAX,dword ptr [ESP + 0x134]     ; 0052832e
    IMUL EDX                            ; 00528335
    SHRD EAX,EDX,0x10                   ; 00528337
    MOV EDX,dword ptr [ESP + 0x140]     ; 0052833b
    MOV dword ptr [ESP + 0xbc],EAX      ; 00528342
    MOV EAX,dword ptr [ESP + 0x134]     ; 00528349
    IMUL EDX                            ; 00528350
    SHRD EAX,EDX,0x10                   ; 00528352
    MOV dword ptr [ESP + 0xc0],EAX      ; 00528356
    MOV EAX,dword ptr [ESP + 0x138]     ; 0052835d
    FLD float ptr [ESP + 0x14c]         ; 00528364
    FILD dword ptr [EAX + 0x8]          ; 0052836b
    FLD1                                ; 0052836e
    FDIVRP                              ; 00528370
    FXCH                                ; 00528372
    FMUL ST1                            ; 00528374
    FLD float ptr [ESP + 0x148]         ; 00528376
    FMUL ST2                            ; 0052837d
    FLD float ptr [ESP + 0x144]         ; 0052837f
    FMULP ST3                           ; 00528386
    MOV EAX,dword ptr [ESP + 0x134]     ; 00528388
    FXCH                                ; 0052838f
    FSTP float ptr [ESP + 0x14c]        ; 00528391
    FSTP float ptr [ESP + 0x148]        ; 00528398
    FLD float ptr [ESP + 0x14c]         ; 0052839f
    CALL crt_math.c_round_FUN_005fe6b0  ; 005283a6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x150]       ; 005283ab
    MOV EDX,dword ptr [ESP + 0x150]     ; 005283b2
    FSTP float ptr [ESP + 0x144]        ; 005283b9
    IMUL EDX                            ; 005283c0
    SHRD EAX,EDX,0x10                   ; 005283c2
    FLD float ptr [ESP + 0x148]         ; 005283c6
    MOV dword ptr [ESP + 0xd0],EAX      ; 005283cd
    CALL crt_math.c_round_FUN_005fe6b0  ; 005283d4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x150]       ; 005283d9
    MOV EAX,dword ptr [ESP + 0x134]     ; 005283e0
    MOV EDX,dword ptr [ESP + 0x150]     ; 005283e7
    IMUL EDX                            ; 005283ee
    SHRD EAX,EDX,0x10                   ; 005283f0
    FLD float ptr [ESP + 0x144]         ; 005283f4
    MOV dword ptr [ESP + 0xd4],EAX      ; 005283fb
    CALL crt_math.c_round_FUN_005fe6b0  ; 00528402
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x150]       ; 00528407
    MOV EAX,dword ptr [ESP + 0x134]     ; 0052840e
    MOV EDX,dword ptr [ESP + 0x150]     ; 00528415
    IMUL EDX                            ; 0052841c
    SHRD EAX,EDX,0x10                   ; 0052841e
    MOV dword ptr [ESP + 0xd8],EAX      ; 00528422
    MOV EAX,ESI                         ; 00528429
    CDQ                                 ; 0052842b
    XOR EAX,EDX                         ; 0052842c
    SUB EAX,EDX                         ; 0052842e
    MOV ECX,EAX                         ; 00528430
    MOV dword ptr [ESP + 0xe0],EAX      ; 00528432
    MOV EAX,EBX                         ; 00528439
    CDQ                                 ; 0052843b
    XOR EAX,EDX                         ; 0052843c
    SUB EAX,EDX                         ; 0052843e
    CMP ECX,EAX                         ; 00528440
    JGE 0x00528452                      ; 00528442
        ;   XREF to: 00528452 (CONDITIONAL_JUMP)  ; LAB_00528452
    MOV EAX,EBX                         ; 00528444
    CDQ                                 ; 00528446
    XOR EAX,EDX                         ; 00528447
    SUB EAX,EDX                         ; 00528449
    MOV dword ptr [ESP + 0xe0],EAX      ; 0052844b
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00528452
        ;   Label: LAB_00528452
    CDQ                                 ; 00528459
    XOR EAX,EDX                         ; 0052845a
    SUB EAX,EDX                         ; 0052845c
    MOV ECX,EAX                         ; 0052845e
    MOV dword ptr [ESP + 0xe4],EAX      ; 00528460
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00528467
    CDQ                                 ; 0052846e
    XOR EAX,EDX                         ; 0052846f
    SUB EAX,EDX                         ; 00528471
    CMP ECX,EAX                         ; 00528473
    JGE 0x0052848a                      ; 00528475
        ;   XREF to: 0052848a (CONDITIONAL_JUMP)  ; LAB_0052848a
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00528477
    CDQ                                 ; 0052847e
    XOR EAX,EDX                         ; 0052847f
    SUB EAX,EDX                         ; 00528481
    MOV dword ptr [ESP + 0xe4],EAX      ; 00528483
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052848a
        ;   Label: LAB_0052848a
    CDQ                                 ; 00528491
    XOR EAX,EDX                         ; 00528492
    SUB EAX,EDX                         ; 00528494
    MOV ECX,EAX                         ; 00528496
    MOV dword ptr [ESP + 0xe8],EAX      ; 00528498
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0052849f
    CDQ                                 ; 005284a6
    XOR EAX,EDX                         ; 005284a7
    SUB EAX,EDX                         ; 005284a9
    CMP ECX,EAX                         ; 005284ab
    JGE 0x005284c2                      ; 005284ad
        ;   XREF to: 005284c2 (CONDITIONAL_JUMP)  ; LAB_005284c2
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005284af
    CDQ                                 ; 005284b6
    XOR EAX,EDX                         ; 005284b7
    SUB EAX,EDX                         ; 005284b9
    MOV dword ptr [ESP + 0xe8],EAX      ; 005284bb
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005284c2
        ;   Label: LAB_005284c2
    MOV dword ptr [ESP + 0x150],EAX     ; 005284c9
    FILD dword ptr [ESP + 0x150]        ; 005284d0
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005284d7
    FLD ST0                             ; 005284de
    MOV dword ptr [ESP + 0x150],EAX     ; 005284e0
    FMULP                               ; 005284e7
    FILD dword ptr [ESP + 0x150]        ; 005284e9
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005284f0
    FMUL ST0                            ; 005284f7
    MOV dword ptr [ESP + 0x150],EAX     ; 005284f9
    FADDP                               ; 00528500
    FILD dword ptr [ESP + 0x150]        ; 00528502
    FMUL ST0                            ; 00528509
    FADDP                               ; 0052850b
    FSQRT                               ; 0052850d
    MOV ECX,0xd                         ; 0052850f
    LEA EDI,[ESP + 0x50]                ; 00528514
    LEA ESI,[ESP + 0xb8]                ; 00528518
    CALL crt_math.c_round_FUN_005fe6b0  ; 0052851f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xdc]        ; 00528524
    MOVSD.REP ES:EDI,ESI                ; 0052852b
        ;   Label: LAB_0052852b
    JMP 0x03fc3673                      ; 0052852d
        ;   XREF to: 03fc3673 (UNCONDITIONAL_JUMP)  ; LAB_03fc3673
    MOV EAX,dword ptr [ESP + 0x130]     ; 0052853f
        ;   Label: LAB_0052853f
    ADD ESP,0x154                       ; 00528546
    POP EBP                             ; 0052854c
    POP EDI                             ; 0052854d
    POP EBX                             ; 0052854e
    RET                                 ; 0052854f
    ADD EAX,0x18                        ; 00528550
        ;   Label: LAB_00528550
    PUSH EAX                            ; 00528553
    CALL engine_model.c_loadModelFile_FUN_00527ec0 ; 00528554
        ;   XREF to: 00527ec0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)
    ADD ESP,0x4                         ; 00528559
    LEA ESI,[ESP + 0xec]                ; 0052855c
    PUSH EAX                            ; 00528563
    LEA EDI,[ESP + 0xbc]                ; 00528564
    MOV EBX,EAX                         ; 0052856b
    CALL engine_model.c_getMRGLBounds_FUN_00528140 ; 0052856d
        ;   XREF to: 00528140 (UNCONDITIONAL_CALL)  ; SMRGLModelBounds * engine_model.c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended * mrgl_data, SMRGLModelBounds * output_bounds)
    ADD ESP,0x4                         ; 00528572
    JMP 0x03fc36dc                      ; 00528575
        ;   XREF to: 03fc36dc (UNCONDITIONAL_JUMP)  ; LAB_03fc36dc
    CALL engine_model.c_freeMRGLData_FUN_005280b0 ; 00528584
        ;   XREF to: 005280b0 (UNCONDITIONAL_CALL)  ; void engine_model.c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended * mrgl_data)
        ;   Label: LAB_00528584
    MOV ECX,0xd                         ; 00528589
    LEA EDI,[ESP + 0x54]                ; 0052858e
    LEA ESI,[ESP + 0xbc]                ; 00528592
    ADD ESP,0x4                         ; 00528599
    JMP 0x0052852b                      ; 0052859c
        ;   XREF to: 0052852b (UNCONDITIONAL_JUMP)  ; LAB_0052852b
    PUSH EAX                            ; 0052859e
        ;   Label: LAB_0052859e
    LEA ESI,[ESP + 0x88]                ; 0052859f
    LEA EDI,[ESP + 0x54]                ; 005285a6
    CALL engine_boss.c_modelStructNotSupported4_FUN_0041dbe0 ; 005285aa
        ;   XREF to: 0041dbe0 (UNCONDITIONAL_CALL)  ; void engine_boss.c_modelStructNotSupported4_FUN_0041dbe0(SMRGLHeaderExtended * mrgl_data)
    MOV ECX,0xd                         ; 005285af
    LEA ESI,[ESP + 0x88]                ; 005285b4
    ADD ESP,0x4                         ; 005285bb
    JMP 0x0052852b                      ; 005285be
        ;   XREF to: 0052852b (UNCONDITIONAL_JUMP)  ; LAB_0052852b
    MOV EDI,0x639bd7                    ; 005285c3 | = "..\\engine\\model.c"
        ;   Label: LAB_005285c3
    MOV EBP,0x172                       ; 005285c8
    PUSH 0x639be9                       ; 005285cd | = "Unable to read magnify!"
    MOV dword ptr [0x02f0ca48],EDI      ; 005285d2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005285d8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005285de
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005285e3
    JMP 0x0052818c                      ; 005285e6
        ;   XREF to: 0052818c (UNCONDITIONAL_JUMP)  ; LAB_0052818c
    MOV ECX,0xd                         ; 03fc3673
        ;   Label: LAB_03fc3673
    MOV EDI,dword ptr [ESP + 0x130]     ; 03fc3678
    LEA ESI,[ESP + 0x50]                ; 03fc367f
    MOV ECX,dword ptr [ESI]             ; 03fc3683
    MOV dword ptr [EDI],ECX             ; 03fc3685
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc3687
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc368a
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc368d
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3690
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3693
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3696
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3699
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc369c
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc369f
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc36a2
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc36a5
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc36a8
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc36ab
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc36ae
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc36b1
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc36b4
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc36b7
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc36ba
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc36bd
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc36c0
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc36c3
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc36c6
    MOV ECX,dword ptr [ESI + 0x30]      ; 03fc36c9
    MOV dword ptr [EDI + 0x30],ECX      ; 03fc36cc
    ADD ESI,0x34                        ; 03fc36cf
    ADD EDI,0x34                        ; 03fc36d2
    XOR ECX,ECX                         ; 03fc36d5
    JMP 0x0052853f                      ; 03fc36d7
        ;   XREF to: 0052853f (UNCONDITIONAL_JUMP)  ; LAB_0052853f
    MOV ECX,0xd                         ; 03fc36dc
        ;   Label: LAB_03fc36dc
    LEA ESI,[ESP + 0xec]                ; 03fc36e1
    PUSH EBX                            ; 03fc36e8
    MOV ECX,dword ptr [ESI]             ; 03fc36e9
    MOV dword ptr [EDI],ECX             ; 03fc36eb
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc36ed
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc36f0
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc36f3
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc36f6
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc36f9
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc36fc
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc36ff
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3702
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc3705
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc3708
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc370b
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc370e
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc3711
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc3714
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc3717
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc371a
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc371d
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3720
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc3723
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc3726
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc3729
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc372c
    MOV ECX,dword ptr [ESI + 0x30]      ; 03fc372f
    MOV dword ptr [EDI + 0x30],ECX      ; 03fc3732
    ADD ESI,0x34                        ; 03fc3735
    ADD EDI,0x34                        ; 03fc3738
    XOR ECX,ECX                         ; 03fc373b
    JMP 0x00528584                      ; 03fc373d
        ;   XREF to: 00528584 (UNCONDITIONAL_JUMP)  ; LAB_00528584

