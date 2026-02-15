; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   triangle
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
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
; XREF[4]:
;   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650 at 004786ec
;   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 at 005732a4
;   core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0 at 005730fd
;   core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_005ba660 at 005ba688
;
; Called Functions:
;   core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
;   core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ad80
        ;   Label: core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
    PUSH ESI                            ; 0049ad81
    PUSH EDI                            ; 0049ad82
    PUSH EBP                            ; 0049ad83
    SUB ESP,0x6c                        ; 0049ad84
    MOV EBX,dword ptr [ESP + 0x80]      ; 0049ad87
    MOV ESI,dword ptr [ESP + 0x84]      ; 0049ad8e
    FLD float ptr [EBX + 0x24]          ; 0049ad95
    FMUL float ptr [ESI + 0x18]         ; 0049ad98
    FLD float ptr [EBX + 0x2c]          ; 0049ad9b
    FMUL float ptr [ESI + 0x1c]         ; 0049ad9e
    FADDP                               ; 0049ada1
    FLDZ                                ; 0049ada3
    FCOMPP                              ; 0049ada5
    FNSTSW AX                           ; 0049ada7
    SAHF                                ; 0049ada9
    JNC 0x0049b0fa                      ; 0049adaa
        ;   XREF to: 0049b0fa (CONDITIONAL_JUMP)  ; LAB_0049b0fa
    FLD float ptr [EBX + 0x8]           ; 0049adb0
    FMUL float ptr [ESI + 0x1c]         ; 0049adb3
    MOV EBP,EBX                         ; 0049adb6
    LEA EDI,[EBX + 0xc]                 ; 0049adb8
    FLD float ptr [EBX]                 ; 0049adbb
    FMUL float ptr [ESI + 0x18]         ; 0049adbd
    FLD float ptr [EDI + 0x8]           ; 0049adc0
    LEA EAX,[EBX + 0x18]                ; 0049adc3
    FMUL float ptr [ESI + 0x1c]         ; 0049adc6
    FLD float ptr [EAX + 0x8]           ; 0049adc9
    FMUL float ptr [ESI + 0x1c]         ; 0049adcc
    FLD float ptr [EDI]                 ; 0049adcf
    FMUL float ptr [ESI + 0x18]         ; 0049add1
    FLD float ptr [EAX]                 ; 0049add4
    FMUL float ptr [ESI + 0x18]         ; 0049add6
    FXCH ST4                            ; 0049add9
    FADDP ST5,ST0                       ; 0049addb
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049addd
    FXCH ST4                            ; 0049ade1
    FST float ptr [ESP + 0x40]          ; 0049ade3
    FXCH ST4                            ; 0049ade7
    FADDP ST2,ST0                       ; 0049ade9
    FADDP ST2,ST0                       ; 0049adeb
    FSTP float ptr [ESP + 0x50]         ; 0049aded
    FSTP float ptr [ESP + 0x38]         ; 0049adf1
    FCOMP float ptr [ESP + 0x50]        ; 0049adf5
    FNSTSW AX                           ; 0049adf9
    SAHF                                ; 0049adfb
    JA 0x0049b102                       ; 0049adfc
        ;   XREF to: 0049b102 (CONDITIONAL_JUMP)  ; LAB_0049b102
    FLD float ptr [ESP + 0x50]          ; 0049ae02
        ;   Label: LAB_0049ae02
    FCOMP float ptr [ESP + 0x38]        ; 0049ae06
    FNSTSW AX                           ; 0049ae0a
    SAHF                                ; 0049ae0c
    JBE 0x0049ae31                      ; 0049ae0d
        ;   XREF to: 0049ae31 (CONDITIONAL_JUMP)  ; LAB_0049ae31
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049ae0f
    MOV dword ptr [ESP + 0x58],EAX      ; 0049ae13
    MOV EAX,dword ptr [ESP + 0x38]      ; 0049ae17
    MOV dword ptr [ESP + 0x50],EAX      ; 0049ae1b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0049ae1f
    MOV dword ptr [ESP + 0x38],EAX      ; 0049ae23
    MOV EAX,EDI                         ; 0049ae27
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0049ae29
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049ae2d
    FLD float ptr [ESP + 0x40]          ; 0049ae31
        ;   Label: LAB_0049ae31
    FCOMP float ptr [ESP + 0x50]        ; 0049ae35
    FNSTSW AX                           ; 0049ae39
    SAHF                                ; 0049ae3b
    JBE 0x0049ae4c                      ; 0049ae3c
        ;   XREF to: 0049ae4c (CONDITIONAL_JUMP)  ; LAB_0049ae4c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049ae3e
    MOV dword ptr [ESP + 0x40],EAX      ; 0049ae42
    MOV EAX,EBP                         ; 0049ae46
    MOV EBP,EDI                         ; 0049ae48
    MOV EDI,EAX                         ; 0049ae4a
    FLD float ptr [ESP + 0x38]          ; 0049ae4c
        ;   Label: LAB_0049ae4c
    FCOMP float ptr [ESI + 0x2c]        ; 0049ae50
    FNSTSW AX                           ; 0049ae53
    SAHF                                ; 0049ae55
    JC 0x0049b0fa                       ; 0049ae56
        ;   XREF to: 0049b0fa (CONDITIONAL_JUMP)  ; LAB_0049b0fa
    FLD float ptr [ESP + 0x40]          ; 0049ae5c
    FCOMP float ptr [ESI + 0x30]        ; 0049ae60
    FNSTSW AX                           ; 0049ae63
    SAHF                                ; 0049ae65
    JA 0x0049b0fa                       ; 0049ae66
        ;   XREF to: 0049b0fa (CONDITIONAL_JUMP)  ; LAB_0049b0fa
    XOR EDX,EDX                         ; 0049ae6c
    FLD float ptr [EBX + 0x4]           ; 0049ae6e
    MOV dword ptr [ESP + 0x44],EDX      ; 0049ae71
    FCOMP float ptr [ESI + 0x24]        ; 0049ae75
    FNSTSW AX                           ; 0049ae78
    SAHF                                ; 0049ae7a
    JC 0x0049ae85                       ; 0049ae7b
        ;   XREF to: 0049ae85 (CONDITIONAL_JUMP)  ; LAB_0049ae85
    MOV dword ptr [ESP + 0x44],0x1      ; 0049ae7d
    FLD float ptr [EBX + 0x4]           ; 0049ae85
        ;   Label: LAB_0049ae85
    FCOMP float ptr [ESI + 0x28]        ; 0049ae88
    FNSTSW AX                           ; 0049ae8b
    SAHF                                ; 0049ae8d
    JA 0x0049ae95                       ; 0049ae8e
        ;   XREF to: 0049ae95 (CONDITIONAL_JUMP)  ; LAB_0049ae95
    OR byte ptr [ESP + 0x44],0x2        ; 0049ae90
    XOR EAX,EAX                         ; 0049ae95
        ;   Label: LAB_0049ae95
    FLD float ptr [EBX + 0x10]          ; 0049ae97
    MOV dword ptr [ESP + 0x4c],EAX      ; 0049ae9a
    FCOMP float ptr [ESI + 0x24]        ; 0049ae9e
    FNSTSW AX                           ; 0049aea1
    SAHF                                ; 0049aea3
    JC 0x0049aeae                       ; 0049aea4
        ;   XREF to: 0049aeae (CONDITIONAL_JUMP)  ; LAB_0049aeae
    MOV dword ptr [ESP + 0x4c],0x1      ; 0049aea6
    FLD float ptr [EBX + 0x10]          ; 0049aeae
        ;   Label: LAB_0049aeae
    FCOMP float ptr [ESI + 0x28]        ; 0049aeb1
    FNSTSW AX                           ; 0049aeb4
    SAHF                                ; 0049aeb6
    JA 0x0049aebe                       ; 0049aeb7
        ;   XREF to: 0049aebe (CONDITIONAL_JUMP)  ; LAB_0049aebe
    OR byte ptr [ESP + 0x4c],0x2        ; 0049aeb9
    XOR ECX,ECX                         ; 0049aebe
        ;   Label: LAB_0049aebe
    FLD float ptr [EBX + 0x1c]          ; 0049aec0
    MOV dword ptr [ESP + 0x48],ECX      ; 0049aec3
    FCOMP float ptr [ESI + 0x24]        ; 0049aec7
    FNSTSW AX                           ; 0049aeca
    SAHF                                ; 0049aecc
    JC 0x0049aed7                       ; 0049aecd
        ;   XREF to: 0049aed7 (CONDITIONAL_JUMP)  ; LAB_0049aed7
    MOV dword ptr [ESP + 0x48],0x1      ; 0049aecf
    FLD float ptr [EBX + 0x1c]          ; 0049aed7
        ;   Label: LAB_0049aed7
    FCOMP float ptr [ESI + 0x28]        ; 0049aeda
    FNSTSW AX                           ; 0049aedd
    SAHF                                ; 0049aedf
    JA 0x0049aee7                       ; 0049aee0
        ;   XREF to: 0049aee7 (CONDITIONAL_JUMP)  ; LAB_0049aee7
    OR byte ptr [ESP + 0x48],0x2        ; 0049aee2
    MOV EAX,dword ptr [ESP + 0x44]      ; 0049aee7
        ;   Label: LAB_0049aee7
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0049aeeb
    MOV ECX,dword ptr [ESP + 0x48]      ; 0049aeef
    AND EAX,EDX                         ; 0049aef3
    TEST EAX,ECX                        ; 0049aef5
    JNZ 0x0049b0fa                      ; 0049aef7
        ;   XREF to: 0049b0fa (CONDITIONAL_JUMP)  ; LAB_0049b0fa
    FLDZ                                ; 0049aefd
    FCOMP float ptr [EBX + 0x28]        ; 0049aeff
    FNSTSW AX                           ; 0049af02
    SAHF                                ; 0049af04
    JA 0x0049aff6                       ; 0049af05
        ;   XREF to: 0049aff6 (CONDITIONAL_JUMP)  ; LAB_0049aff6
    MOV EDX,dword ptr [ESP + 0x44]      ; 0049af0b
    XOR EDX,dword ptr [ESP + 0x4c]      ; 0049af0f
    XOR EAX,EAX                         ; 0049af13
    TEST DL,0x1                         ; 0049af15
    JZ 0x0049af4c                       ; 0049af18
        ;   XREF to: 0049af4c (CONDITIONAL_JUMP)  ; LAB_0049af4c
    FLD float ptr [ESI + 0x24]          ; 0049af1a
    FSUB float ptr [EBX + 0x4]          ; 0049af1d
    FLD float ptr [EBX + 0xc]           ; 0049af20
    FLD float ptr [EBX + 0x10]          ; 0049af23
    FSUB float ptr [EBX + 0x4]          ; 0049af26
    FXCH                                ; 0049af29
    FSUB float ptr [EBX]                ; 0049af2b
    FXCH                                ; 0049af2d
    FDIVP ST2,ST0                       ; 0049af2f
    FMUL ST1                            ; 0049af31
    FADD float ptr [EBX]                ; 0049af33
    FSTP float ptr [ESP]                ; 0049af35
    FLD float ptr [EBX + 0x14]          ; 0049af38
    FSUB float ptr [EBX + 0x8]          ; 0049af3b
    FMULP                               ; 0049af3e
    FADD float ptr [EBX + 0x8]          ; 0049af40
    MOV EAX,0x1                         ; 0049af43
    FSTP float ptr [ESP + 0x24]         ; 0049af48
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0049af4c
        ;   Label: LAB_0049af4c
    XOR EDX,dword ptr [ESP + 0x48]      ; 0049af50
    TEST DL,0x1                         ; 0049af54
    JZ 0x0049af89                       ; 0049af57
        ;   XREF to: 0049af89 (CONDITIONAL_JUMP)  ; LAB_0049af89
    FLD float ptr [ESI + 0x24]          ; 0049af59
    FSUB float ptr [EBX + 0x10]         ; 0049af5c
    FLD float ptr [EBX + 0x18]          ; 0049af5f
    FLD float ptr [EBX + 0x1c]          ; 0049af62
    FSUB float ptr [EBX + 0x10]         ; 0049af65
    FXCH                                ; 0049af68
    FSUB float ptr [EBX + 0xc]          ; 0049af6a
    FXCH                                ; 0049af6d
    FDIVP ST2,ST0                       ; 0049af6f
    FMUL ST1                            ; 0049af71
    FADD float ptr [EBX + 0xc]          ; 0049af73
    FSTP float ptr [ESP + EAX*0x4]      ; 0049af76
    FLD float ptr [EBX + 0x20]          ; 0049af79
    FSUB float ptr [EBX + 0x14]         ; 0049af7c
    FMULP                               ; 0049af7f
    FADD float ptr [EBX + 0x14]         ; 0049af81
    INC EAX                             ; 0049af84
    FSTP float ptr [ESP + EAX*0x4 + 0x20] ; 0049af85
    MOV EDX,dword ptr [ESP + 0x48]      ; 0049af89
        ;   Label: LAB_0049af89
    XOR EDX,dword ptr [ESP + 0x44]      ; 0049af8d
    TEST DL,0x1                         ; 0049af91
    JZ 0x0049afc5                       ; 0049af94
        ;   XREF to: 0049afc5 (CONDITIONAL_JUMP)  ; LAB_0049afc5
    FLD float ptr [ESI + 0x24]          ; 0049af96
    FSUB float ptr [EBX + 0x1c]         ; 0049af99
    FLD float ptr [EBX]                 ; 0049af9c
    FLD float ptr [EBX + 0x4]           ; 0049af9e
    FSUB float ptr [EBX + 0x1c]         ; 0049afa1
    FXCH                                ; 0049afa4
    FSUB float ptr [EBX + 0x18]         ; 0049afa6
    FXCH                                ; 0049afa9
    FDIVP ST2,ST0                       ; 0049afab
    FMUL ST1                            ; 0049afad
    FADD float ptr [EBX + 0x18]         ; 0049afaf
    FSTP float ptr [ESP + EAX*0x4]      ; 0049afb2
    FLD float ptr [EBX + 0x8]           ; 0049afb5
    FSUB float ptr [EBX + 0x20]         ; 0049afb8
    FMULP                               ; 0049afbb
    FADD float ptr [EBX + 0x20]         ; 0049afbd
    INC EAX                             ; 0049afc0
    FSTP float ptr [ESP + EAX*0x4 + 0x20] ; 0049afc1
    CMP EAX,0x2                         ; 0049afc5
        ;   Label: LAB_0049afc5
    JL 0x0049aff6                       ; 0049afc8
        ;   XREF to: 0049aff6 (CONDITIONAL_JUMP)  ; LAB_0049aff6
    MOV EAX,dword ptr [ESP]             ; 0049afca
    MOV dword ptr [ESI + 0x3c],EAX      ; 0049afcd
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049afd0
    MOV dword ptr [ESI + 0x40],EAX      ; 0049afd4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049afd7
    MOV dword ptr [ESI + 0x44],EAX      ; 0049afdb
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049afde
    PUSH ESI                            ; 0049afe2
    MOV dword ptr [ESI + 0x48],EAX      ; 0049afe3
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00 ; 0049afe6
        ;   XREF to: 0049aa00 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 0049afeb
    TEST EAX,EAX                        ; 0049afee
    JNZ 0x0049b0c8                      ; 0049aff0
        ;   XREF to: 0049b0c8 (CONDITIONAL_JUMP)  ; LAB_0049b0c8
    FLDZ                                ; 0049aff6
        ;   Label: LAB_0049aff6
    FCOMP float ptr [EBX + 0x28]        ; 0049aff8
    FNSTSW AX                           ; 0049affb
    SAHF                                ; 0049affd
    JC 0x0049b15b                       ; 0049affe
        ;   XREF to: 0049b15b (CONDITIONAL_JUMP)  ; LAB_0049b15b
    MOV EDX,dword ptr [ESP + 0x44]      ; 0049b004
    XOR EDX,dword ptr [ESP + 0x4c]      ; 0049b008
    XOR EAX,EAX                         ; 0049b00c
    TEST DL,0x2                         ; 0049b00e
    JNZ 0x0049b123                      ; 0049b011
        ;   XREF to: 0049b123 (CONDITIONAL_JUMP)  ; LAB_0049b123
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0049b017
        ;   Label: LAB_0049b017
    XOR EDX,dword ptr [ESP + 0x48]      ; 0049b01b
    TEST DL,0x2                         ; 0049b01f
    JZ 0x0049b055                       ; 0049b022
        ;   XREF to: 0049b055 (CONDITIONAL_JUMP)  ; LAB_0049b055
    FLD float ptr [ESI + 0x28]          ; 0049b024
    FSUB float ptr [EBX + 0x10]         ; 0049b027
    FLD float ptr [EBX + 0x18]          ; 0049b02a
    FLD float ptr [EBX + 0x1c]          ; 0049b02d
    FSUB float ptr [EBX + 0x10]         ; 0049b030
    FXCH                                ; 0049b033
    FSUB float ptr [EBX + 0xc]          ; 0049b035
    FXCH                                ; 0049b038
    FDIVP ST2,ST0                       ; 0049b03a
    FMUL ST1                            ; 0049b03c
    FADD float ptr [EBX + 0xc]          ; 0049b03e
    FSTP float ptr [ESP + EAX*0x4 + 0xc] ; 0049b041
    FLD float ptr [EBX + 0x20]          ; 0049b045
    FSUB float ptr [EBX + 0x14]         ; 0049b048
    FMULP                               ; 0049b04b
    FADD float ptr [EBX + 0x14]         ; 0049b04d
    INC EAX                             ; 0049b050
    FSTP float ptr [ESP + EAX*0x4 + 0x14] ; 0049b051
    MOV EDX,dword ptr [ESP + 0x48]      ; 0049b055
        ;   Label: LAB_0049b055
    XOR EDX,dword ptr [ESP + 0x44]      ; 0049b059
    TEST DL,0x2                         ; 0049b05d
    JZ 0x0049b092                       ; 0049b060
        ;   XREF to: 0049b092 (CONDITIONAL_JUMP)  ; LAB_0049b092
    FLD float ptr [ESI + 0x28]          ; 0049b062
    FSUB float ptr [EBX + 0x1c]         ; 0049b065
    FLD float ptr [EBX]                 ; 0049b068
    FLD float ptr [EBX + 0x4]           ; 0049b06a
    FSUB float ptr [EBX + 0x1c]         ; 0049b06d
    FXCH                                ; 0049b070
    FSUB float ptr [EBX + 0x18]         ; 0049b072
    FXCH                                ; 0049b075
    FDIVP ST2,ST0                       ; 0049b077
    FMUL ST1                            ; 0049b079
    FADD float ptr [EBX + 0x18]         ; 0049b07b
    FSTP float ptr [ESP + EAX*0x4 + 0xc] ; 0049b07e
    FLD float ptr [EBX + 0x8]           ; 0049b082
    FSUB float ptr [EBX + 0x20]         ; 0049b085
    FMULP                               ; 0049b088
    FADD float ptr [EBX + 0x20]         ; 0049b08a
    INC EAX                             ; 0049b08d
    FSTP float ptr [ESP + EAX*0x4 + 0x14] ; 0049b08e
    CMP EAX,0x2                         ; 0049b092
        ;   Label: LAB_0049b092
    JL 0x0049b15b                       ; 0049b095
        ;   XREF to: 0049b15b (CONDITIONAL_JUMP)  ; LAB_0049b15b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049b09b
    MOV dword ptr [ESI + 0x3c],EAX      ; 0049b09f
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049b0a2
    MOV dword ptr [ESI + 0x40],EAX      ; 0049b0a6
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049b0a9
    MOV dword ptr [ESI + 0x44],EAX      ; 0049b0ad
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049b0b0
    PUSH ESI                            ; 0049b0b4
    MOV dword ptr [ESI + 0x48],EAX      ; 0049b0b5
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00 ; 0049b0b8
        ;   XREF to: 0049aa00 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 0049b0bd
    TEST EAX,EAX                        ; 0049b0c0
    JZ 0x0049b15b                       ; 0049b0c2
        ;   XREF to: 0049b15b (CONDITIONAL_JUMP)  ; LAB_0049b15b
    MOV dword ptr [ESI + 0x8],0x0       ; 0049b0c8
        ;   Label: LAB_0049b0c8
    FLD float ptr [ESI + 0x18]          ; 0049b0cf
    FMUL float ptr [ESI + 0x4c]         ; 0049b0d2
    FLD float ptr [ESI + 0x1c]          ; 0049b0d5
    FMUL float ptr [ESI + 0x4c]         ; 0049b0d8
    MOV EAX,dword ptr [ESI + 0x4c]      ; 0049b0db
    MOV dword ptr [ESI],EAX             ; 0049b0de
    FXCH                                ; 0049b0e0
    FADD float ptr [ESI + 0x10]         ; 0049b0e2
    FXCH                                ; 0049b0e5
    FADD float ptr [ESI + 0x14]         ; 0049b0e7
    FLD float ptr [ESI + 0x54]          ; 0049b0ea
    FLD float ptr [ESI + 0x58]          ; 0049b0ed
    FSUBP ST2,ST0                       ; 0049b0f0
    FSUBP ST2,ST0                       ; 0049b0f2
    FSTP float ptr [ESI + 0xc]          ; 0049b0f4
    FSTP float ptr [ESI + 0x4]          ; 0049b0f7
    ADD ESP,0x6c                        ; 0049b0fa
        ;   Label: LAB_0049b0fa
    POP EBP                             ; 0049b0fd
    POP EDI                             ; 0049b0fe
    POP ESI                             ; 0049b0ff
    POP EBX                             ; 0049b100
    RET                                 ; 0049b101
    MOV EAX,dword ptr [ESP + 0x40]      ; 0049b102
        ;   Label: LAB_0049b102
    MOV dword ptr [ESP + 0x54],EAX      ; 0049b106
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049b10a
    MOV EBP,EDI                         ; 0049b10e
    MOV dword ptr [ESP + 0x40],EAX      ; 0049b110
    MOV EAX,dword ptr [ESP + 0x54]      ; 0049b114
    MOV EDI,EBX                         ; 0049b118
    MOV dword ptr [ESP + 0x50],EAX      ; 0049b11a
    JMP 0x0049ae02                      ; 0049b11e
        ;   XREF to: 0049ae02 (UNCONDITIONAL_JUMP)  ; LAB_0049ae02
    FLD float ptr [ESI + 0x28]          ; 0049b123
        ;   Label: LAB_0049b123
    FSUB float ptr [EBX + 0x4]          ; 0049b126
    FLD float ptr [EBX + 0xc]           ; 0049b129
    FLD float ptr [EBX + 0x10]          ; 0049b12c
    FSUB float ptr [EBX + 0x4]          ; 0049b12f
    FXCH                                ; 0049b132
    FSUB float ptr [EBX]                ; 0049b134
    FXCH                                ; 0049b136
    FDIVP ST2,ST0                       ; 0049b138
    FMUL ST1                            ; 0049b13a
    FADD float ptr [EBX]                ; 0049b13c
    FSTP float ptr [ESP + 0xc]          ; 0049b13e
    FLD float ptr [EBX + 0x14]          ; 0049b142
    FSUB float ptr [EBX + 0x8]          ; 0049b145
    FMULP                               ; 0049b148
    FADD float ptr [EBX + 0x8]          ; 0049b14a
    MOV EAX,0x1                         ; 0049b14d
    FSTP float ptr [ESP + 0x18]         ; 0049b152
    JMP 0x0049b017                      ; 0049b156
        ;   XREF to: 0049b017 (UNCONDITIONAL_JUMP)  ; LAB_0049b017
    PUSH EDI                            ; 0049b15b
        ;   Label: LAB_0049b15b
    PUSH EBP                            ; 0049b15c
    PUSH ESI                            ; 0049b15d
    CALL core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0 ; 0049b15e
        ;   XREF to: 0049ace0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2)
    ADD ESP,0xc                         ; 0049b163
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0049b166
    PUSH EBX                            ; 0049b16a
    PUSH EBP                            ; 0049b16b
    PUSH ESI                            ; 0049b16c
    CALL core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0 ; 0049b16d
        ;   XREF to: 0049ace0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2)
    ADD ESP,0xc                         ; 0049b172
    ADD ESP,0x6c                        ; 0049b175
    POP EBP                             ; 0049b178
    POP EDI                             ; 0049b179
    POP ESI                             ; 0049b17a
    POP EBX                             ; 0049b17b
    RET                                 ; 0049b17c

