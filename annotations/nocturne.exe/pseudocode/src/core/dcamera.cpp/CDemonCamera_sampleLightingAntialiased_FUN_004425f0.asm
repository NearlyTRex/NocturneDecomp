; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0(undefined4 param_1,int *param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
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
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50 at 00442c72
;
; Referenced Globals:
;   undefined4 DAT_0057b813
;   undefined4 DAT_01410280
;   undefined4 DAT_01410282
;   undefined4 DAT_01410284
;   undefined4 DAT_01410286
;   undefined4 DAT_01410288
;   undefined4 DAT_02de5d80
;   undefined4 DAT_02de5d84
;   undefined4 DAT_02de5d88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004425f0
        ;   Label: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0
    PUSH ESI                            ; 004425f1
    PUSH EDI                            ; 004425f2
    PUSH EBP                            ; 004425f3
    MOV EBP,ESP                         ; 004425f4
    SUB ESP,0x28                        ; 004425f6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004425f9
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004425fc
    CMP dword ptr [ESI + 0x1cd0],0x0    ; 004425ff
    JNZ 0x004427eb                      ; 00442606
        ;   XREF to: 004427eb (CONDITIONAL_JUMP)  ; LAB_004427eb
    MOV EBX,dword ptr [EAX]             ; 0044260c
    MOV EDI,dword ptr [ESI + 0x16c]     ; 0044260e
    MOV EDX,dword ptr [ESI + 0x170]     ; 00442614
    SUB EBX,EDI                         ; 0044261a
    MOV ECX,dword ptr [ESI + 0x174]     ; 0044261c
    MOV dword ptr [EBP + -0x28],EBX     ; 00442622
    MOV EBX,dword ptr [EAX + 0x4]       ; 00442625
    MOV EAX,dword ptr [EAX + 0x8]       ; 00442628
    SUB EBX,EDX                         ; 0044262b
    SUB EAX,ECX                         ; 0044262d
    MOV EDX,dword ptr [EBP + -0x28]     ; 0044262f
    MOV dword ptr [EBP + -0x20],EAX     ; 00442632
    MOV EAX,dword ptr [ESI + 0x180]     ; 00442635
    MOV dword ptr [EBP + -0x24],EBX     ; 0044263b
    IMUL EDX                            ; 0044263e
    SHRD EAX,EDX,0x10                   ; 00442640
    MOV EDX,dword ptr [EBP + -0x24]     ; 00442644
    MOV EBX,EAX                         ; 00442647
    MOV EAX,dword ptr [ESI + 0x18c]     ; 00442649
    IMUL EDX                            ; 0044264f
    SHRD EAX,EDX,0x10                   ; 00442651
    MOV EDX,dword ptr [EBP + -0x20]     ; 00442655
    ADD EBX,EAX                         ; 00442658
    MOV EAX,dword ptr [ESI + 0x198]     ; 0044265a
    IMUL EDX                            ; 00442660
    SHRD EAX,EDX,0x10                   ; 00442662
    ADD EBX,EAX                         ; 00442666
    MOV dword ptr [0x02de5d88],EBX      ; 00442668 | DAT_02de5d88
    TEST EBX,EBX                        ; 0044266e
    JLE 0x004426b5                      ; 00442670
        ;   XREF to: 004426b5 (CONDITIONAL_JUMP)  ; LAB_004426b5
    MOV EDX,dword ptr [EBP + -0x28]     ; 00442672
    MOV EAX,dword ptr [ESI + 0x178]     ; 00442675
    IMUL EDX                            ; 0044267b
    SHRD EAX,EDX,0x10                   ; 0044267d
    MOV EDX,dword ptr [EBP + -0x24]     ; 00442681
    MOV EBX,EAX                         ; 00442684
    MOV EAX,dword ptr [ESI + 0x184]     ; 00442686
    IMUL EDX                            ; 0044268c
    SHRD EAX,EDX,0x10                   ; 0044268e
    MOV EDX,dword ptr [EBP + -0x20]     ; 00442692
    ADD EBX,EAX                         ; 00442695
    MOV EAX,dword ptr [ESI + 0x190]     ; 00442697
    IMUL EDX                            ; 0044269d
    SHRD EAX,EDX,0x10                   ; 0044269f
    ADD EBX,EAX                         ; 004426a3
    MOV EDI,dword ptr [0x02de5d88]      ; 004426a5 | DAT_02de5d88
    MOV dword ptr [0x02de5d80],EBX      ; 004426ab | DAT_02de5d80
    CMP EBX,EDI                         ; 004426b1
    JL 0x0044270f                       ; 004426b3
        ;   XREF to: 0044270f (CONDITIONAL_JUMP)  ; LAB_0044270f
    MOV EAX,0x1410280                   ; 004426b5
        ;   Label: LAB_004426b5
    CMP dword ptr [EAX + 0x8],0x0       ; 004426ba | DAT_01410288 | DAT_02de5d88
        ;   Label: LAB_004426ba
    JLE 0x00442706                      ; 004426be
        ;   XREF to: 00442706 (CONDITIONAL_JUMP)  ; LAB_00442706
    MOV EDX,dword ptr [EAX + 0x4]       ; 004426c0 | DAT_01410284 | DAT_02de5d84
    MOV EBX,dword ptr [ESI + 0x1cc0]    ; 004426c3
    SAR EDX,0x10                        ; 004426c9
    IMUL EBX,EDX                        ; 004426cc
    MOV EDX,dword ptr [EAX]             ; 004426cf | DAT_01410280 | DAT_02de5d80
    SAR EDX,0x10                        ; 004426d1
    ADD EDX,EBX                         ; 004426d4
    MOV EBX,dword ptr [ESI + 0x2f94]    ; 004426d6
    MOV DX,word ptr [EBX + EDX*0x2]     ; 004426dc
    AND EDX,0xffff                      ; 004426e0
    JZ 0x00442706                       ; 004426e6
        ;   XREF to: 00442706 (CONDITIONAL_JUMP)  ; LAB_00442706
    FILD dword ptr [EAX + 0x8]          ; 004426e8 | DAT_01410288 | DAT_02de5d88
    FMUL double ptr [0x0057b813]        ; 004426eb | DAT_0057b813
    FSTP float ptr [EBP + -0x10]        ; 004426f1
    FLD float ptr [EBP + -0x10]         ; 004426f4
    FCOMP float ptr [ESI + 0x100]       ; 004426f7
    FNSTSW AX                           ; 004426fd
    SAHF                                ; 004426ff
    JC 0x004427b4                       ; 00442700
        ;   XREF to: 004427b4 (CONDITIONAL_JUMP)  ; LAB_004427b4
    XOR EAX,EAX                         ; 00442706
        ;   Label: LAB_00442706
    MOV ESP,EBP                         ; 00442708
    POP EBP                             ; 0044270a
    POP EDI                             ; 0044270b
    POP ESI                             ; 0044270c
    POP EBX                             ; 0044270d
    RET                                 ; 0044270e
    MOV EAX,EDI                         ; 0044270f
        ;   Label: LAB_0044270f
    NEG EAX                             ; 00442711
    CMP EAX,EBX                         ; 00442713
    JGE 0x004426b5                      ; 00442715
        ;   XREF to: 004426b5 (CONDITIONAL_JUMP)  ; LAB_004426b5
    MOV EDX,dword ptr [EBP + -0x28]     ; 00442717
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0044271a
    IMUL EDX                            ; 00442720
    SHRD EAX,EDX,0x10                   ; 00442722
    MOV EDX,dword ptr [EBP + -0x24]     ; 00442726
    MOV EBX,EAX                         ; 00442729
    MOV EAX,dword ptr [ESI + 0x188]     ; 0044272b
    IMUL EDX                            ; 00442731
    SHRD EAX,EDX,0x10                   ; 00442733
    MOV EDX,dword ptr [EBP + -0x20]     ; 00442737
    ADD EBX,EAX                         ; 0044273a
    MOV EAX,dword ptr [ESI + 0x194]     ; 0044273c
    IMUL EDX                            ; 00442742
    SHRD EAX,EDX,0x10                   ; 00442744
    ADD EBX,EAX                         ; 00442748
    MOV ECX,dword ptr [0x02de5d88]      ; 0044274a | DAT_02de5d88
    MOV dword ptr [0x02de5d84],EBX      ; 00442750 | DAT_02de5d84
    CMP EBX,ECX                         ; 00442756
    JGE 0x004426b5                      ; 00442758
        ;   XREF to: 004426b5 (CONDITIONAL_JUMP)  ; LAB_004426b5
    MOV EAX,ECX                         ; 0044275e
    NEG EAX                             ; 00442760
    CMP EAX,EBX                         ; 00442762
    JGE 0x004426b5                      ; 00442764
        ;   XREF to: 004426b5 (CONDITIONAL_JUMP)  ; LAB_004426b5
    MOV EAX,[0x02de5d80]                ; 0044276a | DAT_02de5d80
    MOV EBX,ECX                         ; 0044276f
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 00442771
    IMUL EDX                            ; 00442777
    IDIV EBX                            ; 00442779
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0044277b
    ADD EAX,EDX                         ; 00442781
    MOV EBX,dword ptr [0x02de5d88]      ; 00442783 | DAT_02de5d88
    MOV [0x02de5d80],EAX                ; 00442789 | DAT_02de5d80
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0044278e
    MOV EAX,[0x02de5d84]                ; 00442794 | DAT_02de5d84
    IMUL EDX                            ; 00442799
    IDIV EBX                            ; 0044279b
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0044279d
    ADD EAX,EDX                         ; 004427a3
    MOV [0x02de5d84],EAX                ; 004427a5 | DAT_02de5d84
    MOV EAX,0x2de5d80                   ; 004427aa
    JMP 0x004426ba                      ; 004427af
        ;   XREF to: 004426ba (UNCONDITIONAL_JUMP)  ; LAB_004426ba
    FLD float ptr [ESI + 0x100]         ; 004427b4
        ;   Label: LAB_004427b4
    FSUB float ptr [EBP + -0x10]        ; 004427ba
    FDIV float ptr [ESI + 0x100]        ; 004427bd
    FSTP float ptr [EBP + -0x10]        ; 004427c3
    MOV EAX,dword ptr [EBP + 0x20]      ; 004427c6
    MOV dword ptr [EBP + -0x4],EAX      ; 004427c9
    FILD dword ptr [EBP + -0x4]         ; 004427cc
    FMUL float ptr [EBP + -0x10]        ; 004427cf
    FSTP float ptr [EBP + -0x10]        ; 004427d2
    FLD float ptr [EBP + 0xfffffff0]    ; 004427d5
    FISTP dword ptr [EBP + 0x20]        ; 004427db
    MOV EAX,dword ptr [EBP + 0x20]      ; 004427e1
    MOV ESP,EBP                         ; 004427e4
    POP EBP                             ; 004427e6
    POP EDI                             ; 004427e7
    POP ESI                             ; 004427e8
    POP EBX                             ; 004427e9
    RET                                 ; 004427ea
    MOV EBX,dword ptr [EAX]             ; 004427eb
        ;   Label: LAB_004427eb
    MOV ECX,dword ptr [ESI + 0x16c]     ; 004427ed
    MOV EDI,dword ptr [ESI + 0x170]     ; 004427f3
    SUB EBX,ECX                         ; 004427f9
    MOV EDX,dword ptr [ESI + 0x174]     ; 004427fb
    MOV dword ptr [EBP + -0x1c],EBX     ; 00442801
    MOV EBX,dword ptr [EAX + 0x4]       ; 00442804
    MOV EAX,dword ptr [EAX + 0x8]       ; 00442807
    SUB EBX,EDI                         ; 0044280a
    SUB EAX,EDX                         ; 0044280c
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0044280e
    MOV dword ptr [EBP + -0x14],EAX     ; 00442811
    MOV EAX,dword ptr [ESI + 0x180]     ; 00442814
    MOV dword ptr [EBP + -0x18],EBX     ; 0044281a
    IMUL EDX                            ; 0044281d
    SHRD EAX,EDX,0x10                   ; 0044281f
    MOV EDX,dword ptr [EBP + -0x18]     ; 00442823
    MOV EBX,EAX                         ; 00442826
    MOV EAX,dword ptr [ESI + 0x18c]     ; 00442828
    IMUL EDX                            ; 0044282e
    SHRD EAX,EDX,0x10                   ; 00442830
    MOV EDX,dword ptr [EBP + -0x14]     ; 00442834
    ADD EBX,EAX                         ; 00442837
    MOV EAX,dword ptr [ESI + 0x198]     ; 00442839
    IMUL EDX                            ; 0044283f
    SHRD EAX,EDX,0x10                   ; 00442841
    ADD EBX,EAX                         ; 00442845
    MOV dword ptr [0x02de5d88],EBX      ; 00442847 | DAT_02de5d88
    TEST EBX,EBX                        ; 0044284d
    JLE 0x0044289a                      ; 0044284f
        ;   XREF to: 0044289a (CONDITIONAL_JUMP)  ; LAB_0044289a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00442851
    MOV EAX,dword ptr [ESI + 0x178]     ; 00442854
    IMUL EDX                            ; 0044285a
    SHRD EAX,EDX,0x10                   ; 0044285c
    MOV EDX,dword ptr [EBP + -0x18]     ; 00442860
    MOV EBX,EAX                         ; 00442863
    MOV EAX,dword ptr [ESI + 0x184]     ; 00442865
    IMUL EDX                            ; 0044286b
    SHRD EAX,EDX,0x10                   ; 0044286d
    MOV EDX,dword ptr [EBP + -0x14]     ; 00442871
    ADD EBX,EAX                         ; 00442874
    MOV EAX,dword ptr [ESI + 0x190]     ; 00442876
    IMUL EDX                            ; 0044287c
    SHRD EAX,EDX,0x10                   ; 0044287e
    ADD EBX,EAX                         ; 00442882
    MOV dword ptr [0x02de5d80],EBX      ; 00442884 | DAT_02de5d80
    MOV EAX,EBX                         ; 0044288a
    MOV EBX,dword ptr [0x02de5d88]      ; 0044288c | DAT_02de5d88
    CMP EAX,EBX                         ; 00442892
    JL 0x00442b4c                       ; 00442894
        ;   XREF to: 00442b4c (CONDITIONAL_JUMP)  ; LAB_00442b4c
    MOV EAX,0x1410280                   ; 0044289a
        ;   Label: LAB_0044289a
    MOV EDI,dword ptr [EAX + 0x8]       ; 0044289f | DAT_01410288 | DAT_02de5d88
        ;   Label: LAB_0044289f
    MOV EBX,EAX                         ; 004428a2
    TEST EDI,EDI                        ; 004428a4
    JLE 0x00442706                      ; 004428a6
        ;   XREF to: 00442706 (CONDITIONAL_JUMP)  ; LAB_00442706
    MOV dword ptr [EBP + -0x8],0x1      ; 004428ac
    MOV EDX,dword ptr [EAX + 0x4]       ; 004428b3 | DAT_01410284 | DAT_02de5d84
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 004428b6
    SAR EDX,0x10                        ; 004428bc
    IMUL ECX,EDX                        ; 004428bf
    MOV EDX,dword ptr [EAX]             ; 004428c2 | DAT_01410280 | DAT_02de5d80
    SAR EDX,0x10                        ; 004428c4
    ADD EDX,ECX                         ; 004428c7
    MOV ECX,dword ptr [ESI + 0x2f94]    ; 004428c9
    ADD EDX,EDX                         ; 004428cf
    ADD EDX,ECX                         ; 004428d1
    XOR EDI,EDI                         ; 004428d3
    MOV DX,word ptr [EDX]               ; 004428d5
    AND EDX,0xffff                      ; 004428d8
    MOV ECX,dword ptr [EAX + 0x8]       ; 004428de | DAT_01410288
    ADD EDX,0x90                        ; 004428e1
    CMP EDX,ECX                         ; 004428e7
    JG 0x00442bfb                       ; 004428e9
        ;   XREF to: 00442bfb (CONDITIONAL_JUMP)  ; LAB_00442bfb
    INC word ptr [EBX + 0x2]            ; 004428ef | DAT_01410282
        ;   Label: LAB_004428ef
    MOV EAX,dword ptr [EBX]             ; 004428f3 | DAT_01410280
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 004428f5
    SAR EAX,0x10                        ; 004428fb
    CMP EAX,EDX                         ; 004428fe
    JGE 0x0044297a                      ; 00442900
        ;   XREF to: 0044297a (CONDITIONAL_JUMP)  ; LAB_0044297a
    MOV EDX,dword ptr [EBX + 0x4]       ; 00442902 | DAT_01410284
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 00442905
    SAR EDX,0x10                        ; 0044290b
    IMUL EDX,ECX                        ; 0044290e
    ADD EAX,EDX                         ; 00442911
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 00442913
    MOV AX,word ptr [EDX + EAX*0x2]     ; 00442919
    AND EAX,0xffff                      ; 0044291d
    MOV EDX,dword ptr [EBX + 0x8]       ; 00442922 | DAT_01410288
    ADD EAX,0x90                        ; 00442925
    CMP EAX,EDX                         ; 0044292a
    JLE 0x00442977                      ; 0044292c
        ;   XREF to: 00442977 (CONDITIONAL_JUMP)  ; LAB_00442977
    MOV EAX,dword ptr [EBX]             ; 0044292e | DAT_01410280
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 00442930
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 00442936
    SAR EAX,CL                          ; 0044293c
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044293e
    AND EDX,EAX                         ; 00442944
    MOV EAX,dword ptr [EBX + 0x4]       ; 00442946 | DAT_01410284
    SAR EAX,CL                          ; 00442949
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0044294b
    MOV CL,byte ptr [ESI + 0x1c60]      ; 00442951
    SHL EAX,CL                          ; 00442957
    ADD EDX,EAX                         ; 00442959
    MOV EAX,dword ptr [ESI + 0x1c54]    ; 0044295b
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 00442961
    AND EAX,0xff                        ; 00442964
    SHL EAX,0xa                         ; 00442969
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044296c
    IMUL EDX                            ; 0044296f
    SHRD EAX,EDX,0x10                   ; 00442971
    ADD EDI,EAX                         ; 00442975
    INC dword ptr [EBP + -0x8]          ; 00442977
        ;   Label: LAB_00442977
    MOV EDX,dword ptr [EBX]             ; 0044297a | DAT_01410280
        ;   Label: LAB_0044297a
    SUB EDX,0x20000                     ; 0044297c
    MOV EAX,EDX                         ; 00442982
    SAR EAX,0x10                        ; 00442984
    MOV dword ptr [EBX],EDX             ; 00442987 | DAT_01410280
    TEST EAX,EAX                        ; 00442989
    JLE 0x00442a0c                      ; 0044298b
        ;   XREF to: 00442a0c (CONDITIONAL_JUMP)  ; LAB_00442a0c
    MOV EDX,dword ptr [EBX + 0x4]       ; 00442991 | DAT_01410284
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 00442994
    SAR EDX,0x10                        ; 0044299a
    IMUL EDX,ECX                        ; 0044299d
    ADD EAX,EDX                         ; 004429a0
    LEA EDX,[EAX + EAX*0x1]             ; 004429a2
    MOV EAX,dword ptr [ESI + 0x2f94]    ; 004429a5
    MOV AX,word ptr [EDX + EAX*0x1]     ; 004429ab
    AND EAX,0xffff                      ; 004429af
    MOV EDX,dword ptr [EBX + 0x8]       ; 004429b4 | DAT_01410288
    ADD EAX,0x90                        ; 004429b7
    CMP EAX,EDX                         ; 004429bc
    JLE 0x00442a09                      ; 004429be
        ;   XREF to: 00442a09 (CONDITIONAL_JUMP)  ; LAB_00442a09
    MOV EAX,dword ptr [EBX]             ; 004429c0 | DAT_01410280
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 004429c2
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 004429c8
    SAR EAX,CL                          ; 004429ce
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 004429d0
    AND EDX,EAX                         ; 004429d6
    MOV EAX,dword ptr [EBX + 0x4]       ; 004429d8 | DAT_01410284
    SAR EAX,CL                          ; 004429db
    AND EAX,dword ptr [ESI + 0x1c68]    ; 004429dd
    MOV CL,byte ptr [ESI + 0x1c60]      ; 004429e3
    SHL EAX,CL                          ; 004429e9
    ADD EAX,EDX                         ; 004429eb
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 004429ed
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 004429f3
    AND EAX,0xff                        ; 004429f6
    SHL EAX,0xa                         ; 004429fb
    MOV EDX,dword ptr [EBP + 0x20]      ; 004429fe
    IMUL EDX                            ; 00442a01
    SHRD EAX,EDX,0x10                   ; 00442a03
    ADD EDI,EAX                         ; 00442a07
    INC dword ptr [EBP + -0x8]          ; 00442a09
        ;   Label: LAB_00442a09
    MOV AX,word ptr [EBX + 0x6]         ; 00442a0c | DAT_01410286
        ;   Label: LAB_00442a0c
    MOV CX,word ptr [EBX + 0x2]         ; 00442a10 | DAT_01410282
    INC EAX                             ; 00442a14
    INC ECX                             ; 00442a15
    MOV word ptr [EBX + 0x6],AX         ; 00442a16 | DAT_01410286
    MOV word ptr [EBX + 0x2],CX         ; 00442a1a | DAT_01410282
    MOV EAX,dword ptr [EBX + 0x4]       ; 00442a1e | DAT_01410284
    MOV EDX,dword ptr [ESI + 0x1cc4]    ; 00442a21
    SAR EAX,0x10                        ; 00442a27
    CMP EAX,EDX                         ; 00442a2a
    JGE 0x00442ab1                      ; 00442a2c
        ;   XREF to: 00442ab1 (CONDITIONAL_JUMP)  ; LAB_00442ab1
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 00442a32
    IMUL EDX,EAX                        ; 00442a38
    MOV EAX,dword ptr [EBX]             ; 00442a3b | DAT_01410280
    SAR EAX,0x10                        ; 00442a3d
    ADD EAX,EDX                         ; 00442a40
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 00442a42
    MOV AX,word ptr [EDX + EAX*0x2]     ; 00442a48
    AND EAX,0xffff                      ; 00442a4c
    MOV ECX,dword ptr [EBX + 0x8]       ; 00442a51 | DAT_01410288
    ADD EAX,0x90                        ; 00442a54
    CMP EAX,ECX                         ; 00442a59
    JLE 0x00442aae                      ; 00442a5b
        ;   XREF to: 00442aae (CONDITIONAL_JUMP)  ; LAB_00442aae
    MOV EAX,dword ptr [EBX]             ; 00442a5d | DAT_01410280
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 00442a5f
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 00442a65
    SAR EAX,CL                          ; 00442a6b
    AND EDX,EAX                         ; 00442a6d
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 00442a6f
    MOV dword ptr [EBP + -0xc],EDX      ; 00442a75
    MOV EAX,dword ptr [EBX + 0x4]       ; 00442a78 | DAT_01410284
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 00442a7b
    SAR EAX,CL                          ; 00442a81
    MOV CL,byte ptr [ESI + 0x1c60]      ; 00442a83
    AND EAX,EDX                         ; 00442a89
    SHL EAX,CL                          ; 00442a8b
    MOV ECX,dword ptr [EBP + -0xc]      ; 00442a8d
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 00442a90
    ADD EAX,ECX                         ; 00442a96
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 00442a98
    AND EAX,0xff                        ; 00442a9b
    SHL EAX,0xa                         ; 00442aa0
    MOV EDX,dword ptr [EBP + 0x20]      ; 00442aa3
    IMUL EDX                            ; 00442aa6
    SHRD EAX,EDX,0x10                   ; 00442aa8
    ADD EDI,EAX                         ; 00442aac
    INC dword ptr [EBP + -0x8]          ; 00442aae
        ;   Label: LAB_00442aae
    MOV EDX,dword ptr [EBX + 0x4]       ; 00442ab1 | DAT_01410284
        ;   Label: LAB_00442ab1
    SUB EDX,0x20000                     ; 00442ab4
    MOV dword ptr [EBX + 0x4],EDX       ; 00442aba | DAT_01410284
    TEST EDX,EDX                        ; 00442abd
    JLE 0x00442b39                      ; 00442abf
        ;   XREF to: 00442b39 (CONDITIONAL_JUMP)  ; LAB_00442b39
    SAR EDX,0x10                        ; 00442ac1
    IMUL EDX,dword ptr [ESI + 0x1cc0]   ; 00442ac4
    MOV EAX,dword ptr [EBX]             ; 00442acb | DAT_01410280
    SAR EAX,0x10                        ; 00442acd
    ADD EAX,EDX                         ; 00442ad0
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 00442ad2
    MOV AX,word ptr [EDX + EAX*0x2]     ; 00442ad8
    AND EAX,0xffff                      ; 00442adc
    MOV EDX,dword ptr [EBX + 0x8]       ; 00442ae1 | DAT_01410288
    ADD EAX,0x90                        ; 00442ae4
    CMP EAX,EDX                         ; 00442ae9
    JLE 0x00442b36                      ; 00442aeb
        ;   XREF to: 00442b36 (CONDITIONAL_JUMP)  ; LAB_00442b36
    MOV EAX,dword ptr [EBX]             ; 00442aed | DAT_01410280
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 00442aef
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 00442af5
    SAR EAX,CL                          ; 00442afb
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 00442afd
    AND EDX,EAX                         ; 00442b03
    MOV EAX,dword ptr [EBX + 0x4]       ; 00442b05 | DAT_01410284
    SAR EAX,CL                          ; 00442b08
    AND EAX,dword ptr [ESI + 0x1c68]    ; 00442b0a
    MOV CL,byte ptr [ESI + 0x1c60]      ; 00442b10
    SHL EAX,CL                          ; 00442b16
    ADD EDX,EAX                         ; 00442b18
    MOV EAX,dword ptr [ESI + 0x1c54]    ; 00442b1a
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 00442b20
    AND EAX,0xff                        ; 00442b23
    SHL EAX,0xa                         ; 00442b28
    MOV EDX,dword ptr [EBP + 0x20]      ; 00442b2b
    IMUL EDX                            ; 00442b2e
    SHRD EAX,EDX,0x10                   ; 00442b30
    ADD EDI,EAX                         ; 00442b34
    INC dword ptr [EBP + -0x8]          ; 00442b36
        ;   Label: LAB_00442b36
    MOV ESI,dword ptr [EBP + -0x8]      ; 00442b39
        ;   Label: LAB_00442b39
    MOV EDX,EDI                         ; 00442b3c
    MOV EAX,EDI                         ; 00442b3e
    SAR EDX,0x1f                        ; 00442b40
    IDIV ESI                            ; 00442b43
    MOV ESP,EBP                         ; 00442b45
    POP EBP                             ; 00442b47
    POP EDI                             ; 00442b48
    POP ESI                             ; 00442b49
    POP EBX                             ; 00442b4a
    RET                                 ; 00442b4b
    MOV EAX,EBX                         ; 00442b4c
        ;   Label: LAB_00442b4c
    MOV EDI,dword ptr [0x02de5d80]      ; 00442b4e | DAT_02de5d80
    NEG EAX                             ; 00442b54
    CMP EAX,EDI                         ; 00442b56
    JGE 0x0044289a                      ; 00442b58
        ;   XREF to: 0044289a (CONDITIONAL_JUMP)  ; LAB_0044289a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00442b5e
    MOV EAX,dword ptr [ESI + 0x17c]     ; 00442b61
    IMUL EDX                            ; 00442b67
    SHRD EAX,EDX,0x10                   ; 00442b69
    MOV EDX,dword ptr [EBP + -0x18]     ; 00442b6d
    MOV EBX,EAX                         ; 00442b70
    MOV EAX,dword ptr [ESI + 0x188]     ; 00442b72
    IMUL EDX                            ; 00442b78
    SHRD EAX,EDX,0x10                   ; 00442b7a
    MOV EDX,dword ptr [EBP + -0x14]     ; 00442b7e
    ADD EBX,EAX                         ; 00442b81
    MOV EAX,dword ptr [ESI + 0x194]     ; 00442b83
    IMUL EDX                            ; 00442b89
    SHRD EAX,EDX,0x10                   ; 00442b8b
    ADD EBX,EAX                         ; 00442b8f
    MOV EDX,dword ptr [0x02de5d88]      ; 00442b91 | DAT_02de5d88
    MOV dword ptr [0x02de5d84],EBX      ; 00442b97 | DAT_02de5d84
    CMP EBX,EDX                         ; 00442b9d
    JGE 0x0044289a                      ; 00442b9f
        ;   XREF to: 0044289a (CONDITIONAL_JUMP)  ; LAB_0044289a
    MOV EAX,EDX                         ; 00442ba5
    NEG EAX                             ; 00442ba7
    CMP EAX,EBX                         ; 00442ba9
    JGE 0x0044289a                      ; 00442bab
        ;   XREF to: 0044289a (CONDITIONAL_JUMP)  ; LAB_0044289a
    MOV EAX,[0x02de5d80]                ; 00442bb1 | DAT_02de5d80
    MOV EBX,EDX                         ; 00442bb6
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 00442bb8
    IMUL EDX                            ; 00442bbe
    IDIV EBX                            ; 00442bc0
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 00442bc2
    ADD EAX,EDX                         ; 00442bc8
    MOV EBX,dword ptr [0x02de5d88]      ; 00442bca | DAT_02de5d88
    MOV [0x02de5d80],EAX                ; 00442bd0 | DAT_02de5d80
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 00442bd5
    MOV EAX,[0x02de5d84]                ; 00442bdb | DAT_02de5d84
    IMUL EDX                            ; 00442be0
    IDIV EBX                            ; 00442be2
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 00442be4
    ADD EAX,EDX                         ; 00442bea
    MOV [0x02de5d84],EAX                ; 00442bec | DAT_02de5d84
    MOV EAX,0x2de5d80                   ; 00442bf1
    JMP 0x0044289f                      ; 00442bf6
        ;   XREF to: 0044289f (UNCONDITIONAL_JUMP)  ; LAB_0044289f
    MOV EDI,dword ptr [EAX]             ; 00442bfb | DAT_01410280
        ;   Label: LAB_00442bfb
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 00442bfd
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 00442c03
    MOV EAX,dword ptr [EAX + 0x4]       ; 00442c09 | DAT_01410284
    SAR EDI,CL                          ; 00442c0c
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 00442c0e
    AND EDX,EDI                         ; 00442c14
    MOV EDI,dword ptr [ESI + 0x1c68]    ; 00442c16
    SAR EAX,CL                          ; 00442c1c
    MOV CL,byte ptr [ESI + 0x1c60]      ; 00442c1e
    AND EAX,EDI                         ; 00442c24
    SHL EAX,CL                          ; 00442c26
    ADD EAX,EDX                         ; 00442c28
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 00442c2a
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 00442c30
    AND EAX,0xff                        ; 00442c33
    SHL EAX,0xa                         ; 00442c38
    MOV EDX,dword ptr [EBP + 0x20]      ; 00442c3b
    IMUL EDX                            ; 00442c3e
    SHRD EAX,EDX,0x10                   ; 00442c40
    MOV EDI,EAX                         ; 00442c44
    JMP 0x004428ef                      ; 00442c46
        ;   XREF to: 004428ef (UNCONDITIONAL_JUMP)  ; LAB_004428ef

