; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_FUN_0056e3e0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_water.cpp_CWater_render_FUN_005ea320 at 005ea54e
;   core_wateract.cpp_CWaterActor_renderTransparent_FUN_005eb280 at 005eb3b1
;
; Referenced Globals:
;   double DOUBLE_00645e8b = 255
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].light
;   undefined4 g_RenderVertexBuffer[0].color
;   undefined4 g_RenderVertexBuffer[0].fog
;   int INT_02d7a7b8
;   undefined4 DAT_03277d80
;   undefined4 DAT_03277d84
;   undefined4 DAT_03277d88
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e3e0
        ;   Label: core_set.cpp_CDemonSet_FUN_0056e3e0
    PUSH ESI                            ; 0056e3e1
    PUSH EBP                            ; 0056e3e2
    MOV EBP,ESP                         ; 0056e3e3
    SUB ESP,0x34                        ; 0056e3e5
    AND ESP,0xfffffff8                  ; 0056e3e8
    MOV ESI,dword ptr [0x02d7a7b8]      ; 0056e3eb | INT_02d7a7b8
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056e3f1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056e3f4
    XOR ECX,ECX                         ; 0056e3f7
    FLD float ptr [EDX]                 ; 0056e3f9
    MOV dword ptr [ESP + 0x4],ECX       ; 0056e3fb
    FADD float ptr [EAX]                ; 0056e3ff
    MOV dword ptr [ESP],ECX             ; 0056e401
    FSTP float ptr [ESP + 0x18]         ; 0056e404
    FLD float ptr [EDX + 0x4]           ; 0056e408
    FADD float ptr [EAX + 0x4]          ; 0056e40b
    MOV dword ptr [ESP + 0x8],ECX       ; 0056e40e
    FSTP float ptr [ESP + 0x1c]         ; 0056e412
    FLD float ptr [EDX + 0x8]           ; 0056e416
    FADD float ptr [EAX + 0x8]          ; 0056e419
    MOV EAX,[0x03277d80]                ; 0056e41c | DAT_03277d80
    FSTP float ptr [ESP + 0x20]         ; 0056e421
    TEST EAX,EAX                        ; 0056e425
    JLE 0x0056e44d                      ; 0056e427
        ;   XREF to: 0056e44d (CONDITIONAL_JUMP)  ; LAB_0056e44d
    LEA EBX,[EAX*0x4 + 0x0]             ; 0056e429
    MOV EDX,dword ptr [ECX + 0x3277d84] ; 0056e430 | DAT_03277d84 | DAT_03277d88
        ;   Label: LAB_0056e430
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 0056e436
    JNZ 0x0056e50d                      ; 0056e440
        ;   XREF to: 0056e50d (CONDITIONAL_JUMP)  ; LAB_0056e50d
    ADD ECX,0x4                         ; 0056e446
        ;   Label: LAB_0056e446
    CMP ECX,EBX                         ; 0056e449
    JL 0x0056e430                       ; 0056e44b
        ;   XREF to: 0056e430 (CONDITIONAL_JUMP)  ; LAB_0056e430
    CMP dword ptr [0x03277d80],0x0      ; 0056e44d | DAT_03277d80
        ;   Label: LAB_0056e44d
    JNZ 0x0056e466                      ; 0056e454
        ;   XREF to: 0056e466 (CONDITIONAL_JUMP)  ; LAB_0056e466
    MOV ECX,0x43000000                  ; 0056e456
    MOV dword ptr [ESP],ECX             ; 0056e45b
    MOV dword ptr [ESP + 0x8],ECX       ; 0056e45e
    MOV dword ptr [ESP + 0x4],ECX       ; 0056e462
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0056e466
        ;   Label: LAB_0056e466
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056e469
    SUB EAX,EDX                         ; 0056e470
    MOV EBX,0x688014                    ; 0056e472 | g_RenderVertexBuffer
    SHL EAX,0x4                         ; 0056e477
    FLD float ptr [ESP + 0x4]           ; 0056e47a
    ADD EBX,EAX                         ; 0056e47e
    FCOMP double ptr [0x00645e8b]       ; 0056e480 | DOUBLE_00645e8b
    FNSTSW AX                           ; 0056e486
    SAHF                                ; 0056e488
    JBE 0x0056e493                      ; 0056e489
        ;   XREF to: 0056e493 (CONDITIONAL_JUMP)  ; LAB_0056e493
    MOV dword ptr [ESP + 0x4],0x437f0000 ; 0056e48b
    FLD float ptr [ESP]                 ; 0056e493
        ;   Label: LAB_0056e493
    FCOMP double ptr [0x00645e8b]       ; 0056e496 | DOUBLE_00645e8b
    FNSTSW AX                           ; 0056e49c
    SAHF                                ; 0056e49e
    JBE 0x0056e4a8                      ; 0056e49f
        ;   XREF to: 0056e4a8 (CONDITIONAL_JUMP)  ; LAB_0056e4a8
    MOV dword ptr [ESP],0x437f0000      ; 0056e4a1
    FLD float ptr [ESP + 0x8]           ; 0056e4a8
        ;   Label: LAB_0056e4a8
    FCOMP double ptr [0x00645e8b]       ; 0056e4ac | DOUBLE_00645e8b
    FNSTSW AX                           ; 0056e4b2
    SAHF                                ; 0056e4b4
    JA 0x0056e5b5                       ; 0056e4b5
        ;   XREF to: 0056e5b5 (CONDITIONAL_JUMP)  ; LAB_0056e5b5
    FLD float ptr [ESP + 0x4]           ; 0056e4bb
        ;   Label: LAB_0056e4bb
    FLD float ptr [ESP]                 ; 0056e4bf
    FLD float ptr [ESP + 0x8]           ; 0056e4c2
    FXCH ST2                            ; 0056e4c6
    CALL crt_math.c_round_FUN_005fe6b0  ; 0056e4c8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x28]        ; 0056e4cd
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056e4d1
    CALL crt_math.c_round_FUN_005fe6b0  ; 0056e4d5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    SHL EAX,0x8                         ; 0056e4da
    FISTP dword ptr [ESP + 0x28]        ; 0056e4dd
    MOV dword ptr [EBX + 0x20],EAX      ; 0056e4e1 | g_RenderVertexBuffer[0].light
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056e4e4
    CALL crt_math.c_round_FUN_005fe6b0  ; 0056e4e8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    SHL EAX,0x8                         ; 0056e4ed
    FISTP dword ptr [ESP + 0x28]        ; 0056e4f0
    MOV dword ptr [EBX + 0x24],EAX      ; 0056e4f4 | g_RenderVertexBuffer[0].color
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056e4f7
    SHL EAX,0x8                         ; 0056e4fb
    MOV dword ptr [EBX + 0x28],EAX      ; 0056e4fe | g_RenderVertexBuffer[0].fog
    MOV dword ptr [0x02d7a7b8],ESI      ; 0056e501 | INT_02d7a7b8
    MOV ESP,EBP                         ; 0056e507
    POP EBP                             ; 0056e509
    POP ESI                             ; 0056e50a
    POP EBX                             ; 0056e50b
    RET                                 ; 0056e50c
    LEA EAX,[EDX + 0x104]               ; 0056e50d
        ;   Label: LAB_0056e50d
    FLD float ptr [EAX]                 ; 0056e513
    FSUB float ptr [ESP + 0x18]         ; 0056e515
    FSTP float ptr [ESP + 0xc]          ; 0056e519
    FLD float ptr [EAX + 0x4]           ; 0056e51d
    FSUB float ptr [ESP + 0x1c]         ; 0056e520
    FST float ptr [ESP + 0x10]          ; 0056e524
    FMUL float ptr [ESP + 0x10]         ; 0056e528
    FLD float ptr [ESP + 0xc]           ; 0056e52c
    FMUL ST0                            ; 0056e530
    FLD float ptr [EAX + 0x8]           ; 0056e532
    FSUB float ptr [ESP + 0x20]         ; 0056e535
    FXCH                                ; 0056e539
    FADDP ST2,ST0                       ; 0056e53b
    FST float ptr [ESP + 0x14]          ; 0056e53d
    FMUL float ptr [ESP + 0x14]         ; 0056e541
    FADDP                               ; 0056e545
    FSTP float ptr [ESP + 0x30]         ; 0056e547
    MOV EAX,dword ptr [ESP + 0x30]      ; 0056e54b
    SAR EAX,0x1                         ; 0056e54f
    ADD EAX,ESI                         ; 0056e551
    MOV dword ptr [ESP + 0x2c],EAX      ; 0056e553
    FLD float ptr [ESP + 0x2c]          ; 0056e557
    FCOMP float ptr [EDX + 0x11d4]      ; 0056e55b
    FNSTSW AX                           ; 0056e561
    SAHF                                ; 0056e563
    JA 0x0056e446                       ; 0056e564
        ;   XREF to: 0056e446 (CONDITIONAL_JUMP)  ; LAB_0056e446
    FLD float ptr [ESP + 0x2c]          ; 0056e56a
    FDIV float ptr [EDX + 0x11d4]       ; 0056e56e
    FLD float ptr [EDX + 0x11c4]        ; 0056e574
    FLD1                                ; 0056e57a
    FSUBRP ST2,ST0                      ; 0056e57c
    FMUL ST1                            ; 0056e57e
    FLD float ptr [EDX + 0x11c8]        ; 0056e580
    FMUL ST2                            ; 0056e586
    FLD float ptr [EDX + 0x11cc]        ; 0056e588
    FMULP ST3                           ; 0056e58e
    FXCH                                ; 0056e590
    FADD float ptr [ESP + 0x4]          ; 0056e592
    FXCH                                ; 0056e596
    FADD float ptr [ESP]                ; 0056e598
    FXCH ST2                            ; 0056e59b
    FADD float ptr [ESP + 0x8]          ; 0056e59d
    FXCH                                ; 0056e5a1
    FSTP float ptr [ESP + 0x4]          ; 0056e5a3
    FXCH                                ; 0056e5a7
    FSTP float ptr [ESP]                ; 0056e5a9
    FSTP float ptr [ESP + 0x8]          ; 0056e5ac
    JMP 0x0056e446                      ; 0056e5b0
        ;   XREF to: 0056e446 (UNCONDITIONAL_JUMP)  ; LAB_0056e446
    MOV dword ptr [ESP + 0x8],0x437f0000 ; 0056e5b5
        ;   Label: LAB_0056e5b5
    JMP 0x0056e4bb                      ; 0056e5bd
        ;   XREF to: 0056e4bb (UNCONDITIONAL_JUMP)  ; LAB_0056e4bb

