; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_FUN_004625f0(CVector3i *vertex_indices,int vertex_count)
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
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 at 004695c6
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046bff0 at 0046c1d2
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046bd80 at 0046be2d
;   engine_drender.cpp_FUN_0046c290 at 0046c3c4
;
; Referenced Globals:
;   undefined4 DAT_00622014
;   undefined4 DAT_0062201c
;   undefined4 DAT_00622024
;   undefined4 DAT_00622028
;   undefined4 DAT_0070ca74
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_01ba51c8
;   undefined4 DAT_01ba51cc
;   undefined4 DAT_01ba521c
;   undefined4 DAT_01ba56cc
;   undefined4 DAT_01ba56d0
;   undefined4 DAT_01ba5714
;   undefined4 DAT_01ba5c80
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   ... and 2 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760
;   engine_prim.c_prepareDepthBuffer_FUN_0051c5c0
;   engine_prim.c_replaceWWithDepth_FUN_0051c720
;   engine_special.cpp_drawPolygon2_FUN_0055f920
;   engine_special.cpp_FUN_0055d6d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004625f0
        ;   Label: core_dpart.cpp_FUN_004625f0
    PUSH ESI                            ; 004625f1
    PUSH EDI                            ; 004625f2
    PUSH EBP                            ; 004625f3
    SUB ESP,0x64                        ; 004625f4
    MOV EBP,dword ptr [0x01ba51c8]      ; 004625f7 | DAT_01ba51c8
    MOV EDI,dword ptr [ESP + 0x7c]      ; 004625fd
    CMP dword ptr [0x0070ca7c],0x0      ; 00462601 | DAT_0070ca7c
    JNZ 0x00462683                      ; 00462608
        ;   XREF to: 00462683 (CONDITIONAL_JUMP)  ; LAB_00462683
    MOV ECX,dword ptr [0x01e61b58]      ; 0046260e | DAT_01e61b58
        ;   Label: LAB_0046260e
    MOV EBX,dword ptr [0x01c37788]      ; 00462614 | DAT_01c37788
    INC ECX                             ; 0046261a
    MOV EBP,dword ptr [0x01ba51c8]      ; 0046261b | DAT_01ba51c8
    MOV dword ptr [0x01e61b58],ECX      ; 00462621 | DAT_01e61b58
    TEST EBX,EBX                        ; 00462627
    JZ 0x00462978                       ; 00462629
        ;   XREF to: 00462978 (CONDITIONAL_JUMP)  ; LAB_00462978
    MOV ESI,dword ptr [0x0070ca74]      ; 0046262f | DAT_0070ca74
    TEST ESI,ESI                        ; 00462635
    JNZ 0x00462978                      ; 00462637
        ;   XREF to: 00462978 (CONDITIONAL_JUMP)  ; LAB_00462978
    TEST EDI,EDI                        ; 0046263d
    JLE 0x00462660                      ; 0046263f
        ;   XREF to: 00462660 (CONDITIONAL_JUMP)  ; LAB_00462660
    MOV EAX,dword ptr [ESP + 0x78]      ; 00462641
    IMUL EDX,dword ptr [EAX],0x30       ; 00462645
        ;   Label: LAB_00462645
    INC ESI                             ; 00462648
    ADD EDX,0x622014                    ; 00462649 | DAT_00622014
    ADD EAX,0x4                         ; 0046264f
    MOV dword ptr [ESP + ESI*0x4 + -0x4],EDX ; 00462652
    CMP ESI,EDI                         ; 00462656
    JL 0x00462645                       ; 00462658
        ;   XREF to: 00462645 (CONDITIONAL_JUMP)  ; LAB_00462645
    LEA EAX,[EAX]                       ; 0046265a
    MOV EBX,dword ptr [0x01c38b54]      ; 00462660 | DAT_01c38b54
        ;   Label: LAB_00462660
    PUSH EBX                            ; 00462666
    PUSH EDI                            ; 00462667
    LEA EAX,[ESP + 0x8]                 ; 00462668
    PUSH EAX                            ; 0046266c
    CALL engine_special.cpp_drawPolygon2_FUN_0055f920 ; 0046266d
        ;   XREF to: 0055f920 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_0055f920(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 00462672
    MOV EBP,dword ptr [0x01ba51c8]      ; 00462675 | DAT_01ba51c8
        ;   Label: LAB_00462675
    ADD ESP,0x64                        ; 0046267b
    POP EBP                             ; 0046267e
    POP EDI                             ; 0046267f
    POP ESI                             ; 00462680
    POP EBX                             ; 00462681
    RET                                 ; 00462682
    MOV EDX,dword ptr [ESP + 0x78]      ; 00462683
        ;   Label: LAB_00462683
    MOV EDX,dword ptr [EDX + 0x8]       ; 00462687
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046268a
    SUB EAX,EDX                         ; 00462691
    SHL EAX,0x4                         ; 00462693
    MOV EDX,dword ptr [ESP + 0x78]      ; 00462696
    ADD EAX,0x622014                    ; 0046269a | DAT_00622014
    MOV EDX,dword ptr [EDX + 0x4]       ; 0046269f
    PUSH EAX                            ; 004626a2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004626a3
    SUB EAX,EDX                         ; 004626aa
    SHL EAX,0x4                         ; 004626ac
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004626af
    ADD EAX,0x622014                    ; 004626b3 | DAT_00622014
    MOV EDX,dword ptr [EDX]             ; 004626b8
    PUSH EAX                            ; 004626ba
    LEA EAX,[EDX*0x4 + 0x0]             ; 004626bb
    SUB EAX,EDX                         ; 004626c2
    SHL EAX,0x4                         ; 004626c4
    ADD EAX,0x622014                    ; 004626c7 | DAT_00622014
    PUSH EAX                            ; 004626cc
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760 ; 004626cd
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 004626d2
    TEST EAX,EAX                        ; 004626d5
    JNZ 0x0046260e                      ; 004626d7
        ;   XREF to: 0046260e (CONDITIONAL_JUMP)  ; LAB_0046260e
    MOV EBP,dword ptr [0x01ba51c8]      ; 004626dd | DAT_01ba51c8
    ADD ESP,0x64                        ; 004626e3
    POP EBP                             ; 004626e6
    POP EDI                             ; 004626e7
    POP ESI                             ; 004626e8
    POP EBX                             ; 004626e9
    RET                                 ; 004626ea
    XOR ESI,ESI                         ; 004626eb
        ;   Label: LAB_004626eb
    TEST EDI,EDI                        ; 004626ed
    JLE 0x00462720                      ; 004626ef
        ;   XREF to: 00462720 (CONDITIONAL_JUMP)  ; LAB_00462720
    MOV EBX,dword ptr [ESP + 0x78]      ; 004626f1
    MOV dword ptr [0x01ba51c8],EBP      ; 004626f5 | DAT_01ba51c8
    IMUL EAX,dword ptr [EBX],0x30       ; 004626fb
        ;   Label: LAB_004626fb
    PUSH 0x1                            ; 004626fe
    ADD EAX,0x622014                    ; 00462700 | DAT_00622014
    PUSH EAX                            ; 00462705
    ADD EBX,0x4                         ; 00462706
    INC ESI                             ; 00462709
    CALL engine_prim.c_prepareDepthBuffer_FUN_0051c5c0 ; 0046270a
        ;   XREF to: 0051c5c0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_0051c5c0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0046270f
    CMP ESI,EDI                         ; 00462712
    JL 0x004626fb                       ; 00462714
        ;   XREF to: 004626fb (CONDITIONAL_JUMP)  ; LAB_004626fb
    LEA EAX,[EAX]                       ; 00462716
    LEA EDX,[EDX]                       ; 0046271c
    MOV EBX,0x4b0                       ; 00462720
        ;   Label: LAB_00462720
    XOR ESI,ESI                         ; 00462725
    XOR EBP,EBP                         ; 00462727
    MOV dword ptr [0x01ba56d0],ESI      ; 00462729 | DAT_01ba56d0
    MOV dword ptr [ESP + 0x48],ESI      ; 0046272f
    MOV dword ptr [0x01ba56cc],EBX      ; 00462733 | DAT_01ba56cc
    TEST EDI,EDI                        ; 00462739
    JLE 0x004627b7                      ; 0046273b
        ;   XREF to: 004627b7 (CONDITIONAL_JUMP)  ; LAB_004627b7
    MOV EAX,dword ptr [ESP + 0x78]      ; 00462741
    MOV dword ptr [ESP + 0x44],EAX      ; 00462745
    MOV EAX,dword ptr [ESP + 0x48]      ; 00462749
        ;   Label: LAB_00462749
    INC EAX                             ; 0046274d
    CMP EAX,EDI                         ; 0046274e
    JL 0x00462754                       ; 00462750
        ;   XREF to: 00462754 (CONDITIONAL_JUMP)  ; LAB_00462754
    XOR EAX,EAX                         ; 00462752
    MOV EDX,dword ptr [ESP + 0x78]      ; 00462754
        ;   Label: LAB_00462754
    SHL EAX,0x2                         ; 00462758
    ADD EAX,EDX                         ; 0046275b
    IMUL EAX,dword ptr [EAX],0x30       ; 0046275d
    MOV EDX,0x622014                    ; 00462760 | DAT_00622014
    ADD EDX,EAX                         ; 00462765
    MOV EAX,dword ptr [ESP + 0x44]      ; 00462767
    IMUL EAX,dword ptr [EAX],0x30       ; 0046276b
    MOV dword ptr [ESP + 0x54],EDX      ; 0046276e
    MOV EDX,0x622014                    ; 00462772 | DAT_00622014
    ADD EDX,EAX                         ; 00462777
    MOV EAX,dword ptr [ESP + 0x54]      ; 00462779
    MOV dword ptr [ESP + 0x50],EDX      ; 0046277d
    MOV ESI,EDX                         ; 00462781
    MOV dword ptr [ESP + 0x4c],EAX      ; 00462783
    MOV EAX,dword ptr [EDX + 0x14]      ; 00462787 | DAT_00622028
    MOV EDX,dword ptr [ESP + 0x54]      ; 0046278a
    MOV EDX,dword ptr [EDX + 0x14]      ; 0046278e | DAT_00622028
    SAR EAX,0x10                        ; 00462791
    SAR EDX,0x10                        ; 00462794
    CMP EAX,EDX                         ; 00462797
    JNZ 0x00462996                      ; 00462799
        ;   XREF to: 00462996 (CONDITIONAL_JUMP)  ; LAB_00462996
    MOV EDX,dword ptr [ESP + 0x44]      ; 0046279f
        ;   Label: LAB_0046279f
    MOV ECX,dword ptr [ESP + 0x48]      ; 004627a3
    ADD EDX,0x4                         ; 004627a7
    INC ECX                             ; 004627aa
    MOV dword ptr [ESP + 0x44],EDX      ; 004627ab
    MOV dword ptr [ESP + 0x48],ECX      ; 004627af
    CMP EDI,ECX                         ; 004627b3
    JG 0x00462749                       ; 004627b5
        ;   XREF to: 00462749 (CONDITIONAL_JUMP)  ; LAB_00462749
    MOV EDI,dword ptr [0x01ba56cc]      ; 004627b7 | DAT_01ba56cc
        ;   Label: LAB_004627b7
    XOR ESI,ESI                         ; 004627bd
    XOR EAX,EAX                         ; 004627bf
    MOV dword ptr [0x01ba5c80],ESI      ; 004627c1 | DAT_01ba5c80
    MOV ESI,0x1ba51cc                   ; 004627c7
    TEST EBP,EBP                        ; 004627cc
    JLE 0x00462aa1                      ; 004627ce
        ;   XREF to: 00462aa1 (CONDITIONAL_JUMP)  ; LAB_00462aa1
    CMP EDI,dword ptr [ESI]             ; 004627d4 | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_004627d4
    JNZ 0x00462a95                      ; 004627d6
        ;   XREF to: 00462a95 (CONDITIONAL_JUMP)  ; LAB_00462a95
    TEST ESI,ESI                        ; 004627dc
    JZ 0x00462a95                       ; 004627de
        ;   XREF to: 00462a95 (CONDITIONAL_JUMP)  ; LAB_00462a95
    MOV dword ptr [ESP + 0x60],ESI      ; 004627e4 | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_004627e4
    MOV dword ptr [0x01ba51c8],EBP      ; 004627e8 | DAT_01ba51c8
    TEST ESI,ESI                        ; 004627ee
    JZ 0x00462675                       ; 004627f0
        ;   XREF to: 00462675 (CONDITIONAL_JUMP)  ; LAB_00462675
    MOV EAX,0x1ba51cc                   ; 004627f6
    MOV EBX,dword ptr [0x01ba56cc]      ; 004627fb | DAT_01ba56cc
    MOV ECX,ESI                         ; 00462801
    XOR EDX,EDX                         ; 00462803
    TEST EBP,EBP                        ; 00462805
    JLE 0x00462ab4                      ; 00462807
        ;   XREF to: 00462ab4 (CONDITIONAL_JUMP)  ; LAB_00462ab4
    CMP EBX,dword ptr [EAX]             ; 0046280d | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_0046280d
    JNZ 0x00462aa8                      ; 0046280f
        ;   XREF to: 00462aa8 (CONDITIONAL_JUMP)  ; LAB_00462aa8
    CMP EAX,ECX                         ; 00462815
    JZ 0x00462aa8                       ; 00462817
        ;   XREF to: 00462aa8 (CONDITIONAL_JUMP)  ; LAB_00462aa8
    MOV dword ptr [ESP + 0x5c],EAX      ; 0046281d | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_0046281d
    MOV dword ptr [0x01ba51c8],EBP      ; 00462821 | DAT_01ba51c8
    TEST EAX,EAX                        ; 00462827
    JZ 0x00462675                       ; 00462829
        ;   XREF to: 00462675 (CONDITIONAL_JUMP)  ; LAB_00462675
    MOV EAX,[0x01ba56cc]                ; 0046282f | DAT_01ba56cc
    MOV dword ptr [ESP + 0x58],EAX      ; 00462834
        ;   Label: LAB_00462834
    MOV EDX,dword ptr [ESP + 0x60]      ; 00462838
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046283c
    MOV ESI,dword ptr [EDX + 0x4]       ; 00462840
    MOV dword ptr [0x01ba51c8],EBP      ; 00462843 | DAT_01ba51c8
    CMP EAX,ESI                         ; 00462849
    JL 0x0046288a                       ; 0046284b
        ;   XREF to: 0046288a (CONDITIONAL_JUMP)  ; LAB_0046288a
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0046284d
    MOV EBX,EAX                         ; 00462851
    MOV dword ptr [EDX],0xffffffff      ; 00462853
    MOV EAX,0x1ba51cc                   ; 00462859
    XOR EDX,EDX                         ; 0046285e
    TEST EBP,EBP                        ; 00462860
    JLE 0x00462ac7                      ; 00462862
        ;   XREF to: 00462ac7 (CONDITIONAL_JUMP)  ; LAB_00462ac7
    CMP EBX,dword ptr [EAX]             ; 00462868 | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_00462868
    JNZ 0x00462abb                      ; 0046286a
        ;   XREF to: 00462abb (CONDITIONAL_JUMP)  ; LAB_00462abb
    CMP EAX,ECX                         ; 00462870
    JZ 0x00462abb                       ; 00462872
        ;   XREF to: 00462abb (CONDITIONAL_JUMP)  ; LAB_00462abb
    MOV dword ptr [ESP + 0x60],EAX      ; 00462878 | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_00462878
    MOV dword ptr [0x01ba51c8],EBP      ; 0046287c | DAT_01ba51c8
    TEST EAX,EAX                        ; 00462882
    JZ 0x00462675                       ; 00462884
        ;   XREF to: 00462675 (CONDITIONAL_JUMP)  ; LAB_00462675
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0046288a
        ;   Label: LAB_0046288a
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046288e
    CMP EAX,dword ptr [EDX + 0x4]       ; 00462892
    JL 0x004628da                       ; 00462895
        ;   XREF to: 004628da (CONDITIONAL_JUMP)  ; LAB_004628da
    MOV EBX,dword ptr [ESP + 0x60]      ; 00462897
    MOV EBP,dword ptr [0x01ba51c8]      ; 0046289b | DAT_01ba51c8
    MOV ECX,EAX                         ; 004628a1
    MOV dword ptr [EDX],0xffffffff      ; 004628a3
    MOV EAX,0x1ba51cc                   ; 004628a9
    XOR EDX,EDX                         ; 004628ae
    TEST EBP,EBP                        ; 004628b0
    JLE 0x00462ada                      ; 004628b2
        ;   XREF to: 00462ada (CONDITIONAL_JUMP)  ; LAB_00462ada
    CMP ECX,dword ptr [EAX]             ; 004628b8 | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_004628b8
    JNZ 0x00462ace                      ; 004628ba
        ;   XREF to: 00462ace (CONDITIONAL_JUMP)  ; LAB_00462ace
    CMP EAX,EBX                         ; 004628c0
    JZ 0x00462ace                       ; 004628c2
        ;   XREF to: 00462ace (CONDITIONAL_JUMP)  ; LAB_00462ace
    MOV dword ptr [ESP + 0x5c],EAX      ; 004628c8 | DAT_01ba521c | DAT_01ba51cc
        ;   Label: LAB_004628c8
    MOV dword ptr [0x01ba51c8],EBP      ; 004628cc | DAT_01ba51c8
    TEST EAX,EAX                        ; 004628d2
    JZ 0x00462675                       ; 004628d4
        ;   XREF to: 00462675 (CONDITIONAL_JUMP)  ; LAB_00462675
    MOV EDI,dword ptr [ESP + 0x5c]      ; 004628da
        ;   Label: LAB_004628da
    MOV ESI,dword ptr [ESP + 0x60]      ; 004628de
    MOV EBX,dword ptr [ESP + 0x58]      ; 004628e2
    CALL engine_special.cpp_FUN_0055d6d7 ; 004628e6
        ;   XREF to: 0055d6d7 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055d6d7()
    CMP dword ptr [0x01ba5c80],0x0      ; 004628eb | DAT_01ba5c80
    JNZ 0x00462675                      ; 004628f2
        ;   XREF to: 00462675 (CONDITIONAL_JUMP)  ; LAB_00462675
    MOV EDX,dword ptr [ESP + 0x60]      ; 004628f8
    MOV EAX,dword ptr [ESP + 0x60]      ; 004628fc
    MOV ECX,dword ptr [EDX + 0x8]       ; 00462900
    MOV EAX,dword ptr [EAX + 0xc]       ; 00462903
    MOV EBX,dword ptr [EDX + 0x28]      ; 00462906
    ADD ECX,EAX                         ; 00462909
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0046290b
    MOV dword ptr [EDX + 0x8],ECX       ; 0046290e
    ADD EBX,EAX                         ; 00462911
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00462913
    MOV dword ptr [EDX + 0x28],EBX      ; 00462917
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0046291a
    MOV EAX,dword ptr [EAX + 0xc]       ; 0046291e
    MOV ESI,dword ptr [EDX + 0x8]       ; 00462921
    MOV EDI,dword ptr [EDX + 0x28]      ; 00462924
    ADD ESI,EAX                         ; 00462927
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00462929
    MOV EBP,dword ptr [0x01ba51c8]      ; 0046292c | DAT_01ba51c8
    ADD EDI,EAX                         ; 00462932
    MOV EAX,dword ptr [ESP + 0x58]      ; 00462934
    MOV dword ptr [EDX + 0x8],ESI       ; 00462938
    INC EAX                             ; 0046293b
    MOV dword ptr [EDX + 0x28],EDI      ; 0046293c
    JMP 0x00462834                      ; 0046293f
        ;   XREF to: 00462834 (UNCONDITIONAL_JUMP)  ; LAB_00462834
    XOR ESI,ESI                         ; 00462944
        ;   Label: LAB_00462944
    TEST EDI,EDI                        ; 00462946
    JLE 0x00462720                      ; 00462948
        ;   XREF to: 00462720 (CONDITIONAL_JUMP)  ; LAB_00462720
    MOV EBX,dword ptr [ESP + 0x78]      ; 0046294e
    MOV dword ptr [0x01ba51c8],EBP      ; 00462952 | DAT_01ba51c8
    IMUL EAX,dword ptr [EBX],0x30       ; 00462958
        ;   Label: LAB_00462958
    PUSH 0x1                            ; 0046295b
    ADD EAX,0x622014                    ; 0046295d | DAT_00622014
    PUSH EAX                            ; 00462962
    ADD EBX,0x4                         ; 00462963
    INC ESI                             ; 00462966
    CALL engine_prim.c_replaceWWithDepth_FUN_0051c720 ; 00462967
        ;   XREF to: 0051c720 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_0051c720(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0046296c
    CMP ESI,EDI                         ; 0046296f
    JL 0x00462958                       ; 00462971
        ;   XREF to: 00462958 (CONDITIONAL_JUMP)  ; LAB_00462958
    JMP 0x00462720                      ; 00462973
        ;   XREF to: 00462720 (UNCONDITIONAL_JUMP)  ; LAB_00462720
    MOV EAX,[0x01c38b58]                ; 00462978 | DAT_01c38b58
        ;   Label: LAB_00462978
    CMP EAX,0x1                         ; 0046297d
    JC 0x00462720                       ; 00462980
        ;   XREF to: 00462720 (CONDITIONAL_JUMP)  ; LAB_00462720
    JBE 0x004626eb                      ; 00462986
        ;   XREF to: 004626eb (CONDITIONAL_JUMP)  ; LAB_004626eb
    CMP EAX,0x6                         ; 0046298c
    JZ 0x00462944                       ; 0046298f
        ;   XREF to: 00462944 (CONDITIONAL_JUMP)  ; LAB_00462944
    JMP 0x00462720                      ; 00462991
        ;   XREF to: 00462720 (UNCONDITIONAL_JUMP)  ; LAB_00462720
    MOV ECX,ESI                         ; 00462996
        ;   Label: LAB_00462996
    MOV ECX,dword ptr [ECX + 0x14]      ; 00462998 | DAT_00622028
    MOV EBX,dword ptr [ESP + 0x54]      ; 0046299b
    CMP ECX,dword ptr [EBX + 0x14]      ; 0046299f | DAT_00622028
    JLE 0x004629b4                      ; 004629a2
        ;   XREF to: 004629b4 (CONDITIONAL_JUMP)  ; LAB_004629b4
    MOV ECX,dword ptr [ESP + 0x50]      ; 004629a4
    MOV ESI,EBX                         ; 004629a8
    MOV dword ptr [ESP + 0x4c],ECX      ; 004629aa
    MOV ECX,EAX                         ; 004629ae
    MOV EAX,EDX                         ; 004629b0
    MOV EDX,ECX                         ; 004629b2
    IMUL EBX,EBP,0x50                   ; 004629b4
        ;   Label: LAB_004629b4
    ADD EBX,0x1ba51cc                   ; 004629b7
    MOV dword ptr [EBX],EAX             ; 004629bd | DAT_01ba51cc
    MOV ECX,dword ptr [0x01ba56cc]      ; 004629bf | DAT_01ba56cc
    MOV dword ptr [EBX + 0x4],EDX       ; 004629c5
    CMP EAX,ECX                         ; 004629c8
    JGE 0x004629d1                      ; 004629ca
        ;   XREF to: 004629d1 (CONDITIONAL_JUMP)  ; LAB_004629d1
    MOV [0x01ba56cc],EAX                ; 004629cc | DAT_01ba56cc
    CMP EDX,dword ptr [0x01ba56d0]      ; 004629d1 | DAT_01ba56d0
        ;   Label: LAB_004629d1
    JLE 0x004629df                      ; 004629d7
        ;   XREF to: 004629df (CONDITIONAL_JUMP)  ; LAB_004629df
    MOV dword ptr [0x01ba56d0],EDX      ; 004629d9 | DAT_01ba56d0
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004629df
        ;   Label: LAB_004629df
    MOV EDX,dword ptr [ESI + 0x14]      ; 004629e3 | DAT_00622028
    MOV ECX,dword ptr [ECX + 0x14]      ; 004629e6 | DAT_00622028
    SUB ECX,EDX                         ; 004629e9
    CMP ECX,0x10000                     ; 004629eb
    JNC 0x00462a85                      ; 004629f1
        ;   XREF to: 00462a85 (CONDITIONAL_JUMP)  ; LAB_00462a85
    XOR ECX,ECX                         ; 004629f7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004629f9
        ;   Label: LAB_004629f9
    MOV EDX,dword ptr [ESI + 0x10]      ; 004629fd | DAT_00622024
    MOV EAX,dword ptr [EAX + 0x10]      ; 00462a00 | DAT_00622024
    SUB EAX,EDX                         ; 00462a03
    MOV EDX,EAX                         ; 00462a05
    MOV EAX,ECX                         ; 00462a07
    MOV dword ptr [0x01ba51c8],EBP      ; 00462a09 | DAT_01ba51c8
    IMUL EDX                            ; 00462a0f
    SHRD EAX,EDX,0x10                   ; 00462a11
    MOV dword ptr [EBX + 0xc],EAX       ; 00462a15
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00462a18
    MOV EDX,dword ptr [ESI + 0x8]       ; 00462a1c | DAT_0062201c
    MOV EAX,dword ptr [EAX + 0x8]       ; 00462a1f | DAT_0062201c
    SUB EAX,EDX                         ; 00462a22
    MOV EDX,EAX                         ; 00462a24
    SHL EDX,0x8                         ; 00462a26
    MOV EAX,ECX                         ; 00462a29
    IMUL EDX                            ; 00462a2b
    SHRD EAX,EDX,0x10                   ; 00462a2d
    MOV dword ptr [EBX + 0x2c],EAX      ; 00462a31
    MOV ECX,dword ptr [ESI + 0x14]      ; 00462a34 | DAT_00622028
    AND ECX,0xffff                      ; 00462a37
    XOR CX,0xffff                       ; 00462a3d
    MOV EDX,dword ptr [EBX + 0xc]       ; 00462a41
    MOV EAX,ECX                         ; 00462a44
    IMUL EDX                            ; 00462a46
    SHRD EAX,EDX,0x10                   ; 00462a48
    MOV dword ptr [ESP + 0x40],EAX      ; 00462a4c
    MOV EDX,dword ptr [ESP + 0x40]      ; 00462a50
    MOV EAX,dword ptr [ESI + 0x10]      ; 00462a54 | DAT_00622024
    ADD EAX,EDX                         ; 00462a57
    MOV dword ptr [EBX + 0x8],EAX       ; 00462a59
    MOV ESI,dword ptr [ESI + 0x8]       ; 00462a5c | DAT_0062201c
    MOV EAX,[0x01ba5714]                ; 00462a5f | DAT_01ba5714
    SHL ESI,0x8                         ; 00462a64
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00462a67
    SUB ESI,EAX                         ; 00462a6a
    MOV EAX,ECX                         ; 00462a6c
    IMUL EDX                            ; 00462a6e
    SHRD EAX,EDX,0x10                   ; 00462a70
    MOV EBP,dword ptr [0x01ba51c8]      ; 00462a74 | DAT_01ba51c8
    ADD ESI,EAX                         ; 00462a7a
    INC EBP                             ; 00462a7c
    MOV dword ptr [EBX + 0x28],ESI      ; 00462a7d
    JMP 0x0046279f                      ; 00462a80
        ;   XREF to: 0046279f (UNCONDITIONAL_JUMP)  ; LAB_0046279f
    MOV EAX,0xffffffff                  ; 00462a85
        ;   Label: LAB_00462a85
    XOR EDX,EDX                         ; 00462a8a
    DIV ECX                             ; 00462a8c
    MOV ECX,EAX                         ; 00462a8e
    JMP 0x004629f9                      ; 00462a90
        ;   XREF to: 004629f9 (UNCONDITIONAL_JUMP)  ; LAB_004629f9
    INC EAX                             ; 00462a95
        ;   Label: LAB_00462a95
    ADD ESI,0x50                        ; 00462a96
    CMP EAX,EBP                         ; 00462a99
    JL 0x004627d4                       ; 00462a9b
        ;   XREF to: 004627d4 (CONDITIONAL_JUMP)  ; LAB_004627d4
    XOR ESI,ESI                         ; 00462aa1
        ;   Label: LAB_00462aa1
    JMP 0x004627e4                      ; 00462aa3
        ;   XREF to: 004627e4 (UNCONDITIONAL_JUMP)  ; LAB_004627e4
    INC EDX                             ; 00462aa8
        ;   Label: LAB_00462aa8
    ADD EAX,0x50                        ; 00462aa9
    CMP EDX,EBP                         ; 00462aac
    JL 0x0046280d                       ; 00462aae
        ;   XREF to: 0046280d (CONDITIONAL_JUMP)  ; LAB_0046280d
    XOR EAX,EAX                         ; 00462ab4
        ;   Label: LAB_00462ab4
    JMP 0x0046281d                      ; 00462ab6
        ;   XREF to: 0046281d (UNCONDITIONAL_JUMP)  ; LAB_0046281d
    INC EDX                             ; 00462abb
        ;   Label: LAB_00462abb
    ADD EAX,0x50                        ; 00462abc
    CMP EDX,EBP                         ; 00462abf
    JL 0x00462868                       ; 00462ac1
        ;   XREF to: 00462868 (CONDITIONAL_JUMP)  ; LAB_00462868
    XOR EAX,EAX                         ; 00462ac7
        ;   Label: LAB_00462ac7
    JMP 0x00462878                      ; 00462ac9
        ;   XREF to: 00462878 (UNCONDITIONAL_JUMP)  ; LAB_00462878
    INC EDX                             ; 00462ace
        ;   Label: LAB_00462ace
    ADD EAX,0x50                        ; 00462acf
    CMP EDX,EBP                         ; 00462ad2
    JL 0x004628b8                       ; 00462ad4
        ;   XREF to: 004628b8 (CONDITIONAL_JUMP)  ; LAB_004628b8
    XOR EAX,EAX                         ; 00462ada
        ;   Label: LAB_00462ada
    JMP 0x004628c8                      ; 00462adc
        ;   XREF to: 004628c8 (UNCONDITIONAL_JUMP)  ; LAB_004628c8

