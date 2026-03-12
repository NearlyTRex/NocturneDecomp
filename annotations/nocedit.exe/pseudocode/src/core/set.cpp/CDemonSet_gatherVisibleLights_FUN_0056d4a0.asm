; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   aabb_min
; CVector3f *      Stack[0x14]:4   aabb_max
; CMatrix3x3f *    Stack[0x18]:4   rotation_matrix
; Local Variables:
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xb0]:4  local_b0
; CVector3f        Stack[-0xac]:12  local_ac
; CVector3f[2]     Stack[-0xa0]:24  local_a0
; float            Stack[-0x88]:4  local_88
; float            Stack[-0x84]:4  local_84
; float            Stack[-0x80]:4  local_80
; int              Stack[-0x7c]:4  local_7c
; int              Stack[-0x78]:4  local_78
; int              Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; CVector3f        Stack[-0x64]:12  local_64
; CVector3f[3]     Stack[-0x58]:36  local_58
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 at 0056dbad
;
; Referenced Globals:
;   float FLOAT_00645e1b = 0.6660000
;   double DOUBLE_00645e23 = 2
;   float FLOAT_00662850 = 256
;   int INT_02d7a7b8
;   int g_SpotLightCount
;   CDemonLight*[96] g_SpotLightList
;   undefined4 DAT_03276f38
;   int g_DynamicLightCount
;   CDemonLight*[4] g_DynamicLights
;   undefined4 DAT_032776bc
;   int g_CoronaGlobeCount
;   CDemonGlobe*[100] g_CoronaGlobes
;   undefined4 DAT_032776d0
;   int g_VisibleCoronaGlobeCount
;   CDemonGlobe*[100] g_VisibleCoronaGlobes
;   ... and 19 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
;   core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d4a0
        ;   Label: core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0
    PUSH ESI                            ; 0056d4a1
    PUSH EDI                            ; 0056d4a2
    PUSH EBP                            ; 0056d4a3
    MOV EBP,ESP                         ; 0056d4a4
    SUB ESP,0xa4                        ; 0056d4a6
    AND ESP,0xfffffff8                  ; 0056d4ac
    MOV ESI,dword ptr [EBP + 0x18]      ; 0056d4af
    MOV EDI,dword ptr [EBP + 0x24]      ; 0056d4b2
    TEST ESI,ESI                        ; 0056d4b5
    JNZ 0x0056d5b7                      ; 0056d4b7
        ;   XREF to: 0056d5b7 (CONDITIONAL_JUMP)  ; LAB_0056d5b7
    MOV EDI,dword ptr [0x032776b4]      ; 0056d4bd | g_DynamicLightCount
    MOV dword ptr [0x032c1798],ESI      ; 0056d4c3 | g_PrimaryDirectionalLightCount
    TEST EDI,EDI                        ; 0056d4c9
    JLE 0x0056d504                      ; 0056d4cb
        ;   XREF to: 0056d504 (CONDITIONAL_JUMP)  ; LAB_0056d504
    LEA ESI,[EDI*0x4 + 0x0]             ; 0056d4cd
    XOR EDX,EDX                         ; 0056d4d4
    XOR EAX,EAX                         ; 0056d4d6
    MOV EBX,dword ptr [EAX + 0x32776b8] ; 0056d4d8 | g_DynamicLights | DAT_032776bc
        ;   Label: LAB_0056d4d8
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 0056d4de
    JZ 0x0056d4fd                       ; 0056d4e5
        ;   XREF to: 0056d4fd (CONDITIONAL_JUMP)  ; LAB_0056d4fd
    MOV ECX,dword ptr [0x032c1798]      ; 0056d4e7 | g_PrimaryDirectionalLightCount
    ADD EDX,0x4                         ; 0056d4ed
    INC ECX                             ; 0056d4f0
    MOV dword ptr [EDX + 0x32c1798],EBX ; 0056d4f1 | g_PrimaryDirectionalLights | DAT_032c17a0
    MOV dword ptr [0x032c1798],ECX      ; 0056d4f7 | g_PrimaryDirectionalLightCount
    ADD EAX,0x4                         ; 0056d4fd
        ;   Label: LAB_0056d4fd
    CMP EAX,ESI                         ; 0056d500
    JL 0x0056d4d8                       ; 0056d502
        ;   XREF to: 0056d4d8 (CONDITIONAL_JUMP)  ; LAB_0056d4d8
    XOR EBX,EBX                         ; 0056d504
        ;   Label: LAB_0056d504
    MOV ESI,dword ptr [0x03276f30]      ; 0056d506 | g_SpotLightCount
    MOV dword ptr [0x032c1614],EBX      ; 0056d50c | g_SecondaryDirectionalLightCount
    TEST ESI,ESI                        ; 0056d512
    JLE 0x0056d549                      ; 0056d514
        ;   XREF to: 0056d549 (CONDITIONAL_JUMP)  ; LAB_0056d549
    SHL ESI,0x2                         ; 0056d516
    XOR EDX,EDX                         ; 0056d519
    XOR EAX,EAX                         ; 0056d51b
    MOV EBX,dword ptr [EAX + 0x3276f34] ; 0056d51d | g_SpotLightList | DAT_03276f38
        ;   Label: LAB_0056d51d
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 0056d523
    JZ 0x0056d542                       ; 0056d52a
        ;   XREF to: 0056d542 (CONDITIONAL_JUMP)  ; LAB_0056d542
    MOV ECX,dword ptr [0x032c1614]      ; 0056d52c | g_SecondaryDirectionalLightCount
    ADD EDX,0x4                         ; 0056d532
    INC ECX                             ; 0056d535
    MOV dword ptr [EDX + 0x32c1614],EBX ; 0056d536 | g_SecondaryDirectionalLights | DAT_032c161c
    MOV dword ptr [0x032c1614],ECX      ; 0056d53c | g_SecondaryDirectionalLightCount
    ADD EAX,0x4                         ; 0056d542
        ;   Label: LAB_0056d542
    CMP EAX,ESI                         ; 0056d545
    JL 0x0056d51d                       ; 0056d547
        ;   XREF to: 0056d51d (CONDITIONAL_JUMP)  ; LAB_0056d51d
    MOV EAX,[0x032776c8]                ; 0056d549 | g_CoronaGlobeCount
        ;   Label: LAB_0056d549
    MOV [0x032c17ac],EAX                ; 0056d54e | g_GlobeLightCount
    TEST EAX,EAX                        ; 0056d553
    JLE 0x0056d580                      ; 0056d555
        ;   XREF to: 0056d580 (CONDITIONAL_JUMP)  ; LAB_0056d580
    MOV EBX,dword ptr [0x032776c8]      ; 0056d557 | g_CoronaGlobeCount
    XOR EAX,EAX                         ; 0056d55d
    SHL EBX,0x2                         ; 0056d55f
    ADD EAX,0x4                         ; 0056d562
        ;   Label: LAB_0056d562
    MOV EDX,dword ptr [EAX + 0x32776c8] ; 0056d565 | g_CoronaGlobes | DAT_032776d0
    MOV dword ptr [EAX + 0x32c17ac],EDX ; 0056d56b | g_GlobeLights | DAT_032c17b4
    CMP EAX,EBX                         ; 0056d571
    JL 0x0056d562                       ; 0056d573
        ;   XREF to: 0056d562 (CONDITIONAL_JUMP)  ; LAB_0056d562
    LEA EAX,[EAX]                       ; 0056d575
    LEA EDX,[EDX]                       ; 0056d57b
    MOV EBX,EBX                         ; 0056d57e
    MOV EAX,[0x03277d80]                ; 0056d580 | g_OmniLightCount
        ;   Label: LAB_0056d580
    MOV [0x032c1940],EAX                ; 0056d585 | g_ColorCorrectionCount
    TEST EAX,EAX                        ; 0056d58a
    JLE 0x0056d5b0                      ; 0056d58c
        ;   XREF to: 0056d5b0 (CONDITIONAL_JUMP)  ; LAB_0056d5b0
    MOV EBX,dword ptr [0x03277d80]      ; 0056d58e | g_OmniLightCount
    XOR EAX,EAX                         ; 0056d594
    SHL EBX,0x2                         ; 0056d596
    ADD EAX,0x4                         ; 0056d599
        ;   Label: LAB_0056d599
    MOV EDX,dword ptr [EAX + 0x3277d80] ; 0056d59c | g_OmniLights | DAT_03277d88
    MOV dword ptr [EAX + 0x32c1940],EDX ; 0056d5a2 | g_VisibleOmniLights | DAT_032c1948
    CMP EAX,EBX                         ; 0056d5a8
    JL 0x0056d599                       ; 0056d5aa
        ;   XREF to: 0056d599 (CONDITIONAL_JUMP)  ; LAB_0056d599
    LEA EAX,[EAX]                       ; 0056d5ac
    MOV ESP,EBP                         ; 0056d5b0
        ;   Label: LAB_0056d5b0
    POP EBP                             ; 0056d5b2
    POP EDI                             ; 0056d5b3
    POP ESI                             ; 0056d5b4
    POP EBX                             ; 0056d5b5
    RET                                 ; 0056d5b6
    XOR EDX,EDX                         ; 0056d5b7
        ;   Label: LAB_0056d5b7
    MOV EBX,dword ptr [0x032776b4]      ; 0056d5b9 | g_DynamicLightCount
    MOV dword ptr [ESP + 0x94],EDX      ; 0056d5bf
    MOV dword ptr [0x032c1798],EDX      ; 0056d5c6 | g_PrimaryDirectionalLightCount
    TEST EBX,EBX                        ; 0056d5cc
    JLE 0x0056d630                      ; 0056d5ce
        ;   XREF to: 0056d630 (CONDITIONAL_JUMP)  ; LAB_0056d630
    XOR EBX,EBX                         ; 0056d5d0
    MOV EAX,dword ptr [EBX + 0x32776b8] ; 0056d5d2 | g_DynamicLights | DAT_032776bc
        ;   Label: LAB_0056d5d2
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0056d5d8
    JZ 0x0056d614                       ; 0056d5df
        ;   XREF to: 0056d614 (CONDITIONAL_JUMP)  ; LAB_0056d614
    PUSH EDI                            ; 0056d5e1
    MOV ECX,dword ptr [EBP + 0x20]      ; 0056d5e2
    PUSH ECX                            ; 0056d5e5
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0056d5e6
    PUSH EDX                            ; 0056d5e9
    PUSH ESI                            ; 0056d5ea
    PUSH EAX                            ; 0056d5eb
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180 ; 0056d5ec
        ;   XREF to: 00452180 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * bbox_min, ...)
    ADD ESP,0x14                        ; 0056d5f1
    TEST EAX,EAX                        ; 0056d5f4
    JZ 0x0056d614                       ; 0056d5f6
        ;   XREF to: 0056d614 (CONDITIONAL_JUMP)  ; LAB_0056d614
    MOV EDX,dword ptr [0x032c1798]      ; 0056d5f8 | g_PrimaryDirectionalLightCount
    MOV EAX,dword ptr [EBX + 0x32776b8] ; 0056d5fe | g_DynamicLights
    LEA ECX,[EDX + 0x1]                 ; 0056d604
    MOV dword ptr [EDX*0x4 + 0x32c179c],EAX ; 0056d607 | g_PrimaryDirectionalLights
    MOV dword ptr [0x032c1798],ECX      ; 0056d60e | g_PrimaryDirectionalLightCount
    MOV EAX,dword ptr [ESP + 0x94]      ; 0056d614
        ;   Label: LAB_0056d614
    MOV EDX,dword ptr [0x032776b4]      ; 0056d61b | g_DynamicLightCount
    INC EAX                             ; 0056d621
    ADD EBX,0x4                         ; 0056d622
    MOV dword ptr [ESP + 0x94],EAX      ; 0056d625
    CMP EAX,EDX                         ; 0056d62c
    JL 0x0056d5d2                       ; 0056d62e
        ;   XREF to: 0056d5d2 (CONDITIONAL_JUMP)  ; LAB_0056d5d2
    XOR ECX,ECX                         ; 0056d630
        ;   Label: LAB_0056d630
    MOV EAX,[0x03276f30]                ; 0056d632 | g_SpotLightCount
    MOV dword ptr [ESP + 0x98],ECX      ; 0056d637
    MOV dword ptr [0x032c1614],ECX      ; 0056d63e | g_SecondaryDirectionalLightCount
    TEST EAX,EAX                        ; 0056d644
    JLE 0x0056d6a7                      ; 0056d646
        ;   XREF to: 0056d6a7 (CONDITIONAL_JUMP)  ; LAB_0056d6a7
    XOR EBX,EBX                         ; 0056d648
    MOV EAX,dword ptr [EBX + 0x3276f34] ; 0056d64a | g_SpotLightList | DAT_03276f38
        ;   Label: LAB_0056d64a
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0056d650
    JZ 0x0056d68b                       ; 0056d657
        ;   XREF to: 0056d68b (CONDITIONAL_JUMP)  ; LAB_0056d68b
    PUSH EDI                            ; 0056d659
    MOV ECX,dword ptr [EBP + 0x20]      ; 0056d65a
    PUSH ECX                            ; 0056d65d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0056d65e
    PUSH EDX                            ; 0056d661
    PUSH ESI                            ; 0056d662
    PUSH EAX                            ; 0056d663
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180 ; 0056d664
        ;   XREF to: 00452180 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180(CDemonCamera * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * bbox_min, ...)
    ADD ESP,0x14                        ; 0056d669
    TEST EAX,EAX                        ; 0056d66c
    JZ 0x0056d68b                       ; 0056d66e
        ;   XREF to: 0056d68b (CONDITIONAL_JUMP)  ; LAB_0056d68b
    MOV EAX,[0x032c1614]                ; 0056d670 | g_SecondaryDirectionalLightCount
    MOV EDX,dword ptr [EBX + 0x3276f34] ; 0056d675 | g_SpotLightList
    LEA ECX,[EAX + 0x1]                 ; 0056d67b
    MOV dword ptr [EAX*0x4 + 0x32c1618],EDX ; 0056d67e | g_SecondaryDirectionalLights
    MOV dword ptr [0x032c1614],ECX      ; 0056d685 | g_SecondaryDirectionalLightCount
    MOV EAX,dword ptr [ESP + 0x98]      ; 0056d68b
        ;   Label: LAB_0056d68b
    MOV EDX,dword ptr [0x03276f30]      ; 0056d692 | g_SpotLightCount
    INC EAX                             ; 0056d698
    ADD EBX,0x4                         ; 0056d699
    MOV dword ptr [ESP + 0x98],EAX      ; 0056d69c
    CMP EAX,EDX                         ; 0056d6a3
    JL 0x0056d64a                       ; 0056d6a5
        ;   XREF to: 0056d64a (CONDITIONAL_JUMP)  ; LAB_0056d64a
    XOR ECX,ECX                         ; 0056d6a7
        ;   Label: LAB_0056d6a7
    MOV EAX,[0x03277d80]                ; 0056d6a9 | g_OmniLightCount
    MOV dword ptr [ESP + 0x9c],ECX      ; 0056d6ae
    MOV dword ptr [0x032c1940],ECX      ; 0056d6b5 | g_ColorCorrectionCount
    TEST EAX,EAX                        ; 0056d6bb
    JLE 0x0056d773                      ; 0056d6bd
        ;   XREF to: 0056d773 (CONDITIONAL_JUMP)  ; LAB_0056d773
    MOV dword ptr [ESP + 0x8c],ECX      ; 0056d6c3
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0056d6ca
        ;   Label: LAB_0056d6ca
    MOV EBX,dword ptr [EBX + 0x3277d84] ; 0056d6d1 | g_OmniLights | DAT_03277d88
    LEA EAX,[EBX + 0x104]               ; 0056d6d7
    FLD float ptr [EAX]                 ; 0056d6dd
    FSUB float ptr [ESI]                ; 0056d6df
    FSTP float ptr [ESP + 0x54]         ; 0056d6e1
    FLD float ptr [EAX + 0x4]           ; 0056d6e5
    FSUB float ptr [ESI + 0x4]          ; 0056d6e8
    FSTP float ptr [ESP + 0x58]         ; 0056d6eb
    FLD float ptr [EAX + 0x8]           ; 0056d6ef
    LEA EAX,[ESP + 0x54]                ; 0056d6f2
    PUSH EAX                            ; 0056d6f6
    LEA EAX,[ESP + 0x1c]                ; 0056d6f7
    MOV ECX,dword ptr [EBP + 0x28]      ; 0056d6fb
    PUSH EAX                            ; 0056d6fe
    FSUB float ptr [ESI + 0x8]          ; 0056d6ff
    PUSH ECX                            ; 0056d702
    FSTP float ptr [ESP + 0x68]         ; 0056d703
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0056d707
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0056d70c
    LEA EAX,[ESP + 0x60]                ; 0056d70e
    ADD ESP,0xc                         ; 0056d712
    CMP EAX,EDX                         ; 0056d715
    JZ 0x0056d72d                       ; 0056d717
        ;   XREF to: 0056d72d (CONDITIONAL_JUMP)  ; LAB_0056d72d
    MOV EAX,dword ptr [EDX]             ; 0056d719
    MOV dword ptr [ESP + 0x54],EAX      ; 0056d71b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0056d71f
    MOV dword ptr [ESP + 0x58],EAX      ; 0056d722
    MOV EAX,dword ptr [EDX + 0x8]       ; 0056d726
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056d729
    FLD float ptr [ESP + 0x54]          ; 0056d72d
        ;   Label: LAB_0056d72d
    FADD float ptr [EBX + 0x11d4]       ; 0056d731
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056d737
    FCOMP float ptr [EAX]               ; 0056d73a
    FNSTSW AX                           ; 0056d73c
    SAHF                                ; 0056d73e
    JNC 0x0056da31                      ; 0056d73f
        ;   XREF to: 0056da31 (CONDITIONAL_JUMP)  ; LAB_0056da31
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0056d745
        ;   Label: LAB_0056d745
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0056d74c
    MOV EDX,dword ptr [0x03277d80]      ; 0056d753 | g_OmniLightCount
    ADD EBX,0x4                         ; 0056d759
    INC EAX                             ; 0056d75c
    MOV dword ptr [ESP + 0x8c],EBX      ; 0056d75d
    MOV dword ptr [ESP + 0x9c],EAX      ; 0056d764
    CMP EAX,EDX                         ; 0056d76b
    JL 0x0056d6ca                       ; 0056d76d
        ;   XREF to: 0056d6ca (CONDITIONAL_JUMP)  ; LAB_0056d6ca
    XOR ECX,ECX                         ; 0056d773
        ;   Label: LAB_0056d773
    MOV EAX,[0x032776c8]                ; 0056d775 | g_CoronaGlobeCount
    MOV dword ptr [ESP + 0x90],ECX      ; 0056d77a
    MOV dword ptr [0x032c17ac],ECX      ; 0056d781 | g_GlobeLightCount
    TEST EAX,EAX                        ; 0056d787
    JLE 0x0056d7e1                      ; 0056d789
        ;   XREF to: 0056d7e1 (CONDITIONAL_JUMP)  ; LAB_0056d7e1
    XOR EBX,EBX                         ; 0056d78b
    PUSH EDI                            ; 0056d78d
        ;   Label: LAB_0056d78d
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056d78e
    PUSH EAX                            ; 0056d791
    MOV EDX,dword ptr [EBP + 0x28]      ; 0056d792
    PUSH EDX                            ; 0056d795
    PUSH ESI                            ; 0056d796
    MOV ECX,dword ptr [EBX + 0x32776cc] ; 0056d797 | g_CoronaGlobes | DAT_032776d0
    PUSH ECX                            ; 0056d79d
    CALL core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770 ; 0056d79e
        ;   XREF to: 00471770 (UNCONDITIONAL_CALL)  ; int core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770(CDemonGlobe * this_ptr, CVector3f * reference_position, CMatrix3x3f * rotation_matrix, CVector3f * aabb_min, ...)
    ADD ESP,0x14                        ; 0056d7a3
    TEST EAX,EAX                        ; 0056d7a6
    JZ 0x0056d7c5                       ; 0056d7a8
        ;   XREF to: 0056d7c5 (CONDITIONAL_JUMP)  ; LAB_0056d7c5
    MOV EDX,dword ptr [0x032c17ac]      ; 0056d7aa | g_GlobeLightCount
    MOV EAX,dword ptr [EBX + 0x32776cc] ; 0056d7b0 | g_CoronaGlobes
    MOV dword ptr [EDX*0x4 + 0x32c17b0],EAX ; 0056d7b6 | g_GlobeLights
    LEA EAX,[EDX + 0x1]                 ; 0056d7bd
    MOV [0x032c17ac],EAX                ; 0056d7c0 | g_GlobeLightCount
    MOV EAX,dword ptr [ESP + 0x90]      ; 0056d7c5
        ;   Label: LAB_0056d7c5
    MOV EDX,dword ptr [0x032776c8]      ; 0056d7cc | g_CoronaGlobeCount
    INC EAX                             ; 0056d7d2
    ADD EBX,0x4                         ; 0056d7d3
    MOV dword ptr [ESP + 0x90],EAX      ; 0056d7d6
    CMP EAX,EDX                         ; 0056d7dd
    JL 0x0056d78d                       ; 0056d7df
        ;   XREF to: 0056d78d (CONDITIONAL_JUMP)  ; LAB_0056d78d
    XOR ECX,ECX                         ; 0056d7e1
        ;   Label: LAB_0056d7e1
    MOV EBX,dword ptr [0x03277b80]      ; 0056d7e3 | g_VisibleCoronaGlobeCount
    MOV dword ptr [ESP + 0xa0],ECX      ; 0056d7e9
    TEST EBX,EBX                        ; 0056d7f0
    JLE 0x0056d849                      ; 0056d7f2
        ;   XREF to: 0056d849 (CONDITIONAL_JUMP)  ; LAB_0056d849
    XOR EBX,EBX                         ; 0056d7f4
    PUSH EDI                            ; 0056d7f6
        ;   Label: LAB_0056d7f6
    MOV EDX,dword ptr [EBP + 0x20]      ; 0056d7f7
    PUSH EDX                            ; 0056d7fa
    MOV ECX,dword ptr [EBP + 0x28]      ; 0056d7fb
    PUSH ECX                            ; 0056d7fe
    PUSH ESI                            ; 0056d7ff
    MOV EAX,dword ptr [EBX + 0x3277b84] ; 0056d800 | g_VisibleCoronaGlobes | DAT_03277b88
    PUSH EAX                            ; 0056d806
    CALL core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770 ; 0056d807
        ;   XREF to: 00471770 (UNCONDITIONAL_CALL)  ; int core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770(CDemonGlobe * this_ptr, CVector3f * reference_position, CMatrix3x3f * rotation_matrix, CVector3f * aabb_min, ...)
    ADD ESP,0x14                        ; 0056d80c
    TEST EAX,EAX                        ; 0056d80f
    JZ 0x0056d82d                       ; 0056d811
        ;   XREF to: 0056d82d (CONDITIONAL_JUMP)  ; LAB_0056d82d
    MOV EDX,dword ptr [0x032c17ac]      ; 0056d813 | g_GlobeLightCount
    INC EDX                             ; 0056d819
    MOV EAX,dword ptr [EBX + 0x3277b84] ; 0056d81a | g_VisibleCoronaGlobes
    MOV dword ptr [EDX*0x4 + 0x32c17ac],EAX ; 0056d820 | DAT_032c17b4
    MOV dword ptr [0x032c17ac],EDX      ; 0056d827 | g_GlobeLightCount
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0056d82d
        ;   Label: LAB_0056d82d
    MOV ECX,dword ptr [0x03277b80]      ; 0056d834 | g_VisibleCoronaGlobeCount
    INC EDX                             ; 0056d83a
    ADD EBX,0x4                         ; 0056d83b
    MOV dword ptr [ESP + 0xa0],EDX      ; 0056d83e
    CMP EDX,ECX                         ; 0056d845
    JL 0x0056d7f6                       ; 0056d847
        ;   XREF to: 0056d7f6 (CONDITIONAL_JUMP)  ; LAB_0056d7f6
    CMP dword ptr [0x032c1940],0x0      ; 0056d849 | g_ColorCorrectionCount
        ;   Label: LAB_0056d849
    JLE 0x0056d5b0                      ; 0056d850
        ;   XREF to: 0056d5b0 (CONDITIONAL_JUMP)  ; LAB_0056d5b0
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056d856
    FLD float ptr [EDI]                 ; 0056d859
    FSUB float ptr [EAX]                ; 0056d85b
    FSTP float ptr [ESP + 0xc]          ; 0056d85d
    FLD float ptr [EDI + 0x4]           ; 0056d861
    FSUB float ptr [EAX + 0x4]          ; 0056d864
    FSTP float ptr [ESP + 0x10]         ; 0056d867
    FLD float ptr [EDI + 0x8]           ; 0056d86b
    FSUB float ptr [EAX + 0x8]          ; 0056d86e
    LEA EAX,[ESP + 0xc]                 ; 0056d871
    PUSH EAX                            ; 0056d875
    LEA EAX,[ESP + 0x64]                ; 0056d876
    PUSH EAX                            ; 0056d87a
    MOV EDI,dword ptr [EBP + 0x28]      ; 0056d87b
    PUSH EDI                            ; 0056d87e
    FSTP float ptr [ESP + 0x20]         ; 0056d87f
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0056d883
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 0056d888
    FADD float ptr [EAX]                ; 0056d88a
    ADD ESP,0xc                         ; 0056d88c
    FSTP float ptr [ESP + 0x48]         ; 0056d88f
    FLD float ptr [ESI + 0x4]           ; 0056d893
    FADD float ptr [EAX + 0x4]          ; 0056d896
    FSTP float ptr [ESP + 0x4c]         ; 0056d899
    FLD float ptr [ESI + 0x8]           ; 0056d89d
    FADD float ptr [EAX + 0x8]          ; 0056d8a0
    XOR EAX,EAX                         ; 0056d8a3
    XOR ESI,ESI                         ; 0056d8a5
    MOV dword ptr [ESP + 0x38],EAX      ; 0056d8a7
    MOV dword ptr [ESP + 0x34],EAX      ; 0056d8ab
    MOV dword ptr [ESP + 0x30],EAX      ; 0056d8af
    MOV dword ptr [ESP + 0x8],EAX       ; 0056d8b3
    MOV dword ptr [ESP + 0x4],EAX       ; 0056d8b7
    MOV dword ptr [ESP],EAX             ; 0056d8bb
    MOV EAX,[0x032c1940]                ; 0056d8be | g_ColorCorrectionCount
    FSTP float ptr [ESP + 0x50]         ; 0056d8c3
    TEST EAX,EAX                        ; 0056d8c7
    JLE 0x0056d95d                      ; 0056d8c9
        ;   XREF to: 0056d95d (CONDITIONAL_JUMP)  ; LAB_0056d95d
    LEA EDI,[EAX*0x4 + 0x0]             ; 0056d8cf
    XOR EBX,EBX                         ; 0056d8d6
    MOV EDX,dword ptr [EBX + 0x32c1944] ; 0056d8d8 | g_VisibleOmniLights | DAT_032c1948
        ;   Label: LAB_0056d8d8
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 0056d8de
    JZ 0x0056dabe                       ; 0056d8e8
        ;   XREF to: 0056dabe (CONDITIONAL_JUMP)  ; LAB_0056dabe
    FLD float ptr [EDX + 0x108]         ; 0056d8ee
    FLD float ptr [EDX + 0x104]         ; 0056d8f4
    FSUB float ptr [ESP + 0x48]         ; 0056d8fa
    FXCH                                ; 0056d8fe
    FSUB float ptr [ESP + 0x4c]         ; 0056d900
    FXCH                                ; 0056d904
    FST float ptr [ESP + 0x84]          ; 0056d906
    FMUL float ptr [ESP + 0x84]         ; 0056d90d
    FXCH                                ; 0056d914
    FST float ptr [ESP + 0x80]          ; 0056d916
    FMUL float ptr [ESP + 0x80]         ; 0056d91d
    FLD float ptr [EDX + 0x10c]         ; 0056d924
    FSUB float ptr [ESP + 0x50]         ; 0056d92a
    FXCH                                ; 0056d92e
    FADDP ST2,ST0                       ; 0056d930
    FST float ptr [ESP + 0x7c]          ; 0056d932
    FMUL float ptr [ESP + 0x7c]         ; 0056d936
    FADDP                               ; 0056d93a
    FST float ptr [ESP + 0x88]          ; 0056d93c
    FCOMP float ptr [EDX + 0x11d8]      ; 0056d943
    FNSTSW AX                           ; 0056d949
    SAHF                                ; 0056d94b
    JBE 0x0056daec                      ; 0056d94c
        ;   XREF to: 0056daec (CONDITIONAL_JUMP)  ; LAB_0056daec
    ADD EBX,0x4                         ; 0056d952
        ;   Label: LAB_0056d952
    CMP EBX,EDI                         ; 0056d955
    JL 0x0056d8d8                       ; 0056d957
        ;   XREF to: 0056d8d8 (CONDITIONAL_JUMP)  ; LAB_0056d8d8
    TEST ESI,ESI                        ; 0056d95d
        ;   Label: LAB_0056d95d
    JZ 0x0056db64                       ; 0056d95f
        ;   XREF to: 0056db64 (CONDITIONAL_JUMP)  ; LAB_0056db64
    LEA EBX,[ESP + 0x3c]                ; 0056d965
    MOV EAX,ESP                         ; 0056d969
    FLD float ptr [EAX]                 ; 0056d96b
    FMUL float ptr [0x00662850]         ; 0056d96d | FLOAT_00662850
    FISTP dword ptr [EBX]               ; 0056d973
    FLD float ptr [EAX + 0x4]           ; 0056d975
    FMUL float ptr [0x00662850]         ; 0056d978 | FLOAT_00662850
    FISTP dword ptr [EBX + 0x4]         ; 0056d97e
    FLD float ptr [EAX + 0x8]           ; 0056d981
    FMUL float ptr [0x00662850]         ; 0056d984 | FLOAT_00662850
    FISTP dword ptr [EBX + 0x8]         ; 0056d98a
    LEA EBX,[ESP + 0x24]                ; 0056d98d
        ;   Label: LAB_0056d98d
    LEA EAX,[ESP + 0x30]                ; 0056d991
    FLD float ptr [EAX]                 ; 0056d995
    FMUL float ptr [0x00662850]         ; 0056d997 | FLOAT_00662850
    FISTP dword ptr [EBX]               ; 0056d99d
    FLD float ptr [EAX + 0x4]           ; 0056d99f
    FMUL float ptr [0x00662850]         ; 0056d9a2 | FLOAT_00662850
    FISTP dword ptr [EBX + 0x4]         ; 0056d9a8
    FLD float ptr [EAX + 0x8]           ; 0056d9ab
    FMUL float ptr [0x00662850]         ; 0056d9ae | FLOAT_00662850
    FISTP dword ptr [EBX + 0x8]         ; 0056d9b4
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056d9b7
    ADD EAX,dword ptr [ESP + 0x3c]      ; 0056d9bb
    MOV EDX,dword ptr [ESP + 0x40]      ; 0056d9bf
    MOV [0x032c1cc0],EAX                ; 0056d9c3 | g_ColorCorrectionLightMultiplier
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056d9c8
    ADD EAX,EDX                         ; 0056d9cc
    MOV ECX,dword ptr [ESP + 0x44]      ; 0056d9ce
    MOV [0x032c1cc4],EAX                ; 0056d9d2 | g_ColorCorrectionColorMultiplier
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0056d9d7
    ADD EAX,ECX                         ; 0056d9db
    MOV EBX,dword ptr [0x032c1cc0]      ; 0056d9dd | g_ColorCorrectionLightMultiplier
    MOV [0x032c1cc8],EAX                ; 0056d9e3 | g_ColorCorrectionFogMultiplier
    CMP EBX,0xffff                      ; 0056d9e8
    JLE 0x0056d9fa                      ; 0056d9ee
        ;   XREF to: 0056d9fa (CONDITIONAL_JUMP)  ; LAB_0056d9fa
    MOV dword ptr [0x032c1cc0],0xffff   ; 0056d9f0 | g_ColorCorrectionLightMultiplier
    CMP dword ptr [0x032c1cc4],0xffff   ; 0056d9fa | g_ColorCorrectionColorMultiplier
        ;   Label: LAB_0056d9fa
    JLE 0x0056da10                      ; 0056da04
        ;   XREF to: 0056da10 (CONDITIONAL_JUMP)  ; LAB_0056da10
    MOV dword ptr [0x032c1cc4],0xffff   ; 0056da06 | g_ColorCorrectionColorMultiplier
    CMP dword ptr [0x032c1cc8],0xffff   ; 0056da10 | g_ColorCorrectionFogMultiplier
        ;   Label: LAB_0056da10
    JLE 0x0056d5b0                      ; 0056da1a
        ;   XREF to: 0056d5b0 (CONDITIONAL_JUMP)  ; LAB_0056d5b0
    MOV dword ptr [0x032c1cc8],0xffff   ; 0056da20 | g_ColorCorrectionFogMultiplier
    MOV ESP,EBP                         ; 0056da2a
    POP EBP                             ; 0056da2c
    POP EDI                             ; 0056da2d
    POP ESI                             ; 0056da2e
    POP EBX                             ; 0056da2f
    RET                                 ; 0056da30
    FLD float ptr [ESP + 0x58]          ; 0056da31
        ;   Label: LAB_0056da31
    FADD float ptr [EBX + 0x11d4]       ; 0056da35
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056da3b
    FCOMP float ptr [EAX + 0x4]         ; 0056da3e
    FNSTSW AX                           ; 0056da41
    SAHF                                ; 0056da43
    JC 0x0056d745                       ; 0056da44
        ;   XREF to: 0056d745 (CONDITIONAL_JUMP)  ; LAB_0056d745
    FLD float ptr [ESP + 0x5c]          ; 0056da4a
    FADD float ptr [EBX + 0x11d4]       ; 0056da4e
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056da54
    FCOMP float ptr [EAX + 0x8]         ; 0056da57
    FNSTSW AX                           ; 0056da5a
    SAHF                                ; 0056da5c
    JC 0x0056d745                       ; 0056da5d
        ;   XREF to: 0056d745 (CONDITIONAL_JUMP)  ; LAB_0056d745
    FLD float ptr [ESP + 0x54]          ; 0056da63
    FSUB float ptr [EBX + 0x11d4]       ; 0056da67
    FCOMP float ptr [EDI]               ; 0056da6d
    FNSTSW AX                           ; 0056da6f
    SAHF                                ; 0056da71
    JA 0x0056d745                       ; 0056da72
        ;   XREF to: 0056d745 (CONDITIONAL_JUMP)  ; LAB_0056d745
    FLD float ptr [ESP + 0x58]          ; 0056da78
    FSUB float ptr [EBX + 0x11d4]       ; 0056da7c
    FCOMP float ptr [EDI + 0x4]         ; 0056da82
    FNSTSW AX                           ; 0056da85
    SAHF                                ; 0056da87
    JA 0x0056d745                       ; 0056da88
        ;   XREF to: 0056d745 (CONDITIONAL_JUMP)  ; LAB_0056d745
    FLD float ptr [ESP + 0x5c]          ; 0056da8e
    FSUB float ptr [EBX + 0x11d4]       ; 0056da92
    FCOMP float ptr [EDI + 0x8]         ; 0056da98
    FNSTSW AX                           ; 0056da9b
    SAHF                                ; 0056da9d
    JA 0x0056d745                       ; 0056da9e
        ;   XREF to: 0056d745 (CONDITIONAL_JUMP)  ; LAB_0056d745
    MOV EAX,[0x032c1940]                ; 0056daa4 | g_ColorCorrectionCount
    MOV dword ptr [EAX*0x4 + 0x32c1944],EBX ; 0056daa9 | g_VisibleOmniLights
    LEA EBX,[EAX + 0x1]                 ; 0056dab0
    MOV dword ptr [0x032c1940],EBX      ; 0056dab3 | g_ColorCorrectionCount
    JMP 0x0056d745                      ; 0056dab9
        ;   XREF to: 0056d745 (UNCONDITIONAL_JUMP)  ; LAB_0056d745
    FLD float ptr [EDX + 0x11c4]        ; 0056dabe
        ;   Label: LAB_0056dabe
    FADD float ptr [ESP]                ; 0056dac4
    FSTP float ptr [ESP]                ; 0056dac7
    FLD float ptr [EDX + 0x11c8]        ; 0056daca
    FADD float ptr [ESP + 0x4]          ; 0056dad0
    FSTP float ptr [ESP + 0x4]          ; 0056dad4
    FLD float ptr [EDX + 0x11cc]        ; 0056dad8
    FADD float ptr [ESP + 0x8]          ; 0056dade
    INC ESI                             ; 0056dae2
    FSTP float ptr [ESP + 0x8]          ; 0056dae3
    JMP 0x0056d952                      ; 0056dae7
        ;   XREF to: 0056d952 (UNCONDITIONAL_JUMP)  ; LAB_0056d952
    MOV EAX,dword ptr [ESP + 0x88]      ; 0056daec
        ;   Label: LAB_0056daec
    MOV ECX,dword ptr [0x02d7a7b8]      ; 0056daf3 | INT_02d7a7b8
    SAR EAX,0x1                         ; 0056daf9
    ADD EAX,ECX                         ; 0056dafb
    MOV dword ptr [ESP + 0x78],EAX      ; 0056dafd
    FLD float ptr [ESP + 0x78]          ; 0056db01
    FMUL float ptr [EDX + 0x11dc]       ; 0056db05
    FLD1                                ; 0056db0b
    FSUBRP                              ; 0056db0d
    FLD ST0                             ; 0056db0f
    FMUL float ptr [0x00645e1b]         ; 0056db11 | FLOAT_00645e1b
    FST ST1                             ; 0056db17
    FMUL float ptr [EDX + 0x11c4]       ; 0056db19
    FLD double ptr [0x00645e23]         ; 0056db1f | DOUBLE_00645e23
    FXCH                                ; 0056db25
    FMUL ST1                            ; 0056db27
    FLD float ptr [ESP + 0x30]          ; 0056db29
    FXCH                                ; 0056db2d
    FADD ST0,ST1                        ; 0056db2f
    FLD ST3                             ; 0056db31
    FXCH                                ; 0056db33
    FSTP ST2                            ; 0056db35
    FXCH                                ; 0056db37
    FSTP float ptr [ESP + 0x30]         ; 0056db39
    FMUL float ptr [EDX + 0x11c8]       ; 0056db3d
    FMUL ST1                            ; 0056db43
    FADD float ptr [ESP + 0x34]         ; 0056db45
    FSTP float ptr [ESP + 0x34]         ; 0056db49
    FXCH                                ; 0056db4d
    FMUL float ptr [EDX + 0x11cc]       ; 0056db4f
    FMULP                               ; 0056db55
    FADD float ptr [ESP + 0x38]         ; 0056db57
    FSTP float ptr [ESP + 0x38]         ; 0056db5b
    JMP 0x0056d952                      ; 0056db5f
        ;   XREF to: 0056d952 (UNCONDITIONAL_JUMP)  ; LAB_0056d952
    MOV ECX,0xaaaa                      ; 0056db64
        ;   Label: LAB_0056db64
    MOV dword ptr [ESP + 0x40],ECX      ; 0056db69
    MOV dword ptr [ESP + 0x44],ECX      ; 0056db6d
    MOV dword ptr [ESP + 0x3c],ECX      ; 0056db71
    JMP 0x0056d98d                      ; 0056db75
        ;   XREF to: 0056d98d (UNCONDITIONAL_JUMP)  ; LAB_0056d98d

