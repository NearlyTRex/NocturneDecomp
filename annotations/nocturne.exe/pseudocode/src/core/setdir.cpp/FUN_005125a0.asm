; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setdir_cpp_FUN_005125a0(CDemonSet *param_1,CDemonActor *param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x160]:1  local_160
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
;
; XREF[5]:
;   core_game.cpp_CGame_FUN_0049f930 at 0049fdfd
;   core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30 at 0049f3b2
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a64fc
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dd2b
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 005024e5
;
; Referenced Globals:
;   float FLOAT_00590bd5 = 0.5
;   double DOUBLE_00590bdd = 1.5
;   double DOUBLE_00590be5 = 0.5
;   double DOUBLE_00590bed = 0.0625
;   double DOUBLE_00590bf5 = 3
;   double DOUBLE_00590bfd = 0.200000000000000
;   undefined4 DAT_005a1a70
;   float FLOAT_005a1a88 = 200
;   float FLOAT_005a1a8c = 100
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   undefined4 DAT_005be774
;   undefined4 DAT_005be77c
;   undefined4 DAT_005be780
;   ... and 25 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
;   core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0
;   core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340
;   core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005125a0
        ;   Label: core_setdir.cpp_FUN_005125a0
    PUSH ESI                            ; 005125a1
    PUSH EDI                            ; 005125a2
    PUSH EBP                            ; 005125a3
    MOV EBP,ESP                         ; 005125a4
    SUB ESP,0x2dc                       ; 005125a6
    AND ESP,0xfffffff8                  ; 005125ac
    XOR EDX,EDX                         ; 005125af
    MOV ECX,dword ptr [EBP + 0x18]      ; 005125b1
    MOV dword ptr [ESP + 0x234],EDX     ; 005125b4
    TEST ECX,ECX                        ; 005125bb
    JNZ 0x005125e3                      ; 005125bd
        ;   XREF to: 005125e3 (CONDITIONAL_JUMP)  ; LAB_005125e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005125bf
    CMP dword ptr [EAX + 0x15aabc],0x0  ; 005125c2
    JL 0x005125d7                       ; 005125c9
        ;   XREF to: 005125d7 (CONDITIONAL_JUMP)  ; LAB_005125d7
    MOV EAX,0x1                         ; 005125cb
        ;   Label: LAB_005125cb
    MOV ESP,EBP                         ; 005125d0
    POP EBP                             ; 005125d2
    POP EDI                             ; 005125d3
    POP ESI                             ; 005125d4
    POP EBX                             ; 005125d5
    RET                                 ; 005125d6
    PUSH EDX                            ; 005125d7
        ;   Label: LAB_005125d7
    PUSH EAX                            ; 005125d8
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 ; 005125d9
        ;   XREF to: 005088f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 005125de
    JMP 0x005125cb                      ; 005125e1
        ;   XREF to: 005125cb (UNCONDITIONAL_JUMP)  ; LAB_005125cb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005125e3
        ;   Label: LAB_005125e3
    CMP dword ptr [EAX + 0x15aabc],0x0  ; 005125e6
    JL 0x00512a9f                       ; 005125ed
        ;   XREF to: 00512a9f (CONDITIONAL_JUMP)  ; LAB_00512a9f
    CMP dword ptr [EBP + 0x1c],0x2      ; 005125f3
    JGE 0x0051260f                      ; 005125f7
        ;   XREF to: 0051260f (CONDITIONAL_JUMP)  ; LAB_0051260f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005125f9
        ;   Label: LAB_005125f9
    FLD float ptr [EAX + 0x15aacc]      ; 005125fc
    FLDZ                                ; 00512602
    FCOMPP                              ; 00512604
    FNSTSW AX                           ; 00512606
    SAHF                                ; 00512608
    JC 0x00512aab                       ; 00512609
        ;   XREF to: 00512aab (CONDITIONAL_JUMP)  ; LAB_00512aab
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051260f
        ;   Label: LAB_0051260f
    MOV ECX,dword ptr [0x005ae704]      ; 00512612 | DAT_005ae704
    XOR EDX,EDX                         ; 00512618
    MOV dword ptr [EAX + 0x15aacc],0x0  ; 0051261a
    MOV EAX,[0x01c02594]                ; 00512624 | DAT_01c02594
    PUSH ECX                            ; 00512629 | DAT_01b4d738
    MOV dword ptr [ESP + 0x23c],EAX     ; 0051262a
    MOV dword ptr [0x01c02594],EDX      ; 00512631 | DAT_01c02594
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00512637
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0051263c
    PUSH 0x0                            ; 0051263f
    MOV EBX,dword ptr [0x005ae704]      ; 00512641 | DAT_005ae704
    PUSH EBX                            ; 00512647 | DAT_01b4d738
    MOV dword ptr [ESP + 0x244],EAX     ; 00512648
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070 ; 0051264f
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00512654
    PUSH 0x30                           ; 00512657
    PUSH 0x40                           ; 00512659
    PUSH 0x0                            ; 0051265b
    PUSH 0x0                            ; 0051265d
    MOV ESI,dword ptr [0x005ae704]      ; 0051265f | DAT_005ae704
    PUSH ESI                            ; 00512665 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40 ; 00512666
        ;   XREF to: 00460e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0051266b
    LEA EDX,[ESP + 0x190]               ; 0051266e
    PUSH EDX                            ; 00512675
    MOV EDI,dword ptr [EBP + 0x18]      ; 00512676
    MOV EAX,dword ptr [EBP + 0x18]      ; 00512679
    PUSH EDI                            ; 0051267c
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0051267d
    XOR ESI,ESI                         ; 00512683
    CALL dword ptr [EAX + 0x14]         ; 00512685
    LEA EDI,[ESP + 0xd4]                ; 00512688
    ADD ESP,0x8                         ; 0051268f
    PUSH ESI                            ; 00512692
        ;   Label: LAB_00512692
    LEA EAX,[ESP + 0x224]               ; 00512693
    PUSH EAX                            ; 0051269a
    LEA EAX,[ESP + 0x198]               ; 0051269b
    PUSH EAX                            ; 005126a2
    MOV EBX,EDI                         ; 005126a3
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70 ; 005126a5
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 005126aa
    ADD EDI,0xc                         ; 005126ad
    INC ESI                             ; 005126b0
    FLD float ptr [EAX]                 ; 005126b1
    FMUL float ptr [0x005a1a70]         ; 005126b3 | DAT_005a1a70
    FISTP dword ptr [EBX]               ; 005126b9
    FLD float ptr [EAX + 0x4]           ; 005126bb
    FMUL float ptr [0x005a1a70]         ; 005126be | DAT_005a1a70
    FISTP dword ptr [EBX + 0x4]         ; 005126c4
    FLD float ptr [EAX + 0x8]           ; 005126c7
    FMUL float ptr [0x005a1a70]         ; 005126ca | DAT_005a1a70
    FISTP dword ptr [EBX + 0x8]         ; 005126d0
    CMP ESI,0x8                         ; 005126d3
    JL 0x00512692                       ; 005126d6
        ;   XREF to: 00512692 (CONDITIONAL_JUMP)  ; LAB_00512692
    FLD float ptr [ESP + 0x190]         ; 005126d8
    FADD float ptr [ESP + 0x19c]        ; 005126df
    FST float ptr [ESP + 0x1c0]         ; 005126e6
    FLD float ptr [0x00590bd5]          ; 005126ed | FLOAT_00590bd5
    FXCH                                ; 005126f3
    FMUL ST1                            ; 005126f5
    FLD float ptr [ESP + 0x198]         ; 005126f7
    FLD float ptr [ESP + 0x194]         ; 005126fe
    FADD float ptr [ESP + 0x1a0]        ; 00512705
    FXCH                                ; 0051270c
    FADD float ptr [ESP + 0x1a4]        ; 0051270e
    FXCH                                ; 00512715
    FST float ptr [ESP + 0x1c4]         ; 00512717
    FMUL ST3                            ; 0051271e
    FXCH                                ; 00512720
    FST float ptr [ESP + 0x1c8]         ; 00512722
    FMULP ST3                           ; 00512729
    LEA EBX,[ESP + 0x12c]               ; 0051272b
    LEA EAX,[ESP + 0x1f0]               ; 00512732
    FXCH                                ; 00512739
    FSTP float ptr [ESP + 0x1f0]        ; 0051273b
    FSTP float ptr [ESP + 0x1f4]        ; 00512742
    FSTP float ptr [ESP + 0x1f8]        ; 00512749
    FLD float ptr [EAX]                 ; 00512750
    FMUL float ptr [0x005a1a70]         ; 00512752 | DAT_005a1a70
    FISTP dword ptr [EBX]               ; 00512758
    FLD float ptr [EAX + 0x4]           ; 0051275a
    FMUL float ptr [0x005a1a70]         ; 0051275d | DAT_005a1a70
    FISTP dword ptr [EBX + 0x4]         ; 00512763
    FLD float ptr [EAX + 0x8]           ; 00512766
    FMUL float ptr [0x005a1a70]         ; 00512769 | DAT_005a1a70
    FISTP dword ptr [EBX + 0x8]         ; 0051276f
    MOV EAX,0x5be774                    ; 00512772 | DAT_005be774
    LEA ECX,[EAX + 0x1b0]               ; 00512777 | DAT_005be924
    IMUL EDX,dword ptr [EAX + 0x18],0xc ; 0051277d | DAT_005be78c | DAT_005be7d4
        ;   Label: LAB_0051277d
    LEA EBX,[ESP + 0xcc]                ; 00512781
    ADD EBX,EDX                         ; 00512788
    MOV EDX,dword ptr [EAX + 0xc]       ; 0051278a | DAT_005be780 | DAT_005be7c8
    MOV ESI,dword ptr [EBX + 0x4]       ; 0051278d
    IMUL ESI,EDX                        ; 00512790
    MOV EDI,dword ptr [EBX]             ; 00512793
    MOV EDX,dword ptr [EAX + 0x8]       ; 00512795 | DAT_005be77c | DAT_005be7c4
    IMUL EDX,EDI                        ; 00512798
    MOV EDI,dword ptr [EBX + 0x8]       ; 0051279b
    ADD ESI,EDX                         ; 0051279e
    MOV EDX,dword ptr [EAX + 0x10]      ; 005127a0 | DAT_005be784 | DAT_005be7cc
    IMUL EDX,EDI                        ; 005127a3
    ADD EAX,0x48                        ; 005127a6
    ADD ESI,EDX                         ; 005127a9
    MOV dword ptr [EAX + -0x34],ESI     ; 005127ab | DAT_005be788 | DAT_005be7d0
    CMP EAX,ECX                         ; 005127ae
    JNZ 0x0051277d                      ; 005127b0
        ;   XREF to: 0051277d (CONDITIONAL_JUMP)  ; LAB_0051277d
    CMP dword ptr [EBP + 0x1c],0x0      ; 005127b2
    JZ 0x00512b1a                       ; 005127b6
        ;   XREF to: 00512b1a (CONDITIONAL_JUMP)  ; LAB_00512b1a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005127bc
    MOV EAX,dword ptr [EAX]             ; 005127bf
    MOV dword ptr [ESP + 0x2a0],EAX     ; 005127c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005127c8
    XOR ESI,ESI                         ; 005127cb
    MOV dword ptr [EAX + 0x15aac0],0xffffffff ; 005127cd
    MOV dword ptr [0x020875f4],ESI      ; 005127d7 | DAT_020875f4
    MOV dword ptr [EAX + 0x15aac4],ESI  ; 005127dd
    LEA EAX,[ESP + 0x178]               ; 005127e3
        ;   Label: LAB_005127e3
    MOV EDX,dword ptr [EBP + 0x18]      ; 005127ea
    PUSH EAX                            ; 005127ed
    MOV EDI,dword ptr [EBP + 0x18]      ; 005127ee
    MOV EDX,dword ptr [EDX + 0x14c]     ; 005127f1
    PUSH EDI                            ; 005127f7
    CALL dword ptr [EDX + 0x14]         ; 005127f8
    ADD ESP,0x8                         ; 005127fb
    LEA EAX,[ESP + 0x178]               ; 005127fe
    PUSH EAX                            ; 00512805
    CALL core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70 ; 00512806
        ;   XREF to: 0041dc70 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70(CBoundingBox3D * this_ptr)
    MOV dword ptr [ESP + 0x2dc],EAX     ; 0051280b
    FLD float ptr [ESP + 0x2dc]         ; 00512812
    ADD ESP,0x4                         ; 00512819
    FLD float ptr [ESP + 0x178]         ; 0051281c
    FADD float ptr [ESP + 0x184]        ; 00512823
    FXCH                                ; 0051282a
    FMUL double ptr [0x00590bdd]        ; 0051282c | DOUBLE_00590bdd
    FXCH                                ; 00512832
    FST float ptr [ESP + 0x214]         ; 00512834
    FLD float ptr [0x00590bd5]          ; 0051283b | FLOAT_00590bd5
    FXCH                                ; 00512841
    FMUL ST1                            ; 00512843
    FLD float ptr [ESP + 0x180]         ; 00512845
    FLD float ptr [ESP + 0x17c]         ; 0051284c
    FADD float ptr [ESP + 0x188]        ; 00512853
    FXCH                                ; 0051285a
    FADD float ptr [ESP + 0x18c]        ; 0051285c
    FXCH                                ; 00512863
    FST float ptr [ESP + 0x218]         ; 00512865
    FMUL ST3                            ; 0051286c
    FXCH                                ; 0051286e
    FST float ptr [ESP + 0x21c]         ; 00512870
    FMULP ST3                           ; 00512877
    LEA EAX,[ESP + 0x1d8]               ; 00512879
    FLD1                                ; 00512880
    PUSH EAX                            ; 00512882
    LEA EAX,[ESP + 0x1e8]               ; 00512883
    FADDP ST4,ST0                       ; 0051288a
    PUSH EAX                            ; 0051288c
    FXCH ST3                            ; 0051288d
    FSTP float ptr [ESP + 0x248]        ; 0051288f
    PUSH EDI                            ; 00512896
    FSTP float ptr [ESP + 0x1e4]        ; 00512897
    FXCH                                ; 0051289e
    FSTP float ptr [ESP + 0x1e8]        ; 005128a0
    FSTP float ptr [ESP + 0x1ec]        ; 005128a7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005128ae
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005128b3
    LEA EAX,[ESP + 0x1e4]               ; 005128b6
    PUSH EAX                            ; 005128bd
    MOV EDX,dword ptr [EBP + 0x14]      ; 005128be
    PUSH EDX                            ; 005128c1
    CALL core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340 ; 005128c2
        ;   XREF to: 00514340 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340()
    ADD ESP,0x8                         ; 005128c7
    MOV dword ptr [ESP + 0x244],EAX     ; 005128ca
    CMP EAX,-0x1                        ; 005128d1
    SETZ AL                             ; 005128d4
    AND EAX,0xff                        ; 005128d7
    MOV [0x026714b0],EAX                ; 005128dc | DAT_026714b0
    XOR EAX,EAX                         ; 005128e1
    ADD EAX,0x4                         ; 005128e3
        ;   Label: LAB_005128e3
    MOV EDX,dword ptr [EAX + 0x1bd425c] ; 005128e6 | DAT_01bd4260
    MOV dword ptr [ESP + EAX*0x1 + 0x8],EDX ; 005128ec
    CMP EAX,0xc0                        ; 005128f0
    JNZ 0x005128e3                      ; 005128f5
        ;   XREF to: 005128e3 (CONDITIONAL_JUMP)  ; LAB_005128e3
    FLD float ptr [0x005a1a8c]          ; 005128f7 | FLOAT_005a1a8c
    FMUL ST0                            ; 005128fd
    MOV EDI,dword ptr [EBP + 0x18]      ; 005128ff
    XOR ECX,ECX                         ; 00512902
    XOR ESI,ESI                         ; 00512904
    MOV dword ptr [0x026639ec],ECX      ; 00512906 | DAT_026639ec
    MOV dword ptr [ESP + 0x2d0],ECX     ; 0051290c
    ADD EDI,0x20                        ; 00512913
    FSTP float ptr [ESP + 0x248]        ; 00512916
    MOV EAX,[0x005be368]                ; 0051291d | DAT_005be368
        ;   Label: LAB_0051291d
    MOV EDX,dword ptr [ESP + 0x2d0]     ; 00512922
    CMP EDX,dword ptr [EAX + 0x14cd6c]  ; 00512929 | DAT_01fa3ff0
    JL 0x00512bbf                       ; 0051292f
        ;   XREF to: 00512bbf (CONDITIONAL_JUMP)  ; LAB_00512bbf
    FLD float ptr [0x005a1a8c]          ; 00512935 | FLOAT_005a1a8c
    FMUL ST0                            ; 0051293b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051293d
    FLD float ptr [0x005a1a88]          ; 00512940 | FLOAT_005a1a88
    FLD ST0                             ; 00512946
    ADD EAX,0x20                        ; 00512948
    FMULP                               ; 0051294b
    MOV dword ptr [ESP + 0x2c0],EAX     ; 0051294d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00512954
    FXCH                                ; 00512957
    FSTP float ptr [ESP + 0x2a8]        ; 00512959
    ADD EAX,0x4                         ; 00512960
    FSTP float ptr [ESP + 0x284]        ; 00512963
    MOV dword ptr [ESP + 0x258],EAX     ; 0051296a
    CMP dword ptr [ESP + 0x2a0],0x0     ; 00512971
        ;   Label: LAB_00512971
    JLE 0x0051298b                      ; 00512979
        ;   XREF to: 0051298b (CONDITIONAL_JUMP)  ; LAB_0051298b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051297b
    MOV EAX,[0x020875f4]                ; 0051297e | DAT_020875f4
    CMP EAX,dword ptr [EDX]             ; 00512983
    JL 0x00512c8c                       ; 00512985
        ;   XREF to: 00512c8c (CONDITIONAL_JUMP)  ; LAB_00512c8c
    XOR EAX,EAX                         ; 0051298b
        ;   Label: LAB_0051298b
    ADD EAX,0x4                         ; 0051298d
        ;   Label: LAB_0051298d
    MOV EDX,dword ptr [ESP + EAX*0x1 + 0x8] ; 00512990
    MOV dword ptr [EAX + 0x1bd425c],EDX ; 00512994 | DAT_01bd4260
    CMP EAX,0xc0                        ; 0051299a
    JNZ 0x0051298d                      ; 0051299f
        ;   XREF to: 0051298d (CONDITIONAL_JUMP)  ; LAB_0051298d
    MOV ECX,dword ptr [0x005ae704]      ; 005129a1 | DAT_005ae704
    PUSH ECX                            ; 005129a7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70 ; 005129a8
        ;   XREF to: 00460e70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70()
    ADD ESP,0x4                         ; 005129ad
    MOV EBX,dword ptr [ESP + 0x23c]     ; 005129b0
    PUSH EBX                            ; 005129b7
    MOV ESI,dword ptr [0x005ae704]      ; 005129b8 | DAT_005ae704
    PUSH ESI                            ; 005129be | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070 ; 005129bf
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 005129c4
    MOV EAX,dword ptr [ESP + 0x238]     ; 005129c7
    MOV EDX,dword ptr [EBP + 0x14]      ; 005129ce
    MOV [0x01c02594],EAX                ; 005129d1 | DAT_01c02594
    MOV EDI,dword ptr [EDX]             ; 005129d6
    CMP EDI,dword ptr [0x020875f4]      ; 005129d8 | DAT_020875f4
    JG 0x00512a91                       ; 005129de
        ;   XREF to: 00512a91 (CONDITIONAL_JUMP)  ; LAB_00512a91
    MOV dword ptr [ESP + 0x4],0xbf800000 ; 005129e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005129ec
    MOV ECX,0xffffffff                  ; 005129ef
    MOV EBX,dword ptr [EAX]             ; 005129f4
    XOR EDX,EDX                         ; 005129f6
    TEST EBX,EBX                        ; 005129f8
    JLE 0x00512a26                      ; 005129fa
        ;   XREF to: 00512a26 (CONDITIONAL_JUMP)  ; LAB_00512a26
    XOR EBX,EBX                         ; 005129fc
    FLD float ptr [EBX + 0x2663604]     ; 005129fe
        ;   Label: LAB_005129fe
    FCOMP float ptr [ESP + 0x4]         ; 00512a04
    FNSTSW AX                           ; 00512a08
    SAHF                                ; 00512a0a
    JBE 0x00512a19                      ; 00512a0b
        ;   XREF to: 00512a19 (CONDITIONAL_JUMP)  ; LAB_00512a19
    MOV EAX,dword ptr [EBX + 0x2663604] ; 00512a0d
    MOV ECX,EDX                         ; 00512a13
    MOV dword ptr [ESP + 0x4],EAX       ; 00512a15
    MOV EAX,dword ptr [EBP + 0x14]      ; 00512a19
        ;   Label: LAB_00512a19
    INC EDX                             ; 00512a1c
    MOV ESI,dword ptr [EAX]             ; 00512a1d
    ADD EBX,0x4                         ; 00512a1f
    CMP EDX,ESI                         ; 00512a22
    JL 0x005129fe                       ; 00512a24
        ;   XREF to: 005129fe (CONDITIONAL_JUMP)  ; LAB_005129fe
    TEST ECX,ECX                        ; 00512a26
        ;   Label: LAB_00512a26
    JL 0x00512a8a                       ; 00512a28
        ;   XREF to: 00512a8a (CONDITIONAL_JUMP)  ; LAB_00512a8a
    FLD float ptr [ESP + 0x4]           ; 00512a2a
    MOV EDX,0x1                         ; 00512a2e
    FLDZ                                ; 00512a33
    FCOMPP                              ; 00512a35
    FNSTSW AX                           ; 00512a37
    SAHF                                ; 00512a39
    JC 0x00512a3e                       ; 00512a3a
        ;   XREF to: 00512a3e (CONDITIONAL_JUMP)  ; LAB_00512a3e
    XOR EDX,EDX                         ; 00512a3c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00512a3e
        ;   Label: LAB_00512a3e
    CMP ECX,dword ptr [EAX + 0x15aabc]  ; 00512a41
    JNZ 0x00512a4b                      ; 00512a47
        ;   XREF to: 00512a4b (CONDITIONAL_JUMP)  ; LAB_00512a4b
    XOR EDX,EDX                         ; 00512a49
    CMP dword ptr [EBP + 0x1c],0x1      ; 00512a4b
        ;   Label: LAB_00512a4b
    JLE 0x00512a56                      ; 00512a4f
        ;   XREF to: 00512a56 (CONDITIONAL_JUMP)  ; LAB_00512a56
    MOV EDX,0x1                         ; 00512a51
    MOV EAX,dword ptr [EBP + 0x14]      ; 00512a56
        ;   Label: LAB_00512a56
    CMP dword ptr [EAX + 0x15aabc],0x0  ; 00512a59
    JL 0x00512a66                       ; 00512a60
        ;   XREF to: 00512a66 (CONDITIONAL_JUMP)  ; LAB_00512a66
    TEST EDX,EDX                        ; 00512a62
    JZ 0x00512a8a                       ; 00512a64
        ;   XREF to: 00512a8a (CONDITIONAL_JUMP)  ; LAB_00512a8a
    PUSH ECX                            ; 00512a66
        ;   Label: LAB_00512a66
    MOV EDX,dword ptr [EBP + 0x14]      ; 00512a67
    MOV EAX,[0x026714b0]                ; 00512a6a | DAT_026714b0
    PUSH EDX                            ; 00512a6f
    MOV EDI,0x1                         ; 00512a70
    MOV dword ptr [EDX + 0x15aa60],EAX  ; 00512a75
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 ; 00512a7b
        ;   XREF to: 005088f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 00512a80
    MOV dword ptr [ESP + 0x234],EDI     ; 00512a83
    XOR EAX,EAX                         ; 00512a8a
        ;   Label: LAB_00512a8a
    MOV [0x020875f4],EAX                ; 00512a8c | DAT_020875f4
    MOV EAX,dword ptr [ESP + 0x234]     ; 00512a91
        ;   Label: LAB_00512a91
    MOV ESP,EBP                         ; 00512a98
    POP EBP                             ; 00512a9a
    POP EDI                             ; 00512a9b
    POP ESI                             ; 00512a9c
    POP EBX                             ; 00512a9d
    RET                                 ; 00512a9e
    MOV dword ptr [EBP + 0x1c],0x1      ; 00512a9f
        ;   Label: LAB_00512a9f
    JMP 0x005125f9                      ; 00512aa6
        ;   XREF to: 005125f9 (UNCONDITIONAL_JUMP)  ; LAB_005125f9
    MOV EDX,dword ptr [0x005b9354]      ; 00512aab | DAT_005b9354
        ;   Label: LAB_00512aab
    MOV EAX,dword ptr [EBP + 0x14]      ; 00512ab1
    FLD float ptr [EDX + 0x264]         ; 00512ab4 | DAT_01c77850
    FSUBR float ptr [EAX + 0x15aacc]    ; 00512aba
    FST float ptr [EAX + 0x15aacc]      ; 00512ac0
    FLDZ                                ; 00512ac6
    FCOMPP                              ; 00512ac8
    FNSTSW AX                           ; 00512aca
    SAHF                                ; 00512acc
    JNC 0x00512b0e                      ; 00512acd
        ;   XREF to: 00512b0e (CONDITIONAL_JUMP)  ; LAB_00512b0e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00512acf
    MOV EDX,dword ptr [EAX + 0x15aac8]  ; 00512ad2
    TEST EDX,EDX                        ; 00512ad8
    JL 0x00512ae9                       ; 00512ada
        ;   XREF to: 00512ae9 (CONDITIONAL_JUMP)  ; LAB_00512ae9
    MOV EAX,EDX                         ; 00512adc
    MOV EDX,dword ptr [EBP + 0x14]      ; 00512ade
    CMP EAX,dword ptr [EDX + 0x15aabc]  ; 00512ae1
    JNZ 0x00512af2                      ; 00512ae7
        ;   XREF to: 00512af2 (CONDITIONAL_JUMP)  ; LAB_00512af2
    XOR EAX,EAX                         ; 00512ae9
        ;   Label: LAB_00512ae9
    MOV ESP,EBP                         ; 00512aeb
    POP EBP                             ; 00512aed
    POP EDI                             ; 00512aee
    POP ESI                             ; 00512aef
    POP EBX                             ; 00512af0
    RET                                 ; 00512af1
    MOV EBX,dword ptr [EDX + 0x15aac8]  ; 00512af2
        ;   Label: LAB_00512af2
    PUSH EBX                            ; 00512af8
    PUSH EDX                            ; 00512af9
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 ; 00512afa
        ;   XREF to: 005088f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet * this_ptr, int index)
    MOV EAX,0x1                         ; 00512aff
    ADD ESP,0x8                         ; 00512b04
    MOV ESP,EBP                         ; 00512b07
    POP EBP                             ; 00512b09
    POP EDI                             ; 00512b0a
    POP ESI                             ; 00512b0b
    POP EBX                             ; 00512b0c
    RET                                 ; 00512b0d
    MOV dword ptr [EBP + 0x1c],0x1      ; 00512b0e
        ;   Label: LAB_00512b0e
    JMP 0x0051260f                      ; 00512b15
        ;   XREF to: 0051260f (UNCONDITIONAL_JUMP)  ; LAB_0051260f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00512b1a
        ;   Label: LAB_00512b1a
    MOV EDX,dword ptr [EDX]             ; 00512b1d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00512b1f
    ADD EAX,EDX                         ; 00512b26
    ADD EAX,EAX                         ; 00512b28
    MOV dword ptr [ESP + 0x2d8],EAX     ; 00512b2a
    MOV EAX,[0x005b9354]                ; 00512b31 | DAT_005b9354
    FILD dword ptr [ESP + 0x2d8]        ; 00512b36
    FMUL float ptr [EAX + 0x264]        ; 00512b3d | DAT_01c77850
    CALL crt_math.c_round_FUN_00563a30  ; 00512b43
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x2a0]       ; 00512b48
    CMP dword ptr [ESP + 0x2a0],0x3     ; 00512b4f
    JGE 0x00512b64                      ; 00512b57
        ;   XREF to: 00512b64 (CONDITIONAL_JUMP)  ; LAB_00512b64
    MOV dword ptr [ESP + 0x2a0],0x3     ; 00512b59
    MOV EDX,dword ptr [EBP + 0x14]      ; 00512b64
        ;   Label: LAB_00512b64
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 00512b67
    MOV EBX,dword ptr [EDX]             ; 00512b6e
    CMP EAX,EBX                         ; 00512b70
    JLE 0x00512b7b                      ; 00512b72
        ;   XREF to: 00512b7b (CONDITIONAL_JUMP)  ; LAB_00512b7b
    MOV dword ptr [ESP + 0x2a0],EBX     ; 00512b74
    MOV EDX,dword ptr [0x005b9354]      ; 00512b7b | DAT_005b9354
        ;   Label: LAB_00512b7b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00512b81
    FLD float ptr [EDX + 0x264]         ; 00512b84 | DAT_01c77850
    FSUBR float ptr [EAX + 0x15aac4]    ; 00512b8a
    FST float ptr [EAX + 0x15aac4]      ; 00512b90
    FLDZ                                ; 00512b96
    FCOMPP                              ; 00512b98
    FNSTSW AX                           ; 00512b9a
    SAHF                                ; 00512b9c
    JC 0x005127e3                       ; 00512b9d
        ;   XREF to: 005127e3 (CONDITIONAL_JUMP)  ; LAB_005127e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00512ba3
    MOV dword ptr [EAX + 0x15aac0],0xffffffff ; 00512ba6
    MOV dword ptr [EAX + 0x15aac4],0x0  ; 00512bb0
    JMP 0x005127e3                      ; 00512bba
        ;   XREF to: 005127e3 (UNCONDITIONAL_JUMP)  ; LAB_005127e3
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14cd70] ; 00512bbf | DAT_01fa3ff4
        ;   Label: LAB_00512bbf
    PUSH EBX                            ; 00512bc6
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00512bc7
    CALL dword ptr [EAX + 0x40]         ; 00512bcd
    ADD ESP,0x4                         ; 00512bd0
    TEST EAX,EAX                        ; 00512bd3
    JZ 0x00512c75                       ; 00512bd5
        ;   XREF to: 00512c75 (CONDITIONAL_JUMP)  ; LAB_00512c75
    CMP EBX,dword ptr [EBP + 0x18]      ; 00512bdb
    JZ 0x00512c75                       ; 00512bde
        ;   XREF to: 00512c75 (CONDITIONAL_JUMP)  ; LAB_00512c75
    LEA EAX,[EBX + 0x20]                ; 00512be4
    FLD float ptr [EAX]                 ; 00512be7
    FSUB float ptr [EDI]                ; 00512be9
    FMUL ST0                            ; 00512beb
    FLD float ptr [EAX + 0x4]           ; 00512bed
    FSUB float ptr [EDI + 0x4]          ; 00512bf0
    FMUL ST0                            ; 00512bf3
    FLD float ptr [EAX + 0x8]           ; 00512bf5
    FXCH                                ; 00512bf8
    FADDP ST2,ST0                       ; 00512bfa
    FSUB float ptr [EDI + 0x8]          ; 00512bfc
    FMUL ST0                            ; 00512bff
    FADDP                               ; 00512c01
    FCOMP float ptr [ESP + 0x248]       ; 00512c03
    FNSTSW AX                           ; 00512c0a
    SAHF                                ; 00512c0c
    JA 0x00512c75                       ; 00512c0d
        ;   XREF to: 00512c75 (CONDITIONAL_JUMP)  ; LAB_00512c75
    MOV EAX,[0x026639ec]                ; 00512c0f | DAT_026639ec
    MOV dword ptr [EAX*0x4 + 0x26639f0],EBX ; 00512c14 | DAT_026639f0
    LEA EAX,[ESP + 0x1a8]               ; 00512c1b
    PUSH EAX                            ; 00512c22
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00512c23
    PUSH EBX                            ; 00512c29
    CALL dword ptr [EDX + 0x14]         ; 00512c2a
    IMUL EDX,dword ptr [0x026639ec],0x18 ; 00512c2d | DAT_026639ec
    ADD ESP,0x8                         ; 00512c34
    ADD EDX,0x2665930                   ; 00512c37
    MOV ECX,EAX                         ; 00512c3d
    MOV EBX,EDX                         ; 00512c3f
    CMP EDX,EAX                         ; 00512c41
    JZ 0x00512c55                       ; 00512c43
        ;   XREF to: 00512c55 (CONDITIONAL_JUMP)  ; LAB_00512c55
    FLD float ptr [EAX]                 ; 00512c45
    FSTP float ptr [EDX]                ; 00512c47
    FLD float ptr [EAX + 0x4]           ; 00512c49
    FSTP float ptr [EDX + 0x4]          ; 00512c4c
    FLD float ptr [EAX + 0x8]           ; 00512c4f
    FSTP float ptr [EDX + 0x8]          ; 00512c52
    LEA EAX,[ECX + 0xc]                 ; 00512c55
        ;   Label: LAB_00512c55
    LEA EDX,[EBX + 0xc]                 ; 00512c58
    CMP EDX,EAX                         ; 00512c5b
    JZ 0x00512c6f                       ; 00512c5d
        ;   XREF to: 00512c6f (CONDITIONAL_JUMP)  ; LAB_00512c6f
    MOV ECX,dword ptr [EAX]             ; 00512c5f
    MOV dword ptr [EDX],ECX             ; 00512c61
    MOV ECX,dword ptr [EAX + 0x4]       ; 00512c63
    MOV dword ptr [EDX + 0x4],ECX       ; 00512c66
    MOV ECX,dword ptr [EAX + 0x8]       ; 00512c69
    MOV dword ptr [EDX + 0x8],ECX       ; 00512c6c
    INC dword ptr [0x026639ec]          ; 00512c6f | DAT_026639ec
        ;   Label: LAB_00512c6f
    MOV EAX,dword ptr [ESP + 0x2d0]     ; 00512c75
        ;   Label: LAB_00512c75
    INC EAX                             ; 00512c7c
    ADD ESI,0x4                         ; 00512c7d
    MOV dword ptr [ESP + 0x2d0],EAX     ; 00512c80
    JMP 0x0051291d                      ; 00512c87
        ;   XREF to: 0051291d (UNCONDITIONAL_JUMP)  ; LAB_0051291d
    IMUL EBX,EAX,0x1a0                  ; 00512c8c
        ;   Label: LAB_00512c8c
    MOV EAX,EDX                         ; 00512c92
    MOV EDX,dword ptr [ESP + 0x244]     ; 00512c94
    CMP EDX,dword ptr [EBX + EAX*0x1 + 0x19c] ; 00512c9b
    JNZ 0x00513561                      ; 00512ca2
        ;   XREF to: 00513561 (CONDITIONAL_JUMP)  ; LAB_00513561
    MOV EAX,dword ptr [EBP + 0x18]      ; 00512ca8
    MOV ECX,0x5be774                    ; 00512cab | DAT_005be774
    MOV EDX,dword ptr [ESP + 0x258]     ; 00512cb0
    MOV dword ptr [ESP + 0x25c],EAX     ; 00512cb7
    MOV dword ptr [ESP + 0x260],ECX     ; 00512cbe | DAT_005be774
    ADD EBX,EDX                         ; 00512cc5
    MOV EAX,[0x020875f4]                ; 00512cc7 | DAT_020875f4
    MOV dword ptr [ESP + 0x268],EBX     ; 00512ccc
    MOV ESI,dword ptr [EBX + 0x19c]     ; 00512cd3
    MOV dword ptr [ESP + 0x264],EAX     ; 00512cd9
    TEST ESI,ESI                        ; 00512ce0
    JZ 0x00512d66                       ; 00512ce2
        ;   XREF to: 00512d66 (CONDITIONAL_JUMP)  ; LAB_00512d66
    LEA ESI,[EBX + 0x100]               ; 00512ce8
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 00512cee
    FLD float ptr [ESI]                 ; 00512cf5
    FSUB float ptr [EAX]                ; 00512cf7
    FMUL ST0                            ; 00512cf9
    FLD float ptr [ESI + 0x4]           ; 00512cfb
    FSUB float ptr [EAX + 0x4]          ; 00512cfe
    FMUL ST0                            ; 00512d01
    FLD float ptr [ESI + 0x8]           ; 00512d03
    FXCH                                ; 00512d06
    FADDP ST2,ST0                       ; 00512d08
    FSUB float ptr [EAX + 0x8]          ; 00512d0a
    FMUL ST0                            ; 00512d0d
    FADDP                               ; 00512d0f
    FCOMP float ptr [ESP + 0x284]       ; 00512d11
    FNSTSW AX                           ; 00512d18
    SAHF                                ; 00512d1a
    JBE 0x00512d6f                      ; 00512d1b
        ;   XREF to: 00512d6f (CONDITIONAL_JUMP)  ; LAB_00512d6f
    XOR EAX,EAX                         ; 00512d1d
        ;   Label: LAB_00512d1d
    MOV dword ptr [ESP + 0x26c],EAX     ; 00512d1f
        ;   Label: LAB_00512d1f
    MOV EAX,dword ptr [ESP + 0x26c]     ; 00512d26
        ;   Label: LAB_00512d26
    MOV dword ptr [ESP],EAX             ; 00512d2d
    CMP dword ptr [EBP + 0x1c],0x0      ; 00512d30
        ;   Label: LAB_00512d30
    JZ 0x0051356d                       ; 00512d34
        ;   XREF to: 0051356d (CONDITIONAL_JUMP)  ; LAB_0051356d
    MOV EDX,dword ptr [ESP]             ; 00512d3a
        ;   Label: LAB_00512d3a
    MOV EAX,[0x020875f4]                ; 00512d3d | DAT_020875f4
    MOV ESI,dword ptr [ESP + 0x2a0]     ; 00512d42
    LEA EBX,[EAX + 0x1]                 ; 00512d49
    DEC ESI                             ; 00512d4c
    MOV dword ptr [EAX*0x4 + 0x2663604],EDX ; 00512d4d | DAT_02663604
    MOV dword ptr [0x020875f4],EBX      ; 00512d54 | DAT_020875f4
    MOV dword ptr [ESP + 0x2a0],ESI     ; 00512d5a
    JMP 0x00512971                      ; 00512d61
        ;   XREF to: 00512971 (UNCONDITIONAL_JUMP)  ; LAB_00512971
    MOV dword ptr [ESP + 0x26c],ESI     ; 00512d66
        ;   Label: LAB_00512d66
    JMP 0x00512d26                      ; 00512d6d
        ;   XREF to: 00512d26 (UNCONDITIONAL_JUMP)  ; LAB_00512d26
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 00512d6f
        ;   Label: LAB_00512d6f
    PUSH dword ptr [ESP + 0x240]        ; 00512d76
    PUSH EAX                            ; 00512d7d
    PUSH EBX                            ; 00512d7e
    CALL core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00514980 ; 00512d7f
        ;   XREF to: 00514980 (UNCONDITIONAL_CALL)  ; int core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00514980(C3DSCamera * this_ptr, CVector3f * world_position, float radius)
    ADD ESP,0xc                         ; 00512d84
    TEST EAX,EAX                        ; 00512d87
    JZ 0x00512d1f                       ; 00512d89
        ;   XREF to: 00512d1f (CONDITIONAL_JUMP)  ; LAB_00512d1f
    PUSH ESI                            ; 00512d8b
    MOV ECX,dword ptr [0x005ae704]      ; 00512d8c | DAT_005ae704
    PUSH ECX                            ; 00512d92 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 00512d93
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 00512d98
    MOV ESI,dword ptr [0x005ae704]      ; 00512d9b | DAT_005ae704
    PUSH dword ptr [EBX + 0x140]        ; 00512da1
    PUSH ESI                            ; 00512da7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 00512da8
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 00512dad
    LEA EAX,[EBX + 0x10c]               ; 00512db0
    PUSH EAX                            ; 00512db6
    MOV EDI,dword ptr [0x005ae704]      ; 00512db7 | DAT_005ae704
    PUSH EDI                            ; 00512dbd | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780 ; 00512dbe
        ;   XREF to: 00460780 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00512dc3
    MOV ECX,dword ptr [ESP + 0x2c0]     ; 00512dc6
    MOV EAX,0x800000ff                  ; 00512dcd
    PUSH ECX                            ; 00512dd2
    MOV ESI,dword ptr [0x005ae704]      ; 00512dd3 | DAT_005ae704
    XOR EDX,EDX                         ; 00512dd9
    PUSH ESI                            ; 00512ddb | DAT_01b4d738
    MOV dword ptr [ESP + 0x278],EAX     ; 00512ddc
    MOV dword ptr [ESP + 0x27c],EDX     ; 00512de3
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00512dea
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00512def
    MOV EAX,dword ptr [EBP + 0x18]      ; 00512df2
    MOV EAX,dword ptr [EAX + 0x30]      ; 00512df5
    MOV dword ptr [ESP + 0x1fc],EAX     ; 00512df8
    MOV EAX,dword ptr [EBP + 0x18]      ; 00512dff
    MOV EAX,dword ptr [EAX + 0x38]      ; 00512e02
    MOV dword ptr [ESP + 0x204],EAX     ; 00512e05
    MOV EAX,dword ptr [EBX + 0x110]     ; 00512e0c
    PUSH 0x0                            ; 00512e12
    MOV dword ptr [ESP + 0x204],EAX     ; 00512e14
    LEA EAX,[ESP + 0x200]               ; 00512e1b
    PUSH EAX                            ; 00512e22
    MOV EDI,dword ptr [0x005ae704]      ; 00512e23 | DAT_005ae704
    PUSH EDI                            ; 00512e29 | DAT_01b4d738
    XOR ESI,ESI                         ; 00512e2a
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00512e2c
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    LEA EDI,[ESP + 0xd8]                ; 00512e31
    ADD ESP,0xc                         ; 00512e38
    MOV EAX,[0x005ae704]                ; 00512e3b | DAT_005ae704
        ;   Label: LAB_00512e3b
    MOV EAX,dword ptr [EAX]             ; 00512e40 | DAT_01b4d738
    PUSH EDI                            ; 00512e42
    ADD EAX,ESI                         ; 00512e43
    PUSH EAX                            ; 00512e45
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00512e46
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 00512e4b | DAT_005ae704
    ADD ESI,0x30                        ; 00512e50
    ADD ESP,0x8                         ; 00512e53
    MOV EAX,dword ptr [EAX]             ; 00512e56 | DAT_01b4d738
    ADD EDI,0xc                         ; 00512e58
    MOV ECX,dword ptr [ESP + 0x270]     ; 00512e5b
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x20] ; 00512e62
    MOV EBX,dword ptr [ESP + 0x274]     ; 00512e66
    AND ECX,EDX                         ; 00512e6d
    OR EBX,EDX                          ; 00512e6f
    MOV dword ptr [ESP + 0x270],ECX     ; 00512e71
    MOV dword ptr [ESP + 0x274],EBX     ; 00512e78
    CMP ESI,0x180                       ; 00512e7f
    JNZ 0x00512e3b                      ; 00512e85
        ;   XREF to: 00512e3b (CONDITIONAL_JUMP)  ; LAB_00512e3b
    TEST byte ptr [ESP + 0x273],0x80    ; 00512e87
    JNZ 0x005132fb                      ; 00512e8f
        ;   XREF to: 005132fb (CONDITIONAL_JUMP)  ; LAB_005132fb
    MOV EAX,dword ptr [ESP + 0x260]     ; 00512e95
        ;   Label: LAB_00512e95
    XOR ESI,ESI                         ; 00512e9c
    XOR EDX,EDX                         ; 00512e9e
    LEA EBX,[EAX + 0x1b0]               ; 00512ea0 | DAT_005be924
    MOV dword ptr [ESP + 0x278],ESI     ; 00512ea6
    MOV ECX,dword ptr [ESP + 0x278]     ; 00512ead
        ;   Label: LAB_00512ead
    MOV dword ptr [ESP + EDX*0x1 + 0x160],EAX ; 00512eb4 | DAT_005be774 | DAT_005be7bc
    ADD EDX,0x4                         ; 00512ebb
    INC ECX                             ; 00512ebe
    ADD EAX,0x48                        ; 00512ebf
    MOV dword ptr [ESP + 0x278],ECX     ; 00512ec2
    CMP EAX,EBX                         ; 00512ec9
    JNZ 0x00512ead                      ; 00512ecb
        ;   XREF to: 00512ead (CONDITIONAL_JUMP)  ; LAB_00512ead
    MOV EBX,dword ptr [ESP + 0x25c]     ; 00512ecd
    PUSH EBX                            ; 00512ed4
    XOR ESI,ESI                         ; 00512ed5
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00512ed7
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00512edc
    MOV dword ptr [ESP + 0x2c4],ESI     ; 00512edf
    MOV ESI,dword ptr [0x005ae704]      ; 00512ee6 | DAT_005ae704
        ;   Label: LAB_00512ee6
    MOV EDI,dword ptr [ESP + 0x2c4]     ; 00512eec
    MOV ESI,dword ptr [ESI]             ; 00512ef3 | DAT_01b4d738
    ADD ESI,EDI                         ; 00512ef5
    MOV EAX,dword ptr [ESI + 0x8]       ; 00512ef7
    TEST EAX,EAX                        ; 00512efa
    JLE 0x00512f2b                      ; 00512efc
        ;   XREF to: 00512f2b (CONDITIONAL_JUMP)  ; LAB_00512f2b
    LEA EDI,[EAX + 0x80]                ; 00512efe
    MOV EBX,EAX                         ; 00512f04
    MOV EDX,EDI                         ; 00512f06
    MOV EAX,dword ptr [ESI]             ; 00512f08
    IMUL EDX                            ; 00512f0a
    IDIV EBX                            ; 00512f0c
    MOV dword ptr [ESI],EAX             ; 00512f0e
    MOV EDX,EDI                         ; 00512f10
    MOV EBX,dword ptr [ESI + 0x8]       ; 00512f12
    MOV EAX,dword ptr [ESI + 0x4]       ; 00512f15
    IMUL EDX                            ; 00512f18
    IDIV EBX                            ; 00512f1a
    MOV dword ptr [ESI + 0x4],EAX       ; 00512f1c
    PUSH ESI                            ; 00512f1f
    MOV dword ptr [ESI + 0x8],EDI       ; 00512f20
    CALL engine_matrix.c_projectTransformedPoint_FUN_004cd260 ; 00512f23
        ;   XREF to: 004cd260 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectTransformedPoint_FUN_004cd260(SProjectedVertex * point)
    ADD ESP,0x4                         ; 00512f28
    MOV EDX,dword ptr [ESP + 0x2c4]     ; 00512f2b
        ;   Label: LAB_00512f2b
    ADD EDX,0x30                        ; 00512f32
    MOV dword ptr [ESP + 0x2c4],EDX     ; 00512f35
    CMP EDX,0x180                       ; 00512f3c
    JNZ 0x00512ee6                      ; 00512f42
        ;   XREF to: 00512ee6 (CONDITIONAL_JUMP)  ; LAB_00512ee6
    MOV EBX,0x3f800000                  ; 00512f44
    XOR EAX,EAX                         ; 00512f49
    MOV dword ptr [ESP + 0x8],EBX       ; 00512f4b
    MOV EDX,dword ptr [0x005ae704]      ; 00512f4f | DAT_005ae704
        ;   Label: LAB_00512f4f
    MOV EDX,dword ptr [EDX]             ; 00512f55 | DAT_01b4d738
    ADD EDX,EAX                         ; 00512f57
    TEST byte ptr [EDX + 0x13],0x80     ; 00512f59
    JZ 0x00512f77                       ; 00512f5d
        ;   XREF to: 00512f77 (CONDITIONAL_JUMP)  ; LAB_00512f77
    CMP dword ptr [EDX + 0x8],0x0       ; 00512f5f
    JLE 0x0051331e                      ; 00512f63
        ;   XREF to: 0051331e (CONDITIONAL_JUMP)  ; LAB_0051331e
    FLD float ptr [ESP + 0x8]           ; 00512f69
    FMUL double ptr [0x00590be5]        ; 00512f6d | DOUBLE_00590be5
    FSTP float ptr [ESP + 0x8]          ; 00512f73
        ;   Label: LAB_00512f73
    ADD EAX,0x30                        ; 00512f77
        ;   Label: LAB_00512f77
    CMP EAX,0x180                       ; 00512f7a
    JNZ 0x00512f4f                      ; 00512f7f
        ;   XREF to: 00512f4f (CONDITIONAL_JUMP)  ; LAB_00512f4f
    XOR EDI,EDI                         ; 00512f81
    MOV EDX,dword ptr [0x026639ec]      ; 00512f83 | DAT_026639ec
    MOV dword ptr [ESP + 0x2d4],EDI     ; 00512f89
    MOV dword ptr [ESP + 0x27c],EDI     ; 00512f90
    TEST EDX,EDX                        ; 00512f97
    JLE 0x00513167                      ; 00512f99
        ;   XREF to: 00513167 (CONDITIONAL_JUMP)  ; LAB_00513167
    IMUL EAX,dword ptr [ESP + 0x264],0x3000 ; 00512f9f
    MOV EDX,0x20875f8                   ; 00512faa
    MOV ESI,0x2665930                   ; 00512faf
    MOV dword ptr [ESP + 0x2c8],EDI     ; 00512fb4
    ADD EDX,EAX                         ; 00512fbb
    MOV EAX,dword ptr [ESP + 0x268]     ; 00512fbd
    MOV dword ptr [ESP + 0x2cc],ESI     ; 00512fc4
    ADD EAX,0x100                       ; 00512fcb
    MOV dword ptr [ESP + 0x2bc],EDX     ; 00512fd0
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00512fd7
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 00512fde
        ;   Label: LAB_00512fde
    MOV EAX,dword ptr [EAX + 0x26639f0] ; 00512fe5
    MOV EDX,dword ptr [ESP + 0x2a4]     ; 00512feb
    FLD float ptr [EAX + 0x20]          ; 00512ff2
    FSUB float ptr [EDX]                ; 00512ff5
    FMUL ST0                            ; 00512ff7
    FLD float ptr [EAX + 0x24]          ; 00512ff9
    FSUB float ptr [EDX + 0x4]          ; 00512ffc
    FMUL ST0                            ; 00512fff
    FLD float ptr [EAX + 0x28]          ; 00513001
    FXCH                                ; 00513004
    FADDP ST2,ST0                       ; 00513006
    FSUB float ptr [EDX + 0x8]          ; 00513008
    FMUL ST0                            ; 0051300b
    FADDP                               ; 0051300d
    MOV dword ptr [ESP + 0x294],EAX     ; 0051300f
    FCOMP float ptr [ESP + 0x2a8]       ; 00513016
    FNSTSW AX                           ; 0051301d
    SAHF                                ; 0051301f
    JA 0x00513128                       ; 00513020
        ;   XREF to: 00513128 (CONDITIONAL_JUMP)  ; LAB_00513128
    MOV EDI,dword ptr [ESP + 0x294]     ; 00513026
    PUSH EDI                            ; 0051302d
    MOV ESI,0x180                       ; 0051302e
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00513033
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    MOV EAX,0x800000ff                  ; 00513038
    ADD ESP,0x4                         ; 0051303d
    XOR EDX,EDX                         ; 00513040
    XOR EDI,EDI                         ; 00513042
    MOV dword ptr [ESP + 0x298],EAX     ; 00513044
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 0051304b
    MOV dword ptr [ESP + 0x29c],EDX     ; 00513052
    MOV dword ptr [ESP + 0x2b8],EAX     ; 00513059
    PUSH EDI                            ; 00513060
        ;   Label: LAB_00513060
    LEA EAX,[ESP + 0x1d0]               ; 00513061
    PUSH EAX                            ; 00513068
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 00513069
    PUSH EAX                            ; 00513070
    LEA EBX,[ESP + 0x214]               ; 00513071
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70 ; 00513078
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0051307d
    LEA EAX,[ESP + 0x1cc]               ; 00513080
    MOV EDX,dword ptr [0x005ae704]      ; 00513087 | DAT_005ae704
    FLD float ptr [EAX]                 ; 0051308d
    FMUL float ptr [0x005a1a70]         ; 0051308f | DAT_005a1a70
    FISTP dword ptr [EBX]               ; 00513095
    FLD float ptr [EAX + 0x4]           ; 00513097
    FMUL float ptr [0x005a1a70]         ; 0051309a | DAT_005a1a70
    FISTP dword ptr [EBX + 0x4]         ; 005130a0
    FLD float ptr [EAX + 0x8]           ; 005130a3
    FMUL float ptr [0x005a1a70]         ; 005130a6 | DAT_005a1a70
    FISTP dword ptr [EBX + 0x8]         ; 005130ac
    LEA EAX,[ESP + 0x208]               ; 005130af
    PUSH EAX                            ; 005130b6
    MOV EAX,dword ptr [EDX]             ; 005130b7 | DAT_01b4d738
    ADD EAX,ESI                         ; 005130b9
    PUSH EAX                            ; 005130bb
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 005130bc
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 005130c1 | DAT_005ae704
    ADD ESI,0x30                        ; 005130c6
    ADD ESP,0x8                         ; 005130c9
    MOV EAX,dword ptr [EAX]             ; 005130cc | DAT_01b4d738
    INC EDI                             ; 005130ce
    MOV ECX,dword ptr [ESP + 0x298]     ; 005130cf
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x20] ; 005130d6
    MOV EBX,dword ptr [ESP + 0x29c]     ; 005130da
    AND ECX,EDX                         ; 005130e1
    OR EBX,EDX                          ; 005130e3
    MOV dword ptr [ESP + 0x298],ECX     ; 005130e5
    MOV dword ptr [ESP + 0x29c],EBX     ; 005130ec
    CMP EDI,0x8                         ; 005130f3
    JL 0x00513060                       ; 005130f6
        ;   XREF to: 00513060 (CONDITIONAL_JUMP)  ; LAB_00513060
    MOV ESI,dword ptr [ESP + 0x294]     ; 005130fc
    PUSH ESI                            ; 00513103
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00513104
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00513109
    TEST byte ptr [ESP + 0x29b],0x80    ; 0051310c
    JZ 0x0051332d                       ; 00513114
        ;   XREF to: 0051332d (CONDITIONAL_JUMP)  ; LAB_0051332d
    TEST byte ptr [ESP + 0x298],0xff    ; 0051311a
    JZ 0x0051332d                       ; 00513122
        ;   XREF to: 0051332d (CONDITIONAL_JUMP)  ; LAB_0051332d
    MOV EDX,dword ptr [ESP + 0x2c8]     ; 00513128
        ;   Label: LAB_00513128
    MOV ECX,dword ptr [ESP + 0x2cc]     ; 0051312f
    MOV EBX,dword ptr [ESP + 0x2d4]     ; 00513136
    MOV ESI,dword ptr [0x026639ec]      ; 0051313d | DAT_026639ec
    ADD EDX,0x4                         ; 00513143
    ADD ECX,0x18                        ; 00513146
    INC EBX                             ; 00513149
    MOV dword ptr [ESP + 0x2c8],EDX     ; 0051314a
    MOV dword ptr [ESP + 0x2cc],ECX     ; 00513151
    MOV dword ptr [ESP + 0x2d4],EBX     ; 00513158
    CMP EBX,ESI                         ; 0051315f
    JL 0x00512fde                       ; 00513161
        ;   XREF to: 00512fde (CONDITIONAL_JUMP)  ; LAB_00512fde
    PUSH 0x0                            ; 00513167
        ;   Label: LAB_00513167
    MOV EDI,dword ptr [0x005ae704]      ; 00513169 | DAT_005ae704
    PUSH EDI                            ; 0051316f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 00513170
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00513175
    CMP dword ptr [ESP + 0x27c],0x0     ; 00513178
    JNZ 0x005131ac                      ; 00513180
        ;   XREF to: 005131ac (CONDITIONAL_JUMP)  ; LAB_005131ac
    IMUL EAX,dword ptr [ESP + 0x264],0x3000 ; 00513182
    MOV ESI,0x20875f8                   ; 0051318d
    ADD ESI,EAX                         ; 00513192
    XOR EAX,EAX                         ; 00513194
    MOV dword ptr [EAX + 0x1bd4260],ESI ; 00513196 | DAT_01bd4260
        ;   Label: LAB_00513196
    ADD EAX,0x4                         ; 0051319c
    ADD ESI,0x100                       ; 0051319f
    CMP EAX,0xc0                        ; 005131a5
    JNZ 0x00513196                      ; 005131aa
        ;   XREF to: 00513196 (CONDITIONAL_JUMP)  ; LAB_00513196
    PUSH 0x1                            ; 005131ac
        ;   Label: LAB_005131ac
    MOV ECX,dword ptr [0x005ae704]      ; 005131ae | DAT_005ae704
    PUSH ECX                            ; 005131b4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 005131b5
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 005131ba
    TEST byte ptr [ESP + 0x277],0x80    ; 005131bd
    SETNZ AL                            ; 005131c5
    AND EAX,0xff                        ; 005131c8
    PUSH EAX                            ; 005131cd
    MOV EBX,dword ptr [0x005ae704]      ; 005131ce | DAT_005ae704
    PUSH EBX                            ; 005131d4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 005131d5
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 005131da
    XOR ESI,ESI                         ; 005131dd
    MOV EDI,dword ptr [ESP + 0x278]     ; 005131df
    MOV dword ptr [ESP + 0x280],ESI     ; 005131e6
    TEST EDI,EDI                        ; 005131ed
    JLE 0x00513228                      ; 005131ef
        ;   XREF to: 00513228 (CONDITIONAL_JUMP)  ; LAB_00513228
    LEA ESI,[EDI*0x4 + 0x0]             ; 005131f1
    XOR EBX,EBX                         ; 005131f8
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x160] ; 005131fa
        ;   Label: LAB_005131fa
    PUSH EAX                            ; 00513201 | DAT_005be774 | DAT_005be7bc
    MOV EDX,dword ptr [0x005ae704]      ; 00513202 | DAT_005ae704
    PUSH EDX                            ; 00513208 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090 ; 00513209
        ;   XREF to: 0045f090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0051320e
    MOV ECX,dword ptr [ESP + 0x280]     ; 00513211
    ADD ECX,EAX                         ; 00513218
    ADD EBX,0x4                         ; 0051321a
    MOV dword ptr [ESP + 0x280],ECX     ; 0051321d
    CMP EBX,ESI                         ; 00513224
    JL 0x005131fa                       ; 00513226
        ;   XREF to: 005131fa (CONDITIONAL_JUMP)  ; LAB_005131fa
    MOV EAX,[0x005b9354]                ; 00513228 | DAT_005b9354
        ;   Label: LAB_00513228
    CMP dword ptr [EAX + 0x1e8],0x0     ; 0051322d | DAT_01c777d4
    JZ 0x005132b4                       ; 00513234
        ;   XREF to: 005132b4 (CONDITIONAL_JUMP)  ; LAB_005132b4
    IMUL EAX,dword ptr [ESP + 0x264],0x3000 ; 0051323a
    MOV EBX,0x23755f8                   ; 00513245
    XOR EDX,EDX                         ; 0051324a
    ADD EBX,EAX                         ; 0051324c
    MOV ECX,0x100                       ; 0051324e
        ;   Label: LAB_0051324e
    MOV EDI,EBX                         ; 00513253
    MOV ESI,dword ptr [EDX + 0x1bd4260] ; 00513255 | DAT_01bd4260
    ADD EDX,0x4                         ; 0051325b
    PUSH EDI                            ; 0051325e
    MOV EAX,ECX                         ; 0051325f
    SHR ECX,0x2                         ; 00513261
    MOVSD.REP ES:EDI,ESI                ; 00513264
    MOV CL,AL                           ; 00513266
    AND CL,0x3                          ; 00513268
    MOVSB.REP ES:EDI,ESI                ; 0051326b
    POP EDI                             ; 0051326d
    MOV dword ptr [EDX + 0x1bd425c],EBX ; 0051326e | DAT_01bd4260
    ADD EBX,0x100                       ; 00513274
    CMP EDX,0xc0                        ; 0051327a
    JNZ 0x0051324e                      ; 00513280
        ;   XREF to: 0051324e (CONDITIONAL_JUMP)  ; LAB_0051324e
    MOV EDI,dword ptr [ESP + 0x278]     ; 00513282
    XOR ESI,ESI                         ; 00513289
    TEST EDI,EDI                        ; 0051328b
    JLE 0x005132b4                      ; 0051328d
        ;   XREF to: 005132b4 (CONDITIONAL_JUMP)  ; LAB_005132b4
    MOV EBX,dword ptr [ESP + 0x260]     ; 0051328f
    PUSH EBX                            ; 00513296 | DAT_005be774 | DAT_005be7bc
        ;   Label: LAB_00513296
    MOV EAX,[0x005ae704]                ; 00513297 | DAT_005ae704
    PUSH EAX                            ; 0051329c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 ; 0051329d
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 005132a2
    INC ESI                             ; 005132a5
    MOV EDX,dword ptr [ESP + 0x278]     ; 005132a6
    ADD EBX,0x48                        ; 005132ad
    CMP ESI,EDX                         ; 005132b0
    JL 0x00513296                       ; 005132b2
        ;   XREF to: 00513296 (CONDITIONAL_JUMP)  ; LAB_00513296
    PUSH 0x1                            ; 005132b4
        ;   Label: LAB_005132b4
    MOV ECX,dword ptr [0x005ae704]      ; 005132b6 | DAT_005ae704
    PUSH ECX                            ; 005132bc | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 005132bd
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 005132c2
    PUSH 0x0                            ; 005132c5
    MOV EBX,dword ptr [0x005ae704]      ; 005132c7 | DAT_005ae704
    PUSH EBX                            ; 005132cd | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 005132ce
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 005132d3
    MOV EAX,dword ptr [ESP + 0x280]     ; 005132d6
    MOV dword ptr [ESP + 0x2d8],EAX     ; 005132dd
    FILD dword ptr [ESP + 0x2d8]        ; 005132e4
    FMUL float ptr [ESP + 0x8]          ; 005132eb
    FSTP float ptr [ESP + 0x26c]        ; 005132ef
    JMP 0x00512d26                      ; 005132f6
        ;   XREF to: 00512d26 (UNCONDITIONAL_JUMP)  ; LAB_00512d26
    TEST byte ptr [ESP + 0x270],0xff    ; 005132fb
        ;   Label: LAB_005132fb
    JZ 0x00512e95                       ; 00513303
        ;   XREF to: 00512e95 (CONDITIONAL_JUMP)  ; LAB_00512e95
    MOV EDI,dword ptr [ESP + 0x25c]     ; 00513309
    PUSH EDI                            ; 00513310
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00513311
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00513316
    JMP 0x00512d1d                      ; 00513319
        ;   XREF to: 00512d1d (UNCONDITIONAL_JUMP)  ; LAB_00512d1d
    FLD float ptr [ESP + 0x8]           ; 0051331e
        ;   Label: LAB_0051331e
    FMUL double ptr [0x00590bed]        ; 00513322 | DOUBLE_00590bed
    JMP 0x00512f73                      ; 00513328
        ;   XREF to: 00512f73 (UNCONDITIONAL_JUMP)  ; LAB_00512f73
    CMP dword ptr [ESP + 0x27c],0x0     ; 0051332d
        ;   Label: LAB_0051332d
    JNZ 0x0051338f                      ; 00513335
        ;   XREF to: 0051338f (CONDITIONAL_JUMP)  ; LAB_0051338f
    MOV EAX,0x1                         ; 00513337
    MOV ECX,0x3000                      ; 0051333c
    MOV ESI,dword ptr [ESP + 0x2bc]     ; 00513341
    MOV EDI,0x20845f4                   ; 00513348
    MOV dword ptr [ESP + 0x27c],EAX     ; 0051334d
    PUSH EDI                            ; 00513354 | DAT_020845f4
    MOV EAX,ECX                         ; 00513355
    SHR ECX,0x2                         ; 00513357
    MOVSD.REP ES:EDI,ESI                ; 0051335a | DAT_020845f4 | DAT_020845f8
    MOV CL,AL                           ; 0051335c
    AND CL,0x3                          ; 0051335e
    MOVSB.REP ES:EDI,ESI                ; 00513361 | DAT_020845f8 | DAT_020845f9
    POP EDI                             ; 00513363
    MOV ESI,EDI                         ; 00513364
    XOR EAX,EAX                         ; 00513366
    MOV dword ptr [EAX + 0x1bd4260],ESI ; 00513368 | DAT_01bd4260 | DAT_020845f4
        ;   Label: LAB_00513368
    ADD EAX,0x4                         ; 0051336e
    ADD ESI,0x100                       ; 00513371
    CMP EAX,0xc0                        ; 00513377
    JNZ 0x00513368                      ; 0051337c
        ;   XREF to: 00513368 (CONDITIONAL_JUMP)  ; LAB_00513368
    PUSH 0x1                            ; 0051337e
    MOV EDX,dword ptr [0x005ae704]      ; 00513380 | DAT_005ae704
    PUSH EDX                            ; 00513386 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 00513387
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0051338c
    MOV ECX,0x4                         ; 0051338f
        ;   Label: LAB_0051338f
    MOV AH,byte ptr [ESP + 0x29f]       ; 00513394
    MOV dword ptr [ESP + 0x13c],ECX     ; 0051339b
    TEST AH,0x80                        ; 005133a2
    SETNZ AL                            ; 005133a5
    AND EAX,0xff                        ; 005133a8
    PUSH EAX                            ; 005133ad
    MOV EBX,dword ptr [0x005ae704]      ; 005133ae | DAT_005ae704
    PUSH EBX                            ; 005133b4 | DAT_01b4d738
    MOV ESI,0x8                         ; 005133b5
    MOV EDI,0xc                         ; 005133ba
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 005133bf
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    MOV EAX,0xe                         ; 005133c4
    MOV EDX,0xa                         ; 005133c9
    MOV EBX,0x9                         ; 005133ce
    ADD ESP,0x8                         ; 005133d3
    MOV ECX,dword ptr [0x005ae704]      ; 005133d6 | DAT_005ae704
    MOV dword ptr [ESP + 0x158],EAX     ; 005133dc
    LEA EAX,[ESP + 0x138]               ; 005133e3
    MOV dword ptr [ESP + 0x150],ESI     ; 005133ea
    PUSH EAX                            ; 005133f1
    MOV dword ptr [ESP + 0x158],EDI     ; 005133f2
    MOV dword ptr [ESP + 0x160],EDX     ; 005133f9
    PUSH ECX                            ; 00513400 | DAT_01b4d738
    MOV ESI,0xb                         ; 00513401
    MOV EDI,0xf                         ; 00513406
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 0051340b
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0xd                         ; 00513410
    ADD ESP,0x8                         ; 00513415
    MOV EDX,dword ptr [0x005ae704]      ; 00513418 | DAT_005ae704
    MOV dword ptr [ESP + 0x15c],EAX     ; 0051341e
    LEA EAX,[ESP + 0x138]               ; 00513425
    MOV dword ptr [ESP + 0x150],EBX     ; 0051342c
    PUSH EAX                            ; 00513433
    MOV dword ptr [ESP + 0x158],ESI     ; 00513434
    MOV dword ptr [ESP + 0x15c],EDI     ; 0051343b
    PUSH EDX                            ; 00513442 | DAT_01b4d738
    MOV ESI,0xd                         ; 00513443
    MOV EDI,0xc                         ; 00513448
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 0051344d
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV ECX,0x8                         ; 00513452
    ADD ESP,0x8                         ; 00513457
    LEA EAX,[ESP + 0x138]               ; 0051345a
    MOV dword ptr [ESP + 0x150],ECX     ; 00513461
    MOV dword ptr [ESP + 0x154],EBX     ; 00513468
    MOV dword ptr [ESP + 0x158],ESI     ; 0051346f
    PUSH EAX                            ; 00513476
    MOV EAX,[0x005ae704]                ; 00513477 | DAT_005ae704
    MOV dword ptr [ESP + 0x160],EDI     ; 0051347c
    PUSH EAX                            ; 00513483 | DAT_01b4d738
    MOV EBX,0xf                         ; 00513484
    MOV ESI,0xb                         ; 00513489
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 0051348e
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDX,0xa                         ; 00513493
    MOV ECX,0xe                         ; 00513498
    LEA EAX,[ESP + 0x140]               ; 0051349d
    ADD ESP,0x8                         ; 005134a4
    MOV EDI,dword ptr [0x005ae704]      ; 005134a7 | DAT_005ae704
    MOV dword ptr [ESP + 0x150],EDX     ; 005134ad
    PUSH EAX                            ; 005134b4
    MOV dword ptr [ESP + 0x158],ECX     ; 005134b5
    MOV dword ptr [ESP + 0x15c],EBX     ; 005134bc
    PUSH EDI                            ; 005134c3 | DAT_01b4d738
    MOV dword ptr [ESP + 0x164],ESI     ; 005134c4
    MOV EBX,0x9                         ; 005134cb
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 005134d0
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x8                         ; 005134d5
    ADD ESP,0x8                         ; 005134da
    MOV EDX,0xa                         ; 005134dd
    MOV dword ptr [ESP + 0x150],EAX     ; 005134e2
    LEA EAX,[ESP + 0x138]               ; 005134e9
    MOV dword ptr [ESP + 0x158],ESI     ; 005134f0
    PUSH EAX                            ; 005134f7
    MOV ESI,dword ptr [0x005ae704]      ; 005134f8 | DAT_005ae704
    MOV EDI,0xc                         ; 005134fe
    PUSH ESI                            ; 00513503 | DAT_01b4d738
    MOV dword ptr [ESP + 0x15c],EDX     ; 00513504
    MOV dword ptr [ESP + 0x164],EBX     ; 0051350b
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 00513512
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0xd                         ; 00513517
    ADD ESP,0x8                         ; 0051351c
    MOV EDX,0xf                         ; 0051351f
    MOV dword ptr [ESP + 0x154],EAX     ; 00513524
    LEA EAX,[ESP + 0x138]               ; 0051352b
    MOV ECX,0xe                         ; 00513532
    PUSH EAX                            ; 00513537
    MOV EBX,dword ptr [0x005ae704]      ; 00513538 | DAT_005ae704
    MOV dword ptr [ESP + 0x154],EDI     ; 0051353e
    PUSH EBX                            ; 00513545 | DAT_01b4d738
    MOV dword ptr [ESP + 0x160],EDX     ; 00513546
    MOV dword ptr [ESP + 0x164],ECX     ; 0051354d
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 00513554
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00513559
    JMP 0x00513128                      ; 0051355c
        ;   XREF to: 00513128 (UNCONDITIONAL_JUMP)  ; LAB_00513128
    MOV dword ptr [ESP],0xc7c34ff3      ; 00513561
        ;   Label: LAB_00513561
    JMP 0x00512d30                      ; 00513568
        ;   XREF to: 00512d30 (UNCONDITIONAL_JUMP)  ; LAB_00512d30
    FLDZ                                ; 0051356d
        ;   Label: LAB_0051356d
    FCOMP float ptr [ESP]               ; 0051356f
    FNSTSW AX                           ; 00513572
    SAHF                                ; 00513574
    JNC 0x00512d3a                      ; 00513575
        ;   XREF to: 00512d3a (CONDITIONAL_JUMP)  ; LAB_00512d3a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051357b
    MOV EAX,[0x020875f4]                ; 0051357e | DAT_020875f4
    CMP EAX,dword ptr [EDX + 0x15aabc]  ; 00513583
    JNZ 0x0051359b                      ; 00513589
        ;   XREF to: 0051359b (CONDITIONAL_JUMP)  ; LAB_0051359b
    FLD float ptr [ESP]                 ; 0051358b
    FLD ST0                             ; 0051358e
    FMUL double ptr [0x00590bf5]        ; 00513590 | DOUBLE_00590bf5
    FSTP ST1                            ; 00513596
    FSTP float ptr [ESP]                ; 00513598
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051359b
        ;   Label: LAB_0051359b
    MOV EAX,[0x020875f4]                ; 0051359e | DAT_020875f4
    CMP EAX,dword ptr [EDX + 0x15aac0]  ; 005135a3
    JNZ 0x00512d3a                      ; 005135a9
        ;   XREF to: 00512d3a (CONDITIONAL_JUMP)  ; LAB_00512d3a
    FLD float ptr [ESP]                 ; 005135af
    FLD ST0                             ; 005135b2
    FMUL double ptr [0x00590bfd]        ; 005135b4 | DOUBLE_00590bfd
    FSTP ST1                            ; 005135ba
    FSTP float ptr [ESP]                ; 005135bc
    JMP 0x00512d3a                      ; 005135bf
        ;   XREF to: 00512d3a (UNCONDITIONAL_JUMP)  ; LAB_00512d3a

