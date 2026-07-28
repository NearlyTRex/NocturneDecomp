; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mimic_cpp_FUN_004d4ba0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x2d0]:1  local_2d0
; undefined        Stack[-0x2a0]:1  local_2a0
; undefined        Stack[-0x270]:1  local_270
; undefined        Stack[-0x240]:1  local_240
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x1e0]:1  local_1e0
; undefined        Stack[-0x1b0]:1  local_1b0
; undefined        Stack[-0x180]:1  local_180
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x120]:1  local_120
; undefined        Stack[-0xf0]:1  local_f0
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mimic.cpp_FUN_004d49f0 at 004d4b04
;
; Referenced Globals:
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_buildXFlipMatrix_FUN_0055c9d0
;   core_xform.cpp_buildZFlipMatrix_FUN_0055ca90
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4ba0
        ;   Label: core_mimic.cpp_FUN_004d4ba0
    PUSH ESI                            ; 004d4ba1
    PUSH EDI                            ; 004d4ba2
    PUSH EBP                            ; 004d4ba3
    SUB ESP,0x2c0                       ; 004d4ba4
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 004d4baa
    ADD EAX,0x150                       ; 004d4bb1
    PUSH EAX                            ; 004d4bb6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004d4bb7
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d4bbc
    MOV EAX,dword ptr [EAX + 0x28558]   ; 004d4bbf
    MOV EDX,dword ptr [ESP + 0x2d4]     ; 004d4bc5
    MOV ECX,dword ptr [ESP + 0x2d4]     ; 004d4bcc
    MOV dword ptr [ESP + 0x2b8],EAX     ; 004d4bd3
    ADD EDX,0x1a8                       ; 004d4bda
    MOV dword ptr [ESP + 0x2bc],ECX     ; 004d4be0
    MOV EBP,ECX                         ; 004d4be7
    XOR EAX,EAX                         ; 004d4be9
    MOV EBX,dword ptr [0x01cae0e8]      ; 004d4beb | DAT_01cae0e8
        ;   Label: LAB_004d4beb
    MOV ECX,dword ptr [ESP + 0x2b8]     ; 004d4bf1
    SHL EBX,0x2                         ; 004d4bf8
    CMP EAX,ECX                         ; 004d4bfb
    JL 0x004d4ca7                       ; 004d4bfd
        ;   XREF to: 004d4ca7 (CONDITIONAL_JUMP)  ; LAB_004d4ca7
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 004d4c03
    MOV EDX,dword ptr [EBX + 0x1cae0d8] ; 004d4c0a
    ADD EAX,0x7f4                       ; 004d4c10
    ADD EDX,0x7f4                       ; 004d4c15
    CMP EAX,EDX                         ; 004d4c1b
    JZ 0x004d4c2f                       ; 004d4c1d
        ;   XREF to: 004d4c2f (CONDITIONAL_JUMP)  ; LAB_004d4c2f
    MOV ECX,dword ptr [EDX]             ; 004d4c1f
    MOV dword ptr [EAX],ECX             ; 004d4c21
    MOV ECX,dword ptr [EDX + 0x4]       ; 004d4c23
    MOV dword ptr [EAX + 0x4],ECX       ; 004d4c26
    MOV ECX,dword ptr [EDX + 0x8]       ; 004d4c29
    MOV dword ptr [EAX + 0x8],ECX       ; 004d4c2c
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 004d4c2f
        ;   Label: LAB_004d4c2f
    MOV dword ptr [EAX + 0x2380],0xffffffff ; 004d4c36
    MOV EAX,[0x01cae0e8]                ; 004d4c40 | DAT_01cae0e8
    MOV ESI,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d4c45
    MOV ESI,dword ptr [ESI + 0x2c20]    ; 004d4c4c
    MOV EDX,dword ptr [ESI + 0x104]     ; 004d4c52
    MOV EDI,dword ptr [ESP + 0x2d4]     ; 004d4c58
    LEA ECX,[EDX*0x4 + 0x0]             ; 004d4c5f
    MOV EDI,dword ptr [EDI + 0xbef8]    ; 004d4c66
    SUB ECX,EDX                         ; 004d4c6c
    MOV ESI,dword ptr [ESI + 0x10c]     ; 004d4c6e
    SHL ECX,0x2                         ; 004d4c74
    PUSH EDI                            ; 004d4c77
    MOV EAX,ECX                         ; 004d4c78
    SHR ECX,0x2                         ; 004d4c7a
    MOVSD.REP ES:EDI,ESI                ; 004d4c7d
    MOV CL,AL                           ; 004d4c7f
    AND CL,0x3                          ; 004d4c81
    MOVSB.REP ES:EDI,ESI                ; 004d4c84
    POP EDI                             ; 004d4c86
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 004d4c87
    MOV EBX,dword ptr [EAX + 0x46920]   ; 004d4c8e
    TEST EBX,EBX                        ; 004d4c94
    JNZ 0x004d4d2a                      ; 004d4c96
        ;   XREF to: 004d4d2a (CONDITIONAL_JUMP)  ; LAB_004d4d2a
    ADD ESP,0x2c0                       ; 004d4c9c
        ;   Label: LAB_004d4c9c
    POP EBP                             ; 004d4ca2
    POP EDI                             ; 004d4ca3
    POP ESI                             ; 004d4ca4
    POP EBX                             ; 004d4ca5
    RET                                 ; 004d4ca6
    MOV ESI,EAX                         ; 004d4ca7
        ;   Label: LAB_004d4ca7
    MOV ECX,dword ptr [EBX + 0x1cae0d8] ; 004d4ca9
    SHL ESI,0x4                         ; 004d4caf
    LEA EDI,[EBP + 0x800]               ; 004d4cb2
    LEA ESI,[ECX + ESI*0x1 + 0x800]     ; 004d4cb8
    MOVSD ES:EDI,ESI                    ; 004d4cbf
    MOVSD ES:EDI,ESI                    ; 004d4cc0
    MOVSD ES:EDI,ESI                    ; 004d4cc1
    MOVSD ES:EDI,ESI                    ; 004d4cc2
    IMUL ESI,EAX,0x30                   ; 004d4cc3
    MOV ECX,dword ptr [EBX + 0x1cae0d8] ; 004d4cc6
    MOV EDI,dword ptr [ESP + 0x2bc]     ; 004d4ccc
    ADD ESI,ECX                         ; 004d4cd3
    LEA EDI,[EDI + 0xfd0]               ; 004d4cd5
    MOV ECX,0xc                         ; 004d4cdb
    LEA ESI,[ESI + 0xfd0]               ; 004d4ce0
    MOVSD.REP ES:EDI,ESI                ; 004d4ce6
    MOV ECX,dword ptr [EBX + 0x1cae0d8] ; 004d4ce8
    IMUL EBX,EAX,0xc                    ; 004d4cee
    ADD ECX,0x1a8                       ; 004d4cf1
    ADD ECX,EBX                         ; 004d4cf7
    CMP EDX,ECX                         ; 004d4cf9
    JZ 0x004d4d0d                       ; 004d4cfb
        ;   XREF to: 004d4d0d (CONDITIONAL_JUMP)  ; LAB_004d4d0d
    MOV EBX,dword ptr [ECX]             ; 004d4cfd
    MOV dword ptr [EDX],EBX             ; 004d4cff
    MOV EBX,dword ptr [ECX + 0x4]       ; 004d4d01
    MOV dword ptr [EDX + 0x4],EBX       ; 004d4d04
    MOV EBX,dword ptr [ECX + 0x8]       ; 004d4d07
    MOV dword ptr [EDX + 0x8],EBX       ; 004d4d0a
    MOV ESI,dword ptr [ESP + 0x2bc]     ; 004d4d0d
        ;   Label: LAB_004d4d0d
    ADD EBP,0x10                        ; 004d4d14
    INC EAX                             ; 004d4d17
    ADD ESI,0x30                        ; 004d4d18
    ADD EDX,0xc                         ; 004d4d1b
    MOV dword ptr [ESP + 0x2bc],ESI     ; 004d4d1e
    JMP 0x004d4beb                      ; 004d4d25
        ;   XREF to: 004d4beb (UNCONDITIONAL_JUMP)  ; LAB_004d4beb
    LEA EDX,[EBX + 0x30]                ; 004d4d2a
        ;   Label: LAB_004d4d2a
    PUSH EDX                            ; 004d4d2d
    LEA EAX,[EBX + 0x20]                ; 004d4d2e
    PUSH EAX                            ; 004d4d31
    LEA EAX,[ESP + 0x1b8]               ; 004d4d32
    PUSH EAX                            ; 004d4d39
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 004d4d3a
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004d4d3f
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 004d4d42
    MOV EAX,dword ptr [EAX + 0x46920]   ; 004d4d49
    LEA EDX,[EAX + 0x30]                ; 004d4d4f
    PUSH EDX                            ; 004d4d52
    ADD EAX,0x20                        ; 004d4d53
    PUSH EAX                            ; 004d4d56
    LEA EAX,[ESP + 0x218]               ; 004d4d57
    PUSH EAX                            ; 004d4d5e
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004d4d5f
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    MOV EAX,[0x01cae0e8]                ; 004d4d64 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d4d69
    ADD ESP,0xc                         ; 004d4d70
    LEA EDX,[EAX + 0x30]                ; 004d4d73
    PUSH EDX                            ; 004d4d76
    ADD EAX,0x20                        ; 004d4d77
    PUSH EAX                            ; 004d4d7a
    LEA EAX,[ESP + 0x1e8]               ; 004d4d7b
    PUSH EAX                            ; 004d4d82
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004d4d83
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 004d4d88
    LEA EAX,[ESP + 0x210]               ; 004d4d8b
    PUSH EAX                            ; 004d4d92
    LEA ESI,[ESP + 0x244]               ; 004d4d93
    PUSH 0x0                            ; 004d4d9a
    LEA EDI,[ESP + 0x38]                ; 004d4d9c
    CALL core_xform.cpp_buildZFlipMatrix_FUN_0055ca90 ; 004d4da0
        ;   XREF to: 0055ca90 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildZFlipMatrix_FUN_0055ca90()
    ADD ESP,0x4                         ; 004d4da5
    LEA EAX,[ESP + 0x34]                ; 004d4da8
    MOV ECX,0xc                         ; 004d4dac
    PUSH EAX                            ; 004d4db1
    LEA EAX,[ESP + 0x1b8]               ; 004d4db2
    LEA ESI,[ESP + 0x248]               ; 004d4db9
    PUSH EAX                            ; 004d4dc0
    LEA EAX,[ESP + 0x1ec]               ; 004d4dc1
    MOVSD.REP ES:EDI,ESI                ; 004d4dc8
    PUSH EAX                            ; 004d4dca
    LEA ESI,[ESP + 0xd0]                ; 004d4dcb
    LEA EDI,[ESP + 0x10]                ; 004d4dd2
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004d4dd6
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004d4ddb
    LEA ESI,[ESP + 0xd0]                ; 004d4de0
    ADD ESP,0x8                         ; 004d4de7
    LEA EAX,[ESP + 0x8]                 ; 004d4dea
    MOVSD.REP ES:EDI,ESI                ; 004d4dee
    PUSH EAX                            ; 004d4df0
    LEA ESI,[ESP + 0xfc]                ; 004d4df1
    LEA EDI,[ESP + 0x6c]                ; 004d4df8
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004d4dfc
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004d4e01
    LEA ESI,[ESP + 0xfc]                ; 004d4e06
    ADD ESP,0x8                         ; 004d4e0d
    LEA EAX,[ESP + 0x64]                ; 004d4e10
    MOVSD.REP ES:EDI,ESI                ; 004d4e14
    PUSH EAX                            ; 004d4e16
    LEA ESI,[ESP + 0x128]               ; 004d4e17
    LEA EDI,[ESP + 0x278]               ; 004d4e1e
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004d4e25
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004d4e2a
    ADD ESP,0x8                         ; 004d4e2f
    LEA EAX,[ESP + 0x270]               ; 004d4e32
    LEA ESI,[ESP + 0x120]               ; 004d4e39
    PUSH EAX                            ; 004d4e40
    MOVSD.REP ES:EDI,ESI                ; 004d4e41
    PUSH 0x0                            ; 004d4e43
    LEA ESI,[ESP + 0x158]               ; 004d4e45
    LEA EDI,[ESP + 0x98]                ; 004d4e4c
    CALL core_xform.cpp_buildXFlipMatrix_FUN_0055c9d0 ; 004d4e53
        ;   XREF to: 0055c9d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildXFlipMatrix_FUN_0055c9d0()
    MOV ECX,0xc                         ; 004d4e58
    LEA ESI,[ESP + 0x158]               ; 004d4e5d
    ADD ESP,0x4                         ; 004d4e64
    LEA EAX,[ESP + 0x94]                ; 004d4e67
    MOVSD.REP ES:EDI,ESI                ; 004d4e6e
    PUSH EAX                            ; 004d4e70
    LEA ESI,[ESP + 0x188]               ; 004d4e71
    LEA EDI,[ESP + 0x278]               ; 004d4e78
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004d4e7f
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004d4e84
    LEA ESI,[ESP + 0x188]               ; 004d4e89
    ADD ESP,0x8                         ; 004d4e90
    MOVSD.REP ES:EDI,ESI                ; 004d4e93
    MOV EAX,dword ptr [ESP + 0x27c]     ; 004d4e95
    MOV dword ptr [ESP + 0x2a0],EAX     ; 004d4e9c
    MOV EAX,dword ptr [ESP + 0x28c]     ; 004d4ea3
    MOV dword ptr [ESP + 0x2a4],EAX     ; 004d4eaa
    MOV EAX,dword ptr [ESP + 0x29c]     ; 004d4eb1
    MOV EDX,dword ptr [ESP + 0x2d4]     ; 004d4eb8
    MOV dword ptr [ESP + 0x2a8],EAX     ; 004d4ebf
    MOV EAX,dword ptr [ESP + 0x27c]     ; 004d4ec6
    MOV dword ptr [EDX + 0x20],EAX      ; 004d4ecd
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 004d4ed0
    MOV dword ptr [EDX + 0x24],EAX      ; 004d4ed7
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 004d4eda
    MOV dword ptr [EDX + 0x28],EAX      ; 004d4ee1
    LEA EAX,[ESP + 0x2ac]               ; 004d4ee4
    PUSH EAX                            ; 004d4eeb
    LEA EAX,[ESP + 0x274]               ; 004d4eec
    PUSH EAX                            ; 004d4ef3
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 004d4ef4
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 004d4ef9
    MOV EDX,dword ptr [ESP + 0x2d4]     ; 004d4efc
    ADD EDX,0x30                        ; 004d4f03
    CMP EDX,EAX                         ; 004d4f06
    JZ 0x004d4c9c                       ; 004d4f08
        ;   XREF to: 004d4c9c (CONDITIONAL_JUMP)  ; LAB_004d4c9c
    MOV ECX,dword ptr [EAX]             ; 004d4f0e
    MOV dword ptr [EDX],ECX             ; 004d4f10
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d4f12
    MOV dword ptr [EDX + 0x4],ECX       ; 004d4f15
    MOV ECX,dword ptr [EAX + 0x8]       ; 004d4f18
    MOV dword ptr [EDX + 0x8],ECX       ; 004d4f1b
    ADD ESP,0x2c0                       ; 004d4f1e
    POP EBP                             ; 004d4f24
    POP EDI                             ; 004d4f25
    POP ESI                             ; 004d4f26
    POP EBX                             ; 004d4f27
    RET                                 ; 004d4f28

