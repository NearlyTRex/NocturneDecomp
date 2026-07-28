; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550(float *param_1,float *param_2,float *param_3,float *param_4)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[6]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040a87f
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041ef90 at 0041f013
;   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_00453990 at 004539dd
;   core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50 at 004ca0d4
;   core_setdir.cpp_testOBBIntersection_FUN_00513e80 at 0051408b
;   core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005520d0 at 005520ff
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d550
        ;   Label: core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
    PUSH ESI                            ; 0041d551
    PUSH EDI                            ; 0041d552
    PUSH EBP                            ; 0041d553
    MOV EBP,ESP                         ; 0041d554
    SUB ESP,0x4c                        ; 0041d556
    AND ESP,0xfffffff8                  ; 0041d559
    MOV ECX,dword ptr [EBP + 0x14]      ; 0041d55c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0041d55f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0041d562
    MOV EDX,dword ptr [EBP + 0x20]      ; 0041d565
    FLD float ptr [ESI]                 ; 0041d568
    MOV EDI,0x1                         ; 0041d56a
    FCOMP float ptr [ECX]               ; 0041d56f
    FNSTSW AX                           ; 0041d571
    SAHF                                ; 0041d573
    JC 0x0041d6d1                       ; 0041d574
        ;   XREF to: 0041d6d1 (CONDITIONAL_JUMP)  ; LAB_0041d6d1
    FLD float ptr [ESI]                 ; 0041d57a
    FCOMP float ptr [ECX + 0xc]         ; 0041d57c
    FNSTSW AX                           ; 0041d57f
    SAHF                                ; 0041d581
    JBE 0x0041d703                      ; 0041d582
        ;   XREF to: 0041d703 (CONDITIONAL_JUMP)  ; LAB_0041d703
    FLD float ptr [ECX + 0xc]           ; 0041d588
    FSUB float ptr [ESI]                ; 0041d58b
    FST float ptr [ESP + 0x2c]          ; 0041d58d
    FCOMP float ptr [EBX]               ; 0041d591
    FNSTSW AX                           ; 0041d593
    SAHF                                ; 0041d595
    JC 0x0041d6f0                       ; 0041d596
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x2c]          ; 0041d59c
    FDIV float ptr [EBX]                ; 0041d5a0
    MOV EAX,0x3f800000                  ; 0041d5a2
    XOR EDI,EDI                         ; 0041d5a7
        ;   Label: LAB_0041d5a7
    MOV dword ptr [ESP + 0x20],EAX      ; 0041d5a9
    FSTP float ptr [ESP + 0x2c]         ; 0041d5ad
    FLD float ptr [ESI + 0x4]           ; 0041d5b1
        ;   Label: LAB_0041d5b1
    FCOMP float ptr [ECX + 0x4]         ; 0041d5b4
    FNSTSW AX                           ; 0041d5b7
    SAHF                                ; 0041d5b9
    JNC 0x0041d710                      ; 0041d5ba
        ;   XREF to: 0041d710 (CONDITIONAL_JUMP)  ; LAB_0041d710
    FLD float ptr [ECX + 0x4]           ; 0041d5c0
    FSUB float ptr [ESI + 0x4]          ; 0041d5c3
    FST float ptr [ESP + 0x30]          ; 0041d5c6
    FCOMP float ptr [EBX + 0x4]         ; 0041d5ca
    FNSTSW AX                           ; 0041d5cd
    SAHF                                ; 0041d5cf
    JA 0x0041d6f0                       ; 0041d5d0
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x30]          ; 0041d5d6
    FDIV float ptr [EBX + 0x4]          ; 0041d5da
    MOV EAX,0xbf800000                  ; 0041d5dd
    XOR EDI,EDI                         ; 0041d5e2
        ;   Label: LAB_0041d5e2
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041d5e4
    FSTP float ptr [ESP + 0x30]         ; 0041d5e8
    FLD float ptr [ESI + 0x8]           ; 0041d5ec
        ;   Label: LAB_0041d5ec
    FCOMP float ptr [ECX + 0x8]         ; 0041d5ef
    FNSTSW AX                           ; 0041d5f2
    SAHF                                ; 0041d5f4
    JNC 0x0041d74b                      ; 0041d5f5
        ;   XREF to: 0041d74b (CONDITIONAL_JUMP)  ; LAB_0041d74b
    FLD float ptr [ECX + 0x8]           ; 0041d5fb
    FSUB float ptr [ESI + 0x8]          ; 0041d5fe
    FST float ptr [ESP + 0x28]          ; 0041d601
    FCOMP float ptr [EBX + 0x8]         ; 0041d605
    FNSTSW AX                           ; 0041d608
    SAHF                                ; 0041d60a
    JA 0x0041d6f0                       ; 0041d60b
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x28]          ; 0041d611
    FDIV float ptr [EBX + 0x8]          ; 0041d615
    MOV dword ptr [ESP + 0x40],0xbf800000 ; 0041d618
    FSTP float ptr [ESP + 0x28]         ; 0041d620
        ;   Label: LAB_0041d620
    FLD float ptr [ESP + 0x30]          ; 0041d624
        ;   Label: LAB_0041d624
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041d628
    XOR EDI,EDI                         ; 0041d62c
    MOV dword ptr [ESP + 0x34],EAX      ; 0041d62e
    FCOMP float ptr [ESP + 0x2c]        ; 0041d632
    FNSTSW AX                           ; 0041d636
    SAHF                                ; 0041d638
    JBE 0x0041d648                      ; 0041d639
        ;   XREF to: 0041d648 (CONDITIONAL_JUMP)  ; LAB_0041d648
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041d63b
    MOV EDI,0x1                         ; 0041d63f
    MOV dword ptr [ESP + 0x34],EAX      ; 0041d644
    FLD float ptr [ESP + 0x28]          ; 0041d648
        ;   Label: LAB_0041d648
    FCOMP float ptr [ESP + 0x34]        ; 0041d64c
    FNSTSW AX                           ; 0041d650
    SAHF                                ; 0041d652
    JBE 0x0041d938                      ; 0041d653
        ;   XREF to: 0041d938 (CONDITIONAL_JUMP)  ; LAB_0041d938
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041d659
    MOV dword ptr [ESP + 0x34],EAX      ; 0041d65d
    FLD float ptr [EBX]                 ; 0041d661
        ;   Label: LAB_0041d661
    FMUL float ptr [ESP + 0x34]         ; 0041d663
    FADD float ptr [ESI]                ; 0041d667
    FST float ptr [ESP + 0x44]          ; 0041d669
    FCOMP float ptr [ECX]               ; 0041d66d
    FNSTSW AX                           ; 0041d66f
    SAHF                                ; 0041d671
    JC 0x0041d6f0                       ; 0041d672
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x44]          ; 0041d678
    FCOMP float ptr [ECX + 0xc]         ; 0041d67c
    FNSTSW AX                           ; 0041d67f
    SAHF                                ; 0041d681
    JA 0x0041d6f0                       ; 0041d682
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [EBX + 0x4]           ; 0041d684
    FMUL float ptr [ESP + 0x34]         ; 0041d687
    FADD float ptr [ESI + 0x4]          ; 0041d68b
    FST float ptr [ESP + 0x24]          ; 0041d68e
    FCOMP float ptr [ECX + 0x4]         ; 0041d692
    FNSTSW AX                           ; 0041d695
    SAHF                                ; 0041d697
    JC 0x0041d6f0                       ; 0041d698
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x24]          ; 0041d69a
    FCOMP float ptr [ECX + 0x10]        ; 0041d69e
    FNSTSW AX                           ; 0041d6a1
    SAHF                                ; 0041d6a3
    JA 0x0041d6f0                       ; 0041d6a4
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    TEST EDX,EDX                        ; 0041d6a6
    JZ 0x0041d6be                       ; 0041d6a8
        ;   XREF to: 0041d6be (CONDITIONAL_JUMP)  ; LAB_0041d6be
    MOV dword ptr [EDX + 0x4],0x0       ; 0041d6aa
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041d6b1
    MOV dword ptr [EDX],0x0             ; 0041d6b5
    MOV dword ptr [EDX + 0x8],EAX       ; 0041d6bb
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041d6be
        ;   Label: LAB_0041d6be
    MOV dword ptr [ESP + 0x38],EAX      ; 0041d6c2
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041d6c6
    MOV ESP,EBP                         ; 0041d6ca
    POP EBP                             ; 0041d6cc
    POP EDI                             ; 0041d6cd
    POP ESI                             ; 0041d6ce
    POP EBX                             ; 0041d6cf
    RET                                 ; 0041d6d0
    FLD float ptr [ECX]                 ; 0041d6d1
        ;   Label: LAB_0041d6d1
    FSUB float ptr [ESI]                ; 0041d6d3
    FST float ptr [ESP + 0x2c]          ; 0041d6d5
    FCOMP float ptr [EBX]               ; 0041d6d9
    FNSTSW AX                           ; 0041d6db
    SAHF                                ; 0041d6dd
    JA 0x0041d6f0                       ; 0041d6de
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x2c]          ; 0041d6e0
    FDIV float ptr [EBX]                ; 0041d6e4
    MOV EAX,0xbf800000                  ; 0041d6e6
    JMP 0x0041d5a7                      ; 0041d6eb
        ;   XREF to: 0041d5a7 (UNCONDITIONAL_JUMP)  ; LAB_0041d5a7
    MOV dword ptr [ESP + 0x38],0xbf800000 ; 0041d6f0
        ;   Label: LAB_0041d6f0
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041d6f8
    MOV ESP,EBP                         ; 0041d6fc
    POP EBP                             ; 0041d6fe
    POP EDI                             ; 0041d6ff
    POP ESI                             ; 0041d700
    POP EBX                             ; 0041d701
    RET                                 ; 0041d702
    MOV dword ptr [ESP + 0x2c],0xbf800000 ; 0041d703
        ;   Label: LAB_0041d703
    JMP 0x0041d5b1                      ; 0041d70b
        ;   XREF to: 0041d5b1 (UNCONDITIONAL_JUMP)  ; LAB_0041d5b1
    FLD float ptr [ESI + 0x4]           ; 0041d710
        ;   Label: LAB_0041d710
    FCOMP float ptr [ECX + 0x10]        ; 0041d713
    FNSTSW AX                           ; 0041d716
    SAHF                                ; 0041d718
    JBE 0x0041d73e                      ; 0041d719
        ;   XREF to: 0041d73e (CONDITIONAL_JUMP)  ; LAB_0041d73e
    FLD float ptr [ECX + 0x10]          ; 0041d71b
    FSUB float ptr [ESI + 0x4]          ; 0041d71e
    FST float ptr [ESP + 0x30]          ; 0041d721
    FCOMP float ptr [EBX + 0x4]         ; 0041d725
    FNSTSW AX                           ; 0041d728
    SAHF                                ; 0041d72a
    JC 0x0041d6f0                       ; 0041d72b
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x30]          ; 0041d72d
    FDIV float ptr [EBX + 0x4]          ; 0041d731
    MOV EAX,0x3f800000                  ; 0041d734
    JMP 0x0041d5e2                      ; 0041d739
        ;   XREF to: 0041d5e2 (UNCONDITIONAL_JUMP)  ; LAB_0041d5e2
    MOV dword ptr [ESP + 0x30],0xbf800000 ; 0041d73e
        ;   Label: LAB_0041d73e
    JMP 0x0041d5ec                      ; 0041d746
        ;   XREF to: 0041d5ec (UNCONDITIONAL_JUMP)  ; LAB_0041d5ec
    FLD float ptr [ESI + 0x8]           ; 0041d74b
        ;   Label: LAB_0041d74b
    FCOMP float ptr [ECX + 0x14]        ; 0041d74e
    FNSTSW AX                           ; 0041d751
    SAHF                                ; 0041d753
    JBE 0x0041d77c                      ; 0041d754
        ;   XREF to: 0041d77c (CONDITIONAL_JUMP)  ; LAB_0041d77c
    FLD float ptr [ECX + 0x14]          ; 0041d756
    FSUB float ptr [ESI + 0x8]          ; 0041d759
    FST float ptr [ESP + 0x28]          ; 0041d75c
    FCOMP float ptr [EBX + 0x8]         ; 0041d760
    FNSTSW AX                           ; 0041d763
    SAHF                                ; 0041d765
    JC 0x0041d6f0                       ; 0041d766
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x28]          ; 0041d768
    FDIV float ptr [EBX + 0x8]          ; 0041d76c
    MOV dword ptr [ESP + 0x40],0x3f800000 ; 0041d76f
    JMP 0x0041d620                      ; 0041d777
        ;   XREF to: 0041d620 (UNCONDITIONAL_JUMP)  ; LAB_0041d620
    MOV dword ptr [ESP + 0x28],0xbf800000 ; 0041d77c
        ;   Label: LAB_0041d77c
    TEST EDI,EDI                        ; 0041d784
    JZ 0x0041d624                       ; 0041d786
        ;   XREF to: 0041d624 (CONDITIONAL_JUMP)  ; LAB_0041d624
    TEST EDX,EDX                        ; 0041d78c
    JZ 0x0041d7f3                       ; 0041d78e
        ;   XREF to: 0041d7f3 (CONDITIONAL_JUMP)  ; LAB_0041d7f3
    FLD float ptr [EBX]                 ; 0041d790
    LEA EAX,[ESP + 0x4]                 ; 0041d792
    FCHS                                ; 0041d796
    FSTP float ptr [ESP + 0x4]          ; 0041d798
    FLD float ptr [EBX + 0x4]           ; 0041d79c
    FCHS                                ; 0041d79f
    FSTP float ptr [ESP + 0x8]          ; 0041d7a1
    FLD float ptr [EBX + 0x8]           ; 0041d7a5
    FCHS                                ; 0041d7a8
    FSTP float ptr [ESP + 0xc]          ; 0041d7aa
    CMP EDX,EAX                         ; 0041d7ae
    JNZ 0x0041d804                      ; 0041d7b0
        ;   XREF to: 0041d804 (CONDITIONAL_JUMP)  ; LAB_0041d804
    FLD float ptr [EDX + 0x4]           ; 0041d7b2
        ;   Label: LAB_0041d7b2
    FMUL ST0                            ; 0041d7b5
    FLD float ptr [EDX]                 ; 0041d7b7
    FMUL ST0                            ; 0041d7b9
    FADDP                               ; 0041d7bb
    FLD float ptr [EDX + 0x8]           ; 0041d7bd
    FMUL ST0                            ; 0041d7c0
    FADDP                               ; 0041d7c2
    FSQRT                               ; 0041d7c4
    FST float ptr [ESP]                 ; 0041d7c6
    FLDZ                                ; 0041d7c9
    FCOMPP                              ; 0041d7cb
    FNSTSW AX                           ; 0041d7cd
    SAHF                                ; 0041d7cf
    JNC 0x0041d81a                      ; 0041d7d0
        ;   XREF to: 0041d81a (CONDITIONAL_JUMP)  ; LAB_0041d81a
    FLD1                                ; 0041d7d2
    FLD float ptr [EDX]                 ; 0041d7d4
    FXCH                                ; 0041d7d6
    FDIV float ptr [ESP]                ; 0041d7d8
    FXCH                                ; 0041d7db
    FMUL ST1                            ; 0041d7dd
    FLD float ptr [EDX + 0x4]           ; 0041d7df
    FMUL ST2                            ; 0041d7e2
    FLD float ptr [EDX + 0x8]           ; 0041d7e4
    FMULP ST3                           ; 0041d7e7
    FXCH                                ; 0041d7e9
    FSTP float ptr [EDX]                ; 0041d7eb
    FSTP float ptr [EDX + 0x4]          ; 0041d7ed
    FSTP float ptr [EDX + 0x8]          ; 0041d7f0
    XOR EDX,EDX                         ; 0041d7f3
        ;   Label: LAB_0041d7f3
    MOV dword ptr [ESP + 0x38],EDX      ; 0041d7f5
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041d7f9
    MOV ESP,EBP                         ; 0041d7fd
    POP EBP                             ; 0041d7ff
    POP EDI                             ; 0041d800
    POP ESI                             ; 0041d801
    POP EBX                             ; 0041d802
    RET                                 ; 0041d803
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041d804
        ;   Label: LAB_0041d804
    MOV dword ptr [EDX],EAX             ; 0041d808
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041d80a
    MOV dword ptr [EDX + 0x4],EAX       ; 0041d80e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041d811
    MOV dword ptr [EDX + 0x8],EAX       ; 0041d815
    JMP 0x0041d7b2                      ; 0041d818
        ;   XREF to: 0041d7b2 (UNCONDITIONAL_JUMP)  ; LAB_0041d7b2
    MOV dword ptr [EDX + 0x8],0x0       ; 0041d81a
        ;   Label: LAB_0041d81a
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041d821
    MOV dword ptr [EDX + 0x4],EAX       ; 0041d824
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041d827
    MOV dword ptr [EDX],EAX             ; 0041d82a
    XOR EDX,EDX                         ; 0041d82c
    MOV dword ptr [ESP + 0x38],EDX      ; 0041d82e
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041d832
    MOV ESP,EBP                         ; 0041d836
    POP EBP                             ; 0041d838
    POP EDI                             ; 0041d839
    POP ESI                             ; 0041d83a
    POP EBX                             ; 0041d83b
    RET                                 ; 0041d83c
    FLD float ptr [EBX + 0x4]           ; 0041d83d
        ;   Label: LAB_0041d83d
    FMUL float ptr [ESP + 0x34]         ; 0041d840
    FADD float ptr [ESI + 0x4]          ; 0041d844
    FST float ptr [ESP + 0x18]          ; 0041d847
    FCOMP float ptr [ECX + 0x4]         ; 0041d84b
    FNSTSW AX                           ; 0041d84e
    SAHF                                ; 0041d850
    JC 0x0041d6f0                       ; 0041d851
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x18]          ; 0041d857
    FCOMP float ptr [ECX + 0x10]        ; 0041d85b
    FNSTSW AX                           ; 0041d85e
    SAHF                                ; 0041d860
    JA 0x0041d6f0                       ; 0041d861
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [EBX + 0x8]           ; 0041d867
    FMUL float ptr [ESP + 0x34]         ; 0041d86a
    FADD float ptr [ESI + 0x8]          ; 0041d86e
    FST float ptr [ESP + 0x14]          ; 0041d871
    FCOMP float ptr [ECX + 0x8]         ; 0041d875
    FNSTSW AX                           ; 0041d878
    SAHF                                ; 0041d87a
    JC 0x0041d6f0                       ; 0041d87b
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x14]          ; 0041d881
    FCOMP float ptr [ECX + 0x14]        ; 0041d885
    FNSTSW AX                           ; 0041d888
    SAHF                                ; 0041d88a
    JA 0x0041d6f0                       ; 0041d88b
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    TEST EDX,EDX                        ; 0041d891
    JZ 0x0041d6be                       ; 0041d893
        ;   XREF to: 0041d6be (CONDITIONAL_JUMP)  ; LAB_0041d6be
    MOV dword ptr [EDX + 0x4],EDI       ; 0041d899
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d89c
    MOV dword ptr [EDX + 0x8],EDI       ; 0041d8a0
    MOV dword ptr [EDX],EAX             ; 0041d8a3
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041d8a5
    MOV dword ptr [ESP + 0x38],EAX      ; 0041d8a9
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041d8ad
    MOV ESP,EBP                         ; 0041d8b1
    POP EBP                             ; 0041d8b3
    POP EDI                             ; 0041d8b4
    POP ESI                             ; 0041d8b5
    POP EBX                             ; 0041d8b6
    RET                                 ; 0041d8b7
    FLD float ptr [EBX]                 ; 0041d8b8
        ;   Label: LAB_0041d8b8
    FMUL float ptr [ESP + 0x34]         ; 0041d8ba
    FADD float ptr [ESI]                ; 0041d8be
    FST float ptr [ESP + 0x3c]          ; 0041d8c0
    FCOMP float ptr [ECX]               ; 0041d8c4
    FNSTSW AX                           ; 0041d8c6
    SAHF                                ; 0041d8c8
    JC 0x0041d6f0                       ; 0041d8c9
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x3c]          ; 0041d8cf
    FCOMP float ptr [ECX + 0xc]         ; 0041d8d3
    FNSTSW AX                           ; 0041d8d6
    SAHF                                ; 0041d8d8
    JA 0x0041d6f0                       ; 0041d8d9
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [EBX + 0x8]           ; 0041d8df
    FMUL float ptr [ESP + 0x34]         ; 0041d8e2
    FADD float ptr [ESI + 0x8]          ; 0041d8e6
    FST float ptr [ESP + 0x10]          ; 0041d8e9
    FCOMP float ptr [ECX + 0x8]         ; 0041d8ed
    FNSTSW AX                           ; 0041d8f0
    SAHF                                ; 0041d8f2
    JC 0x0041d6f0                       ; 0041d8f3
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    FLD float ptr [ESP + 0x10]          ; 0041d8f9
    FCOMP float ptr [ECX + 0x14]        ; 0041d8fd
    FNSTSW AX                           ; 0041d900
    SAHF                                ; 0041d902
    JA 0x0041d6f0                       ; 0041d903
        ;   XREF to: 0041d6f0 (CONDITIONAL_JUMP)  ; LAB_0041d6f0
    TEST EDX,EDX                        ; 0041d909
    JZ 0x0041d6be                       ; 0041d90b
        ;   XREF to: 0041d6be (CONDITIONAL_JUMP)  ; LAB_0041d6be
    MOV dword ptr [EDX + 0x8],0x0       ; 0041d911
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0041d918
    MOV dword ptr [EDX],0x0             ; 0041d91c
    MOV dword ptr [EDX + 0x4],EAX       ; 0041d922
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041d925
    MOV dword ptr [ESP + 0x38],EAX      ; 0041d929
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041d92d
    MOV ESP,EBP                         ; 0041d931
    POP EBP                             ; 0041d933
    POP EDI                             ; 0041d934
    POP ESI                             ; 0041d935
    POP EBX                             ; 0041d936
    RET                                 ; 0041d937
    CMP EDI,0x1                         ; 0041d938
        ;   Label: LAB_0041d938
    JNC 0x0041d958                      ; 0041d93b
        ;   XREF to: 0041d958 (CONDITIONAL_JUMP)  ; LAB_0041d958
    TEST EDI,EDI                        ; 0041d93d
    JZ 0x0041d83d                       ; 0041d93f
        ;   XREF to: 0041d83d (CONDITIONAL_JUMP)  ; LAB_0041d83d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041d945
    MOV dword ptr [ESP + 0x38],EAX      ; 0041d949
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041d94d
    MOV ESP,EBP                         ; 0041d951
    POP EBP                             ; 0041d953
    POP EDI                             ; 0041d954
    POP ESI                             ; 0041d955
    POP EBX                             ; 0041d956
    RET                                 ; 0041d957
    JBE 0x0041d8b8                      ; 0041d958
        ;   XREF to: 0041d8b8 (CONDITIONAL_JUMP)  ; LAB_0041d8b8
        ;   Label: LAB_0041d958
    CMP EDI,0x2                         ; 0041d95e
    JZ 0x0041d661                       ; 0041d961
        ;   XREF to: 0041d661 (CONDITIONAL_JUMP)  ; LAB_0041d661
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041d967
    MOV dword ptr [ESP + 0x38],EAX      ; 0041d96b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041d96f
    MOV ESP,EBP                         ; 0041d973
    POP EBP                             ; 0041d975
    POP EDI                             ; 0041d976
    POP ESI                             ; 0041d977
    POP EBX                             ; 0041d978
    RET                                 ; 0041d979

