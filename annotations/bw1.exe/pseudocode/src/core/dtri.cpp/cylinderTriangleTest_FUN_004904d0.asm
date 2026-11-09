; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_004904d0(float *param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00468160 at 004681fc
;   core_setcolid.cpp_FUN_005580d0 at 005581fc
;   core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_00584c20 at 00584c48
;
; Called Functions:
;   core_dtri.cpp_cylinderEdgeIntersection_FUN_00490150
;   core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00490430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004904d0
        ;   Label: core_dtri.cpp_cylinderTriangleTest_FUN_004904d0
    PUSH ESI                            ; 004904d1
    PUSH EDI                            ; 004904d2
    PUSH EBP                            ; 004904d3
    SUB ESP,0x6c                        ; 004904d4
    MOV EBX,dword ptr [ESP + 0x80]      ; 004904d7
    MOV ESI,dword ptr [ESP + 0x84]      ; 004904de
    FLD float ptr [EBX + 0x24]          ; 004904e5
    FMUL float ptr [ESI + 0x18]         ; 004904e8
    FLD float ptr [EBX + 0x2c]          ; 004904eb
    FMUL float ptr [ESI + 0x1c]         ; 004904ee
    FADDP                               ; 004904f1
    FLDZ                                ; 004904f3
    FCOMPP                              ; 004904f5
    FNSTSW AX                           ; 004904f7
    SAHF                                ; 004904f9
    JNC 0x0049084a                      ; 004904fa
        ;   XREF to: 0049084a (CONDITIONAL_JUMP)  ; LAB_0049084a
    FLD float ptr [EBX + 0x8]           ; 00490500
    FMUL float ptr [ESI + 0x1c]         ; 00490503
    MOV EBP,EBX                         ; 00490506
    LEA EDI,[EBX + 0xc]                 ; 00490508
    FLD float ptr [EBX]                 ; 0049050b
    FMUL float ptr [ESI + 0x18]         ; 0049050d
    FLD float ptr [EDI + 0x8]           ; 00490510
    LEA EAX,[EBX + 0x18]                ; 00490513
    FMUL float ptr [ESI + 0x1c]         ; 00490516
    FLD float ptr [EAX + 0x8]           ; 00490519
    FMUL float ptr [ESI + 0x1c]         ; 0049051c
    FLD float ptr [EDI]                 ; 0049051f
    FMUL float ptr [ESI + 0x18]         ; 00490521
    FLD float ptr [EAX]                 ; 00490524
    FMUL float ptr [ESI + 0x18]         ; 00490526
    FXCH ST4                            ; 00490529
    FADDP ST5,ST0                       ; 0049052b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049052d
    FXCH ST4                            ; 00490531
    FST float ptr [ESP + 0x40]          ; 00490533
    FXCH ST4                            ; 00490537
    FADDP ST2,ST0                       ; 00490539
    FADDP ST2,ST0                       ; 0049053b
    FSTP float ptr [ESP + 0x50]         ; 0049053d
    FSTP float ptr [ESP + 0x38]         ; 00490541
    FCOMP float ptr [ESP + 0x50]        ; 00490545
    FNSTSW AX                           ; 00490549
    SAHF                                ; 0049054b
    JA 0x00490852                       ; 0049054c
        ;   XREF to: 00490852 (CONDITIONAL_JUMP)  ; LAB_00490852
    FLD float ptr [ESP + 0x50]          ; 00490552
        ;   Label: LAB_00490552
    FCOMP float ptr [ESP + 0x38]        ; 00490556
    FNSTSW AX                           ; 0049055a
    SAHF                                ; 0049055c
    JBE 0x00490581                      ; 0049055d
        ;   XREF to: 00490581 (CONDITIONAL_JUMP)  ; LAB_00490581
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049055f
    MOV dword ptr [ESP + 0x58],EAX      ; 00490563
    MOV EAX,dword ptr [ESP + 0x38]      ; 00490567
    MOV dword ptr [ESP + 0x50],EAX      ; 0049056b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0049056f
    MOV dword ptr [ESP + 0x38],EAX      ; 00490573
    MOV EAX,EDI                         ; 00490577
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00490579
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049057d
    FLD float ptr [ESP + 0x40]          ; 00490581
        ;   Label: LAB_00490581
    FCOMP float ptr [ESP + 0x50]        ; 00490585
    FNSTSW AX                           ; 00490589
    SAHF                                ; 0049058b
    JBE 0x0049059c                      ; 0049058c
        ;   XREF to: 0049059c (CONDITIONAL_JUMP)  ; LAB_0049059c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049058e
    MOV dword ptr [ESP + 0x40],EAX      ; 00490592
    MOV EAX,EBP                         ; 00490596
    MOV EBP,EDI                         ; 00490598
    MOV EDI,EAX                         ; 0049059a
    FLD float ptr [ESP + 0x38]          ; 0049059c
        ;   Label: LAB_0049059c
    FCOMP float ptr [ESI + 0x2c]        ; 004905a0
    FNSTSW AX                           ; 004905a3
    SAHF                                ; 004905a5
    JC 0x0049084a                       ; 004905a6
        ;   XREF to: 0049084a (CONDITIONAL_JUMP)  ; LAB_0049084a
    FLD float ptr [ESP + 0x40]          ; 004905ac
    FCOMP float ptr [ESI + 0x30]        ; 004905b0
    FNSTSW AX                           ; 004905b3
    SAHF                                ; 004905b5
    JA 0x0049084a                       ; 004905b6
        ;   XREF to: 0049084a (CONDITIONAL_JUMP)  ; LAB_0049084a
    XOR EDX,EDX                         ; 004905bc
    FLD float ptr [EBX + 0x4]           ; 004905be
    MOV dword ptr [ESP + 0x44],EDX      ; 004905c1
    FCOMP float ptr [ESI + 0x24]        ; 004905c5
    FNSTSW AX                           ; 004905c8
    SAHF                                ; 004905ca
    JC 0x004905d5                       ; 004905cb
        ;   XREF to: 004905d5 (CONDITIONAL_JUMP)  ; LAB_004905d5
    MOV dword ptr [ESP + 0x44],0x1      ; 004905cd
    FLD float ptr [EBX + 0x4]           ; 004905d5
        ;   Label: LAB_004905d5
    FCOMP float ptr [ESI + 0x28]        ; 004905d8
    FNSTSW AX                           ; 004905db
    SAHF                                ; 004905dd
    JA 0x004905e5                       ; 004905de
        ;   XREF to: 004905e5 (CONDITIONAL_JUMP)  ; LAB_004905e5
    OR byte ptr [ESP + 0x44],0x2        ; 004905e0
    XOR EAX,EAX                         ; 004905e5
        ;   Label: LAB_004905e5
    FLD float ptr [EBX + 0x10]          ; 004905e7
    MOV dword ptr [ESP + 0x4c],EAX      ; 004905ea
    FCOMP float ptr [ESI + 0x24]        ; 004905ee
    FNSTSW AX                           ; 004905f1
    SAHF                                ; 004905f3
    JC 0x004905fe                       ; 004905f4
        ;   XREF to: 004905fe (CONDITIONAL_JUMP)  ; LAB_004905fe
    MOV dword ptr [ESP + 0x4c],0x1      ; 004905f6
    FLD float ptr [EBX + 0x10]          ; 004905fe
        ;   Label: LAB_004905fe
    FCOMP float ptr [ESI + 0x28]        ; 00490601
    FNSTSW AX                           ; 00490604
    SAHF                                ; 00490606
    JA 0x0049060e                       ; 00490607
        ;   XREF to: 0049060e (CONDITIONAL_JUMP)  ; LAB_0049060e
    OR byte ptr [ESP + 0x4c],0x2        ; 00490609
    XOR ECX,ECX                         ; 0049060e
        ;   Label: LAB_0049060e
    FLD float ptr [EBX + 0x1c]          ; 00490610
    MOV dword ptr [ESP + 0x48],ECX      ; 00490613
    FCOMP float ptr [ESI + 0x24]        ; 00490617
    FNSTSW AX                           ; 0049061a
    SAHF                                ; 0049061c
    JC 0x00490627                       ; 0049061d
        ;   XREF to: 00490627 (CONDITIONAL_JUMP)  ; LAB_00490627
    MOV dword ptr [ESP + 0x48],0x1      ; 0049061f
    FLD float ptr [EBX + 0x1c]          ; 00490627
        ;   Label: LAB_00490627
    FCOMP float ptr [ESI + 0x28]        ; 0049062a
    FNSTSW AX                           ; 0049062d
    SAHF                                ; 0049062f
    JA 0x00490637                       ; 00490630
        ;   XREF to: 00490637 (CONDITIONAL_JUMP)  ; LAB_00490637
    OR byte ptr [ESP + 0x48],0x2        ; 00490632
    MOV EAX,dword ptr [ESP + 0x44]      ; 00490637
        ;   Label: LAB_00490637
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0049063b
    MOV ECX,dword ptr [ESP + 0x48]      ; 0049063f
    AND EAX,EDX                         ; 00490643
    TEST EAX,ECX                        ; 00490645
    JNZ 0x0049084a                      ; 00490647
        ;   XREF to: 0049084a (CONDITIONAL_JUMP)  ; LAB_0049084a
    FLDZ                                ; 0049064d
    FCOMP float ptr [EBX + 0x28]        ; 0049064f
    FNSTSW AX                           ; 00490652
    SAHF                                ; 00490654
    JA 0x00490746                       ; 00490655
        ;   XREF to: 00490746 (CONDITIONAL_JUMP)  ; LAB_00490746
    MOV EDX,dword ptr [ESP + 0x44]      ; 0049065b
    XOR EDX,dword ptr [ESP + 0x4c]      ; 0049065f
    XOR EAX,EAX                         ; 00490663
    TEST DL,0x1                         ; 00490665
    JZ 0x0049069c                       ; 00490668
        ;   XREF to: 0049069c (CONDITIONAL_JUMP)  ; LAB_0049069c
    FLD float ptr [ESI + 0x24]          ; 0049066a
    FSUB float ptr [EBX + 0x4]          ; 0049066d
    FLD float ptr [EBX + 0xc]           ; 00490670
    FLD float ptr [EBX + 0x10]          ; 00490673
    FSUB float ptr [EBX + 0x4]          ; 00490676
    FXCH                                ; 00490679
    FSUB float ptr [EBX]                ; 0049067b
    FXCH                                ; 0049067d
    FDIVP ST2,ST0                       ; 0049067f
    FMUL ST1                            ; 00490681
    FADD float ptr [EBX]                ; 00490683
    FSTP float ptr [ESP]                ; 00490685
    FLD float ptr [EBX + 0x14]          ; 00490688
    FSUB float ptr [EBX + 0x8]          ; 0049068b
    FMULP                               ; 0049068e
    FADD float ptr [EBX + 0x8]          ; 00490690
    MOV EAX,0x1                         ; 00490693
    FSTP float ptr [ESP + 0x24]         ; 00490698
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0049069c
        ;   Label: LAB_0049069c
    XOR EDX,dword ptr [ESP + 0x48]      ; 004906a0
    TEST DL,0x1                         ; 004906a4
    JZ 0x004906d9                       ; 004906a7
        ;   XREF to: 004906d9 (CONDITIONAL_JUMP)  ; LAB_004906d9
    FLD float ptr [ESI + 0x24]          ; 004906a9
    FSUB float ptr [EBX + 0x10]         ; 004906ac
    FLD float ptr [EBX + 0x18]          ; 004906af
    FLD float ptr [EBX + 0x1c]          ; 004906b2
    FSUB float ptr [EBX + 0x10]         ; 004906b5
    FXCH                                ; 004906b8
    FSUB float ptr [EBX + 0xc]          ; 004906ba
    FXCH                                ; 004906bd
    FDIVP ST2,ST0                       ; 004906bf
    FMUL ST1                            ; 004906c1
    FADD float ptr [EBX + 0xc]          ; 004906c3
    FSTP float ptr [ESP + EAX*0x4]      ; 004906c6
    FLD float ptr [EBX + 0x20]          ; 004906c9
    FSUB float ptr [EBX + 0x14]         ; 004906cc
    FMULP                               ; 004906cf
    FADD float ptr [EBX + 0x14]         ; 004906d1
    INC EAX                             ; 004906d4
    FSTP float ptr [ESP + EAX*0x4 + 0x20] ; 004906d5
    MOV EDX,dword ptr [ESP + 0x48]      ; 004906d9
        ;   Label: LAB_004906d9
    XOR EDX,dword ptr [ESP + 0x44]      ; 004906dd
    TEST DL,0x1                         ; 004906e1
    JZ 0x00490715                       ; 004906e4
        ;   XREF to: 00490715 (CONDITIONAL_JUMP)  ; LAB_00490715
    FLD float ptr [ESI + 0x24]          ; 004906e6
    FSUB float ptr [EBX + 0x1c]         ; 004906e9
    FLD float ptr [EBX]                 ; 004906ec
    FLD float ptr [EBX + 0x4]           ; 004906ee
    FSUB float ptr [EBX + 0x1c]         ; 004906f1
    FXCH                                ; 004906f4
    FSUB float ptr [EBX + 0x18]         ; 004906f6
    FXCH                                ; 004906f9
    FDIVP ST2,ST0                       ; 004906fb
    FMUL ST1                            ; 004906fd
    FADD float ptr [EBX + 0x18]         ; 004906ff
    FSTP float ptr [ESP + EAX*0x4]      ; 00490702
    FLD float ptr [EBX + 0x8]           ; 00490705
    FSUB float ptr [EBX + 0x20]         ; 00490708
    FMULP                               ; 0049070b
    FADD float ptr [EBX + 0x20]         ; 0049070d
    INC EAX                             ; 00490710
    FSTP float ptr [ESP + EAX*0x4 + 0x20] ; 00490711
    CMP EAX,0x2                         ; 00490715
        ;   Label: LAB_00490715
    JL 0x00490746                       ; 00490718
        ;   XREF to: 00490746 (CONDITIONAL_JUMP)  ; LAB_00490746
    MOV EAX,dword ptr [ESP]             ; 0049071a
    MOV dword ptr [ESI + 0x3c],EAX      ; 0049071d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00490720
    MOV dword ptr [ESI + 0x40],EAX      ; 00490724
    MOV EAX,dword ptr [ESP + 0x4]       ; 00490727
    MOV dword ptr [ESI + 0x44],EAX      ; 0049072b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049072e
    PUSH ESI                            ; 00490732
    MOV dword ptr [ESI + 0x48],EAX      ; 00490733
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_00490150 ; 00490736
        ;   XREF to: 00490150 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderEdgeIntersection_FUN_00490150()
    ADD ESP,0x4                         ; 0049073b
    TEST EAX,EAX                        ; 0049073e
    JNZ 0x00490818                      ; 00490740
        ;   XREF to: 00490818 (CONDITIONAL_JUMP)  ; LAB_00490818
    FLDZ                                ; 00490746
        ;   Label: LAB_00490746
    FCOMP float ptr [EBX + 0x28]        ; 00490748
    FNSTSW AX                           ; 0049074b
    SAHF                                ; 0049074d
    JC 0x004908ab                       ; 0049074e
        ;   XREF to: 004908ab (CONDITIONAL_JUMP)  ; LAB_004908ab
    MOV EDX,dword ptr [ESP + 0x44]      ; 00490754
    XOR EDX,dword ptr [ESP + 0x4c]      ; 00490758
    XOR EAX,EAX                         ; 0049075c
    TEST DL,0x2                         ; 0049075e
    JNZ 0x00490873                      ; 00490761
        ;   XREF to: 00490873 (CONDITIONAL_JUMP)  ; LAB_00490873
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00490767
        ;   Label: LAB_00490767
    XOR EDX,dword ptr [ESP + 0x48]      ; 0049076b
    TEST DL,0x2                         ; 0049076f
    JZ 0x004907a5                       ; 00490772
        ;   XREF to: 004907a5 (CONDITIONAL_JUMP)  ; LAB_004907a5
    FLD float ptr [ESI + 0x28]          ; 00490774
    FSUB float ptr [EBX + 0x10]         ; 00490777
    FLD float ptr [EBX + 0x18]          ; 0049077a
    FLD float ptr [EBX + 0x1c]          ; 0049077d
    FSUB float ptr [EBX + 0x10]         ; 00490780
    FXCH                                ; 00490783
    FSUB float ptr [EBX + 0xc]          ; 00490785
    FXCH                                ; 00490788
    FDIVP ST2,ST0                       ; 0049078a
    FMUL ST1                            ; 0049078c
    FADD float ptr [EBX + 0xc]          ; 0049078e
    FSTP float ptr [ESP + EAX*0x4 + 0xc] ; 00490791
    FLD float ptr [EBX + 0x20]          ; 00490795
    FSUB float ptr [EBX + 0x14]         ; 00490798
    FMULP                               ; 0049079b
    FADD float ptr [EBX + 0x14]         ; 0049079d
    INC EAX                             ; 004907a0
    FSTP float ptr [ESP + EAX*0x4 + 0x14] ; 004907a1
    MOV EDX,dword ptr [ESP + 0x48]      ; 004907a5
        ;   Label: LAB_004907a5
    XOR EDX,dword ptr [ESP + 0x44]      ; 004907a9
    TEST DL,0x2                         ; 004907ad
    JZ 0x004907e2                       ; 004907b0
        ;   XREF to: 004907e2 (CONDITIONAL_JUMP)  ; LAB_004907e2
    FLD float ptr [ESI + 0x28]          ; 004907b2
    FSUB float ptr [EBX + 0x1c]         ; 004907b5
    FLD float ptr [EBX]                 ; 004907b8
    FLD float ptr [EBX + 0x4]           ; 004907ba
    FSUB float ptr [EBX + 0x1c]         ; 004907bd
    FXCH                                ; 004907c0
    FSUB float ptr [EBX + 0x18]         ; 004907c2
    FXCH                                ; 004907c5
    FDIVP ST2,ST0                       ; 004907c7
    FMUL ST1                            ; 004907c9
    FADD float ptr [EBX + 0x18]         ; 004907cb
    FSTP float ptr [ESP + EAX*0x4 + 0xc] ; 004907ce
    FLD float ptr [EBX + 0x8]           ; 004907d2
    FSUB float ptr [EBX + 0x20]         ; 004907d5
    FMULP                               ; 004907d8
    FADD float ptr [EBX + 0x20]         ; 004907da
    INC EAX                             ; 004907dd
    FSTP float ptr [ESP + EAX*0x4 + 0x14] ; 004907de
    CMP EAX,0x2                         ; 004907e2
        ;   Label: LAB_004907e2
    JL 0x004908ab                       ; 004907e5
        ;   XREF to: 004908ab (CONDITIONAL_JUMP)  ; LAB_004908ab
    MOV EAX,dword ptr [ESP + 0xc]       ; 004907eb
    MOV dword ptr [ESI + 0x3c],EAX      ; 004907ef
    MOV EAX,dword ptr [ESP + 0x18]      ; 004907f2
    MOV dword ptr [ESI + 0x40],EAX      ; 004907f6
    MOV EAX,dword ptr [ESP + 0x10]      ; 004907f9
    MOV dword ptr [ESI + 0x44],EAX      ; 004907fd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00490800
    PUSH ESI                            ; 00490804
    MOV dword ptr [ESI + 0x48],EAX      ; 00490805
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_00490150 ; 00490808
        ;   XREF to: 00490150 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderEdgeIntersection_FUN_00490150()
    ADD ESP,0x4                         ; 0049080d
    TEST EAX,EAX                        ; 00490810
    JZ 0x004908ab                       ; 00490812
        ;   XREF to: 004908ab (CONDITIONAL_JUMP)  ; LAB_004908ab
    MOV dword ptr [ESI + 0x8],0x0       ; 00490818
        ;   Label: LAB_00490818
    FLD float ptr [ESI + 0x18]          ; 0049081f
    FMUL float ptr [ESI + 0x4c]         ; 00490822
    FLD float ptr [ESI + 0x1c]          ; 00490825
    FMUL float ptr [ESI + 0x4c]         ; 00490828
    MOV EAX,dword ptr [ESI + 0x4c]      ; 0049082b
    MOV dword ptr [ESI],EAX             ; 0049082e
    FXCH                                ; 00490830
    FADD float ptr [ESI + 0x10]         ; 00490832
    FXCH                                ; 00490835
    FADD float ptr [ESI + 0x14]         ; 00490837
    FLD float ptr [ESI + 0x54]          ; 0049083a
    FLD float ptr [ESI + 0x58]          ; 0049083d
    FSUBP ST2,ST0                       ; 00490840
    FSUBP ST2,ST0                       ; 00490842
    FSTP float ptr [ESI + 0xc]          ; 00490844
    FSTP float ptr [ESI + 0x4]          ; 00490847
    ADD ESP,0x6c                        ; 0049084a
        ;   Label: LAB_0049084a
    POP EBP                             ; 0049084d
    POP EDI                             ; 0049084e
    POP ESI                             ; 0049084f
    POP EBX                             ; 00490850
    RET                                 ; 00490851
    MOV EAX,dword ptr [ESP + 0x40]      ; 00490852
        ;   Label: LAB_00490852
    MOV dword ptr [ESP + 0x54],EAX      ; 00490856
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049085a
    MOV EBP,EDI                         ; 0049085e
    MOV dword ptr [ESP + 0x40],EAX      ; 00490860
    MOV EAX,dword ptr [ESP + 0x54]      ; 00490864
    MOV EDI,EBX                         ; 00490868
    MOV dword ptr [ESP + 0x50],EAX      ; 0049086a
    JMP 0x00490552                      ; 0049086e
        ;   XREF to: 00490552 (UNCONDITIONAL_JUMP)  ; LAB_00490552
    FLD float ptr [ESI + 0x28]          ; 00490873
        ;   Label: LAB_00490873
    FSUB float ptr [EBX + 0x4]          ; 00490876
    FLD float ptr [EBX + 0xc]           ; 00490879
    FLD float ptr [EBX + 0x10]          ; 0049087c
    FSUB float ptr [EBX + 0x4]          ; 0049087f
    FXCH                                ; 00490882
    FSUB float ptr [EBX]                ; 00490884
    FXCH                                ; 00490886
    FDIVP ST2,ST0                       ; 00490888
    FMUL ST1                            ; 0049088a
    FADD float ptr [EBX]                ; 0049088c
    FSTP float ptr [ESP + 0xc]          ; 0049088e
    FLD float ptr [EBX + 0x14]          ; 00490892
    FSUB float ptr [EBX + 0x8]          ; 00490895
    FMULP                               ; 00490898
    FADD float ptr [EBX + 0x8]          ; 0049089a
    MOV EAX,0x1                         ; 0049089d
    FSTP float ptr [ESP + 0x18]         ; 004908a2
    JMP 0x00490767                      ; 004908a6
        ;   XREF to: 00490767 (UNCONDITIONAL_JUMP)  ; LAB_00490767
    PUSH EDI                            ; 004908ab
        ;   Label: LAB_004908ab
    PUSH EBP                            ; 004908ac
    PUSH ESI                            ; 004908ad
    CALL core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00490430 ; 004908ae
        ;   XREF to: 00490430 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00490430()
    ADD ESP,0xc                         ; 004908b3
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004908b6
    PUSH EBX                            ; 004908ba
    PUSH EBP                            ; 004908bb
    PUSH ESI                            ; 004908bc
    CALL core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00490430 ; 004908bd
        ;   XREF to: 00490430 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00490430()
    ADD ESP,0xc                         ; 004908c2
    ADD ESP,0x6c                        ; 004908c5
    POP EBP                             ; 004908c8
    POP EDI                             ; 004908c9
    POP ESI                             ; 004908ca
    POP EBX                             ; 004908cb
    RET                                 ; 004908cc

