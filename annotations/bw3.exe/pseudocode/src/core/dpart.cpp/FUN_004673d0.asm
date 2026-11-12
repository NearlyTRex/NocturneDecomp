; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_FUN_004673d0(CVector3i *vertex_indices,int vertex_count)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
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
; XREF[4]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 at 0046b196
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0 at 0046ddb2
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960 at 0046da0d
;   engine_drender.cpp_FUN_0046de6e at 0046dfa4
;
; Referenced Globals:
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b01c
;   undefined4 DAT_0060b024
;   undefined4 DAT_0060b028
;   undefined4 DAT_007303f4
;   undefined4 DAT_007303fc
;   undefined4 DAT_01bdcfd4
;   undefined4 DAT_01bdcfd8
;   undefined4 DAT_01bdd028
;   undefined4 DAT_01bdd4d8
;   undefined4 DAT_01bdd4dc
;   undefined4 DAT_01bdd520
;   undefined4 DAT_01bdd814
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   ... and 2 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0
;   engine_prim.c_prepareDepthBuffer_FUN_00515920
;   engine_prim.c_replaceWWithDepth_FUN_00515a80
;   engine_special.cpp_drawPolygon2_FUN_00565c40
;   engine_special.cpp_FUN_00563257
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004673d0
        ;   Label: core_dpart.cpp_FUN_004673d0
    PUSH ESI                            ; 004673d1
    PUSH EDI                            ; 004673d2
    PUSH EBP                            ; 004673d3
    SUB ESP,0x64                        ; 004673d4
    MOV EBP,dword ptr [0x01bdcfd4]      ; 004673d7 | DAT_01bdcfd4
    MOV EDI,dword ptr [ESP + 0x7c]      ; 004673dd
    CMP dword ptr [0x007303fc],0x0      ; 004673e1 | DAT_007303fc
    JNZ 0x00467463                      ; 004673e8
        ;   XREF to: 00467463 (CONDITIONAL_JUMP)  ; LAB_00467463
    MOV ECX,dword ptr [0x01ed3198]      ; 004673ee | DAT_01ed3198
        ;   Label: LAB_004673ee
    MOV EBX,dword ptr [0x01c6cee8]      ; 004673f4 | DAT_01c6cee8
    INC ECX                             ; 004673fa
    MOV EBP,dword ptr [0x01bdcfd4]      ; 004673fb | DAT_01bdcfd4
    MOV dword ptr [0x01ed3198],ECX      ; 00467401 | DAT_01ed3198
    TEST EBX,EBX                        ; 00467407
    JZ 0x00467758                       ; 00467409
        ;   XREF to: 00467758 (CONDITIONAL_JUMP)  ; LAB_00467758
    MOV ESI,dword ptr [0x007303f4]      ; 0046740f | DAT_007303f4
    TEST ESI,ESI                        ; 00467415
    JNZ 0x00467758                      ; 00467417
        ;   XREF to: 00467758 (CONDITIONAL_JUMP)  ; LAB_00467758
    TEST EDI,EDI                        ; 0046741d
    JLE 0x00467440                      ; 0046741f
        ;   XREF to: 00467440 (CONDITIONAL_JUMP)  ; LAB_00467440
    MOV EAX,dword ptr [ESP + 0x78]      ; 00467421
    IMUL EDX,dword ptr [EAX],0x30       ; 00467425
        ;   Label: LAB_00467425
    INC ESI                             ; 00467428
    ADD EDX,0x60b014                    ; 00467429 | DAT_0060b014
    ADD EAX,0x4                         ; 0046742f
    MOV dword ptr [ESP + ESI*0x4 + -0x4],EDX ; 00467432
    CMP ESI,EDI                         ; 00467436
    JL 0x00467425                       ; 00467438
        ;   XREF to: 00467425 (CONDITIONAL_JUMP)  ; LAB_00467425
    LEA EAX,[EAX]                       ; 0046743a
    MOV EBX,dword ptr [0x01c6e2b4]      ; 00467440 | DAT_01c6e2b4
        ;   Label: LAB_00467440
    PUSH EBX                            ; 00467446
    PUSH EDI                            ; 00467447
    LEA EAX,[ESP + 0x8]                 ; 00467448
    PUSH EAX                            ; 0046744c
    CALL engine_special.cpp_drawPolygon2_FUN_00565c40 ; 0046744d
        ;   XREF to: 00565c40 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00565c40(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 00467452
    MOV EBP,dword ptr [0x01bdcfd4]      ; 00467455 | DAT_01bdcfd4
        ;   Label: LAB_00467455
    ADD ESP,0x64                        ; 0046745b
    POP EBP                             ; 0046745e
    POP EDI                             ; 0046745f
    POP ESI                             ; 00467460
    POP EBX                             ; 00467461
    RET                                 ; 00467462
    MOV EDX,dword ptr [ESP + 0x78]      ; 00467463
        ;   Label: LAB_00467463
    MOV EDX,dword ptr [EDX + 0x8]       ; 00467467
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046746a
    SUB EAX,EDX                         ; 00467471
    SHL EAX,0x4                         ; 00467473
    MOV EDX,dword ptr [ESP + 0x78]      ; 00467476
    ADD EAX,0x60b014                    ; 0046747a | DAT_0060b014
    MOV EDX,dword ptr [EDX + 0x4]       ; 0046747f
    PUSH EAX                            ; 00467482
    LEA EAX,[EDX*0x4 + 0x0]             ; 00467483
    SUB EAX,EDX                         ; 0046748a
    SHL EAX,0x4                         ; 0046748c
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0046748f
    ADD EAX,0x60b014                    ; 00467493 | DAT_0060b014
    MOV EDX,dword ptr [EDX]             ; 00467498
    PUSH EAX                            ; 0046749a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046749b
    SUB EAX,EDX                         ; 004674a2
    SHL EAX,0x4                         ; 004674a4
    ADD EAX,0x60b014                    ; 004674a7 | DAT_0060b014
    PUSH EAX                            ; 004674ac
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 004674ad
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 004674b2
    TEST EAX,EAX                        ; 004674b5
    JNZ 0x004673ee                      ; 004674b7
        ;   XREF to: 004673ee (CONDITIONAL_JUMP)  ; LAB_004673ee
    MOV EBP,dword ptr [0x01bdcfd4]      ; 004674bd | DAT_01bdcfd4
    ADD ESP,0x64                        ; 004674c3
    POP EBP                             ; 004674c6
    POP EDI                             ; 004674c7
    POP ESI                             ; 004674c8
    POP EBX                             ; 004674c9
    RET                                 ; 004674ca
    XOR ESI,ESI                         ; 004674cb
        ;   Label: LAB_004674cb
    TEST EDI,EDI                        ; 004674cd
    JLE 0x00467500                      ; 004674cf
        ;   XREF to: 00467500 (CONDITIONAL_JUMP)  ; LAB_00467500
    MOV EBX,dword ptr [ESP + 0x78]      ; 004674d1
    MOV dword ptr [0x01bdcfd4],EBP      ; 004674d5 | DAT_01bdcfd4
    IMUL EAX,dword ptr [EBX],0x30       ; 004674db
        ;   Label: LAB_004674db
    PUSH 0x1                            ; 004674de
    ADD EAX,0x60b014                    ; 004674e0 | DAT_0060b014
    PUSH EAX                            ; 004674e5
    ADD EBX,0x4                         ; 004674e6
    INC ESI                             ; 004674e9
    CALL engine_prim.c_prepareDepthBuffer_FUN_00515920 ; 004674ea
        ;   XREF to: 00515920 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_00515920(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004674ef
    CMP ESI,EDI                         ; 004674f2
    JL 0x004674db                       ; 004674f4
        ;   XREF to: 004674db (CONDITIONAL_JUMP)  ; LAB_004674db
    LEA EAX,[EAX]                       ; 004674f6
    LEA EDX,[EDX]                       ; 004674fc
    MOV EBX,0x4b0                       ; 00467500
        ;   Label: LAB_00467500
    XOR ESI,ESI                         ; 00467505
    XOR EBP,EBP                         ; 00467507
    MOV dword ptr [0x01bdd4dc],ESI      ; 00467509 | DAT_01bdd4dc
    MOV dword ptr [ESP + 0x48],ESI      ; 0046750f
    MOV dword ptr [0x01bdd4d8],EBX      ; 00467513 | DAT_01bdd4d8
    TEST EDI,EDI                        ; 00467519
    JLE 0x00467597                      ; 0046751b
        ;   XREF to: 00467597 (CONDITIONAL_JUMP)  ; LAB_00467597
    MOV EAX,dword ptr [ESP + 0x78]      ; 00467521
    MOV dword ptr [ESP + 0x44],EAX      ; 00467525
    MOV EAX,dword ptr [ESP + 0x48]      ; 00467529
        ;   Label: LAB_00467529
    INC EAX                             ; 0046752d
    CMP EAX,EDI                         ; 0046752e
    JL 0x00467534                       ; 00467530
        ;   XREF to: 00467534 (CONDITIONAL_JUMP)  ; LAB_00467534
    XOR EAX,EAX                         ; 00467532
    MOV EDX,dword ptr [ESP + 0x78]      ; 00467534
        ;   Label: LAB_00467534
    SHL EAX,0x2                         ; 00467538
    ADD EAX,EDX                         ; 0046753b
    IMUL EAX,dword ptr [EAX],0x30       ; 0046753d
    MOV EDX,0x60b014                    ; 00467540 | DAT_0060b014
    ADD EDX,EAX                         ; 00467545
    MOV EAX,dword ptr [ESP + 0x44]      ; 00467547
    IMUL EAX,dword ptr [EAX],0x30       ; 0046754b
    MOV dword ptr [ESP + 0x54],EDX      ; 0046754e
    MOV EDX,0x60b014                    ; 00467552 | DAT_0060b014
    ADD EDX,EAX                         ; 00467557
    MOV EAX,dword ptr [ESP + 0x54]      ; 00467559
    MOV dword ptr [ESP + 0x50],EDX      ; 0046755d
    MOV ESI,EDX                         ; 00467561
    MOV dword ptr [ESP + 0x4c],EAX      ; 00467563
    MOV EAX,dword ptr [EDX + 0x14]      ; 00467567 | DAT_0060b028
    MOV EDX,dword ptr [ESP + 0x54]      ; 0046756a
    MOV EDX,dword ptr [EDX + 0x14]      ; 0046756e | DAT_0060b028
    SAR EAX,0x10                        ; 00467571
    SAR EDX,0x10                        ; 00467574
    CMP EAX,EDX                         ; 00467577
    JNZ 0x00467776                      ; 00467579
        ;   XREF to: 00467776 (CONDITIONAL_JUMP)  ; LAB_00467776
    MOV EDX,dword ptr [ESP + 0x44]      ; 0046757f
        ;   Label: LAB_0046757f
    MOV ECX,dword ptr [ESP + 0x48]      ; 00467583
    ADD EDX,0x4                         ; 00467587
    INC ECX                             ; 0046758a
    MOV dword ptr [ESP + 0x44],EDX      ; 0046758b
    MOV dword ptr [ESP + 0x48],ECX      ; 0046758f
    CMP EDI,ECX                         ; 00467593
    JG 0x00467529                       ; 00467595
        ;   XREF to: 00467529 (CONDITIONAL_JUMP)  ; LAB_00467529
    MOV EDI,dword ptr [0x01bdd4d8]      ; 00467597 | DAT_01bdd4d8
        ;   Label: LAB_00467597
    XOR ESI,ESI                         ; 0046759d
    XOR EAX,EAX                         ; 0046759f
    MOV dword ptr [0x01bdd814],ESI      ; 004675a1 | DAT_01bdd814
    MOV ESI,0x1bdcfd8                   ; 004675a7
    TEST EBP,EBP                        ; 004675ac
    JLE 0x00467881                      ; 004675ae
        ;   XREF to: 00467881 (CONDITIONAL_JUMP)  ; LAB_00467881
    CMP EDI,dword ptr [ESI]             ; 004675b4 | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_004675b4
    JNZ 0x00467875                      ; 004675b6
        ;   XREF to: 00467875 (CONDITIONAL_JUMP)  ; LAB_00467875
    TEST ESI,ESI                        ; 004675bc
    JZ 0x00467875                       ; 004675be
        ;   XREF to: 00467875 (CONDITIONAL_JUMP)  ; LAB_00467875
    MOV dword ptr [ESP + 0x60],ESI      ; 004675c4 | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_004675c4
    MOV dword ptr [0x01bdcfd4],EBP      ; 004675c8 | DAT_01bdcfd4
    TEST ESI,ESI                        ; 004675ce
    JZ 0x00467455                       ; 004675d0
        ;   XREF to: 00467455 (CONDITIONAL_JUMP)  ; LAB_00467455
    MOV EAX,0x1bdcfd8                   ; 004675d6
    MOV EBX,dword ptr [0x01bdd4d8]      ; 004675db | DAT_01bdd4d8
    MOV ECX,ESI                         ; 004675e1
    XOR EDX,EDX                         ; 004675e3
    TEST EBP,EBP                        ; 004675e5
    JLE 0x00467894                      ; 004675e7
        ;   XREF to: 00467894 (CONDITIONAL_JUMP)  ; LAB_00467894
    CMP EBX,dword ptr [EAX]             ; 004675ed | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_004675ed
    JNZ 0x00467888                      ; 004675ef
        ;   XREF to: 00467888 (CONDITIONAL_JUMP)  ; LAB_00467888
    CMP EAX,ECX                         ; 004675f5
    JZ 0x00467888                       ; 004675f7
        ;   XREF to: 00467888 (CONDITIONAL_JUMP)  ; LAB_00467888
    MOV dword ptr [ESP + 0x5c],EAX      ; 004675fd | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_004675fd
    MOV dword ptr [0x01bdcfd4],EBP      ; 00467601 | DAT_01bdcfd4
    TEST EAX,EAX                        ; 00467607
    JZ 0x00467455                       ; 00467609
        ;   XREF to: 00467455 (CONDITIONAL_JUMP)  ; LAB_00467455
    MOV EAX,[0x01bdd4d8]                ; 0046760f | DAT_01bdd4d8
    MOV dword ptr [ESP + 0x58],EAX      ; 00467614
        ;   Label: LAB_00467614
    MOV EDX,dword ptr [ESP + 0x60]      ; 00467618
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046761c
    MOV ESI,dword ptr [EDX + 0x4]       ; 00467620
    MOV dword ptr [0x01bdcfd4],EBP      ; 00467623 | DAT_01bdcfd4
    CMP EAX,ESI                         ; 00467629
    JL 0x0046766a                       ; 0046762b
        ;   XREF to: 0046766a (CONDITIONAL_JUMP)  ; LAB_0046766a
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0046762d
    MOV EBX,EAX                         ; 00467631
    MOV dword ptr [EDX],0xffffffff      ; 00467633
    MOV EAX,0x1bdcfd8                   ; 00467639
    XOR EDX,EDX                         ; 0046763e
    TEST EBP,EBP                        ; 00467640
    JLE 0x004678a7                      ; 00467642
        ;   XREF to: 004678a7 (CONDITIONAL_JUMP)  ; LAB_004678a7
    CMP EBX,dword ptr [EAX]             ; 00467648 | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_00467648
    JNZ 0x0046789b                      ; 0046764a
        ;   XREF to: 0046789b (CONDITIONAL_JUMP)  ; LAB_0046789b
    CMP EAX,ECX                         ; 00467650
    JZ 0x0046789b                       ; 00467652
        ;   XREF to: 0046789b (CONDITIONAL_JUMP)  ; LAB_0046789b
    MOV dword ptr [ESP + 0x60],EAX      ; 00467658 | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_00467658
    MOV dword ptr [0x01bdcfd4],EBP      ; 0046765c | DAT_01bdcfd4
    TEST EAX,EAX                        ; 00467662
    JZ 0x00467455                       ; 00467664
        ;   XREF to: 00467455 (CONDITIONAL_JUMP)  ; LAB_00467455
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0046766a
        ;   Label: LAB_0046766a
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046766e
    CMP EAX,dword ptr [EDX + 0x4]       ; 00467672
    JL 0x004676ba                       ; 00467675
        ;   XREF to: 004676ba (CONDITIONAL_JUMP)  ; LAB_004676ba
    MOV EBX,dword ptr [ESP + 0x60]      ; 00467677
    MOV EBP,dword ptr [0x01bdcfd4]      ; 0046767b | DAT_01bdcfd4
    MOV ECX,EAX                         ; 00467681
    MOV dword ptr [EDX],0xffffffff      ; 00467683
    MOV EAX,0x1bdcfd8                   ; 00467689
    XOR EDX,EDX                         ; 0046768e
    TEST EBP,EBP                        ; 00467690
    JLE 0x004678ba                      ; 00467692
        ;   XREF to: 004678ba (CONDITIONAL_JUMP)  ; LAB_004678ba
    CMP ECX,dword ptr [EAX]             ; 00467698 | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_00467698
    JNZ 0x004678ae                      ; 0046769a
        ;   XREF to: 004678ae (CONDITIONAL_JUMP)  ; LAB_004678ae
    CMP EAX,EBX                         ; 004676a0
    JZ 0x004678ae                       ; 004676a2
        ;   XREF to: 004678ae (CONDITIONAL_JUMP)  ; LAB_004678ae
    MOV dword ptr [ESP + 0x5c],EAX      ; 004676a8 | DAT_01bdd028 | DAT_01bdcfd8
        ;   Label: LAB_004676a8
    MOV dword ptr [0x01bdcfd4],EBP      ; 004676ac | DAT_01bdcfd4
    TEST EAX,EAX                        ; 004676b2
    JZ 0x00467455                       ; 004676b4
        ;   XREF to: 00467455 (CONDITIONAL_JUMP)  ; LAB_00467455
    MOV EDI,dword ptr [ESP + 0x5c]      ; 004676ba
        ;   Label: LAB_004676ba
    MOV ESI,dword ptr [ESP + 0x60]      ; 004676be
    MOV EBX,dword ptr [ESP + 0x58]      ; 004676c2
    CALL engine_special.cpp_FUN_00563257 ; 004676c6
        ;   XREF to: 00563257 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00563257()
    CMP dword ptr [0x01bdd814],0x0      ; 004676cb | DAT_01bdd814
    JNZ 0x00467455                      ; 004676d2
        ;   XREF to: 00467455 (CONDITIONAL_JUMP)  ; LAB_00467455
    MOV EDX,dword ptr [ESP + 0x60]      ; 004676d8
    MOV EAX,dword ptr [ESP + 0x60]      ; 004676dc
    MOV ECX,dword ptr [EDX + 0x8]       ; 004676e0
    MOV EAX,dword ptr [EAX + 0xc]       ; 004676e3
    MOV EBX,dword ptr [EDX + 0x28]      ; 004676e6
    ADD ECX,EAX                         ; 004676e9
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004676eb
    MOV dword ptr [EDX + 0x8],ECX       ; 004676ee
    ADD EBX,EAX                         ; 004676f1
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004676f3
    MOV dword ptr [EDX + 0x28],EBX      ; 004676f7
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004676fa
    MOV EAX,dword ptr [EAX + 0xc]       ; 004676fe
    MOV ESI,dword ptr [EDX + 0x8]       ; 00467701
    MOV EDI,dword ptr [EDX + 0x28]      ; 00467704
    ADD ESI,EAX                         ; 00467707
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00467709
    MOV EBP,dword ptr [0x01bdcfd4]      ; 0046770c | DAT_01bdcfd4
    ADD EDI,EAX                         ; 00467712
    MOV EAX,dword ptr [ESP + 0x58]      ; 00467714
    MOV dword ptr [EDX + 0x8],ESI       ; 00467718
    INC EAX                             ; 0046771b
    MOV dword ptr [EDX + 0x28],EDI      ; 0046771c
    JMP 0x00467614                      ; 0046771f
        ;   XREF to: 00467614 (UNCONDITIONAL_JUMP)  ; LAB_00467614
    XOR ESI,ESI                         ; 00467724
        ;   Label: LAB_00467724
    TEST EDI,EDI                        ; 00467726
    JLE 0x00467500                      ; 00467728
        ;   XREF to: 00467500 (CONDITIONAL_JUMP)  ; LAB_00467500
    MOV EBX,dword ptr [ESP + 0x78]      ; 0046772e
    MOV dword ptr [0x01bdcfd4],EBP      ; 00467732 | DAT_01bdcfd4
    IMUL EAX,dword ptr [EBX],0x30       ; 00467738
        ;   Label: LAB_00467738
    PUSH 0x1                            ; 0046773b
    ADD EAX,0x60b014                    ; 0046773d | DAT_0060b014
    PUSH EAX                            ; 00467742
    ADD EBX,0x4                         ; 00467743
    INC ESI                             ; 00467746
    CALL engine_prim.c_replaceWWithDepth_FUN_00515a80 ; 00467747
        ;   XREF to: 00515a80 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00515a80(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0046774c
    CMP ESI,EDI                         ; 0046774f
    JL 0x00467738                       ; 00467751
        ;   XREF to: 00467738 (CONDITIONAL_JUMP)  ; LAB_00467738
    JMP 0x00467500                      ; 00467753
        ;   XREF to: 00467500 (UNCONDITIONAL_JUMP)  ; LAB_00467500
    MOV EAX,[0x01c6e2b8]                ; 00467758 | DAT_01c6e2b8
        ;   Label: LAB_00467758
    CMP EAX,0x1                         ; 0046775d
    JC 0x00467500                       ; 00467760
        ;   XREF to: 00467500 (CONDITIONAL_JUMP)  ; LAB_00467500
    JBE 0x004674cb                      ; 00467766
        ;   XREF to: 004674cb (CONDITIONAL_JUMP)  ; LAB_004674cb
    CMP EAX,0x6                         ; 0046776c
    JZ 0x00467724                       ; 0046776f
        ;   XREF to: 00467724 (CONDITIONAL_JUMP)  ; LAB_00467724
    JMP 0x00467500                      ; 00467771
        ;   XREF to: 00467500 (UNCONDITIONAL_JUMP)  ; LAB_00467500
    MOV ECX,ESI                         ; 00467776
        ;   Label: LAB_00467776
    MOV ECX,dword ptr [ECX + 0x14]      ; 00467778 | DAT_0060b028
    MOV EBX,dword ptr [ESP + 0x54]      ; 0046777b
    CMP ECX,dword ptr [EBX + 0x14]      ; 0046777f | DAT_0060b028
    JLE 0x00467794                      ; 00467782
        ;   XREF to: 00467794 (CONDITIONAL_JUMP)  ; LAB_00467794
    MOV ECX,dword ptr [ESP + 0x50]      ; 00467784
    MOV ESI,EBX                         ; 00467788
    MOV dword ptr [ESP + 0x4c],ECX      ; 0046778a
    MOV ECX,EAX                         ; 0046778e
    MOV EAX,EDX                         ; 00467790
    MOV EDX,ECX                         ; 00467792
    IMUL EBX,EBP,0x50                   ; 00467794
        ;   Label: LAB_00467794
    ADD EBX,0x1bdcfd8                   ; 00467797
    MOV dword ptr [EBX],EAX             ; 0046779d | DAT_01bdcfd8
    MOV ECX,dword ptr [0x01bdd4d8]      ; 0046779f | DAT_01bdd4d8
    MOV dword ptr [EBX + 0x4],EDX       ; 004677a5
    CMP EAX,ECX                         ; 004677a8
    JGE 0x004677b1                      ; 004677aa
        ;   XREF to: 004677b1 (CONDITIONAL_JUMP)  ; LAB_004677b1
    MOV [0x01bdd4d8],EAX                ; 004677ac | DAT_01bdd4d8
    CMP EDX,dword ptr [0x01bdd4dc]      ; 004677b1 | DAT_01bdd4dc
        ;   Label: LAB_004677b1
    JLE 0x004677bf                      ; 004677b7
        ;   XREF to: 004677bf (CONDITIONAL_JUMP)  ; LAB_004677bf
    MOV dword ptr [0x01bdd4dc],EDX      ; 004677b9 | DAT_01bdd4dc
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004677bf
        ;   Label: LAB_004677bf
    MOV EDX,dword ptr [ESI + 0x14]      ; 004677c3 | DAT_0060b028
    MOV ECX,dword ptr [ECX + 0x14]      ; 004677c6 | DAT_0060b028
    SUB ECX,EDX                         ; 004677c9
    CMP ECX,0x10000                     ; 004677cb
    JNC 0x00467865                      ; 004677d1
        ;   XREF to: 00467865 (CONDITIONAL_JUMP)  ; LAB_00467865
    XOR ECX,ECX                         ; 004677d7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004677d9
        ;   Label: LAB_004677d9
    MOV EDX,dword ptr [ESI + 0x10]      ; 004677dd | DAT_0060b024
    MOV EAX,dword ptr [EAX + 0x10]      ; 004677e0 | DAT_0060b024
    SUB EAX,EDX                         ; 004677e3
    MOV EDX,EAX                         ; 004677e5
    MOV EAX,ECX                         ; 004677e7
    MOV dword ptr [0x01bdcfd4],EBP      ; 004677e9 | DAT_01bdcfd4
    IMUL EDX                            ; 004677ef
    SHRD EAX,EDX,0x10                   ; 004677f1
    MOV dword ptr [EBX + 0xc],EAX       ; 004677f5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004677f8
    MOV EDX,dword ptr [ESI + 0x8]       ; 004677fc | DAT_0060b01c
    MOV EAX,dword ptr [EAX + 0x8]       ; 004677ff | DAT_0060b01c
    SUB EAX,EDX                         ; 00467802
    MOV EDX,EAX                         ; 00467804
    SHL EDX,0x8                         ; 00467806
    MOV EAX,ECX                         ; 00467809
    IMUL EDX                            ; 0046780b
    SHRD EAX,EDX,0x10                   ; 0046780d
    MOV dword ptr [EBX + 0x2c],EAX      ; 00467811
    MOV ECX,dword ptr [ESI + 0x14]      ; 00467814 | DAT_0060b028
    AND ECX,0xffff                      ; 00467817
    XOR CX,0xffff                       ; 0046781d
    MOV EDX,dword ptr [EBX + 0xc]       ; 00467821
    MOV EAX,ECX                         ; 00467824
    IMUL EDX                            ; 00467826
    SHRD EAX,EDX,0x10                   ; 00467828
    MOV dword ptr [ESP + 0x40],EAX      ; 0046782c
    MOV EDX,dword ptr [ESP + 0x40]      ; 00467830
    MOV EAX,dword ptr [ESI + 0x10]      ; 00467834 | DAT_0060b024
    ADD EAX,EDX                         ; 00467837
    MOV dword ptr [EBX + 0x8],EAX       ; 00467839
    MOV ESI,dword ptr [ESI + 0x8]       ; 0046783c | DAT_0060b01c
    MOV EAX,[0x01bdd520]                ; 0046783f | DAT_01bdd520
    SHL ESI,0x8                         ; 00467844
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00467847
    SUB ESI,EAX                         ; 0046784a
    MOV EAX,ECX                         ; 0046784c
    IMUL EDX                            ; 0046784e
    SHRD EAX,EDX,0x10                   ; 00467850
    MOV EBP,dword ptr [0x01bdcfd4]      ; 00467854 | DAT_01bdcfd4
    ADD ESI,EAX                         ; 0046785a
    INC EBP                             ; 0046785c
    MOV dword ptr [EBX + 0x28],ESI      ; 0046785d
    JMP 0x0046757f                      ; 00467860
        ;   XREF to: 0046757f (UNCONDITIONAL_JUMP)  ; LAB_0046757f
    MOV EAX,0xffffffff                  ; 00467865
        ;   Label: LAB_00467865
    XOR EDX,EDX                         ; 0046786a
    DIV ECX                             ; 0046786c
    MOV ECX,EAX                         ; 0046786e
    JMP 0x004677d9                      ; 00467870
        ;   XREF to: 004677d9 (UNCONDITIONAL_JUMP)  ; LAB_004677d9
    INC EAX                             ; 00467875
        ;   Label: LAB_00467875
    ADD ESI,0x50                        ; 00467876
    CMP EAX,EBP                         ; 00467879
    JL 0x004675b4                       ; 0046787b
        ;   XREF to: 004675b4 (CONDITIONAL_JUMP)  ; LAB_004675b4
    XOR ESI,ESI                         ; 00467881
        ;   Label: LAB_00467881
    JMP 0x004675c4                      ; 00467883
        ;   XREF to: 004675c4 (UNCONDITIONAL_JUMP)  ; LAB_004675c4
    INC EDX                             ; 00467888
        ;   Label: LAB_00467888
    ADD EAX,0x50                        ; 00467889
    CMP EDX,EBP                         ; 0046788c
    JL 0x004675ed                       ; 0046788e
        ;   XREF to: 004675ed (CONDITIONAL_JUMP)  ; LAB_004675ed
    XOR EAX,EAX                         ; 00467894
        ;   Label: LAB_00467894
    JMP 0x004675fd                      ; 00467896
        ;   XREF to: 004675fd (UNCONDITIONAL_JUMP)  ; LAB_004675fd
    INC EDX                             ; 0046789b
        ;   Label: LAB_0046789b
    ADD EAX,0x50                        ; 0046789c
    CMP EDX,EBP                         ; 0046789f
    JL 0x00467648                       ; 004678a1
        ;   XREF to: 00467648 (CONDITIONAL_JUMP)  ; LAB_00467648
    XOR EAX,EAX                         ; 004678a7
        ;   Label: LAB_004678a7
    JMP 0x00467658                      ; 004678a9
        ;   XREF to: 00467658 (UNCONDITIONAL_JUMP)  ; LAB_00467658
    INC EDX                             ; 004678ae
        ;   Label: LAB_004678ae
    ADD EAX,0x50                        ; 004678af
    CMP EDX,EBP                         ; 004678b2
    JL 0x00467698                       ; 004678b4
        ;   XREF to: 00467698 (CONDITIONAL_JUMP)  ; LAB_00467698
    XOR EAX,EAX                         ; 004678ba
        ;   Label: LAB_004678ba
    JMP 0x004676a8                      ; 004678bc
        ;   XREF to: 004676a8 (UNCONDITIONAL_JUMP)  ; LAB_004676a8

