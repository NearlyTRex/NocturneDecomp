; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_FUN_0050f7e0(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x2e8]:1  local_2e8
; undefined        Stack[-0x2b8]:1  local_2b8
; undefined        Stack[-0x288]:1  local_288
; undefined        Stack[-0x258]:1  local_258
; undefined        Stack[-0x228]:1  local_228
; undefined        Stack[-0x1f8]:1  local_1f8
; undefined        Stack[-0x1c8]:1  local_1c8
; undefined        Stack[-0x198]:1  local_198
; undefined        Stack[-0x168]:1  local_168
; undefined        Stack[-0x138]:1  local_138
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x10c]:4  local_10c
; undefined        Stack[-0x108]:1  local_108
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mimic.cpp_FUN_0050f630 at 0050f744
;
; Referenced Globals:
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_xform.cpp_FUN_005b5620
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_FUN_005b5930
;   core_xform.cpp_FUN_005b7030
;   core_xform.cpp_FUN_005b70f0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f7e0
        ;   Label: core_mimic.cpp_FUN_0050f7e0
    PUSH ESI                            ; 0050f7e1
    PUSH EDI                            ; 0050f7e2
    PUSH EBP                            ; 0050f7e3
    SUB ESP,0x2d8                       ; 0050f7e4
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 0050f7ea
    ADD EAX,0x158                       ; 0050f7f1
    PUSH EAX                            ; 0050f7f6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0050f7f7
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050f7fc
    MOV EAX,dword ptr [EAX + 0x1de78]   ; 0050f7ff
    XOR EDX,EDX                         ; 0050f805
    MOV ECX,dword ptr [ESP + 0x2ec]     ; 0050f807
    MOV dword ptr [ESP + 0x2d0],EAX     ; 0050f80e
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 0050f815
    MOV dword ptr [ESP + 0x2d4],ECX     ; 0050f81c
    MOV EBP,ECX                         ; 0050f823
    ADD EAX,0x1b0                       ; 0050f825
    MOV EBX,dword ptr [0x01d06ab4]      ; 0050f82a | DAT_01d06ab4
        ;   Label: LAB_0050f82a
    MOV ECX,dword ptr [ESP + 0x2d0]     ; 0050f830
    SHL EBX,0x2                         ; 0050f837
    CMP EDX,ECX                         ; 0050f83a
    JL 0x0050f8e6                       ; 0050f83c
        ;   XREF to: 0050f8e6 (CONDITIONAL_JUMP)  ; LAB_0050f8e6
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 0050f842
    MOV EDX,dword ptr [EBX + 0x1d06aa4] ; 0050f849
    ADD EAX,0x7fc                       ; 0050f84f
    ADD EDX,0x7fc                       ; 0050f854
    CMP EAX,EDX                         ; 0050f85a
    JZ 0x0050f86e                       ; 0050f85c
        ;   XREF to: 0050f86e (CONDITIONAL_JUMP)  ; LAB_0050f86e
    MOV ECX,dword ptr [EDX]             ; 0050f85e
    MOV dword ptr [EAX],ECX             ; 0050f860
    MOV ECX,dword ptr [EDX + 0x4]       ; 0050f862
    MOV dword ptr [EAX + 0x4],ECX       ; 0050f865
    MOV ECX,dword ptr [EDX + 0x8]       ; 0050f868
    MOV dword ptr [EAX + 0x8],ECX       ; 0050f86b
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 0050f86e
        ;   Label: LAB_0050f86e
    MOV dword ptr [EAX + 0x2478],0xffffffff ; 0050f875
    MOV EAX,[0x01d06ab4]                ; 0050f87f | DAT_01d06ab4
    MOV ESI,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0050f884
    MOV ESI,dword ptr [ESI + 0x2e34]    ; 0050f88b
    MOV EDX,dword ptr [ESI + 0x104]     ; 0050f891
    MOV EDI,dword ptr [ESP + 0x2ec]     ; 0050f897
    LEA ECX,[EDX*0x4 + 0x0]             ; 0050f89e
    MOV EDI,dword ptr [EDI + 0xc43c]    ; 0050f8a5
    SUB ECX,EDX                         ; 0050f8ab
    MOV ESI,dword ptr [ESI + 0x10c]     ; 0050f8ad
    SHL ECX,0x2                         ; 0050f8b3
    PUSH EDI                            ; 0050f8b6
    MOV EAX,ECX                         ; 0050f8b7
    SHR ECX,0x2                         ; 0050f8b9
    MOVSD.REP ES:EDI,ESI                ; 0050f8bc
    MOV CL,AL                           ; 0050f8be
    AND CL,0x3                          ; 0050f8c0
    MOVSB.REP ES:EDI,ESI                ; 0050f8c3
    POP EDI                             ; 0050f8c5
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 0050f8c6
    MOV EBX,dword ptr [EAX + 0x46e64]   ; 0050f8cd
    TEST EBX,EBX                        ; 0050f8d3
    JNZ 0x0050f969                      ; 0050f8d5
        ;   XREF to: 0050f969 (CONDITIONAL_JUMP)  ; LAB_0050f969
    ADD ESP,0x2d8                       ; 0050f8db
        ;   Label: LAB_0050f8db
    POP EBP                             ; 0050f8e1
    POP EDI                             ; 0050f8e2
    POP ESI                             ; 0050f8e3
    POP EBX                             ; 0050f8e4
    RET                                 ; 0050f8e5
    MOV ESI,EDX                         ; 0050f8e6
        ;   Label: LAB_0050f8e6
    MOV ECX,dword ptr [EBX + 0x1d06aa4] ; 0050f8e8
    SHL ESI,0x4                         ; 0050f8ee
    LEA EDI,[EBP + 0x808]               ; 0050f8f1
    LEA ESI,[ECX + ESI*0x1 + 0x808]     ; 0050f8f7
    MOVSD ES:EDI,ESI                    ; 0050f8fe
    MOVSD ES:EDI,ESI                    ; 0050f8ff
    MOVSD ES:EDI,ESI                    ; 0050f900
    MOVSD ES:EDI,ESI                    ; 0050f901
    IMUL ESI,EDX,0x30                   ; 0050f902
    MOV ECX,dword ptr [EBX + 0x1d06aa4] ; 0050f905
    MOV EDI,dword ptr [ESP + 0x2d4]     ; 0050f90b
    ADD ESI,ECX                         ; 0050f912
    LEA EDI,[EDI + 0xfd8]               ; 0050f914
    MOV ECX,0xc                         ; 0050f91a
    LEA ESI,[ESI + 0xfd8]               ; 0050f91f
    MOVSD.REP ES:EDI,ESI                ; 0050f925
    MOV ECX,dword ptr [EBX + 0x1d06aa4] ; 0050f927
    IMUL EBX,EDX,0xc                    ; 0050f92d
    ADD ECX,0x1b0                       ; 0050f930
    ADD ECX,EBX                         ; 0050f936
    CMP EAX,ECX                         ; 0050f938
    JZ 0x0050f94c                       ; 0050f93a
        ;   XREF to: 0050f94c (CONDITIONAL_JUMP)  ; LAB_0050f94c
    MOV EBX,dword ptr [ECX]             ; 0050f93c
    MOV dword ptr [EAX],EBX             ; 0050f93e
    MOV EBX,dword ptr [ECX + 0x4]       ; 0050f940
    MOV dword ptr [EAX + 0x4],EBX       ; 0050f943
    MOV EBX,dword ptr [ECX + 0x8]       ; 0050f946
    MOV dword ptr [EAX + 0x8],EBX       ; 0050f949
    MOV ESI,dword ptr [ESP + 0x2d4]     ; 0050f94c
        ;   Label: LAB_0050f94c
    ADD EBP,0x10                        ; 0050f953
    INC EDX                             ; 0050f956
    ADD ESI,0x30                        ; 0050f957
    ADD EAX,0xc                         ; 0050f95a
    MOV dword ptr [ESP + 0x2d4],ESI     ; 0050f95d
    JMP 0x0050f82a                      ; 0050f964
        ;   XREF to: 0050f82a (UNCONDITIONAL_JUMP)  ; LAB_0050f82a
    LEA EDX,[EBX + 0x30]                ; 0050f969
        ;   Label: LAB_0050f969
    PUSH EDX                            ; 0050f96c
    LEA EAX,[EBX + 0x20]                ; 0050f96d
    PUSH EAX                            ; 0050f970
    LEA EAX,[ESP + 0x188]               ; 0050f971
    PUSH EAX                            ; 0050f978
    CALL core_xform.cpp_FUN_005b5620    ; 0050f979
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0050f97e
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 0050f981
    MOV EAX,dword ptr [EAX + 0x46e64]   ; 0050f988
    LEA EDX,[EAX + 0x30]                ; 0050f98e
    PUSH EDX                            ; 0050f991
    ADD EAX,0x20                        ; 0050f992
    PUSH EAX                            ; 0050f995
    LEA EAX,[ESP + 0x1e8]               ; 0050f996
    PUSH EAX                            ; 0050f99d
    CALL core_xform.cpp_FUN_005b5760    ; 0050f99e
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,[0x01d06ab4]                ; 0050f9a3 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0050f9a8
    ADD ESP,0xc                         ; 0050f9af
    LEA EDX,[EAX + 0x30]                ; 0050f9b2
    PUSH EDX                            ; 0050f9b5
    ADD EAX,0x20                        ; 0050f9b6
    PUSH EAX                            ; 0050f9b9
    LEA EAX,[ESP + 0xf8]                ; 0050f9ba
    PUSH EAX                            ; 0050f9c1
    CALL core_xform.cpp_FUN_005b5760    ; 0050f9c2
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0050f9c7
    LEA EAX,[ESP + 0x1e0]               ; 0050f9ca
    PUSH EAX                            ; 0050f9d1
    LEA ESI,[ESP + 0x154]               ; 0050f9d2
    PUSH 0x0                            ; 0050f9d9
    LEA EDI,[ESP + 0x218]               ; 0050f9db
    CALL core_xform.cpp_FUN_005b70f0    ; 0050f9e2
        ;   XREF to: 005b70f0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b70f0()
    ADD ESP,0x4                         ; 0050f9e7
    LEA EAX,[ESP + 0x214]               ; 0050f9ea
    MOV ECX,0xc                         ; 0050f9f1
    PUSH EAX                            ; 0050f9f6
    LEA EAX,[ESP + 0x188]               ; 0050f9f7
    LEA ESI,[ESP + 0x158]               ; 0050f9fe
    PUSH EAX                            ; 0050fa05
    LEA EAX,[ESP + 0xfc]                ; 0050fa06
    MOVSD.REP ES:EDI,ESI                ; 0050fa0d
    PUSH EAX                            ; 0050fa0f
    LEA ESI,[ESP + 0x250]               ; 0050fa10
    LEA EDI,[ESP + 0x130]               ; 0050fa17
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0050fa1e
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0050fa23
    LEA ESI,[ESP + 0x250]               ; 0050fa28
    ADD ESP,0x8                         ; 0050fa2f
    LEA EAX,[ESP + 0x128]               ; 0050fa32
    MOVSD.REP ES:EDI,ESI                ; 0050fa39
    PUSH EAX                            ; 0050fa3b
    LEA ESI,[ESP + 0x27c]               ; 0050fa3c
    LEA EDI,[ESP + 0xc]                 ; 0050fa43
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0050fa47
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0050fa4c
    LEA ESI,[ESP + 0x27c]               ; 0050fa51
    ADD ESP,0x8                         ; 0050fa58
    LEA EAX,[ESP + 0x4]                 ; 0050fa5b
    MOVSD.REP ES:EDI,ESI                ; 0050fa5f
    PUSH EAX                            ; 0050fa61
    LEA ESI,[ESP + 0x68]                ; 0050fa62
    LEA EDI,[ESP + 0x1b8]               ; 0050fa66
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0050fa6d
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0050fa72
    ADD ESP,0x8                         ; 0050fa77
    LEA EAX,[ESP + 0x1b0]               ; 0050fa7a
    LEA ESI,[ESP + 0x60]                ; 0050fa81
    PUSH EAX                            ; 0050fa85
    MOVSD.REP ES:EDI,ESI                ; 0050fa86
    PUSH 0x0                            ; 0050fa88
    LEA ESI,[ESP + 0x98]                ; 0050fa8a
    LEA EDI,[ESP + 0x38]                ; 0050fa91
    CALL core_xform.cpp_FUN_005b7030    ; 0050fa95
        ;   XREF to: 005b7030 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7030()
    MOV ECX,0xc                         ; 0050fa9a
    LEA ESI,[ESP + 0x98]                ; 0050fa9f
    ADD ESP,0x4                         ; 0050faa6
    LEA EAX,[ESP + 0x34]                ; 0050faa9
    MOVSD.REP ES:EDI,ESI                ; 0050faad
    PUSH EAX                            ; 0050faaf
    LEA ESI,[ESP + 0xc8]                ; 0050fab0
    LEA EDI,[ESP + 0x1b8]               ; 0050fab7
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0050fabe
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0050fac3
    LEA ESI,[ESP + 0xc8]                ; 0050fac8
    ADD ESP,0x8                         ; 0050facf
    MOVSD.REP ES:EDI,ESI                ; 0050fad2
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0050fad4
    MOV dword ptr [ESP + 0x2ac],EAX     ; 0050fadb
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 0050fae2
    LEA EDI,[ESP + 0x2c4]               ; 0050fae9
    MOV dword ptr [ESP + 0x2b0],EAX     ; 0050faf0
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 0050faf7
    LEA ESI,[ESP + 0x2ac]               ; 0050fafe
    MOV dword ptr [ESP + 0x2b4],EAX     ; 0050fb05
    MOVSD ES:EDI,ESI                    ; 0050fb0c
    MOVSD ES:EDI,ESI                    ; 0050fb0d
    MOVSD ES:EDI,ESI                    ; 0050fb0e
    MOV EDX,dword ptr [ESP + 0x2ec]     ; 0050fb0f
    MOV EAX,dword ptr [ESP + 0x2c4]     ; 0050fb16
    MOV dword ptr [EDX + 0x20],EAX      ; 0050fb1d
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 0050fb20
    MOV dword ptr [EDX + 0x24],EAX      ; 0050fb27
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 0050fb2a
    MOV dword ptr [EDX + 0x28],EAX      ; 0050fb31
    LEA EAX,[ESP + 0x1b0]               ; 0050fb34
    PUSH EAX                            ; 0050fb3b
    LEA ESI,[ESP + 0x2bc]               ; 0050fb3c
    LEA EDI,[ESP + 0x2a4]               ; 0050fb43
    CALL core_xform.cpp_FUN_005b5930    ; 0050fb4a
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5930()
    ADD ESP,0x4                         ; 0050fb4f
    LEA ESI,[ESP + 0x2b8]               ; 0050fb52
    MOV EDX,dword ptr [ESP + 0x2ec]     ; 0050fb59
    LEA EAX,[ESP + 0x2a0]               ; 0050fb60
    ADD EDX,0x30                        ; 0050fb67
    MOVSD ES:EDI,ESI                    ; 0050fb6a
    MOVSD ES:EDI,ESI                    ; 0050fb6b
    MOVSD ES:EDI,ESI                    ; 0050fb6c
    CMP EDX,EAX                         ; 0050fb6d
    JZ 0x0050f8db                       ; 0050fb6f
        ;   XREF to: 0050f8db (CONDITIONAL_JUMP)  ; LAB_0050f8db
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 0050fb75
    MOV dword ptr [EDX],EAX             ; 0050fb7c
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 0050fb7e
    MOV dword ptr [EDX + 0x4],EAX       ; 0050fb85
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 0050fb88
    MOV dword ptr [EDX + 0x8],EAX       ; 0050fb8f
    ADD ESP,0x2d8                       ; 0050fb92
    POP EBP                             ; 0050fb98
    POP EDI                             ; 0050fb99
    POP ESI                             ; 0050fb9a
    POP EBX                             ; 0050fb9b
    RET                                 ; 0050fb9c

