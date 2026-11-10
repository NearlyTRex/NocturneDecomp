; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00504580(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_box.cpp_FUN_00420ee0
;   core_dirmat.cpp_FUN_0045f690
;   core_dirmat.cpp_FUN_0045f700
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504580
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00504580
    PUSH ESI                            ; 00504581
    PUSH EDI                            ; 00504582
    PUSH EBP                            ; 00504583
    MOV EBP,ESP                         ; 00504584
    SUB ESP,0x188                       ; 00504586
    AND ESP,0xfffffff8                  ; 0050458c
    MOV EBX,dword ptr [EBP + 0x20]      ; 0050458f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00504592
    ADD EAX,0x158                       ; 00504595
    PUSH EAX                            ; 0050459a
    LEA EDI,[ESP + 0x10]                ; 0050459b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0050459f
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 005045a4
    ADD ESP,0x4                         ; 005045a9
    LEA ESI,[EAX + 0x338]               ; 005045ac
    MOV EDX,0x3f8147ae                  ; 005045b2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005045b7
    MOV dword ptr [ESP + 0x17c],EDX     ; 005045ba
    ADD EAX,0xaa0                       ; 005045c1
    MOVSD.REP ES:EDI,ESI                ; 005045c6
    MOV dword ptr [ESP + 0x160],EAX     ; 005045c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005045cf
    XOR ECX,ECX                         ; 005045d2
    ADD EAX,0x5f0                       ; 005045d4
    MOV dword ptr [ESP + 0x16c],ECX     ; 005045d9
    MOV dword ptr [ESP + 0x170],EAX     ; 005045e0
    MOV EAX,dword ptr [ESP + 0x170]     ; 005045e7
        ;   Label: LAB_005045e7
    CMP dword ptr [EAX],0x0             ; 005045ee
    JNZ 0x005047db                      ; 005045f1
        ;   XREF to: 005047db (CONDITIONAL_JUMP)  ; LAB_005047db
    MOV EAX,dword ptr [ESP + 0x160]     ; 005045f7
        ;   Label: LAB_005045f7
    MOV EDX,dword ptr [ESP + 0x16c]     ; 005045fe
    XOR EDI,EDI                         ; 00504605
    ADD EAX,EDX                         ; 00504607
    MOV dword ptr [ESP + 0x180],EDI     ; 00504609
    MOV dword ptr [ESP + 0x178],EAX     ; 00504610
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00504617
        ;   Label: LAB_00504617
    PUSH ECX                            ; 0050461a
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050461b
    PUSH ESI                            ; 0050461e
    MOV ESI,dword ptr [ESP + 0x180]     ; 0050461f
    MOV EDI,dword ptr [ESP + 0x188]     ; 00504626
    ADD ESI,0x3c                        ; 0050462d
    ADD ESI,EDI                         ; 00504630
    PUSH ESI                            ; 00504632
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40 ; 00504633
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40()
    MOV dword ptr [ESP + 0x190],EAX     ; 00504638
    FLD float ptr [ESP + 0x190]         ; 0050463f
    ADD ESP,0xc                         ; 00504646
    FST float ptr [ESP]                 ; 00504649
    FLDZ                                ; 0050464c
    FCOMPP                              ; 0050464e
    FNSTSW AX                           ; 00504650
    SAHF                                ; 00504652
    JA 0x005046f0                       ; 00504653
        ;   XREF to: 005046f0 (CONDITIONAL_JUMP)  ; LAB_005046f0
    FLD float ptr [ESP]                 ; 00504659
    FCOMP float ptr [ESP + 0x17c]       ; 0050465c
    FNSTSW AX                           ; 00504663
    SAHF                                ; 00504665
    JNC 0x005046f0                      ; 00504666
        ;   XREF to: 005046f0 (CONDITIONAL_JUMP)  ; LAB_005046f0
    MOV EAX,dword ptr [ESP]             ; 0050466c
    MOV dword ptr [ESP + 0x17c],EAX     ; 0050466f
    LEA EAX,[ESI + 0x24]                ; 00504676
    LEA EDI,[ESP + 0x24]                ; 00504679
    FLD float ptr [EAX]                 ; 0050467d
    FLD float ptr [EAX + 0x4]           ; 0050467f
    FLD float ptr [EAX + 0x8]           ; 00504682
    LEA ESI,[ESP + 0x12c]               ; 00504685
    FXCH ST2                            ; 0050468c
    FCHS                                ; 0050468e
    FXCH                                ; 00504690
    FCHS                                ; 00504692
    FXCH ST2                            ; 00504694
    FCHS                                ; 00504696
    LEA EAX,[ESP + 0x24]                ; 00504698
    FXCH                                ; 0050469c
    FSTP float ptr [ESP + 0x12c]        ; 0050469e
    FXCH                                ; 005046a5
    FSTP float ptr [ESP + 0x130]        ; 005046a7
    FSTP float ptr [ESP + 0x134]        ; 005046ae
    PUSH EAX                            ; 005046b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005046b6
    MOVSD ES:EDI,ESI                    ; 005046b9
    MOVSD ES:EDI,ESI                    ; 005046ba
    MOVSD ES:EDI,ESI                    ; 005046bb
    PUSH EAX                            ; 005046bc
    LEA ESI,[ESP + 0x38]                ; 005046bd
    LEA EDI,[ESP + 0x50]                ; 005046c1
    CALL core_actor.cpp_FUN_00408ac0    ; 005046c5
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x38]                ; 005046ca
    ADD ESP,0x8                         ; 005046ce
    LEA EAX,[ESP + 0x48]                ; 005046d1
    MOVSD ES:EDI,ESI                    ; 005046d5
    MOVSD ES:EDI,ESI                    ; 005046d6
    MOVSD ES:EDI,ESI                    ; 005046d7
    CMP EBX,EAX                         ; 005046d8
    JZ 0x005046f0                       ; 005046da
        ;   XREF to: 005046f0 (CONDITIONAL_JUMP)  ; LAB_005046f0
    MOV EAX,dword ptr [ESP + 0x48]      ; 005046dc
    MOV dword ptr [EBX],EAX             ; 005046e0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005046e2
    MOV dword ptr [EBX + 0x4],EAX       ; 005046e6
    MOV EAX,dword ptr [ESP + 0x50]      ; 005046e9
    MOV dword ptr [EBX + 0x8],EAX       ; 005046ed
    MOV EDX,dword ptr [ESP + 0x180]     ; 005046f0
        ;   Label: LAB_005046f0
    ADD EDX,0x38                        ; 005046f7
    MOV dword ptr [ESP + 0x180],EDX     ; 005046fa
    CMP EDX,0x70                        ; 00504701
    JNZ 0x00504617                      ; 00504704
        ;   XREF to: 00504617 (CONDITIONAL_JUMP)  ; LAB_00504617
    MOV EDI,dword ptr [ESP + 0x16c]     ; 0050470a
    MOV ESI,dword ptr [ESP + 0x170]     ; 00504711
    ADD EDI,0xb8                        ; 00504718
    ADD ESI,0x64                        ; 0050471e
    MOV dword ptr [ESP + 0x16c],EDI     ; 00504721
    MOV dword ptr [ESP + 0x170],ESI     ; 00504728
    CMP EDI,0x8a0                       ; 0050472f
    JNZ 0x005045e7                      ; 00504735
        ;   XREF to: 005045e7 (CONDITIONAL_JUMP)  ; LAB_005045e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050473b
    ADD EAX,0x450                       ; 0050473e
    PUSH EAX                            ; 00504743
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00504744
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    LEA ESI,[EAX + 0x338]               ; 00504749
    ADD ESP,0x4                         ; 0050474f
    LEA EAX,[ESP + 0xc]                 ; 00504752
    MOV EDX,ESI                         ; 00504756
    CMP EAX,ESI                         ; 00504758
    JZ 0x00504770                       ; 0050475a
        ;   XREF to: 00504770 (CONDITIONAL_JUMP)  ; LAB_00504770
    MOV EAX,dword ptr [ESI]             ; 0050475c
    MOV dword ptr [ESP + 0xc],EAX       ; 0050475e
    MOV EAX,dword ptr [ESI + 0x4]       ; 00504762
    MOV dword ptr [ESP + 0x10],EAX      ; 00504765
    MOV EAX,dword ptr [ESI + 0x8]       ; 00504769
    MOV dword ptr [ESP + 0x14],EAX      ; 0050476c
    LEA EAX,[ESP + 0x18]                ; 00504770
        ;   Label: LAB_00504770
    LEA ESI,[EDX + 0xc]                 ; 00504774
    CMP EAX,ESI                         ; 00504777
    JNZ 0x00504963                      ; 00504779
        ;   XREF to: 00504963 (CONDITIONAL_JUMP)  ; LAB_00504963
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050477f
        ;   Label: LAB_0050477f
    ADD EAX,0x1340                      ; 00504782
    MOV dword ptr [ESP + 0x174],EAX     ; 00504787
    ADD EAX,0xc0                        ; 0050478e
    MOV dword ptr [ESP + 0x15c],EAX     ; 00504793
    MOV EAX,dword ptr [ESP + 0x174]     ; 0050479a
        ;   Label: LAB_0050479a
    FLD float ptr [EAX + 0x18]          ; 005047a1
    FLDZ                                ; 005047a4
    FCOMPP                              ; 005047a6
    FNSTSW AX                           ; 005047a8
    SAHF                                ; 005047aa
    JC 0x0050497c                       ; 005047ab
        ;   XREF to: 0050497c (CONDITIONAL_JUMP)  ; LAB_0050497c
    MOV EDX,dword ptr [ESP + 0x174]     ; 005047b1
        ;   Label: LAB_005047b1
    ADD EDX,0x60                        ; 005047b8
    MOV ECX,dword ptr [ESP + 0x15c]     ; 005047bb
    MOV dword ptr [ESP + 0x174],EDX     ; 005047c2
    CMP EDX,ECX                         ; 005047c9
    JNZ 0x0050479a                      ; 005047cb
        ;   XREF to: 0050479a (CONDITIONAL_JUMP)  ; LAB_0050479a
    MOV EAX,dword ptr [ESP + 0x17c]     ; 005047cd
    MOV ESP,EBP                         ; 005047d4
    POP EBP                             ; 005047d6
    POP EDI                             ; 005047d7
    POP ESI                             ; 005047d8
    POP EBX                             ; 005047d9
    RET                                 ; 005047da
    MOV EDX,dword ptr [EBP + 0x18]      ; 005047db
        ;   Label: LAB_005047db
    LEA EDI,[ESP + 0x114]               ; 005047de
    LEA ESI,[ESP + 0xb4]                ; 005047e5
    FLD float ptr [EDX]                 ; 005047ec
    FLD float ptr [EDX + 0x4]           ; 005047ee
    FLD float ptr [EDX + 0x8]           ; 005047f1
    FXCH ST2                            ; 005047f4
    FSUB float ptr [EAX + 0xc]          ; 005047f6
    FXCH                                ; 005047f9
    FSUB float ptr [EAX + 0x10]         ; 005047fb
    FXCH ST2                            ; 005047fe
    FSUB float ptr [EAX + 0x14]         ; 00504800
    FXCH                                ; 00504803
    FSTP float ptr [ESP + 0xb4]         ; 00504805
    FXCH                                ; 0050480c
    FSTP float ptr [ESP + 0xb8]         ; 0050480e
    LEA EAX,[ESP + 0x114]               ; 00504815
    FSTP float ptr [ESP + 0xbc]         ; 0050481c
    PUSH EAX                            ; 00504823
    MOV EAX,dword ptr [ESP + 0x174]     ; 00504824
    MOVSD ES:EDI,ESI                    ; 0050482b
    MOVSD ES:EDI,ESI                    ; 0050482c
    MOVSD ES:EDI,ESI                    ; 0050482d
    ADD EAX,0x24                        ; 0050482e
    LEA ESI,[ESP + 0x70]                ; 00504831
    PUSH EAX                            ; 00504835
    LEA EDI,[ESP + 0x44]                ; 00504836
    MOV dword ptr [ESP + 0x16c],EAX     ; 0050483a
    CALL core_dirmat.cpp_FUN_0045f700   ; 00504841
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    ADD ESP,0x8                         ; 00504846
    LEA ESI,[ESP + 0x6c]                ; 00504849
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0050484d
    MOV EDX,dword ptr [ESP + 0x164]     ; 00504850
    PUSH EAX                            ; 00504857
    MOVSD ES:EDI,ESI                    ; 00504858
    MOVSD ES:EDI,ESI                    ; 00504859
    MOVSD ES:EDI,ESI                    ; 0050485a
    PUSH EDX                            ; 0050485b
    LEA ESI,[ESP + 0xc8]                ; 0050485c
    CALL core_dirmat.cpp_FUN_0045f700   ; 00504863
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    ADD ESP,0x8                         ; 00504868
    LEA EAX,[ESP + 0xf0]                ; 0050486b
    PUSH EAX                            ; 00504872
    LEA EAX,[ESP + 0xe8]                ; 00504873
    PUSH EAX                            ; 0050487a
    LEA EAX,[ESP + 0x44]                ; 0050487b
    LEA EDI,[ESP + 0xec]                ; 0050487f
    PUSH EAX                            ; 00504886
    LEA EAX,[ESP + 0x18]                ; 00504887
    LEA ESI,[ESP + 0xcc]                ; 0050488b
    PUSH EAX                            ; 00504892
    MOVSD ES:EDI,ESI                    ; 00504893
    MOVSD ES:EDI,ESI                    ; 00504894
    MOVSD ES:EDI,ESI                    ; 00504895
    CALL core_box.cpp_FUN_00420ee0      ; 00504896
        ;   XREF to: 00420ee0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420ee0()
    MOV dword ptr [ESP + 0x194],EAX     ; 0050489b
    FLD float ptr [ESP + 0x194]         ; 005048a2
    ADD ESP,0x10                        ; 005048a9
    FST float ptr [ESP + 0x8]           ; 005048ac
    FLDZ                                ; 005048b0
    FCOMPP                              ; 005048b2
    FNSTSW AX                           ; 005048b4
    SAHF                                ; 005048b6
    JA 0x005045f7                       ; 005048b7
        ;   XREF to: 005045f7 (CONDITIONAL_JUMP)  ; LAB_005045f7
    FLD float ptr [ESP + 0x8]           ; 005048bd
    FCOMP float ptr [ESP + 0x17c]       ; 005048c1
    FNSTSW AX                           ; 005048c8
    SAHF                                ; 005048ca
    JNC 0x005045f7                      ; 005048cb
        ;   XREF to: 005045f7 (CONDITIONAL_JUMP)  ; LAB_005045f7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005048d1
    MOV dword ptr [ESP + 0x17c],EAX     ; 005048d5
    LEA EAX,[ESP + 0xf0]                ; 005048dc
    PUSH EAX                            ; 005048e3
    MOV ECX,dword ptr [ESP + 0x168]     ; 005048e4
    PUSH ECX                            ; 005048eb
    LEA ESI,[ESP + 0xe0]                ; 005048ec
    LEA EDI,[ESP + 0x5c]                ; 005048f3
    CALL core_dirmat.cpp_FUN_0045f690   ; 005048f7
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0xe0]                ; 005048fc
    ADD ESP,0x8                         ; 00504903
    LEA EAX,[ESP + 0x54]                ; 00504906
    MOVSD ES:EDI,ESI                    ; 0050490a
    MOVSD ES:EDI,ESI                    ; 0050490b
    MOVSD ES:EDI,ESI                    ; 0050490c
    PUSH EAX                            ; 0050490d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050490e
    PUSH ESI                            ; 00504911
    LEA ESI,[ESP + 0xa4]                ; 00504912
    LEA EDI,[ESP + 0xd4]                ; 00504919
    CALL core_actor.cpp_FUN_00408ac0    ; 00504920
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0xa4]                ; 00504925
    ADD ESP,0x8                         ; 0050492c
    LEA EAX,[ESP + 0xcc]                ; 0050492f
    MOVSD ES:EDI,ESI                    ; 00504936
    MOVSD ES:EDI,ESI                    ; 00504937
    MOVSD ES:EDI,ESI                    ; 00504938
    CMP EBX,EAX                         ; 00504939
    JZ 0x005045f7                       ; 0050493b
        ;   XREF to: 005045f7 (CONDITIONAL_JUMP)  ; LAB_005045f7
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00504941
    MOV dword ptr [EBX],EAX             ; 00504948
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0050494a
    MOV dword ptr [EBX + 0x4],EAX       ; 00504951
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00504954
    MOV dword ptr [EBX + 0x8],EAX       ; 0050495b
    JMP 0x005045f7                      ; 0050495e
        ;   XREF to: 005045f7 (UNCONDITIONAL_JUMP)  ; LAB_005045f7
    MOV EAX,dword ptr [ESI]             ; 00504963
        ;   Label: LAB_00504963
    MOV dword ptr [ESP + 0x18],EAX      ; 00504965
    MOV EAX,dword ptr [ESI + 0x4]       ; 00504969
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050496c
    MOV EAX,dword ptr [ESI + 0x8]       ; 00504970
    MOV dword ptr [ESP + 0x20],EAX      ; 00504973
    JMP 0x0050477f                      ; 00504977
        ;   XREF to: 0050477f (UNCONDITIONAL_JUMP)  ; LAB_0050477f
    MOV EAX,dword ptr [ESP + 0x174]     ; 0050497c
        ;   Label: LAB_0050497c
    MOV EDX,dword ptr [EBP + 0x18]      ; 00504983
    LEA EDI,[ESP + 0x138]               ; 00504986
    LEA ESI,[ESP + 0x84]                ; 0050498d
    FLD float ptr [EDX]                 ; 00504994
    FLD float ptr [EDX + 0x4]           ; 00504996
    FLD float ptr [EDX + 0x8]           ; 00504999
    FXCH ST2                            ; 0050499c
    FSUB float ptr [EAX + 0x1c]         ; 0050499e
    FXCH                                ; 005049a1
    FSUB float ptr [EAX + 0x20]         ; 005049a3
    FXCH ST2                            ; 005049a6
    FSUB float ptr [EAX + 0x24]         ; 005049a8
    FXCH                                ; 005049ab
    FSTP float ptr [ESP + 0x84]         ; 005049ad
    FXCH                                ; 005049b4
    FSTP float ptr [ESP + 0x88]         ; 005049b6
    LEA EAX,[ESP + 0x138]               ; 005049bd
    FSTP float ptr [ESP + 0x8c]         ; 005049c4
    PUSH EAX                            ; 005049cb
    MOV EAX,dword ptr [ESP + 0x178]     ; 005049cc
    MOVSD ES:EDI,ESI                    ; 005049d3
    MOVSD ES:EDI,ESI                    ; 005049d4
    MOVSD ES:EDI,ESI                    ; 005049d5
    ADD EAX,0x34                        ; 005049d6
    LEA ESI,[ESP + 0x124]               ; 005049d9
    PUSH EAX                            ; 005049e0
    LEA EDI,[ESP + 0x158]               ; 005049e1
    MOV dword ptr [ESP + 0x170],EAX     ; 005049e8
    CALL core_dirmat.cpp_FUN_0045f700   ; 005049ef
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    ADD ESP,0x8                         ; 005049f4
    LEA ESI,[ESP + 0x120]               ; 005049f7
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005049fe
    MOVSD ES:EDI,ESI                    ; 00504a01
    MOVSD ES:EDI,ESI                    ; 00504a02
    MOVSD ES:EDI,ESI                    ; 00504a03
    PUSH ECX                            ; 00504a04
    MOV ESI,dword ptr [ESP + 0x16c]     ; 00504a05
    PUSH ESI                            ; 00504a0c
    LEA ESI,[ESP + 0x98]                ; 00504a0d
    CALL core_dirmat.cpp_FUN_0045f700   ; 00504a14
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    ADD ESP,0x8                         ; 00504a19
    LEA EAX,[ESP + 0x60]                ; 00504a1c
    PUSH EAX                            ; 00504a20
    LEA EAX,[ESP + 0x148]               ; 00504a21
    PUSH EAX                            ; 00504a28
    LEA EAX,[ESP + 0x158]               ; 00504a29
    LEA EDI,[ESP + 0x14c]               ; 00504a30
    PUSH EAX                            ; 00504a37
    LEA EAX,[ESP + 0x18]                ; 00504a38
    LEA ESI,[ESP + 0x9c]                ; 00504a3c
    PUSH EAX                            ; 00504a43
    MOVSD ES:EDI,ESI                    ; 00504a44
    MOVSD ES:EDI,ESI                    ; 00504a45
    MOVSD ES:EDI,ESI                    ; 00504a46
    CALL core_box.cpp_FUN_00420ee0      ; 00504a47
        ;   XREF to: 00420ee0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420ee0()
    MOV dword ptr [ESP + 0x194],EAX     ; 00504a4c
    FLD float ptr [ESP + 0x194]         ; 00504a53
    ADD ESP,0x10                        ; 00504a5a
    FST float ptr [ESP + 0x4]           ; 00504a5d
    FLDZ                                ; 00504a61
    FCOMPP                              ; 00504a63
    FNSTSW AX                           ; 00504a65
    SAHF                                ; 00504a67
    JA 0x005047b1                       ; 00504a68
        ;   XREF to: 005047b1 (CONDITIONAL_JUMP)  ; LAB_005047b1
    FLD float ptr [ESP + 0x4]           ; 00504a6e
    FCOMP float ptr [ESP + 0x17c]       ; 00504a72
    FNSTSW AX                           ; 00504a79
    SAHF                                ; 00504a7b
    JNC 0x005047b1                      ; 00504a7c
        ;   XREF to: 005047b1 (CONDITIONAL_JUMP)  ; LAB_005047b1
    MOV EAX,dword ptr [ESP + 0x4]       ; 00504a82
    MOV dword ptr [ESP + 0x17c],EAX     ; 00504a86
    LEA EAX,[ESP + 0x60]                ; 00504a8d
    PUSH EAX                            ; 00504a91
    MOV EDI,dword ptr [ESP + 0x16c]     ; 00504a92
    PUSH EDI                            ; 00504a99
    LEA ESI,[ESP + 0xb0]                ; 00504a9a
    CALL core_dirmat.cpp_FUN_0045f690   ; 00504aa1
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA EDI,[ESP + 0x110]               ; 00504aa6
    ADD ESP,0x8                         ; 00504aad
    LEA EAX,[ESP + 0x108]               ; 00504ab0
    LEA ESI,[ESP + 0xa8]                ; 00504ab7
    PUSH EAX                            ; 00504abe
    MOV EAX,dword ptr [EBP + 0x14]      ; 00504abf
    MOVSD ES:EDI,ESI                    ; 00504ac2
    MOVSD ES:EDI,ESI                    ; 00504ac3
    MOVSD ES:EDI,ESI                    ; 00504ac4
    PUSH EAX                            ; 00504ac5
    LEA ESI,[ESP + 0x104]               ; 00504ac6
    LEA EDI,[ESP + 0x80]                ; 00504acd
    CALL core_actor.cpp_FUN_00408ac0    ; 00504ad4
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x104]               ; 00504ad9
    ADD ESP,0x8                         ; 00504ae0
    LEA EAX,[ESP + 0x78]                ; 00504ae3
    MOVSD ES:EDI,ESI                    ; 00504ae7
    MOVSD ES:EDI,ESI                    ; 00504ae8
    MOVSD ES:EDI,ESI                    ; 00504ae9
    CMP EBX,EAX                         ; 00504aea
    JZ 0x005047b1                       ; 00504aec
        ;   XREF to: 005047b1 (CONDITIONAL_JUMP)  ; LAB_005047b1
    MOV EAX,dword ptr [ESP + 0x78]      ; 00504af2
    MOV dword ptr [EBX],EAX             ; 00504af6
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00504af8
    MOV dword ptr [EBX + 0x4],EAX       ; 00504afc
    MOV EAX,dword ptr [ESP + 0x80]      ; 00504aff
    MOV dword ptr [EBX + 0x8],EAX       ; 00504b06
    JMP 0x005047b1                      ; 00504b09
        ;   XREF to: 005047b1 (UNCONDITIONAL_JUMP)  ; LAB_005047b1

