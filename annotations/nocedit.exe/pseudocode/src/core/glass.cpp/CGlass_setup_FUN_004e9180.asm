; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_setup_FUN_004e9180(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0xd8]:4  local_d8
; float            Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; CVector3f        Stack[-0xcc]:12  local_cc
; CVector3f        Stack[-0xc0]:12  local_c0
; CVector3f        Stack[-0xb4]:12  local_b4
; CVector3f        Stack[-0xa8]:12  local_a8
; CVector3f        Stack[-0x9c]:12  local_9c
; CVector3f        Stack[-0x90]:12  local_90
; CVector3f        Stack[-0x84]:12  local_84
; CVector3f        Stack[-0x78]:12  local_78
; CVector3f        Stack[-0x6c]:12  local_6c
; CVector3f        Stack[-0x60]:12  local_60
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; float            Stack[-0x30]:4  local_30
; SMRGLPrimitiveQuad * Stack[-0x2c]:4  local_2c
; CVector3f *      Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_glass_cpp_0062df7f
;   TerminatedCString s_CGlass_setup_Too_many_ve_0062df91
;   TerminatedCString s_none_0062dfc6
;   TerminatedCString s_s_7YEARS_RAW_0062dfcb
;   TerminatedCString s_factwin_raw_0062dfd6
;   TerminatedCString s_factwinx_raw_0062dfe2
;   undefined4 s_actwinx.raw_0062dfe3
;   undefined4 s_ctwinx.raw_0062dfe4
;   undefined4 s_factwinx_raw_0062dfe2+3
;   TerminatedCString s_dockwin_raw_0062dfef
;   TerminatedCString s_dockwinx_raw_0062dffb
;   undefined4 s_ockwinx.raw_0062dffc
;   undefined4 s_ckwinx.raw_0062dffd
;   undefined4 s_dockwinx_raw_0062dffb+3
;   TerminatedCString s_windo10_raw_0062e008
;   ... and 17 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mirror.cpp_CMirror_setupCorners_FUN_00521400
;   crt_math.c_round_FUN_005fe6b0
;   crt_string.c__strcmp_FUN_005fef20
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9180
        ;   Label: core_glass.cpp_CGlass_setup_FUN_004e9180
    PUSH ESI                            ; 004e9181
    PUSH EDI                            ; 004e9182
    PUSH EBP                            ; 004e9183
    MOV EBP,ESP                         ; 004e9184
    SUB ESP,0xc8                        ; 004e9186
    AND ESP,0xfffffff8                  ; 004e918c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e918f
    PUSH EBX                            ; 004e9192
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004e9193
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e9198
    LEA EAX,[EBX + 0x164]               ; 004e919b
    PUSH EAX                            ; 004e91a1
    MOV EDX,dword ptr [0x006703ec]      ; 004e91a2 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004e91a8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004e91a9
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ECX,dword ptr [EBX + 0x1e8]     ; 004e91ae
    ADD ESP,0x8                         ; 004e91b4
    TEST ECX,ECX                        ; 004e91b7
    JNZ 0x004e934d                      ; 004e91b9
        ;   XREF to: 004e934d (CONDITIONAL_JUMP)  ; LAB_004e934d
    FLD float ptr [EBX + 0x158]         ; 004e91bf
        ;   Label: LAB_004e91bf
    FMUL double ptr [0x0062e041]        ; 004e91c5 | DOUBLE_0062e041
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e91cb
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc4]        ; 004e91d0
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004e91d7
    INC EAX                             ; 004e91de
    MOV dword ptr [EBX + 0xb2c],EAX     ; 004e91df
    CMP EAX,0x4                         ; 004e91e5
    JLE 0x004e91f4                      ; 004e91e8
        ;   XREF to: 004e91f4 (CONDITIONAL_JUMP)  ; LAB_004e91f4
    MOV dword ptr [EBX + 0xb2c],0x4     ; 004e91ea
    FLD float ptr [EBX + 0x15c]         ; 004e91f4
        ;   Label: LAB_004e91f4
    FMUL double ptr [0x0062e041]        ; 004e91fa | DOUBLE_0062e041
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e9200
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc4]        ; 004e9205
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004e920c
    INC EAX                             ; 004e9213
    MOV dword ptr [EBX + 0xb30],EAX     ; 004e9214
    CMP EAX,0x4                         ; 004e921a
    JLE 0x004e9229                      ; 004e921d
        ;   XREF to: 004e9229 (CONDITIONAL_JUMP)  ; LAB_004e9229
    MOV dword ptr [EBX + 0xb30],0x4     ; 004e921f
    MOV EAX,dword ptr [EBX + 0xb30]     ; 004e9229
        ;   Label: LAB_004e9229
    MOV EDX,dword ptr [EBX + 0xb2c]     ; 004e922f
    INC EAX                             ; 004e9235
    INC EDX                             ; 004e9236
    IMUL EDX,EAX                        ; 004e9237
    MOV ESI,dword ptr [EBX + 0xb30]     ; 004e923a
    MOV EAX,dword ptr [EBX + 0xb2c]     ; 004e9240
    IMUL EAX,ESI                        ; 004e9246
    MOV dword ptr [EBX + 0xb34],EDX     ; 004e9249
    MOV EDI,dword ptr [EBX + 0xb34]     ; 004e924f
    MOV dword ptr [EBX + 0xb38],EAX     ; 004e9255
    CMP EDI,0x19                        ; 004e925b
    JLE 0x004e953e                      ; 004e925e
        ;   XREF to: 004e953e (CONDITIONAL_JUMP)  ; LAB_004e953e
    MOV ESI,dword ptr [EBX + 0xb38]     ; 004e9264
        ;   Label: LAB_004e9264
    PUSH ESI                            ; 004e926a
    MOV EDI,dword ptr [EBX + 0xb34]     ; 004e926b
    PUSH EDI                            ; 004e9271
    MOV EDX,0x62df7f                    ; 004e9272 | = "..\\core\\glass.cpp"
    MOV ECX,0x86                        ; 004e9277
    PUSH 0x62df91                       ; 004e927c | = "CGlass::setup - Too many verticies(%d..."
    MOV dword ptr [0x02f0ca48],EDX      ; 004e9281 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004e9287 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004e928d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 004e9292
    FILD dword ptr [EBX + 0xb2c]        ; 004e9295
        ;   Label: LAB_004e9295
    FDIVR float ptr [EBX + 0x158]       ; 004e929b
    FILD dword ptr [EBX + 0xb30]        ; 004e92a1
    FDIVR float ptr [EBX + 0x15c]       ; 004e92a7
    XOR EAX,EAX                         ; 004e92ad
    XOR EDI,EDI                         ; 004e92af
    MOV dword ptr [ESP + 0xb8],EAX      ; 004e92b1
    FXCH                                ; 004e92b8
    FSTP float ptr [ESP + 0xb4]         ; 004e92ba
    MOV dword ptr [ESP],EAX             ; 004e92c1
    MOV dword ptr [ESP + 0x4],EAX       ; 004e92c4
    MOV dword ptr [ESP + 0x8],EAX       ; 004e92c8
    LEA EAX,[EBX + 0x38c]               ; 004e92cc
    FSTP float ptr [ESP + 0xa8]         ; 004e92d2
    MOV dword ptr [ESP + 0xb0],EAX      ; 004e92d9
    MOV EAX,dword ptr [EBX + 0xb30]     ; 004e92e0
        ;   Label: LAB_004e92e0
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004e92e6
    INC EAX                             ; 004e92ed
    CMP EAX,EDX                         ; 004e92ee
    JLE 0x004e9602                      ; 004e92f0
        ;   XREF to: 004e9602 (CONDITIONAL_JUMP)  ; LAB_004e9602
    IMUL EDX,EDI,0xc                    ; 004e92f6
    FLD float ptr [EBX + 0x158]         ; 004e92f9
    FCHS                                ; 004e92ff
    FMUL double ptr [0x0062e041]        ; 004e9301 | DOUBLE_0062e041
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004e9307
    XOR ESI,ESI                         ; 004e930e
    FSTP float ptr [ESP]                ; 004e9310
    LEA ECX,[EDI*0x4 + 0x0]             ; 004e9313
    ADD EDX,EAX                         ; 004e931a
    ADD ECX,EBX                         ; 004e931c
    MOV EAX,dword ptr [EBX + 0xb2c]     ; 004e931e
        ;   Label: LAB_004e931e
    INC EAX                             ; 004e9324
    CMP ESI,EAX                         ; 004e9325
    JL 0x004e954c                       ; 004e9327
        ;   XREF to: 004e954c (CONDITIONAL_JUMP)  ; LAB_004e954c
    FLD float ptr [ESP + 0x4]           ; 004e932d
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004e9331
    FADD float ptr [ESP + 0xa8]         ; 004e9338
    INC EDX                             ; 004e933f
    FSTP float ptr [ESP + 0x4]          ; 004e9340
    MOV dword ptr [ESP + 0xb8],EDX      ; 004e9344
    JMP 0x004e92e0                      ; 004e934b
        ;   XREF to: 004e92e0 (UNCONDITIONAL_JUMP)  ; LAB_004e92e0
    XOR ESI,ESI                         ; 004e934d
        ;   Label: LAB_004e934d
    LEA EAX,[ESP + 0x54]                ; 004e934f
    MOV dword ptr [ESP + 0x5c],ESI      ; 004e9353
    MOV dword ptr [ESP + 0x58],ESI      ; 004e9357
    MOV dword ptr [ESP + 0x54],ESI      ; 004e935b
    PUSH EAX                            ; 004e935f
    FLD float ptr [EBX + 0x158]         ; 004e9360
    LEA EAX,[ESP + 0x34]                ; 004e9366
    FMUL float ptr [0x0062e03d]         ; 004e936a | FLOAT_0062e03d
    PUSH EAX                            ; 004e9370
    LEA EAX,[EBX + 0x3c]                ; 004e9371
    PUSH EAX                            ; 004e9374
    FSTP float ptr [ESP + 0x60]         ; 004e9375
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004e9379
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x20]                ; 004e937e
    FLD float ptr [EDX]                 ; 004e9381
    FADD float ptr [EAX]                ; 004e9383
    ADD ESP,0xc                         ; 004e9385
    FSTP float ptr [ESP + 0x60]         ; 004e9388
    FLD float ptr [EDX + 0x4]           ; 004e938c
    FADD float ptr [EAX + 0x4]          ; 004e938f
    FSTP float ptr [ESP + 0x64]         ; 004e9392
    FLD float ptr [EDX + 0x8]           ; 004e9396
    LEA EDX,[ESP + 0x60]                ; 004e9399
    FADD float ptr [EAX + 0x8]          ; 004e939d
    LEA EAX,[ESP + 0x90]                ; 004e93a0
    FSTP float ptr [ESP + 0x68]         ; 004e93a7
    CMP EAX,EDX                         ; 004e93ab
    JZ 0x004e93d0                       ; 004e93ad
        ;   XREF to: 004e93d0 (CONDITIONAL_JUMP)  ; LAB_004e93d0
    MOV EAX,dword ptr [ESP + 0x60]      ; 004e93af
    MOV dword ptr [ESP + 0x90],EAX      ; 004e93b3
    MOV EAX,dword ptr [ESP + 0x64]      ; 004e93ba
    MOV dword ptr [ESP + 0x94],EAX      ; 004e93be
    MOV EAX,dword ptr [ESP + 0x68]      ; 004e93c5
    MOV dword ptr [ESP + 0x98],EAX      ; 004e93c9
    XOR byte ptr [ESP + 0x57],0x80      ; 004e93d0
        ;   Label: LAB_004e93d0
    LEA EAX,[ESP + 0x54]                ; 004e93d5
    PUSH EAX                            ; 004e93d9
    LEA EAX,[ESP + 0x88]                ; 004e93da
    PUSH EAX                            ; 004e93e1
    LEA EAX,[EBX + 0x3c]                ; 004e93e2
    PUSH EAX                            ; 004e93e5
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004e93e6
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x20]                ; 004e93eb
    FLD float ptr [EDX]                 ; 004e93ee
    FADD float ptr [EAX]                ; 004e93f0
    ADD ESP,0xc                         ; 004e93f2
    FSTP float ptr [ESP + 0x9c]         ; 004e93f5
    FLD float ptr [EDX + 0x4]           ; 004e93fc
    FADD float ptr [EAX + 0x4]          ; 004e93ff
    FSTP float ptr [ESP + 0xa0]         ; 004e9402
    FLD float ptr [EDX + 0x8]           ; 004e9409
    LEA EDX,[ESP + 0x78]                ; 004e940c
    FADD float ptr [EAX + 0x8]          ; 004e9410
    LEA EAX,[ESP + 0x9c]                ; 004e9413
    FSTP float ptr [ESP + 0xa4]         ; 004e941a
    CMP EDX,EAX                         ; 004e9421
    JZ 0x004e9449                       ; 004e9423
        ;   XREF to: 004e9449 (CONDITIONAL_JUMP)  ; LAB_004e9449
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004e9425
    MOV dword ptr [ESP + 0x78],EAX      ; 004e942c
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004e9430
    MOV dword ptr [ESP + 0x7c],EAX      ; 004e9437
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004e943b
    MOV dword ptr [ESP + 0x80],EAX      ; 004e9442
    MOV EAX,dword ptr [EBX + 0x15c]     ; 004e9449
        ;   Label: LAB_004e9449
    MOV dword ptr [ESP + 0x58],EAX      ; 004e944f
    LEA EAX,[ESP + 0x54]                ; 004e9453
    PUSH EAX                            ; 004e9457
    LEA EAX,[ESP + 0x70]                ; 004e9458
    PUSH EAX                            ; 004e945c
    LEA EAX,[EBX + 0x3c]                ; 004e945d
    PUSH EAX                            ; 004e9460
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004e9461
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x20]                ; 004e9466
    FLD float ptr [EDX]                 ; 004e9469
    FADD float ptr [EAX]                ; 004e946b
    ADD ESP,0xc                         ; 004e946d
    FSTP float ptr [ESP + 0xc]          ; 004e9470
    FLD float ptr [EDX + 0x4]           ; 004e9474
    FADD float ptr [EAX + 0x4]          ; 004e9477
    FSTP float ptr [ESP + 0x10]         ; 004e947a
    FLD float ptr [EDX + 0x8]           ; 004e947e
    LEA EDX,[ESP + 0x18]                ; 004e9481
    FADD float ptr [EAX + 0x8]          ; 004e9485
    LEA EAX,[ESP + 0xc]                 ; 004e9488
    FSTP float ptr [ESP + 0x14]         ; 004e948c
    CMP EDX,EAX                         ; 004e9490
    JZ 0x004e94ac                       ; 004e9492
        ;   XREF to: 004e94ac (CONDITIONAL_JUMP)  ; LAB_004e94ac
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e9494
    MOV dword ptr [ESP + 0x18],EAX      ; 004e9498
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e949c
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e94a0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e94a4
    MOV dword ptr [ESP + 0x20],EAX      ; 004e94a8
    LEA EAX,[ESP + 0x54]                ; 004e94ac
        ;   Label: LAB_004e94ac
    PUSH EAX                            ; 004e94b0
    LEA EAX,[ESP + 0x40]                ; 004e94b1
    MOV DL,byte ptr [ESP + 0x5b]        ; 004e94b5
    PUSH EAX                            ; 004e94b9
    LEA EAX,[EBX + 0x3c]                ; 004e94ba
    XOR DL,0x80                         ; 004e94bd
    PUSH EAX                            ; 004e94c0
    MOV byte ptr [ESP + 0x63],DL        ; 004e94c1
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004e94c5
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x20]                ; 004e94ca
    FLD float ptr [EDX]                 ; 004e94cd
    FADD float ptr [EAX]                ; 004e94cf
    ADD ESP,0xc                         ; 004e94d1
    FSTP float ptr [ESP + 0x48]         ; 004e94d4
    FLD float ptr [EDX + 0x4]           ; 004e94d8
    FADD float ptr [EAX + 0x4]          ; 004e94db
    FSTP float ptr [ESP + 0x4c]         ; 004e94de
    FLD float ptr [EDX + 0x8]           ; 004e94e2
    LEA EDX,[ESP + 0x24]                ; 004e94e5
    FADD float ptr [EAX + 0x8]          ; 004e94e9
    LEA EAX,[ESP + 0x48]                ; 004e94ec
    FSTP float ptr [ESP + 0x50]         ; 004e94f0
    CMP EDX,EAX                         ; 004e94f4
    JZ 0x004e9510                       ; 004e94f6
        ;   XREF to: 004e9510 (CONDITIONAL_JUMP)  ; LAB_004e9510
    MOV EAX,dword ptr [ESP + 0x48]      ; 004e94f8
    MOV dword ptr [ESP + 0x24],EAX      ; 004e94fc
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004e9500
    MOV dword ptr [ESP + 0x28],EAX      ; 004e9504
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e9508
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e950c
    LEA EAX,[ESP + 0x24]                ; 004e9510
        ;   Label: LAB_004e9510
    PUSH EAX                            ; 004e9514
    LEA EAX,[ESP + 0x1c]                ; 004e9515
    PUSH EAX                            ; 004e9519
    LEA EAX,[ESP + 0x80]                ; 004e951a
    PUSH EAX                            ; 004e9521
    LEA EAX,[ESP + 0x9c]                ; 004e9522
    PUSH EAX                            ; 004e9529
    LEA EAX,[EBX + 0x1ec]               ; 004e952a
    PUSH EAX                            ; 004e9530
    CALL core_mirror.cpp_CMirror_setupCorners_FUN_00521400 ; 004e9531
        ;   XREF to: 00521400 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_setupCorners_FUN_00521400(CMirror * this_ptr, CVector3f * corner1, CVector3f * corner2, CVector3f * corner3, ...)
    ADD ESP,0x14                        ; 004e9536
    JMP 0x004e91bf                      ; 004e9539
        ;   XREF to: 004e91bf (UNCONDITIONAL_JUMP)  ; LAB_004e91bf
    CMP EAX,0x10                        ; 004e953e
        ;   Label: LAB_004e953e
    JG 0x004e9264                       ; 004e9541
        ;   XREF to: 004e9264 (CONDITIONAL_JUMP)  ; LAB_004e9264
    JMP 0x004e9295                      ; 004e9547
        ;   XREF to: 004e9295 (UNCONDITIONAL_JUMP)  ; LAB_004e9295
    MOV EAX,ESP                         ; 004e954c
        ;   Label: LAB_004e954c
    CMP EDX,EAX                         ; 004e954e
    JZ 0x004e9565                       ; 004e9550
        ;   XREF to: 004e9565 (CONDITIONAL_JUMP)  ; LAB_004e9565
    MOV EAX,dword ptr [ESP]             ; 004e9552
    MOV dword ptr [EDX],EAX             ; 004e9555
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e9557
    MOV dword ptr [EDX + 0x4],EAX       ; 004e955b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e955e
    MOV dword ptr [EDX + 0x8],EAX       ; 004e9562
    MOV dword ptr [ESP + 0xc4],ESI      ; 004e9565
        ;   Label: LAB_004e9565
    FILD dword ptr [EBX + 0xb2c]        ; 004e956c
    FILD dword ptr [ESP + 0xc4]         ; 004e9572
    FDIVRP                              ; 004e9579
    FLD double ptr [0x0062e049]         ; 004e957b | DOUBLE_0062e049
    FXCH                                ; 004e9581
    FMUL ST1                            ; 004e9583
    FLD double ptr [0x0062e051]         ; 004e9585 | DOUBLE_0062e051
    FXCH                                ; 004e958b
    FADD ST0,ST1                        ; 004e958d
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e958f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc4]        ; 004e9594
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004e959b
    MOV dword ptr [ECX + 0x5e4],EAX     ; 004e95a2
    MOV EAX,dword ptr [EBX + 0xb30]     ; 004e95a8
    SUB EAX,dword ptr [ESP + 0xb8]      ; 004e95ae
    MOV dword ptr [ESP + 0xc4],EAX      ; 004e95b5
    FILD dword ptr [ESP + 0xc4]         ; 004e95bc
    FILD dword ptr [EBX + 0xb30]        ; 004e95c3
    FDIVP                               ; 004e95c9
    FMULP ST2                           ; 004e95cb
    ADD ECX,0x4                         ; 004e95cd
    FADDP                               ; 004e95d0
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e95d2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc4]        ; 004e95d7
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004e95de
    ADD EDX,0xc                         ; 004e95e5
    MOV dword ptr [ECX + 0x644],EAX     ; 004e95e8
    INC EDI                             ; 004e95ee
    FLD float ptr [ESP]                 ; 004e95ef
    FADD float ptr [ESP + 0xb4]         ; 004e95f2
    INC ESI                             ; 004e95f9
    FSTP float ptr [ESP]                ; 004e95fa
    JMP 0x004e931e                      ; 004e95fd
        ;   XREF to: 004e931e (UNCONDITIONAL_JUMP)  ; LAB_004e931e
    XOR ECX,ECX                         ; 004e9602
        ;   Label: LAB_004e9602
    MOV EDI,dword ptr [EBX + 0xb30]     ; 004e9604
    MOV dword ptr [ESP + 0xbc],ECX      ; 004e960a
    MOV dword ptr [ESP + 0xc0],ECX      ; 004e9611
    TEST EDI,EDI                        ; 004e9618
    JLE 0x004e9748                      ; 004e961a
        ;   XREF to: 004e9748 (CONDITIONAL_JUMP)  ; LAB_004e9748
    LEA EAX,[EBX + 0x6ac]               ; 004e9620
    MOV dword ptr [ESP + 0xac],EAX      ; 004e9626
    MOV EDX,dword ptr [EBX + 0xb2c]     ; 004e962d
        ;   Label: LAB_004e962d
    XOR ESI,ESI                         ; 004e9633
    TEST EDX,EDX                        ; 004e9635
    JLE 0x004e972b                      ; 004e9637
        ;   XREF to: 004e972b (CONDITIONAL_JUMP)  ; LAB_004e972b
    IMUL EAX,dword ptr [ESP + 0xc0],0x48 ; 004e963d
    ADD EAX,dword ptr [ESP + 0xac]      ; 004e9645
    MOV dword ptr [EAX + 0x4],0x4       ; 004e964c
        ;   Label: LAB_004e964c
    MOV dword ptr [EAX + 0x14],0x0      ; 004e9653
    MOV EDX,dword ptr [EAX + 0x14]      ; 004e965a
    MOV dword ptr [EAX + 0x10],EDX      ; 004e965d
    MOV dword ptr [EAX + 0xc],EDX       ; 004e9660
    MOV dword ptr [EAX + 0x8],EDX       ; 004e9663
    MOV EDX,dword ptr [EBX + 0xb2c]     ; 004e9666
    MOV ECX,dword ptr [ESP + 0xbc]      ; 004e966c
    INC EDX                             ; 004e9673
    IMUL EDX,ECX                        ; 004e9674
    ADD EDX,ESI                         ; 004e9677
    MOV dword ptr [EAX + 0x18],EDX      ; 004e9679
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x5e4] ; 004e967c
    MOV dword ptr [EAX + 0x1c],EDI      ; 004e9683
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x648] ; 004e9686
    MOV dword ptr [EAX + 0x20],EDI      ; 004e968d
    LEA EDI,[EDX + 0x1]                 ; 004e9690
    MOV dword ptr [EAX + 0x24],EDI      ; 004e9693
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x5e8] ; 004e9696
    MOV dword ptr [EAX + 0x28],EDI      ; 004e969d
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x64c] ; 004e96a0
    MOV dword ptr [EAX + 0x2c],ECX      ; 004e96a7
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e96aa
    ADD ECX,EDX                         ; 004e96b0
    ADD ECX,0x2                         ; 004e96b2
    MOV dword ptr [EAX + 0x30],ECX      ; 004e96b5
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e96b8
    ADD ECX,EDX                         ; 004e96be
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x5ec] ; 004e96c0
    MOV dword ptr [EAX + 0x34],ECX      ; 004e96c7
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e96ca
    ADD ECX,EDX                         ; 004e96d0
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x650] ; 004e96d2
    MOV dword ptr [EAX + 0x38],ECX      ; 004e96d9
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e96dc
    ADD ECX,EDX                         ; 004e96e2
    INC ECX                             ; 004e96e4
    MOV dword ptr [EAX + 0x3c],ECX      ; 004e96e5
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e96e8
    ADD ECX,EDX                         ; 004e96ee
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x5e8] ; 004e96f0
    MOV dword ptr [EAX + 0x40],ECX      ; 004e96f7
    ADD EDX,dword ptr [EBX + 0xb2c]     ; 004e96fa
    ADD EAX,0x48                        ; 004e9700
    MOV EDX,dword ptr [EBX + EDX*0x4 + 0x64c] ; 004e9703
    MOV dword ptr [EAX + -0x4],EDX      ; 004e970a
    MOV EDX,dword ptr [ESP + 0xc0]      ; 004e970d
    INC ESI                             ; 004e9714
    INC EDX                             ; 004e9715
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e9716
    MOV dword ptr [ESP + 0xc0],EDX      ; 004e971c
    CMP ESI,ECX                         ; 004e9723
    JL 0x004e964c                       ; 004e9725
        ;   XREF to: 004e964c (CONDITIONAL_JUMP)  ; LAB_004e964c
    MOV ECX,dword ptr [ESP + 0xbc]      ; 004e972b
        ;   Label: LAB_004e972b
    INC ECX                             ; 004e9732
    MOV ESI,dword ptr [EBX + 0xb30]     ; 004e9733
    MOV dword ptr [ESP + 0xbc],ECX      ; 004e9739
    CMP ECX,ESI                         ; 004e9740
    JL 0x004e962d                       ; 004e9742
        ;   XREF to: 004e962d (CONDITIONAL_JUMP)  ; LAB_004e962d
    CMP dword ptr [EBX + 0x17c],0xfde8  ; 004e9748
        ;   Label: LAB_004e9748
    SETLE AL                            ; 004e9752
    AND EAX,0xff                        ; 004e9755
    PUSH 0x62dfc6                       ; 004e975a | = "none"
    MOV dword ptr [EBX + 0xfc],EAX      ; 004e975f
    LEA EAX,[EBX + 0x184]               ; 004e9765
    PUSH EAX                            ; 004e976b
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004e976c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e9771
    TEST EAX,EAX                        ; 004e9774
    JNZ 0x004e977f                      ; 004e9776
        ;   XREF to: 004e977f (CONDITIONAL_JUMP)  ; LAB_004e977f
    MOV byte ptr [EBX + 0x184],0x0      ; 004e9778
    MOV DH,byte ptr [EBX + 0x184]       ; 004e977f
        ;   Label: LAB_004e977f
    MOV dword ptr [EBX + 0x104],0x0     ; 004e9785
    TEST DH,DH                          ; 004e978f
    JNZ 0x004e979d                      ; 004e9791
        ;   XREF to: 004e979d (CONDITIONAL_JUMP)  ; LAB_004e979d
    MOV dword ptr [EBX + 0x104],0x1     ; 004e9793
    MOV EAX,dword ptr [EBX + 0x370]     ; 004e979d
        ;   Label: LAB_004e979d
    MOV dword ptr [EBX + 0xb3c],0x0     ; 004e97a3
    TEST EAX,EAX                        ; 004e97ad
    JNZ 0x004e97b8                      ; 004e97af
        ;   XREF to: 004e97b8 (CONDITIONAL_JUMP)  ; LAB_004e97b8
    MOV ESP,EBP                         ; 004e97b1
        ;   Label: LAB_004e97b1
    POP EBP                             ; 004e97b3
    POP EDI                             ; 004e97b4
    POP ESI                             ; 004e97b5
    POP EBX                             ; 004e97b6
    RET                                 ; 004e97b7
    PUSH 0x62dfcb                       ; 004e97b8 | = "7YEARS.RAW"
        ;   Label: LAB_004e97b8
    LEA EDI,[EBX + 0x37c]               ; 004e97bd
    PUSH EDI                            ; 004e97c3
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004e97c4
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e97c9
    TEST EAX,EAX                        ; 004e97cc
    JNZ 0x004e97b1                      ; 004e97ce
        ;   XREF to: 004e97b1 (CONDITIONAL_JUMP)  ; LAB_004e97b1
    PUSH 0x62dfd6                       ; 004e97d0 | = "factwin.raw"
    LEA EAX,[EBX + 0x16c]               ; 004e97d5
    PUSH EAX                            ; 004e97db
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004e97dc
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e97e1
    TEST EAX,EAX                        ; 004e97e4
    JZ 0x004e98ae                       ; 004e97e6
        ;   XREF to: 004e98ae (CONDITIONAL_JUMP)  ; LAB_004e98ae
    PUSH 0x62dfef                       ; 004e97ec | = "dockwin.raw"
        ;   Label: LAB_004e97ec
    LEA EAX,[EBX + 0x16c]               ; 004e97f1
    PUSH EAX                            ; 004e97f7
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004e97f8
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e97fd
    TEST EAX,EAX                        ; 004e9800
    JNZ 0x004e9829                      ; 004e9802
        ;   XREF to: 004e9829 (CONDITIONAL_JUMP)  ; LAB_004e9829
    MOV ESI,0x62dffb                    ; 004e9804 | = "dockwinx.raw"
    LEA EDI,[EBX + 0x37c]               ; 004e9809
    PUSH EDI                            ; 004e980f
    MOV AL,byte ptr [ESI]               ; 004e9810 | = "dockwinx.raw" | s_ckwinx.raw_0062dffd
        ;   Label: LAB_004e9810
    MOV byte ptr [EDI],AL               ; 004e9812
    CMP AL,0x0                          ; 004e9814
    JZ 0x004e9828                       ; 004e9816
        ;   XREF to: 004e9828 (CONDITIONAL_JUMP)  ; LAB_004e9828
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9818 | s_ockwinx.raw_0062dffc | s_dockwinx_raw_0062dffb+3
    ADD ESI,0x2                         ; 004e981b
    MOV byte ptr [EDI + 0x1],AL         ; 004e981e
    ADD EDI,0x2                         ; 004e9821
    CMP AL,0x0                          ; 004e9824
    JNZ 0x004e9810                      ; 004e9826
        ;   XREF to: 004e9810 (CONDITIONAL_JUMP)  ; LAB_004e9810
    POP EDI                             ; 004e9828
        ;   Label: LAB_004e9828
    PUSH 0x62e008                       ; 004e9829 | = "windo10.raw"
        ;   Label: LAB_004e9829
    LEA EAX,[EBX + 0x16c]               ; 004e982e
    PUSH EAX                            ; 004e9834
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004e9835
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e983a
    TEST EAX,EAX                        ; 004e983d
    JNZ 0x004e9866                      ; 004e983f
        ;   XREF to: 004e9866 (CONDITIONAL_JUMP)  ; LAB_004e9866
    MOV ESI,0x62e014                    ; 004e9841 | = "windo10x.raw"
    LEA EDI,[EBX + 0x37c]               ; 004e9846
    PUSH EDI                            ; 004e984c
    MOV AL,byte ptr [ESI]               ; 004e984d | = "windo10x.raw" | s_ndo10x.raw_0062e016
        ;   Label: LAB_004e984d
    MOV byte ptr [EDI],AL               ; 004e984f
    CMP AL,0x0                          ; 004e9851
    JZ 0x004e9865                       ; 004e9853
        ;   XREF to: 004e9865 (CONDITIONAL_JUMP)  ; LAB_004e9865
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9855 | s_indo10x.raw_0062e015 | s_windo10x_raw_0062e014+3
    ADD ESI,0x2                         ; 004e9858
    MOV byte ptr [EDI + 0x1],AL         ; 004e985b
    ADD EDI,0x2                         ; 004e985e
    CMP AL,0x0                          ; 004e9861
    JNZ 0x004e984d                      ; 004e9863
        ;   XREF to: 004e984d (CONDITIONAL_JUMP)  ; LAB_004e984d
    POP EDI                             ; 004e9865
        ;   Label: LAB_004e9865
    PUSH 0x62e021                       ; 004e9866 | = "windo11.raw"
        ;   Label: LAB_004e9866
    LEA EAX,[EBX + 0x16c]               ; 004e986b
    PUSH EAX                            ; 004e9871
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004e9872
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e9877
    TEST EAX,EAX                        ; 004e987a
    JNZ 0x004e97b1                      ; 004e987c
        ;   XREF to: 004e97b1 (CONDITIONAL_JUMP)  ; LAB_004e97b1
    MOV ESI,0x62e02d                    ; 004e9882 | = "windo11x.raw"
    LEA EDI,[EBX + 0x37c]               ; 004e9887
    PUSH EDI                            ; 004e988d
    MOV AL,byte ptr [ESI]               ; 004e988e | = "windo11x.raw" | s_ndo11x.raw_0062e02f
        ;   Label: LAB_004e988e
    MOV byte ptr [EDI],AL               ; 004e9890
    CMP AL,0x0                          ; 004e9892
    JZ 0x004e98a6                       ; 004e9894
        ;   XREF to: 004e98a6 (CONDITIONAL_JUMP)  ; LAB_004e98a6
    MOV AL,byte ptr [ESI + 0x1]         ; 004e9896 | s_indo11x.raw_0062e02e | s_windo11x_raw_0062e02d+3
    ADD ESI,0x2                         ; 004e9899
    MOV byte ptr [EDI + 0x1],AL         ; 004e989c
    ADD EDI,0x2                         ; 004e989f
    CMP AL,0x0                          ; 004e98a2
    JNZ 0x004e988e                      ; 004e98a4
        ;   XREF to: 004e988e (CONDITIONAL_JUMP)  ; LAB_004e988e
    POP EDI                             ; 004e98a6
        ;   Label: LAB_004e98a6
    MOV ESP,EBP                         ; 004e98a7
    POP EBP                             ; 004e98a9
    POP EDI                             ; 004e98aa
    POP ESI                             ; 004e98ab
    POP EBX                             ; 004e98ac
    RET                                 ; 004e98ad
    MOV ESI,0x62dfe2                    ; 004e98ae | = "factwinx.raw"
        ;   Label: LAB_004e98ae
    PUSH EDI                            ; 004e98b3
    MOV AL,byte ptr [ESI]               ; 004e98b4 | = "factwinx.raw" | s_ctwinx.raw_0062dfe4
        ;   Label: LAB_004e98b4
    MOV byte ptr [EDI],AL               ; 004e98b6
    CMP AL,0x0                          ; 004e98b8
    JZ 0x004e98cc                       ; 004e98ba
        ;   XREF to: 004e98cc (CONDITIONAL_JUMP)  ; LAB_004e98cc
    MOV AL,byte ptr [ESI + 0x1]         ; 004e98bc | s_actwinx.raw_0062dfe3 | s_factwinx_raw_0062dfe2+3
    ADD ESI,0x2                         ; 004e98bf
    MOV byte ptr [EDI + 0x1],AL         ; 004e98c2
    ADD EDI,0x2                         ; 004e98c5
    CMP AL,0x0                          ; 004e98c8
    JNZ 0x004e98b4                      ; 004e98ca
        ;   XREF to: 004e98b4 (CONDITIONAL_JUMP)  ; LAB_004e98b4
    POP EDI                             ; 004e98cc
        ;   Label: LAB_004e98cc
    JMP 0x004e97ec                      ; 004e98cd
        ;   XREF to: 004e97ec (UNCONDITIONAL_JUMP)  ; LAB_004e97ec

