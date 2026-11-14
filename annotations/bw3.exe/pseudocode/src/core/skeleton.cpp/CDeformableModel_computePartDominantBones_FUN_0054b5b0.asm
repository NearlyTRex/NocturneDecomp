; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0(CDeformableModel *this_ptr)
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
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00549a60 at 0054a27b
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1f1e
;   TerminatedCString s_CDeformableModel_compute_005d1f33
;   undefined4 DAT_005e4760
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00548750
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0054a3c0
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b5b0
        ;   Label: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0
    PUSH ESI                            ; 0054b5b1
    PUSH EDI                            ; 0054b5b2
    PUSH EBP                            ; 0054b5b3
    MOV EBP,ESP                         ; 0054b5b4
    SUB ESP,0x244                       ; 0054b5b6
    AND ESP,0xfffffff8                  ; 0054b5bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054b5bf
    CMP dword ptr [EAX + 0xc00],0x2     ; 0054b5c2
    JGE 0x0054b5f7                      ; 0054b5c9
        ;   XREF to: 0054b5f7 (CONDITIONAL_JUMP)  ; LAB_0054b5f7
    LEA EDX,[EAX + 0x190]               ; 0054b5cb
    MOV dword ptr [EAX + 0xc60],0x0     ; 0054b5d1
    ADD EAX,0x4                         ; 0054b5db
        ;   Label: LAB_0054b5db
    MOV dword ptr [EAX + 0x3238],0x0    ; 0054b5de
    CMP EAX,EDX                         ; 0054b5e8
    JNZ 0x0054b5db                      ; 0054b5ea
        ;   XREF to: 0054b5db (CONDITIONAL_JUMP)  ; LAB_0054b5db
    LEA EAX,[EAX]                       ; 0054b5ec
    MOV ESP,EBP                         ; 0054b5f0
        ;   Label: LAB_0054b5f0
    POP EBP                             ; 0054b5f2
    POP EDI                             ; 0054b5f3
    POP ESI                             ; 0054b5f4
    POP EBX                             ; 0054b5f5
    RET                                 ; 0054b5f6
    PUSH EAX                            ; 0054b5f7
        ;   Label: LAB_0054b5f7
    CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00548750 ; 0054b5f8
        ;   XREF to: 00548750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00548750(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0054b5fd
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054b600
    PUSH EBX                            ; 0054b603
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0 ; 0054b604
        ;   XREF to: 005487e0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0054b609
    MOV EAX,dword ptr [EAX + 0x1de78]   ; 0054b60c
    PUSH 0x23a4                         ; 0054b612
    MOV dword ptr [ESP + 0x234],EAX     ; 0054b617
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0054b61e
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0054b623
    TEST EAX,EAX                        ; 0054b626
    JZ 0x0054b633                       ; 0054b628
        ;   XREF to: 0054b633 (CONDITIONAL_JUMP)  ; LAB_0054b633
    PUSH EAX                            ; 0054b62a
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00 ; 0054b62b
        ;   XREF to: 0054bf00 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054b630
    MOV dword ptr [ESP + 0x234],EAX     ; 0054b633
        ;   Label: LAB_0054b633
    TEST EAX,EAX                        ; 0054b63a
    JNZ 0x0054b661                      ; 0054b63c
        ;   XREF to: 0054b661 (CONDITIONAL_JUMP)  ; LAB_0054b661
    MOV ESI,0x5d1f1e                    ; 0054b63e | = "..\\core\\skeleton.cpp"
    MOV EDI,0x7e9                       ; 0054b643
    PUSH 0x5d1f33                       ; 0054b648 | = "CDeformableModel::computePartDominant..."
    MOV dword ptr [0x01d71de0],ESI      ; 0054b64d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0054b653 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054b659
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0054b65e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054b661
        ;   Label: LAB_0054b661
    PUSH EAX                            ; 0054b664
    MOV EDX,dword ptr [ESP + 0x238]     ; 0054b665
    PUSH EDX                            ; 0054b66c
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0 ; 0054b66d
        ;   XREF to: 0054e6e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 0054b672
    MOV ECX,dword ptr [ESP + 0x234]     ; 0054b675
    PUSH ECX                            ; 0054b67c
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0054b67d
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054b682
    MOV EBX,dword ptr [ESP + 0x234]     ; 0054b685
    PUSH EBX                            ; 0054b68c
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 0054b68d
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054b692
    PUSH 0x0                            ; 0054b695
    PUSH EBX                            ; 0054b697
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420 ; 0054b698
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054b69d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054b6a0
    XOR EBX,EBX                         ; 0054b6a3
    MOV EDX,dword ptr [EAX + 0xc00]     ; 0054b6a5
    MOV dword ptr [ESP + 0x220],EBX     ; 0054b6ab
    TEST EDX,EDX                        ; 0054b6b2
    JLE 0x0054ba62                      ; 0054b6b4
        ;   XREF to: 0054ba62 (CONDITIONAL_JUMP)  ; LAB_0054ba62
    MOV dword ptr [ESP + 0x228],EAX     ; 0054b6ba
    MOV EAX,dword ptr [ESP + 0x228]     ; 0054b6c1
        ;   Label: LAB_0054b6c1
    MOV EAX,dword ptr [EAX + 0xc24]     ; 0054b6c8
    ADD EAX,EBX                         ; 0054b6ce
    MOV ESI,dword ptr [ESP + 0x230]     ; 0054b6d0
    MOV dword ptr [ESP + 0x224],EAX     ; 0054b6d7
    TEST ESI,ESI                        ; 0054b6de
    JLE 0x0054b6f8                      ; 0054b6e0
        ;   XREF to: 0054b6f8 (CONDITIONAL_JUMP)  ; LAB_0054b6f8
    LEA EDX,[ESI*0x4 + 0x0]             ; 0054b6e2
    XOR EAX,EAX                         ; 0054b6e9
    ADD EAX,0x4                         ; 0054b6eb
        ;   Label: LAB_0054b6eb
    XOR ECX,ECX                         ; 0054b6ee
    MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX ; 0054b6f0
    CMP EAX,EDX                         ; 0054b6f4
    JL 0x0054b6eb                       ; 0054b6f6
        ;   XREF to: 0054b6eb (CONDITIONAL_JUMP)  ; LAB_0054b6eb
    MOV ESI,dword ptr [ESP + 0x224]     ; 0054b6f8
        ;   Label: LAB_0054b6f8
    CMP EBX,ESI                         ; 0054b6ff
    JGE 0x0054badc                      ; 0054b701
        ;   XREF to: 0054badc (CONDITIONAL_JUMP)  ; LAB_0054badc
    IMUL EBX,EBX,0x12                   ; 0054b707
    IMUL EAX,ESI,0x12                   ; 0054b70a
    MOV dword ptr [ESP + 0x238],EBX     ; 0054b70d
    MOV dword ptr [ESP + 0x22c],EAX     ; 0054b714
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054b71b
        ;   Label: LAB_0054b71b
    MOV ESI,dword ptr [ESP + 0x238]     ; 0054b71e
    MOV EDX,dword ptr [EDX + 0x7c]      ; 0054b725
    ADD EDX,ESI                         ; 0054b728
    XOR EAX,EAX                         ; 0054b72a
    MOV AX,word ptr [EDX]               ; 0054b72c
    IMUL ECX,EAX,0xc                    ; 0054b72f
    MOV EAX,dword ptr [ESP + 0x234]     ; 0054b732
    MOV EAX,dword ptr [EAX + 0x2324]    ; 0054b739
    LEA EBX,[ESP + 0x1cc]               ; 0054b73f
    ADD EAX,ECX                         ; 0054b746
    FILD dword ptr [EAX]                ; 0054b748
    FMUL float ptr [0x005e4760]         ; 0054b74a | DAT_005e4760
    FSTP float ptr [EBX]                ; 0054b750
    FILD dword ptr [EAX + 0x4]          ; 0054b752
    FMUL float ptr [0x005e4760]         ; 0054b755 | DAT_005e4760
    FSTP float ptr [EBX + 0x4]          ; 0054b75b
    FILD dword ptr [EAX + 0x8]          ; 0054b75e
    FMUL float ptr [0x005e4760]         ; 0054b761 | DAT_005e4760
    FSTP float ptr [EBX + 0x8]          ; 0054b767
    XOR EAX,EAX                         ; 0054b76a
    MOV AX,word ptr [EDX + 0x2]         ; 0054b76c
    IMUL EAX,EAX,0xc                    ; 0054b770
    MOV ECX,dword ptr [ESP + 0x234]     ; 0054b773
    MOV ECX,dword ptr [ECX + 0x2324]    ; 0054b77a
    LEA EBX,[ESP + 0x1c0]               ; 0054b780
    ADD EAX,ECX                         ; 0054b787
    FILD dword ptr [EAX]                ; 0054b789
    FMUL float ptr [0x005e4760]         ; 0054b78b | DAT_005e4760
    FSTP float ptr [EBX]                ; 0054b791
    FILD dword ptr [EAX + 0x4]          ; 0054b793
    FMUL float ptr [0x005e4760]         ; 0054b796 | DAT_005e4760
    FSTP float ptr [EBX + 0x4]          ; 0054b79c
    FILD dword ptr [EAX + 0x8]          ; 0054b79f
    FMUL float ptr [0x005e4760]         ; 0054b7a2 | DAT_005e4760
    FSTP float ptr [EBX + 0x8]          ; 0054b7a8
    XOR EAX,EAX                         ; 0054b7ab
    MOV AX,word ptr [EDX + 0x4]         ; 0054b7ad
    IMUL ECX,EAX,0xc                    ; 0054b7b1
    MOV EAX,dword ptr [ESP + 0x234]     ; 0054b7b4
    LEA EDI,[ESP + 0x1d8]               ; 0054b7bb
    MOV EAX,dword ptr [EAX + 0x2324]    ; 0054b7c2
    LEA EBX,[ESP + 0x1f0]               ; 0054b7c8
    ADD EAX,ECX                         ; 0054b7cf
    LEA ESI,[ESP + 0x190]               ; 0054b7d1
    FILD dword ptr [EAX]                ; 0054b7d8
    FMUL float ptr [0x005e4760]         ; 0054b7da | DAT_005e4760
    FSTP float ptr [EBX]                ; 0054b7e0
    FILD dword ptr [EAX + 0x4]          ; 0054b7e2
    FMUL float ptr [0x005e4760]         ; 0054b7e5 | DAT_005e4760
    FSTP float ptr [EBX + 0x4]          ; 0054b7eb
    FILD dword ptr [EAX + 0x8]          ; 0054b7ee
    FMUL float ptr [0x005e4760]         ; 0054b7f1 | DAT_005e4760
    FSTP float ptr [EBX + 0x8]          ; 0054b7f7
    FLD float ptr [ESP + 0x1f0]         ; 0054b7fa
    FLD float ptr [ESP + 0x1f4]         ; 0054b801
    FLD float ptr [ESP + 0x1f8]         ; 0054b808
    LEA EAX,[ESP + 0x1d8]               ; 0054b80f
    LEA ECX,[ESP + 0x208]               ; 0054b816
    FXCH ST2                            ; 0054b81d
    FSUB float ptr [ESP + 0x1c0]        ; 0054b81f
    FXCH                                ; 0054b826
    FSUB float ptr [ESP + 0x1c4]        ; 0054b828
    FXCH ST2                            ; 0054b82f
    FSUB float ptr [ESP + 0x1c8]        ; 0054b831
    FXCH                                ; 0054b838
    FSTP float ptr [ESP + 0x190]        ; 0054b83a
    FXCH                                ; 0054b841
    FSTP float ptr [ESP + 0x194]        ; 0054b843
    FSTP float ptr [ESP + 0x198]        ; 0054b84a
    MOVSD ES:EDI,ESI                    ; 0054b851
    MOVSD ES:EDI,ESI                    ; 0054b852
    MOVSD ES:EDI,ESI                    ; 0054b853
    CMP ECX,EAX                         ; 0054b854
    JZ 0x0054b882                       ; 0054b856
        ;   XREF to: 0054b882 (CONDITIONAL_JUMP)  ; LAB_0054b882
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0054b858
    MOV dword ptr [ESP + 0x208],EAX     ; 0054b85f
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 0054b866
    MOV dword ptr [ESP + 0x20c],EAX     ; 0054b86d
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0054b874
    MOV dword ptr [ESP + 0x210],EAX     ; 0054b87b
    FLD float ptr [ESP + 0x1c0]         ; 0054b882
        ;   Label: LAB_0054b882
    FLD float ptr [ESP + 0x1c4]         ; 0054b889
    FLD float ptr [ESP + 0x1c8]         ; 0054b890
    LEA EDI,[ESP + 0x1b4]               ; 0054b897
    LEA ESI,[ESP + 0x214]               ; 0054b89e
    LEA EAX,[ESP + 0x1b4]               ; 0054b8a5
    LEA ECX,[ESP + 0x1e4]               ; 0054b8ac
    FXCH ST2                            ; 0054b8b3
    FSUB float ptr [ESP + 0x1cc]        ; 0054b8b5
    FXCH                                ; 0054b8bc
    FSUB float ptr [ESP + 0x1d0]        ; 0054b8be
    FXCH ST2                            ; 0054b8c5
    FSUB float ptr [ESP + 0x1d4]        ; 0054b8c7
    FXCH ST2                            ; 0054b8ce
    FSTP float ptr [ESP + 0x218]        ; 0054b8d0
    FXCH                                ; 0054b8d7
    FSTP float ptr [ESP + 0x21c]        ; 0054b8d9
    FSTP float ptr [ESP + 0x214]        ; 0054b8e0
    MOVSD ES:EDI,ESI                    ; 0054b8e7
    MOVSD ES:EDI,ESI                    ; 0054b8e8
    MOVSD ES:EDI,ESI                    ; 0054b8e9
    CMP ECX,EAX                         ; 0054b8ea
    JZ 0x0054b918                       ; 0054b8ec
        ;   XREF to: 0054b918 (CONDITIONAL_JUMP)  ; LAB_0054b918
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 0054b8ee
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0054b8f5
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 0054b8fc
    MOV dword ptr [ESP + 0x1e8],EAX     ; 0054b903
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0054b90a
    MOV dword ptr [ESP + 0x1ec],EAX     ; 0054b911
    FLD float ptr [ESP + 0x20c]         ; 0054b918
        ;   Label: LAB_0054b918
    FMUL float ptr [ESP + 0x1ec]        ; 0054b91f
    FLD float ptr [ESP + 0x210]         ; 0054b926
    FMUL float ptr [ESP + 0x1e4]        ; 0054b92d
    FLD float ptr [ESP + 0x208]         ; 0054b934
    FMUL float ptr [ESP + 0x1e8]        ; 0054b93b
    FLD float ptr [ESP + 0x210]         ; 0054b942
    FMUL float ptr [ESP + 0x1e8]        ; 0054b949
    FLD float ptr [ESP + 0x208]         ; 0054b950
    FMUL float ptr [ESP + 0x1ec]        ; 0054b957
    FLD float ptr [ESP + 0x20c]         ; 0054b95e
    FMUL float ptr [ESP + 0x1e4]        ; 0054b965
    LEA EDI,[ESP + 0x19c]               ; 0054b96c
    LEA ESI,[ESP + 0x1fc]               ; 0054b973
    LEA ECX,[ESP + 0x19c]               ; 0054b97a
    LEA EAX,[ESP + 0x1a8]               ; 0054b981
    FXCH ST2                            ; 0054b988
    FSUBP ST5,ST0                       ; 0054b98a
    FSUBP ST3,ST0                       ; 0054b98c
    FSUBP                               ; 0054b98e
    FXCH                                ; 0054b990
    FSTP float ptr [ESP + 0x200]        ; 0054b992
    FSTP float ptr [ESP + 0x204]        ; 0054b999
    FSTP float ptr [ESP + 0x1fc]        ; 0054b9a0
    MOVSD ES:EDI,ESI                    ; 0054b9a7
    MOVSD ES:EDI,ESI                    ; 0054b9a8
    MOVSD ES:EDI,ESI                    ; 0054b9a9
    CMP EAX,ECX                         ; 0054b9aa
    JNZ 0x0054bb19                      ; 0054b9ac
        ;   XREF to: 0054bb19 (CONDITIONAL_JUMP)  ; LAB_0054bb19
    FLD float ptr [ESP + 0x1ac]         ; 0054b9b2
        ;   Label: LAB_0054b9b2
    FMUL ST0                            ; 0054b9b9
    FLD float ptr [ESP + 0x1a8]         ; 0054b9bb
    FMUL ST0                            ; 0054b9c2
    FADDP                               ; 0054b9c4
    FLD float ptr [ESP + 0x1b0]         ; 0054b9c6
    FMUL ST0                            ; 0054b9cd
    FADDP                               ; 0054b9cf
    FSQRT                               ; 0054b9d1
    MOV EDI,EDX                         ; 0054b9d3
    ADD EDX,0x6                         ; 0054b9d5
    MOV dword ptr [ESP + 0x23c],EDX     ; 0054b9d8
    FSTP float ptr [ESP + 0x240]        ; 0054b9df
    XOR ESI,ESI                         ; 0054b9e6
        ;   Label: LAB_0054b9e6
    MOV SI,word ptr [EDI]               ; 0054b9e8
    IMUL ESI,ESI,0x34                   ; 0054b9eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054b9ee
    MOV EAX,dword ptr [EAX + 0x40]      ; 0054b9f1
    ADD ESI,EAX                         ; 0054b9f4
    MOV EDX,ESI                         ; 0054b9f6
    MOV ECX,ESI                         ; 0054b9f8
    XOR EAX,EAX                         ; 0054b9fa
    XOR EBX,EBX                         ; 0054b9fc
        ;   Label: LAB_0054b9fc
    MOV BL,byte ptr [ESI]               ; 0054b9fe
    CMP EAX,EBX                         ; 0054ba00
    JGE 0x0054bb48                      ; 0054ba02
        ;   XREF to: 0054bb48 (CONDITIONAL_JUMP)  ; LAB_0054bb48
    FLD float ptr [EDX + 0x4]           ; 0054ba08
    XOR EBX,EBX                         ; 0054ba0b
    FMUL float ptr [ESP + 0x240]        ; 0054ba0d
    MOV BL,byte ptr [ECX + 0x1]         ; 0054ba14
    ADD EDX,0x4                         ; 0054ba17
    INC ECX                             ; 0054ba1a
    FADD float ptr [ESP + EBX*0x4]      ; 0054ba1b
    INC EAX                             ; 0054ba1e
    FSTP float ptr [ESP + EBX*0x4]      ; 0054ba1f
    JMP 0x0054b9fc                      ; 0054ba22
        ;   XREF to: 0054b9fc (UNCONDITIONAL_JUMP)  ; LAB_0054b9fc
    MOV EAX,dword ptr [ESP + 0x228]     ; 0054ba24
        ;   Label: LAB_0054ba24
    MOV ESI,dword ptr [ESP + 0x220]     ; 0054ba2b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054ba32
    LEA ECX,[EAX + 0x60]                ; 0054ba35
    INC ESI                             ; 0054ba38
    MOV dword ptr [EAX + 0xc60],EBX     ; 0054ba39
    MOV EBX,dword ptr [ESP + 0x224]     ; 0054ba3f
    MOV dword ptr [ESP + 0x228],ECX     ; 0054ba46
    MOV EDI,dword ptr [EDX + 0xc00]     ; 0054ba4d
    MOV dword ptr [ESP + 0x220],ESI     ; 0054ba53
    CMP ESI,EDI                         ; 0054ba5a
    JL 0x0054b6c1                       ; 0054ba5c
        ;   XREF to: 0054b6c1 (CONDITIONAL_JUMP)  ; LAB_0054b6c1
    MOV EAX,dword ptr [ESP + 0x234]     ; 0054ba62
        ;   Label: LAB_0054ba62
    TEST EAX,EAX                        ; 0054ba69
    JZ 0x0054ba7f                       ; 0054ba6b
        ;   XREF to: 0054ba7f (CONDITIONAL_JUMP)  ; LAB_0054ba7f
    PUSH 0x2                            ; 0054ba6d
    MOV EDX,dword ptr [ESP + 0x238]     ; 0054ba6f
    MOV EAX,dword ptr [EAX + 0x50]      ; 0054ba76
    PUSH EDX                            ; 0054ba79
    CALL dword ptr [EAX]                ; 0054ba7a
    ADD ESP,0x8                         ; 0054ba7c
    MOV ECX,dword ptr [ESP + 0x230]     ; 0054ba7f
        ;   Label: LAB_0054ba7f
    XOR EBX,EBX                         ; 0054ba86
    TEST ECX,ECX                        ; 0054ba88
    JLE 0x0054b5f0                      ; 0054ba8a
        ;   XREF to: 0054b5f0 (CONDITIONAL_JUMP)  ; LAB_0054b5f0
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054ba90
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054ba93
    PUSH EBX                            ; 0054ba96
        ;   Label: LAB_0054ba96
    PUSH EDI                            ; 0054ba97
    CALL core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0054a3c0 ; 0054ba98
        ;   XREF to: 0054a3c0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0054a3c0(CDeformableModel * this_ptr, int bone_index)
    INC EBX                             ; 0054ba9d
    ADD ESP,0x8                         ; 0054ba9e
    MOV dword ptr [ESI + 0x323c],EAX    ; 0054baa1
    MOV EAX,dword ptr [ESP + 0x230]     ; 0054baa7
    ADD ESI,0x4                         ; 0054baae
    CMP EBX,EAX                         ; 0054bab1
    JL 0x0054ba96                       ; 0054bab3
        ;   XREF to: 0054ba96 (CONDITIONAL_JUMP)  ; LAB_0054ba96
    MOV ESP,EBP                         ; 0054bab5
    POP EBP                             ; 0054bab7
    POP EDI                             ; 0054bab8
    POP ESI                             ; 0054bab9
    POP EBX                             ; 0054baba
    RET                                 ; 0054babb
    MOV EDI,dword ptr [ESP + 0x238]     ; 0054babc
        ;   Label: LAB_0054babc
    ADD EDI,0x12                        ; 0054bac3
    MOV EDX,dword ptr [ESP + 0x22c]     ; 0054bac6
    MOV dword ptr [ESP + 0x238],EDI     ; 0054bacd
    CMP EDI,EDX                         ; 0054bad4
    JL 0x0054b71b                       ; 0054bad6
        ;   XREF to: 0054b71b (CONDITIONAL_JUMP)  ; LAB_0054b71b
    MOV EDI,0x1                         ; 0054badc
        ;   Label: LAB_0054badc
    MOV ECX,dword ptr [ESP + 0x230]     ; 0054bae1
    XOR EBX,EBX                         ; 0054bae8
    CMP ECX,EDI                         ; 0054baea
    JLE 0x0054ba24                      ; 0054baec
        ;   XREF to: 0054ba24 (CONDITIONAL_JUMP)  ; LAB_0054ba24
    MOV EDX,0x4                         ; 0054baf2
    FLD float ptr [ESP + EDX*0x1]       ; 0054baf7
        ;   Label: LAB_0054baf7
    FCOMP float ptr [ESP + EBX*0x4]     ; 0054bafa
    FNSTSW AX                           ; 0054bafd
    SAHF                                ; 0054baff
    JBE 0x0054bb04                      ; 0054bb00
        ;   XREF to: 0054bb04 (CONDITIONAL_JUMP)  ; LAB_0054bb04
    MOV EBX,EDI                         ; 0054bb02
    MOV EAX,dword ptr [ESP + 0x230]     ; 0054bb04
        ;   Label: LAB_0054bb04
    INC EDI                             ; 0054bb0b
    ADD EDX,0x4                         ; 0054bb0c
    CMP EDI,EAX                         ; 0054bb0f
    JGE 0x0054ba24                      ; 0054bb11
        ;   XREF to: 0054ba24 (CONDITIONAL_JUMP)  ; LAB_0054ba24
    JMP 0x0054baf7                      ; 0054bb17
        ;   XREF to: 0054baf7 (UNCONDITIONAL_JUMP)  ; LAB_0054baf7
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0054bb19
        ;   Label: LAB_0054bb19
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0054bb20
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0054bb27
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0054bb2e
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 0054bb35
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0054bb3c
    JMP 0x0054b9b2                      ; 0054bb43
        ;   XREF to: 0054b9b2 (UNCONDITIONAL_JUMP)  ; LAB_0054b9b2
    MOV EDX,dword ptr [ESP + 0x23c]     ; 0054bb48
        ;   Label: LAB_0054bb48
    ADD EDI,0x2                         ; 0054bb4f
    CMP EDI,EDX                         ; 0054bb52
    JZ 0x0054babc                       ; 0054bb54
        ;   XREF to: 0054babc (CONDITIONAL_JUMP)  ; LAB_0054babc
    JMP 0x0054b9e6                      ; 0054bb5a
        ;   XREF to: 0054b9e6 (UNCONDITIONAL_JUMP)  ; LAB_0054b9e6

