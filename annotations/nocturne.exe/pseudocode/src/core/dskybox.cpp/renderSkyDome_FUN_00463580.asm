; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_renderSkyDome_FUN_00463580(undefined4 *param_1,char *param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507eb6
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508c7d
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   double DOUBLE_0057dfae = 0.5
;   double DOUBLE_0057dfb6 = 1.41400000000000
;   double DOUBLE_0057dfbe = 0.589048622531250
;   double DOUBLE_0057dfc6 = 256
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b0678
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01b7b728
;   undefined4 DAT_01b7b72c
;   undefined4 DAT_01b7b730
;   undefined4 DAT_01fba938
;
; Called Functions:
;   core_dskybox.cpp_generateSkyDomeVertex_FUN_00463440
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
;   wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463580
        ;   Label: core_dskybox.cpp_renderSkyDome_FUN_00463580
    PUSH ESI                            ; 00463581
    PUSH EDI                            ; 00463582
    PUSH EBP                            ; 00463583
    SUB ESP,0xa4                        ; 00463584
    MOV EBP,dword ptr [ESP + 0xb8]      ; 0046358a
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00463591
    LEA EDI,[EBP + 0xc]                 ; 00463598
    PUSH EDI                            ; 0046359b
    MOV AL,byte ptr [ESI]               ; 0046359c
        ;   Label: LAB_0046359c
    MOV byte ptr [EDI],AL               ; 0046359e
    CMP AL,0x0                          ; 004635a0
    JZ 0x004635b4                       ; 004635a2
        ;   XREF to: 004635b4 (CONDITIONAL_JUMP)  ; LAB_004635b4
    MOV AL,byte ptr [ESI + 0x1]         ; 004635a4
    ADD ESI,0x2                         ; 004635a7
    MOV byte ptr [EDI + 0x1],AL         ; 004635aa
    ADD EDI,0x2                         ; 004635ad
    CMP AL,0x0                          ; 004635b0
    JNZ 0x0046359c                      ; 004635b2
        ;   XREF to: 0046359c (CONDITIONAL_JUMP)  ; LAB_0046359c
    POP EDI                             ; 004635b4
        ;   Label: LAB_004635b4
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004635b5
    MOV dword ptr [EBP],EAX             ; 004635bc
    LEA EAX,[ESP + 0x54]                ; 004635bf
    PUSH EAX                            ; 004635c3
    PUSH 0x1fba938                      ; 004635c4 | DAT_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0 ; 004635c9
        ;   XREF to: 0046b9c0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0()
    ADD ESP,0x8                         ; 004635ce
    LEA EAX,[ESP + 0x60]                ; 004635d1
    PUSH EAX                            ; 004635d5
    PUSH 0x1fba938                      ; 004635d6 | DAT_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0 ; 004635db
        ;   XREF to: 0046b9f0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0()
    ADD ESP,0x8                         ; 004635e0
    FLD float ptr [ESP + 0x54]          ; 004635e3
    FADD float ptr [ESP + 0x60]         ; 004635e7
    FLD double ptr [0x0057dfae]         ; 004635eb | DOUBLE_0057dfae
    FXCH                                ; 004635f1
    FMUL ST1                            ; 004635f3
    FLD float ptr [ESP + 0x5c]          ; 004635f5
    FLD float ptr [ESP + 0x60]          ; 004635f9
    FSUB float ptr [ESP + 0x54]         ; 004635fd
    FXCH                                ; 00463601
    FADD float ptr [ESP + 0x68]         ; 00463603
    FXCH                                ; 00463607
    FMUL ST3                            ; 00463609
    FXCH                                ; 0046360b
    FMULP ST3                           ; 0046360d
    FMUL double ptr [0x0057dfb6]        ; 0046360f | DOUBLE_0057dfb6
    FLDZ                                ; 00463615
    XOR EDX,EDX                         ; 00463617
    MOV EAX,dword ptr [ESP + 0x58]      ; 00463619
    MOV dword ptr [0x005b0678],EDX      ; 0046361d | DAT_005b0678
    MOV [0x01b7b72c],EAX                ; 00463623 | DAT_01b7b72c
    FXCH ST2                            ; 00463628
    FSTP float ptr [0x01b7b728]         ; 0046362a | DAT_01b7b728
    FXCH ST2                            ; 00463630
    FSTP float ptr [0x01b7b730]         ; 00463632 | DAT_01b7b730
    FXCH                                ; 00463638
    FSTP float ptr [ESP + 0x80]         ; 0046363a
    FCOMP float ptr [ESP + 0x80]        ; 00463641
    FNSTSW AX                           ; 00463648
    SAHF                                ; 0046364a
    JC 0x00463a23                       ; 0046364b
        ;   XREF to: 00463a23 (CONDITIONAL_JUMP)  ; LAB_00463a23
    FLD float ptr [ESP + 0x64]          ; 00463651
        ;   Label: LAB_00463651
    FSUB float ptr [ESP + 0x58]         ; 00463655
    FMUL double ptr [0x0057dfb6]        ; 00463659 | DOUBLE_0057dfb6
    FST float ptr [ESP + 0x88]          ; 0046365f
    FCOMP float ptr [0x005b0678]        ; 00463666 | DAT_005b0678
    FNSTSW AX                           ; 0046366c
    SAHF                                ; 0046366e
    JBE 0x0046367d                      ; 0046366f
        ;   XREF to: 0046367d (CONDITIONAL_JUMP)  ; LAB_0046367d
    MOV EAX,dword ptr [ESP + 0x88]      ; 00463671
    MOV [0x005b0678],EAX                ; 00463678 | DAT_005b0678
    FLD float ptr [ESP + 0x68]          ; 0046367d
        ;   Label: LAB_0046367d
    FSUB float ptr [ESP + 0x5c]         ; 00463681
    FMUL double ptr [0x0057dfae]        ; 00463685 | DOUBLE_0057dfae
    FMUL double ptr [0x0057dfb6]        ; 0046368b | DOUBLE_0057dfb6
    FST float ptr [ESP + 0x84]          ; 00463691
    FCOMP float ptr [0x005b0678]        ; 00463698 | DAT_005b0678
    FNSTSW AX                           ; 0046369e
    SAHF                                ; 004636a0
    JBE 0x004636af                      ; 004636a1
        ;   XREF to: 004636af (CONDITIONAL_JUMP)  ; LAB_004636af
    MOV EAX,dword ptr [ESP + 0x84]      ; 004636a3
    MOV [0x005b0678],EAX                ; 004636aa | DAT_005b0678
    PUSH 0x1b7b728                      ; 004636af | DAT_01b7b728
        ;   Label: LAB_004636af
    MOV ECX,dword ptr [0x005ae704]      ; 004636b4 | DAT_005ae704
    PUSH ECX                            ; 004636ba | DAT_01b4d738
    MOV EBX,0x4                         ; 004636bb
    XOR ESI,ESI                         ; 004636c0
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004636c2
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    MOV ECX,dword ptr [0x005ae704]      ; 004636c7 | DAT_005ae704
    ADD ESP,0x8                         ; 004636cd
    LEA EAX,[EBX + EBP*0x1]             ; 004636d0
    MOV dword ptr [ESP + 0x4],EBX       ; 004636d3
    PUSH EAX                            ; 004636d7
    MOV dword ptr [ESP + 0x18],ESI      ; 004636d8
    MOV dword ptr [ESP + 0x14],ESI      ; 004636dc
    PUSH ECX                            ; 004636e0 | DAT_01b4d738
    MOV dword ptr [ESP + 0x14],ESI      ; 004636e1
    MOV dword ptr [ESP + 0x10],ESI      ; 004636e5
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004636e9
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    FLD double ptr [0x0057dfbe]         ; 004636ee | DOUBLE_0057dfbe
    FSIN                                ; 004636f4
    ADD ESP,0x8                         ; 004636f6
    FLD float ptr [0x005b0678]          ; 004636f9 | DAT_005b0678
    FXCH                                ; 004636ff
    FMUL ST1                            ; 00463701
    FLD double ptr [0x0057dfc6]         ; 00463703 | DOUBLE_0057dfc6
    FXCH                                ; 00463709
    FMUL ST1                            ; 0046370b
    FXCH ST2                            ; 0046370d
    FMULP                               ; 0046370f
    FXCH                                ; 00463711
    CALL crt_math.c_round_FUN_00563a30  ; 00463713
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x48]        ; 00463718
    MOV EAX,dword ptr [ESP + 0x48]      ; 0046371c
    MOV ECX,dword ptr [0x005ae704]      ; 00463720 | DAT_005ae704
    MOV dword ptr [ESP + 0x50],EAX      ; 00463726
    LEA EAX,[ESP + 0x48]                ; 0046372a
    CALL crt_math.c_round_FUN_00563a30  ; 0046372e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH EAX                            ; 00463733
    FISTP dword ptr [ESP + 0x50]        ; 00463734
    MOV EAX,dword ptr [ECX]             ; 00463738
    PUSH EAX                            ; 0046373a
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 0046373b
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00463740
    MOV EBX,dword ptr [ESP + 0x48]      ; 00463743
    LEA EAX,[ESP + 0x48]                ; 00463747
    NEG EBX                             ; 0046374b
    MOV ECX,dword ptr [0x005ae704]      ; 0046374d | DAT_005ae704
    MOV dword ptr [ESP + 0x48],EBX      ; 00463753
    PUSH EAX                            ; 00463757
    MOV EAX,dword ptr [ECX]             ; 00463758 | DAT_01b4d738
    ADD EAX,0x30                        ; 0046375a
    PUSH EAX                            ; 0046375d
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 0046375e
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00463763
    MOV ESI,dword ptr [ESP + 0x50]      ; 00463766
    LEA EAX,[ESP + 0x48]                ; 0046376a
    NEG ESI                             ; 0046376e
    MOV ECX,dword ptr [0x005ae704]      ; 00463770 | DAT_005ae704
    MOV dword ptr [ESP + 0x50],ESI      ; 00463776
    PUSH EAX                            ; 0046377a
    MOV EAX,dword ptr [ECX]             ; 0046377b | DAT_01b4d738
    ADD EAX,0x60                        ; 0046377d
    PUSH EAX                            ; 00463780
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00463781
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00463786
    MOV EDI,dword ptr [ESP + 0x48]      ; 00463789
    NEG EDI                             ; 0046378d
    MOV EAX,[0x005ae704]                ; 0046378f | DAT_005ae704
    MOV dword ptr [ESP + 0x48],EDI      ; 00463794
    LEA ECX,[ESP + 0x48]                ; 00463798
    MOV EAX,dword ptr [EAX]             ; 0046379c | DAT_01b4d738
    PUSH ECX                            ; 0046379e
    ADD EAX,0x90                        ; 0046379f
    PUSH EAX                            ; 004637a4
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 004637a5
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 004637aa
    MOV EAX,[0x005ae704]                ; 004637ad | DAT_005ae704
    MOV EBX,dword ptr [EAX]             ; 004637b2 | DAT_01b4d738
    MOV ECX,dword ptr [EBP]             ; 004637b4
    MOV dword ptr [EBX + 0x20],ECX      ; 004637b7
    MOV EBX,dword ptr [EAX]             ; 004637ba | DAT_01b4d738
    MOV dword ptr [EBX + 0x24],ECX      ; 004637bc
    MOV EBX,dword ptr [EAX]             ; 004637bf | DAT_01b4d738
    MOV dword ptr [EBX + 0x28],ECX      ; 004637c1
    MOV ECX,dword ptr [EAX]             ; 004637c4 | DAT_01b4d738
    MOV dword ptr [ECX + 0x2c],0x0      ; 004637c6
    MOV ECX,dword ptr [EAX]             ; 004637cd | DAT_01b4d738
    MOV EBX,dword ptr [EBP]             ; 004637cf
    MOV dword ptr [ECX + 0x50],EBX      ; 004637d2
    MOV ECX,dword ptr [EAX]             ; 004637d5 | DAT_01b4d738
    MOV dword ptr [ECX + 0x54],EBX      ; 004637d7
    MOV EBX,dword ptr [EAX]             ; 004637da | DAT_01b4d738
    MOV ECX,dword ptr [EBP]             ; 004637dc
    MOV dword ptr [EBX + 0x58],ECX      ; 004637df
    MOV ECX,dword ptr [EAX]             ; 004637e2 | DAT_01b4d738
    MOV dword ptr [ECX + 0x5c],0x0      ; 004637e4
    MOV EBX,dword ptr [EAX]             ; 004637eb | DAT_01b4d738
    MOV ECX,dword ptr [EBP]             ; 004637ed
    MOV dword ptr [EBX + 0x80],ECX      ; 004637f0
    MOV EBX,dword ptr [EAX]             ; 004637f6 | DAT_01b4d738
    MOV dword ptr [EBX + 0x84],ECX      ; 004637f8
    MOV EBX,dword ptr [EAX]             ; 004637fe | DAT_01b4d738
    MOV dword ptr [EBX + 0x88],ECX      ; 00463800
    MOV ECX,dword ptr [EAX]             ; 00463806 | DAT_01b4d738
    MOV dword ptr [ECX + 0x8c],0x0      ; 00463808
    MOV EBX,dword ptr [EAX]             ; 00463812 | DAT_01b4d738
    MOV ECX,dword ptr [EBP]             ; 00463814
    MOV dword ptr [EBX + 0xb0],ECX      ; 00463817
    MOV EBX,dword ptr [EAX]             ; 0046381d | DAT_01b4d738
    MOV dword ptr [EBX + 0xb4],ECX      ; 0046381f
    MOV EBX,dword ptr [EAX]             ; 00463825 | DAT_01b4d738
    MOV ESI,0x1                         ; 00463827
    MOV dword ptr [EBX + 0xb8],ECX      ; 0046382c
    MOV EDI,0x3                         ; 00463832
    MOV ECX,dword ptr [EAX]             ; 00463837 | DAT_01b4d738
    PUSH 0x2c5                          ; 00463839
    XOR EDX,EDX                         ; 0046383e
    MOV dword ptr [ECX + 0xbc],0x0      ; 00463840
    MOV ECX,0x80000                     ; 0046384a
    MOV dword ptr [ESP + 0x1c],EDX      ; 0046384f
    MOV dword ptr [ESP + 0x28],ESI      ; 00463853
    MOV dword ptr [ESP + 0x20],ECX      ; 00463857
    MOV EBX,ECX                         ; 0046385b
    MOV dword ptr [ESP + 0x24],ECX      ; 0046385d
    MOV dword ptr [ESP + 0x2c],ECX      ; 00463861
    MOV dword ptr [ESP + 0x30],ECX      ; 00463865
    MOV ECX,0x2                         ; 00463869
    MOV dword ptr [ESP + 0x40],EDI      ; 0046386e
    MOV dword ptr [ESP + 0x34],ECX      ; 00463872
    LEA ECX,[ESP + 0x4]                 ; 00463876
    XOR EDI,EDI                         ; 0046387a
    PUSH ECX                            ; 0046387c
    MOV dword ptr [ESP + 0x3c],EBX      ; 0046387d
    MOV dword ptr [ESP + 0x40],EBX      ; 00463881
    PUSH EAX                            ; 00463885 | DAT_01b4d738
    MOV dword ptr [ESP + 0x4c],EBX      ; 00463886
    MOV dword ptr [ESP + 0x50],EBX      ; 0046388a
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460 ; 0046388e
        ;   XREF to: 0045f460 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460()
    ADD ESP,0xc                         ; 00463893
    MOV dword ptr [ESP + 0x90],EDI      ; 00463896
    MOV ESI,dword ptr [ESP + 0x90]      ; 0046389d
        ;   Label: LAB_0046389d
    XOR EBX,EBX                         ; 004638a4
    PUSH ESI                            ; 004638a6
        ;   Label: LAB_004638a6
    PUSH EBX                            ; 004638a7
    PUSH EDI                            ; 004638a8
    PUSH EBP                            ; 004638a9
    INC ESI                             ; 004638aa
    INC EBX                             ; 004638ab
    CALL core_dskybox.cpp_generateSkyDomeVertex_FUN_00463440 ; 004638ac
        ;   XREF to: 00463440 (UNCONDITIONAL_CALL)  ; undefined core_dskybox.cpp_generateSkyDomeVertex_FUN_00463440()
    ADD ESP,0x10                        ; 004638b1
    CMP EBX,0x4                         ; 004638b4
    JL 0x004638a6                       ; 004638b7
        ;   XREF to: 004638a6 (CONDITIONAL_JUMP)  ; LAB_004638a6
    MOV ESI,dword ptr [ESP + 0x90]      ; 004638b9
    ADD ESI,0x4                         ; 004638c0
    INC EDI                             ; 004638c3
    MOV dword ptr [ESP + 0x90],ESI      ; 004638c4
    CMP EDI,0x10                        ; 004638cb
    JLE 0x0046389d                      ; 004638ce
        ;   XREF to: 0046389d (CONDITIONAL_JUMP)  ; LAB_0046389d
    XOR EDI,EDI                         ; 004638d0
    MOV dword ptr [ESP + 0x94],EDI      ; 004638d2
    MOV dword ptr [ESP + 0x8c],EDI      ; 004638d9
    MOV EAX,dword ptr [ESP + 0x94]      ; 004638e0
        ;   Label: LAB_004638e0
    MOV dword ptr [ESP + 0x98],EAX      ; 004638e7
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004638ee
    MOV EDX,EAX                         ; 004638f5
    SAR EDX,0x1f                        ; 004638f7
    SHL EDX,0x2                         ; 004638fa
    SBB EAX,EDX                         ; 004638fd
    SAR EAX,0x2                         ; 004638ff
    MOV ESI,0x1000000                   ; 00463902
    AND EAX,0xffffff                    ; 00463907
    XOR EBX,EBX                         ; 0046390c
    MOV dword ptr [ESP + 0xa0],EAX      ; 0046390e
    ADD EAX,0x400000                    ; 00463915 | IMAGE_DOS_HEADER_00400000
    XOR EDI,EDI                         ; 0046391a
    MOV dword ptr [ESP + 0x9c],EAX      ; 0046391c
    MOV ECX,dword ptr [ESP + 0x98]      ; 00463923
        ;   Label: LAB_00463923
    ADD ECX,EDI                         ; 0046392a
    LEA EAX,[ECX + 0x1]                 ; 0046392c
    MOV dword ptr [ESP + 0x74],EAX      ; 0046392f
    LEA EAX,[ECX + 0x5]                 ; 00463933
    MOV EDX,EBX                         ; 00463936
    MOV dword ptr [ESP + 0x78],EAX      ; 00463938
    LEA EAX,[ECX + 0x4]                 ; 0046393c
    SAR EDX,0x1f                        ; 0046393f
    MOV dword ptr [ESP + 0x7c],EAX      ; 00463942
    MOV EAX,EBX                         ; 00463946
    SHL EDX,0x2                         ; 00463948
    SBB EAX,EDX                         ; 0046394b
    SAR EAX,0x2                         ; 0046394d
    MOV EBP,EAX                         ; 00463950
    MOV EDX,ESI                         ; 00463952
    MOV EAX,ESI                         ; 00463954
    SAR EDX,0x1f                        ; 00463956
    SHL EDX,0x2                         ; 00463959
    SBB EAX,EDX                         ; 0046395c
    SAR EAX,0x2                         ; 0046395e
    MOV dword ptr [ESP + 0x18],ECX      ; 00463961
    MOV ECX,dword ptr [ESP + 0xa0]      ; 00463965
    MOV dword ptr [ESP + 0x1c],ECX      ; 0046396c
    MOV ECX,dword ptr [ESP + 0x74]      ; 00463970
    PUSH 0x2c5                          ; 00463974
    MOV dword ptr [ESP + 0x28],ECX      ; 00463979
    MOV ECX,dword ptr [ESP + 0xa4]      ; 0046397d
    INC EDI                             ; 00463984
    MOV dword ptr [ESP + 0x2c],ECX      ; 00463985
    MOV ECX,dword ptr [ESP + 0x7c]      ; 00463989
    ADD EBX,0x1000000                   ; 0046398d
    MOV dword ptr [ESP + 0x34],ECX      ; 00463993
    MOV ECX,dword ptr [ESP + 0xa0]      ; 00463997
    XOR EAX,0xffffff                    ; 0046399e
    MOV dword ptr [ESP + 0x38],ECX      ; 004639a3
    MOV dword ptr [ESP + 0x30],EAX      ; 004639a7
    MOV dword ptr [ESP + 0x3c],EAX      ; 004639ab
    MOV EAX,dword ptr [ESP + 0x80]      ; 004639af
    MOV dword ptr [ESP + 0x44],ECX      ; 004639b6
    MOV dword ptr [ESP + 0x40],EAX      ; 004639ba
    LEA EAX,[ESP + 0x4]                 ; 004639be
    XOR EBP,0xffffff                    ; 004639c2
    PUSH EAX                            ; 004639c8
    MOV EAX,[0x005ae704]                ; 004639c9 | DAT_005ae704
    MOV dword ptr [ESP + 0x28],EBP      ; 004639ce
    PUSH EAX                            ; 004639d2 | DAT_01b4d738
    MOV dword ptr [ESP + 0x50],EBP      ; 004639d3
    ADD ESI,0x1000000                   ; 004639d7
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460 ; 004639dd
        ;   XREF to: 0045f460 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460()
    ADD ESP,0xc                         ; 004639e2
    CMP EDI,0x3                         ; 004639e5
    JL 0x00463923                       ; 004639e8
        ;   XREF to: 00463923 (CONDITIONAL_JUMP)  ; LAB_00463923
    MOV EDX,dword ptr [ESP + 0x94]      ; 004639ee
    MOV AH,byte ptr [ESP + 0x8f]        ; 004639f5
    ADD EDX,0x4                         ; 004639fc
    INC AH                              ; 004639ff
    MOV dword ptr [ESP + 0x94],EDX      ; 00463a01
    MOV byte ptr [ESP + 0x8f],AH        ; 00463a08
    CMP EDX,0x40                        ; 00463a0f
    JNZ 0x004638e0                      ; 00463a12
        ;   XREF to: 004638e0 (CONDITIONAL_JUMP)  ; LAB_004638e0
    ADD ESP,0xa4                        ; 00463a18
    POP EBP                             ; 00463a1e
    POP EDI                             ; 00463a1f
    POP ESI                             ; 00463a20
    POP EBX                             ; 00463a21
    RET                                 ; 00463a22
    MOV EAX,dword ptr [ESP + 0x80]      ; 00463a23
        ;   Label: LAB_00463a23
    MOV [0x005b0678],EAX                ; 00463a2a | DAT_005b0678
    JMP 0x00463651                      ; 00463a2f
        ;   XREF to: 00463651 (UNCONDITIONAL_JUMP)  ; LAB_00463651

