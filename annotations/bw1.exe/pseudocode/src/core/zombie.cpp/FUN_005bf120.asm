; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_FUN_005bf120(SRenderVertex *vertex_buffer,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 at 00481b5c
;   engine_drender.cpp_FUN_00484790 at 0048486c
;
; Referenced Globals:
;   undefined4 DAT_0061b4c0
;   undefined4 DAT_00713a74
;   undefined4 DAT_00713a7c
;   undefined4 DAT_01bc0cd0
;   undefined4 DAT_01bc123c
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;   undefined4 DAT_01e7dac8
;   undefined4 DAT_02c9eb34
;   undefined4 DAT_02c9eb38
;   ... and 3 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
;   engine_prim.c_prepareDepthBuffer_FUN_0053dbc0
;   engine_prim.c_replaceWWithDepth_FUN_0053dd20
;   engine_special.cpp_drawPolygon_FUN_00582340
;   engine_special.cpp_FUN_00580127
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bf120
        ;   Label: core_zombie.cpp_FUN_005bf120
    PUSH ESI                            ; 005bf121
    PUSH EDI                            ; 005bf122
    PUSH EBP                            ; 005bf123
    SUB ESP,0x20                        ; 005bf124
    MOV EBP,dword ptr [0x02c9eb34]      ; 005bf127 | DAT_02c9eb34
    CMP dword ptr [0x0061b4c0],0x0      ; 005bf12d | DAT_0061b4c0
    JZ 0x005bf1e3                       ; 005bf134
        ;   XREF to: 005bf1e3 (CONDITIONAL_JUMP)  ; LAB_005bf1e3
    MOV EBX,dword ptr [ESP + 0x38]      ; 005bf13a
    MOV ECX,dword ptr [ESP + 0x34]      ; 005bf13e
    XOR ESI,ESI                         ; 005bf142
    TEST EBX,EBX                        ; 005bf144
    JLE 0x005bf1e3                      ; 005bf146
        ;   XREF to: 005bf1e3 (CONDITIONAL_JUMP)  ; LAB_005bf1e3
    MOV EDI,dword ptr [ESP + 0x38]      ; 005bf14c
    MOV AH,byte ptr [ECX + 0x13]        ; 005bf150
        ;   Label: LAB_005bf150
    MOV dword ptr [0x02c9eb34],EBP      ; 005bf153 | DAT_02c9eb34
    TEST AH,0x80                        ; 005bf159
    JZ 0x005bf1d1                       ; 005bf15c
        ;   XREF to: 005bf1d1 (CONDITIONAL_JUMP)  ; LAB_005bf1d1
    TEST byte ptr [0x01c51d18],0x6      ; 005bf15e | DAT_01c51d18
    JZ 0x005bf179                       ; 005bf165
        ;   XREF to: 005bf179 (CONDITIONAL_JUMP)  ; LAB_005bf179
    MOV EAX,0x7fffffff                  ; 005bf167
    MOV EDX,EAX                         ; 005bf16c
    MOV EBX,dword ptr [ECX + 0x8]       ; 005bf16e
    SAR EDX,0x1f                        ; 005bf171
    IDIV EBX                            ; 005bf174
    MOV dword ptr [ECX + 0xc],EAX       ; 005bf176
    MOV DH,byte ptr [0x01c51d18]        ; 005bf179 | DAT_01c51d18
        ;   Label: LAB_005bf179
    MOV dword ptr [0x02c9eb34],EBP      ; 005bf17f | DAT_02c9eb34
    TEST DH,0x1                         ; 005bf185
    JZ 0x005bf19c                       ; 005bf188
        ;   XREF to: 005bf19c (CONDITIONAL_JUMP)  ; LAB_005bf19c
    MOV EAX,0x7fffffff                  ; 005bf18a
    MOV EDX,EAX                         ; 005bf18f
    MOV EBX,dword ptr [ECX + 0x8]       ; 005bf191
    SAR EDX,0x1f                        ; 005bf194
    IDIV EBX                            ; 005bf197
    MOV dword ptr [ECX + 0xc],EAX       ; 005bf199
    MOV EDX,dword ptr [0x01c4eff8]      ; 005bf19c | DAT_01c4eff8
        ;   Label: LAB_005bf19c
    MOV EBX,dword ptr [ECX + 0x8]       ; 005bf1a2
    MOV EAX,dword ptr [ECX]             ; 005bf1a5
    IMUL EDX                            ; 005bf1a7
    IDIV EBX                            ; 005bf1a9
    MOV EDX,dword ptr [0x01c4f000]      ; 005bf1ab | DAT_01c4f000
    ADD EAX,EDX                         ; 005bf1b1
    MOV EBX,dword ptr [ECX + 0x8]       ; 005bf1b3
    MOV dword ptr [ECX + 0x10],EAX      ; 005bf1b6
    MOV EDX,dword ptr [0x01c4effc]      ; 005bf1b9 | DAT_01c4effc
    MOV EAX,dword ptr [ECX + 0x4]       ; 005bf1bf
    IMUL EDX                            ; 005bf1c2
    IDIV EBX                            ; 005bf1c4
    MOV EDX,dword ptr [0x01c4f004]      ; 005bf1c6 | DAT_01c4f004
    ADD EAX,EDX                         ; 005bf1cc
    MOV dword ptr [ECX + 0x14],EAX      ; 005bf1ce
    MOV EBP,dword ptr [0x02c9eb34]      ; 005bf1d1 | DAT_02c9eb34
        ;   Label: LAB_005bf1d1
    INC ESI                             ; 005bf1d7
    ADD ECX,0x30                        ; 005bf1d8
    CMP ESI,EDI                         ; 005bf1db
    JL 0x005bf150                       ; 005bf1dd
        ;   XREF to: 005bf150 (CONDITIONAL_JUMP)  ; LAB_005bf150
    MOV EAX,[0x00713a7c]                ; 005bf1e3 | DAT_00713a7c
        ;   Label: LAB_005bf1e3
    MOV dword ptr [0x02c9eb34],EBP      ; 005bf1e8 | DAT_02c9eb34
    TEST EAX,EAX                        ; 005bf1ee
    JNZ 0x005bf3cc                      ; 005bf1f0
        ;   XREF to: 005bf3cc (CONDITIONAL_JUMP)  ; LAB_005bf3cc
    MOV ECX,dword ptr [0x01e7dac8]      ; 005bf1f6 | DAT_01e7dac8
        ;   Label: LAB_005bf1f6
    INC ECX                             ; 005bf1fc
    MOV EBX,dword ptr [0x01c50948]      ; 005bf1fd | DAT_01c50948
    MOV dword ptr [0x01e7dac8],ECX      ; 005bf203 | DAT_01e7dac8
    TEST EBX,EBX                        ; 005bf209
    JZ 0x005bf21a                       ; 005bf20b
        ;   XREF to: 005bf21a (CONDITIONAL_JUMP)  ; LAB_005bf21a
    CMP dword ptr [0x00713a74],0x0      ; 005bf20d | DAT_00713a74
    JZ 0x005bf3ff                       ; 005bf214
        ;   XREF to: 005bf3ff (CONDITIONAL_JUMP)  ; LAB_005bf3ff
    MOV EAX,[0x01c51d18]                ; 005bf21a | DAT_01c51d18
        ;   Label: LAB_005bf21a
    MOV EBP,dword ptr [0x02c9eb34]      ; 005bf21f | DAT_02c9eb34
    CMP EAX,0x1                         ; 005bf225
    JNC 0x005bf454                      ; 005bf228
        ;   XREF to: 005bf454 (CONDITIONAL_JUMP)  ; LAB_005bf454
    MOV ECX,0x4b0                       ; 005bf22e
        ;   Label: LAB_005bf22e
    MOV ESI,dword ptr [ESP + 0x38]      ; 005bf233
    XOR EBX,EBX                         ; 005bf237
    XOR EBP,EBP                         ; 005bf239
    XOR EDI,EDI                         ; 005bf23b
    MOV dword ptr [0x02c9f03c],EBX      ; 005bf23d | DAT_02c9f03c
    MOV dword ptr [0x02c9f038],ECX      ; 005bf243 | DAT_02c9f038
    TEST ESI,ESI                        ; 005bf249
    JLE 0x005bf29b                      ; 005bf24b
        ;   XREF to: 005bf29b (CONDITIONAL_JUMP)  ; LAB_005bf29b
    MOV ESI,dword ptr [ESP + 0x38]      ; 005bf24d
        ;   Label: LAB_005bf24d
    LEA EAX,[EDI + 0x1]                 ; 005bf251
    CMP EAX,ESI                         ; 005bf254
    JL 0x005bf25a                       ; 005bf256
        ;   XREF to: 005bf25a (CONDITIONAL_JUMP)  ; LAB_005bf25a
    XOR EAX,EAX                         ; 005bf258
    IMUL EAX,EAX,0x30                   ; 005bf25a
        ;   Label: LAB_005bf25a
    MOV EDX,dword ptr [ESP + 0x34]      ; 005bf25d
    ADD EDX,EAX                         ; 005bf261
    IMUL EAX,EDI,0x30                   ; 005bf263
    MOV dword ptr [ESP + 0xc],EDX       ; 005bf266
    MOV EDX,dword ptr [ESP + 0x34]      ; 005bf26a
    ADD EDX,EAX                         ; 005bf26e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005bf270
    MOV dword ptr [ESP + 0x8],EDX       ; 005bf274
    MOV ESI,EDX                         ; 005bf278
    MOV dword ptr [ESP + 0x10],EAX      ; 005bf27a
    MOV EDX,dword ptr [EDX + 0x14]      ; 005bf27e
    MOV EAX,dword ptr [EAX + 0x14]      ; 005bf281
    SAR EDX,0x10                        ; 005bf284
    SAR EAX,0x10                        ; 005bf287
    CMP EDX,EAX                         ; 005bf28a
    JNZ 0x005bf460                      ; 005bf28c
        ;   XREF to: 005bf460 (CONDITIONAL_JUMP)  ; LAB_005bf460
    MOV ECX,dword ptr [ESP + 0x38]      ; 005bf292
        ;   Label: LAB_005bf292
    INC EDI                             ; 005bf296
    CMP EDI,ECX                         ; 005bf297
    JL 0x005bf24d                       ; 005bf299
        ;   XREF to: 005bf24d (CONDITIONAL_JUMP)  ; LAB_005bf24d
    MOV ESI,0x2c9eb38                   ; 005bf29b
        ;   Label: LAB_005bf29b
    MOV EDI,dword ptr [0x02c9f038]      ; 005bf2a0 | DAT_02c9f038
    XOR EBX,EBX                         ; 005bf2a6
    XOR EAX,EAX                         ; 005bf2a8
    MOV dword ptr [0x01bc123c],EBX      ; 005bf2aa | DAT_01bc123c
    TEST EBP,EBP                        ; 005bf2b0
    JLE 0x005bf56e                      ; 005bf2b2
        ;   XREF to: 005bf56e (CONDITIONAL_JUMP)  ; LAB_005bf56e
    CMP EDI,dword ptr [ESI]             ; 005bf2b8 | DAT_02c9eb38 | DAT_02c9eb88
        ;   Label: LAB_005bf2b8
    JNZ 0x005bf562                      ; 005bf2ba
        ;   XREF to: 005bf562 (CONDITIONAL_JUMP)  ; LAB_005bf562
    TEST ESI,ESI                        ; 005bf2c0
    JZ 0x005bf562                       ; 005bf2c2
        ;   XREF to: 005bf562 (CONDITIONAL_JUMP)  ; LAB_005bf562
    MOV dword ptr [ESP + 0x1c],ESI      ; 005bf2c8 | DAT_02c9eb38 | DAT_02c9eb88
        ;   Label: LAB_005bf2c8
    MOV dword ptr [0x02c9eb34],EBP      ; 005bf2cc | DAT_02c9eb34
    TEST ESI,ESI                        ; 005bf2d2
    JZ 0x005bf3be                       ; 005bf2d4
        ;   XREF to: 005bf3be (CONDITIONAL_JUMP)  ; LAB_005bf3be
    MOV EAX,0x2c9eb38                   ; 005bf2da
    MOV EBX,dword ptr [0x02c9f038]      ; 005bf2df | DAT_02c9f038
    MOV ECX,ESI                         ; 005bf2e5
    XOR EDX,EDX                         ; 005bf2e7
    TEST EBP,EBP                        ; 005bf2e9
    JLE 0x005bf581                      ; 005bf2eb
        ;   XREF to: 005bf581 (CONDITIONAL_JUMP)  ; LAB_005bf581
    CMP EBX,dword ptr [EAX]             ; 005bf2f1 | DAT_02c9eb38 | DAT_02c9eb88
        ;   Label: LAB_005bf2f1
    JNZ 0x005bf575                      ; 005bf2f3
        ;   XREF to: 005bf575 (CONDITIONAL_JUMP)  ; LAB_005bf575
    CMP EAX,ECX                         ; 005bf2f9
    JZ 0x005bf575                       ; 005bf2fb
        ;   XREF to: 005bf575 (CONDITIONAL_JUMP)  ; LAB_005bf575
    MOV dword ptr [ESP + 0x18],EAX      ; 005bf301 | DAT_02c9eb38 | DAT_02c9eb88
        ;   Label: LAB_005bf301
    MOV dword ptr [0x02c9eb34],EBP      ; 005bf305 | DAT_02c9eb34
    TEST EAX,EAX                        ; 005bf30b
    JZ 0x005bf3be                       ; 005bf30d
        ;   XREF to: 005bf3be (CONDITIONAL_JUMP)  ; LAB_005bf3be
    MOV EAX,[0x02c9f038]                ; 005bf313 | DAT_02c9f038
    MOV dword ptr [ESP + 0x14],EAX      ; 005bf318
        ;   Label: LAB_005bf318
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005bf31c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005bf320
    MOV EDI,dword ptr [EDX + 0x4]       ; 005bf324
    MOV dword ptr [0x02c9eb34],EBP      ; 005bf327 | DAT_02c9eb34
    CMP EAX,EDI                         ; 005bf32d
    JL 0x005bf36a                       ; 005bf32f
        ;   XREF to: 005bf36a (CONDITIONAL_JUMP)  ; LAB_005bf36a
    MOV ECX,dword ptr [ESP + 0x18]      ; 005bf331
    MOV EBX,EAX                         ; 005bf335
    MOV dword ptr [EDX],0xffffffff      ; 005bf337
    MOV EAX,0x2c9eb38                   ; 005bf33d
    XOR EDX,EDX                         ; 005bf342
    TEST EBP,EBP                        ; 005bf344
    JLE 0x005bf594                      ; 005bf346
        ;   XREF to: 005bf594 (CONDITIONAL_JUMP)  ; LAB_005bf594
    CMP EBX,dword ptr [EAX]             ; 005bf34c | DAT_02c9eb38 | DAT_02c9eb88
        ;   Label: LAB_005bf34c
    JNZ 0x005bf588                      ; 005bf34e
        ;   XREF to: 005bf588 (CONDITIONAL_JUMP)  ; LAB_005bf588
    CMP EAX,ECX                         ; 005bf354
    JZ 0x005bf588                       ; 005bf356
        ;   XREF to: 005bf588 (CONDITIONAL_JUMP)  ; LAB_005bf588
    MOV dword ptr [ESP + 0x1c],EAX      ; 005bf35c | DAT_02c9eb38 | DAT_02c9eb88
        ;   Label: LAB_005bf35c
    MOV dword ptr [0x02c9eb34],EBP      ; 005bf360 | DAT_02c9eb34
    TEST EAX,EAX                        ; 005bf366
    JZ 0x005bf3be                       ; 005bf368
        ;   XREF to: 005bf3be (CONDITIONAL_JUMP)  ; LAB_005bf3be
    MOV EDX,dword ptr [ESP + 0x18]      ; 005bf36a
        ;   Label: LAB_005bf36a
    MOV EAX,dword ptr [ESP + 0x14]      ; 005bf36e
    CMP EAX,dword ptr [EDX + 0x4]       ; 005bf372
    JL 0x005bf5ae                       ; 005bf375
        ;   XREF to: 005bf5ae (CONDITIONAL_JUMP)  ; LAB_005bf5ae
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005bf37b
    MOV EBP,dword ptr [0x02c9eb34]      ; 005bf37f | DAT_02c9eb34
    MOV EBX,EAX                         ; 005bf385
    MOV dword ptr [EDX],0xffffffff      ; 005bf387
    MOV EAX,0x2c9eb38                   ; 005bf38d
    XOR EDX,EDX                         ; 005bf392
    TEST EBP,EBP                        ; 005bf394
    JLE 0x005bf5a7                      ; 005bf396
        ;   XREF to: 005bf5a7 (CONDITIONAL_JUMP)  ; LAB_005bf5a7
    CMP EBX,dword ptr [EAX]             ; 005bf39c | DAT_02c9eb38 | DAT_02c9eb88
        ;   Label: LAB_005bf39c
    JNZ 0x005bf59b                      ; 005bf39e
        ;   XREF to: 005bf59b (CONDITIONAL_JUMP)  ; LAB_005bf59b
    CMP EAX,ECX                         ; 005bf3a4
    JZ 0x005bf59b                       ; 005bf3a6
        ;   XREF to: 005bf59b (CONDITIONAL_JUMP)  ; LAB_005bf59b
    MOV dword ptr [ESP + 0x18],EAX      ; 005bf3ac | DAT_02c9eb88 | DAT_02c9eb38
        ;   Label: LAB_005bf3ac
    MOV dword ptr [0x02c9eb34],EBP      ; 005bf3b0 | DAT_02c9eb34
    TEST EAX,EAX                        ; 005bf3b6
    JNZ 0x005bf5ae                      ; 005bf3b8
        ;   XREF to: 005bf5ae (CONDITIONAL_JUMP)  ; LAB_005bf5ae
    MOV EBP,dword ptr [0x02c9eb34]      ; 005bf3be | DAT_02c9eb34
        ;   Label: LAB_005bf3be
    ADD ESP,0x20                        ; 005bf3c4
    POP EBP                             ; 005bf3c7
    POP EDI                             ; 005bf3c8
    POP ESI                             ; 005bf3c9
    POP EBX                             ; 005bf3ca
    RET                                 ; 005bf3cb
    MOV EAX,dword ptr [ESP + 0x34]      ; 005bf3cc
        ;   Label: LAB_005bf3cc
    ADD EAX,0x60                        ; 005bf3d0
    PUSH EAX                            ; 005bf3d3
    MOV EAX,dword ptr [ESP + 0x38]      ; 005bf3d4
    ADD EAX,0x30                        ; 005bf3d8
    PUSH EAX                            ; 005bf3db
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005bf3dc
    PUSH EDX                            ; 005bf3e0
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 005bf3e1
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 005bf3e6
    TEST EAX,EAX                        ; 005bf3e9
    JNZ 0x005bf1f6                      ; 005bf3eb
        ;   XREF to: 005bf1f6 (CONDITIONAL_JUMP)  ; LAB_005bf1f6
    MOV EBP,dword ptr [0x02c9eb34]      ; 005bf3f1 | DAT_02c9eb34
    ADD ESP,0x20                        ; 005bf3f7
    POP EBP                             ; 005bf3fa
    POP EDI                             ; 005bf3fb
    POP ESI                             ; 005bf3fc
    POP EBX                             ; 005bf3fd
    RET                                 ; 005bf3fe
    MOV EDI,dword ptr [0x01c51d14]      ; 005bf3ff | DAT_01c51d14
        ;   Label: LAB_005bf3ff
    PUSH EDI                            ; 005bf405
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005bf406
    PUSH EAX                            ; 005bf40a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005bf40b
    PUSH EDX                            ; 005bf40f
    CALL engine_special.cpp_drawPolygon_FUN_00582340 ; 005bf410
        ;   XREF to: 00582340 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon_FUN_00582340(SRenderVertex * vertices, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 005bf415
    MOV EBP,dword ptr [0x02c9eb34]      ; 005bf418 | DAT_02c9eb34
    ADD ESP,0x20                        ; 005bf41e
    POP EBP                             ; 005bf421
    POP EDI                             ; 005bf422
    POP ESI                             ; 005bf423
    POP EBX                             ; 005bf424
    RET                                 ; 005bf425
    MOV EAX,dword ptr [ESP + 0x38]      ; 005bf426
        ;   Label: LAB_005bf426
    PUSH EAX                            ; 005bf42a
    MOV EDX,dword ptr [ESP + 0x38]      ; 005bf42b
    PUSH EDX                            ; 005bf42f
    CALL engine_prim.c_prepareDepthBuffer_FUN_0053dbc0 ; 005bf430
        ;   XREF to: 0053dbc0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_0053dbc0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005bf435
    JMP 0x005bf22e                      ; 005bf438
        ;   XREF to: 005bf22e (UNCONDITIONAL_JUMP)  ; LAB_005bf22e
    MOV EDI,dword ptr [ESP + 0x38]      ; 005bf43d
        ;   Label: LAB_005bf43d
    PUSH EDI                            ; 005bf441
    MOV EBP,dword ptr [ESP + 0x38]      ; 005bf442
    PUSH EBP                            ; 005bf446
    CALL engine_prim.c_replaceWWithDepth_FUN_0053dd20 ; 005bf447
        ;   XREF to: 0053dd20 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_0053dd20(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005bf44c
    JMP 0x005bf22e                      ; 005bf44f
        ;   XREF to: 005bf22e (UNCONDITIONAL_JUMP)  ; LAB_005bf22e
    JBE 0x005bf426                      ; 005bf454
        ;   XREF to: 005bf426 (CONDITIONAL_JUMP)  ; LAB_005bf426
        ;   Label: LAB_005bf454
    CMP EAX,0x6                         ; 005bf456
    JZ 0x005bf43d                       ; 005bf459
        ;   XREF to: 005bf43d (CONDITIONAL_JUMP)  ; LAB_005bf43d
    JMP 0x005bf22e                      ; 005bf45b
        ;   XREF to: 005bf22e (UNCONDITIONAL_JUMP)  ; LAB_005bf22e
    MOV ECX,ESI                         ; 005bf460
        ;   Label: LAB_005bf460
    MOV ECX,dword ptr [ECX + 0x14]      ; 005bf462
    MOV EBX,dword ptr [ESP + 0xc]       ; 005bf465
    CMP ECX,dword ptr [EBX + 0x14]      ; 005bf469
    JLE 0x005bf47e                      ; 005bf46c
        ;   XREF to: 005bf47e (CONDITIONAL_JUMP)  ; LAB_005bf47e
    MOV ECX,dword ptr [ESP + 0x8]       ; 005bf46e
    MOV ESI,EBX                         ; 005bf472
    MOV dword ptr [ESP + 0x10],ECX      ; 005bf474
    MOV ECX,EDX                         ; 005bf478
    MOV EDX,EAX                         ; 005bf47a
    MOV EAX,ECX                         ; 005bf47c
    IMUL EBX,EBP,0x50                   ; 005bf47e
        ;   Label: LAB_005bf47e
    ADD EBX,0x2c9eb38                   ; 005bf481
    MOV dword ptr [EBX],EDX             ; 005bf487 | DAT_02c9eb38
    MOV ECX,dword ptr [0x02c9f038]      ; 005bf489 | DAT_02c9f038
    MOV dword ptr [EBX + 0x4],EAX       ; 005bf48f
    CMP EDX,ECX                         ; 005bf492
    JGE 0x005bf49c                      ; 005bf494
        ;   XREF to: 005bf49c (CONDITIONAL_JUMP)  ; LAB_005bf49c
    MOV dword ptr [0x02c9f038],EDX      ; 005bf496 | DAT_02c9f038
    CMP EAX,dword ptr [0x02c9f03c]      ; 005bf49c | DAT_02c9f03c
        ;   Label: LAB_005bf49c
    JLE 0x005bf4a9                      ; 005bf4a2
        ;   XREF to: 005bf4a9 (CONDITIONAL_JUMP)  ; LAB_005bf4a9
    MOV [0x02c9f03c],EAX                ; 005bf4a4 | DAT_02c9f03c
    MOV ECX,dword ptr [ESP + 0x10]      ; 005bf4a9
        ;   Label: LAB_005bf4a9
    MOV EAX,dword ptr [ESI + 0x14]      ; 005bf4ad
    MOV ECX,dword ptr [ECX + 0x14]      ; 005bf4b0
    SUB ECX,EAX                         ; 005bf4b3
    CMP ECX,0x10000                     ; 005bf4b5
    JNC 0x005bf552                      ; 005bf4bb
        ;   XREF to: 005bf552 (CONDITIONAL_JUMP)  ; LAB_005bf552
    XOR ECX,ECX                         ; 005bf4c1
    MOV EAX,dword ptr [ESI + 0x14]      ; 005bf4c3
        ;   Label: LAB_005bf4c3
    AND EAX,0xffff                      ; 005bf4c6
    XOR AX,0xffff                       ; 005bf4cb
    MOV dword ptr [ESP],EAX             ; 005bf4cf
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bf4d2
    MOV EDX,dword ptr [ESI + 0x10]      ; 005bf4d6
    MOV EAX,dword ptr [EAX + 0x10]      ; 005bf4d9
    SUB EAX,EDX                         ; 005bf4dc
    MOV EDX,EAX                         ; 005bf4de
    MOV EAX,ECX                         ; 005bf4e0
    MOV dword ptr [0x02c9eb34],EBP      ; 005bf4e2 | DAT_02c9eb34
    IMUL EDX                            ; 005bf4e8
    SHRD EAX,EDX,0x10                   ; 005bf4ea
    MOV EDX,EAX                         ; 005bf4ee
    MOV dword ptr [EBX + 0xc],EAX       ; 005bf4f0
    MOV EAX,dword ptr [ESP]             ; 005bf4f3
    IMUL EDX                            ; 005bf4f6
    SHRD EAX,EDX,0x10                   ; 005bf4f8
    MOV dword ptr [ESP + 0x4],EAX       ; 005bf4fc
    MOV EDX,dword ptr [ESP + 0x4]       ; 005bf500
    MOV EAX,dword ptr [ESI + 0x10]      ; 005bf504
    ADD EAX,EDX                         ; 005bf507
    MOV dword ptr [EBX + 0x8],EAX       ; 005bf509
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bf50c
    MOV EDX,dword ptr [ESI + 0x8]       ; 005bf510
    MOV EAX,dword ptr [EAX + 0x8]       ; 005bf513
    SUB EAX,EDX                         ; 005bf516
    MOV EDX,EAX                         ; 005bf518
    SHL EDX,0x8                         ; 005bf51a
    MOV EAX,ECX                         ; 005bf51d
    IMUL EDX                            ; 005bf51f
    SHRD EAX,EDX,0x10                   ; 005bf521
    MOV EDX,EAX                         ; 005bf525
    MOV dword ptr [EBX + 0x2c],EAX      ; 005bf527
    MOV EAX,dword ptr [ESP]             ; 005bf52a
    MOV ECX,dword ptr [ESI + 0x8]       ; 005bf52d
    MOV ESI,dword ptr [0x01bc0cd0]      ; 005bf530 | DAT_01bc0cd0
    SHL ECX,0x8                         ; 005bf536
    IMUL EDX                            ; 005bf539
    SHRD EAX,EDX,0x10                   ; 005bf53b
    SUB ECX,ESI                         ; 005bf53f
    MOV EBP,dword ptr [0x02c9eb34]      ; 005bf541 | DAT_02c9eb34
    ADD ECX,EAX                         ; 005bf547
    INC EBP                             ; 005bf549
    MOV dword ptr [EBX + 0x28],ECX      ; 005bf54a
    JMP 0x005bf292                      ; 005bf54d
        ;   XREF to: 005bf292 (UNCONDITIONAL_JUMP)  ; LAB_005bf292
    MOV EAX,0xffffffff                  ; 005bf552
        ;   Label: LAB_005bf552
    XOR EDX,EDX                         ; 005bf557
    DIV ECX                             ; 005bf559
    MOV ECX,EAX                         ; 005bf55b
    JMP 0x005bf4c3                      ; 005bf55d
        ;   XREF to: 005bf4c3 (UNCONDITIONAL_JUMP)  ; LAB_005bf4c3
    INC EAX                             ; 005bf562
        ;   Label: LAB_005bf562
    ADD ESI,0x50                        ; 005bf563
    CMP EAX,EBP                         ; 005bf566
    JL 0x005bf2b8                       ; 005bf568
        ;   XREF to: 005bf2b8 (CONDITIONAL_JUMP)  ; LAB_005bf2b8
    XOR ESI,ESI                         ; 005bf56e
        ;   Label: LAB_005bf56e
    JMP 0x005bf2c8                      ; 005bf570
        ;   XREF to: 005bf2c8 (UNCONDITIONAL_JUMP)  ; LAB_005bf2c8
    INC EDX                             ; 005bf575
        ;   Label: LAB_005bf575
    ADD EAX,0x50                        ; 005bf576
    CMP EDX,EBP                         ; 005bf579
    JL 0x005bf2f1                       ; 005bf57b
        ;   XREF to: 005bf2f1 (CONDITIONAL_JUMP)  ; LAB_005bf2f1
    XOR EAX,EAX                         ; 005bf581
        ;   Label: LAB_005bf581
    JMP 0x005bf301                      ; 005bf583
        ;   XREF to: 005bf301 (UNCONDITIONAL_JUMP)  ; LAB_005bf301
    INC EDX                             ; 005bf588
        ;   Label: LAB_005bf588
    ADD EAX,0x50                        ; 005bf589
    CMP EDX,EBP                         ; 005bf58c
    JL 0x005bf34c                       ; 005bf58e
        ;   XREF to: 005bf34c (CONDITIONAL_JUMP)  ; LAB_005bf34c
    XOR EAX,EAX                         ; 005bf594
        ;   Label: LAB_005bf594
    JMP 0x005bf35c                      ; 005bf596
        ;   XREF to: 005bf35c (UNCONDITIONAL_JUMP)  ; LAB_005bf35c
    INC EDX                             ; 005bf59b
        ;   Label: LAB_005bf59b
    ADD EAX,0x50                        ; 005bf59c | DAT_02c9eb88
    CMP EDX,EBP                         ; 005bf59f
    JL 0x005bf39c                       ; 005bf5a1
        ;   XREF to: 005bf39c (CONDITIONAL_JUMP)  ; LAB_005bf39c
    XOR EAX,EAX                         ; 005bf5a7
        ;   Label: LAB_005bf5a7
    JMP 0x005bf3ac                      ; 005bf5a9
        ;   XREF to: 005bf3ac (UNCONDITIONAL_JUMP)  ; LAB_005bf3ac
    MOV EDI,dword ptr [ESP + 0x18]      ; 005bf5ae
        ;   Label: LAB_005bf5ae
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005bf5b2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005bf5b6
    CALL engine_special.cpp_FUN_00580127 ; 005bf5ba
        ;   XREF to: 00580127 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00580127()
    CMP dword ptr [0x01bc123c],0x0      ; 005bf5bf | DAT_01bc123c
    JNZ 0x005bf3be                      ; 005bf5c6
        ;   XREF to: 005bf3be (CONDITIONAL_JUMP)  ; LAB_005bf3be
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005bf5cc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005bf5d0
    MOV ECX,dword ptr [EDX + 0x8]       ; 005bf5d4
    MOV EAX,dword ptr [EAX + 0xc]       ; 005bf5d7
    MOV EBX,dword ptr [EDX + 0x28]      ; 005bf5da
    ADD ECX,EAX                         ; 005bf5dd
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005bf5df
    MOV dword ptr [EDX + 0x8],ECX       ; 005bf5e2
    ADD EBX,EAX                         ; 005bf5e5
    MOV EAX,dword ptr [ESP + 0x18]      ; 005bf5e7
    MOV dword ptr [EDX + 0x28],EBX      ; 005bf5eb
    MOV EDX,dword ptr [ESP + 0x18]      ; 005bf5ee
    MOV EAX,dword ptr [EAX + 0xc]       ; 005bf5f2
    MOV ESI,dword ptr [EDX + 0x8]       ; 005bf5f5
    MOV EDI,dword ptr [EDX + 0x28]      ; 005bf5f8
    ADD ESI,EAX                         ; 005bf5fb
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005bf5fd
    MOV EBP,dword ptr [0x02c9eb34]      ; 005bf600 | DAT_02c9eb34
    ADD EDI,EAX                         ; 005bf606
    MOV EAX,dword ptr [ESP + 0x14]      ; 005bf608
    MOV dword ptr [EDX + 0x8],ESI       ; 005bf60c
    INC EAX                             ; 005bf60f
    MOV dword ptr [EDX + 0x28],EDI      ; 005bf610
    JMP 0x005bf318                      ; 005bf613
        ;   XREF to: 005bf318 (UNCONDITIONAL_JUMP)  ; LAB_005bf318

