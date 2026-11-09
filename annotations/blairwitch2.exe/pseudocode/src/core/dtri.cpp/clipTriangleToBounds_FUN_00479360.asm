; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_00479360(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   triangle_vertices
; CVector3f *      Stack[0x8]:4   bounds_min
; CVector3f *      Stack[0xc]:4   bounds_max
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004792f8 = 00479948
;   undefined1* PTR_caseD_3_00479300 = 004795ee
;   undefined1* PTR_caseD_1_00479308 = 004799fc
;   undefined1* PTR_caseD_3_00479310 = 00479693
;   undefined1* PTR_caseD_1_00479318 = 00479aac
;   undefined1* PTR_caseD_3_00479320 = 00479736
;   undefined1* PTR_caseD_1_00479328 = 00479b60
;   undefined1* PTR_caseD_3_00479330 = 004797d6
;   undefined1* PTR_caseD_1_00479338 = 00479c0e
;   undefined1* PTR_caseD_3_00479340 = 0047987c
;   undefined1* PTR_caseD_1_00479348 = 00479cbe
;   undefined1* PTR_caseD_3_00479350 = 00479922
;   undefined4 DAT_01c21e84
;   undefined4 DAT_01c21e88
;   undefined4 DAT_01c21e8c
;   ... and 47 more
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00478900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479360
        ;   Label: core_dtri.cpp_clipTriangleToBounds_FUN_00479360
    PUSH ESI                            ; 00479361
    PUSH EDI                            ; 00479362
    PUSH EBP                            ; 00479363
    MOV EBP,ESP                         ; 00479364
    SUB ESP,0x1c                        ; 00479366
    AND ESP,0xfffffff8                  ; 00479369
    MOV EDX,0x3                         ; 0047936c
    MOV ECX,dword ptr [EBP + 0x14]      ; 00479371
    MOV dword ptr [0x01c21e84],EDX      ; 00479374 | DAT_01c21e84
    CMP ECX,0x1c21e88                   ; 0047937a
    JNZ 0x0047950e                      ; 00479380
        ;   XREF to: 0047950e (CONDITIONAL_JUMP)  ; LAB_0047950e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00479386
        ;   Label: LAB_00479386
    ADD EDX,0xc                         ; 00479389
    CMP EDX,0x1c21e94                   ; 0047938c
    JZ 0x004793ad                       ; 00479392
        ;   XREF to: 004793ad (CONDITIONAL_JUMP)  ; LAB_004793ad
    FLD float ptr [EDX]                 ; 00479394
    FLD float ptr [EDX + 0x8]           ; 00479396
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479399
    MOV [0x01c21e98],EAX                ; 0047939c | DAT_01c21e98
    FSTP float ptr [0x01c21e9c]         ; 004793a1 | DAT_01c21e9c
    FSTP float ptr [0x01c21e94]         ; 004793a7 | DAT_01c21e94
    MOV EDX,dword ptr [EBP + 0x14]      ; 004793ad
        ;   Label: LAB_004793ad
    ADD EDX,0x18                        ; 004793b0
    CMP EDX,0x1c21ea0                   ; 004793b3
    JZ 0x004793d4                       ; 004793b9
        ;   XREF to: 004793d4 (CONDITIONAL_JUMP)  ; LAB_004793d4
    FLD float ptr [EDX]                 ; 004793bb
    FLD float ptr [EDX + 0x8]           ; 004793bd
    MOV EAX,dword ptr [EDX + 0x4]       ; 004793c0
    MOV [0x01c21ea4],EAX                ; 004793c3 | DAT_01c21ea4
    FSTP float ptr [0x01c21ea8]         ; 004793c8 | DAT_01c21ea8
    FSTP float ptr [0x01c21ea0]         ; 004793ce | DAT_01c21ea0
    MOV EBX,0xffffffff                  ; 004793d4
        ;   Label: LAB_004793d4
    MOV EAX,[0x01c21e84]                ; 004793d9 | DAT_01c21e84
    XOR EDI,EDI                         ; 004793de
    XOR ESI,ESI                         ; 004793e0
    MOV dword ptr [ESP + 0x10],EBX      ; 004793e2
    TEST EAX,EAX                        ; 004793e6
    JLE 0x00479478                      ; 004793e8
        ;   XREF to: 00479478 (CONDITIONAL_JUMP)  ; LAB_00479478
    MOV EBX,0x1c21e88                   ; 004793ee
    FLD float ptr [EBX]                 ; 004793f3
        ;   Label: LAB_004793f3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004793f5
    MOV ECX,EBX                         ; 004793f8
    XOR EDX,EDX                         ; 004793fa
    FCOMP float ptr [EAX]               ; 004793fc
    FNSTSW AX                           ; 004793fe
    SAHF                                ; 00479400
    JBE 0x00479408                      ; 00479401
        ;   XREF to: 00479408 (CONDITIONAL_JUMP)  ; LAB_00479408
    MOV EDX,0x1                         ; 00479403
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00479408
        ;   Label: LAB_00479408
    FLD float ptr [ECX + 0x4]           ; 0047940b
    FCOMP float ptr [EAX + 0x4]         ; 0047940e
    FNSTSW AX                           ; 00479411
    SAHF                                ; 00479413
    JBE 0x00479419                      ; 00479414
        ;   XREF to: 00479419 (CONDITIONAL_JUMP)  ; LAB_00479419
    OR DL,0x2                           ; 00479416
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00479419
        ;   Label: LAB_00479419
    FLD float ptr [ECX + 0x8]           ; 0047941c
    FCOMP float ptr [EAX + 0x8]         ; 0047941f
    FNSTSW AX                           ; 00479422
    SAHF                                ; 00479424
    JBE 0x0047942a                      ; 00479425
        ;   XREF to: 0047942a (CONDITIONAL_JUMP)  ; LAB_0047942a
    OR DL,0x4                           ; 00479427
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047942a
        ;   Label: LAB_0047942a
    FLD float ptr [ECX]                 ; 0047942d
    FCOMP float ptr [EAX]               ; 0047942f
    FNSTSW AX                           ; 00479431
    SAHF                                ; 00479433
    JNC 0x00479439                      ; 00479434
        ;   XREF to: 00479439 (CONDITIONAL_JUMP)  ; LAB_00479439
    OR DL,0x8                           ; 00479436
    MOV EAX,dword ptr [EBP + 0x18]      ; 00479439
        ;   Label: LAB_00479439
    FLD float ptr [ECX + 0x4]           ; 0047943c
    FCOMP float ptr [EAX + 0x4]         ; 0047943f
    FNSTSW AX                           ; 00479442
    SAHF                                ; 00479444
    JNC 0x0047944a                      ; 00479445
        ;   XREF to: 0047944a (CONDITIONAL_JUMP)  ; LAB_0047944a
    OR DL,0x10                          ; 00479447
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047944a
        ;   Label: LAB_0047944a
    FLD float ptr [ECX + 0x8]           ; 0047944d
    FCOMP float ptr [EAX + 0x8]         ; 00479450
    FNSTSW AX                           ; 00479453
    SAHF                                ; 00479455
    JNC 0x0047945b                      ; 00479456
        ;   XREF to: 0047945b (CONDITIONAL_JUMP)  ; LAB_0047945b
    OR DL,0x20                          ; 00479458
    MOV ECX,dword ptr [ESP + 0x10]      ; 0047945b
        ;   Label: LAB_0047945b
    MOV EAX,[0x01c21e84]                ; 0047945f | DAT_01c21e84
    ADD EBX,0xc                         ; 00479464
    INC ESI                             ; 00479467
    AND ECX,EDX                         ; 00479468
    OR EDI,EDX                          ; 0047946a
    MOV dword ptr [ESP + 0x10],ECX      ; 0047946c
    CMP ESI,EAX                         ; 00479470
    JL 0x004793f3                       ; 00479472
        ;   XREF to: 004793f3 (CONDITIONAL_JUMP)  ; LAB_004793f3
    TEST EDI,EDI                        ; 00479478
        ;   Label: LAB_00479478
    JNZ 0x0047952f                      ; 0047947a
        ;   XREF to: 0047952f (CONDITIONAL_JUMP)  ; LAB_0047952f
    MOV EBX,0x3                         ; 00479480
    MOV ESI,dword ptr [EBP + 0x14]      ; 00479485
    MOV dword ptr [0x01c2231c],EBX      ; 00479488 | DAT_01c2231c
    CMP ESI,0x1c22320                   ; 0047948e
    JZ 0x004794b2                       ; 00479494
        ;   XREF to: 004794b2 (CONDITIONAL_JUMP)  ; LAB_004794b2
    MOV EAX,ESI                         ; 00479496
    FLD float ptr [EAX]                 ; 00479498
    FLD float ptr [EAX + 0x8]           ; 0047949a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047949d
    MOV dword ptr [0x01c22324],EDX      ; 004794a0 | DAT_01c22324
    FSTP float ptr [0x01c22328]         ; 004794a6 | DAT_01c22328
    FSTP float ptr [0x01c22320]         ; 004794ac | DAT_01c22320
    MOV EDX,dword ptr [EBP + 0x14]      ; 004794b2
        ;   Label: LAB_004794b2
    ADD EDX,0xc                         ; 004794b5
    CMP EDX,0x1c2232c                   ; 004794b8
    JZ 0x004794d9                       ; 004794be
        ;   XREF to: 004794d9 (CONDITIONAL_JUMP)  ; LAB_004794d9
    FLD float ptr [EDX]                 ; 004794c0
    FLD float ptr [EDX + 0x8]           ; 004794c2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004794c5
    MOV [0x01c22330],EAX                ; 004794c8 | DAT_01c22330
    FSTP float ptr [0x01c22334]         ; 004794cd | DAT_01c22334
    FSTP float ptr [0x01c2232c]         ; 004794d3 | DAT_01c2232c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004794d9
        ;   Label: LAB_004794d9
    ADD EDX,0x18                        ; 004794dc
    CMP EDX,0x1c22338                   ; 004794df
    JZ 0x00479500                       ; 004794e5
        ;   XREF to: 00479500 (CONDITIONAL_JUMP)  ; LAB_00479500
    FLD float ptr [EDX]                 ; 004794e7
    FLD float ptr [EDX + 0x8]           ; 004794e9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004794ec
    MOV [0x01c2233c],EAX                ; 004794ef | DAT_01c2233c
    FSTP float ptr [0x01c22340]         ; 004794f4 | DAT_01c22340
    FSTP float ptr [0x01c22338]         ; 004794fa | DAT_01c22338
    MOV ECX,0x1                         ; 00479500
        ;   Label: LAB_00479500
    MOV EAX,ECX                         ; 00479505
    MOV ESP,EBP                         ; 00479507
    POP EBP                             ; 00479509
    POP EDI                             ; 0047950a
    POP ESI                             ; 0047950b
    POP EBX                             ; 0047950c
    RET                                 ; 0047950d
    MOV EAX,ECX                         ; 0047950e
        ;   Label: LAB_0047950e
    FLD float ptr [EAX]                 ; 00479510
    FLD float ptr [EAX + 0x8]           ; 00479512
    MOV EDX,dword ptr [EAX + 0x4]       ; 00479515
    MOV dword ptr [0x01c21e8c],EDX      ; 00479518 | DAT_01c21e8c
    FSTP float ptr [0x01c21e90]         ; 0047951e | DAT_01c21e90
    FSTP float ptr [0x01c21e88]         ; 00479524 | DAT_01c21e88
    JMP 0x00479386                      ; 0047952a
        ;   XREF to: 00479386 (UNCONDITIONAL_JUMP)  ; LAB_00479386
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047952f
        ;   Label: LAB_0047952f
    TEST EDX,EDX                        ; 00479533
    JNZ 0x0047993d                      ; 00479535
        ;   XREF to: 0047993d (CONDITIONAL_JUMP)  ; LAB_0047993d
    MOV dword ptr [0x01c2200c],EDX      ; 0047953b | DAT_01c2200c
    MOV dword ptr [0x01c220d0],EDX      ; 00479541 | DAT_01c220d0
    MOV dword ptr [0x01c22194],EDX      ; 00479547 | DAT_01c22194
    MOV dword ptr [0x01c22258],EDX      ; 0047954d | DAT_01c22258
    MOV dword ptr [0x01c2231c],EDX      ; 00479553 | DAT_01c2231c
    MOV dword ptr [0x01c21f48],EDX      ; 00479559 | DAT_01c21f48
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0047955f
    MOV ECX,dword ptr [0x01c21e84]      ; 00479562 | DAT_01c21e84
    MOV EDX,dword ptr [EDX + 0x4]       ; 00479568
    XOR EBX,EBX                         ; 0047956b
    MOV dword ptr [ESP + 0x18],EDX      ; 0047956d
    TEST ECX,ECX                        ; 00479571
    JLE 0x004795fc                      ; 00479573
        ;   XREF to: 004795fc (CONDITIONAL_JUMP)  ; LAB_004795fc
    MOV ESI,0x1c21e88                   ; 00479579
    MOV EDI,dword ptr [0x01c21e84]      ; 0047957e | DAT_01c21e84
        ;   Label: LAB_0047957e
    LEA ECX,[EBX + 0x1]                 ; 00479584
    CMP ECX,EDI                         ; 00479587
    JNZ 0x0047958d                      ; 00479589
        ;   XREF to: 0047958d (CONDITIONAL_JUMP)  ; LAB_0047958d
    XOR ECX,EDI                         ; 0047958b
    IMUL ECX,ECX,0xc                    ; 0047958d
        ;   Label: LAB_0047958d
    FLD float ptr [ESI + 0x4]           ; 00479590
    MOV EDI,0x1c21e88                   ; 00479593
    MOV EDX,ESI                         ; 00479598
    ADD EDI,ECX                         ; 0047959a
    XOR ECX,ECX                         ; 0047959c
    FCOMP float ptr [ESP + 0x18]        ; 0047959e
    FNSTSW AX                           ; 004795a2
    SAHF                                ; 004795a4
    JBE 0x004795ac                      ; 004795a5
        ;   XREF to: 004795ac (CONDITIONAL_JUMP)  ; LAB_004795ac
    MOV ECX,0x1                         ; 004795a7
    FLD float ptr [EDI + 0x4]           ; 004795ac
        ;   Label: LAB_004795ac
    FCOMP float ptr [ESP + 0x18]        ; 004795af
    FNSTSW AX                           ; 004795b3
    SAHF                                ; 004795b5
    JBE 0x004795bb                      ; 004795b6
        ;   XREF to: 004795bb (CONDITIONAL_JUMP)  ; LAB_004795bb
    OR CL,0x2                           ; 004795b8
    CMP ECX,0x3                         ; 004795bb
        ;   Label: LAB_004795bb
    JA 0x004795ee                       ; 004795be
        ;   XREF to: 004795ee (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4792f4]  ; 004795c0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c21f48],0xc ; 004795c7 | DAT_01c21f48
        ;   Label: caseD_0
    ADD ECX,0x1c21f4c                   ; 004795ce
    CMP ECX,EDX                         ; 004795d4
    JZ 0x004795e8                       ; 004795d6
        ;   XREF to: 004795e8 (CONDITIONAL_JUMP)  ; LAB_004795e8
    MOV EAX,dword ptr [EDX]             ; 004795d8
    MOV dword ptr [ECX],EAX             ; 004795da | DAT_01c21f4c
    MOV EAX,dword ptr [EDX + 0x4]       ; 004795dc
    MOV dword ptr [ECX + 0x4],EAX       ; 004795df | DAT_01c21f50
    MOV EAX,dword ptr [EDX + 0x8]       ; 004795e2
    MOV dword ptr [ECX + 0x8],EAX       ; 004795e5 | DAT_01c21f54
    INC dword ptr [0x01c21f48]          ; 004795e8 | DAT_01c21f48
        ;   Label: LAB_004795e8
    MOV EDI,dword ptr [0x01c21e84]      ; 004795ee | DAT_01c21e84
        ;   Label: caseD_3
    INC EBX                             ; 004795f4
    ADD ESI,0xc                         ; 004795f5
    CMP EBX,EDI                         ; 004795f8
    JL 0x0047957e                       ; 004795fa
        ;   XREF to: 0047957e (CONDITIONAL_JUMP)  ; LAB_0047957e
    MOV EAX,[0x01c21f48]                ; 004795fc | DAT_01c21f48
        ;   Label: LAB_004795fc
    CMP EAX,0x3                         ; 00479601
    JL 0x0047993d                       ; 00479604
        ;   XREF to: 0047993d (CONDITIONAL_JUMP)  ; LAB_0047993d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0047960a
    MOV EDX,dword ptr [EDX + 0x4]       ; 0047960d
    XOR EBX,EBX                         ; 00479610
    MOV dword ptr [ESP + 0x8],EDX       ; 00479612
    TEST EAX,EAX                        ; 00479616
    JLE 0x004796a1                      ; 00479618
        ;   XREF to: 004796a1 (CONDITIONAL_JUMP)  ; LAB_004796a1
    MOV ESI,0x1c21f4c                   ; 0047961e
    MOV EDI,dword ptr [0x01c21f48]      ; 00479623 | DAT_01c21f48
        ;   Label: LAB_00479623
    LEA ECX,[EBX + 0x1]                 ; 00479629
    CMP ECX,EDI                         ; 0047962c
    JNZ 0x00479632                      ; 0047962e
        ;   XREF to: 00479632 (CONDITIONAL_JUMP)  ; LAB_00479632
    XOR ECX,EDI                         ; 00479630
    IMUL ECX,ECX,0xc                    ; 00479632
        ;   Label: LAB_00479632
    FLD float ptr [ESI + 0x4]           ; 00479635 | DAT_01c21f50 | DAT_01c21f5c
    MOV EDI,0x1c21f4c                   ; 00479638
    MOV EDX,ESI                         ; 0047963d
    ADD EDI,ECX                         ; 0047963f
    XOR ECX,ECX                         ; 00479641
    FCOMP float ptr [ESP + 0x8]         ; 00479643
    FNSTSW AX                           ; 00479647
    SAHF                                ; 00479649
    JNC 0x00479651                      ; 0047964a
        ;   XREF to: 00479651 (CONDITIONAL_JUMP)  ; LAB_00479651
    MOV ECX,0x1                         ; 0047964c
    FLD float ptr [EDI + 0x4]           ; 00479651 | DAT_01c21f50 | DAT_01c21f68
        ;   Label: LAB_00479651
    FCOMP float ptr [ESP + 0x8]         ; 00479654
    FNSTSW AX                           ; 00479658
    SAHF                                ; 0047965a
    JNC 0x00479660                      ; 0047965b
        ;   XREF to: 00479660 (CONDITIONAL_JUMP)  ; LAB_00479660
    OR CL,0x2                           ; 0047965d
    CMP ECX,0x3                         ; 00479660
        ;   Label: LAB_00479660
    JA 0x00479693                       ; 00479663
        ;   XREF to: 00479693 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x479304]  ; 00479665 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c2200c],0xc ; 0047966c | DAT_01c2200c
        ;   Label: caseD_0
    ADD ECX,0x1c22010                   ; 00479673
    CMP ECX,EDX                         ; 00479679
    JZ 0x0047968d                       ; 0047967b
        ;   XREF to: 0047968d (CONDITIONAL_JUMP)  ; LAB_0047968d
    MOV EAX,dword ptr [EDX]             ; 0047967d | DAT_01c21f4c
    MOV dword ptr [ECX],EAX             ; 0047967f | DAT_01c22010
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479681 | DAT_01c21f50
    MOV dword ptr [ECX + 0x4],EAX       ; 00479684 | DAT_01c22014
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479687 | DAT_01c21f54
    MOV dword ptr [ECX + 0x8],EAX       ; 0047968a | DAT_01c22018
    INC dword ptr [0x01c2200c]          ; 0047968d | DAT_01c2200c
        ;   Label: LAB_0047968d
    MOV EDX,dword ptr [0x01c21f48]      ; 00479693 | DAT_01c21f48
        ;   Label: caseD_3
    INC EBX                             ; 00479699
    ADD ESI,0xc                         ; 0047969a
    CMP EBX,EDX                         ; 0047969d
    JL 0x00479623                       ; 0047969f
        ;   XREF to: 00479623 (CONDITIONAL_JUMP)  ; LAB_00479623
    MOV ECX,dword ptr [0x01c2200c]      ; 004796a1 | DAT_01c2200c
        ;   Label: LAB_004796a1
    CMP ECX,0x3                         ; 004796a7
    JL 0x0047993d                       ; 004796aa
        ;   XREF to: 0047993d (CONDITIONAL_JUMP)  ; LAB_0047993d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004796b0
    MOV EDX,dword ptr [EDX]             ; 004796b3
    XOR ESI,ESI                         ; 004796b5
    MOV dword ptr [ESP + 0x14],EDX      ; 004796b7
    TEST ECX,ECX                        ; 004796bb
    JLE 0x00479744                      ; 004796bd
        ;   XREF to: 00479744 (CONDITIONAL_JUMP)  ; LAB_00479744
    MOV EBX,0x1c22010                   ; 004796c3
    MOV EDI,dword ptr [0x01c2200c]      ; 004796c8 | DAT_01c2200c
        ;   Label: LAB_004796c8
    LEA ECX,[ESI + 0x1]                 ; 004796ce
    CMP ECX,EDI                         ; 004796d1
    JNZ 0x004796d7                      ; 004796d3
        ;   XREF to: 004796d7 (CONDITIONAL_JUMP)  ; LAB_004796d7
    XOR ECX,EDI                         ; 004796d5
    IMUL ECX,ECX,0xc                    ; 004796d7
        ;   Label: LAB_004796d7
    FLD float ptr [EBX]                 ; 004796da | DAT_01c22010 | DAT_01c2201c
    MOV EDI,0x1c22010                   ; 004796dc
    MOV EDX,EBX                         ; 004796e1
    ADD EDI,ECX                         ; 004796e3
    XOR ECX,ECX                         ; 004796e5
    FCOMP float ptr [ESP + 0x14]        ; 004796e7
    FNSTSW AX                           ; 004796eb
    SAHF                                ; 004796ed
    JBE 0x004796f5                      ; 004796ee
        ;   XREF to: 004796f5 (CONDITIONAL_JUMP)  ; LAB_004796f5
    MOV ECX,0x1                         ; 004796f0
    FLD float ptr [EDI]                 ; 004796f5 | DAT_01c22010 | DAT_01c22028
        ;   Label: LAB_004796f5
    FCOMP float ptr [ESP + 0x14]        ; 004796f7
    FNSTSW AX                           ; 004796fb
    SAHF                                ; 004796fd
    JBE 0x00479703                      ; 004796fe
        ;   XREF to: 00479703 (CONDITIONAL_JUMP)  ; LAB_00479703
    OR CL,0x2                           ; 00479700
    CMP ECX,0x3                         ; 00479703
        ;   Label: LAB_00479703
    JA 0x00479736                       ; 00479706
        ;   XREF to: 00479736 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x479314]  ; 00479708 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c220d0],0xc ; 0047970f | DAT_01c220d0
        ;   Label: caseD_0
    ADD ECX,0x1c220d4                   ; 00479716
    CMP ECX,EDX                         ; 0047971c
    JZ 0x00479730                       ; 0047971e
        ;   XREF to: 00479730 (CONDITIONAL_JUMP)  ; LAB_00479730
    MOV EAX,dword ptr [EDX]             ; 00479720 | DAT_01c22010
    MOV dword ptr [ECX],EAX             ; 00479722 | DAT_01c220d4
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479724 | DAT_01c22014
    MOV dword ptr [ECX + 0x4],EAX       ; 00479727 | DAT_01c220d8
    MOV EAX,dword ptr [EDX + 0x8]       ; 0047972a | DAT_01c22018
    MOV dword ptr [ECX + 0x8],EAX       ; 0047972d | DAT_01c220dc
    INC dword ptr [0x01c220d0]          ; 00479730 | DAT_01c220d0
        ;   Label: LAB_00479730
    MOV EDX,dword ptr [0x01c2200c]      ; 00479736 | DAT_01c2200c
        ;   Label: caseD_3
    INC ESI                             ; 0047973c
    ADD EBX,0xc                         ; 0047973d
    CMP ESI,EDX                         ; 00479740
    JL 0x004796c8                       ; 00479742
        ;   XREF to: 004796c8 (CONDITIONAL_JUMP)  ; LAB_004796c8
    MOV ECX,dword ptr [0x01c220d0]      ; 00479744 | DAT_01c220d0
        ;   Label: LAB_00479744
    CMP ECX,0x3                         ; 0047974a
    JL 0x0047993d                       ; 0047974d
        ;   XREF to: 0047993d (CONDITIONAL_JUMP)  ; LAB_0047993d
    MOV EDX,dword ptr [EBP + 0x18]      ; 00479753
    MOV EDX,dword ptr [EDX]             ; 00479756
    XOR ESI,ESI                         ; 00479758
    MOV dword ptr [ESP],EDX             ; 0047975a
    TEST ECX,ECX                        ; 0047975d
    JLE 0x004797e4                      ; 0047975f
        ;   XREF to: 004797e4 (CONDITIONAL_JUMP)  ; LAB_004797e4
    MOV EBX,0x1c220d4                   ; 00479765
    MOV EDI,dword ptr [0x01c220d0]      ; 0047976a | DAT_01c220d0
        ;   Label: LAB_0047976a
    LEA ECX,[ESI + 0x1]                 ; 00479770
    CMP ECX,EDI                         ; 00479773
    JNZ 0x00479779                      ; 00479775
        ;   XREF to: 00479779 (CONDITIONAL_JUMP)  ; LAB_00479779
    XOR ECX,EDI                         ; 00479777
    IMUL ECX,ECX,0xc                    ; 00479779
        ;   Label: LAB_00479779
    FLD float ptr [EBX]                 ; 0047977c | DAT_01c220d4 | DAT_01c220e0
    MOV EDI,0x1c220d4                   ; 0047977e
    MOV EDX,EBX                         ; 00479783
    ADD EDI,ECX                         ; 00479785
    XOR ECX,ECX                         ; 00479787
    FCOMP float ptr [ESP]               ; 00479789
    FNSTSW AX                           ; 0047978c
    SAHF                                ; 0047978e
    JNC 0x00479796                      ; 0047978f
        ;   XREF to: 00479796 (CONDITIONAL_JUMP)  ; LAB_00479796
    MOV ECX,0x1                         ; 00479791
    FLD float ptr [EDI]                 ; 00479796 | DAT_01c220d4 | DAT_01c220ec
        ;   Label: LAB_00479796
    FCOMP float ptr [ESP]               ; 00479798
    FNSTSW AX                           ; 0047979b
    SAHF                                ; 0047979d
    JNC 0x004797a3                      ; 0047979e
        ;   XREF to: 004797a3 (CONDITIONAL_JUMP)  ; LAB_004797a3
    OR CL,0x2                           ; 004797a0
    CMP ECX,0x3                         ; 004797a3
        ;   Label: LAB_004797a3
    JA 0x004797d6                       ; 004797a6
        ;   XREF to: 004797d6 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x479324]  ; 004797a8 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c22194],0xc ; 004797af | DAT_01c22194
        ;   Label: caseD_0
    ADD ECX,0x1c22198                   ; 004797b6
    CMP ECX,EDX                         ; 004797bc
    JZ 0x004797d0                       ; 004797be
        ;   XREF to: 004797d0 (CONDITIONAL_JUMP)  ; LAB_004797d0
    MOV EAX,dword ptr [EDX]             ; 004797c0 | DAT_01c220d4
    MOV dword ptr [ECX],EAX             ; 004797c2 | DAT_01c22198
    MOV EAX,dword ptr [EDX + 0x4]       ; 004797c4 | DAT_01c220d8
    MOV dword ptr [ECX + 0x4],EAX       ; 004797c7 | DAT_01c2219c
    MOV EAX,dword ptr [EDX + 0x8]       ; 004797ca | DAT_01c220dc
    MOV dword ptr [ECX + 0x8],EAX       ; 004797cd | DAT_01c221a0
    INC dword ptr [0x01c22194]          ; 004797d0 | DAT_01c22194
        ;   Label: LAB_004797d0
    MOV EDX,dword ptr [0x01c220d0]      ; 004797d6 | DAT_01c220d0
        ;   Label: caseD_3
    INC ESI                             ; 004797dc
    ADD EBX,0xc                         ; 004797dd
    CMP ESI,EDX                         ; 004797e0
    JL 0x0047976a                       ; 004797e2
        ;   XREF to: 0047976a (CONDITIONAL_JUMP)  ; LAB_0047976a
    MOV ECX,dword ptr [0x01c22194]      ; 004797e4 | DAT_01c22194
        ;   Label: LAB_004797e4
    CMP ECX,0x3                         ; 004797ea
    JL 0x0047993d                       ; 004797ed
        ;   XREF to: 0047993d (CONDITIONAL_JUMP)  ; LAB_0047993d
    MOV EDX,dword ptr [EBP + 0x18]      ; 004797f3
    MOV EDX,dword ptr [EDX + 0x8]       ; 004797f6
    XOR EBX,EBX                         ; 004797f9
    MOV dword ptr [ESP + 0xc],EDX       ; 004797fb
    TEST ECX,ECX                        ; 004797ff
    JLE 0x0047988a                      ; 00479801
        ;   XREF to: 0047988a (CONDITIONAL_JUMP)  ; LAB_0047988a
    MOV ESI,0x1c22198                   ; 00479807
    MOV EDI,dword ptr [0x01c22194]      ; 0047980c | DAT_01c22194
        ;   Label: LAB_0047980c
    LEA ECX,[EBX + 0x1]                 ; 00479812
    CMP ECX,EDI                         ; 00479815
    JNZ 0x0047981b                      ; 00479817
        ;   XREF to: 0047981b (CONDITIONAL_JUMP)  ; LAB_0047981b
    XOR ECX,EDI                         ; 00479819
    IMUL ECX,ECX,0xc                    ; 0047981b
        ;   Label: LAB_0047981b
    FLD float ptr [ESI + 0x8]           ; 0047981e | DAT_01c221a0 | DAT_01c221ac
    MOV EDI,0x1c22198                   ; 00479821
    MOV EDX,ESI                         ; 00479826
    ADD EDI,ECX                         ; 00479828
    XOR ECX,ECX                         ; 0047982a
    FCOMP float ptr [ESP + 0xc]         ; 0047982c
    FNSTSW AX                           ; 00479830
    SAHF                                ; 00479832
    JNC 0x0047983a                      ; 00479833
        ;   XREF to: 0047983a (CONDITIONAL_JUMP)  ; LAB_0047983a
    MOV ECX,0x1                         ; 00479835
    FLD float ptr [EDI + 0x8]           ; 0047983a | DAT_01c221a0 | DAT_01c221b8
        ;   Label: LAB_0047983a
    FCOMP float ptr [ESP + 0xc]         ; 0047983d
    FNSTSW AX                           ; 00479841
    SAHF                                ; 00479843
    JNC 0x00479849                      ; 00479844
        ;   XREF to: 00479849 (CONDITIONAL_JUMP)  ; LAB_00479849
    OR CL,0x2                           ; 00479846
    CMP ECX,0x3                         ; 00479849
        ;   Label: LAB_00479849
    JA 0x0047987c                       ; 0047984c
        ;   XREF to: 0047987c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x479334]  ; 0047984e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c22258],0xc ; 00479855 | DAT_01c22258
        ;   Label: caseD_0
    ADD ECX,0x1c2225c                   ; 0047985c
    CMP ECX,EDX                         ; 00479862
    JZ 0x00479876                       ; 00479864
        ;   XREF to: 00479876 (CONDITIONAL_JUMP)  ; LAB_00479876
    MOV EAX,dword ptr [EDX]             ; 00479866 | DAT_01c22198
    MOV dword ptr [ECX],EAX             ; 00479868 | DAT_01c2225c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047986a | DAT_01c2219c
    MOV dword ptr [ECX + 0x4],EAX       ; 0047986d | DAT_01c22260
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479870 | DAT_01c221a0
    MOV dword ptr [ECX + 0x8],EAX       ; 00479873 | DAT_01c22264
    INC dword ptr [0x01c22258]          ; 00479876 | DAT_01c22258
        ;   Label: LAB_00479876
    MOV EDX,dword ptr [0x01c22194]      ; 0047987c | DAT_01c22194
        ;   Label: caseD_3
    INC EBX                             ; 00479882
    ADD ESI,0xc                         ; 00479883
    CMP EBX,EDX                         ; 00479886
    JL 0x0047980c                       ; 00479888
        ;   XREF to: 0047980c (CONDITIONAL_JUMP)  ; LAB_0047980c
    MOV ECX,dword ptr [0x01c22258]      ; 0047988a | DAT_01c22258
        ;   Label: LAB_0047988a
    CMP ECX,0x3                         ; 00479890
    JL 0x0047993d                       ; 00479893
        ;   XREF to: 0047993d (CONDITIONAL_JUMP)  ; LAB_0047993d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00479899
    MOV EDX,dword ptr [EDX + 0x8]       ; 0047989c
    XOR ESI,ESI                         ; 0047989f
    MOV dword ptr [ESP + 0x4],EDX       ; 004798a1
    TEST ECX,ECX                        ; 004798a5
    JLE 0x00479930                      ; 004798a7
        ;   XREF to: 00479930 (CONDITIONAL_JUMP)  ; LAB_00479930
    MOV EBX,0x1c2225c                   ; 004798ad
    MOV EDI,dword ptr [0x01c22258]      ; 004798b2 | DAT_01c22258
        ;   Label: LAB_004798b2
    LEA ECX,[ESI + 0x1]                 ; 004798b8
    CMP ECX,EDI                         ; 004798bb
    JNZ 0x004798c1                      ; 004798bd
        ;   XREF to: 004798c1 (CONDITIONAL_JUMP)  ; LAB_004798c1
    XOR ECX,EDI                         ; 004798bf
    IMUL ECX,ECX,0xc                    ; 004798c1
        ;   Label: LAB_004798c1
    FLD float ptr [EBX + 0x8]           ; 004798c4 | DAT_01c22264 | DAT_01c22270
    MOV EDI,0x1c2225c                   ; 004798c7
    MOV EDX,EBX                         ; 004798cc
    ADD EDI,ECX                         ; 004798ce
    XOR ECX,ECX                         ; 004798d0
    FCOMP float ptr [ESP + 0x4]         ; 004798d2
    FNSTSW AX                           ; 004798d6
    SAHF                                ; 004798d8
    JBE 0x004798e0                      ; 004798d9
        ;   XREF to: 004798e0 (CONDITIONAL_JUMP)  ; LAB_004798e0
    MOV ECX,0x1                         ; 004798db
    FLD float ptr [EDI + 0x8]           ; 004798e0 | DAT_01c22264 | DAT_01c2227c
        ;   Label: LAB_004798e0
    FCOMP float ptr [ESP + 0x4]         ; 004798e3
    FNSTSW AX                           ; 004798e7
    SAHF                                ; 004798e9
    JBE 0x004798ef                      ; 004798ea
        ;   XREF to: 004798ef (CONDITIONAL_JUMP)  ; LAB_004798ef
    OR CL,0x2                           ; 004798ec
    CMP ECX,0x3                         ; 004798ef
        ;   Label: LAB_004798ef
    JA 0x00479922                       ; 004798f2
        ;   XREF to: 00479922 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x479344]  ; 004798f4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c2231c],0xc ; 004798fb | DAT_01c2231c
        ;   Label: caseD_0
    ADD ECX,0x1c22320                   ; 00479902
    CMP ECX,EDX                         ; 00479908
    JZ 0x0047991c                       ; 0047990a
        ;   XREF to: 0047991c (CONDITIONAL_JUMP)  ; LAB_0047991c
    MOV EAX,dword ptr [EDX]             ; 0047990c | DAT_01c2225c
    MOV dword ptr [ECX],EAX             ; 0047990e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479910 | DAT_01c22260
    MOV dword ptr [ECX + 0x4],EAX       ; 00479913
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479916 | DAT_01c22264
    MOV dword ptr [ECX + 0x8],EAX       ; 00479919
    INC dword ptr [0x01c2231c]          ; 0047991c | DAT_01c2231c
        ;   Label: LAB_0047991c
    MOV EDX,dword ptr [0x01c22258]      ; 00479922 | DAT_01c22258
        ;   Label: caseD_3
    INC ESI                             ; 00479928
    ADD EBX,0xc                         ; 00479929
    CMP ESI,EDX                         ; 0047992c
    JL 0x004798b2                       ; 0047992e
        ;   XREF to: 004798b2 (CONDITIONAL_JUMP)  ; LAB_004798b2
    CMP dword ptr [0x01c2231c],0x3      ; 00479930 | DAT_01c2231c
        ;   Label: LAB_00479930
    JGE 0x00479500                      ; 00479937
        ;   XREF to: 00479500 (CONDITIONAL_JUMP)  ; LAB_00479500
    XOR ECX,ECX                         ; 0047993d
        ;   Label: LAB_0047993d
    MOV EAX,ECX                         ; 0047993f
    MOV ESP,EBP                         ; 00479941
    POP EBP                             ; 00479943
    POP EDI                             ; 00479944
    POP ESI                             ; 00479945
    POP EBX                             ; 00479946
    RET                                 ; 00479947
    IMUL ECX,dword ptr [0x01c21f48],0xc ; 00479948 | DAT_01c21f48
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x18]          ; 0047994f
    SUB ESP,0x8                         ; 00479953
    FCHS                                ; 00479956
    FSTP double ptr [ESP]               ; 00479958
    PUSH 0x0                            ; 0047995b
    PUSH 0x0                            ; 0047995d
    PUSH 0x3ff00000                     ; 0047995f
    PUSH 0x0                            ; 00479964
    PUSH 0x0                            ; 00479966
    PUSH 0x0                            ; 00479968
    ADD ECX,0x1c21f4c                   ; 0047996a
    PUSH ECX                            ; 00479970
    PUSH EDX                            ; 00479971
    PUSH EDI                            ; 00479972
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479973
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c21f48]      ; 00479978 | DAT_01c21f48
    INC EDX                             ; 0047997e
    ADD ESP,0x2c                        ; 0047997f
    MOV dword ptr [0x01c21f48],EDX      ; 00479982 | DAT_01c21f48
    JMP 0x004795ee                      ; 00479988
        ;   XREF to: 004795ee (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c21f48],0xc ; 0047998d | DAT_01c21f48
        ;   Label: caseD_2
    ADD ECX,0x1c21f4c                   ; 00479994
    CMP ECX,EDX                         ; 0047999a
    JZ 0x004799ae                       ; 0047999c
        ;   XREF to: 004799ae (CONDITIONAL_JUMP)  ; LAB_004799ae
    MOV EAX,dword ptr [EDX]             ; 0047999e
    MOV dword ptr [ECX],EAX             ; 004799a0 | DAT_01c21f4c
    MOV EAX,dword ptr [EDX + 0x4]       ; 004799a2
    MOV dword ptr [ECX + 0x4],EAX       ; 004799a5 | DAT_01c21f50
    MOV EAX,dword ptr [EDX + 0x8]       ; 004799a8
    MOV dword ptr [ECX + 0x8],EAX       ; 004799ab | DAT_01c21f54
    MOV ECX,dword ptr [0x01c21f48]      ; 004799ae | DAT_01c21f48
        ;   Label: LAB_004799ae
    INC ECX                             ; 004799b4
    MOV dword ptr [0x01c21f48],ECX      ; 004799b5 | DAT_01c21f48
    IMUL ECX,ECX,0xc                    ; 004799bb
    FLD float ptr [ESP + 0x18]          ; 004799be
    SUB ESP,0x8                         ; 004799c2
    FCHS                                ; 004799c5
    FSTP double ptr [ESP]               ; 004799c7
    PUSH 0x0                            ; 004799ca
    PUSH 0x0                            ; 004799cc
    PUSH 0x3ff00000                     ; 004799ce
    PUSH 0x0                            ; 004799d3
    PUSH 0x0                            ; 004799d5
    PUSH 0x0                            ; 004799d7
    ADD ECX,0x1c21f4c                   ; 004799d9
    PUSH ECX                            ; 004799df
    PUSH EDI                            ; 004799e0
    PUSH EDX                            ; 004799e1
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 004799e2
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c21f48]      ; 004799e7 | DAT_01c21f48
    INC EDX                             ; 004799ed
    ADD ESP,0x2c                        ; 004799ee
    MOV dword ptr [0x01c21f48],EDX      ; 004799f1 | DAT_01c21f48
    JMP 0x004795ee                      ; 004799f7
        ;   XREF to: 004795ee (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c2200c],0xc ; 004799fc | DAT_01c2200c
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x8]           ; 00479a03
    SUB ESP,0x8                         ; 00479a07
    FSTP double ptr [ESP]               ; 00479a0a
    PUSH 0x0                            ; 00479a0d
    PUSH 0x0                            ; 00479a0f
    PUSH 0xbff00000                     ; 00479a11
    PUSH 0x0                            ; 00479a16
    PUSH 0x0                            ; 00479a18
    PUSH 0x0                            ; 00479a1a
    ADD ECX,0x1c22010                   ; 00479a1c
    PUSH ECX                            ; 00479a22
    PUSH EDX                            ; 00479a23 | DAT_01c21f4c
    PUSH EDI                            ; 00479a24
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479a25
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c2200c]      ; 00479a2a | DAT_01c2200c
    INC EDX                             ; 00479a30
    ADD ESP,0x2c                        ; 00479a31
    MOV dword ptr [0x01c2200c],EDX      ; 00479a34 | DAT_01c2200c
    JMP 0x00479693                      ; 00479a3a
        ;   XREF to: 00479693 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c2200c],0xc ; 00479a3f | DAT_01c2200c
        ;   Label: caseD_2
    ADD ECX,0x1c22010                   ; 00479a46
    CMP ECX,EDX                         ; 00479a4c
    JZ 0x00479a60                       ; 00479a4e
        ;   XREF to: 00479a60 (CONDITIONAL_JUMP)  ; LAB_00479a60
    MOV EAX,dword ptr [EDX]             ; 00479a50 | DAT_01c21f4c
    MOV dword ptr [ECX],EAX             ; 00479a52 | DAT_01c22010
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479a54 | DAT_01c21f50
    MOV dword ptr [ECX + 0x4],EAX       ; 00479a57 | DAT_01c22014
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479a5a | DAT_01c21f54
    MOV dword ptr [ECX + 0x8],EAX       ; 00479a5d | DAT_01c22018
    MOV ECX,dword ptr [0x01c2200c]      ; 00479a60 | DAT_01c2200c
        ;   Label: LAB_00479a60
    INC ECX                             ; 00479a66
    MOV dword ptr [0x01c2200c],ECX      ; 00479a67 | DAT_01c2200c
    IMUL ECX,ECX,0xc                    ; 00479a6d
    FLD float ptr [ESP + 0x8]           ; 00479a70
    SUB ESP,0x8                         ; 00479a74
    FSTP double ptr [ESP]               ; 00479a77
    PUSH 0x0                            ; 00479a7a
    PUSH 0x0                            ; 00479a7c
    PUSH 0xbff00000                     ; 00479a7e
    PUSH 0x0                            ; 00479a83
    PUSH 0x0                            ; 00479a85
    PUSH 0x0                            ; 00479a87
    ADD ECX,0x1c22010                   ; 00479a89
    PUSH ECX                            ; 00479a8f
    PUSH EDI                            ; 00479a90
    PUSH EDX                            ; 00479a91 | DAT_01c21f4c
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479a92
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c2200c]      ; 00479a97 | DAT_01c2200c
    INC EDX                             ; 00479a9d
    ADD ESP,0x2c                        ; 00479a9e
    MOV dword ptr [0x01c2200c],EDX      ; 00479aa1 | DAT_01c2200c
    JMP 0x00479693                      ; 00479aa7
        ;   XREF to: 00479693 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c220d0],0xc ; 00479aac | DAT_01c220d0
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x14]          ; 00479ab3
    SUB ESP,0x8                         ; 00479ab7
    FCHS                                ; 00479aba
    FSTP double ptr [ESP]               ; 00479abc
    PUSH 0x0                            ; 00479abf
    PUSH 0x0                            ; 00479ac1
    PUSH 0x0                            ; 00479ac3
    PUSH 0x0                            ; 00479ac5
    PUSH 0x3ff00000                     ; 00479ac7
    PUSH 0x0                            ; 00479acc
    ADD ECX,0x1c220d4                   ; 00479ace
    PUSH ECX                            ; 00479ad4
    PUSH EDX                            ; 00479ad5 | DAT_01c22010
    PUSH EDI                            ; 00479ad6
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479ad7
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c220d0]      ; 00479adc | DAT_01c220d0
    INC EDX                             ; 00479ae2
    ADD ESP,0x2c                        ; 00479ae3
    MOV dword ptr [0x01c220d0],EDX      ; 00479ae6 | DAT_01c220d0
    JMP 0x00479736                      ; 00479aec
        ;   XREF to: 00479736 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c220d0],0xc ; 00479af1 | DAT_01c220d0
        ;   Label: caseD_2
    ADD ECX,0x1c220d4                   ; 00479af8
    CMP ECX,EDX                         ; 00479afe
    JZ 0x00479b12                       ; 00479b00
        ;   XREF to: 00479b12 (CONDITIONAL_JUMP)  ; LAB_00479b12
    MOV EAX,dword ptr [EDX]             ; 00479b02 | DAT_01c22010
    MOV dword ptr [ECX],EAX             ; 00479b04 | DAT_01c220d4
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479b06 | DAT_01c22014
    MOV dword ptr [ECX + 0x4],EAX       ; 00479b09 | DAT_01c220d8
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479b0c | DAT_01c22018
    MOV dword ptr [ECX + 0x8],EAX       ; 00479b0f | DAT_01c220dc
    MOV ECX,dword ptr [0x01c220d0]      ; 00479b12 | DAT_01c220d0
        ;   Label: LAB_00479b12
    INC ECX                             ; 00479b18
    MOV dword ptr [0x01c220d0],ECX      ; 00479b19 | DAT_01c220d0
    IMUL ECX,ECX,0xc                    ; 00479b1f
    FLD float ptr [ESP + 0x14]          ; 00479b22
    SUB ESP,0x8                         ; 00479b26
    FCHS                                ; 00479b29
    FSTP double ptr [ESP]               ; 00479b2b
    PUSH 0x0                            ; 00479b2e
    PUSH 0x0                            ; 00479b30
    PUSH 0x0                            ; 00479b32
    PUSH 0x0                            ; 00479b34
    PUSH 0x3ff00000                     ; 00479b36
    PUSH 0x0                            ; 00479b3b
    ADD ECX,0x1c220d4                   ; 00479b3d
    PUSH ECX                            ; 00479b43
    PUSH EDI                            ; 00479b44
    PUSH EDX                            ; 00479b45 | DAT_01c22010
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479b46
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c220d0]      ; 00479b4b | DAT_01c220d0
    INC EDX                             ; 00479b51
    ADD ESP,0x2c                        ; 00479b52
    MOV dword ptr [0x01c220d0],EDX      ; 00479b55 | DAT_01c220d0
    JMP 0x00479736                      ; 00479b5b
        ;   XREF to: 00479736 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c22194],0xc ; 00479b60 | DAT_01c22194
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00479b67
    SUB ESP,0x8                         ; 00479b6a
    FSTP double ptr [ESP]               ; 00479b6d
    PUSH 0x0                            ; 00479b70
    PUSH 0x0                            ; 00479b72
    PUSH 0x0                            ; 00479b74
    PUSH 0x0                            ; 00479b76
    PUSH 0xbff00000                     ; 00479b78
    PUSH 0x0                            ; 00479b7d
    ADD ECX,0x1c22198                   ; 00479b7f
    PUSH ECX                            ; 00479b85
    PUSH EDX                            ; 00479b86 | DAT_01c220d4
    PUSH EDI                            ; 00479b87
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479b88
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c22194]      ; 00479b8d | DAT_01c22194
    INC EDX                             ; 00479b93
    ADD ESP,0x2c                        ; 00479b94
    MOV dword ptr [0x01c22194],EDX      ; 00479b97 | DAT_01c22194
    JMP 0x004797d6                      ; 00479b9d
        ;   XREF to: 004797d6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c22194],0xc ; 00479ba2 | DAT_01c22194
        ;   Label: caseD_2
    ADD ECX,0x1c22198                   ; 00479ba9
    CMP ECX,EDX                         ; 00479baf
    JZ 0x00479bc3                       ; 00479bb1
        ;   XREF to: 00479bc3 (CONDITIONAL_JUMP)  ; LAB_00479bc3
    MOV EAX,dword ptr [EDX]             ; 00479bb3 | DAT_01c220d4
    MOV dword ptr [ECX],EAX             ; 00479bb5 | DAT_01c22198
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479bb7 | DAT_01c220d8
    MOV dword ptr [ECX + 0x4],EAX       ; 00479bba | DAT_01c2219c
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479bbd | DAT_01c220dc
    MOV dword ptr [ECX + 0x8],EAX       ; 00479bc0 | DAT_01c221a0
    MOV ECX,dword ptr [0x01c22194]      ; 00479bc3 | DAT_01c22194
        ;   Label: LAB_00479bc3
    INC ECX                             ; 00479bc9
    MOV dword ptr [0x01c22194],ECX      ; 00479bca | DAT_01c22194
    IMUL ECX,ECX,0xc                    ; 00479bd0
    FLD float ptr [ESP]                 ; 00479bd3
    SUB ESP,0x8                         ; 00479bd6
    FSTP double ptr [ESP]               ; 00479bd9
    PUSH 0x0                            ; 00479bdc
    PUSH 0x0                            ; 00479bde
    PUSH 0x0                            ; 00479be0
    PUSH 0x0                            ; 00479be2
    PUSH 0xbff00000                     ; 00479be4
    PUSH 0x0                            ; 00479be9
    ADD ECX,0x1c22198                   ; 00479beb
    PUSH ECX                            ; 00479bf1
    PUSH EDI                            ; 00479bf2
    PUSH EDX                            ; 00479bf3 | DAT_01c220d4
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479bf4
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c22194]      ; 00479bf9 | DAT_01c22194
    INC EDX                             ; 00479bff
    ADD ESP,0x2c                        ; 00479c00
    MOV dword ptr [0x01c22194],EDX      ; 00479c03 | DAT_01c22194
    JMP 0x004797d6                      ; 00479c09
        ;   XREF to: 004797d6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c22258],0xc ; 00479c0e | DAT_01c22258
        ;   Label: caseD_1
    FLD float ptr [ESP + 0xc]           ; 00479c15
    SUB ESP,0x8                         ; 00479c19
    FSTP double ptr [ESP]               ; 00479c1c
    PUSH 0xbff00000                     ; 00479c1f
    PUSH 0x0                            ; 00479c24
    PUSH 0x0                            ; 00479c26
    PUSH 0x0                            ; 00479c28
    PUSH 0x0                            ; 00479c2a
    PUSH 0x0                            ; 00479c2c
    ADD ECX,0x1c2225c                   ; 00479c2e
    PUSH ECX                            ; 00479c34
    PUSH EDX                            ; 00479c35 | DAT_01c22198
    PUSH EDI                            ; 00479c36
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479c37
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c22258]      ; 00479c3c | DAT_01c22258
    INC EDX                             ; 00479c42
    ADD ESP,0x2c                        ; 00479c43
    MOV dword ptr [0x01c22258],EDX      ; 00479c46 | DAT_01c22258
    JMP 0x0047987c                      ; 00479c4c
        ;   XREF to: 0047987c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c22258],0xc ; 00479c51 | DAT_01c22258
        ;   Label: caseD_2
    ADD ECX,0x1c2225c                   ; 00479c58
    CMP ECX,EDX                         ; 00479c5e
    JZ 0x00479c72                       ; 00479c60
        ;   XREF to: 00479c72 (CONDITIONAL_JUMP)  ; LAB_00479c72
    MOV EAX,dword ptr [EDX]             ; 00479c62 | DAT_01c22198
    MOV dword ptr [ECX],EAX             ; 00479c64 | DAT_01c2225c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479c66 | DAT_01c2219c
    MOV dword ptr [ECX + 0x4],EAX       ; 00479c69 | DAT_01c22260
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479c6c | DAT_01c221a0
    MOV dword ptr [ECX + 0x8],EAX       ; 00479c6f | DAT_01c22264
    MOV ECX,dword ptr [0x01c22258]      ; 00479c72 | DAT_01c22258
        ;   Label: LAB_00479c72
    INC ECX                             ; 00479c78
    MOV dword ptr [0x01c22258],ECX      ; 00479c79 | DAT_01c22258
    IMUL ECX,ECX,0xc                    ; 00479c7f
    FLD float ptr [ESP + 0xc]           ; 00479c82
    SUB ESP,0x8                         ; 00479c86
    FSTP double ptr [ESP]               ; 00479c89
    PUSH 0xbff00000                     ; 00479c8c
    PUSH 0x0                            ; 00479c91
    PUSH 0x0                            ; 00479c93
    PUSH 0x0                            ; 00479c95
    PUSH 0x0                            ; 00479c97
    PUSH 0x0                            ; 00479c99
    ADD ECX,0x1c2225c                   ; 00479c9b
    PUSH ECX                            ; 00479ca1
    PUSH EDI                            ; 00479ca2
    PUSH EDX                            ; 00479ca3 | DAT_01c22198
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479ca4
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c22258]      ; 00479ca9 | DAT_01c22258
    INC EDX                             ; 00479caf
    ADD ESP,0x2c                        ; 00479cb0
    MOV dword ptr [0x01c22258],EDX      ; 00479cb3 | DAT_01c22258
    JMP 0x0047987c                      ; 00479cb9
        ;   XREF to: 0047987c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c2231c],0xc ; 00479cbe | DAT_01c2231c
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x4]           ; 00479cc5
    SUB ESP,0x8                         ; 00479cc9
    FSTP double ptr [ESP]               ; 00479ccc
    PUSH 0xbff00000                     ; 00479ccf
    PUSH 0x0                            ; 00479cd4
    PUSH 0x0                            ; 00479cd6
    PUSH 0x0                            ; 00479cd8
    PUSH 0x0                            ; 00479cda
    PUSH 0x0                            ; 00479cdc
    ADD ECX,0x1c22320                   ; 00479cde
    PUSH ECX                            ; 00479ce4
    PUSH EDX                            ; 00479ce5 | DAT_01c2225c
    PUSH EDI                            ; 00479ce6
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479ce7
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c2231c]      ; 00479cec | DAT_01c2231c
    INC EDX                             ; 00479cf2
    ADD ESP,0x2c                        ; 00479cf3
    MOV dword ptr [0x01c2231c],EDX      ; 00479cf6 | DAT_01c2231c
    JMP 0x00479922                      ; 00479cfc
        ;   XREF to: 00479922 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c2231c],0xc ; 00479d01 | DAT_01c2231c
        ;   Label: caseD_2
    ADD ECX,0x1c22320                   ; 00479d08
    CMP ECX,EDX                         ; 00479d0e
    JZ 0x00479d22                       ; 00479d10
        ;   XREF to: 00479d22 (CONDITIONAL_JUMP)  ; LAB_00479d22
    MOV EAX,dword ptr [EDX]             ; 00479d12 | DAT_01c2225c
    MOV dword ptr [ECX],EAX             ; 00479d14
    MOV EAX,dword ptr [EDX + 0x4]       ; 00479d16 | DAT_01c22260
    MOV dword ptr [ECX + 0x4],EAX       ; 00479d19
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479d1c | DAT_01c22264
    MOV dword ptr [ECX + 0x8],EAX       ; 00479d1f
    MOV ECX,dword ptr [0x01c2231c]      ; 00479d22 | DAT_01c2231c
        ;   Label: LAB_00479d22
    INC ECX                             ; 00479d28
    MOV dword ptr [0x01c2231c],ECX      ; 00479d29 | DAT_01c2231c
    IMUL ECX,ECX,0xc                    ; 00479d2f
    FLD float ptr [ESP + 0x4]           ; 00479d32
    SUB ESP,0x8                         ; 00479d36
    FSTP double ptr [ESP]               ; 00479d39
    PUSH 0xbff00000                     ; 00479d3c
    PUSH 0x0                            ; 00479d41
    PUSH 0x0                            ; 00479d43
    PUSH 0x0                            ; 00479d45
    PUSH 0x0                            ; 00479d47
    PUSH 0x0                            ; 00479d49
    ADD ECX,0x1c22320                   ; 00479d4b
    PUSH ECX                            ; 00479d51
    PUSH EDI                            ; 00479d52
    PUSH EDX                            ; 00479d53 | DAT_01c2225c
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479d54
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EDX,dword ptr [0x01c2231c]      ; 00479d59 | DAT_01c2231c
    INC EDX                             ; 00479d5f
    ADD ESP,0x2c                        ; 00479d60
    MOV dword ptr [0x01c2231c],EDX      ; 00479d63 | DAT_01c2231c
    JMP 0x00479922                      ; 00479d69
        ;   XREF to: 00479922 (UNCONDITIONAL_JUMP)  ; caseD_3

