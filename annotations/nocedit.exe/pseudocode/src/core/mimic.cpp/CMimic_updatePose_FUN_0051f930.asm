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
    MOVSD ES:EDI,ESI                    ; 0051fa4f
    MOVSD ES:EDI,ESI                    ; 0051fa50
    MOVSD ES:EDI,ESI                    ; 0051fa51
    MOVSD ES:EDI,ESI                    ; 0051fa52
    IMUL ESI,EAX,0x30                   ; 0051fa53
    MOV ECX,dword ptr [EBX + 0x2db87c0] ; 0051fa56 | g_HeroActors
    MOV EDI,dword ptr [ESP + 0x2bc]     ; 0051fa5c
    ADD ESI,ECX                         ; 0051fa63
    LEA EDI,[EDI + 0xfd8]               ; 0051fa65
    MOV ECX,0xc                         ; 0051fa6b
    LEA ESI,[ESI + 0xfd8]               ; 0051fa70
    MOVSD.REP ES:EDI,ESI                ; 0051fa76
    MOV ECX,dword ptr [EBX + 0x2db87c0] ; 0051fa78 | g_HeroActors
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
    MOV ECX,0xc                         ; 0051fb3c
    PUSH EAX                            ; 0051fb41
    LEA EAX,[ESP + 0x1b8]               ; 0051fb42
    LEA ESI,[ESP + 0x248]               ; 0051fb49
    PUSH EAX                            ; 0051fb50
    LEA EAX,[ESP + 0x1ec]               ; 0051fb51
    MOVSD.REP ES:EDI,ESI                ; 0051fb58
    PUSH EAX                            ; 0051fb5a
    LEA ESI,[ESP + 0xd0]                ; 0051fb5b
    LEA EDI,[ESP + 0x10]                ; 0051fb62
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0051fb66
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0051fb6b
    LEA ESI,[ESP + 0xd0]                ; 0051fb70
    ADD ESP,0x8                         ; 0051fb77
    LEA EAX,[ESP + 0x8]                 ; 0051fb7a
    MOVSD.REP ES:EDI,ESI                ; 0051fb7e
    PUSH EAX                            ; 0051fb80
    LEA ESI,[ESP + 0xfc]                ; 0051fb81
    LEA EDI,[ESP + 0x6c]                ; 0051fb88
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0051fb8c
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0051fb91
    LEA ESI,[ESP + 0xfc]                ; 0051fb96
    ADD ESP,0x8                         ; 0051fb9d
    LEA EAX,[ESP + 0x64]                ; 0051fba0
    MOVSD.REP ES:EDI,ESI                ; 0051fba4
    PUSH EAX                            ; 0051fba6
    LEA ESI,[ESP + 0x128]               ; 0051fba7
    LEA EDI,[ESP + 0x278]               ; 0051fbae
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0051fbb5
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0051fbba
    ADD ESP,0x8                         ; 0051fbbf
    LEA EAX,[ESP + 0x270]               ; 0051fbc2
    LEA ESI,[ESP + 0x120]               ; 0051fbc9
    PUSH EAX                            ; 0051fbd0
    MOVSD.REP ES:EDI,ESI                ; 0051fbd1
    PUSH 0x0                            ; 0051fbd3
    LEA ESI,[ESP + 0x158]               ; 0051fbd5
    LEA EDI,[ESP + 0x98]                ; 0051fbdc
    CALL core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0 ; 0051fbe3
        ;   XREF to: 005f6ee0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0(float x_offset, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0051fbe8
    LEA ESI,[ESP + 0x158]               ; 0051fbed
    ADD ESP,0x4                         ; 0051fbf4
    LEA EAX,[ESP + 0x94]                ; 0051fbf7
    MOVSD.REP ES:EDI,ESI                ; 0051fbfe
    PUSH EAX                            ; 0051fc00
    LEA ESI,[ESP + 0x188]               ; 0051fc01
    LEA EDI,[ESP + 0x278]               ; 0051fc08
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0051fc0f
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0051fc14
    LEA ESI,[ESP + 0x188]               ; 0051fc19
    ADD ESP,0x8                         ; 0051fc20
    MOVSD.REP ES:EDI,ESI                ; 0051fc23
    MOV EAX,dword ptr [ESP + 0x27c]     ; 0051fc25
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
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
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

