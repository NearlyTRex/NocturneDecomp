; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_svetlana_cpp_FUN_005d9260(void)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 at 005d8f54
;
; Referenced Globals:
;   double DOUBLE_00654aca = 6
;   double DOUBLE_00654ad2 = 0.318309886192889
;   double DOUBLE_00654ada = 4
;   double DOUBLE_00654ae2 = 10
;   double DOUBLE_00654aea = -0.25
;   double DOUBLE_00654af2 = 0.25
;   double DOUBLE_00654afa = 3.14159265350000
;   double DOUBLE_00654b02 = -3.14159265350000
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_FUN_0042ede0
;   core_hero.cpp_FUN_004f3960
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_path.cpp_FUN_00548500
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d9260
        ;   Label: core_svetlana.cpp_FUN_005d9260
    PUSH ESI                            ; 005d9261
    PUSH EDI                            ; 005d9262
    PUSH EBP                            ; 005d9263
    MOV EBP,ESP                         ; 005d9264
    SUB ESP,0xa8                        ; 005d9266
    AND ESP,0xfffffff8                  ; 005d926c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d926f
    MOV EDX,0x3e800000                  ; 005d9272
    MOV ECX,0x3f490fdb                  ; 005d9277
    PUSH 0x2c                           ; 005d927c
    XOR ESI,ESI                         ; 005d927e
    MOV EDI,dword ptr [0x02db87d0]      ; 005d9280 | g_LocalHeroIndex
    PUSH ESI                            ; 005d9286
    LEA EAX,[EBX + 0xbe2c]              ; 005d9287
    MOV dword ptr [ESP + 0xa4],EDX      ; 005d928d
    PUSH EAX                            ; 005d9294
    MOV dword ptr [ESP + 0xa0],ECX      ; 005d9295
    MOV EDI,dword ptr [EDI*0x4 + 0x2db87c0] ; 005d929c | g_HeroActors
    CALL crt_memory.c_memset_FUN_005fde40 ; 005d92a3
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,dword ptr [EBX + 0x1fbd0]   ; 005d92a8
    ADD ESP,0xc                         ; 005d92ae
    TEST EAX,EAX                        ; 005d92b1
    JZ 0x005d96a7                       ; 005d92b3
        ;   XREF to: 005d96a7 (CONDITIONAL_JUMP)  ; LAB_005d96a7
    MOV EAX,[0x02db87d0]                ; 005d92b9 | g_LocalHeroIndex
    LEA EDX,[EBX + 0x20]                ; 005d92be
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005d92c1 | g_HeroActors
    FLD float ptr [EDX]                 ; 005d92c8
    FSUB float ptr [EAX + 0x20]         ; 005d92ca
    FSTP float ptr [ESP + 0x4c]         ; 005d92cd
    FLD float ptr [EDX + 0x4]           ; 005d92d1
    FSUB float ptr [EAX + 0x24]         ; 005d92d4
    FST float ptr [ESP + 0x50]          ; 005d92d7
    FMUL float ptr [ESP + 0x50]         ; 005d92db
    FLD float ptr [ESP + 0x4c]          ; 005d92df
    FMUL ST0                            ; 005d92e3
    FLD float ptr [EDX + 0x8]           ; 005d92e5
    FSUB float ptr [EAX + 0x28]         ; 005d92e8
    FXCH                                ; 005d92eb
    FADDP ST2,ST0                       ; 005d92ed
    FST float ptr [ESP + 0x54]          ; 005d92ef
    FMUL float ptr [ESP + 0x54]         ; 005d92f3
    FADDP                               ; 005d92f7
    FSQRT                               ; 005d92f9
    MOV EDX,dword ptr [EBX + 0x1fbd0]   ; 005d92fb
    FSTP float ptr [ESP + 0x88]         ; 005d9301
    CMP EDX,0x3                         ; 005d9308
    JNZ 0x005d9314                      ; 005d930b
        ;   XREF to: 005d9314 (CONDITIONAL_JUMP)  ; LAB_005d9314
    MOV dword ptr [ESP + 0x88],ESI      ; 005d930d
    MOV dword ptr [ESP + 0x90],0x41a00000 ; 005d9314
        ;   Label: LAB_005d9314
    MOV EAX,[0x02db87d0]                ; 005d931f | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005d9324 | g_HeroActors
    PUSH EAX                            ; 005d932b
    MOV EDX,dword ptr [EAX + 0x154]     ; 005d932c
    CALL dword ptr [EDX + 0x15c]        ; 005d9332
    ADD ESP,0x4                         ; 005d9338
    TEST EAX,EAX                        ; 005d933b
    JZ 0x005d934a                       ; 005d933d
        ;   XREF to: 005d934a (CONDITIONAL_JUMP)  ; LAB_005d934a
    MOV dword ptr [ESP + 0x90],0x41f00000 ; 005d933f
    FLD float ptr [ESP + 0x88]          ; 005d934a
        ;   Label: LAB_005d934a
    FCOMP float ptr [ESP + 0x90]        ; 005d9351
    FNSTSW AX                           ; 005d9358
    SAHF                                ; 005d935a
    JNC 0x005d93ab                      ; 005d935b
        ;   XREF to: 005d93ab (CONDITIONAL_JUMP)  ; LAB_005d93ab
    MOV ECX,dword ptr [EBX + 0x1fbd0]   ; 005d935d
    CMP ECX,0x2                         ; 005d9363
    JNZ 0x005d96ae                      ; 005d9366
        ;   XREF to: 005d96ae (CONDITIONAL_JUMP)  ; LAB_005d96ae
    LEA EAX,[ESP + 0x7c]                ; 005d936c
        ;   Label: LAB_005d936c
    PUSH EAX                            ; 005d9370
    MOV EDX,0x461c3f9a                  ; 005d9371
    PUSH EBX                            ; 005d9376
    MOV dword ptr [ESP + 0x84],EDX      ; 005d9377
    CALL core_hero.cpp_FUN_004f3960     ; 005d937e
        ;   XREF to: 004f3960 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004f3960()
    MOV EDX,EAX                         ; 005d9383
    ADD ESP,0x8                         ; 005d9385
    TEST EAX,EAX                        ; 005d9388
    JZ 0x005d96bc                       ; 005d938a
        ;   XREF to: 005d96bc (CONDITIONAL_JUMP)  ; LAB_005d96bc
    FLD float ptr [ESP + 0x7c]          ; 005d9390
    FCOMP float ptr [ESP + 0x90]        ; 005d9394
    FNSTSW AX                           ; 005d939b
    SAHF                                ; 005d939d
    JNC 0x005d96bc                      ; 005d939e
        ;   XREF to: 005d96bc (CONDITIONAL_JUMP)  ; LAB_005d96bc
    MOV ESI,0x1                         ; 005d93a4
    MOV EDI,EDX                         ; 005d93a9
    LEA EDX,[EDI + 0x20]                ; 005d93ab
        ;   Label: LAB_005d93ab
    LEA EAX,[EBX + 0x20]                ; 005d93ae
    FLD float ptr [EDX]                 ; 005d93b1
    FSUB float ptr [EAX]                ; 005d93b3
    FSTP float ptr [ESP + 0x40]         ; 005d93b5
    FLD float ptr [EDX + 0x4]           ; 005d93b9
    FSUB float ptr [EAX + 0x4]          ; 005d93bc
    FSTP float ptr [ESP + 0x44]         ; 005d93bf
    FLD float ptr [EDX + 0x8]           ; 005d93c3
    LEA EDX,[ESP + 0x40]                ; 005d93c6
    FSUB float ptr [EAX + 0x8]          ; 005d93ca
    LEA EAX,[ESP + 0x4c]                ; 005d93cd
    FSTP float ptr [ESP + 0x48]         ; 005d93d1
    CMP EAX,EDX                         ; 005d93d5
    JZ 0x005d93f1                       ; 005d93d7
        ;   XREF to: 005d93f1 (CONDITIONAL_JUMP)  ; LAB_005d93f1
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d93d9
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d93dd
    MOV EAX,dword ptr [ESP + 0x44]      ; 005d93e1
    MOV dword ptr [ESP + 0x50],EAX      ; 005d93e5
    MOV EAX,dword ptr [ESP + 0x48]      ; 005d93e9
    MOV dword ptr [ESP + 0x54],EAX      ; 005d93ed
    FLD float ptr [ESP + 0x50]          ; 005d93f1
        ;   Label: LAB_005d93f1
    FMUL ST0                            ; 005d93f5
    FLD float ptr [ESP + 0x4c]          ; 005d93f7
    FMUL ST0                            ; 005d93fb
    FADDP                               ; 005d93fd
    FLD float ptr [ESP + 0x54]          ; 005d93ff
    FMUL ST0                            ; 005d9403
    FADDP                               ; 005d9405
    FSQRT                               ; 005d9407
    MOV dword ptr [EBX + 0x2418],0x0    ; 005d9409
    FSTP float ptr [ESP + 0xa0]         ; 005d9413
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005d941a
    FLD float ptr [ESP + 0xa0]          ; 005d9421
    MOV dword ptr [ESP + 0x24],EAX      ; 005d9428
    FCOMP double ptr [0x00654aca]       ; 005d942c | DOUBLE_00654aca
    FNSTSW AX                           ; 005d9432
    SAHF                                ; 005d9434
    JNC 0x005d9791                      ; 005d9435
        ;   XREF to: 005d9791 (CONDITIONAL_JUMP)  ; LAB_005d9791
    LEA EAX,[EBX + 0x158]               ; 005d943b
    CMP ESI,0x1                         ; 005d9441
    JNZ 0x005d9700                      ; 005d9444
        ;   XREF to: 005d9700 (CONDITIONAL_JUMP)  ; LAB_005d9700
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 005d944a
    JNZ 0x005d96d8                      ; 005d9451
        ;   XREF to: 005d96d8 (CONDITIONAL_JUMP)  ; LAB_005d96d8
    MOV dword ptr [EBX + 0xbe44],ESI    ; 005d9457
    MOV dword ptr [EBX + 0x2dc4],0x0    ; 005d945d
        ;   Label: LAB_005d945d
    CMP ESI,0x1                         ; 005d9467
        ;   Label: LAB_005d9467
    JNZ 0x005d9535                      ; 005d946a
        ;   XREF to: 005d9535 (CONDITIONAL_JUMP)  ; LAB_005d9535
    LEA EAX,[ESP + 0x4c]                ; 005d9470
    PUSH EAX                            ; 005d9474
    LEA EAX,[ESP + 0x68]                ; 005d9475
    PUSH EAX                            ; 005d9479
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005d947a
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 005d947f
    ADD ESP,0x8                         ; 005d9482
    FSUB float ptr [EBX + 0x34]         ; 005d9485
    SUB ESP,0x4                         ; 005d9488
    FSTP float ptr [ESP]                ; 005d948b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005d948e
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xa8],EAX      ; 005d9493
    FLD float ptr [ESP + 0xa8]          ; 005d949a
    FMUL double ptr [0x00654ad2]        ; 005d94a1 | DOUBLE_00654ad2
    ADD ESP,0x4                         ; 005d94a7
    FMUL double ptr [0x00654ada]        ; 005d94aa | DOUBLE_00654ada
    FLD float ptr [ESP + 0x9c]          ; 005d94b0
    FCHS                                ; 005d94b7
    FSTP float ptr [ESP + 0x84]         ; 005d94b9
    FST float ptr [EBX + 0xbe50]        ; 005d94c0
    FCOMP float ptr [ESP + 0x84]        ; 005d94c6
    FNSTSW AX                           ; 005d94cd
    SAHF                                ; 005d94cf
    JNC 0x005d94df                      ; 005d94d0
        ;   XREF to: 005d94df (CONDITIONAL_JUMP)  ; LAB_005d94df
    MOV EAX,dword ptr [ESP + 0x84]      ; 005d94d2
    MOV dword ptr [EBX + 0xbe50],EAX    ; 005d94d9
    FLD float ptr [EBX + 0xbe50]        ; 005d94df
        ;   Label: LAB_005d94df
    FCOMP float ptr [ESP + 0x9c]        ; 005d94e5
    FNSTSW AX                           ; 005d94ec
    SAHF                                ; 005d94ee
    JBE 0x005d94fe                      ; 005d94ef
        ;   XREF to: 005d94fe (CONDITIONAL_JUMP)  ; LAB_005d94fe
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005d94f1
    MOV dword ptr [EBX + 0xbe50],EAX    ; 005d94f8
    FLD float ptr [EBX + 0xbe50]        ; 005d94fe
        ;   Label: LAB_005d94fe
    FST double ptr [ESP + 0x18]         ; 005d9504
    FCOMP double ptr [0x00654aea]       ; 005d9508 | DOUBLE_00654aea
    FNSTSW AX                           ; 005d950e
    SAHF                                ; 005d9510
    JBE 0x005d9535                      ; 005d9511
        ;   XREF to: 005d9535 (CONDITIONAL_JUMP)  ; LAB_005d9535
    FLD double ptr [ESP + 0x18]         ; 005d9513
    FCOMP double ptr [0x00654af2]       ; 005d9517 | DOUBLE_00654af2
    FNSTSW AX                           ; 005d951d
    SAHF                                ; 005d951f
    JNC 0x005d9535                      ; 005d9520
        ;   XREF to: 005d9535 (CONDITIONAL_JUMP)  ; LAB_005d9535
    CMP dword ptr [EBX + 0xbe38],0x0    ; 005d9522
    JZ 0x005d9535                       ; 005d9529
        ;   XREF to: 005d9535 (CONDITIONAL_JUMP)  ; LAB_005d9535
    MOV dword ptr [EBX + 0xbe50],0x0    ; 005d952b
    FLDZ                                ; 005d9535
        ;   Label: LAB_005d9535
    FLD float ptr [EBX + 0x2418]        ; 005d9537
    FSTP double ptr [ESP + 0x8]         ; 005d953d
    FCOMP double ptr [ESP + 0x8]        ; 005d9541
    FNSTSW AX                           ; 005d9545
    SAHF                                ; 005d9547
    JNC 0x005d9945                      ; 005d9548
        ;   XREF to: 005d9945 (CONDITIONAL_JUMP)  ; LAB_005d9945
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005d954e
    MOV dword ptr [EBX + 0x2418],0x0    ; 005d9555
    MOV dword ptr [EBX + 0xbe50],EAX    ; 005d955f
    LEA EAX,[EBX + 0x20]                ; 005d9565
        ;   Label: LAB_005d9565
    FLD float ptr [EDI + 0x20]          ; 005d9568
    FSUB float ptr [EAX]                ; 005d956b
    FSTP float ptr [ESP + 0x58]         ; 005d956d
    FLD float ptr [EDI + 0x24]          ; 005d9571
    FSUB float ptr [EAX + 0x4]          ; 005d9574
    LEA EDX,[ESP + 0x4c]                ; 005d9577
    FSTP float ptr [ESP + 0x5c]         ; 005d957b
    FLD float ptr [EDI + 0x28]          ; 005d957f
    FSUB float ptr [EAX + 0x8]          ; 005d9582
    LEA EAX,[ESP + 0x58]                ; 005d9585
    FSTP float ptr [ESP + 0x60]         ; 005d9589
    CMP EDX,EAX                         ; 005d958d
    JZ 0x005d95a9                       ; 005d958f
        ;   XREF to: 005d95a9 (CONDITIONAL_JUMP)  ; LAB_005d95a9
    MOV EAX,dword ptr [ESP + 0x58]      ; 005d9591
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d9595
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005d9599
    MOV dword ptr [ESP + 0x50],EAX      ; 005d959d
    MOV EAX,dword ptr [ESP + 0x60]      ; 005d95a1
    MOV dword ptr [ESP + 0x54],EAX      ; 005d95a5
    LEA EAX,[ESP + 0x4c]                ; 005d95a9
        ;   Label: LAB_005d95a9
    PUSH EAX                            ; 005d95ad
    LEA EAX,[ESP + 0x38]                ; 005d95ae
    PUSH EAX                            ; 005d95b2
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005d95b3
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 005d95b8
    LEA EAX,[ESP + 0x54]                ; 005d95ba
    ADD ESP,0x8                         ; 005d95be
    CMP EAX,EDX                         ; 005d95c1
    JZ 0x005d95d9                       ; 005d95c3
        ;   XREF to: 005d95d9 (CONDITIONAL_JUMP)  ; LAB_005d95d9
    MOV EAX,dword ptr [EDX]             ; 005d95c5
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d95c7
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d95cb
    MOV dword ptr [ESP + 0x50],EAX      ; 005d95ce
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d95d2
    MOV dword ptr [ESP + 0x54],EAX      ; 005d95d5
    FLD float ptr [ESP + 0x50]          ; 005d95d9
        ;   Label: LAB_005d95d9
    FSUB float ptr [EBX + 0x34]         ; 005d95dd
    SUB ESP,0x4                         ; 005d95e0
    FSTP float ptr [ESP]                ; 005d95e3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005d95e6
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xa8],EAX      ; 005d95eb
    FLD float ptr [ESP + 0xa8]          ; 005d95f2
    ADD ESP,0x4                         ; 005d95f9
    FST float ptr [ESP + 0x2c]          ; 005d95fc
    FCOMP float ptr [ESP + 0x94]        ; 005d9600
    FNSTSW AX                           ; 005d9607
    SAHF                                ; 005d9609
    JBE 0x005d9617                      ; 005d960a
        ;   XREF to: 005d9617 (CONDITIONAL_JUMP)  ; LAB_005d9617
    MOV EAX,dword ptr [ESP + 0x94]      ; 005d960c
    MOV dword ptr [ESP + 0x2c],EAX      ; 005d9613
    FLD float ptr [ESP + 0x2c]          ; 005d9617
        ;   Label: LAB_005d9617
    FLD float ptr [ESP + 0x94]          ; 005d961b
    FCHS                                ; 005d9622
    FSTP float ptr [ESP + 0x8c]         ; 005d9624
    FCOMP float ptr [ESP + 0x8c]        ; 005d962b
    FNSTSW AX                           ; 005d9632
    SAHF                                ; 005d9634
    JNC 0x005d9642                      ; 005d9635
        ;   XREF to: 005d9642 (CONDITIONAL_JUMP)  ; LAB_005d9642
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005d9637
    MOV dword ptr [ESP + 0x2c],EAX      ; 005d963e
    FLD float ptr [ESP + 0x2c]          ; 005d9642
        ;   Label: LAB_005d9642
    FLD float ptr [EBP + 0x18]          ; 005d9646
    FXCH                                ; 005d9649
    FSUB float ptr [EBX + 0x9f8c4]      ; 005d964b
    FXCH                                ; 005d9651
    FMUL double ptr [0x00654afa]        ; 005d9653 | DOUBLE_00654afa
    FXCH                                ; 005d9659
    FST float ptr [ESP + 0x20]          ; 005d965b
    FXCH                                ; 005d965f
    FSTP double ptr [ESP]               ; 005d9661
    FCOMP double ptr [ESP]              ; 005d9664
    FNSTSW AX                           ; 005d9667
    SAHF                                ; 005d9669
    JBE 0x005d9673                      ; 005d966a
        ;   XREF to: 005d9673 (CONDITIONAL_JUMP)  ; LAB_005d9673
    FLD double ptr [ESP]                ; 005d966c
    FSTP float ptr [ESP + 0x20]         ; 005d966f
    FLD float ptr [EBP + 0x18]          ; 005d9673
        ;   Label: LAB_005d9673
    FMUL double ptr [0x00654b02]        ; 005d9676 | DOUBLE_00654b02
    FLD float ptr [ESP + 0x20]          ; 005d967c
    FXCH                                ; 005d9680
    FSTP double ptr [ESP + 0x10]        ; 005d9682
    FCOMP double ptr [ESP + 0x10]       ; 005d9686
    FNSTSW AX                           ; 005d968a
    SAHF                                ; 005d968c
    JNC 0x005d9697                      ; 005d968d
        ;   XREF to: 005d9697 (CONDITIONAL_JUMP)  ; LAB_005d9697
    FLD double ptr [ESP + 0x10]         ; 005d968f
    FSTP float ptr [ESP + 0x20]         ; 005d9693
    FLD float ptr [EBX + 0x9f8c4]       ; 005d9697
        ;   Label: LAB_005d9697
    FADD float ptr [ESP + 0x20]         ; 005d969d
    FSTP float ptr [EBX + 0x9f8c4]      ; 005d96a1
    MOV ESP,EBP                         ; 005d96a7
        ;   Label: LAB_005d96a7
    POP EBP                             ; 005d96a9
    POP EDI                             ; 005d96aa
    POP ESI                             ; 005d96ab
    POP EBX                             ; 005d96ac
    RET                                 ; 005d96ad
    CMP ECX,0x3                         ; 005d96ae
        ;   Label: LAB_005d96ae
    JZ 0x005d936c                       ; 005d96b1
        ;   XREF to: 005d936c (CONDITIONAL_JUMP)  ; LAB_005d936c
    JMP 0x005d93ab                      ; 005d96b7
        ;   XREF to: 005d93ab (UNCONDITIONAL_JUMP)  ; LAB_005d93ab
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 005d96bc
        ;   Label: LAB_005d96bc
    JZ 0x005d93ab                       ; 005d96c3
        ;   XREF to: 005d93ab (CONDITIONAL_JUMP)  ; LAB_005d93ab
    MOV dword ptr [EBX + 0xbe44],0x1    ; 005d96c9
    JMP 0x005d93ab                      ; 005d96d3
        ;   XREF to: 005d93ab (UNCONDITIONAL_JUMP)  ; LAB_005d93ab
    PUSH EAX                            ; 005d96d8
        ;   Label: LAB_005d96d8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005d96d9
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005d96de
    ADD ESP,0x4                         ; 005d96e1
    CMP EAX,0x2                         ; 005d96e4
    JZ 0x005d945d                       ; 005d96e7
        ;   XREF to: 005d945d (CONDITIONAL_JUMP)  ; LAB_005d945d
    CMP EAX,ESI                         ; 005d96ed
    JZ 0x005d945d                       ; 005d96ef
        ;   XREF to: 005d945d (CONDITIONAL_JUMP)  ; LAB_005d945d
    MOV dword ptr [EBX + 0xbe38],ESI    ; 005d96f5
    JMP 0x005d945d                      ; 005d96fb
        ;   XREF to: 005d945d (UNCONDITIONAL_JUMP)  ; LAB_005d945d
    PUSH EAX                            ; 005d9700
        ;   Label: LAB_005d9700
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005d9701
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005d9706
    ADD ESP,0x4                         ; 005d9709
    CMP EAX,0xa                         ; 005d970c
    JNZ 0x005d9724                      ; 005d970f
        ;   XREF to: 005d9724 (CONDITIONAL_JUMP)  ; LAB_005d9724
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 005d9711
    JZ 0x005d9724                       ; 005d9718
        ;   XREF to: 005d9724 (CONDITIONAL_JUMP)  ; LAB_005d9724
    MOV dword ptr [EBX + 0xbe44],0x1    ; 005d971a
    MOV EAX,[0x02db87d0]                ; 005d9724 | g_LocalHeroIndex
        ;   Label: LAB_005d9724
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005d9729 | g_HeroActors
    PUSH EAX                            ; 005d9730
    MOV EDX,dword ptr [EAX + 0x154]     ; 005d9731
    CALL dword ptr [EDX + 0x15c]        ; 005d9737
    ADD ESP,0x4                         ; 005d973d
    TEST EAX,EAX                        ; 005d9740
    JNZ 0x005d9467                      ; 005d9742
        ;   XREF to: 005d9467 (CONDITIONAL_JUMP)  ; LAB_005d9467
    PUSH dword ptr [EBP + 0x18]         ; 005d9748
    PUSH EBX                            ; 005d974b
    CALL core_charactr.cpp_CCharacter_FUN_0042ede0 ; 005d974c
        ;   XREF to: 0042ede0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ede0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005d9751
    CMP EAX,0x1                         ; 005d9754
    JC 0x005d9467                       ; 005d9757
        ;   XREF to: 005d9467 (CONDITIONAL_JUMP)  ; LAB_005d9467
    JA 0x005d9787                       ; 005d975d
        ;   XREF to: 005d9787 (CONDITIONAL_JUMP)  ; LAB_005d9787
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 005d975f
    JMP 0x005d9467                      ; 005d9769
        ;   XREF to: 005d9467 (UNCONDITIONAL_JUMP)  ; LAB_005d9467
    MOV dword ptr [EBX + 0xbe34],0x1    ; 005d976e
        ;   Label: LAB_005d976e
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 005d9778
    JMP 0x005d9467                      ; 005d9782
        ;   XREF to: 005d9467 (UNCONDITIONAL_JUMP)  ; LAB_005d9467
    CMP EAX,0x2                         ; 005d9787
        ;   Label: LAB_005d9787
    JZ 0x005d976e                       ; 005d978a
        ;   XREF to: 005d976e (CONDITIONAL_JUMP)  ; LAB_005d976e
    JMP 0x005d9467                      ; 005d978c
        ;   XREF to: 005d9467 (UNCONDITIONAL_JUMP)  ; LAB_005d9467
    XOR EAX,EAX                         ; 005d9791
        ;   Label: LAB_005d9791
    MOV dword ptr [ESP + 0x98],EAX      ; 005d9793
    TEST ESI,ESI                        ; 005d979a
    JNZ 0x005d990f                      ; 005d979c
        ;   XREF to: 005d990f (CONDITIONAL_JUMP)  ; LAB_005d990f
    MOV EAX,[0x02db87d0]                ; 005d97a2 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005d97a7 | g_HeroActors
    PUSH EAX                            ; 005d97ae
    MOV EDX,dword ptr [EAX + 0x154]     ; 005d97af
    CALL dword ptr [EDX + 0xbc]         ; 005d97b5
    ADD ESP,0x4                         ; 005d97bb
    MOV dword ptr [ESP + 0x98],EAX      ; 005d97be
    MOV EAX,[0x02db87d0]                ; 005d97c5 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005d97ca | g_HeroActors
    PUSH EAX                            ; 005d97d1
    MOV EDX,dword ptr [EAX + 0x154]     ; 005d97d2
    CALL dword ptr [EDX + 0x15c]        ; 005d97d8
    ADD ESP,0x4                         ; 005d97de
    TEST EAX,EAX                        ; 005d97e1
    JZ 0x005d98ee                       ; 005d97e3
        ;   XREF to: 005d98ee (CONDITIONAL_JUMP)  ; LAB_005d98ee
    CMP dword ptr [ESP + 0x98],0x0      ; 005d97e9
        ;   Label: LAB_005d97e9
    JNZ 0x005d9806                      ; 005d97f1
        ;   XREF to: 005d9806 (CONDITIONAL_JUMP)  ; LAB_005d9806
    LEA EAX,[EDI + 0x20]                ; 005d97f3
    PUSH EAX                            ; 005d97f6
    CALL core_path.cpp_FUN_00548500     ; 005d97f7
        ;   XREF to: 00548500 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_FUN_00548500()
    ADD ESP,0x4                         ; 005d97fc
    MOV dword ptr [ESP + 0x98],EAX      ; 005d97ff
    MOV ECX,dword ptr [EBX + 0x6c]      ; 005d9806
        ;   Label: LAB_005d9806
    PUSH ECX                            ; 005d9809
    LEA EAX,[ESP + 0x74]                ; 005d980a
    PUSH EAX                            ; 005d980e
    LEA EAX,[EBX + 0x20]                ; 005d980f
    PUSH EAX                            ; 005d9812
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005d9813
    PUSH EAX                            ; 005d981a
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 005d981b
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 005d9820
    TEST EAX,EAX                        ; 005d9823
    JZ 0x005d9535                       ; 005d9825
        ;   XREF to: 005d9535 (CONDITIONAL_JUMP)  ; LAB_005d9535
    FLD float ptr [ESP + 0x74]          ; 005d982b
    FSUB float ptr [EBX + 0x34]         ; 005d982f
    SUB ESP,0x4                         ; 005d9832
    FSTP float ptr [ESP]                ; 005d9835
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005d9838
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xa8],EAX      ; 005d983d
    FLD float ptr [ESP + 0xa8]          ; 005d9844
    FMUL double ptr [0x00654ad2]        ; 005d984b | DOUBLE_00654ad2
    ADD ESP,0x4                         ; 005d9851
    FMUL double ptr [0x00654ada]        ; 005d9854 | DOUBLE_00654ada
    FLD float ptr [ESP + 0x9c]          ; 005d985a
    FCHS                                ; 005d9861
    FSTP float ptr [ESP + 0x80]         ; 005d9863
    FST float ptr [EBX + 0xbe50]        ; 005d986a
    FCOMP float ptr [ESP + 0x80]        ; 005d9870
    FNSTSW AX                           ; 005d9877
    SAHF                                ; 005d9879
    JC 0x005d991a                       ; 005d987a
        ;   XREF to: 005d991a (CONDITIONAL_JUMP)  ; LAB_005d991a
    FLD float ptr [EBX + 0xbe50]        ; 005d9880
        ;   Label: LAB_005d9880
    FCOMP float ptr [ESP + 0x9c]        ; 005d9886
    FNSTSW AX                           ; 005d988d
    SAHF                                ; 005d988f
    JBE 0x005d989f                      ; 005d9890
        ;   XREF to: 005d989f (CONDITIONAL_JUMP)  ; LAB_005d989f
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005d9892
    MOV dword ptr [EBX + 0xbe50],EAX    ; 005d9899
    FLD float ptr [ESP + 0x24]          ; 005d989f
        ;   Label: LAB_005d989f
    FCOMP double ptr [0x00654ae2]       ; 005d98a3 | DOUBLE_00654ae2
    FNSTSW AX                           ; 005d98a9
    SAHF                                ; 005d98ab
    JNC 0x005d992c                      ; 005d98ac
        ;   XREF to: 005d992c (CONDITIONAL_JUMP)  ; LAB_005d992c
    CMP ESI,0x1                         ; 005d98b2
    JZ 0x005d992c                       ; 005d98b5
        ;   XREF to: 005d992c (CONDITIONAL_JUMP)  ; LAB_005d992c
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 005d98b7
    JMP 0x005d9535                      ; 005d98c1
        ;   XREF to: 005d9535 (UNCONDITIONAL_JUMP)  ; LAB_005d9535
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 005d98c6
        ;   Label: LAB_005d98c6
    JMP 0x005d97e9                      ; 005d98d0
        ;   XREF to: 005d97e9 (UNCONDITIONAL_JUMP)  ; LAB_005d97e9
    MOV dword ptr [EBX + 0xbe34],0x1    ; 005d98d5
        ;   Label: LAB_005d98d5
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 005d98df
    JMP 0x005d97e9                      ; 005d98e9
        ;   XREF to: 005d97e9 (UNCONDITIONAL_JUMP)  ; LAB_005d97e9
    PUSH dword ptr [EBP + 0x18]         ; 005d98ee
        ;   Label: LAB_005d98ee
    PUSH EBX                            ; 005d98f1
    CALL core_charactr.cpp_CCharacter_FUN_0042ede0 ; 005d98f2
        ;   XREF to: 0042ede0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ede0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005d98f7
    CMP EAX,0x1                         ; 005d98fa
    JC 0x005d97e9                       ; 005d98fd
        ;   XREF to: 005d97e9 (CONDITIONAL_JUMP)  ; LAB_005d97e9
    JBE 0x005d98c6                      ; 005d9903
        ;   XREF to: 005d98c6 (CONDITIONAL_JUMP)  ; LAB_005d98c6
    CMP EAX,0x2                         ; 005d9905
    JZ 0x005d98d5                       ; 005d9908
        ;   XREF to: 005d98d5 (CONDITIONAL_JUMP)  ; LAB_005d98d5
    JMP 0x005d97e9                      ; 005d990a
        ;   XREF to: 005d97e9 (UNCONDITIONAL_JUMP)  ; LAB_005d97e9
    MOV dword ptr [EBX + 0x2dc4],EAX    ; 005d990f
        ;   Label: LAB_005d990f
    JMP 0x005d97e9                      ; 005d9915
        ;   XREF to: 005d97e9 (UNCONDITIONAL_JUMP)  ; LAB_005d97e9
    MOV EAX,dword ptr [ESP + 0x80]      ; 005d991a
        ;   Label: LAB_005d991a
    MOV dword ptr [EBX + 0xbe50],EAX    ; 005d9921
    JMP 0x005d9880                      ; 005d9927
        ;   XREF to: 005d9880 (UNCONDITIONAL_JUMP)  ; LAB_005d9880
    MOV dword ptr [EBX + 0xbe34],0x1    ; 005d992c
        ;   Label: LAB_005d992c
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 005d9936
    JMP 0x005d9535                      ; 005d9940
        ;   XREF to: 005d9535 (UNCONDITIONAL_JUMP)  ; LAB_005d9535
    JBE 0x005d9565                      ; 005d9945
        ;   XREF to: 005d9565 (CONDITIONAL_JUMP)  ; LAB_005d9565
        ;   Label: LAB_005d9945
    FLD float ptr [ESP + 0x9c]          ; 005d994b
    MOV dword ptr [EBX + 0x2418],0x0    ; 005d9952
    FCHS                                ; 005d995c
    FSTP float ptr [EBX + 0xbe50]       ; 005d995e
    JMP 0x005d9565                      ; 005d9964
        ;   XREF to: 005d9565 (UNCONDITIONAL_JUMP)  ; LAB_005d9565

