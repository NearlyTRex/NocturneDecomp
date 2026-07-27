; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_transformAndProjectPoint_FUN_0053075c(uint *param_1,int *param_2)
;
;
; XREF[66]:
;   core_actor.cpp_FUN_0040ab70 at 0040abae
;   core_actor.cpp_FUN_0040add0 at 0040ae5d
;   core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450 at 0041d4df
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 at 0041cfb4
;   core_box.cpp_FUN_0041d050 at 0041d0b3
;   core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_004216d0 at 0042177f
;   core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0 at 00425e70
;   core_charactr.cpp_FUN_0042b510 at 0042b558
;   core_cloth.cpp_FUN_00437ab0 at 00437b90
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0 at 00446166
;   ... and 56 more
;
; Referenced Globals:
;   undefined4 DAT_005bf4d8
;   undefined4 DAT_005bf4dc
;   undefined4 DAT_005bf4e0
;   undefined4 DAT_005bf4e8
;   undefined4 DAT_005bf4ec
;   undefined4 DAT_005bf4f0
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;   undefined4 DAT_01c039e8
;   ... and 8 more
;
; *****************************************************************************

section .text

    TEST dword ptr [0x01c03948],0xffffffff ; 0053075c | DAT_01c03948
        ;   Label: engine_special.cpp_transformAndProjectPoint_FUN_0053075c
    JZ 0x005308aa                       ; 00530766
        ;   XREF to: 005308aa (CONDITIONAL_JUMP)  ; LAB_005308aa
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053076c
    MOV EAX,dword ptr [EBX]             ; 00530770
    MOV ECX,dword ptr [EBX + 0x4]       ; 00530772
    MOV EDX,dword ptr [EBX + 0x8]       ; 00530775
    SUB EAX,dword ptr [0x01c039b8]      ; 00530778 | DAT_01c039b8
    SUB ECX,dword ptr [0x01c039bc]      ; 0053077e | DAT_01c039bc
    SUB EDX,dword ptr [0x01c039c0]      ; 00530784 | DAT_01c039c0
    MOVD MM0,EAX                        ; 0053078a
    MOVD MM1,ECX                        ; 0053078d
    MOVD MM2,EDX                        ; 00530790
    IMUL dword ptr [0x01c039e8]         ; 00530793 | DAT_01c039e8
    MOV EBX,EAX                         ; 00530799
    MOV ECX,EDX                         ; 0053079b
    MOVD EAX,MM1                        ; 0053079d
    IMUL dword ptr [0x01c039f4]         ; 005307a0 | DAT_01c039f4
    ADD EBX,EAX                         ; 005307a6
    ADC ECX,EDX                         ; 005307a8
    MOVD EAX,MM2                        ; 005307aa
    IMUL dword ptr [0x01c03a00]         ; 005307ad | DAT_01c03a00
    ADD EAX,EBX                         ; 005307b3
    ADC EDX,ECX                         ; 005307b5
    SHRD EAX,EDX,0x10                   ; 005307b7
    MOVD MM4,EAX                        ; 005307bb
    MOVD EAX,MM0                        ; 005307be
    IMUL dword ptr [0x01c039ec]         ; 005307c1 | DAT_01c039ec
    MOV EBX,EAX                         ; 005307c7
    MOV ECX,EDX                         ; 005307c9
    MOVD EAX,MM1                        ; 005307cb
    IMUL dword ptr [0x01c039f8]         ; 005307ce | DAT_01c039f8
    ADD EBX,EAX                         ; 005307d4
    ADC ECX,EDX                         ; 005307d6
    MOVD EAX,MM2                        ; 005307d8
    IMUL dword ptr [0x01c03a04]         ; 005307db | DAT_01c03a04
    ADD EAX,EBX                         ; 005307e1
    ADC EDX,ECX                         ; 005307e3
    SHRD EAX,EDX,0x10                   ; 005307e5
    MOVD MM5,EAX                        ; 005307e9
    MOVD EAX,MM0                        ; 005307ec
    IMUL dword ptr [0x01c039f0]         ; 005307ef | DAT_01c039f0
    MOV EBX,EAX                         ; 005307f5
    MOV ECX,EDX                         ; 005307f7
    MOVD EAX,MM1                        ; 005307f9
    IMUL dword ptr [0x01c039fc]         ; 005307fc | DAT_01c039fc
    ADD EBX,EAX                         ; 00530802
    ADC ECX,EDX                         ; 00530804
    MOVD EAX,MM2                        ; 00530806
    IMUL dword ptr [0x01c03a08]         ; 00530809 | DAT_01c03a08
    ADD EAX,EBX                         ; 0053080f
    ADC EDX,ECX                         ; 00530811
    SHRD EAX,EDX,0x10                   ; 00530813
    MOVD MM6,EAX                        ; 00530817
    NEG EAX                             ; 0053081a
    MOV EDX,EAX                         ; 0053081c
    XOR EAX,EAX                         ; 0053081e
    MOVD EBX,MM4                        ; 00530820
    MOVD ECX,MM6                        ; 00530823
    CMP EBX,ECX                         ; 00530826
    JLE 0x0053082f                      ; 00530828
        ;   XREF to: 0053082f (CONDITIONAL_JUMP)  ; LAB_0053082f
    OR EAX,0x80000001                   ; 0053082a
    CMP EBX,EDX                         ; 0053082f
        ;   Label: LAB_0053082f
    JGE 0x00530838                      ; 00530831
        ;   XREF to: 00530838 (CONDITIONAL_JUMP)  ; LAB_00530838
    OR EAX,0x80000002                   ; 00530833
    MOVD EBX,MM5                        ; 00530838
        ;   Label: LAB_00530838
    CMP EBX,ECX                         ; 0053083b
    JLE 0x00530844                      ; 0053083d
        ;   XREF to: 00530844 (CONDITIONAL_JUMP)  ; LAB_00530844
    OR EAX,0x80000004                   ; 0053083f
    CMP EBX,EDX                         ; 00530844
        ;   Label: LAB_00530844
    JGE 0x0053084d                      ; 00530846
        ;   XREF to: 0053084d (CONDITIONAL_JUMP)  ; LAB_0053084d
    OR EAX,0x80000008                   ; 00530848
    CMP ECX,0x0                         ; 0053084d
        ;   Label: LAB_0053084d
    JG 0x00530857                       ; 00530850
        ;   XREF to: 00530857 (CONDITIONAL_JUMP)  ; LAB_00530857
    OR EAX,0x80000010                   ; 00530852
    MOV EBX,dword ptr [ESP + 0x4]       ; 00530857
        ;   Label: LAB_00530857
    MOVD dword ptr [EBX],MM4            ; 0053085b
    MOVD dword ptr [EBX + 0x4],MM5      ; 0053085e
    MOVD dword ptr [EBX + 0x8],MM6      ; 00530862
    TEST EAX,0xffffffff                 ; 00530866
    JNZ 0x005308a4                      ; 0053086b
        ;   XREF to: 005308a4 (CONDITIONAL_JUMP)  ; LAB_005308a4
    MOV EAX,0x7fffffff                  ; 0053086d
    XOR EDX,EDX                         ; 00530872
    IDIV ECX                            ; 00530874
    MOV dword ptr [EBX + 0xc],EAX       ; 00530876
    MOVD EAX,MM4                        ; 00530879
    IMUL dword ptr [0x01c00c48]         ; 0053087c | DAT_01c00c48
    IDIV ECX                            ; 00530882
    ADD EAX,dword ptr [0x01c00c50]      ; 00530884 | DAT_01c00c50
    MOV dword ptr [EBX + 0x10],EAX      ; 0053088a
    MOVD EAX,MM5                        ; 0053088d
    IMUL dword ptr [0x01c00c4c]         ; 00530890 | DAT_01c00c4c
    IDIV ECX                            ; 00530896
    ADD EAX,dword ptr [0x01c00c54]      ; 00530898 | DAT_01c00c54
    MOV dword ptr [EBX + 0x14],EAX      ; 0053089e
    EMMS                                ; 005308a1
    RET                                 ; 005308a3
    MOV dword ptr [EBX + 0x10],EAX      ; 005308a4
        ;   Label: LAB_005308a4
    EMMS                                ; 005308a7
    RET                                 ; 005308a9
    PUSH ESI                            ; 005308aa
        ;   Label: LAB_005308aa
    PUSH EDI                            ; 005308ab
    MOV ESI,dword ptr [ESP + 0x10]      ; 005308ac
    MOV EDI,dword ptr [ESP + 0xc]       ; 005308b0
    MOV EAX,dword ptr [ESI]             ; 005308b4
    MOV EBX,dword ptr [ESI + 0x4]       ; 005308b6
    MOV ECX,dword ptr [ESI + 0x8]       ; 005308b9
    SUB EAX,dword ptr [0x01c039b8]      ; 005308bc | DAT_01c039b8
    SUB EBX,dword ptr [0x01c039bc]      ; 005308c2 | DAT_01c039bc
    SUB ECX,dword ptr [0x01c039c0]      ; 005308c8 | DAT_01c039c0
    MOV [0x005bf4d8],EAX                ; 005308ce | DAT_005bf4d8
    MOV dword ptr [0x005bf4dc],EBX      ; 005308d3 | DAT_005bf4dc
    MOV dword ptr [0x005bf4e0],ECX      ; 005308d9 | DAT_005bf4e0
    IMUL dword ptr [0x01c039e8]         ; 005308df | DAT_01c039e8
    MOV EBX,EAX                         ; 005308e5
    MOV ECX,EDX                         ; 005308e7
    MOV EAX,[0x005bf4dc]                ; 005308e9 | DAT_005bf4dc
    IMUL dword ptr [0x01c039f4]         ; 005308ee | DAT_01c039f4
    ADD EBX,EAX                         ; 005308f4
    ADC ECX,EDX                         ; 005308f6
    MOV EAX,[0x005bf4e0]                ; 005308f8 | DAT_005bf4e0
    IMUL dword ptr [0x01c03a00]         ; 005308fd | DAT_01c03a00
    ADD EAX,EBX                         ; 00530903
    ADC EDX,ECX                         ; 00530905
    SHRD EAX,EDX,0x10                   ; 00530907
    MOV [0x005bf4e8],EAX                ; 0053090b | DAT_005bf4e8
    MOV EAX,[0x005bf4d8]                ; 00530910 | DAT_005bf4d8
    IMUL dword ptr [0x01c039ec]         ; 00530915 | DAT_01c039ec
    MOV EBX,EAX                         ; 0053091b
    MOV ECX,EDX                         ; 0053091d
    MOV EAX,[0x005bf4dc]                ; 0053091f | DAT_005bf4dc
    IMUL dword ptr [0x01c039f8]         ; 00530924 | DAT_01c039f8
    ADD EBX,EAX                         ; 0053092a
    ADC ECX,EDX                         ; 0053092c
    MOV EAX,[0x005bf4e0]                ; 0053092e | DAT_005bf4e0
    IMUL dword ptr [0x01c03a04]         ; 00530933 | DAT_01c03a04
    ADD EAX,EBX                         ; 00530939
    ADC EDX,ECX                         ; 0053093b
    SHRD EAX,EDX,0x10                   ; 0053093d
    MOV [0x005bf4ec],EAX                ; 00530941 | DAT_005bf4ec
    MOV EAX,[0x005bf4d8]                ; 00530946 | DAT_005bf4d8
    IMUL dword ptr [0x01c039f0]         ; 0053094b | DAT_01c039f0
    MOV EBX,EAX                         ; 00530951
    MOV ECX,EDX                         ; 00530953
    MOV EAX,[0x005bf4dc]                ; 00530955 | DAT_005bf4dc
    IMUL dword ptr [0x01c039fc]         ; 0053095a | DAT_01c039fc
    ADD EBX,EAX                         ; 00530960
    ADC ECX,EDX                         ; 00530962
    MOV EAX,[0x005bf4e0]                ; 00530964 | DAT_005bf4e0
    IMUL dword ptr [0x01c03a08]         ; 00530969 | DAT_01c03a08
    ADD EAX,EBX                         ; 0053096f
    ADC EDX,ECX                         ; 00530971
    SHRD EAX,EDX,0x10                   ; 00530973
    MOV [0x005bf4f0],EAX                ; 00530977 | DAT_005bf4f0
    NEG EAX                             ; 0053097c
    MOV EDX,EAX                         ; 0053097e
    XOR EAX,EAX                         ; 00530980
    MOV EBX,dword ptr [0x005bf4e8]      ; 00530982 | DAT_005bf4e8
    MOV ECX,dword ptr [0x005bf4f0]      ; 00530988 | DAT_005bf4f0
    CMP EBX,ECX                         ; 0053098e
    JLE 0x00530997                      ; 00530990
        ;   XREF to: 00530997 (CONDITIONAL_JUMP)  ; LAB_00530997
    OR EAX,0x80000001                   ; 00530992
    CMP EBX,EDX                         ; 00530997
        ;   Label: LAB_00530997
    JGE 0x005309a0                      ; 00530999
        ;   XREF to: 005309a0 (CONDITIONAL_JUMP)  ; LAB_005309a0
    OR EAX,0x80000002                   ; 0053099b
    MOV EBX,dword ptr [0x005bf4ec]      ; 005309a0 | DAT_005bf4ec
        ;   Label: LAB_005309a0
    CMP EBX,ECX                         ; 005309a6
    JLE 0x005309af                      ; 005309a8
        ;   XREF to: 005309af (CONDITIONAL_JUMP)  ; LAB_005309af
    OR EAX,0x80000004                   ; 005309aa
    CMP EBX,EDX                         ; 005309af
        ;   Label: LAB_005309af
    JGE 0x005309b8                      ; 005309b1
        ;   XREF to: 005309b8 (CONDITIONAL_JUMP)  ; LAB_005309b8
    OR EAX,0x80000008                   ; 005309b3
    CMP ECX,0x0                         ; 005309b8
        ;   Label: LAB_005309b8
    JG 0x005309c2                       ; 005309bb
        ;   XREF to: 005309c2 (CONDITIONAL_JUMP)  ; LAB_005309c2
    OR EAX,0x80000010                   ; 005309bd
    TEST EAX,0xffffffff                 ; 005309c2
        ;   Label: LAB_005309c2
    JNZ 0x00530a11                      ; 005309c7
        ;   XREF to: 00530a11 (CONDITIONAL_JUMP)  ; LAB_00530a11
    MOV EAX,[0x005bf4e8]                ; 005309c9 | DAT_005bf4e8
    MOV dword ptr [EDI],EAX             ; 005309ce
    MOV dword ptr [EDI + 0x4],EBX       ; 005309d0
    MOV dword ptr [EDI + 0x8],ECX       ; 005309d3
    MOV EAX,0x7fffffff                  ; 005309d6
    XOR EDX,EDX                         ; 005309db
    IDIV ECX                            ; 005309dd
    MOV dword ptr [EDI + 0xc],EAX       ; 005309df
    MOV EAX,[0x005bf4e8]                ; 005309e2 | DAT_005bf4e8
    IMUL dword ptr [0x01c00c48]         ; 005309e7 | DAT_01c00c48
    IDIV ECX                            ; 005309ed
    ADD EAX,dword ptr [0x01c00c50]      ; 005309ef | DAT_01c00c50
    MOV dword ptr [EDI + 0x10],EAX      ; 005309f5
    MOV EAX,[0x005bf4ec]                ; 005309f8 | DAT_005bf4ec
    IMUL dword ptr [0x01c00c4c]         ; 005309fd | DAT_01c00c4c
    IDIV ECX                            ; 00530a03
    ADD EAX,dword ptr [0x01c00c54]      ; 00530a05 | DAT_01c00c54
    MOV dword ptr [EDI + 0x14],EAX      ; 00530a0b
    POP EDI                             ; 00530a0e
    POP ESI                             ; 00530a0f
    RET                                 ; 00530a10
    MOV EDX,dword ptr [0x005bf4e8]      ; 00530a11 | DAT_005bf4e8
        ;   Label: LAB_00530a11
    MOV dword ptr [EDI],EDX             ; 00530a17
    MOV dword ptr [EDI + 0x4],EBX       ; 00530a19
    MOV dword ptr [EDI + 0x8],ECX       ; 00530a1c
    MOV dword ptr [EDI + 0x10],EAX      ; 00530a1f
    POP EDI                             ; 00530a22
    POP ESI                             ; 00530a23
    RET                                 ; 00530a24

