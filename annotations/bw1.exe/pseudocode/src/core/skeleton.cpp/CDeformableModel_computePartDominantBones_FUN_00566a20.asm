; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_00566a20(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0xc8]:4  local_c8
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
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00564ed0 at 005656eb
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f241b
;   TerminatedCString s_CDeformableModel_compute_005f2430
;   undefined4 DAT_00605890
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
;   core_skeleton.cpp_FUN_00563bb0
;   core_skeleton.cpp_FUN_00563c40
;   core_skeleton.cpp_FUN_00569180
;   core_skeleton.cpp_FUN_00569890
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566a20
        ;   Label: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00566a20
    PUSH ESI                            ; 00566a21
    PUSH EDI                            ; 00566a22
    PUSH EBP                            ; 00566a23
    MOV EBP,ESP                         ; 00566a24
    SUB ESP,0x244                       ; 00566a26
    AND ESP,0xfffffff8                  ; 00566a2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00566a2f
    CMP dword ptr [EAX + 0xc00],0x2     ; 00566a32
    JGE 0x00566a67                      ; 00566a39
        ;   XREF to: 00566a67 (CONDITIONAL_JUMP)  ; LAB_00566a67
    LEA EDX,[EAX + 0x190]               ; 00566a3b
    MOV dword ptr [EAX + 0xc60],0x0     ; 00566a41
    ADD EAX,0x4                         ; 00566a4b
        ;   Label: LAB_00566a4b
    MOV dword ptr [EAX + 0x3238],0x0    ; 00566a4e
    CMP EAX,EDX                         ; 00566a58
    JNZ 0x00566a4b                      ; 00566a5a
        ;   XREF to: 00566a4b (CONDITIONAL_JUMP)  ; LAB_00566a4b
    LEA EAX,[EAX]                       ; 00566a5c
    MOV ESP,EBP                         ; 00566a60
        ;   Label: LAB_00566a60
    POP EBP                             ; 00566a62
    POP EDI                             ; 00566a63
    POP ESI                             ; 00566a64
    POP EBX                             ; 00566a65
    RET                                 ; 00566a66
    PUSH EAX                            ; 00566a67
        ;   Label: LAB_00566a67
    CALL core_skeleton.cpp_FUN_00563bb0 ; 00566a68
        ;   XREF to: 00563bb0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00563bb0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00566a6d
    MOV EBX,dword ptr [EBP + 0x14]      ; 00566a70
    PUSH EBX                            ; 00566a73
    CALL core_skeleton.cpp_FUN_00563c40 ; 00566a74
        ;   XREF to: 00563c40 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_FUN_00563c40(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00566a79
    MOV EAX,dword ptr [EAX + 0x1de78]   ; 00566a7c
    PUSH 0x23a4                         ; 00566a82
    MOV dword ptr [ESP + 0x234],EAX     ; 00566a87
    CALL crt_unknown.c_FUN_005c0f32     ; 00566a8e
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 00566a93
    TEST EAX,EAX                        ; 00566a96
    JZ 0x00566aa3                       ; 00566a98
        ;   XREF to: 00566aa3 (CONDITIONAL_JUMP)  ; LAB_00566aa3
    PUSH EAX                            ; 00566a9a
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370 ; 00566a9b
        ;   XREF to: 00567370 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00566aa0
    MOV dword ptr [ESP + 0x234],EAX     ; 00566aa3
        ;   Label: LAB_00566aa3
    TEST EAX,EAX                        ; 00566aaa
    JNZ 0x00566ad1                      ; 00566aac
        ;   XREF to: 00566ad1 (CONDITIONAL_JUMP)  ; LAB_00566ad1
    MOV ESI,0x5f241b                    ; 00566aae | = "..\\core\\skeleton.cpp"
    MOV EDI,0x7f2                       ; 00566ab3
    PUSH 0x5f2430                       ; 00566ab8 | = "CDeformableModel::computePartDominant..."
    MOV dword ptr [0x01d1d400],ESI      ; 00566abd | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00566ac3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00566ac9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00566ace
    MOV EAX,dword ptr [EBP + 0x14]      ; 00566ad1
        ;   Label: LAB_00566ad1
    PUSH EAX                            ; 00566ad4
    MOV EDX,dword ptr [ESP + 0x238]     ; 00566ad5
    PUSH EDX                            ; 00566adc
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50 ; 00566add
        ;   XREF to: 00569b50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 00566ae2
    MOV ECX,dword ptr [ESP + 0x234]     ; 00566ae5
    PUSH ECX                            ; 00566aec
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 ; 00566aed
        ;   XREF to: 00567500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00566af2
    MOV EBX,dword ptr [ESP + 0x234]     ; 00566af5
    PUSH EBX                            ; 00566afc
    CALL core_skeleton.cpp_FUN_00569180 ; 00566afd
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00566b02
    PUSH 0x0                            ; 00566b05
    PUSH EBX                            ; 00566b07
    CALL core_skeleton.cpp_FUN_00569890 ; 00566b08
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569890(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00566b0d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00566b10
    XOR EBX,EBX                         ; 00566b13
    MOV EDX,dword ptr [EAX + 0xc00]     ; 00566b15
    MOV dword ptr [ESP + 0x220],EBX     ; 00566b1b
    TEST EDX,EDX                        ; 00566b22
    JLE 0x00566ed2                      ; 00566b24
        ;   XREF to: 00566ed2 (CONDITIONAL_JUMP)  ; LAB_00566ed2
    MOV dword ptr [ESP + 0x228],EAX     ; 00566b2a
    MOV EAX,dword ptr [ESP + 0x228]     ; 00566b31
        ;   Label: LAB_00566b31
    MOV EAX,dword ptr [EAX + 0xc24]     ; 00566b38
    ADD EAX,EBX                         ; 00566b3e
    MOV ESI,dword ptr [ESP + 0x230]     ; 00566b40
    MOV dword ptr [ESP + 0x224],EAX     ; 00566b47
    TEST ESI,ESI                        ; 00566b4e
    JLE 0x00566b68                      ; 00566b50
        ;   XREF to: 00566b68 (CONDITIONAL_JUMP)  ; LAB_00566b68
    LEA EDX,[ESI*0x4 + 0x0]             ; 00566b52
    XOR EAX,EAX                         ; 00566b59
    ADD EAX,0x4                         ; 00566b5b
        ;   Label: LAB_00566b5b
    XOR ECX,ECX                         ; 00566b5e
    MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX ; 00566b60
    CMP EAX,EDX                         ; 00566b64
    JL 0x00566b5b                       ; 00566b66
        ;   XREF to: 00566b5b (CONDITIONAL_JUMP)  ; LAB_00566b5b
    MOV ESI,dword ptr [ESP + 0x224]     ; 00566b68
        ;   Label: LAB_00566b68
    CMP EBX,ESI                         ; 00566b6f
    JGE 0x00566f4c                      ; 00566b71
        ;   XREF to: 00566f4c (CONDITIONAL_JUMP)  ; LAB_00566f4c
    IMUL EBX,EBX,0x12                   ; 00566b77
    IMUL EAX,ESI,0x12                   ; 00566b7a
    MOV dword ptr [ESP + 0x238],EBX     ; 00566b7d
    MOV dword ptr [ESP + 0x22c],EAX     ; 00566b84
    MOV EDX,dword ptr [EBP + 0x14]      ; 00566b8b
        ;   Label: LAB_00566b8b
    MOV ESI,dword ptr [ESP + 0x238]     ; 00566b8e
    MOV EDX,dword ptr [EDX + 0x7c]      ; 00566b95
    ADD EDX,ESI                         ; 00566b98
    XOR EAX,EAX                         ; 00566b9a
    MOV AX,word ptr [EDX]               ; 00566b9c
    IMUL ECX,EAX,0xc                    ; 00566b9f
    MOV EAX,dword ptr [ESP + 0x234]     ; 00566ba2
    MOV EAX,dword ptr [EAX + 0x2324]    ; 00566ba9
    LEA EBX,[ESP + 0x1cc]               ; 00566baf
    ADD EAX,ECX                         ; 00566bb6
    FILD dword ptr [EAX]                ; 00566bb8
    FMUL float ptr [0x00605890]         ; 00566bba | DAT_00605890
    FSTP float ptr [EBX]                ; 00566bc0
    FILD dword ptr [EAX + 0x4]          ; 00566bc2
    FMUL float ptr [0x00605890]         ; 00566bc5 | DAT_00605890
    FSTP float ptr [EBX + 0x4]          ; 00566bcb
    FILD dword ptr [EAX + 0x8]          ; 00566bce
    FMUL float ptr [0x00605890]         ; 00566bd1 | DAT_00605890
    FSTP float ptr [EBX + 0x8]          ; 00566bd7
    XOR EAX,EAX                         ; 00566bda
    MOV AX,word ptr [EDX + 0x2]         ; 00566bdc
    IMUL EAX,EAX,0xc                    ; 00566be0
    MOV ECX,dword ptr [ESP + 0x234]     ; 00566be3
    MOV ECX,dword ptr [ECX + 0x2324]    ; 00566bea
    LEA EBX,[ESP + 0x1c0]               ; 00566bf0
    ADD EAX,ECX                         ; 00566bf7
    FILD dword ptr [EAX]                ; 00566bf9
    FMUL float ptr [0x00605890]         ; 00566bfb | DAT_00605890
    FSTP float ptr [EBX]                ; 00566c01
    FILD dword ptr [EAX + 0x4]          ; 00566c03
    FMUL float ptr [0x00605890]         ; 00566c06 | DAT_00605890
    FSTP float ptr [EBX + 0x4]          ; 00566c0c
    FILD dword ptr [EAX + 0x8]          ; 00566c0f
    FMUL float ptr [0x00605890]         ; 00566c12 | DAT_00605890
    FSTP float ptr [EBX + 0x8]          ; 00566c18
    XOR EAX,EAX                         ; 00566c1b
    MOV AX,word ptr [EDX + 0x4]         ; 00566c1d
    IMUL ECX,EAX,0xc                    ; 00566c21
    MOV EAX,dword ptr [ESP + 0x234]     ; 00566c24
    LEA EDI,[ESP + 0x1d8]               ; 00566c2b
    MOV EAX,dword ptr [EAX + 0x2324]    ; 00566c32
    LEA EBX,[ESP + 0x1f0]               ; 00566c38
    ADD EAX,ECX                         ; 00566c3f
    LEA ESI,[ESP + 0x190]               ; 00566c41
    FILD dword ptr [EAX]                ; 00566c48
    FMUL float ptr [0x00605890]         ; 00566c4a | DAT_00605890
    FSTP float ptr [EBX]                ; 00566c50
    FILD dword ptr [EAX + 0x4]          ; 00566c52
    FMUL float ptr [0x00605890]         ; 00566c55 | DAT_00605890
    FSTP float ptr [EBX + 0x4]          ; 00566c5b
    FILD dword ptr [EAX + 0x8]          ; 00566c5e
    FMUL float ptr [0x00605890]         ; 00566c61 | DAT_00605890
    FSTP float ptr [EBX + 0x8]          ; 00566c67
    FLD float ptr [ESP + 0x1f0]         ; 00566c6a
    FLD float ptr [ESP + 0x1f4]         ; 00566c71
    FLD float ptr [ESP + 0x1f8]         ; 00566c78
    LEA EAX,[ESP + 0x1d8]               ; 00566c7f
    LEA ECX,[ESP + 0x208]               ; 00566c86
    FXCH ST2                            ; 00566c8d
    FSUB float ptr [ESP + 0x1c0]        ; 00566c8f
    FXCH                                ; 00566c96
    FSUB float ptr [ESP + 0x1c4]        ; 00566c98
    FXCH ST2                            ; 00566c9f
    FSUB float ptr [ESP + 0x1c8]        ; 00566ca1
    FXCH                                ; 00566ca8
    FSTP float ptr [ESP + 0x190]        ; 00566caa
    FXCH                                ; 00566cb1
    FSTP float ptr [ESP + 0x194]        ; 00566cb3
    FSTP float ptr [ESP + 0x198]        ; 00566cba
    MOVSD ES:EDI,ESI                    ; 00566cc1
    MOVSD ES:EDI,ESI                    ; 00566cc2
    MOVSD ES:EDI,ESI                    ; 00566cc3
    CMP ECX,EAX                         ; 00566cc4
    JZ 0x00566cf2                       ; 00566cc6
        ;   XREF to: 00566cf2 (CONDITIONAL_JUMP)  ; LAB_00566cf2
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00566cc8
    MOV dword ptr [ESP + 0x208],EAX     ; 00566ccf
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 00566cd6
    MOV dword ptr [ESP + 0x20c],EAX     ; 00566cdd
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 00566ce4
    MOV dword ptr [ESP + 0x210],EAX     ; 00566ceb
    FLD float ptr [ESP + 0x1c0]         ; 00566cf2
        ;   Label: LAB_00566cf2
    FLD float ptr [ESP + 0x1c4]         ; 00566cf9
    FLD float ptr [ESP + 0x1c8]         ; 00566d00
    LEA EDI,[ESP + 0x1b4]               ; 00566d07
    LEA ESI,[ESP + 0x214]               ; 00566d0e
    LEA EAX,[ESP + 0x1b4]               ; 00566d15
    LEA ECX,[ESP + 0x1e4]               ; 00566d1c
    FXCH ST2                            ; 00566d23
    FSUB float ptr [ESP + 0x1cc]        ; 00566d25
    FXCH                                ; 00566d2c
    FSUB float ptr [ESP + 0x1d0]        ; 00566d2e
    FXCH ST2                            ; 00566d35
    FSUB float ptr [ESP + 0x1d4]        ; 00566d37
    FXCH ST2                            ; 00566d3e
    FSTP float ptr [ESP + 0x218]        ; 00566d40
    FXCH                                ; 00566d47
    FSTP float ptr [ESP + 0x21c]        ; 00566d49
    FSTP float ptr [ESP + 0x214]        ; 00566d50
    MOVSD ES:EDI,ESI                    ; 00566d57
    MOVSD ES:EDI,ESI                    ; 00566d58
    MOVSD ES:EDI,ESI                    ; 00566d59
    CMP ECX,EAX                         ; 00566d5a
    JZ 0x00566d88                       ; 00566d5c
        ;   XREF to: 00566d88 (CONDITIONAL_JUMP)  ; LAB_00566d88
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 00566d5e
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00566d65
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 00566d6c
    MOV dword ptr [ESP + 0x1e8],EAX     ; 00566d73
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00566d7a
    MOV dword ptr [ESP + 0x1ec],EAX     ; 00566d81
    FLD float ptr [ESP + 0x20c]         ; 00566d88
        ;   Label: LAB_00566d88
    FMUL float ptr [ESP + 0x1ec]        ; 00566d8f
    FLD float ptr [ESP + 0x210]         ; 00566d96
    FMUL float ptr [ESP + 0x1e4]        ; 00566d9d
    FLD float ptr [ESP + 0x208]         ; 00566da4
    FMUL float ptr [ESP + 0x1e8]        ; 00566dab
    FLD float ptr [ESP + 0x210]         ; 00566db2
    FMUL float ptr [ESP + 0x1e8]        ; 00566db9
    FLD float ptr [ESP + 0x208]         ; 00566dc0
    FMUL float ptr [ESP + 0x1ec]        ; 00566dc7
    FLD float ptr [ESP + 0x20c]         ; 00566dce
    FMUL float ptr [ESP + 0x1e4]        ; 00566dd5
    LEA EDI,[ESP + 0x19c]               ; 00566ddc
    LEA ESI,[ESP + 0x1fc]               ; 00566de3
    LEA ECX,[ESP + 0x19c]               ; 00566dea
    LEA EAX,[ESP + 0x1a8]               ; 00566df1
    FXCH ST2                            ; 00566df8
    FSUBP ST5,ST0                       ; 00566dfa
    FSUBP ST3,ST0                       ; 00566dfc
    FSUBP                               ; 00566dfe
    FXCH                                ; 00566e00
    FSTP float ptr [ESP + 0x200]        ; 00566e02
    FSTP float ptr [ESP + 0x204]        ; 00566e09
    FSTP float ptr [ESP + 0x1fc]        ; 00566e10
    MOVSD ES:EDI,ESI                    ; 00566e17
    MOVSD ES:EDI,ESI                    ; 00566e18
    MOVSD ES:EDI,ESI                    ; 00566e19
    CMP EAX,ECX                         ; 00566e1a
    JNZ 0x00566f89                      ; 00566e1c
        ;   XREF to: 00566f89 (CONDITIONAL_JUMP)  ; LAB_00566f89
    FLD float ptr [ESP + 0x1ac]         ; 00566e22
        ;   Label: LAB_00566e22
    FMUL ST0                            ; 00566e29
    FLD float ptr [ESP + 0x1a8]         ; 00566e2b
    FMUL ST0                            ; 00566e32
    FADDP                               ; 00566e34
    FLD float ptr [ESP + 0x1b0]         ; 00566e36
    FMUL ST0                            ; 00566e3d
    FADDP                               ; 00566e3f
    FSQRT                               ; 00566e41
    MOV EDI,EDX                         ; 00566e43
    ADD EDX,0x6                         ; 00566e45
    MOV dword ptr [ESP + 0x23c],EDX     ; 00566e48
    FSTP float ptr [ESP + 0x240]        ; 00566e4f
    XOR ESI,ESI                         ; 00566e56
        ;   Label: LAB_00566e56
    MOV SI,word ptr [EDI]               ; 00566e58
    IMUL ESI,ESI,0x34                   ; 00566e5b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00566e5e
    MOV EAX,dword ptr [EAX + 0x40]      ; 00566e61
    ADD ESI,EAX                         ; 00566e64
    MOV EDX,ESI                         ; 00566e66
    MOV ECX,ESI                         ; 00566e68
    XOR EAX,EAX                         ; 00566e6a
    XOR EBX,EBX                         ; 00566e6c
        ;   Label: LAB_00566e6c
    MOV BL,byte ptr [ESI]               ; 00566e6e
    CMP EAX,EBX                         ; 00566e70
    JGE 0x00566fb8                      ; 00566e72
        ;   XREF to: 00566fb8 (CONDITIONAL_JUMP)  ; LAB_00566fb8
    FLD float ptr [EDX + 0x4]           ; 00566e78
    XOR EBX,EBX                         ; 00566e7b
    FMUL float ptr [ESP + 0x240]        ; 00566e7d
    MOV BL,byte ptr [ECX + 0x1]         ; 00566e84
    ADD EDX,0x4                         ; 00566e87
    INC ECX                             ; 00566e8a
    FADD float ptr [ESP + EBX*0x4]      ; 00566e8b
    INC EAX                             ; 00566e8e
    FSTP float ptr [ESP + EBX*0x4]      ; 00566e8f
    JMP 0x00566e6c                      ; 00566e92
        ;   XREF to: 00566e6c (UNCONDITIONAL_JUMP)  ; LAB_00566e6c
    MOV EAX,dword ptr [ESP + 0x228]     ; 00566e94
        ;   Label: LAB_00566e94
    MOV ESI,dword ptr [ESP + 0x220]     ; 00566e9b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00566ea2
    LEA ECX,[EAX + 0x60]                ; 00566ea5
    INC ESI                             ; 00566ea8
    MOV dword ptr [EAX + 0xc60],EBX     ; 00566ea9
    MOV EBX,dword ptr [ESP + 0x224]     ; 00566eaf
    MOV dword ptr [ESP + 0x228],ECX     ; 00566eb6
    MOV EDI,dword ptr [EDX + 0xc00]     ; 00566ebd
    MOV dword ptr [ESP + 0x220],ESI     ; 00566ec3
    CMP ESI,EDI                         ; 00566eca
    JL 0x00566b31                       ; 00566ecc
        ;   XREF to: 00566b31 (CONDITIONAL_JUMP)  ; LAB_00566b31
    MOV EAX,dword ptr [ESP + 0x234]     ; 00566ed2
        ;   Label: LAB_00566ed2
    TEST EAX,EAX                        ; 00566ed9
    JZ 0x00566eef                       ; 00566edb
        ;   XREF to: 00566eef (CONDITIONAL_JUMP)  ; LAB_00566eef
    PUSH 0x2                            ; 00566edd
    MOV EDX,dword ptr [ESP + 0x238]     ; 00566edf
    MOV EAX,dword ptr [EAX + 0x50]      ; 00566ee6
    PUSH EDX                            ; 00566ee9
    CALL dword ptr [EAX]                ; 00566eea
    ADD ESP,0x8                         ; 00566eec
    MOV ECX,dword ptr [ESP + 0x230]     ; 00566eef
        ;   Label: LAB_00566eef
    XOR EBX,EBX                         ; 00566ef6
    TEST ECX,ECX                        ; 00566ef8
    JLE 0x00566a60                      ; 00566efa
        ;   XREF to: 00566a60 (CONDITIONAL_JUMP)  ; LAB_00566a60
    MOV ESI,dword ptr [EBP + 0x14]      ; 00566f00
    MOV EDI,dword ptr [EBP + 0x14]      ; 00566f03
    PUSH EBX                            ; 00566f06
        ;   Label: LAB_00566f06
    PUSH EDI                            ; 00566f07
    CALL core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830 ; 00566f08
        ;   XREF to: 00565830 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830(CDeformableModel * this_ptr, int bone_index)
    INC EBX                             ; 00566f0d
    ADD ESP,0x8                         ; 00566f0e
    MOV dword ptr [ESI + 0x323c],EAX    ; 00566f11
    MOV EAX,dword ptr [ESP + 0x230]     ; 00566f17
    ADD ESI,0x4                         ; 00566f1e
    CMP EBX,EAX                         ; 00566f21
    JL 0x00566f06                       ; 00566f23
        ;   XREF to: 00566f06 (CONDITIONAL_JUMP)  ; LAB_00566f06
    MOV ESP,EBP                         ; 00566f25
    POP EBP                             ; 00566f27
    POP EDI                             ; 00566f28
    POP ESI                             ; 00566f29
    POP EBX                             ; 00566f2a
    RET                                 ; 00566f2b
    MOV EDI,dword ptr [ESP + 0x238]     ; 00566f2c
        ;   Label: LAB_00566f2c
    ADD EDI,0x12                        ; 00566f33
    MOV EDX,dword ptr [ESP + 0x22c]     ; 00566f36
    MOV dword ptr [ESP + 0x238],EDI     ; 00566f3d
    CMP EDI,EDX                         ; 00566f44
    JL 0x00566b8b                       ; 00566f46
        ;   XREF to: 00566b8b (CONDITIONAL_JUMP)  ; LAB_00566b8b
    MOV EDI,0x1                         ; 00566f4c
        ;   Label: LAB_00566f4c
    MOV ECX,dword ptr [ESP + 0x230]     ; 00566f51
    XOR EBX,EBX                         ; 00566f58
    CMP ECX,EDI                         ; 00566f5a
    JLE 0x00566e94                      ; 00566f5c
        ;   XREF to: 00566e94 (CONDITIONAL_JUMP)  ; LAB_00566e94
    MOV EDX,0x4                         ; 00566f62
    FLD float ptr [ESP + EDX*0x1]       ; 00566f67
        ;   Label: LAB_00566f67
    FCOMP float ptr [ESP + EBX*0x4]     ; 00566f6a
    FNSTSW AX                           ; 00566f6d
    SAHF                                ; 00566f6f
    JBE 0x00566f74                      ; 00566f70
        ;   XREF to: 00566f74 (CONDITIONAL_JUMP)  ; LAB_00566f74
    MOV EBX,EDI                         ; 00566f72
    MOV EAX,dword ptr [ESP + 0x230]     ; 00566f74
        ;   Label: LAB_00566f74
    INC EDI                             ; 00566f7b
    ADD EDX,0x4                         ; 00566f7c
    CMP EDI,EAX                         ; 00566f7f
    JGE 0x00566e94                      ; 00566f81
        ;   XREF to: 00566e94 (CONDITIONAL_JUMP)  ; LAB_00566e94
    JMP 0x00566f67                      ; 00566f87
        ;   XREF to: 00566f67 (UNCONDITIONAL_JUMP)  ; LAB_00566f67
    MOV EAX,dword ptr [ESP + 0x19c]     ; 00566f89
        ;   Label: LAB_00566f89
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00566f90
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 00566f97
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00566f9e
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 00566fa5
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00566fac
    JMP 0x00566e22                      ; 00566fb3
        ;   XREF to: 00566e22 (UNCONDITIONAL_JUMP)  ; LAB_00566e22
    MOV EDX,dword ptr [ESP + 0x23c]     ; 00566fb8
        ;   Label: LAB_00566fb8
    ADD EDI,0x2                         ; 00566fbf
    CMP EDI,EDX                         ; 00566fc2
    JZ 0x00566f2c                       ; 00566fc4
        ;   XREF to: 00566f2c (CONDITIONAL_JUMP)  ; LAB_00566f2c
    JMP 0x00566e56                      ; 00566fca
        ;   XREF to: 00566e56 (UNCONDITIONAL_JUMP)  ; LAB_00566e56

