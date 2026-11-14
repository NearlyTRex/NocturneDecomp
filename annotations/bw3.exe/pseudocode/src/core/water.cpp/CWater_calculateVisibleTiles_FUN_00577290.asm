; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_00577290(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xd4]:8  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533da6
;
; Referenced Globals:
;   TerminatedCString s_core_water_cpp_005d715b
;   TerminatedCString s_Too_many_visible_water_t_005d716d
;   TerminatedCString s_Vis_water_tiles_d_SqFt_f_005d718b
;   undefined4 DAT_005d71ab
;   undefined4 DAT_005d71b3
;   undefined4 DAT_005e5e7c
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005f2b00
;   undefined4 DAT_0060b024
;   undefined4 DAT_0060b054
;   undefined4 DAT_0060b084
;   undefined4 DAT_0060b0b4
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01bdd7e4
;   ... and 10 more
;
; Called Functions:
;   core_dtrace.cpp_FUN_00477d90
;   core_dtrace.cpp_FUN_00477db0
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577290
        ;   Label: core_water.cpp_CWater_calculateVisibleTiles_FUN_00577290
    PUSH ESI                            ; 00577291
    PUSH EBP                            ; 00577292
    SUB ESP,0xbc                        ; 00577293
    MOV EBP,dword ptr [ESP + 0xcc]      ; 00577299
    XOR EBX,EBX                         ; 005772a0
    XOR EDX,EDX                         ; 005772a2
    XOR EAX,EAX                         ; 005772a4
    INC EAX                             ; 005772a6
        ;   Label: LAB_005772a6
    LEA ESI,[EDX + EBX*0x1]             ; 005772a7
    ADD EBX,0x20                        ; 005772aa
    MOV CL,byte ptr [ESI + EAX*0x1 + 0x1c6206f] ; 005772ad | DAT_01c62070
    ADD EDX,0x400                       ; 005772b4
    MOV byte ptr [EAX + 0x2d0597f],CL   ; 005772ba
    CMP EAX,0x20                        ; 005772c0
    JL 0x005772a6                       ; 005772c3
        ;   XREF to: 005772a6 (CONDITIONAL_JUMP)  ; LAB_005772a6
    MOV EDX,dword ptr [EBP + 0x4]       ; 005772c5
    MOV dword ptr [EBP + 0xc],0x0       ; 005772c8
    TEST EDX,0x7fffffff                 ; 005772cf
    JNZ 0x005772e1                      ; 005772d5
        ;   XREF to: 005772e1 (CONDITIONAL_JUMP)  ; LAB_005772e1
    ADD ESP,0xbc                        ; 005772d7
    POP EBP                             ; 005772dd
    POP ESI                             ; 005772de
    POP EBX                             ; 005772df
    PUSH EDI                            ; 005772e1
        ;   Label: LAB_005772e1
    PUSH 0x203b37c                      ; 005772e2 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x9c]                ; 005772e7
    LEA EDI,[ESP + 0x60]                ; 005772ee
    CALL core_dtrace.cpp_FUN_00477d90   ; 005772f2
        ;   XREF to: 00477d90 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477d90()
    LEA ESI,[ESP + 0x9c]                ; 005772f7
    ADD ESP,0x4                         ; 005772fe
    MOVSD ES:EDI,ESI                    ; 00577301
    MOVSD ES:EDI,ESI                    ; 00577302
    MOVSD ES:EDI,ESI                    ; 00577303
    PUSH 0x203b37c                      ; 00577304 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x84]                ; 00577309
    LEA EDI,[ESP + 0x78]                ; 00577310
    CALL core_dtrace.cpp_FUN_00477db0   ; 00577314
        ;   XREF to: 00477db0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477db0()
    LEA ESI,[ESP + 0x84]                ; 00577319
    ADD ESP,0x4                         ; 00577320
    MOVSD ES:EDI,ESI                    ; 00577323
    MOVSD ES:EDI,ESI                    ; 00577324
    MOVSD ES:EDI,ESI                    ; 00577325
    FLD float ptr [ESP + 0x5c]          ; 00577326
    FADD float ptr [ESP + 0x74]         ; 0057732a
    FLD double ptr [0x005d71ab]         ; 0057732e | DAT_005d71ab
    FXCH                                ; 00577334
    FMUL ST1                            ; 00577336
    FLD float ptr [ESP + 0x64]          ; 00577338
    FLD float ptr [ESP + 0x74]          ; 0057733c
    FSUB float ptr [ESP + 0x5c]         ; 00577340
    FXCH                                ; 00577344
    FADD float ptr [ESP + 0x7c]         ; 00577346
    FXCH                                ; 0057734a
    FMUL ST3                            ; 0057734c
    FXCH                                ; 0057734e
    FMULP ST3                           ; 00577350
    FMUL double ptr [0x005d71b3]        ; 00577352 | DAT_005d71b3
    XOR ECX,ECX                         ; 00577358
    FLDZ                                ; 0057735a
    MOV dword ptr [0x02cfd96c],ECX      ; 0057735c | DAT_02cfd96c
    MOV dword ptr [ESP + 0xb0],ECX      ; 00577362
    FXCH ST2                            ; 00577369
    FSTP float ptr [0x02cfd968]         ; 0057736b | DAT_02cfd968
    FXCH ST2                            ; 00577371
    FSTP float ptr [0x02cfd970]         ; 00577373 | DAT_02cfd970
    FXCH                                ; 00577379
    FSTP float ptr [ESP + 0xa4]         ; 0057737b
    FCOMP float ptr [ESP + 0xa4]        ; 00577382
    FNSTSW AX                           ; 00577389
    SAHF                                ; 0057738b
    JNC 0x0057739c                      ; 0057738c
        ;   XREF to: 0057739c (CONDITIONAL_JUMP)  ; LAB_0057739c
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0057738e
    MOV dword ptr [ESP + 0xb0],EAX      ; 00577395
    FLD float ptr [ESP + 0x78]          ; 0057739c
        ;   Label: LAB_0057739c
    FSUB float ptr [ESP + 0x60]         ; 005773a0
    FST float ptr [ESP + 0xa8]          ; 005773a4
    FCOMP float ptr [ESP + 0xb0]        ; 005773ab
    FNSTSW AX                           ; 005773b2
    SAHF                                ; 005773b4
    JBE 0x005773c5                      ; 005773b5
        ;   XREF to: 005773c5 (CONDITIONAL_JUMP)  ; LAB_005773c5
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005773b7
    MOV dword ptr [ESP + 0xb0],EAX      ; 005773be
    FLD float ptr [ESP + 0x7c]          ; 005773c5
        ;   Label: LAB_005773c5
    FSUB float ptr [ESP + 0x64]         ; 005773c9
    FMUL double ptr [0x005d71ab]        ; 005773cd | DAT_005d71ab
    FMUL double ptr [0x005d71b3]        ; 005773d3 | DAT_005d71b3
    FST float ptr [ESP + 0xac]          ; 005773d9
    FCOMP float ptr [ESP + 0xb0]        ; 005773e0
    FNSTSW AX                           ; 005773e7
    SAHF                                ; 005773e9
    JBE 0x005773fa                      ; 005773ea
        ;   XREF to: 005773fa (CONDITIONAL_JUMP)  ; LAB_005773fa
    MOV EAX,dword ptr [ESP + 0xac]      ; 005773ec
    MOV dword ptr [ESP + 0xb0],EAX      ; 005773f3
    FLD float ptr [ESP + 0xb0]          ; 005773fa
        ;   Label: LAB_005773fa
    FDIV float ptr [EBP + 0x8]          ; 00577401
    FLD1                                ; 00577404
    FADDP                               ; 00577406
    CALL crt_math.c_round_FUN_005a3120  ; 00577408
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xb8]        ; 0057740d
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00577414
    XOR ESI,ESI                         ; 0057741b
    MOV EDI,EAX                         ; 0057741d
    MOV dword ptr [0x02cfd97c],ESI      ; 0057741f | DAT_02cfd97c
    NEG EDI                             ; 00577425
    MOV dword ptr [ESP + 0xb4],EAX      ; 00577427
    CMP EDI,EAX                         ; 0057742e
    JGE 0x00577663                      ; 00577430
        ;   XREF to: 00577663 (CONDITIONAL_JUMP)  ; LAB_00577663
    MOV ESI,dword ptr [ESP + 0xb8]      ; 00577436
        ;   Label: LAB_00577436
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0057743d
    NEG ESI                             ; 00577444
    CMP ESI,EAX                         ; 00577446
    JGE 0x00577653                      ; 00577448
        ;   XREF to: 00577653 (CONDITIONAL_JUMP)  ; LAB_00577653
    MOV dword ptr [ESP + 0xbc],EDI      ; 0057744e
        ;   Label: LAB_0057744e
    FILD dword ptr [ESP + 0xbc]         ; 00577455
    FMUL float ptr [EBP + 0x8]          ; 0057745c
    FSTP float ptr [ESP + 0x38]         ; 0057745f
    MOV EAX,dword ptr [EBP + 0x4]       ; 00577463
    MOV dword ptr [ESP + 0xbc],ESI      ; 00577466
    MOV dword ptr [ESP + 0x3c],EAX      ; 0057746d
    FILD dword ptr [ESP + 0xbc]         ; 00577471
    FMUL float ptr [EBP + 0x8]          ; 00577478
    MOV ECX,dword ptr [0x005f2afc]      ; 0057747b | DAT_005f2afc
    FLD float ptr [ESP + 0x38]          ; 00577481
    FADD float ptr [0x02cfd968]         ; 00577485 | DAT_02cfd968
    FLD float ptr [ESP + 0x3c]          ; 0057748b
    LEA EAX,[ESP + 0x38]                ; 0057748f
    FXCH ST2                            ; 00577493
    FSTP float ptr [ESP + 0x40]         ; 00577495
    FSTP float ptr [ESP + 0x38]         ; 00577499
    PUSH EAX                            ; 0057749d
    FADD float ptr [0x02cfd96c]         ; 0057749e | DAT_02cfd96c
    FLD float ptr [ESP + 0x44]          ; 005774a4
    FXCH                                ; 005774a8
    FSTP float ptr [ESP + 0x40]         ; 005774aa
    FADD float ptr [0x02cfd970]         ; 005774ae | DAT_02cfd970
    PUSH ECX                            ; 005774b4 | DAT_01bdd7e4
    FSTP float ptr [ESP + 0x48]         ; 005774b5
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 005774b9
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005774be
    LEA EBX,[ESP + 0x8c]                ; 005774c1
    LEA EAX,[ESP + 0x38]                ; 005774c8
    FLD float ptr [EAX]                 ; 005774cc
    FMUL float ptr [0x005e5e7c]         ; 005774ce | DAT_005e5e7c
    FISTP dword ptr [EBX]               ; 005774d4
    FLD float ptr [EAX + 0x4]           ; 005774d6
    FMUL float ptr [0x005e5e7c]         ; 005774d9 | DAT_005e5e7c
    FISTP dword ptr [EBX + 0x4]         ; 005774df
    FLD float ptr [EAX + 0x8]           ; 005774e2
    FMUL float ptr [0x005e5e7c]         ; 005774e5 | DAT_005e5e7c
    FISTP dword ptr [EBX + 0x8]         ; 005774eb
    XOR EBX,EBX                         ; 005774ee
    LEA EAX,[ESP + 0x38]                ; 005774f0
    MOV dword ptr [ESP + 0x38],EBX      ; 005774f4
    MOV dword ptr [ESP + 0x3c],EBX      ; 005774f8
    MOV dword ptr [ESP + 0x40],EBX      ; 005774fc
    LEA EBX,[ESP + 0x68]                ; 00577500
    MOV EDX,dword ptr [0x005f2afc]      ; 00577504 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0057750a
    FMUL float ptr [0x005e5e7c]         ; 0057750c | DAT_005e5e7c
    FISTP dword ptr [EBX]               ; 00577512
    FLD float ptr [EAX + 0x4]           ; 00577514
    FMUL float ptr [0x005e5e7c]         ; 00577517 | DAT_005e5e7c
    FISTP dword ptr [EBX + 0x4]         ; 0057751d
    FLD float ptr [EAX + 0x8]           ; 00577520
    FMUL float ptr [0x005e5e7c]         ; 00577523 | DAT_005e5e7c
    FISTP dword ptr [EBX + 0x8]         ; 00577529
    LEA EAX,[ESP + 0x68]                ; 0057752c
    PUSH EAX                            ; 00577530
    MOV EAX,dword ptr [EDX]             ; 00577531 | DAT_01bdd7e4
    PUSH EAX                            ; 00577533
    CALL engine_special.cpp_FUN_005632a3 ; 00577534
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00577539
    MOV EAX,dword ptr [EBP + 0x8]       ; 0057753c
    LEA EBX,[ESP + 0x2c]                ; 0057753f
    MOV dword ptr [ESP + 0x38],EAX      ; 00577543
    LEA EAX,[ESP + 0x38]                ; 00577547
    MOV EDX,dword ptr [0x005f2afc]      ; 0057754b | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00577551
    FMUL float ptr [0x005e5e7c]         ; 00577553 | DAT_005e5e7c
    FISTP dword ptr [EBX]               ; 00577559
    FLD float ptr [EAX + 0x4]           ; 0057755b
    FMUL float ptr [0x005e5e7c]         ; 0057755e | DAT_005e5e7c
    FISTP dword ptr [EBX + 0x4]         ; 00577564
    FLD float ptr [EAX + 0x8]           ; 00577567
    FMUL float ptr [0x005e5e7c]         ; 0057756a | DAT_005e5e7c
    FISTP dword ptr [EBX + 0x8]         ; 00577570
    LEA EAX,[ESP + 0x2c]                ; 00577573
    PUSH EAX                            ; 00577577
    MOV EAX,dword ptr [EDX]             ; 00577578 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0057757a
    PUSH EAX                            ; 0057757d
    CALL engine_special.cpp_FUN_005632a3 ; 0057757e
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00577583
    MOV EAX,dword ptr [EBP + 0x8]       ; 00577586
    LEA EBX,[ESP + 0x50]                ; 00577589
    MOV dword ptr [ESP + 0x40],EAX      ; 0057758d
    LEA EAX,[ESP + 0x38]                ; 00577591
    MOV EDX,dword ptr [0x005f2afc]      ; 00577595 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0057759b
    FMUL float ptr [0x005e5e7c]         ; 0057759d | DAT_005e5e7c
    FISTP dword ptr [EBX]               ; 005775a3
    FLD float ptr [EAX + 0x4]           ; 005775a5
    FMUL float ptr [0x005e5e7c]         ; 005775a8 | DAT_005e5e7c
    FISTP dword ptr [EBX + 0x4]         ; 005775ae
    FLD float ptr [EAX + 0x8]           ; 005775b1
    FMUL float ptr [0x005e5e7c]         ; 005775b4 | DAT_005e5e7c
    FISTP dword ptr [EBX + 0x8]         ; 005775ba
    LEA EAX,[ESP + 0x50]                ; 005775bd
    PUSH EAX                            ; 005775c1
    MOV EAX,dword ptr [EDX]             ; 005775c2 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 005775c4
    PUSH EAX                            ; 005775c7
    CALL engine_special.cpp_FUN_005632a3 ; 005775c8
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x4c]                ; 005775cd
    LEA EAX,[ESP + 0x40]                ; 005775d1
    ADD ESP,0x8                         ; 005775d5
    XOR ECX,ECX                         ; 005775d8
    MOV EDX,dword ptr [0x005f2afc]      ; 005775da | DAT_005f2afc
    MOV dword ptr [ESP + 0x38],ECX      ; 005775e0
    FLD float ptr [EAX]                 ; 005775e4
    FMUL float ptr [0x005e5e7c]         ; 005775e6 | DAT_005e5e7c
    FISTP dword ptr [EBX]               ; 005775ec
    FLD float ptr [EAX + 0x4]           ; 005775ee
    FMUL float ptr [0x005e5e7c]         ; 005775f1 | DAT_005e5e7c
    FISTP dword ptr [EBX + 0x4]         ; 005775f7
    FLD float ptr [EAX + 0x8]           ; 005775fa
    FMUL float ptr [0x005e5e7c]         ; 005775fd | DAT_005e5e7c
    FISTP dword ptr [EBX + 0x8]         ; 00577603
    LEA EAX,[ESP + 0x44]                ; 00577606
    PUSH EAX                            ; 0057760a
    MOV EAX,dword ptr [EDX]             ; 0057760b | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0057760d
    PUSH EAX                            ; 00577612
    CALL engine_special.cpp_FUN_005632a3 ; 00577613
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b024]                ; 00577618 | DAT_0060b024
    MOV EBX,dword ptr [0x0060b054]      ; 0057761d | DAT_0060b054
    MOV EDX,dword ptr [0x0060b084]      ; 00577623 | DAT_0060b084
    AND EAX,EBX                         ; 00577629
    MOV ECX,dword ptr [0x0060b0b4]      ; 0057762b | DAT_0060b0b4
    AND EAX,EDX                         ; 00577631
    AND EAX,ECX                         ; 00577633
    ADD ESP,0x8                         ; 00577635
    TEST EAX,0x80000000                 ; 00577638
    JZ 0x0057769e                       ; 0057763d
        ;   XREF to: 0057769e (CONDITIONAL_JUMP)  ; LAB_0057769e
    TEST AL,0xff                        ; 0057763f
    JZ 0x0057769e                       ; 00577641
        ;   XREF to: 0057769e (CONDITIONAL_JUMP)  ; LAB_0057769e
    MOV EDX,dword ptr [ESP + 0xb8]      ; 00577643
        ;   Label: LAB_00577643
    INC ESI                             ; 0057764a
    CMP ESI,EDX                         ; 0057764b
    JL 0x0057744e                       ; 0057764d
        ;   XREF to: 0057744e (CONDITIONAL_JUMP)  ; LAB_0057744e
    MOV EDX,dword ptr [ESP + 0xb4]      ; 00577653
        ;   Label: LAB_00577653
    INC EDI                             ; 0057765a
    CMP EDI,EDX                         ; 0057765b
    JL 0x00577436                       ; 0057765d
        ;   XREF to: 00577436 (CONDITIONAL_JUMP)  ; LAB_00577436
    FILD dword ptr [0x02cfd97c]         ; 00577663 | DAT_02cfd97c
        ;   Label: LAB_00577663
    FMUL float ptr [EBP + 0x8]          ; 00577669
    FMUL float ptr [EBP + 0x8]          ; 0057766c
    SUB ESP,0x8                         ; 0057766f
    MOV ECX,dword ptr [0x02cfd97c]      ; 00577672 | DAT_02cfd97c
    FST float ptr [EBP + 0xc]           ; 00577678
    FSTP double ptr [ESP]               ; 0057767b
    PUSH ECX                            ; 0057767e
    PUSH 0x5d718b                       ; 0057767f | = "Vis water tiles : %d, SqFt : %f"
    MOV EBX,dword ptr [0x005f1690]      ; 00577684 | g_CConsolePtr
    PUSH EBX                            ; 0057768a | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0057768b
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 00577690
    POP EDI                             ; 00577693
    ADD ESP,0xbc                        ; 00577694
    POP EBP                             ; 0057769a
    POP ESI                             ; 0057769b
    POP EBX                             ; 0057769c
    RET                                 ; 0057769d
    MOV EBX,0x4                         ; 0057769e
        ;   Label: LAB_0057769e
    MOV EDX,0x1                         ; 005776a3
    XOR EAX,EAX                         ; 005776a8
    MOV dword ptr [ESP + 0x8],EBX       ; 005776aa
    MOV dword ptr [ESP + 0x18],EAX      ; 005776ae
    MOV dword ptr [ESP + 0x14],EAX      ; 005776b2
    MOV dword ptr [ESP + 0x10],EAX      ; 005776b6
    MOV dword ptr [ESP + 0xc],EAX       ; 005776ba
    MOV dword ptr [ESP + 0x1c],EAX      ; 005776be
    MOV EBX,0x3                         ; 005776c2
    MOV EAX,0x10                        ; 005776c7
    MOV dword ptr [ESP + 0x28],EBX      ; 005776cc
    MOV EBX,dword ptr [0x005f2b00]      ; 005776d0 | DAT_005f2b00
    MOV [0x005f2b00],EAX                ; 005776d6 | DAT_005f2b00
    LEA EAX,[ESP + 0x4]                 ; 005776db
    MOV dword ptr [ESP + 0x20],EDX      ; 005776df
    PUSH EAX                            ; 005776e3
    MOV EDX,dword ptr [0x005f2afc]      ; 005776e4 | DAT_005f2afc
    MOV ECX,0x2                         ; 005776ea
    PUSH EDX                            ; 005776ef | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x2c],ECX      ; 005776f0
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580 ; 005776f4
        ;   XREF to: 0046b580 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005776f9
    TEST EAX,EAX                        ; 005776fc
    JZ 0x0057774a                       ; 005776fe
        ;   XREF to: 0057774a (CONDITIONAL_JUMP)  ; LAB_0057774a
    CMP dword ptr [0x02cfd97c],0x1000   ; 00577700 | DAT_02cfd97c
    JL 0x0057772e                       ; 0057770a
        ;   XREF to: 0057772e (CONDITIONAL_JUMP)  ; LAB_0057772e
    MOV EAX,0x5d715b                    ; 0057770c | = "..\\core\\water.cpp"
    MOV EDX,0x117                       ; 00577711
    PUSH 0x5d716d                       ; 00577716 | = "Too many visible water tiles!"
    MOV [0x01d71de0],EAX                ; 0057771b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00577720 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00577726
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0057772b
    MOV EAX,[0x02cfd97c]                ; 0057772e | DAT_02cfd97c
        ;   Label: LAB_0057772e
    LEA ECX,[EAX + 0x1]                 ; 00577733
    MOV dword ptr [EAX*0x4 + 0x2cfd980],EDI ; 00577736 | DAT_02cfd980
    MOV dword ptr [EAX*0x4 + 0x2d01980],ESI ; 0057773d | DAT_02d01980
    MOV dword ptr [0x02cfd97c],ECX      ; 00577744 | DAT_02cfd97c
    MOV dword ptr [0x005f2b00],EBX      ; 0057774a | DAT_005f2b00
        ;   Label: LAB_0057774a
    JMP 0x00577643                      ; 00577750
        ;   XREF to: 00577643 (UNCONDITIONAL_JUMP)  ; LAB_00577643

