; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bugs_cpp_CBugs_updateBugPathfinding_FUN_004227b0(undefined4 param_1,int *param_2,float param_3,float *param_4)
;
; Local Variables:
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70 at 0042339a
;   core_bugs.cpp_FUN_00422050 at 00422130
;
; Referenced Globals:
;   float FLOAT_00579d41 = 12
;   double DOUBLE_00579d45 = 0.5
;   double DOUBLE_00579d4d = 1.60185815079703E-314
;   double DOUBLE_00579d55 = 0.400000000000000
;   double DOUBLE_00579d5d = 3.14159265350000
;   double DOUBLE_00579d65 = 4
;   undefined4 DAT_0059aea8
;   undefined4 DAT_0059aeb0
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004227b0
        ;   Label: core_bugs.cpp_CBugs_updateBugPathfinding_FUN_004227b0
    PUSH ESI                            ; 004227b1
    PUSH EDI                            ; 004227b2
    PUSH EBP                            ; 004227b3
    MOV EBP,ESP                         ; 004227b4
    SUB ESP,0x80                        ; 004227b6
    AND ESP,0xfffffff8                  ; 004227bc
    MOV EBX,dword ptr [EBP + 0x18]      ; 004227bf
    CMP dword ptr [EBX],0x0             ; 004227c2
    JNZ 0x00422b70                      ; 004227c5
        ;   XREF to: 00422b70 (CONDITIONAL_JUMP)  ; LAB_00422b70
    LEA ESI,[EBX + 0x20]                ; 004227cb
    LEA EDI,[EBX + 0x8]                 ; 004227ce
    FLD float ptr [ESI]                 ; 004227d1
    FSUB float ptr [EDI]                ; 004227d3
    FSTP float ptr [ESP + 0x28]         ; 004227d5
    FLD float ptr [ESI + 0x4]           ; 004227d9
    FSUB float ptr [EDI + 0x4]          ; 004227dc
    FST float ptr [ESP + 0x2c]          ; 004227df
    FMUL float ptr [ESP + 0x2c]         ; 004227e3
    FLD float ptr [ESP + 0x28]          ; 004227e7
    FMUL ST0                            ; 004227eb
    FLD float ptr [ESI + 0x8]           ; 004227ed
    FSUB float ptr [EDI + 0x8]          ; 004227f0
    FXCH                                ; 004227f3
    FADDP ST2,ST0                       ; 004227f5
    FST float ptr [ESP + 0x30]          ; 004227f7
    FMUL float ptr [ESP + 0x30]         ; 004227fb
    FADDP                               ; 004227ff
    FSQRT                               ; 00422801
    FSTP float ptr [ESP + 0x4c]         ; 00422803
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00422807
    FLD float ptr [ESP + 0x4c]          ; 0042280b
    MOV dword ptr [ESP],EAX             ; 0042280f
    FCOMP float ptr [0x0059aea8]        ; 00422812 | DAT_0059aea8
    FNSTSW AX                           ; 00422818
    SAHF                                ; 0042281a
    JNC 0x0042293f                      ; 0042281b
        ;   XREF to: 0042293f (CONDITIONAL_JUMP)  ; LAB_0042293f
    PUSH dword ptr [EBX + 0x10]         ; 00422821
    MOV ECX,dword ptr [EBP + 0x14]      ; 00422824
    PUSH dword ptr [EBX + 0x8]          ; 00422827
    PUSH ECX                            ; 0042282a
    CALL core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00 ; 0042282b
        ;   XREF to: 00421f00 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00()
    MOV dword ptr [ESP + 0x88],EAX      ; 00422830
    FLD float ptr [ESP + 0x88]          ; 00422837
    ADD ESP,0xc                         ; 0042283e
    MOV EAX,dword ptr [EBP + 0x20]      ; 00422841
    FSTP float ptr [EBX + 0xc]          ; 00422844
    TEST EAX,EAX                        ; 00422847
    JNZ 0x00422b79                      ; 00422849
        ;   XREF to: 00422b79 (CONDITIONAL_JUMP)  ; LAB_00422b79
    FLD float ptr [0x0059aea8]          ; 0042284f | DAT_0059aea8
    FLD ST0                             ; 00422855
    FMUL float ptr [0x00579d41]         ; 00422857 | FLOAT_00579d41
    FXCH                                ; 0042285d
    FMUL float ptr [0x00579d4d]         ; 0042285f | DOUBLE_00579d4d
    FXCH                                ; 00422865
    FLD double ptr [0x00579d45]         ; 00422867 | DOUBLE_00579d45
    FXCH                                ; 0042286d
    FMUL ST1                            ; 0042286f
    FXCH ST2                            ; 00422871
    FMULP                               ; 00422873
    FXCH                                ; 00422875
    FSTP float ptr [ESP + 0x50]         ; 00422877
    PUSH dword ptr [ESP + 0x50]         ; 0042287b
    FSTP float ptr [ESP + 0x7c]         ; 0042287f
    PUSH dword ptr [ESP + 0x7c]         ; 00422883
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00422887
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x84],EAX      ; 0042288c
    FLD float ptr [ESP + 0x84]          ; 00422893
    ADD ESP,0x8                         ; 0042289a
    PUSH dword ptr [ESP + 0x50]         ; 0042289d
    PUSH dword ptr [ESP + 0x7c]         ; 004228a1
    FSTP float ptr [EBX + 0x20]         ; 004228a5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004228a8
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x84],EAX      ; 004228ad
    FLD float ptr [ESP + 0x84]          ; 004228b4
    ADD ESP,0x8                         ; 004228bb
    FSTP float ptr [EBX + 0x28]         ; 004228be
    PUSH dword ptr [EBX + 0x28]         ; 004228c1
    MOV ECX,dword ptr [EBP + 0x14]      ; 004228c4
    PUSH dword ptr [EBX + 0x20]         ; 004228c7
    PUSH ECX                            ; 004228ca
    CALL core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00 ; 004228cb
        ;   XREF to: 00421f00 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00()
    MOV dword ptr [ESP + 0x88],EAX      ; 004228d0
    MOV EAX,dword ptr [ESP + 0x88]      ; 004228d7
    MOV dword ptr [EBX + 0x24],EAX      ; 004228de
    FLD float ptr [ESI]                 ; 004228e1
    FSUB float ptr [EDI]                ; 004228e3
    ADD ESP,0xc                         ; 004228e5
    FSTP float ptr [ESP + 0x40]         ; 004228e8
    FLD float ptr [ESI + 0x4]           ; 004228ec
    FSUB float ptr [EDI + 0x4]          ; 004228ef
    LEA EAX,[ESP + 0x40]                ; 004228f2
    FSTP float ptr [ESP + 0x44]         ; 004228f6
    FLD float ptr [ESI + 0x8]           ; 004228fa
    FSUB float ptr [EDI + 0x8]          ; 004228fd
    LEA ESI,[ESP + 0x28]                ; 00422900
    FSTP float ptr [ESP + 0x48]         ; 00422904
    CMP ESI,EAX                         ; 00422908
    JZ 0x00422924                       ; 0042290a
        ;   XREF to: 00422924 (CONDITIONAL_JUMP)  ; LAB_00422924
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042290c
    MOV dword ptr [ESP + 0x28],EAX      ; 00422910
    MOV EAX,dword ptr [ESP + 0x44]      ; 00422914
    MOV dword ptr [ESP + 0x2c],EAX      ; 00422918
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042291c
    MOV dword ptr [ESP + 0x30],EAX      ; 00422920
    FLD float ptr [ESP + 0x2c]          ; 00422924
        ;   Label: LAB_00422924
    FMUL ST0                            ; 00422928
    FLD float ptr [ESP + 0x28]          ; 0042292a
    FMUL ST0                            ; 0042292e
    FADDP                               ; 00422930
    FLD float ptr [ESP + 0x30]          ; 00422932
    FMUL ST0                            ; 00422936
    FADDP                               ; 00422938
    FSQRT                               ; 0042293a
    FSTP float ptr [ESP]                ; 0042293c
    LEA EAX,[ESP + 0x28]                ; 0042293f
        ;   Label: LAB_0042293f
    PUSH EAX                            ; 00422943
    LEA EAX,[ESP + 0x14]                ; 00422944
    PUSH EAX                            ; 00422948
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00422949
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 0042294e
    FLD float ptr [ESP]                 ; 00422951
    FLDZ                                ; 00422954
    FCOMPP                              ; 00422956
    FNSTSW AX                           ; 00422958
    SAHF                                ; 0042295a
    JNC 0x00422c09                      ; 0042295b
        ;   XREF to: 00422c09 (CONDITIONAL_JUMP)  ; LAB_00422c09
    FLD float ptr [0x0059aeb0]          ; 00422961 | DAT_0059aeb0
    FMUL float ptr [EBP + 0x1c]         ; 00422967
    FST float ptr [ESP + 0x74]          ; 0042296a
    FCOMP float ptr [ESP]               ; 0042296e
    FNSTSW AX                           ; 00422971
    SAHF                                ; 00422973
    JBE 0x0042297d                      ; 00422974
        ;   XREF to: 0042297d (CONDITIONAL_JUMP)  ; LAB_0042297d
    MOV EAX,dword ptr [ESP]             ; 00422976
    MOV dword ptr [ESP + 0x74],EAX      ; 00422979
    FLD float ptr [ESP + 0x74]          ; 0042297d
        ;   Label: LAB_0042297d
    FDIV float ptr [ESP]                ; 00422981
    FLD float ptr [ESP + 0x28]          ; 00422984
    FXCH                                ; 00422988
    FSTP float ptr [ESP + 0x64]         ; 0042298a
    FMUL float ptr [ESP + 0x64]         ; 0042298e
    FLD float ptr [ESP + 0x2c]          ; 00422992
    FMUL float ptr [ESP + 0x64]         ; 00422996
    FLD float ptr [ESP + 0x30]          ; 0042299a
    FMUL float ptr [ESP + 0x64]         ; 0042299e
    LEA ESI,[EBX + 0x8]                 ; 004229a2
    FXCH ST2                            ; 004229a5
    FSTP float ptr [ESP + 0x28]         ; 004229a7
    FSTP float ptr [ESP + 0x2c]         ; 004229ab
    FSTP float ptr [ESP + 0x30]         ; 004229af
    FLD float ptr [ESI]                 ; 004229b3
    FADD float ptr [ESP + 0x28]         ; 004229b5
    FSTP float ptr [ESP + 0x4]          ; 004229b9
    FLD float ptr [ESI + 0x4]           ; 004229bd
    FADD float ptr [ESP + 0x2c]         ; 004229c0
    FSTP float ptr [ESP + 0x8]          ; 004229c4
    FLD float ptr [ESI + 0x8]           ; 004229c8
    FADD float ptr [ESP + 0x30]         ; 004229cb
    FSTP float ptr [ESP + 0xc]          ; 004229cf
    PUSH dword ptr [ESP + 0xc]          ; 004229d3
    MOV EDI,dword ptr [EBP + 0x14]      ; 004229d7
    PUSH dword ptr [ESP + 0x8]          ; 004229da
    PUSH EDI                            ; 004229de
    CALL core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00 ; 004229df
        ;   XREF to: 00421f00 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00()
    MOV dword ptr [ESP + 0x88],EAX      ; 004229e4
    FLD float ptr [ESP + 0x88]          ; 004229eb
    ADD ESP,0xc                         ; 004229f2
    FST float ptr [ESP + 0x60]          ; 004229f5
    FSUB float ptr [EBX + 0xc]          ; 004229f9
    FLD float ptr [ESP]                 ; 004229fc
    FMUL double ptr [0x00579d55]        ; 004229ff | DOUBLE_00579d55
    FCOMPP                              ; 00422a05
    FNSTSW AX                           ; 00422a07
    SAHF                                ; 00422a09
    JNC 0x00422c2d                      ; 00422a0a
        ;   XREF to: 00422c2d (CONDITIONAL_JUMP)  ; LAB_00422c2d
    FLD float ptr [ESP + 0x2c]          ; 00422a10
    FLDZ                                ; 00422a14
    FCOMPP                              ; 00422a16
    FNSTSW AX                           ; 00422a18
    SAHF                                ; 00422a1a
    JNC 0x00422c15                      ; 00422a1b
        ;   XREF to: 00422c15 (CONDITIONAL_JUMP)  ; LAB_00422c15
    FLD float ptr [EBX + 0xc]           ; 00422a21
    FADD float ptr [ESP + 0x74]         ; 00422a24
    MOV EDX,0xbfc90fdb                  ; 00422a28
    FSTP float ptr [EBX + 0xc]          ; 00422a2d
    MOV dword ptr [ESP + 0x10],EDX      ; 00422a30
    LEA EAX,[EBX + 0x14]                ; 00422a34
        ;   Label: LAB_00422a34
    FLD float ptr [ESP + 0x10]          ; 00422a37
    FSUB float ptr [EAX]                ; 00422a3b
    FLD float ptr [ESP + 0x14]          ; 00422a3d
    FXCH                                ; 00422a41
    FSTP float ptr [ESP + 0x34]         ; 00422a43
    FSUB float ptr [EAX + 0x4]          ; 00422a47
    FLD float ptr [ESP + 0x18]          ; 00422a4a
    FXCH                                ; 00422a4e
    FSTP float ptr [ESP + 0x38]         ; 00422a50
    FSUB float ptr [EAX + 0x8]          ; 00422a54
    PUSH dword ptr [ESP + 0x38]         ; 00422a57
    FSTP float ptr [ESP + 0x40]         ; 00422a5b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00422a5f
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x80],EAX      ; 00422a64
    FLD float ptr [ESP + 0x80]          ; 00422a6b
    ADD ESP,0x4                         ; 00422a72
    PUSH dword ptr [ESP + 0x34]         ; 00422a75
    FSTP float ptr [ESP + 0x70]         ; 00422a79
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00422a7d
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x80],EAX      ; 00422a82
    FLD float ptr [ESP + 0x80]          ; 00422a89
    ADD ESP,0x4                         ; 00422a90
    FLD float ptr [EBP + 0x1c]          ; 00422a93
    FMUL double ptr [0x00579d5d]        ; 00422a96 | DOUBLE_00579d5d
    FMUL double ptr [0x00579d65]        ; 00422a9c | DOUBLE_00579d65
    FLD float ptr [ESP + 0x6c]          ; 00422aa2
    FXCH ST2                            ; 00422aa6
    FSTP float ptr [ESP + 0x68]         ; 00422aa8
    FST float ptr [ESP + 0x70]          ; 00422aac
    FCHS                                ; 00422ab0
    FSTP float ptr [ESP + 0x58]         ; 00422ab2
    FCOMP float ptr [ESP + 0x58]        ; 00422ab6
    FNSTSW AX                           ; 00422aba
    SAHF                                ; 00422abc
    JNC 0x00422ac7                      ; 00422abd
        ;   XREF to: 00422ac7 (CONDITIONAL_JUMP)  ; LAB_00422ac7
    MOV EAX,dword ptr [ESP + 0x58]      ; 00422abf
    MOV dword ptr [ESP + 0x6c],EAX      ; 00422ac3
    FLD float ptr [ESP + 0x6c]          ; 00422ac7
        ;   Label: LAB_00422ac7
    FCOMP float ptr [ESP + 0x70]        ; 00422acb
    FNSTSW AX                           ; 00422acf
    SAHF                                ; 00422ad1
    JBE 0x00422adc                      ; 00422ad2
        ;   XREF to: 00422adc (CONDITIONAL_JUMP)  ; LAB_00422adc
    MOV EAX,dword ptr [ESP + 0x70]      ; 00422ad4
    MOV dword ptr [ESP + 0x6c],EAX      ; 00422ad8
    FLD float ptr [ESP + 0x68]          ; 00422adc
        ;   Label: LAB_00422adc
    FLD float ptr [ESP + 0x70]          ; 00422ae0
    FCHS                                ; 00422ae4
    FSTP float ptr [ESP + 0x5c]         ; 00422ae6
    FCOMP float ptr [ESP + 0x5c]        ; 00422aea
    FNSTSW AX                           ; 00422aee
    SAHF                                ; 00422af0
    JNC 0x00422afb                      ; 00422af1
        ;   XREF to: 00422afb (CONDITIONAL_JUMP)  ; LAB_00422afb
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00422af3
    MOV dword ptr [ESP + 0x68],EAX      ; 00422af7
    FLD float ptr [ESP + 0x68]          ; 00422afb
        ;   Label: LAB_00422afb
    FCOMP float ptr [ESP + 0x70]        ; 00422aff
    FNSTSW AX                           ; 00422b03
    SAHF                                ; 00422b05
    JBE 0x00422b10                      ; 00422b06
        ;   XREF to: 00422b10 (CONDITIONAL_JUMP)  ; LAB_00422b10
    MOV EAX,dword ptr [ESP + 0x70]      ; 00422b08
    MOV dword ptr [ESP + 0x68],EAX      ; 00422b0c
    FLD float ptr [EBX + 0x18]          ; 00422b10
        ;   Label: LAB_00422b10
    FADD float ptr [ESP + 0x6c]         ; 00422b13
    SUB ESP,0x4                         ; 00422b17
    FSTP float ptr [ESP]                ; 00422b1a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00422b1d
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x80],EAX      ; 00422b22
    FLD float ptr [EBX + 0x14]          ; 00422b29
    FLD float ptr [ESP + 0x80]          ; 00422b2c
    ADD ESP,0x4                         ; 00422b33
    MOV dword ptr [EBX + 0x1c],0x0      ; 00422b36
    FXCH                                ; 00422b3d
    FADD float ptr [ESP + 0x68]         ; 00422b3f
    SUB ESP,0x4                         ; 00422b43
    FXCH                                ; 00422b46
    FSTP float ptr [EBX + 0x18]         ; 00422b48
    FSTP float ptr [ESP]                ; 00422b4b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00422b4e
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x80],EAX      ; 00422b53
    FLD float ptr [ESP + 0x80]          ; 00422b5a
    XOR EAX,EAX                         ; 00422b61
    FSTP float ptr [EBX + 0x14]         ; 00422b63
    ADD ESP,0x4                         ; 00422b66
    MOV ESP,EBP                         ; 00422b69
    POP EBP                             ; 00422b6b
    POP EDI                             ; 00422b6c
    POP ESI                             ; 00422b6d
    POP EBX                             ; 00422b6e
    RET                                 ; 00422b6f
    XOR EAX,EAX                         ; 00422b70
        ;   Label: LAB_00422b70
    MOV ESP,EBP                         ; 00422b72
    POP EBP                             ; 00422b74
    POP EDI                             ; 00422b75
    POP ESI                             ; 00422b76
    POP EBX                             ; 00422b77
    RET                                 ; 00422b78
    CMP ESI,EAX                         ; 00422b79
        ;   Label: LAB_00422b79
    JZ 0x00422b8d                       ; 00422b7b
        ;   XREF to: 00422b8d (CONDITIONAL_JUMP)  ; LAB_00422b8d
    MOV EDX,dword ptr [EAX]             ; 00422b7d
    MOV dword ptr [ESI],EDX             ; 00422b7f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00422b81
    MOV dword ptr [ESI + 0x4],EDX       ; 00422b84
    MOV EDX,dword ptr [EAX + 0x8]       ; 00422b87
    MOV dword ptr [ESI + 0x8],EDX       ; 00422b8a
    LEA EAX,[EBX + 0x20]                ; 00422b8d
        ;   Label: LAB_00422b8d
    LEA ESI,[EBX + 0x8]                 ; 00422b90
    FLD float ptr [EAX]                 ; 00422b93
    FSUB float ptr [ESI]                ; 00422b95
    FSTP float ptr [ESP + 0x1c]         ; 00422b97
    FLD float ptr [EAX + 0x4]           ; 00422b9b
    FSUB float ptr [ESI + 0x4]          ; 00422b9e
    FSTP float ptr [ESP + 0x20]         ; 00422ba1
    FLD float ptr [EAX + 0x8]           ; 00422ba5
    LEA EAX,[ESP + 0x1c]                ; 00422ba8
    FSUB float ptr [ESI + 0x8]          ; 00422bac
    LEA ESI,[ESP + 0x28]                ; 00422baf
    FSTP float ptr [ESP + 0x24]         ; 00422bb3
    CMP ESI,EAX                         ; 00422bb7
    JZ 0x00422bd3                       ; 00422bb9
        ;   XREF to: 00422bd3 (CONDITIONAL_JUMP)  ; LAB_00422bd3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00422bbb
    MOV dword ptr [ESP + 0x28],EAX      ; 00422bbf
    MOV EAX,dword ptr [ESP + 0x20]      ; 00422bc3
    MOV dword ptr [ESP + 0x2c],EAX      ; 00422bc7
    MOV EAX,dword ptr [ESP + 0x24]      ; 00422bcb
    MOV dword ptr [ESP + 0x30],EAX      ; 00422bcf
    FLD float ptr [ESP + 0x2c]          ; 00422bd3
        ;   Label: LAB_00422bd3
    FMUL ST0                            ; 00422bd7
    FLD float ptr [ESP + 0x28]          ; 00422bd9
    FMUL ST0                            ; 00422bdd
    FADDP                               ; 00422bdf
    FLD float ptr [ESP + 0x30]          ; 00422be1
    FMUL ST0                            ; 00422be5
    FADDP                               ; 00422be7
    FSQRT                               ; 00422be9
    FSTP float ptr [ESP + 0x54]         ; 00422beb
    MOV EAX,dword ptr [ESP + 0x54]      ; 00422bef
    FLD float ptr [ESP + 0x54]          ; 00422bf3
    MOV dword ptr [ESP],EAX             ; 00422bf7
    FCOMP float ptr [0x0059aea8]        ; 00422bfa | DAT_0059aea8
    FNSTSW AX                           ; 00422c00
    SAHF                                ; 00422c02
    JNC 0x0042293f                      ; 00422c03
        ;   XREF to: 0042293f (CONDITIONAL_JUMP)  ; LAB_0042293f
    MOV EAX,0x1                         ; 00422c09
        ;   Label: LAB_00422c09
    MOV ESP,EBP                         ; 00422c0e
    POP EBP                             ; 00422c10
    POP EDI                             ; 00422c11
    POP ESI                             ; 00422c12
    POP EBX                             ; 00422c13
    RET                                 ; 00422c14
    FLD float ptr [EBX + 0xc]           ; 00422c15
        ;   Label: LAB_00422c15
    FSUB float ptr [ESP + 0x74]         ; 00422c18
    MOV EAX,0x3fc90fdb                  ; 00422c1c
    FSTP float ptr [EBX + 0xc]          ; 00422c21
    MOV dword ptr [ESP + 0x10],EAX      ; 00422c24
    JMP 0x00422a34                      ; 00422c28
        ;   XREF to: 00422a34 (UNCONDITIONAL_JUMP)  ; LAB_00422a34
    LEA EAX,[ESP + 0x4]                 ; 00422c2d
        ;   Label: LAB_00422c2d
    CMP ESI,EAX                         ; 00422c31
    JZ 0x00422c49                       ; 00422c33
        ;   XREF to: 00422c49 (CONDITIONAL_JUMP)  ; LAB_00422c49
    MOV EAX,dword ptr [ESP + 0x4]       ; 00422c35
    MOV dword ptr [ESI],EAX             ; 00422c39
    MOV EAX,dword ptr [ESP + 0x8]       ; 00422c3b
    MOV dword ptr [ESI + 0x4],EAX       ; 00422c3f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00422c42
    MOV dword ptr [ESI + 0x8],EAX       ; 00422c46
    FLD float ptr [ESP + 0x60]          ; 00422c49
        ;   Label: LAB_00422c49
    FCOMP float ptr [EBX + 0xc]         ; 00422c4d
    FNSTSW AX                           ; 00422c50
    SAHF                                ; 00422c52
    JBE 0x00422a34                      ; 00422c53
        ;   XREF to: 00422a34 (CONDITIONAL_JUMP)  ; LAB_00422a34
    MOV EAX,dword ptr [ESP + 0x60]      ; 00422c59
    MOV dword ptr [EBX + 0xc],EAX       ; 00422c5d
    JMP 0x00422a34                      ; 00422c60
        ;   XREF to: 00422a34 (UNCONDITIONAL_JUMP)  ; LAB_00422a34

