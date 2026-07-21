; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9580(int param_1)
;
; Local Variables:
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x17c]:1  local_17c
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined        Stack[-0x140]:1  local_140
; undefined        Stack[-0x134]:1  local_134
; undefined        Stack[-0x128]:1  local_128
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
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
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
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
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00587f2a
;   undefined4 DAT_00587f32
;   undefined4 DAT_00587f3a
;   undefined4 DAT_00587f42
;   undefined4 DAT_00587f4a
;   undefined4 DAT_005993b0
;   undefined4 DAT_005a003c
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
;   core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20
;   core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640
;   core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_getTranslation_FUN_0055bc00
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;   crt_memory.c___arrinit_FUN_005644a7
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9580
        ;   Label: FUN_004c9580
    PUSH ESI                            ; 004c9581
    PUSH EDI                            ; 004c9582
    PUSH EBP                            ; 004c9583
    MOV EBP,ESP                         ; 004c9584
    SUB ESP,0x1cc                       ; 004c9586
    SUB EBP,0x7e                        ; 004c958c
    MOV EDX,dword ptr [EBP + 0x92]      ; 004c958f
    PUSH EDX                            ; 004c9595
    MOV EBX,dword ptr [EBP + 0x92]      ; 004c9596
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004c959c
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    ADD ESP,0x4                         ; 004c95a1
    ADD EBX,0x150                       ; 004c95a4
    PUSH EBX                            ; 004c95aa
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004c95ab
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c95b0
    ADD ESP,0x4                         ; 004c95b6
    ADD EAX,0x2cc                       ; 004c95b9
    PUSH EAX                            ; 004c95be
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004c95bf
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c95c4
    ADD ESP,0x4                         ; 004c95ca
    ADD EAX,0x448                       ; 004c95cd
    PUSH EAX                            ; 004c95d2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004c95d3
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c95d8
    ADD ESP,0x4                         ; 004c95de
    ADD EAX,0x14b8                      ; 004c95e1
    PUSH EAX                            ; 004c95e6
    MOV ECX,dword ptr [0x005ae704]      ; 004c95e7 | DAT_005ae704
    PUSH ECX                            ; 004c95ed | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004c95ee
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    ADD ESP,0x8                         ; 004c95f3
    PUSH EBX                            ; 004c95f6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c95f7
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    LEA EBX,[EAX + 0x338]               ; 004c95fc
    MOV EAX,dword ptr [EBX]             ; 004c9602
    MOV dword ptr [EBP + -0x36],EAX     ; 004c9604
    LEA EAX,[EBX + 0x4]                 ; 004c9607
    MOV EAX,dword ptr [EAX]             ; 004c960a
    MOV dword ptr [EBP + -0x32],EAX     ; 004c960c
    LEA EAX,[EBX + 0x8]                 ; 004c960f
    MOV EAX,dword ptr [EAX]             ; 004c9612
    MOV dword ptr [EBP + -0x2e],EAX     ; 004c9614
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c9617
    ADD EBX,0xc                         ; 004c961a
    MOV dword ptr [EBP + -0x2a],EAX     ; 004c961d
    LEA EAX,[EBX + 0x4]                 ; 004c9620
    MOV EAX,dword ptr [EAX]             ; 004c9623
    MOV dword ptr [EBP + -0x26],EAX     ; 004c9625
    LEA EAX,[EBX + 0x8]                 ; 004c9628
    MOV EAX,dword ptr [EAX]             ; 004c962b
    MOV dword ptr [EBP + -0x22],EAX     ; 004c962d
    MOV dword ptr [EBP + 0x76],EAX      ; 004c9630
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9633
    MOV dword ptr [EAX + 0x1504],0x414239c1 ; 004c9639
    FLD float ptr [EAX + 0x1504]        ; 004c9643
    FADD float ptr [EBP + 0x76]         ; 004c9649
    FLD float ptr [0x005a003c]          ; 004c964c | DAT_005a003c
    FMUL double ptr [0x00587f2a]        ; 004c9652 | DAT_00587f2a
    FCOS                                ; 004c9658
    FDIVP                               ; 004c965a
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c965c
    FLD float ptr [EAX + 0x5e0]         ; 004c9662
    FMUL ST0                            ; 004c9668
    FLD float ptr [EAX + 0x5dc]         ; 004c966a
    FMUL ST0                            ; 004c9670
    FADDP                               ; 004c9672
    FLD float ptr [EAX + 0x5e4]         ; 004c9674
    FMUL ST0                            ; 004c967a
    FXCH ST2                            ; 004c967c
    FSTP float ptr [EAX + 0x1500]       ; 004c967e
    FLD float ptr [EBP + -0x26]         ; 004c9684
    FSUB float ptr [EBP + -0x32]        ; 004c9687
    FXCH ST2                            ; 004c968a
    FADDP                               ; 004c968c
    FXCH                                ; 004c968e
    FSTP float ptr [EAX + 0x1508]       ; 004c9690
    FSQRT                               ; 004c9696
    ADD ESP,0x4                         ; 004c9698
    FLDZ                                ; 004c969b
    FCOMPP                              ; 004c969d
    FNSTSW AX                           ; 004c969f
    SAHF                                ; 004c96a1
    JZ 0x004c9b72                       ; 004c96a2
        ;   XREF to: 004c9b72 (CONDITIONAL_JUMP)  ; LAB_004c9b72
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c96a8
        ;   Label: LAB_004c96a8
    FLD float ptr [EAX + 0x5c8]         ; 004c96ae
    FMUL ST0                            ; 004c96b4
    FLD float ptr [EAX + 0x5c4]         ; 004c96b6
    FMUL ST0                            ; 004c96bc
    FADDP                               ; 004c96be
    FLD float ptr [EAX + 0x5cc]         ; 004c96c0
    FMUL ST0                            ; 004c96c6
    FADDP                               ; 004c96c8
    FSQRT                               ; 004c96ca
    FLDZ                                ; 004c96cc
    FCOMPP                              ; 004c96ce
    FNSTSW AX                           ; 004c96d0
    SAHF                                ; 004c96d2
    JNZ 0x004c96f9                      ; 004c96d3
        ;   XREF to: 004c96f9 (CONDITIONAL_JUMP)  ; LAB_004c96f9
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c96d5
    MOV dword ptr [EAX + 0x5c8],0x40400000 ; 004c96db
    MOV dword ptr [EAX + 0x5cc],0xbdcccccd ; 004c96e5
    MOV dword ptr [EAX + 0x5c4],0x0     ; 004c96ef
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c96f9
        ;   Label: LAB_004c96f9
    ADD EAX,0x5d0                       ; 004c96ff
    PUSH EAX                            ; 004c9704
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9705
    ADD EAX,0x5c4                       ; 004c970b
    PUSH EAX                            ; 004c9710
    LEA EAX,[EBP + 0xffffff12]          ; 004c9711
    PUSH EAX                            ; 004c9717
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004c9718
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c971d
    ADD ESP,0xc                         ; 004c9723
    ADD EAX,0x2cc                       ; 004c9726
    PUSH EAX                            ; 004c972b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c972c
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    LEA EBX,[EAX + 0x338]               ; 004c9731
    MOV EAX,dword ptr [EBX]             ; 004c9737
    MOV dword ptr [EBP + -0x1e],EAX     ; 004c9739
    LEA EAX,[EBX + 0x4]                 ; 004c973c
    MOV EAX,dword ptr [EAX]             ; 004c973f
    MOV dword ptr [EBP + -0x1a],EAX     ; 004c9741
    LEA EAX,[EBX + 0x8]                 ; 004c9744
    MOV EAX,dword ptr [EAX]             ; 004c9747
    MOV dword ptr [EBP + -0x16],EAX     ; 004c9749
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c974c
    ADD EBX,0xc                         ; 004c974f
    MOV dword ptr [EBP + -0x12],EAX     ; 004c9752
    LEA EAX,[EBX + 0x4]                 ; 004c9755
    MOV EAX,dword ptr [EAX]             ; 004c9758
    MOV dword ptr [EBP + -0xe],EAX      ; 004c975a
    LEA EAX,[EBX + 0x8]                 ; 004c975d
    MOV EAX,dword ptr [EAX]             ; 004c9760
    MOV dword ptr [EBP + -0xa],EAX      ; 004c9762
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9765
    ADD EAX,0xa98                       ; 004c976b
    MOV dword ptr [EBP + 0x5a],EAX      ; 004c9770
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9773
    ADD EAX,0xabc                       ; 004c9779
    MOV dword ptr [EBP + 0x66],EAX      ; 004c977e
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9781
    ADD EAX,0xa9c                       ; 004c9787
    ADD ESP,0x4                         ; 004c978c
    MOV dword ptr [EBP + 0x62],EAX      ; 004c978f
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9792
    XOR EBX,EBX                         ; 004c9798
    ADD EAX,0xaa0                       ; 004c979a
    MOV dword ptr [EBP + 0x56],EBX      ; 004c979f
    MOV dword ptr [EBP + 0x5e],EAX      ; 004c97a2
    MOV ESI,dword ptr [EBP + 0x56]      ; 004c97a5
        ;   Label: LAB_004c97a5
    PUSH ESI                            ; 004c97a8
    MOV EDI,dword ptr [EBP + 0x92]      ; 004c97a9
    PUSH EDI                            ; 004c97af
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640 ; 004c97b0
        ;   XREF to: 004ca640 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640()
    MOV EDI,ESI                         ; 004c97b5
    IMUL EAX,ESI,0xb8                   ; 004c97b7
    MOV EBX,dword ptr [EBP + 0x5a]      ; 004c97bd
    ADD ESP,0x8                         ; 004c97c0
    MOV ECX,dword ptr [EBP + 0x5e]      ; 004c97c3
    ADD EBX,EAX                         ; 004c97c6
    PUSH ECX                            ; 004c97c8
    MOV dword ptr [EBP + 0x6a],EBX      ; 004c97c9
    MOV EBX,dword ptr [EBP + 0x62]      ; 004c97cc
    PUSH EBX                            ; 004c97cf
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004c97d0
    PUSH ESI                            ; 004c97d3
    PUSH EDI                            ; 004c97d4
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c97d5
    PUSH EAX                            ; 004c97db
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20 ; 004c97dc
        ;   XREF to: 004cae20 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20()
    MOV EAX,ESI                         ; 004c97e1
    MOV dword ptr [ESI + 0x14],0x0      ; 004c97e3
    MOV EDX,dword ptr [EAX + 0x14]      ; 004c97ea
    MOV dword ptr [ESI + 0x10],EDX      ; 004c97ed
    FLD float ptr [EAX + 0x10]          ; 004c97f0
    MOV dword ptr [ESI + 0x20],0x0      ; 004c97f3
    FSTP float ptr [ESI + 0xc]          ; 004c97fa
    MOV EDX,dword ptr [EAX + 0x20]      ; 004c97fd
    MOV dword ptr [ESI + 0x1c],EDX      ; 004c9800
    FLD float ptr [EAX + 0x1c]          ; 004c9803
    MOV EAX,EDI                         ; 004c9806
    MOV dword ptr [EBP + 0x7a],EAX      ; 004c9808
    FILD dword ptr [EBP + 0x7a]         ; 004c980b
    FMUL float ptr [0x005a003c]         ; 004c980e | DAT_005a003c
    MOV dword ptr [ESI + 0xac],0x0      ; 004c9814
    ADD ESP,0x14                        ; 004c981e
    MOV dword ptr [ESI + 0xb0],0x0      ; 004c9821
    XOR EDX,EDX                         ; 004c982b
    FXCH                                ; 004c982d
    FSTP float ptr [ESI + 0x18]         ; 004c982f
    MOV dword ptr [ESI + 0xb4],0x0      ; 004c9832
    LEA EAX,[EBP + -0x6]                ; 004c983c
    MOV dword ptr [EBP + -0x6],EDX      ; 004c983f
    PUSH EAX                            ; 004c9842
    LEA EAX,[EBP + -0x5e]               ; 004c9843
    MOV dword ptr [EBP + 0x2],EDX       ; 004c9846
    PUSH EAX                            ; 004c9849
    FSTP float ptr [EBP + -0x2]         ; 004c984a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004c984d
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 004c9852
    LEA EAX,[EBP + -0x6]                ; 004c9855
    PUSH EAX                            ; 004c9858
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9859
    MOV EAX,dword ptr [EAX + 0x1504]    ; 004c985f
    MOV dword ptr [EBP + 0xe],EAX       ; 004c9865
    LEA EAX,[EBP + 0x6]                 ; 004c9868
    PUSH EAX                            ; 004c986b
    LEA EAX,[EBP + 0x12]                ; 004c986c
    PUSH EAX                            ; 004c986f
    LEA EAX,[EBP + -0x5e]               ; 004c9870
    XOR EBX,EBX                         ; 004c9873
    PUSH EAX                            ; 004c9875
    MOV dword ptr [EBP + 0x6],EBX       ; 004c9876
    MOV dword ptr [EBP + 0xa],EBX       ; 004c9879
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004c987c
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 004c9881
    PUSH EAX                            ; 004c9884
    LEA EAX,[EBP + 0xfffffee2]          ; 004c9885
    PUSH EAX                            ; 004c988b
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004c988c
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 004c9891
    LEA EAX,[EBP + 0xfffffee2]          ; 004c9894
    PUSH EAX                            ; 004c989a
    LEA EAX,[EBP + 0xffffff12]          ; 004c989b
    PUSH EAX                            ; 004c98a1
    LEA ESI,[EBP + 0xfffffeb2]          ; 004c98a2
    LEA EDI,[EBP + 0xffffff72]          ; 004c98a8
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004c98ae
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004c98b3
    ADD ESP,0x8                         ; 004c98b8
    LEA EAX,[EBP + 0x42]                ; 004c98bb
    LEA ESI,[EBP + 0xfffffeb2]          ; 004c98be
    PUSH EAX                            ; 004c98c4
    LEA EAX,[EBP + 0xffffff72]          ; 004c98c5
    MOVSD.REP ES:EDI,ESI                ; 004c98cb
    PUSH EAX                            ; 004c98cd
    MOV EDI,dword ptr [EBP + 0x66]      ; 004c98ce
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 004c98d1
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_getTranslation_FUN_0055bc00()
    ADD ESP,0x8                         ; 004c98d6
    CMP EAX,EDI                         ; 004c98d9
    JZ 0x004c98ed                       ; 004c98db
        ;   XREF to: 004c98ed (CONDITIONAL_JUMP)  ; LAB_004c98ed
    MOV EDX,dword ptr [EAX]             ; 004c98dd
    MOV dword ptr [EDI],EDX             ; 004c98df
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c98e1
    MOV dword ptr [EDI + 0x4],EDX       ; 004c98e4
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c98e7
    MOV dword ptr [EDI + 0x8],EDX       ; 004c98ea
    LEA EAX,[EBP + 0x2a]                ; 004c98ed
        ;   Label: LAB_004c98ed
    PUSH EAX                            ; 004c98f0
    LEA EAX,[EBP + 0xffffff72]          ; 004c98f1
    MOV EBX,dword ptr [EBP + 0x6a]      ; 004c98f7
    PUSH EAX                            ; 004c98fa
    ADD EBX,0x30                        ; 004c98fb
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 004c98fe
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_0055b180()
    ADD ESP,0x8                         ; 004c9903
    CMP EBX,EAX                         ; 004c9906
    JNZ 0x004c9ba3                      ; 004c9908
        ;   XREF to: 004c9ba3 (CONDITIONAL_JUMP)  ; LAB_004c9ba3
    PUSH 0x5993b0                       ; 004c990e | DAT_005993b0
        ;   Label: LAB_004c990e
    PUSH 0x4                            ; 004c9913
    LEA EAX,[EBP + 0xffffff42]          ; 004c9915
    PUSH EAX                            ; 004c991b
    LEA EBX,[EBP + 0xffffff42]          ; 004c991c
    XOR ESI,ESI                         ; 004c9922
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004c9924
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004c9929
    XOR EAX,EAX                         ; 004c992c
        ;   Label: LAB_004c992c
    MOV dword ptr [EBP + 0x22],EAX      ; 004c992e
    TEST SI,0x1                         ; 004c9931
    JZ 0x004c9bb8                       ; 004c9936
        ;   XREF to: 004c9bb8 (CONDITIONAL_JUMP)  ; LAB_004c9bb8
    MOV EAX,dword ptr [EBP + -0x12]     ; 004c993c
    MOV dword ptr [EBP + 0x6e],EAX      ; 004c993f
        ;   Label: LAB_004c993f
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004c9942
    MOV dword ptr [EBP + 0x1e],EAX      ; 004c9945
    TEST SI,0x2                         ; 004c9948
    JZ 0x004c9bc0                       ; 004c994d
        ;   XREF to: 004c9bc0 (CONDITIONAL_JUMP)  ; LAB_004c9bc0
    MOV EAX,dword ptr [EBP + -0xa]      ; 004c9953
    MOV dword ptr [EBP + 0x72],EAX      ; 004c9956
        ;   Label: LAB_004c9956
    MOV EAX,dword ptr [EBP + 0x72]      ; 004c9959
    MOV dword ptr [EBP + 0x26],EAX      ; 004c995c
    LEA EAX,[EBP + 0xffffff72]          ; 004c995f
    PUSH EAX                            ; 004c9965
    LEA EAX,[EBP + 0x1e]                ; 004c9966
    PUSH EAX                            ; 004c9969
    LEA EAX,[EBP + 0x36]                ; 004c996a
    PUSH EAX                            ; 004c996d
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004c996e
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 004c9973
    CMP EBX,EAX                         ; 004c9976
    JZ 0x004c998a                       ; 004c9978
        ;   XREF to: 004c998a (CONDITIONAL_JUMP)  ; LAB_004c998a
    MOV EDX,dword ptr [EAX]             ; 004c997a
    MOV dword ptr [EBX],EDX             ; 004c997c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c997e
    MOV dword ptr [EBX + 0x4],EDX       ; 004c9981
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c9984
    MOV dword ptr [EBX + 0x8],EDX       ; 004c9987
    INC ESI                             ; 004c998a
        ;   Label: LAB_004c998a
    ADD EBX,0xc                         ; 004c998b
    CMP ESI,0x4                         ; 004c998e
    JL 0x004c992c                       ; 004c9991
        ;   XREF to: 004c992c (CONDITIONAL_JUMP)  ; LAB_004c992c
    LEA EAX,[EBP + 0xffffff42]          ; 004c9993
    PUSH EAX                            ; 004c9999
    LEA EAX,[EBP + 0xffffff4e]          ; 004c999a
    PUSH EAX                            ; 004c99a0
    LEA EAX,[EBP + 0xffffff5a]          ; 004c99a1
    PUSH EAX                            ; 004c99a7
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004c99a8
    ADD EAX,0x3c                        ; 004c99ab
    PUSH EAX                            ; 004c99ae
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 004c99af
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0()
    ADD ESP,0x10                        ; 004c99b4
    LEA EAX,[EBP + 0xffffff4e]          ; 004c99b7
    PUSH EAX                            ; 004c99bd
    LEA EAX,[EBP + 0xffffff66]          ; 004c99be
    MOV EBX,dword ptr [EBP + 0x5e]      ; 004c99c4
    PUSH EAX                            ; 004c99c7
    LEA EAX,[EBP + 0xffffff5a]          ; 004c99c8
    MOV ESI,dword ptr [EBP + 0x56]      ; 004c99ce
    PUSH EAX                            ; 004c99d1
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004c99d2
    ADD EBX,0xb8                        ; 004c99d5
    ADD EAX,0x74                        ; 004c99db
    INC ESI                             ; 004c99de
    PUSH EAX                            ; 004c99df
    MOV dword ptr [EBP + 0x5e],EBX      ; 004c99e0
    MOV dword ptr [EBP + 0x56],ESI      ; 004c99e3
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 004c99e6
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0()
    MOV EDX,dword ptr [EBP + 0x66]      ; 004c99eb
    MOV ECX,dword ptr [EBP + 0x62]      ; 004c99ee
    ADD ESP,0x10                        ; 004c99f1
    ADD EDX,0xb8                        ; 004c99f4
    ADD ECX,0xb8                        ; 004c99fa
    MOV dword ptr [EBP + 0x66],EDX      ; 004c9a00
    MOV dword ptr [EBP + 0x62],ECX      ; 004c9a03
    CMP ESI,0xc                         ; 004c9a06
    JL 0x004c97a5                       ; 004c9a09
        ;   XREF to: 004c97a5 (CONDITIONAL_JUMP)  ; LAB_004c97a5
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9a0f
    FLD float ptr [EAX + 0x1504]        ; 004c9a15
    FLD float ptr [0x005a003c]          ; 004c9a1b | DAT_005a003c
    FLD ST0                             ; 004c9a21
    FCOS                                ; 004c9a23
    FXCH                                ; 004c9a25
    FSIN                                ; 004c9a27
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9a29
    FXCH                                ; 004c9a2f
    FMULP ST2                           ; 004c9a31
    FLD float ptr [EAX + 0x5c8]         ; 004c9a33
    FMUL double ptr [0x00587f3a]        ; 004c9a39 | DAT_00587f3a
    FXCH ST2                            ; 004c9a3f
    FLD double ptr [0x00587f2a]         ; 004c9a41 | DAT_00587f2a
    FXCH                                ; 004c9a47
    FMUL ST1                            ; 004c9a49
    FLD float ptr [EAX + 0x1504]        ; 004c9a4b
    LEA EBX,[EAX + 0x1338]              ; 004c9a51
    FMULP ST3                           ; 004c9a57
    ADD EAX,0x1344                      ; 004c9a59
    FXCH ST2                            ; 004c9a5e
    FMULP                               ; 004c9a60
    FLD float ptr [EAX + 0xfffff29c]    ; 004c9a62
    FMUL double ptr [0x00587f42]        ; 004c9a68 | DAT_00587f42
    FXCH ST2                            ; 004c9a6e
    FSTP float ptr [EAX + 0x8]          ; 004c9a70
    FXCH                                ; 004c9a73
    FADDP ST2,ST0                       ; 004c9a75
    FSTP float ptr [EAX]                ; 004c9a77
    FSTP float ptr [EAX + 0x4]          ; 004c9a79
    CMP EBX,EAX                         ; 004c9a7c
    JNZ 0x004c9bc8                      ; 004c9a7e
        ;   XREF to: 004c9bc8 (CONDITIONAL_JUMP)  ; LAB_004c9bc8
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9a84
        ;   Label: LAB_004c9a84
    ADD EAX,0x1360                      ; 004c9a8a
    MOV dword ptr [EAX],0xbda4de71      ; 004c9a8f
    MOV dword ptr [EAX + 0x8],0x0       ; 004c9a95
    FLD float ptr [EAX + -0x24]         ; 004c9a9c
    MOV dword ptr [EAX + 0x4],0xbfc529dc ; 004c9a9f
    FADD float ptr [0x00587f4a]         ; 004c9aa6 | DAT_00587f4a
    PUSH EAX                            ; 004c9aac
    FSTP float ptr [EAX + -0x24]        ; 004c9aad
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9ab0
    ADD EAX,0x136c                      ; 004c9ab6
    PUSH EAX                            ; 004c9abb
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004c9abc
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9ac1
    ADD ESP,0x8                         ; 004c9ac7
    FLD float ptr [EAX + 0x133c]        ; 004c9aca
    FLD float ptr [EAX + 0x1338]        ; 004c9ad0
    FLD float ptr [EAX + 0x1340]        ; 004c9ad6
    FLD float ptr [EAX + 0x1348]        ; 004c9adc
    FLD float ptr [EAX + 0x1344]        ; 004c9ae2
    FLD float ptr [EAX + 0x134c]        ; 004c9ae8
    FLD float ptr [EAX + 0x1360]        ; 004c9aee
    FXCH ST6                            ; 004c9af4
    FSTP float ptr [EAX + 0x139c]       ; 004c9af6
    FLD float ptr [EAX + 0x1368]        ; 004c9afc
    FXCH ST5                            ; 004c9b02
    FCHS                                ; 004c9b04
    FXCH ST4                            ; 004c9b06
    FSTP float ptr [EAX + 0x13a0]       ; 004c9b08
    FLD float ptr [EAX + 0x1364]        ; 004c9b0e
    FXCH ST2                            ; 004c9b14
    FCHS                                ; 004c9b16
    ADD EAX,0x13c0                      ; 004c9b18
    FXCH ST2                            ; 004c9b1d
    FCHS                                ; 004c9b1f
    FXCH ST3                            ; 004c9b21
    FSTP float ptr [EAX + -0x18]        ; 004c9b23
    FSTP float ptr [EAX + -0x14]        ; 004c9b26
    FXCH ST4                            ; 004c9b29
    FSTP float ptr [EAX]                ; 004c9b2b
    FXCH ST2                            ; 004c9b2d
    FSTP float ptr [EAX + 0x8]          ; 004c9b2f
    FSTP float ptr [EAX + -0x28]        ; 004c9b32
    FXCH                                ; 004c9b35
    FSTP float ptr [EAX + -0x1c]        ; 004c9b37
    FSTP float ptr [EAX + 0x4]          ; 004c9b3a
    PUSH EAX                            ; 004c9b3d
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9b3e
    ADD EAX,0x13cc                      ; 004c9b44
    PUSH EAX                            ; 004c9b49
    XOR EBX,EBX                         ; 004c9b4a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004c9b4c
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 004c9b51
    PUSH EBX                            ; 004c9b54
        ;   Label: LAB_004c9b54
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9b55
    PUSH EAX                            ; 004c9b5b
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980 ; 004c9b5c
        ;   XREF to: 004cb980 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980()
    INC EBX                             ; 004c9b61
    ADD ESP,0x8                         ; 004c9b62
    CMP EBX,0x2                         ; 004c9b65
    JL 0x004c9b54                       ; 004c9b68
        ;   XREF to: 004c9b54 (CONDITIONAL_JUMP)  ; LAB_004c9b54
    LEA ESP,[EBP + 0x7e]                ; 004c9b6a
    POP EBP                             ; 004c9b6d
    POP EDI                             ; 004c9b6e
    POP ESI                             ; 004c9b6f
    POP EBX                             ; 004c9b70
    RET                                 ; 004c9b71
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c9b72
        ;   Label: LAB_004c9b72
    FLD float ptr [EAX + 0x1508]        ; 004c9b78
    MOV dword ptr [EAX + 0x5dc],0x0     ; 004c9b7e
    FADD double ptr [0x00587f32]        ; 004c9b88 | DAT_00587f32
    MOV dword ptr [EAX + 0x5e4],0xbf8ccccd ; 004c9b8e
    FSTP float ptr [EAX + 0x5e0]        ; 004c9b98
    JMP 0x004c96a8                      ; 004c9b9e
        ;   XREF to: 004c96a8 (UNCONDITIONAL_JUMP)  ; LAB_004c96a8
    MOV EDX,dword ptr [EAX]             ; 004c9ba3
        ;   Label: LAB_004c9ba3
    MOV dword ptr [EBX],EDX             ; 004c9ba5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c9ba7
    MOV dword ptr [EBX + 0x4],EDX       ; 004c9baa
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c9bad
    MOV dword ptr [EBX + 0x8],EDX       ; 004c9bb0
    JMP 0x004c990e                      ; 004c9bb3
        ;   XREF to: 004c990e (UNCONDITIONAL_JUMP)  ; LAB_004c990e
    MOV EAX,dword ptr [EBP + -0x1e]     ; 004c9bb8
        ;   Label: LAB_004c9bb8
    JMP 0x004c993f                      ; 004c9bbb
        ;   XREF to: 004c993f (UNCONDITIONAL_JUMP)  ; LAB_004c993f
    MOV EAX,dword ptr [EBP + -0x16]     ; 004c9bc0
        ;   Label: LAB_004c9bc0
    JMP 0x004c9956                      ; 004c9bc3
        ;   XREF to: 004c9956 (UNCONDITIONAL_JUMP)  ; LAB_004c9956
    MOV EDX,dword ptr [EAX]             ; 004c9bc8
        ;   Label: LAB_004c9bc8
    MOV dword ptr [EBX],EDX             ; 004c9bca
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c9bcc
    MOV dword ptr [EBX + 0x4],EDX       ; 004c9bcf
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c9bd2
    MOV dword ptr [EBX + 0x8],EDX       ; 004c9bd5
    JMP 0x004c9a84                      ; 004c9bd8
        ;   XREF to: 004c9a84 (UNCONDITIONAL_JUMP)  ; LAB_004c9a84

