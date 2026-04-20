; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_0051f930(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0x2d0]:48  local_2d0
; CMatrix3x4f      Stack[-0x2a0]:48  local_2a0
; CMatrix3x4f      Stack[-0x270]:48  local_270
; CMatrix3x4f      Stack[-0x240]:48  local_240
; CMatrix3x4f      Stack[-0x210]:48  local_210
; CMatrix3x4f      Stack[-0x1e0]:48  local_1e0
; CMatrix3x4f      Stack[-0x1b0]:48  local_1b0
; CMatrix3x4f      Stack[-0x180]:48  local_180
; CMatrix3x4f      Stack[-0x150]:48  local_150
; CMatrix3x4f      Stack[-0x120]:48  local_120
; CMatrix3x4f      Stack[-0xf0]:48  local_f0
; CMatrix3x4f      Stack[-0xc0]:48  local_c0
; CMatrix3x4f      Stack[-0x90]:48  local_90
; CMatrix3x4f      Stack[-0x60]:48  local_60
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; CVector3f        Stack[-0x24]:12  local_24
; int              Stack[-0x18]:4  local_18
; CMimic *         Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mimic.cpp_CMimic_process_FUN_0051f780 at 0051f894
;
; Referenced Globals:
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0
;   core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f930
        ;   Label: core_mimic.cpp_CMimic_updatePose_FUN_0051f930
    PUSH ESI                            ; 0051f931
    PUSH EDI                            ; 0051f932
    PUSH EBP                            ; 0051f933
    SUB ESP,0x2c0                       ; 0051f934
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 0051f93a
    ADD EAX,0x158                       ; 0051f941
    PUSH EAX                            ; 0051f946
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0051f947
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f94c
    MOV EAX,dword ptr [EAX + 0x28558]   ; 0051f94f
    MOV EDX,dword ptr [ESP + 0x2d4]     ; 0051f955
    MOV ECX,dword ptr [ESP + 0x2d4]     ; 0051f95c
    MOV dword ptr [ESP + 0x2b8],EAX     ; 0051f963
    ADD EDX,0x1b0                       ; 0051f96a
    MOV dword ptr [ESP + 0x2bc],ECX     ; 0051f970
    MOV EBP,ECX                         ; 0051f977
    XOR EAX,EAX                         ; 0051f979
    MOV EBX,dword ptr [0x02db87d0]      ; 0051f97b | g_LocalHeroIndex
        ;   Label: LAB_0051f97b
    MOV ECX,dword ptr [ESP + 0x2b8]     ; 0051f981
    SHL EBX,0x2                         ; 0051f988
    CMP EAX,ECX                         ; 0051f98b
    JL 0x0051fa37                       ; 0051f98d
        ;   XREF to: 0051fa37 (CONDITIONAL_JUMP)  ; LAB_0051fa37
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 0051f993
    MOV EDX,dword ptr [EBX + 0x2db87c0] ; 0051f99a | g_HeroActors
    ADD EAX,0x7fc                       ; 0051f9a0
    ADD EDX,0x7fc                       ; 0051f9a5
    CMP EAX,EDX                         ; 0051f9ab
    JZ 0x0051f9bf                       ; 0051f9ad
        ;   XREF to: 0051f9bf (CONDITIONAL_JUMP)  ; LAB_0051f9bf
    MOV ECX,dword ptr [EDX]             ; 0051f9af
    MOV dword ptr [EAX],ECX             ; 0051f9b1
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051f9b3
    MOV dword ptr [EAX + 0x4],ECX       ; 0051f9b6
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051f9b9
    MOV dword ptr [EAX + 0x8],ECX       ; 0051f9bc
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 0051f9bf
        ;   Label: LAB_0051f9bf
    MOV dword ptr [EAX + 0x2388],0xffffffff ; 0051f9c6
    MOV EAX,[0x02db87d0]                ; 0051f9d0 | g_LocalHeroIndex
    MOV ESI,dword ptr [EAX*0x4 + 0x2db87c0] ; 0051f9d5 | g_HeroActors
    MOV ESI,dword ptr [ESI + 0x2c28]    ; 0051f9dc
    MOV EDX,dword ptr [ESI + 0x104]     ; 0051f9e2
    MOV EDI,dword ptr [ESP + 0x2d4]     ; 0051f9e8
    LEA ECX,[EDX*0x4 + 0x0]             ; 0051f9ef
    MOV EDI,dword ptr [EDI + 0xc090]    ; 0051f9f6
    SUB ECX,EDX                         ; 0051f9fc
    MOV ESI,dword ptr [ESI + 0x10c]     ; 0051f9fe
    SHL ECX,0x2                         ; 0051fa04
    PUSH EDI                            ; 0051fa07
    MOV EAX,ECX                         ; 0051fa08
    SHR ECX,0x2                         ; 0051fa0a
    MOVSD.REP ES:EDI,ESI                ; 0051fa0d
    MOV CL,AL                           ; 0051fa0f
    AND CL,0x3                          ; 0051fa11
    MOVSB.REP ES:EDI,ESI                ; 0051fa14
    POP EDI                             ; 0051fa16
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 0051fa17
    MOV EBX,dword ptr [EAX + 0x4bdf8]   ; 0051fa1e
    TEST EBX,EBX                        ; 0051fa24
    JNZ 0x0051faba                      ; 0051fa26
        ;   XREF to: 0051faba (CONDITIONAL_JUMP)  ; LAB_0051faba
    ADD ESP,0x2c0                       ; 0051fa2c
        ;   Label: LAB_0051fa2c
    POP EBP                             ; 0051fa32
    POP EDI                             ; 0051fa33
    POP ESI                             ; 0051fa34
    POP EBX                             ; 0051fa35
    RET                                 ; 0051fa36
    MOV ESI,EAX                         ; 0051fa37
        ;   Label: LAB_0051fa37
    MOV ECX,dword ptr [EBX + 0x2db87c0] ; 0051fa39 | g_HeroActors
    SHL ESI,0x4                         ; 0051fa3f
    LEA EDI,[EBP + 0x808]               ; 0051fa42
    LEA ESI,[ECX + ESI*0x1 + 0x808]     ; 0051fa48
    JMP 0x0060495b                      ; 0051fa4f
        ;   XREF to: 0060495b (UNCONDITIONAL_JUMP)  ; LAB_0060495b
    MOV ECX,dword ptr [EBX + 0x2db87c0] ; 0051fa56 | g_HeroActors
        ;   Label: LAB_0051fa56
    MOV EDI,dword ptr [ESP + 0x2bc]     ; 0051fa5c
    ADD ESI,ECX                         ; 0051fa63
    LEA EDI,[EDI + 0xfd8]               ; 0051fa65
    JMP 0x03fc15ee                      ; 0051fa6b
        ;   XREF to: 03fc15ee (UNCONDITIONAL_JUMP)  ; LAB_03fc15ee
    MOV ECX,dword ptr [EBX + 0x2db87c0] ; 0051fa78 | g_HeroActors
        ;   Label: LAB_0051fa78
    IMUL EBX,EAX,0xc                    ; 0051fa7e
    ADD ECX,0x1b0                       ; 0051fa81
    ADD ECX,EBX                         ; 0051fa87
    CMP EDX,ECX                         ; 0051fa89
    JZ 0x0051fa9d                       ; 0051fa8b
        ;   XREF to: 0051fa9d (CONDITIONAL_JUMP)  ; LAB_0051fa9d
    MOV EBX,dword ptr [ECX]             ; 0051fa8d
    MOV dword ptr [EDX],EBX             ; 0051fa8f
    MOV EBX,dword ptr [ECX + 0x4]       ; 0051fa91
    MOV dword ptr [EDX + 0x4],EBX       ; 0051fa94
    MOV EBX,dword ptr [ECX + 0x8]       ; 0051fa97
    MOV dword ptr [EDX + 0x8],EBX       ; 0051fa9a
    MOV ESI,dword ptr [ESP + 0x2bc]     ; 0051fa9d
        ;   Label: LAB_0051fa9d
    ADD EBP,0x10                        ; 0051faa4
    INC EAX                             ; 0051faa7
    ADD ESI,0x30                        ; 0051faa8
    ADD EDX,0xc                         ; 0051faab
    MOV dword ptr [ESP + 0x2bc],ESI     ; 0051faae
    JMP 0x0051f97b                      ; 0051fab5
        ;   XREF to: 0051f97b (UNCONDITIONAL_JUMP)  ; LAB_0051f97b
    LEA EDX,[EBX + 0x30]                ; 0051faba
        ;   Label: LAB_0051faba
    PUSH EDX                            ; 0051fabd
    LEA EAX,[EBX + 0x20]                ; 0051fabe
    PUSH EAX                            ; 0051fac1
    LEA EAX,[ESP + 0x1b8]               ; 0051fac2
    PUSH EAX                            ; 0051fac9
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 0051faca
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0051facf
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 0051fad2
    MOV EAX,dword ptr [EAX + 0x4bdf8]   ; 0051fad9
    LEA EDX,[EAX + 0x30]                ; 0051fadf
    PUSH EDX                            ; 0051fae2
    ADD EAX,0x20                        ; 0051fae3
    PUSH EAX                            ; 0051fae6
    LEA EAX,[ESP + 0x218]               ; 0051fae7
    PUSH EAX                            ; 0051faee
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0051faef
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,[0x02db87d0]                ; 0051faf4 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0051faf9 | g_HeroActors
    ADD ESP,0xc                         ; 0051fb00
    LEA EDX,[EAX + 0x30]                ; 0051fb03
    PUSH EDX                            ; 0051fb06
    ADD EAX,0x20                        ; 0051fb07
    PUSH EAX                            ; 0051fb0a
    LEA EAX,[ESP + 0x1e8]               ; 0051fb0b
    PUSH EAX                            ; 0051fb12
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0051fb13
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0051fb18
    LEA EAX,[ESP + 0x210]               ; 0051fb1b
    PUSH EAX                            ; 0051fb22
    LEA ESI,[ESP + 0x244]               ; 0051fb23
    PUSH 0x0                            ; 0051fb2a
    LEA EDI,[ESP + 0x38]                ; 0051fb2c
    CALL core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0 ; 0051fb30
        ;   XREF to: 005f6fa0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0(float z_offset, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 0051fb35
    LEA EAX,[ESP + 0x34]                ; 0051fb38
    JMP 0x03fc164c                      ; 0051fb3c
        ;   XREF to: 03fc164c (UNCONDITIONAL_JUMP)  ; LAB_03fc164c
    PUSH EAX                            ; 0051fb5a
        ;   Label: LAB_0051fb5a
    LEA ESI,[ESP + 0xd0]                ; 0051fb5b
    LEA EDI,[ESP + 0x10]                ; 0051fb62
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0051fb66
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc16bb                      ; 0051fb6b
        ;   XREF to: 03fc16bb (UNCONDITIONAL_JUMP)  ; LAB_03fc16bb
    PUSH EAX                            ; 0051fb80
        ;   Label: LAB_0051fb80
    LEA ESI,[ESP + 0xfc]                ; 0051fb81
    LEA EDI,[ESP + 0x6c]                ; 0051fb88
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0051fb8c
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc1721                      ; 0051fb91
        ;   XREF to: 03fc1721 (UNCONDITIONAL_JUMP)  ; LAB_03fc1721
    PUSH EAX                            ; 0051fba6
        ;   Label: LAB_0051fba6
    LEA ESI,[ESP + 0x128]               ; 0051fba7
    LEA EDI,[ESP + 0x278]               ; 0051fbae
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0051fbb5
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc1787                      ; 0051fbba
        ;   XREF to: 03fc1787 (UNCONDITIONAL_JUMP)  ; LAB_03fc1787
    PUSH 0x0                            ; 0051fbd3
        ;   Label: LAB_0051fbd3
    LEA ESI,[ESP + 0x158]               ; 0051fbd5
    LEA EDI,[ESP + 0x98]                ; 0051fbdc
    CALL core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0 ; 0051fbe3
        ;   XREF to: 005f6ee0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0(float x_offset, CMatrix3x4f * matrix_out)
    JMP 0x03fc17f1                      ; 0051fbe8
        ;   XREF to: 03fc17f1 (UNCONDITIONAL_JUMP)  ; LAB_03fc17f1
    PUSH EAX                            ; 0051fc00
        ;   Label: LAB_0051fc00
    LEA ESI,[ESP + 0x188]               ; 0051fc01
    LEA EDI,[ESP + 0x278]               ; 0051fc08
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0051fc0f
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc185a                      ; 0051fc14
        ;   XREF to: 03fc185a (UNCONDITIONAL_JUMP)  ; LAB_03fc185a
    MOV EAX,dword ptr [ESP + 0x27c]     ; 0051fc25
        ;   Label: LAB_0051fc25
    MOV dword ptr [ESP + 0x2a0],EAX     ; 0051fc2c
    MOV EAX,dword ptr [ESP + 0x28c]     ; 0051fc33
    MOV dword ptr [ESP + 0x2a4],EAX     ; 0051fc3a
    MOV EAX,dword ptr [ESP + 0x29c]     ; 0051fc41
    MOV EDX,dword ptr [ESP + 0x2d4]     ; 0051fc48
    MOV dword ptr [ESP + 0x2a8],EAX     ; 0051fc4f
    MOV EAX,dword ptr [ESP + 0x27c]     ; 0051fc56
    MOV dword ptr [EDX + 0x20],EAX      ; 0051fc5d
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 0051fc60
    MOV dword ptr [EDX + 0x24],EAX      ; 0051fc67
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 0051fc6a
    MOV dword ptr [EDX + 0x28],EAX      ; 0051fc71
    LEA EAX,[ESP + 0x2ac]               ; 0051fc74
    PUSH EAX                            ; 0051fc7b
    LEA EAX,[ESP + 0x274]               ; 0051fc7c
    PUSH EAX                            ; 0051fc83
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 0051fc84
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0051fc89
    MOV EDX,dword ptr [ESP + 0x2d4]     ; 0051fc8c
    ADD EDX,0x30                        ; 0051fc93
    CMP EDX,EAX                         ; 0051fc96
    JZ 0x0051fa2c                       ; 0051fc98
        ;   XREF to: 0051fa2c (CONDITIONAL_JUMP)  ; LAB_0051fa2c
    MOV ECX,dword ptr [EAX]             ; 0051fc9e
    MOV dword ptr [EDX],ECX             ; 0051fca0
    MOV ECX,dword ptr [EAX + 0x4]       ; 0051fca2
    MOV dword ptr [EDX + 0x4],ECX       ; 0051fca5
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051fca8
    MOV dword ptr [EDX + 0x8],ECX       ; 0051fcab
    ADD ESP,0x2c0                       ; 0051fcae
    POP EBP                             ; 0051fcb4
    POP EDI                             ; 0051fcb5
    POP ESI                             ; 0051fcb6
    POP EBX                             ; 0051fcb7
    RET                                 ; 0051fcb8
    MOV ECX,dword ptr [ESI]             ; 0060495b
        ;   Label: LAB_0060495b
    MOV dword ptr [EDI],ECX             ; 0060495d
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060495f
    MOV dword ptr [EDI + 0x4],ECX       ; 00604962
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604965
    MOV dword ptr [EDI + 0x8],ECX       ; 00604968
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060496b
    MOV dword ptr [EDI + 0xc],ECX       ; 0060496e
    ADD ESI,0x10                        ; 00604971
    ADD EDI,0x10                        ; 00604974
    IMUL ESI,EAX,0x30                   ; 00604977
    JMP 0x0051fa56                      ; 0060497a
        ;   XREF to: 0051fa56 (UNCONDITIONAL_JUMP)  ; LAB_0051fa56
    MOV ECX,0xc                         ; 03fc15ee
        ;   Label: LAB_03fc15ee
    LEA ESI,[ESI + 0xfd8]               ; 03fc15f3
    MOV ECX,dword ptr [ESI]             ; 03fc15f9
    MOV dword ptr [EDI],ECX             ; 03fc15fb
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc15fd
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1600
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1603
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1606
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1609
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc160c
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc160f
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1612
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1615
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1618
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc161b
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc161e
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1621
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1624
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1627
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc162a
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc162d
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1630
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1633
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1636
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1639
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc163c
    ADD ESI,0x30                        ; 03fc163f
    ADD EDI,0x30                        ; 03fc1642
    XOR ECX,ECX                         ; 03fc1645
    JMP 0x0051fa78                      ; 03fc1647
        ;   XREF to: 0051fa78 (UNCONDITIONAL_JUMP)  ; LAB_0051fa78
    MOV ECX,0xc                         ; 03fc164c
        ;   Label: LAB_03fc164c
    PUSH EAX                            ; 03fc1651
    LEA EAX,[ESP + 0x1b8]               ; 03fc1652
    LEA ESI,[ESP + 0x248]               ; 03fc1659
    PUSH EAX                            ; 03fc1660
    LEA EAX,[ESP + 0x1ec]               ; 03fc1661
    MOV ECX,dword ptr [ESI]             ; 03fc1668
    MOV dword ptr [EDI],ECX             ; 03fc166a
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc166c
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc166f
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1672
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1675
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1678
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc167b
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc167e
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1681
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1684
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1687
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc168a
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc168d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1690
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1693
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1696
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1699
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc169c
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc169f
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc16a2
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc16a5
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc16a8
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc16ab
    ADD ESI,0x30                        ; 03fc16ae
    ADD EDI,0x30                        ; 03fc16b1
    XOR ECX,ECX                         ; 03fc16b4
    JMP 0x0051fb5a                      ; 03fc16b6
        ;   XREF to: 0051fb5a (UNCONDITIONAL_JUMP)  ; LAB_0051fb5a
    MOV ECX,0xc                         ; 03fc16bb
        ;   Label: LAB_03fc16bb
    LEA ESI,[ESP + 0xd0]                ; 03fc16c0
    ADD ESP,0x8                         ; 03fc16c7
    LEA EAX,[ESP + 0x8]                 ; 03fc16ca
    MOV ECX,dword ptr [ESI]             ; 03fc16ce
    MOV dword ptr [EDI],ECX             ; 03fc16d0
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc16d2
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc16d5
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc16d8
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc16db
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc16de
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc16e1
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc16e4
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc16e7
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc16ea
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc16ed
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc16f0
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc16f3
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc16f6
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc16f9
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc16fc
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc16ff
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1702
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc1705
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1708
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc170b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc170e
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1711
    ADD ESI,0x30                        ; 03fc1714
    ADD EDI,0x30                        ; 03fc1717
    XOR ECX,ECX                         ; 03fc171a
    JMP 0x0051fb80                      ; 03fc171c
        ;   XREF to: 0051fb80 (UNCONDITIONAL_JUMP)  ; LAB_0051fb80
    MOV ECX,0xc                         ; 03fc1721
        ;   Label: LAB_03fc1721
    LEA ESI,[ESP + 0xfc]                ; 03fc1726
    ADD ESP,0x8                         ; 03fc172d
    LEA EAX,[ESP + 0x64]                ; 03fc1730
    MOV ECX,dword ptr [ESI]             ; 03fc1734
    MOV dword ptr [EDI],ECX             ; 03fc1736
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc1738
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc173b
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc173e
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1741
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1744
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc1747
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc174a
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc174d
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1750
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1753
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1756
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc1759
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc175c
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc175f
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1762
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1765
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc1768
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc176b
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc176e
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1771
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1774
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc1777
    ADD ESI,0x30                        ; 03fc177a
    ADD EDI,0x30                        ; 03fc177d
    XOR ECX,ECX                         ; 03fc1780
    JMP 0x0051fba6                      ; 03fc1782
        ;   XREF to: 0051fba6 (UNCONDITIONAL_JUMP)  ; LAB_0051fba6
    MOV ECX,0xc                         ; 03fc1787
        ;   Label: LAB_03fc1787
    ADD ESP,0x8                         ; 03fc178c
    LEA EAX,[ESP + 0x270]               ; 03fc178f
    LEA ESI,[ESP + 0x120]               ; 03fc1796
    PUSH EAX                            ; 03fc179d
    MOV ECX,dword ptr [ESI]             ; 03fc179e
    MOV dword ptr [EDI],ECX             ; 03fc17a0
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc17a2
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc17a5
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc17a8
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc17ab
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc17ae
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc17b1
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc17b4
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc17b7
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc17ba
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc17bd
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc17c0
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc17c3
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc17c6
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc17c9
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc17cc
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc17cf
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc17d2
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc17d5
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc17d8
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc17db
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc17de
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc17e1
    ADD ESI,0x30                        ; 03fc17e4
    ADD EDI,0x30                        ; 03fc17e7
    XOR ECX,ECX                         ; 03fc17ea
    JMP 0x0051fbd3                      ; 03fc17ec
        ;   XREF to: 0051fbd3 (UNCONDITIONAL_JUMP)  ; LAB_0051fbd3
    MOV ECX,0xc                         ; 03fc17f1
        ;   Label: LAB_03fc17f1
    LEA ESI,[ESP + 0x158]               ; 03fc17f6
    ADD ESP,0x4                         ; 03fc17fd
    LEA EAX,[ESP + 0x94]                ; 03fc1800
    MOV ECX,dword ptr [ESI]             ; 03fc1807
    MOV dword ptr [EDI],ECX             ; 03fc1809
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc180b
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc180e
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1811
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1814
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1817
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc181a
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc181d
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1820
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1823
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1826
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc1829
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc182c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc182f
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1832
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1835
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc1838
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc183b
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc183e
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc1841
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc1844
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc1847
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc184a
    ADD ESI,0x30                        ; 03fc184d
    ADD EDI,0x30                        ; 03fc1850
    XOR ECX,ECX                         ; 03fc1853
    JMP 0x0051fc00                      ; 03fc1855
        ;   XREF to: 0051fc00 (UNCONDITIONAL_JUMP)  ; LAB_0051fc00
    MOV ECX,0xc                         ; 03fc185a
        ;   Label: LAB_03fc185a
    LEA ESI,[ESP + 0x188]               ; 03fc185f
    ADD ESP,0x8                         ; 03fc1866
    MOV ECX,dword ptr [ESI]             ; 03fc1869
    MOV dword ptr [EDI],ECX             ; 03fc186b
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc186d
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc1870
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc1873
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc1876
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc1879
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc187c
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc187f
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc1882
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc1885
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc1888
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc188b
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc188e
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc1891
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc1894
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc1897
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc189a
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc189d
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc18a0
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc18a3
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc18a6
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc18a9
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc18ac
    ADD ESI,0x30                        ; 03fc18af
    ADD EDI,0x30                        ; 03fc18b2
    XOR ECX,ECX                         ; 03fc18b5
    JMP 0x0051fc25                      ; 03fc18b7
        ;   XREF to: 0051fc25 (UNCONDITIONAL_JUMP)  ; LAB_0051fc25

