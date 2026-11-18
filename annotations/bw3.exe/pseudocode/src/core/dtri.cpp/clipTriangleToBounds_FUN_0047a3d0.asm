; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0047a3d0(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   triangle_vertices
; CVector3f *      Stack[0x8]:4   bounds_min
; CVector3f *      Stack[0xc]:4   bounds_max
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0047a368 = 0047a9c9
;   undefined1* PTR_caseD_3_0047a370 = 0047a65d
;   undefined1* PTR_caseD_1_0047a378 = 0047aa78
;   undefined1* PTR_caseD_3_0047a380 = 0047a706
;   undefined1* PTR_caseD_1_0047a388 = 0047ab23
;   undefined1* PTR_caseD_3_0047a390 = 0047a7a7
;   undefined1* PTR_caseD_1_0047a398 = 0047abd2
;   undefined1* PTR_caseD_3_0047a3a0 = 0047a85a
;   undefined1* PTR_caseD_1_0047a3a8 = 0047aca6
;   undefined1* PTR_caseD_3_0047a3b0 = 0047a8ff
;   undefined1* PTR_caseD_1_0047a3b8 = 0047ad4f
;   undefined1* PTR_caseD_3_0047a3c0 = 0047a9a4
;   int g_INT_01c599dc
;   float g_FLOAT_01c599e0
;   undefined4 DAT_01c599e4
;   ... and 46 more
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00479970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a3d0
        ;   Label: core_dtri.cpp_clipTriangleToBounds_FUN_0047a3d0
    PUSH ESI                            ; 0047a3d1
    PUSH EDI                            ; 0047a3d2
    PUSH EBP                            ; 0047a3d3
    MOV EBP,ESP                         ; 0047a3d4
    SUB ESP,0x20                        ; 0047a3d6
    AND ESP,0xfffffff8                  ; 0047a3d9
    MOV EDX,0x3                         ; 0047a3dc
    MOV ECX,dword ptr [EBP + 0x14]      ; 0047a3e1
    MOV dword ptr [0x01c599dc],EDX      ; 0047a3e4 | g_INT_01c599dc
    CMP ECX,0x1c599e0                   ; 0047a3ea
    JNZ 0x0047a57e                      ; 0047a3f0
        ;   XREF to: 0047a57e (CONDITIONAL_JUMP)  ; LAB_0047a57e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047a3f6
        ;   Label: LAB_0047a3f6
    ADD EAX,0xc                         ; 0047a3f9
    CMP EAX,0x1c599ec                   ; 0047a3fc
    JZ 0x0047a41d                       ; 0047a401
        ;   XREF to: 0047a41d (CONDITIONAL_JUMP)  ; LAB_0047a41d
    FLD float ptr [EAX]                 ; 0047a403
    FLD float ptr [EAX + 0x8]           ; 0047a405
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047a408
    MOV dword ptr [0x01c599f0],EDX      ; 0047a40b | DAT_01c599f0
    FSTP float ptr [0x01c599f4]         ; 0047a411 | g_FLOAT_01c599f4
    FSTP float ptr [0x01c599ec]         ; 0047a417 | g_FLOAT_01c599ec
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047a41d
        ;   Label: LAB_0047a41d
    ADD EAX,0x18                        ; 0047a420
    CMP EAX,0x1c599f8                   ; 0047a423
    JZ 0x0047a444                       ; 0047a428
        ;   XREF to: 0047a444 (CONDITIONAL_JUMP)  ; LAB_0047a444
    FLD float ptr [EAX]                 ; 0047a42a
    FLD float ptr [EAX + 0x8]           ; 0047a42c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047a42f
    MOV dword ptr [0x01c599fc],EDX      ; 0047a432 | DAT_01c599fc
    FSTP float ptr [0x01c59a00]         ; 0047a438 | g_FLOAT_01c59a00
    FSTP float ptr [0x01c599f8]         ; 0047a43e | g_FLOAT_01c599f8
    MOV EBX,0xffffffff                  ; 0047a444
        ;   Label: LAB_0047a444
    MOV EAX,[0x01c599dc]                ; 0047a449 | g_INT_01c599dc
    XOR EDI,EDI                         ; 0047a44e
    XOR ESI,ESI                         ; 0047a450
    MOV dword ptr [ESP + 0x10],EBX      ; 0047a452
    TEST EAX,EAX                        ; 0047a456
    JLE 0x0047a4e8                      ; 0047a458
        ;   XREF to: 0047a4e8 (CONDITIONAL_JUMP)  ; LAB_0047a4e8
    MOV EBX,0x1c599e0                   ; 0047a45e
    FLD float ptr [EBX]                 ; 0047a463
        ;   Label: LAB_0047a463
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047a465
    MOV ECX,EBX                         ; 0047a468
    XOR EDX,EDX                         ; 0047a46a
    FCOMP float ptr [EAX]               ; 0047a46c
    FNSTSW AX                           ; 0047a46e
    SAHF                                ; 0047a470
    JBE 0x0047a478                      ; 0047a471
        ;   XREF to: 0047a478 (CONDITIONAL_JUMP)  ; LAB_0047a478
    MOV EDX,0x1                         ; 0047a473
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047a478
        ;   Label: LAB_0047a478
    FLD float ptr [ECX + 0x4]           ; 0047a47b
    FCOMP float ptr [EAX + 0x4]         ; 0047a47e
    FNSTSW AX                           ; 0047a481
    SAHF                                ; 0047a483
    JBE 0x0047a489                      ; 0047a484
        ;   XREF to: 0047a489 (CONDITIONAL_JUMP)  ; LAB_0047a489
    OR DL,0x2                           ; 0047a486
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047a489
        ;   Label: LAB_0047a489
    FLD float ptr [ECX + 0x8]           ; 0047a48c
    FCOMP float ptr [EAX + 0x8]         ; 0047a48f
    FNSTSW AX                           ; 0047a492
    SAHF                                ; 0047a494
    JBE 0x0047a49a                      ; 0047a495
        ;   XREF to: 0047a49a (CONDITIONAL_JUMP)  ; LAB_0047a49a
    OR DL,0x4                           ; 0047a497
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047a49a
        ;   Label: LAB_0047a49a
    FLD float ptr [ECX]                 ; 0047a49d
    FCOMP float ptr [EAX]               ; 0047a49f
    FNSTSW AX                           ; 0047a4a1
    SAHF                                ; 0047a4a3
    JNC 0x0047a4a9                      ; 0047a4a4
        ;   XREF to: 0047a4a9 (CONDITIONAL_JUMP)  ; LAB_0047a4a9
    OR DL,0x8                           ; 0047a4a6
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047a4a9
        ;   Label: LAB_0047a4a9
    FLD float ptr [ECX + 0x4]           ; 0047a4ac
    FCOMP float ptr [EAX + 0x4]         ; 0047a4af
    FNSTSW AX                           ; 0047a4b2
    SAHF                                ; 0047a4b4
    JNC 0x0047a4ba                      ; 0047a4b5
        ;   XREF to: 0047a4ba (CONDITIONAL_JUMP)  ; LAB_0047a4ba
    OR DL,0x10                          ; 0047a4b7
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047a4ba
        ;   Label: LAB_0047a4ba
    FLD float ptr [ECX + 0x8]           ; 0047a4bd
    FCOMP float ptr [EAX + 0x8]         ; 0047a4c0
    FNSTSW AX                           ; 0047a4c3
    SAHF                                ; 0047a4c5
    JNC 0x0047a4cb                      ; 0047a4c6
        ;   XREF to: 0047a4cb (CONDITIONAL_JUMP)  ; LAB_0047a4cb
    OR DL,0x20                          ; 0047a4c8
    MOV ECX,dword ptr [ESP + 0x10]      ; 0047a4cb
        ;   Label: LAB_0047a4cb
    MOV EAX,[0x01c599dc]                ; 0047a4cf | g_INT_01c599dc
    ADD EBX,0xc                         ; 0047a4d4
    INC ESI                             ; 0047a4d7
    AND ECX,EDX                         ; 0047a4d8
    OR EDI,EDX                          ; 0047a4da
    MOV dword ptr [ESP + 0x10],ECX      ; 0047a4dc
    CMP ESI,EAX                         ; 0047a4e0
    JL 0x0047a463                       ; 0047a4e2
        ;   XREF to: 0047a463 (CONDITIONAL_JUMP)  ; LAB_0047a463
    TEST EDI,EDI                        ; 0047a4e8
        ;   Label: LAB_0047a4e8
    JNZ 0x0047a59f                      ; 0047a4ea
        ;   XREF to: 0047a59f (CONDITIONAL_JUMP)  ; LAB_0047a59f
    MOV EBX,0x3                         ; 0047a4f0
    MOV ESI,dword ptr [EBP + 0x14]      ; 0047a4f5
    MOV dword ptr [0x01c59e74],EBX      ; 0047a4f8 | g_ClipOutputVertexCount
    CMP ESI,0x1c59e78                   ; 0047a4fe
    JZ 0x0047a522                       ; 0047a504
        ;   XREF to: 0047a522 (CONDITIONAL_JUMP)  ; LAB_0047a522
    MOV EAX,ESI                         ; 0047a506
    FLD float ptr [EAX]                 ; 0047a508
    FLD float ptr [EAX + 0x8]           ; 0047a50a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047a50d
    MOV dword ptr [0x01c59e7c],EDX      ; 0047a510 | g_CVector3f_01c59e78.y
    FSTP float ptr [0x01c59e80]         ; 0047a516 | g_CVector3f_01c59e78.z
    FSTP float ptr [0x01c59e78]         ; 0047a51c | g_CVector3f_01c59e78
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047a522
        ;   Label: LAB_0047a522
    ADD EAX,0xc                         ; 0047a525
    CMP EAX,0x1c59e84                   ; 0047a528
    JZ 0x0047a549                       ; 0047a52d
        ;   XREF to: 0047a549 (CONDITIONAL_JUMP)  ; LAB_0047a549
    FLD float ptr [EAX]                 ; 0047a52f
    FLD float ptr [EAX + 0x8]           ; 0047a531
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047a534
    MOV dword ptr [0x01c59e88],EDX      ; 0047a537 | DAT_01c59e88
    FSTP float ptr [0x01c59e8c]         ; 0047a53d | g_FLOAT_01c59e8c
    FSTP float ptr [0x01c59e84]         ; 0047a543 | g_FLOAT_01c59e84
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047a549
        ;   Label: LAB_0047a549
    ADD EAX,0x18                        ; 0047a54c
    CMP EAX,0x1c59e90                   ; 0047a54f
    JZ 0x0047a570                       ; 0047a554
        ;   XREF to: 0047a570 (CONDITIONAL_JUMP)  ; LAB_0047a570
    FLD float ptr [EAX]                 ; 0047a556
    FLD float ptr [EAX + 0x8]           ; 0047a558
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047a55b
    MOV dword ptr [0x01c59e94],EDX      ; 0047a55e | DAT_01c59e94
    FSTP float ptr [0x01c59e98]         ; 0047a564 | g_FLOAT_01c59e98
    FSTP float ptr [0x01c59e90]         ; 0047a56a | g_FLOAT_01c59e90
    MOV EDX,0x1                         ; 0047a570
        ;   Label: LAB_0047a570
    MOV EAX,EDX                         ; 0047a575
    MOV ESP,EBP                         ; 0047a577
    POP EBP                             ; 0047a579
    POP EDI                             ; 0047a57a
    POP ESI                             ; 0047a57b
    POP EBX                             ; 0047a57c
    RET                                 ; 0047a57d
    MOV EAX,ECX                         ; 0047a57e
        ;   Label: LAB_0047a57e
    FLD float ptr [EAX]                 ; 0047a580
    FLD float ptr [EAX + 0x8]           ; 0047a582
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047a585
    MOV dword ptr [0x01c599e4],EDX      ; 0047a588 | DAT_01c599e4
    FSTP float ptr [0x01c599e8]         ; 0047a58e | g_FLOAT_01c599e8
    FSTP float ptr [0x01c599e0]         ; 0047a594 | g_FLOAT_01c599e0
    JMP 0x0047a3f6                      ; 0047a59a
        ;   XREF to: 0047a3f6 (UNCONDITIONAL_JUMP)  ; LAB_0047a3f6
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047a59f
        ;   Label: LAB_0047a59f
    TEST EDX,EDX                        ; 0047a5a3
    JNZ 0x0047a9be                      ; 0047a5a5
        ;   XREF to: 0047a9be (CONDITIONAL_JUMP)  ; LAB_0047a9be
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047a5ab
    MOV ECX,dword ptr [0x01c599dc]      ; 0047a5ae | g_INT_01c599dc
    MOV dword ptr [0x01c59b64],EDX      ; 0047a5b4 | g_ClipBuffer2VertexCount
    MOV dword ptr [0x01c59c28],EDX      ; 0047a5ba | g_ClipBuffer3VertexCount
    MOV dword ptr [0x01c59cec],EDX      ; 0047a5c0 | g_INT_01c59cec
    MOV dword ptr [0x01c59db0],EDX      ; 0047a5c6 | g_ClipBuffer5VertexCount
    MOV dword ptr [0x01c59e74],EDX      ; 0047a5cc | g_ClipOutputVertexCount
    MOV dword ptr [0x01c59aa0],EDX      ; 0047a5d2 | g_INT_01c59aa0
    MOV EAX,dword ptr [EAX + 0x4]       ; 0047a5d8
    XOR EBX,EBX                         ; 0047a5db
    MOV dword ptr [ESP + 0x14],EAX      ; 0047a5dd
    TEST ECX,ECX                        ; 0047a5e1
    JLE 0x0047a66b                      ; 0047a5e3
        ;   XREF to: 0047a66b (CONDITIONAL_JUMP)  ; LAB_0047a66b
    MOV ESI,0x1c599e0                   ; 0047a5e9
    MOV ECX,dword ptr [0x01c599dc]      ; 0047a5ee | g_INT_01c599dc
        ;   Label: LAB_0047a5ee
    LEA EAX,[EBX + 0x1]                 ; 0047a5f4
    CMP EAX,ECX                         ; 0047a5f7
    JNZ 0x0047a5fd                      ; 0047a5f9
        ;   XREF to: 0047a5fd (CONDITIONAL_JUMP)  ; LAB_0047a5fd
    XOR EAX,ECX                         ; 0047a5fb
    IMUL EAX,EAX,0xc                    ; 0047a5fd
        ;   Label: LAB_0047a5fd
    FLD float ptr [ESI + 0x4]           ; 0047a600
    MOV EDI,0x1c599e0                   ; 0047a603
    MOV EDX,ESI                         ; 0047a608
    XOR ECX,ECX                         ; 0047a60a
    ADD EDI,EAX                         ; 0047a60c
    FCOMP float ptr [ESP + 0x14]        ; 0047a60e
    FNSTSW AX                           ; 0047a612
    SAHF                                ; 0047a614
    JBE 0x0047a61c                      ; 0047a615
        ;   XREF to: 0047a61c (CONDITIONAL_JUMP)  ; LAB_0047a61c
    MOV ECX,0x1                         ; 0047a617
    FLD float ptr [EDI + 0x4]           ; 0047a61c
        ;   Label: LAB_0047a61c
    FCOMP float ptr [ESP + 0x14]        ; 0047a61f
    FNSTSW AX                           ; 0047a623
    SAHF                                ; 0047a625
    JBE 0x0047a62b                      ; 0047a626
        ;   XREF to: 0047a62b (CONDITIONAL_JUMP)  ; LAB_0047a62b
    OR CL,0x2                           ; 0047a628
    CMP ECX,0x3                         ; 0047a62b
        ;   Label: LAB_0047a62b
    JA 0x0047a65d                       ; 0047a62e
        ;   XREF to: 0047a65d (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x47a364]  ; 0047a630 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EAX,dword ptr [0x01c59aa0],0xc ; 0047a637 | g_INT_01c59aa0
        ;   Label: caseD_0
    ADD EAX,0x1c59aa4                   ; 0047a63e
    CMP EAX,EDX                         ; 0047a643
    JZ 0x0047a657                       ; 0047a645
        ;   XREF to: 0047a657 (CONDITIONAL_JUMP)  ; LAB_0047a657
    MOV ECX,dword ptr [EDX]             ; 0047a647
    MOV dword ptr [EAX],ECX             ; 0047a649 | g_ClipBuffer1Vertices
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047a64b
    MOV dword ptr [EAX + 0x4],ECX       ; 0047a64e | g_ClipBuffer1Vertices[0].y
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047a651
    MOV dword ptr [EAX + 0x8],ECX       ; 0047a654 | g_ClipBuffer1Vertices[0].z
    INC dword ptr [0x01c59aa0]          ; 0047a657 | g_INT_01c59aa0
        ;   Label: LAB_0047a657
    MOV EDI,dword ptr [0x01c599dc]      ; 0047a65d | g_INT_01c599dc
        ;   Label: caseD_3
    INC EBX                             ; 0047a663
    ADD ESI,0xc                         ; 0047a664
    CMP EBX,EDI                         ; 0047a667
    JL 0x0047a5ee                       ; 0047a669
        ;   XREF to: 0047a5ee (CONDITIONAL_JUMP)  ; LAB_0047a5ee
    CMP dword ptr [0x01c59aa0],0x3      ; 0047a66b | g_INT_01c59aa0
        ;   Label: LAB_0047a66b
    JL 0x0047a9be                       ; 0047a672
        ;   XREF to: 0047a9be (CONDITIONAL_JUMP)  ; LAB_0047a9be
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047a678
    MOV EDX,dword ptr [0x01c59aa0]      ; 0047a67b | g_INT_01c59aa0
    MOV EAX,dword ptr [EAX + 0x4]       ; 0047a681
    XOR EBX,EBX                         ; 0047a684
    MOV dword ptr [ESP + 0xc],EAX       ; 0047a686
    TEST EDX,EDX                        ; 0047a68a
    JLE 0x0047a713                      ; 0047a68c
        ;   XREF to: 0047a713 (CONDITIONAL_JUMP)  ; LAB_0047a713
    MOV ESI,0x1c59aa4                   ; 0047a692
    MOV EDI,dword ptr [0x01c59aa0]      ; 0047a697 | g_INT_01c59aa0
        ;   Label: LAB_0047a697
    LEA EAX,[EBX + 0x1]                 ; 0047a69d
    CMP EAX,EDI                         ; 0047a6a0
    JNZ 0x0047a6a6                      ; 0047a6a2
        ;   XREF to: 0047a6a6 (CONDITIONAL_JUMP)  ; LAB_0047a6a6
    XOR EAX,EDI                         ; 0047a6a4
    IMUL EAX,EAX,0xc                    ; 0047a6a6
        ;   Label: LAB_0047a6a6
    FLD float ptr [ESI + 0x4]           ; 0047a6a9 | g_ClipBuffer1Vertices[0].y | g_ClipBuffer1Vertices[1].y
    MOV EDI,0x1c59aa4                   ; 0047a6ac
    MOV EDX,ESI                         ; 0047a6b1
    XOR ECX,ECX                         ; 0047a6b3
    ADD EDI,EAX                         ; 0047a6b5
    FCOMP float ptr [ESP + 0xc]         ; 0047a6b7
    FNSTSW AX                           ; 0047a6bb
    SAHF                                ; 0047a6bd
    JNC 0x0047a6c5                      ; 0047a6be
        ;   XREF to: 0047a6c5 (CONDITIONAL_JUMP)  ; LAB_0047a6c5
    MOV ECX,0x1                         ; 0047a6c0
    FLD float ptr [EDI + 0x4]           ; 0047a6c5 | g_ClipBuffer1Vertices[0].y | g_ClipBuffer1Vertices[2].y
        ;   Label: LAB_0047a6c5
    FCOMP float ptr [ESP + 0xc]         ; 0047a6c8
    FNSTSW AX                           ; 0047a6cc
    SAHF                                ; 0047a6ce
    JNC 0x0047a6d4                      ; 0047a6cf
        ;   XREF to: 0047a6d4 (CONDITIONAL_JUMP)  ; LAB_0047a6d4
    OR CL,0x2                           ; 0047a6d1
    CMP ECX,0x3                         ; 0047a6d4
        ;   Label: LAB_0047a6d4
    JA 0x0047a706                       ; 0047a6d7
        ;   XREF to: 0047a706 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x47a374]  ; 0047a6d9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EAX,dword ptr [0x01c59b64],0xc ; 0047a6e0 | g_ClipBuffer2VertexCount
        ;   Label: caseD_0
    ADD EAX,0x1c59b68                   ; 0047a6e7
    CMP EAX,EDX                         ; 0047a6ec
    JZ 0x0047a700                       ; 0047a6ee
        ;   XREF to: 0047a700 (CONDITIONAL_JUMP)  ; LAB_0047a700
    MOV ECX,dword ptr [EDX]             ; 0047a6f0 | g_ClipBuffer1Vertices
    MOV dword ptr [EAX],ECX             ; 0047a6f2 | g_ClipBuffer2Vertices
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047a6f4 | g_ClipBuffer1Vertices[0].y
    MOV dword ptr [EAX + 0x4],ECX       ; 0047a6f7 | g_ClipBuffer2Vertices[0].y
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047a6fa | g_ClipBuffer1Vertices[0].z
    MOV dword ptr [EAX + 0x8],ECX       ; 0047a6fd | g_ClipBuffer2Vertices[0].z
    INC dword ptr [0x01c59b64]          ; 0047a700 | g_ClipBuffer2VertexCount
        ;   Label: LAB_0047a700
    MOV EAX,[0x01c59aa0]                ; 0047a706 | g_INT_01c59aa0
        ;   Label: caseD_3
    INC EBX                             ; 0047a70b
    ADD ESI,0xc                         ; 0047a70c
    CMP EBX,EAX                         ; 0047a70f
    JL 0x0047a697                       ; 0047a711
        ;   XREF to: 0047a697 (CONDITIONAL_JUMP)  ; LAB_0047a697
    MOV EDX,dword ptr [0x01c59b64]      ; 0047a713 | g_ClipBuffer2VertexCount
        ;   Label: LAB_0047a713
    CMP EDX,0x3                         ; 0047a719
    JL 0x0047a9be                       ; 0047a71c
        ;   XREF to: 0047a9be (CONDITIONAL_JUMP)  ; LAB_0047a9be
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047a722
    MOV EAX,dword ptr [EAX]             ; 0047a725
    XOR ESI,ESI                         ; 0047a727
    MOV dword ptr [ESP + 0x18],EAX      ; 0047a729
    TEST EDX,EDX                        ; 0047a72d
    JLE 0x0047a7b4                      ; 0047a72f
        ;   XREF to: 0047a7b4 (CONDITIONAL_JUMP)  ; LAB_0047a7b4
    MOV EBX,0x1c59b68                   ; 0047a735
    MOV EDI,dword ptr [0x01c59b64]      ; 0047a73a | g_ClipBuffer2VertexCount
        ;   Label: LAB_0047a73a
    LEA EAX,[ESI + 0x1]                 ; 0047a740
    CMP EAX,EDI                         ; 0047a743
    JNZ 0x0047a749                      ; 0047a745
        ;   XREF to: 0047a749 (CONDITIONAL_JUMP)  ; LAB_0047a749
    XOR EAX,EDI                         ; 0047a747
    IMUL EAX,EAX,0xc                    ; 0047a749
        ;   Label: LAB_0047a749
    FLD float ptr [EBX]                 ; 0047a74c | g_ClipBuffer2Vertices | g_ClipBuffer2Vertices[1].x
    MOV EDI,0x1c59b68                   ; 0047a74e
    MOV EDX,EBX                         ; 0047a753
    XOR ECX,ECX                         ; 0047a755
    ADD EDI,EAX                         ; 0047a757
    FCOMP float ptr [ESP + 0x18]        ; 0047a759
    FNSTSW AX                           ; 0047a75d
    SAHF                                ; 0047a75f
    JBE 0x0047a767                      ; 0047a760
        ;   XREF to: 0047a767 (CONDITIONAL_JUMP)  ; LAB_0047a767
    MOV ECX,0x1                         ; 0047a762
    FLD float ptr [EDI]                 ; 0047a767 | g_ClipBuffer2Vertices | g_ClipBuffer2Vertices[2].x
        ;   Label: LAB_0047a767
    FCOMP float ptr [ESP + 0x18]        ; 0047a769
    FNSTSW AX                           ; 0047a76d
    SAHF                                ; 0047a76f
    JBE 0x0047a775                      ; 0047a770
        ;   XREF to: 0047a775 (CONDITIONAL_JUMP)  ; LAB_0047a775
    OR CL,0x2                           ; 0047a772
    CMP ECX,0x3                         ; 0047a775
        ;   Label: LAB_0047a775
    JA 0x0047a7a7                       ; 0047a778
        ;   XREF to: 0047a7a7 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x47a384]  ; 0047a77a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EAX,dword ptr [0x01c59c28],0xc ; 0047a781 | g_ClipBuffer3VertexCount
        ;   Label: caseD_0
    ADD EAX,0x1c59c2c                   ; 0047a788
    CMP EAX,EDX                         ; 0047a78d
    JZ 0x0047a7a1                       ; 0047a78f
        ;   XREF to: 0047a7a1 (CONDITIONAL_JUMP)  ; LAB_0047a7a1
    MOV ECX,dword ptr [EDX]             ; 0047a791 | g_ClipBuffer2Vertices
    MOV dword ptr [EAX],ECX             ; 0047a793 | g_ClipBuffer3Vertices
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047a795 | g_ClipBuffer2Vertices[0].y
    MOV dword ptr [EAX + 0x4],ECX       ; 0047a798 | g_ClipBuffer3Vertices[0].y
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047a79b | g_ClipBuffer2Vertices[0].z
    MOV dword ptr [EAX + 0x8],ECX       ; 0047a79e | g_ClipBuffer3Vertices[0].z
    INC dword ptr [0x01c59c28]          ; 0047a7a1 | g_ClipBuffer3VertexCount
        ;   Label: LAB_0047a7a1
    MOV EAX,[0x01c59b64]                ; 0047a7a7 | g_ClipBuffer2VertexCount
        ;   Label: caseD_3
    INC ESI                             ; 0047a7ac
    ADD EBX,0xc                         ; 0047a7ad
    CMP ESI,EAX                         ; 0047a7b0
    JL 0x0047a73a                       ; 0047a7b2
        ;   XREF to: 0047a73a (CONDITIONAL_JUMP)  ; LAB_0047a73a
    MOV EDX,dword ptr [0x01c59c28]      ; 0047a7b4 | g_ClipBuffer3VertexCount
        ;   Label: LAB_0047a7b4
    CMP EDX,0x3                         ; 0047a7ba
    JL 0x0047a9be                       ; 0047a7bd
        ;   XREF to: 0047a9be (CONDITIONAL_JUMP)  ; LAB_0047a9be
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047a7c3
    MOV EAX,dword ptr [EAX]             ; 0047a7c6
    XOR EBX,EBX                         ; 0047a7c8
    MOV dword ptr [ESP + 0x8],EAX       ; 0047a7ca
    TEST EDX,EDX                        ; 0047a7ce
    JLE 0x0047a86b                      ; 0047a7d0
        ;   XREF to: 0047a86b (CONDITIONAL_JUMP)  ; LAB_0047a86b
    MOV ESI,0x1c59c2c                   ; 0047a7d6
    MOV EDI,dword ptr [0x01c59c28]      ; 0047a7db | g_ClipBuffer3VertexCount
        ;   Label: LAB_0047a7db
    LEA EAX,[EBX + 0x1]                 ; 0047a7e1
    CMP EAX,EDI                         ; 0047a7e4
    JNZ 0x0047a7ea                      ; 0047a7e6
        ;   XREF to: 0047a7ea (CONDITIONAL_JUMP)  ; LAB_0047a7ea
    XOR EAX,EDI                         ; 0047a7e8
    FLD float ptr [ESI]                 ; 0047a7ea | g_ClipBuffer3Vertices | g_ClipBuffer3Vertices[1].x
        ;   Label: LAB_0047a7ea
    MOV ECX,EAX                         ; 0047a7ec
    SHL EAX,0x2                         ; 0047a7ee
    MOV EDI,0x1c59c2c                   ; 0047a7f1
    SUB EAX,ECX                         ; 0047a7f6
    MOV EDX,ESI                         ; 0047a7f8
    SHL EAX,0x2                         ; 0047a7fa
    XOR ECX,ECX                         ; 0047a7fd
    ADD EDI,EAX                         ; 0047a7ff
    FCOMP float ptr [ESP + 0x8]         ; 0047a801
    FNSTSW AX                           ; 0047a805
    SAHF                                ; 0047a807
    JNC 0x0047a80f                      ; 0047a808
        ;   XREF to: 0047a80f (CONDITIONAL_JUMP)  ; LAB_0047a80f
    MOV ECX,0x1                         ; 0047a80a
    FLD float ptr [EDI]                 ; 0047a80f | g_ClipBuffer3Vertices
        ;   Label: LAB_0047a80f
    FCOMP float ptr [ESP + 0x8]         ; 0047a811
    FNSTSW AX                           ; 0047a815
    SAHF                                ; 0047a817
    JNC 0x0047a81d                      ; 0047a818
        ;   XREF to: 0047a81d (CONDITIONAL_JUMP)  ; LAB_0047a81d
    OR CL,0x2                           ; 0047a81a
    CMP ECX,0x3                         ; 0047a81d
        ;   Label: LAB_0047a81d
    JA 0x0047a85a                       ; 0047a820
        ;   XREF to: 0047a85a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x47a394]  ; 0047a822 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,dword ptr [0x01c59cec]      ; 0047a829 | g_INT_01c59cec
        ;   Label: caseD_0
    LEA EAX,[ECX*0x4 + 0x0]             ; 0047a82f
    SUB EAX,ECX                         ; 0047a836
    SHL EAX,0x2                         ; 0047a838
    ADD EAX,0x1c59cf0                   ; 0047a83b
    CMP EAX,EDX                         ; 0047a840
    JZ 0x0047a854                       ; 0047a842
        ;   XREF to: 0047a854 (CONDITIONAL_JUMP)  ; LAB_0047a854
    MOV ECX,dword ptr [EDX]             ; 0047a844 | g_ClipBuffer3Vertices
    MOV dword ptr [EAX],ECX             ; 0047a846 | g_ClipBuffer4Vertices
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047a848 | g_ClipBuffer3Vertices[0].y
    MOV dword ptr [EAX + 0x4],ECX       ; 0047a84b | g_ClipBuffer4Vertices[0].y
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047a84e | g_ClipBuffer3Vertices[0].z
    MOV dword ptr [EAX + 0x8],ECX       ; 0047a851 | g_ClipBuffer4Vertices[0].z
    INC dword ptr [0x01c59cec]          ; 0047a854 | g_INT_01c59cec
        ;   Label: LAB_0047a854
    MOV EAX,[0x01c59c28]                ; 0047a85a | g_ClipBuffer3VertexCount
        ;   Label: caseD_3
    INC EBX                             ; 0047a85f
    ADD ESI,0xc                         ; 0047a860
    CMP EBX,EAX                         ; 0047a863
    JL 0x0047a7db                       ; 0047a865
        ;   XREF to: 0047a7db (CONDITIONAL_JUMP)  ; LAB_0047a7db
    MOV EDX,dword ptr [0x01c59cec]      ; 0047a86b | g_INT_01c59cec
        ;   Label: LAB_0047a86b
    CMP EDX,0x3                         ; 0047a871
    JL 0x0047a9be                       ; 0047a874
        ;   XREF to: 0047a9be (CONDITIONAL_JUMP)  ; LAB_0047a9be
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047a87a
    MOV EAX,dword ptr [EAX + 0x8]       ; 0047a87d
    XOR ESI,ESI                         ; 0047a880
    MOV dword ptr [ESP],EAX             ; 0047a882
    TEST EDX,EDX                        ; 0047a885
    JLE 0x0047a90d                      ; 0047a887
        ;   XREF to: 0047a90d (CONDITIONAL_JUMP)  ; LAB_0047a90d
    MOV EBX,0x1c59cf0                   ; 0047a88d
    MOV EDI,dword ptr [0x01c59cec]      ; 0047a892 | g_INT_01c59cec
        ;   Label: LAB_0047a892
    LEA EAX,[ESI + 0x1]                 ; 0047a898
    CMP EAX,EDI                         ; 0047a89b
    JNZ 0x0047a8a1                      ; 0047a89d
        ;   XREF to: 0047a8a1 (CONDITIONAL_JUMP)  ; LAB_0047a8a1
    XOR EAX,EDI                         ; 0047a89f
    IMUL EAX,EAX,0xc                    ; 0047a8a1
        ;   Label: LAB_0047a8a1
    FLD float ptr [EBX + 0x8]           ; 0047a8a4 | g_ClipBuffer4Vertices[0].z | g_ClipBuffer4Vertices[1].z
    MOV EDI,0x1c59cf0                   ; 0047a8a7
    MOV EDX,EBX                         ; 0047a8ac
    XOR ECX,ECX                         ; 0047a8ae
    ADD EDI,EAX                         ; 0047a8b0
    FCOMP float ptr [ESP]               ; 0047a8b2
    FNSTSW AX                           ; 0047a8b5
    SAHF                                ; 0047a8b7
    JNC 0x0047a8bf                      ; 0047a8b8
        ;   XREF to: 0047a8bf (CONDITIONAL_JUMP)  ; LAB_0047a8bf
    MOV ECX,0x1                         ; 0047a8ba
    FLD float ptr [EDI + 0x8]           ; 0047a8bf | g_ClipBuffer4Vertices[0].z | g_ClipBuffer4Vertices[2].z
        ;   Label: LAB_0047a8bf
    FCOMP float ptr [ESP]               ; 0047a8c2
    FNSTSW AX                           ; 0047a8c5
    SAHF                                ; 0047a8c7
    JNC 0x0047a8cd                      ; 0047a8c8
        ;   XREF to: 0047a8cd (CONDITIONAL_JUMP)  ; LAB_0047a8cd
    OR CL,0x2                           ; 0047a8ca
    CMP ECX,0x3                         ; 0047a8cd
        ;   Label: LAB_0047a8cd
    JA 0x0047a8ff                       ; 0047a8d0
        ;   XREF to: 0047a8ff (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x47a3a4]  ; 0047a8d2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EAX,dword ptr [0x01c59db0],0xc ; 0047a8d9 | g_ClipBuffer5VertexCount
        ;   Label: caseD_0
    ADD EAX,0x1c59db4                   ; 0047a8e0
    CMP EAX,EDX                         ; 0047a8e5
    JZ 0x0047a8f9                       ; 0047a8e7
        ;   XREF to: 0047a8f9 (CONDITIONAL_JUMP)  ; LAB_0047a8f9
    MOV ECX,dword ptr [EDX]             ; 0047a8e9 | g_ClipBuffer4Vertices
    MOV dword ptr [EAX],ECX             ; 0047a8eb | g_ClipBuffer5Vertices
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047a8ed | g_ClipBuffer4Vertices[0].y
    MOV dword ptr [EAX + 0x4],ECX       ; 0047a8f0 | g_ClipBuffer5Vertices[0].y
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047a8f3 | g_ClipBuffer4Vertices[0].z
    MOV dword ptr [EAX + 0x8],ECX       ; 0047a8f6 | g_ClipBuffer5Vertices[0].z
    INC dword ptr [0x01c59db0]          ; 0047a8f9 | g_ClipBuffer5VertexCount
        ;   Label: LAB_0047a8f9
    MOV EDX,dword ptr [0x01c59cec]      ; 0047a8ff | g_INT_01c59cec
        ;   Label: caseD_3
    INC ESI                             ; 0047a905
    ADD EBX,0xc                         ; 0047a906
    CMP ESI,EDX                         ; 0047a909
    JL 0x0047a892                       ; 0047a90b
        ;   XREF to: 0047a892 (CONDITIONAL_JUMP)  ; LAB_0047a892
    MOV ECX,dword ptr [0x01c59db0]      ; 0047a90d | g_ClipBuffer5VertexCount
        ;   Label: LAB_0047a90d
    CMP ECX,0x3                         ; 0047a913
    JL 0x0047a9be                       ; 0047a916
        ;   XREF to: 0047a9be (CONDITIONAL_JUMP)  ; LAB_0047a9be
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047a91c
    MOV EAX,dword ptr [EAX + 0x8]       ; 0047a91f
    XOR ESI,ESI                         ; 0047a922
    MOV dword ptr [ESP + 0x4],EAX       ; 0047a924
    TEST ECX,ECX                        ; 0047a928
    JLE 0x0047a9b1                      ; 0047a92a
        ;   XREF to: 0047a9b1 (CONDITIONAL_JUMP)  ; LAB_0047a9b1
    MOV EBX,0x1c59db4                   ; 0047a930
    MOV ECX,dword ptr [0x01c59db0]      ; 0047a935 | g_ClipBuffer5VertexCount
        ;   Label: LAB_0047a935
    LEA EAX,[ESI + 0x1]                 ; 0047a93b
    CMP EAX,ECX                         ; 0047a93e
    JNZ 0x0047a944                      ; 0047a940
        ;   XREF to: 0047a944 (CONDITIONAL_JUMP)  ; LAB_0047a944
    XOR EAX,ECX                         ; 0047a942
    IMUL EAX,EAX,0xc                    ; 0047a944
        ;   Label: LAB_0047a944
    FLD float ptr [EBX + 0x8]           ; 0047a947 | g_ClipBuffer5Vertices[0].z | g_ClipBuffer5Vertices[1].z
    MOV EDI,0x1c59db4                   ; 0047a94a
    MOV EDX,EBX                         ; 0047a94f
    XOR ECX,ECX                         ; 0047a951
    ADD EDI,EAX                         ; 0047a953
    FCOMP float ptr [ESP + 0x4]         ; 0047a955
    FNSTSW AX                           ; 0047a959
    SAHF                                ; 0047a95b
    JBE 0x0047a963                      ; 0047a95c
        ;   XREF to: 0047a963 (CONDITIONAL_JUMP)  ; LAB_0047a963
    MOV ECX,0x1                         ; 0047a95e
    FLD float ptr [EDI + 0x8]           ; 0047a963 | g_ClipBuffer5Vertices[0].z | g_ClipBuffer5Vertices[2].z
        ;   Label: LAB_0047a963
    FCOMP float ptr [ESP + 0x4]         ; 0047a966
    FNSTSW AX                           ; 0047a96a
    SAHF                                ; 0047a96c
    JBE 0x0047a972                      ; 0047a96d
        ;   XREF to: 0047a972 (CONDITIONAL_JUMP)  ; LAB_0047a972
    OR CL,0x2                           ; 0047a96f
    CMP ECX,0x3                         ; 0047a972
        ;   Label: LAB_0047a972
    JA 0x0047a9a4                       ; 0047a975
        ;   XREF to: 0047a9a4 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x47a3b4]  ; 0047a977 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EAX,dword ptr [0x01c59e74],0xc ; 0047a97e | g_ClipOutputVertexCount
        ;   Label: caseD_0
    ADD EAX,0x1c59e78                   ; 0047a985
    CMP EAX,EDX                         ; 0047a98a
    JZ 0x0047a99e                       ; 0047a98c
        ;   XREF to: 0047a99e (CONDITIONAL_JUMP)  ; LAB_0047a99e
    MOV ECX,dword ptr [EDX]             ; 0047a98e | g_ClipBuffer5Vertices
    MOV dword ptr [EAX],ECX             ; 0047a990
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047a992 | g_ClipBuffer5Vertices[0].y
    MOV dword ptr [EAX + 0x4],ECX       ; 0047a995
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047a998 | g_ClipBuffer5Vertices[0].z
    MOV dword ptr [EAX + 0x8],ECX       ; 0047a99b
    INC dword ptr [0x01c59e74]          ; 0047a99e | g_ClipOutputVertexCount
        ;   Label: LAB_0047a99e
    MOV EAX,[0x01c59db0]                ; 0047a9a4 | g_ClipBuffer5VertexCount
        ;   Label: caseD_3
    INC ESI                             ; 0047a9a9
    ADD EBX,0xc                         ; 0047a9aa
    CMP ESI,EAX                         ; 0047a9ad
    JL 0x0047a935                       ; 0047a9af
        ;   XREF to: 0047a935 (CONDITIONAL_JUMP)  ; LAB_0047a935
    CMP dword ptr [0x01c59e74],0x3      ; 0047a9b1 | g_ClipOutputVertexCount
        ;   Label: LAB_0047a9b1
    JGE 0x0047a570                      ; 0047a9b8
        ;   XREF to: 0047a570 (CONDITIONAL_JUMP)  ; LAB_0047a570
    XOR EDX,EDX                         ; 0047a9be
        ;   Label: LAB_0047a9be
    MOV EAX,EDX                         ; 0047a9c0
    MOV ESP,EBP                         ; 0047a9c2
    POP EBP                             ; 0047a9c4
    POP EDI                             ; 0047a9c5
    POP ESI                             ; 0047a9c6
    POP EBX                             ; 0047a9c7
    RET                                 ; 0047a9c8
    IMUL EAX,dword ptr [0x01c59aa0],0xc ; 0047a9c9 | g_INT_01c59aa0
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x14]          ; 0047a9d0
    SUB ESP,0x8                         ; 0047a9d4
    FCHS                                ; 0047a9d7
    FSTP double ptr [ESP]               ; 0047a9d9
    PUSH 0x0                            ; 0047a9dc
    PUSH 0x0                            ; 0047a9de
    PUSH 0x3ff00000                     ; 0047a9e0
    PUSH 0x0                            ; 0047a9e5
    PUSH 0x0                            ; 0047a9e7
    PUSH 0x0                            ; 0047a9e9
    ADD EAX,0x1c59aa4                   ; 0047a9eb
    PUSH EAX                            ; 0047a9f0
    PUSH EDX                            ; 0047a9f1
    PUSH EDI                            ; 0047a9f2
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047a9f3
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59aa0]      ; 0047a9f8 | g_INT_01c59aa0
    INC EDI                             ; 0047a9fe
    ADD ESP,0x2c                        ; 0047a9ff
    MOV dword ptr [0x01c59aa0],EDI      ; 0047aa02 | g_INT_01c59aa0
    JMP 0x0047a65d                      ; 0047aa08
        ;   XREF to: 0047a65d (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x01c59aa0],0xc ; 0047aa0d | g_INT_01c59aa0
        ;   Label: caseD_2
    ADD EAX,0x1c59aa4                   ; 0047aa14
    CMP EAX,EDX                         ; 0047aa19
    JZ 0x0047aa2d                       ; 0047aa1b
        ;   XREF to: 0047aa2d (CONDITIONAL_JUMP)  ; LAB_0047aa2d
    MOV ECX,dword ptr [EDX]             ; 0047aa1d
    MOV dword ptr [EAX],ECX             ; 0047aa1f | g_ClipBuffer1Vertices
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047aa21
    MOV dword ptr [EAX + 0x4],ECX       ; 0047aa24 | g_ClipBuffer1Vertices[0].y
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047aa27
    MOV dword ptr [EAX + 0x8],ECX       ; 0047aa2a | g_ClipBuffer1Vertices[0].z
    MOV EAX,[0x01c59aa0]                ; 0047aa2d | g_INT_01c59aa0
        ;   Label: LAB_0047aa2d
    INC EAX                             ; 0047aa32
    MOV [0x01c59aa0],EAX                ; 0047aa33 | g_INT_01c59aa0
    IMUL EAX,EAX,0xc                    ; 0047aa38
    FLD float ptr [ESP + 0x14]          ; 0047aa3b
    SUB ESP,0x8                         ; 0047aa3f
    FCHS                                ; 0047aa42
    FSTP double ptr [ESP]               ; 0047aa44
    PUSH 0x0                            ; 0047aa47
    PUSH 0x0                            ; 0047aa49
    PUSH 0x3ff00000                     ; 0047aa4b
    PUSH 0x0                            ; 0047aa50
    PUSH 0x0                            ; 0047aa52
    PUSH 0x0                            ; 0047aa54
    ADD EAX,0x1c59aa4                   ; 0047aa56
    PUSH EAX                            ; 0047aa5b
    PUSH EDI                            ; 0047aa5c
    PUSH EDX                            ; 0047aa5d
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047aa5e
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59aa0]      ; 0047aa63 | g_INT_01c59aa0
    INC EDI                             ; 0047aa69
    ADD ESP,0x2c                        ; 0047aa6a
    MOV dword ptr [0x01c59aa0],EDI      ; 0047aa6d | g_INT_01c59aa0
    JMP 0x0047a65d                      ; 0047aa73
        ;   XREF to: 0047a65d (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x01c59b64],0xc ; 0047aa78 | g_ClipBuffer2VertexCount
        ;   Label: caseD_1
    FLD float ptr [ESP + 0xc]           ; 0047aa7f
    SUB ESP,0x8                         ; 0047aa83
    FSTP double ptr [ESP]               ; 0047aa86
    PUSH 0x0                            ; 0047aa89
    PUSH 0x0                            ; 0047aa8b
    PUSH 0xbff00000                     ; 0047aa8d
    PUSH 0x0                            ; 0047aa92
    PUSH 0x0                            ; 0047aa94
    PUSH 0x0                            ; 0047aa96
    ADD EAX,0x1c59b68                   ; 0047aa98
    PUSH EAX                            ; 0047aa9d
    PUSH EDX                            ; 0047aa9e | g_ClipBuffer1Vertices
    PUSH EDI                            ; 0047aa9f
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047aaa0
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59b64]      ; 0047aaa5 | g_ClipBuffer2VertexCount
    INC EDI                             ; 0047aaab
    ADD ESP,0x2c                        ; 0047aaac
    MOV dword ptr [0x01c59b64],EDI      ; 0047aaaf | g_ClipBuffer2VertexCount
    JMP 0x0047a706                      ; 0047aab5
        ;   XREF to: 0047a706 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x01c59b64],0xc ; 0047aaba | g_ClipBuffer2VertexCount
        ;   Label: caseD_2
    ADD EAX,0x1c59b68                   ; 0047aac1
    CMP EAX,EDX                         ; 0047aac6
    JZ 0x0047aada                       ; 0047aac8
        ;   XREF to: 0047aada (CONDITIONAL_JUMP)  ; LAB_0047aada
    MOV ECX,dword ptr [EDX]             ; 0047aaca | g_ClipBuffer1Vertices
    MOV dword ptr [EAX],ECX             ; 0047aacc | g_ClipBuffer2Vertices
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047aace | g_ClipBuffer1Vertices[0].y
    MOV dword ptr [EAX + 0x4],ECX       ; 0047aad1 | g_ClipBuffer2Vertices[0].y
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047aad4 | g_ClipBuffer1Vertices[0].z
    MOV dword ptr [EAX + 0x8],ECX       ; 0047aad7 | g_ClipBuffer2Vertices[0].z
    MOV EAX,[0x01c59b64]                ; 0047aada | g_ClipBuffer2VertexCount
        ;   Label: LAB_0047aada
    INC EAX                             ; 0047aadf
    MOV [0x01c59b64],EAX                ; 0047aae0 | g_ClipBuffer2VertexCount
    IMUL EAX,EAX,0xc                    ; 0047aae5
    FLD float ptr [ESP + 0xc]           ; 0047aae8
    SUB ESP,0x8                         ; 0047aaec
    FSTP double ptr [ESP]               ; 0047aaef
    PUSH 0x0                            ; 0047aaf2
    PUSH 0x0                            ; 0047aaf4
    PUSH 0xbff00000                     ; 0047aaf6
    PUSH 0x0                            ; 0047aafb
    PUSH 0x0                            ; 0047aafd
    PUSH 0x0                            ; 0047aaff
    ADD EAX,0x1c59b68                   ; 0047ab01
    PUSH EAX                            ; 0047ab06
    PUSH EDI                            ; 0047ab07
    PUSH EDX                            ; 0047ab08 | g_ClipBuffer1Vertices
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047ab09
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59b64]      ; 0047ab0e | g_ClipBuffer2VertexCount
    INC EDI                             ; 0047ab14
    ADD ESP,0x2c                        ; 0047ab15
    MOV dword ptr [0x01c59b64],EDI      ; 0047ab18 | g_ClipBuffer2VertexCount
    JMP 0x0047a706                      ; 0047ab1e
        ;   XREF to: 0047a706 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x01c59c28],0xc ; 0047ab23 | g_ClipBuffer3VertexCount
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x18]          ; 0047ab2a
    SUB ESP,0x8                         ; 0047ab2e
    FCHS                                ; 0047ab31
    FSTP double ptr [ESP]               ; 0047ab33
    PUSH 0x0                            ; 0047ab36
    PUSH 0x0                            ; 0047ab38
    PUSH 0x0                            ; 0047ab3a
    PUSH 0x0                            ; 0047ab3c
    PUSH 0x3ff00000                     ; 0047ab3e
    PUSH 0x0                            ; 0047ab43
    ADD EAX,0x1c59c2c                   ; 0047ab45
    PUSH EAX                            ; 0047ab4a
    PUSH EDX                            ; 0047ab4b | g_ClipBuffer2Vertices
    PUSH EDI                            ; 0047ab4c
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047ab4d
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59c28]      ; 0047ab52 | g_ClipBuffer3VertexCount
    INC EDI                             ; 0047ab58
    ADD ESP,0x2c                        ; 0047ab59
    MOV dword ptr [0x01c59c28],EDI      ; 0047ab5c | g_ClipBuffer3VertexCount
    JMP 0x0047a7a7                      ; 0047ab62
        ;   XREF to: 0047a7a7 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x01c59c28],0xc ; 0047ab67 | g_ClipBuffer3VertexCount
        ;   Label: caseD_2
    ADD EAX,0x1c59c2c                   ; 0047ab6e
    CMP EAX,EDX                         ; 0047ab73
    JZ 0x0047ab87                       ; 0047ab75
        ;   XREF to: 0047ab87 (CONDITIONAL_JUMP)  ; LAB_0047ab87
    MOV ECX,dword ptr [EDX]             ; 0047ab77 | g_ClipBuffer2Vertices
    MOV dword ptr [EAX],ECX             ; 0047ab79 | g_ClipBuffer3Vertices
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047ab7b | g_ClipBuffer2Vertices[0].y
    MOV dword ptr [EAX + 0x4],ECX       ; 0047ab7e | g_ClipBuffer3Vertices[0].y
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047ab81 | g_ClipBuffer2Vertices[0].z
    MOV dword ptr [EAX + 0x8],ECX       ; 0047ab84 | g_ClipBuffer3Vertices[0].z
    MOV EAX,[0x01c59c28]                ; 0047ab87 | g_ClipBuffer3VertexCount
        ;   Label: LAB_0047ab87
    INC EAX                             ; 0047ab8c
    MOV [0x01c59c28],EAX                ; 0047ab8d | g_ClipBuffer3VertexCount
    IMUL EAX,EAX,0xc                    ; 0047ab92
    FLD float ptr [ESP + 0x18]          ; 0047ab95
    SUB ESP,0x8                         ; 0047ab99
    FCHS                                ; 0047ab9c
    FSTP double ptr [ESP]               ; 0047ab9e
    PUSH 0x0                            ; 0047aba1
    PUSH 0x0                            ; 0047aba3
    PUSH 0x0                            ; 0047aba5
    PUSH 0x0                            ; 0047aba7
    PUSH 0x3ff00000                     ; 0047aba9
    PUSH 0x0                            ; 0047abae
    ADD EAX,0x1c59c2c                   ; 0047abb0
    PUSH EAX                            ; 0047abb5
    PUSH EDI                            ; 0047abb6
    PUSH EDX                            ; 0047abb7 | g_ClipBuffer2Vertices
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047abb8
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59c28]      ; 0047abbd | g_ClipBuffer3VertexCount
    INC EDI                             ; 0047abc3
    ADD ESP,0x2c                        ; 0047abc4
    MOV dword ptr [0x01c59c28],EDI      ; 0047abc7 | g_ClipBuffer3VertexCount
    JMP 0x0047a7a7                      ; 0047abcd
        ;   XREF to: 0047a7a7 (UNCONDITIONAL_JUMP)  ; caseD_3
    FLD float ptr [ESP + 0x8]           ; 0047abd2
        ;   Label: caseD_1
    SUB ESP,0x8                         ; 0047abd6
    FSTP double ptr [ESP]               ; 0047abd9
    MOV EAX,[0x01c59cec]                ; 0047abdc | g_INT_01c59cec
    PUSH 0x0                            ; 0047abe1
    MOV dword ptr [ESP + 0x28],EAX      ; 0047abe3
    PUSH 0x0                            ; 0047abe7
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0047abe9
    PUSH 0x0                            ; 0047abed
    SHL EAX,0x2                         ; 0047abef
    PUSH 0x0                            ; 0047abf2
    SUB EAX,ECX                         ; 0047abf4
    PUSH 0xbff00000                     ; 0047abf6
    SHL EAX,0x2                         ; 0047abfb
    PUSH 0x0                            ; 0047abfe
    ADD EAX,0x1c59cf0                   ; 0047ac00
    PUSH EAX                            ; 0047ac05
    PUSH EDX                            ; 0047ac06 | g_ClipBuffer3Vertices
    PUSH EDI                            ; 0047ac07
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047ac08
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59cec]      ; 0047ac0d | g_INT_01c59cec
    INC EDI                             ; 0047ac13
    ADD ESP,0x2c                        ; 0047ac14
    MOV dword ptr [0x01c59cec],EDI      ; 0047ac17 | g_INT_01c59cec
    JMP 0x0047a85a                      ; 0047ac1d
        ;   XREF to: 0047a85a (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV EAX,[0x01c59cec]                ; 0047ac22 | g_INT_01c59cec
        ;   Label: caseD_2
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047ac27
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0047ac2b
    SHL EAX,0x2                         ; 0047ac2f
    SUB EAX,ECX                         ; 0047ac32
    SHL EAX,0x2                         ; 0047ac34
    ADD EAX,0x1c59cf0                   ; 0047ac37
    CMP EAX,EDX                         ; 0047ac3c
    JZ 0x0047ac50                       ; 0047ac3e
        ;   XREF to: 0047ac50 (CONDITIONAL_JUMP)  ; LAB_0047ac50
    MOV ECX,dword ptr [EDX]             ; 0047ac40 | g_ClipBuffer3Vertices
    MOV dword ptr [EAX],ECX             ; 0047ac42 | g_ClipBuffer4Vertices
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047ac44 | g_ClipBuffer3Vertices[0].y
    MOV dword ptr [EAX + 0x4],ECX       ; 0047ac47 | g_ClipBuffer4Vertices[0].y
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047ac4a | g_ClipBuffer3Vertices[0].z
    MOV dword ptr [EAX + 0x8],ECX       ; 0047ac4d | g_ClipBuffer4Vertices[0].z
    FLD float ptr [ESP + 0x8]           ; 0047ac50
        ;   Label: LAB_0047ac50
    SUB ESP,0x8                         ; 0047ac54
    MOV EAX,[0x01c59cec]                ; 0047ac57 | g_INT_01c59cec
    FSTP double ptr [ESP]               ; 0047ac5c
    INC EAX                             ; 0047ac5f
    PUSH 0x0                            ; 0047ac60
    MOV dword ptr [ESP + 0x28],EAX      ; 0047ac62
    PUSH 0x0                            ; 0047ac66
    MOV [0x01c59cec],EAX                ; 0047ac68 | g_INT_01c59cec
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0047ac6d
    PUSH 0x0                            ; 0047ac71
    SHL EAX,0x2                         ; 0047ac73
    PUSH 0x0                            ; 0047ac76
    SUB EAX,ECX                         ; 0047ac78
    PUSH 0xbff00000                     ; 0047ac7a
    SHL EAX,0x2                         ; 0047ac7f
    PUSH 0x0                            ; 0047ac82
    ADD EAX,0x1c59cf0                   ; 0047ac84
    PUSH EAX                            ; 0047ac89
    PUSH EDI                            ; 0047ac8a
    PUSH EDX                            ; 0047ac8b | g_ClipBuffer3Vertices
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047ac8c
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59cec]      ; 0047ac91 | g_INT_01c59cec
    INC EDI                             ; 0047ac97
    ADD ESP,0x2c                        ; 0047ac98
    MOV dword ptr [0x01c59cec],EDI      ; 0047ac9b | g_INT_01c59cec
    JMP 0x0047a85a                      ; 0047aca1
        ;   XREF to: 0047a85a (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x01c59db0],0xc ; 0047aca6 | g_ClipBuffer5VertexCount
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0047acad
    SUB ESP,0x8                         ; 0047acb0
    FSTP double ptr [ESP]               ; 0047acb3
    PUSH 0xbff00000                     ; 0047acb6
    PUSH 0x0                            ; 0047acbb
    PUSH 0x0                            ; 0047acbd
    PUSH 0x0                            ; 0047acbf
    PUSH 0x0                            ; 0047acc1
    PUSH 0x0                            ; 0047acc3
    ADD EAX,0x1c59db4                   ; 0047acc5
    PUSH EAX                            ; 0047acca
    PUSH EDX                            ; 0047accb | g_ClipBuffer4Vertices
    PUSH EDI                            ; 0047accc
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047accd
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59db0]      ; 0047acd2 | g_ClipBuffer5VertexCount
    INC EDI                             ; 0047acd8
    ADD ESP,0x2c                        ; 0047acd9
    MOV dword ptr [0x01c59db0],EDI      ; 0047acdc | g_ClipBuffer5VertexCount
    JMP 0x0047a8ff                      ; 0047ace2
        ;   XREF to: 0047a8ff (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x01c59db0],0xc ; 0047ace7 | g_ClipBuffer5VertexCount
        ;   Label: caseD_2
    ADD EAX,0x1c59db4                   ; 0047acee
    CMP EAX,EDX                         ; 0047acf3
    JZ 0x0047ad07                       ; 0047acf5
        ;   XREF to: 0047ad07 (CONDITIONAL_JUMP)  ; LAB_0047ad07
    MOV ECX,dword ptr [EDX]             ; 0047acf7 | g_ClipBuffer4Vertices
    MOV dword ptr [EAX],ECX             ; 0047acf9 | g_ClipBuffer5Vertices
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047acfb | g_ClipBuffer4Vertices[0].y
    MOV dword ptr [EAX + 0x4],ECX       ; 0047acfe | g_ClipBuffer5Vertices[0].y
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047ad01 | g_ClipBuffer4Vertices[0].z
    MOV dword ptr [EAX + 0x8],ECX       ; 0047ad04 | g_ClipBuffer5Vertices[0].z
    MOV EAX,[0x01c59db0]                ; 0047ad07 | g_ClipBuffer5VertexCount
        ;   Label: LAB_0047ad07
    INC EAX                             ; 0047ad0c
    MOV [0x01c59db0],EAX                ; 0047ad0d | g_ClipBuffer5VertexCount
    IMUL EAX,EAX,0xc                    ; 0047ad12
    FLD float ptr [ESP]                 ; 0047ad15
    SUB ESP,0x8                         ; 0047ad18
    FSTP double ptr [ESP]               ; 0047ad1b
    PUSH 0xbff00000                     ; 0047ad1e
    PUSH 0x0                            ; 0047ad23
    PUSH 0x0                            ; 0047ad25
    PUSH 0x0                            ; 0047ad27
    PUSH 0x0                            ; 0047ad29
    PUSH 0x0                            ; 0047ad2b
    ADD EAX,0x1c59db4                   ; 0047ad2d
    PUSH EAX                            ; 0047ad32
    PUSH EDI                            ; 0047ad33
    PUSH EDX                            ; 0047ad34 | g_ClipBuffer4Vertices
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047ad35
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59db0]      ; 0047ad3a | g_ClipBuffer5VertexCount
    INC EDI                             ; 0047ad40
    ADD ESP,0x2c                        ; 0047ad41
    MOV dword ptr [0x01c59db0],EDI      ; 0047ad44 | g_ClipBuffer5VertexCount
    JMP 0x0047a8ff                      ; 0047ad4a
        ;   XREF to: 0047a8ff (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x01c59e74],0xc ; 0047ad4f | g_ClipOutputVertexCount
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x4]           ; 0047ad56
    SUB ESP,0x8                         ; 0047ad5a
    FSTP double ptr [ESP]               ; 0047ad5d
    PUSH 0xbff00000                     ; 0047ad60
    PUSH 0x0                            ; 0047ad65
    PUSH 0x0                            ; 0047ad67
    PUSH 0x0                            ; 0047ad69
    PUSH 0x0                            ; 0047ad6b
    PUSH 0x0                            ; 0047ad6d
    ADD EAX,0x1c59e78                   ; 0047ad6f
    PUSH EAX                            ; 0047ad74
    PUSH EDX                            ; 0047ad75 | g_ClipBuffer5Vertices
    PUSH EDI                            ; 0047ad76
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047ad77
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59e74]      ; 0047ad7c | g_ClipOutputVertexCount
    INC EDI                             ; 0047ad82
    ADD ESP,0x2c                        ; 0047ad83
    MOV dword ptr [0x01c59e74],EDI      ; 0047ad86 | g_ClipOutputVertexCount
    JMP 0x0047a9a4                      ; 0047ad8c
        ;   XREF to: 0047a9a4 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x01c59e74],0xc ; 0047ad91 | g_ClipOutputVertexCount
        ;   Label: caseD_2
    ADD EAX,0x1c59e78                   ; 0047ad98
    CMP EAX,EDX                         ; 0047ad9d
    JZ 0x0047adb1                       ; 0047ad9f
        ;   XREF to: 0047adb1 (CONDITIONAL_JUMP)  ; LAB_0047adb1
    MOV ECX,dword ptr [EDX]             ; 0047ada1 | g_ClipBuffer5Vertices
    MOV dword ptr [EAX],ECX             ; 0047ada3
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047ada5 | g_ClipBuffer5Vertices[0].y
    MOV dword ptr [EAX + 0x4],ECX       ; 0047ada8
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047adab | g_ClipBuffer5Vertices[0].z
    MOV dword ptr [EAX + 0x8],ECX       ; 0047adae
    MOV EAX,[0x01c59e74]                ; 0047adb1 | g_ClipOutputVertexCount
        ;   Label: LAB_0047adb1
    INC EAX                             ; 0047adb6
    MOV [0x01c59e74],EAX                ; 0047adb7 | g_ClipOutputVertexCount
    IMUL EAX,EAX,0xc                    ; 0047adbc
    FLD float ptr [ESP + 0x4]           ; 0047adbf
    SUB ESP,0x8                         ; 0047adc3
    FSTP double ptr [ESP]               ; 0047adc6
    PUSH 0xbff00000                     ; 0047adc9
    PUSH 0x0                            ; 0047adce
    PUSH 0x0                            ; 0047add0
    PUSH 0x0                            ; 0047add2
    PUSH 0x0                            ; 0047add4
    PUSH 0x0                            ; 0047add6
    ADD EAX,0x1c59e78                   ; 0047add8
    PUSH EAX                            ; 0047addd
    PUSH EDI                            ; 0047adde
    PUSH EDX                            ; 0047addf | g_ClipBuffer5Vertices
    CALL core_dtri.cpp_clipLineToPlane_FUN_00479970 ; 0047ade0
        ;   XREF to: 00479970 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00479970(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDI,dword ptr [0x01c59e74]      ; 0047ade5 | g_ClipOutputVertexCount
    INC EDI                             ; 0047adeb
    ADD ESP,0x2c                        ; 0047adec
    MOV dword ptr [0x01c59e74],EDI      ; 0047adef | g_ClipOutputVertexCount
    JMP 0x0047a9a4                      ; 0047adf5
        ;   XREF to: 0047a9a4 (UNCONDITIONAL_JUMP)  ; caseD_3

