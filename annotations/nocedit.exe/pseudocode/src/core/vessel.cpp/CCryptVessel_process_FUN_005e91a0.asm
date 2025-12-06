; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_vessel.cpp_CCryptVessel_process_FUN_005e91a0(CCryptVessel * this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_00657039 = 8
;   double DOUBLE_00657041 = 16
;   float FLOAT_00657049 = -16
;   double DOUBLE_00657051 = 3.14159265350000
;   float FLOAT_00657059 = 1.700000
;   CEventList* g_CEventListPtr = 02d05310
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CEventList g_CEventListInstance
;   CFireEffect g_CFireEffectInstance
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004aabe0
;   core_fire.cpp_CFireEffect_FUN_004c8c10
;   core_flame.cpp_FUN_004c9c00
;   core_vessel.cpp_FUN_005e9180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e91a0
        ;   Label: core_vessel.cpp_CCryptVessel_process_FUN_005e91a0
    PUSH ESI                            ; 005e91a1
    PUSH EDI                            ; 005e91a2
    PUSH EBP                            ; 005e91a3
    SUB ESP,0x38                        ; 005e91a4
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005e91a7
    MOV EDX,dword ptr [EBX + 0x3b4]     ; 005e91ab
    CMP EDX,0x1                         ; 005e91b1
    JZ 0x005e944a                       ; 005e91b4 | LAB_005e944a
        ;   XREF to: 005e944a (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 005e91ba
    JNZ 0x005e94b0                      ; 005e91bc | LAB_005e94b0
        ;   XREF to: 005e94b0 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x50]          ; 005e91c2
    FMUL double ptr [0x00657051]        ; 005e91c6 | double DOUBLE_00657051
    FADD float ptr [EBX + 0x668]        ; 005e91cc
    FSTP float ptr [EBX + 0x668]        ; 005e91d2
    MOV ESI,dword ptr [EBX + 0x2d4]     ; 005e91d8
        ;   Label: LAB_005e91d8
    TEST ESI,ESI                        ; 005e91de
    JNZ 0x005e9442                      ; 005e91e0 | LAB_005e9442
        ;   XREF to: 005e9442 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x3c0],0x0     ; 005e91e6
    JNZ 0x005e94ec                      ; 005e91ed | LAB_005e94ec
        ;   XREF to: 005e94ec (CONDITIONAL_JUMP)
    LEA EDI,[EBX + 0x30]                ; 005e91f3
    MOV EBP,dword ptr [EBX + 0x3b8]     ; 005e91f6
    LEA ESI,[EBX + 0x20]                ; 005e91fc
    CMP EBP,0x1                         ; 005e91ff
    JNZ 0x005e95b2                      ; 005e9202 | LAB_005e95b2
        ;   XREF to: 005e95b2 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x3bc]         ; 005e9208
    FADD float ptr [ESP + 0x50]         ; 005e920e
    FST float ptr [EBX + 0x3bc]         ; 005e9212
    FLD1                                ; 005e9218
    FCOMPP                              ; 005e921a
    FNSTSW AX                           ; 005e921c
    SAHF                                ; 005e921e
    JNC 0x005e9442                      ; 005e921f | LAB_005e9442
        ;   XREF to: 005e9442 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x2d8]     ; 005e9225
    MOV dword ptr [EBX + 0x3bc],0x3f800000 ; 005e922b
    TEST EDX,EDX                        ; 005e9235
    JNZ 0x005e94fa                      ; 005e9237 | LAB_005e94fa
        ;   XREF to: 005e94fa (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 005e923d
    PUSH EAX                            ; 005e9243
    CALL core_vessel.cpp_FUN_005e9180   ; 005e9244 | undefined core_vessel.cpp_FUN_005e9180()
        ;   XREF to: 005e9180 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e9249
    TEST EAX,EAX                        ; 005e924c
    JZ 0x005e9294                       ; 005e924e | LAB_005e9294
        ;   XREF to: 005e9294 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005e9250
    MOV dword ptr [EBX + 0x3b8],0x2     ; 005e9256
    MOV EDX,dword ptr [EAX + 0x20]      ; 005e9260
    MOV dword ptr [ESI],EDX             ; 005e9263
    MOV EDX,dword ptr [EAX + 0x24]      ; 005e9265
    MOV dword ptr [ESI + 0x4],EDX       ; 005e9268
    MOV EDX,dword ptr [EAX + 0x28]      ; 005e926b
    MOV dword ptr [ESI + 0x8],EDX       ; 005e926e
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005e9271
    MOV dword ptr [ESI + 0xc],EAX       ; 005e9274
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005e9277
    ADD EAX,0x30                        ; 005e927d
    CMP EDI,EAX                         ; 005e9280
    JZ 0x005e9294                       ; 005e9282 | LAB_005e9294
        ;   XREF to: 005e9294 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 005e9284
    MOV dword ptr [EDI],EDX             ; 005e9286
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e9288
    MOV dword ptr [EDI + 0x4],EDX       ; 005e928b
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e928e
    MOV dword ptr [EDI + 0x8],EDX       ; 005e9291
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005e9294
        ;   Label: LAB_005e9294
    CMP dword ptr [EAX + 0x184],0x0     ; 005e929a
    JZ 0x005e96ca                       ; 005e92a1 | LAB_005e96ca
        ;   XREF to: 005e96ca (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87d0]                ; 005e92a7 | int g_LocalHeroIndex
        ;   Label: LAB_005e92a7
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005e92ac | CHero *[4] g_HeroActors
    LEA ESI,[EBX + 0x20]                ; 005e92b3
    FLD float ptr [EAX + 0x20]          ; 005e92b6
    FSUB float ptr [ESI]                ; 005e92b9
    FSTP float ptr [ESP]                ; 005e92bb
    FLD float ptr [EAX + 0x24]          ; 005e92be
    FSUB float ptr [ESI + 0x4]          ; 005e92c1
    FST float ptr [ESP + 0x4]           ; 005e92c4
    FMUL float ptr [ESP + 0x4]          ; 005e92c8
    FLD float ptr [ESP]                 ; 005e92cc
    FMUL ST0                            ; 005e92cf
    FLD float ptr [EAX + 0x28]          ; 005e92d1
    FSUB float ptr [ESI + 0x8]          ; 005e92d4
    FXCH                                ; 005e92d7
    FADDP ST2,ST0                       ; 005e92d9
    FST float ptr [ESP + 0x8]           ; 005e92db
    FMUL float ptr [ESP + 0x8]          ; 005e92df
    FADDP                               ; 005e92e3
    FSQRT                               ; 005e92e5
    MOV EDI,0x4479f99a                  ; 005e92e7
    XOR EBP,EBP                         ; 005e92ec
    MOV dword ptr [ESP + 0x30],EDI      ; 005e92ee
    MOV dword ptr [ESP + 0x34],EBP      ; 005e92f2
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 005e92f6
    FSTP float ptr [ESP + 0x2c]         ; 005e92fc
    TEST EAX,EAX                        ; 005e9300
    JZ 0x005e933b                       ; 005e9302 | LAB_005e933b
        ;   XREF to: 005e933b (CONDITIONAL_JUMP)
    FLD float ptr [ESI]                 ; 005e9304
    FSUB float ptr [EAX + 0x20]         ; 005e9306
    FSTP float ptr [ESP + 0xc]          ; 005e9309
    FLD float ptr [ESI + 0x4]           ; 005e930d
    FSUB float ptr [EAX + 0x24]         ; 005e9310
    FST float ptr [ESP + 0x10]          ; 005e9313
    FMUL float ptr [ESP + 0x10]         ; 005e9317
    FLD float ptr [ESP + 0xc]           ; 005e931b
    FMUL ST0                            ; 005e931f
    FLD float ptr [ESI + 0x8]           ; 005e9321
    FSUB float ptr [EAX + 0x28]         ; 005e9324
    FXCH                                ; 005e9327
    FADDP ST2,ST0                       ; 005e9329
    FST float ptr [ESP + 0x14]          ; 005e932b
    FMUL float ptr [ESP + 0x14]         ; 005e932f
    FADDP                               ; 005e9333
    FSQRT                               ; 005e9335
    FSTP float ptr [ESP + 0x30]         ; 005e9337
    MOV EDX,dword ptr [EBX + 0x2dc]     ; 005e933b
        ;   Label: LAB_005e933b
    TEST EDX,EDX                        ; 005e9341
    JZ 0x005e9381                       ; 005e9343 | LAB_005e9381
        ;   XREF to: 005e9381 (CONDITIONAL_JUMP)
    MOV EAX,EDX                         ; 005e9345
    LEA ESI,[EBX + 0x20]                ; 005e9347
    FLD float ptr [EAX + 0x20]          ; 005e934a
    FSUB float ptr [ESI]                ; 005e934d
    FSTP float ptr [ESP + 0x18]         ; 005e934f
    FLD float ptr [EAX + 0x24]          ; 005e9353
    FSUB float ptr [ESI + 0x4]          ; 005e9356
    FST float ptr [ESP + 0x1c]          ; 005e9359
    FMUL float ptr [ESP + 0x1c]         ; 005e935d
    FLD float ptr [ESP + 0x18]          ; 005e9361
    FMUL ST0                            ; 005e9365
    FLD float ptr [EAX + 0x28]          ; 005e9367
    FSUB float ptr [ESI + 0x8]          ; 005e936a
    FXCH                                ; 005e936d
    FADDP ST2,ST0                       ; 005e936f
    FST float ptr [ESP + 0x20]          ; 005e9371
    FMUL float ptr [ESP + 0x20]         ; 005e9375
    FADDP                               ; 005e9379
    FSQRT                               ; 005e937b
    FSTP float ptr [ESP + 0x34]         ; 005e937d
    FLD float ptr [ESP + 0x30]          ; 005e9381
        ;   Label: LAB_005e9381
    FCOMP float ptr [EBX + 0x3b0]       ; 005e9385
    FNSTSW AX                           ; 005e938b
    SAHF                                ; 005e938d
    JNC 0x005e93f8                      ; 005e938e | LAB_005e93f8
        ;   XREF to: 005e93f8 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x2c]          ; 005e9390
    FCOMP float ptr [EBX + 0x3b0]       ; 005e9394
    FNSTSW AX                           ; 005e939a
    SAHF                                ; 005e939c
    JBE 0x005e93f8                      ; 005e939d | LAB_005e93f8
        ;   XREF to: 005e93f8 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x34]          ; 005e939f
    FCOMP float ptr [EBX + 0x3b0]       ; 005e93a3
    FNSTSW AX                           ; 005e93a9
    SAHF                                ; 005e93ab
    JBE 0x005e93f8                      ; 005e93ac | LAB_005e93f8
        ;   XREF to: 005e93f8 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 005e93ae
    MOV ECX,dword ptr [EAX + 0x2d4]     ; 005e93b4
    TEST ECX,ECX                        ; 005e93ba
    JNZ 0x005e93f8                      ; 005e93bc | LAB_005e93f8
        ;   XREF to: 005e93f8 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x3b8],0x0     ; 005e93be
    JNZ 0x005e93f8                      ; 005e93c5 | LAB_005e93f8
        ;   XREF to: 005e93f8 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x3b8],0x1     ; 005e93c7
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 005e93d1
    MOV dword ptr [EAX + 0x3bc],ECX     ; 005e93d7
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 005e93dd
    ADD EAX,0x2e0                       ; 005e93e3
    PUSH EAX                            ; 005e93e8
    MOV EDI,dword ptr [0x006793d0]      ; 005e93e9 | CEventList * g_CEventListPtr
    PUSH EDI                            ; 005e93ef | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004aabe0 ; 005e93f0 | void core_event.cpp_CEventList_FUN_004aabe0(CEventList * this_ptr)
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e93f5
    MOV EBP,dword ptr [EBX + 0x2d8]     ; 005e93f8
        ;   Label: LAB_005e93f8
    TEST EBP,EBP                        ; 005e93fe
    JZ 0x005e9442                       ; 005e9400 | LAB_005e9442
        ;   XREF to: 005e9442 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x2dc],0x0     ; 005e9402
    JZ 0x005e9442                       ; 005e9409 | LAB_005e9442
        ;   XREF to: 005e9442 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 005e940b
    CMP dword ptr [EAX + 0x184],0x0     ; 005e9411
    JZ 0x005e9442                       ; 005e9418 | LAB_005e9442
        ;   XREF to: 005e9442 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x3ac]     ; 005e941a
    CMP dword ptr [EAX + 0x184],0x0     ; 005e9420
    JZ 0x005e9442                       ; 005e9427 | LAB_005e9442
        ;   XREF to: 005e9442 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 005e9429
    MOV EAX,dword ptr [EAX + 0x3ac]     ; 005e942f
    CMP dword ptr [EAX + 0x184],0x0     ; 005e9435
    JNZ 0x005e9706                      ; 005e943c | LAB_005e9706
        ;   XREF to: 005e9706 (CONDITIONAL_JUMP)
    ADD ESP,0x38                        ; 005e9442
        ;   Label: LAB_005e9442
    POP EBP                             ; 005e9445
    POP EDI                             ; 005e9446
    POP ESI                             ; 005e9447
    POP EBX                             ; 005e9448
    RET                                 ; 005e9449
    LEA ESI,[EBX + 0x3e4]               ; 005e944a
        ;   Label: LAB_005e944a
    LEA EAX,[EBX + 0x20]                ; 005e9450
    MOV EDX,dword ptr [EAX]             ; 005e9453
    MOV dword ptr [ESI],EDX             ; 005e9455
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e9457
    MOV dword ptr [ESI + 0x4],EDX       ; 005e945a
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e945d
    MOV dword ptr [ESI + 0x8],EDX       ; 005e9460
    MOV EAX,dword ptr [EAX + 0xc]       ; 005e9463
    MOV dword ptr [ESI + 0xc],EAX       ; 005e9466
    FLD float ptr [EBX + 0x3e8]         ; 005e9469
    LEA EAX,[EBX + 0x3f4]               ; 005e946f
    FADD float ptr [0x00657059]         ; 005e9475 | float FLOAT_00657059
    LEA ESI,[EBX + 0x30]                ; 005e947b
    FSTP float ptr [EBX + 0x3e8]        ; 005e947e
    CMP EAX,ESI                         ; 005e9484
    JZ 0x005e9498                       ; 005e9486 | LAB_005e9498
        ;   XREF to: 005e9498 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI]             ; 005e9488
    MOV dword ptr [EAX],EDX             ; 005e948a
    MOV EDX,dword ptr [ESI + 0x4]       ; 005e948c
    MOV dword ptr [EAX + 0x4],EDX       ; 005e948f
    MOV EDX,dword ptr [ESI + 0x8]       ; 005e9492
    MOV dword ptr [EAX + 0x8],EDX       ; 005e9495
    LEA EAX,[EBX + 0x3c4]               ; 005e9498
        ;   Label: LAB_005e9498
    PUSH dword ptr [ESP + 0x50]         ; 005e949e
    PUSH EAX                            ; 005e94a2
    CALL core_flame.cpp_FUN_004c9c00    ; 005e94a3 | undefined core_flame.cpp_FUN_004c9c00()
        ;   XREF to: 004c9c00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e94a8
    JMP 0x005e91d8                      ; 005e94ab | LAB_005e91d8
        ;   XREF to: 005e91d8 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x50]          ; 005e94b0
        ;   Label: LAB_005e94b0
    FMUL double ptr [0x00657039]        ; 005e94b4 | double DOUBLE_00657039
    FADD float ptr [EBX + 0x7ec]        ; 005e94ba
    FST float ptr [EBX + 0x7ec]         ; 005e94c0
    FCOMP double ptr [0x00657041]       ; 005e94c6 | double DOUBLE_00657041
    FNSTSW AX                           ; 005e94cc
    SAHF                                ; 005e94ce
    JC 0x005e91d8                       ; 005e94cf | LAB_005e91d8
        ;   XREF to: 005e91d8 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x7ec]         ; 005e94d5
    FADD float ptr [0x00657049]         ; 005e94db | float FLOAT_00657049
    FSTP float ptr [EBX + 0x7ec]        ; 005e94e1
    JMP 0x005e91d8                      ; 005e94e7 | LAB_005e91d8
        ;   XREF to: 005e91d8 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x3c0],ESI     ; 005e94ec
        ;   Label: LAB_005e94ec
    ADD ESP,0x38                        ; 005e94f2
    POP EBP                             ; 005e94f5
    POP EDI                             ; 005e94f6
    POP ESI                             ; 005e94f7
    POP EBX                             ; 005e94f8
    RET                                 ; 005e94f9
    PUSH EDX                            ; 005e94fa
        ;   Label: LAB_005e94fa
    CALL core_vessel.cpp_FUN_005e9180   ; 005e94fb | undefined core_vessel.cpp_FUN_005e9180()
        ;   XREF to: 005e9180 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e9500
    TEST EAX,EAX                        ; 005e9503
    JZ 0x005e956d                       ; 005e9505 | LAB_005e956d
        ;   XREF to: 005e956d (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBX + 0x2dc]     ; 005e9507
    PUSH ESI                            ; 005e950d
    CALL core_vessel.cpp_FUN_005e9180   ; 005e950e | undefined core_vessel.cpp_FUN_005e9180()
        ;   XREF to: 005e9180 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e9513
    TEST EAX,EAX                        ; 005e9516
    JZ 0x005e956d                       ; 005e9518 | LAB_005e956d
        ;   XREF to: 005e956d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005e951a
        ;   Label: LAB_005e951a
    MOV dword ptr [EBX + 0x3b8],0x2     ; 005e9520
    LEA ESI,[EBX + 0x20]                ; 005e952a
    MOV EDX,dword ptr [EAX + 0x20]      ; 005e952d
    MOV dword ptr [ESI],EDX             ; 005e9530
    MOV EDX,dword ptr [EAX + 0x24]      ; 005e9532
    MOV dword ptr [ESI + 0x4],EDX       ; 005e9535
    MOV EDX,dword ptr [EAX + 0x28]      ; 005e9538
    MOV dword ptr [ESI + 0x8],EDX       ; 005e953b
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005e953e
    MOV dword ptr [ESI + 0xc],EAX       ; 005e9541
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005e9544
    LEA ESI,[EBX + 0x30]                ; 005e954a
    ADD EAX,0x30                        ; 005e954d
    CMP ESI,EAX                         ; 005e9550
    JZ 0x005e9294                       ; 005e9552 | LAB_005e9294
        ;   XREF to: 005e9294 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 005e9558
    MOV dword ptr [ESI],EDX             ; 005e955a
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e955c
    MOV dword ptr [ESI + 0x4],EDX       ; 005e955f
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e9562
    MOV dword ptr [ESI + 0x8],EDX       ; 005e9565
    JMP 0x005e9294                      ; 005e9568 | LAB_005e9294
        ;   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0x2d8]     ; 005e956d
        ;   Label: LAB_005e956d
    PUSH EDI                            ; 005e9573
    CALL core_vessel.cpp_FUN_005e9180   ; 005e9574 | undefined core_vessel.cpp_FUN_005e9180()
        ;   XREF to: 005e9180 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e9579
    TEST EAX,EAX                        ; 005e957c
    JZ 0x005e959a                       ; 005e957e | LAB_005e959a
        ;   XREF to: 005e959a (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x24],0x461c3f9a ; 005e9580
        ;   Label: LAB_005e9580
    MOV dword ptr [EBX + 0x28],0x461c3f9a ; 005e9587
    MOV dword ptr [EBX + 0x20],0x461c3f9a ; 005e958e
    JMP 0x005e9294                      ; 005e9595 | LAB_005e9294
        ;   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
    MOV EBP,dword ptr [EBX + 0x2dc]     ; 005e959a
        ;   Label: LAB_005e959a
    PUSH EBP                            ; 005e95a0
    CALL core_vessel.cpp_FUN_005e9180   ; 005e95a1 | undefined core_vessel.cpp_FUN_005e9180()
        ;   XREF to: 005e9180 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e95a6
    TEST EAX,EAX                        ; 005e95a9
    JNZ 0x005e9580                      ; 005e95ab | LAB_005e9580
        ;   XREF to: 005e9580 (CONDITIONAL_JUMP)
    JMP 0x005e951a                      ; 005e95ad | LAB_005e951a
        ;   XREF to: 005e951a (UNCONDITIONAL_JUMP)
    CMP EBP,0x2                         ; 005e95b2
        ;   Label: LAB_005e95b2
    JNZ 0x005e95ed                      ; 005e95b5 | LAB_005e95ed
        ;   XREF to: 005e95ed (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x3bc]         ; 005e95b7
    FSUB float ptr [ESP + 0x50]         ; 005e95bd
    FST float ptr [EBX + 0x3bc]         ; 005e95c1
    FLDZ                                ; 005e95c7
    FCOMPP                              ; 005e95c9
    FNSTSW AX                           ; 005e95cb
    SAHF                                ; 005e95cd
    JBE 0x005e9442                      ; 005e95ce | LAB_005e9442
        ;   XREF to: 005e9442 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x3b8],0x0     ; 005e95d4
    MOV dword ptr [EBX + 0x3bc],0x0     ; 005e95de
    JMP 0x005e9294                      ; 005e95e8 | LAB_005e9294
        ;   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
    CMP EBP,0x3                         ; 005e95ed
        ;   Label: LAB_005e95ed
    JNZ 0x005e9294                      ; 005e95f0 | LAB_005e9294
        ;   XREF to: 005e9294 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005e95f6
    CMP dword ptr [EAX + 0x184],0x0     ; 005e95fc
    JNZ 0x005e9614                      ; 005e9603 | LAB_005e9614
        ;   XREF to: 005e9614 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 005e9605
    CMP dword ptr [EAX + 0x184],0x0     ; 005e960b
    JZ 0x005e962d                       ; 005e9612 | LAB_005e962d
        ;   XREF to: 005e962d (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x3bc],0x0     ; 005e9614
        ;   Label: LAB_005e9614
    MOV dword ptr [EBX + 0x3b8],0x0     ; 005e961e
    JMP 0x005e9294                      ; 005e9628 | LAB_005e9294
        ;   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x3bc]         ; 005e962d
        ;   Label: LAB_005e962d
    FSUB float ptr [ESP + 0x50]         ; 005e9633
    FST float ptr [EBX + 0x3bc]         ; 005e9637
    FLDZ                                ; 005e963d
    FCOMPP                              ; 005e963f
    FNSTSW AX                           ; 005e9641
    SAHF                                ; 005e9643
    JBE 0x005e9442                      ; 005e9644 | LAB_005e9442
        ;   XREF to: 005e9442 (CONDITIONAL_JUMP)
    PUSH 0x40800000                     ; 005e964a
    PUSH 0x44bb8000                     ; 005e964f
    PUSH 0x41000000                     ; 005e9654
    PUSH ESI                            ; 005e9659
    MOV EAX,[0x0067a3d0]                ; 005e965a | CFireEffect g_CFireEffectInstance | CFireEffect * g_CFireEffectPtr
    PUSH EAX                            ; 005e965f | CFireEffect g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c8c10 ; 005e9660 | void core_fire.cpp_CFireEffect_FUN_004c8c10(CFireEffect * this_ptr)
        ;   XREF to: 004c8c10 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005e9665
    MOV dword ptr [EBX + 0x3bc],0x3f800000 ; 005e966b
    MOV EDX,dword ptr [EAX + 0x20]      ; 005e9675
    MOV dword ptr [ESI],EDX             ; 005e9678
    MOV EDX,dword ptr [EAX + 0x24]      ; 005e967a
    MOV dword ptr [ESI + 0x4],EDX       ; 005e967d
    MOV EDX,dword ptr [EAX + 0x28]      ; 005e9680
    MOV dword ptr [ESI + 0x8],EDX       ; 005e9683
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005e9686
    MOV dword ptr [ESI + 0xc],EAX       ; 005e9689
    MOV EAX,dword ptr [EBX + 0x3a8]     ; 005e968c
    ADD EAX,0x30                        ; 005e9692
    ADD ESP,0x14                        ; 005e9695
    CMP EDI,EAX                         ; 005e9698
    JNZ 0x005e96ab                      ; 005e969a | LAB_005e96ab
        ;   XREF to: 005e96ab (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x3b8],0x2     ; 005e969c
    JMP 0x005e9294                      ; 005e96a6 | LAB_005e9294
        ;   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 005e96ab
        ;   Label: LAB_005e96ab
    MOV dword ptr [EDI],EDX             ; 005e96ad
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e96af
    MOV dword ptr [EDI + 0x4],EDX       ; 005e96b2
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e96b5
    MOV dword ptr [EDI + 0x8],EDX       ; 005e96b8
    MOV dword ptr [EBX + 0x3b8],0x2     ; 005e96bb
    JMP 0x005e9294                      ; 005e96c5 | LAB_005e9294
        ;   XREF to: 005e9294 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x3ac]     ; 005e96ca
        ;   Label: LAB_005e96ca
    CMP dword ptr [EAX + 0x184],0x0     ; 005e96d0
    JNZ 0x005e92a7                      ; 005e96d7 | LAB_005e92a7
        ;   XREF to: 005e92a7 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x3b8],0x0     ; 005e96dd
    JNZ 0x005e9442                      ; 005e96e4 | LAB_005e9442
        ;   XREF to: 005e9442 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x3bc],0x40400000 ; 005e96ea
    MOV dword ptr [EBX + 0x3b8],0x3     ; 005e96f4
    ADD ESP,0x38                        ; 005e96fe
    POP EBP                             ; 005e9701
    POP EDI                             ; 005e9702
    POP ESI                             ; 005e9703
    POP EBX                             ; 005e9704
    RET                                 ; 005e9705
    LEA EAX,[EBX + 0x344]               ; 005e9706
        ;   Label: LAB_005e9706
    PUSH EAX                            ; 005e970c
    MOV EDI,dword ptr [0x006793d0]      ; 005e970d | CEventList * g_CEventListPtr
    PUSH EDI                            ; 005e9713 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004aabe0 ; 005e9714 | void core_event.cpp_CEventList_FUN_004aabe0(CEventList * this_ptr)
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 005e9719
    MOV dword ptr [EAX + 0x7f0],0x1     ; 005e971f
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 005e9729
    MOV dword ptr [EAX + 0x7f0],0x1     ; 005e972f
    ADD ESP,0x8                         ; 005e9739
    MOV dword ptr [EBX + 0x7f0],0x1     ; 005e973c
    ADD ESP,0x38                        ; 005e9746
    POP EBP                             ; 005e9749
    POP EDI                             ; 005e974a
    POP ESI                             ; 005e974b
    POP EBX                             ; 005e974c
    RET                                 ; 005e974d

