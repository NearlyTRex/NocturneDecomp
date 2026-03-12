; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; float[100]       Stack[-0x230]:400  local_230
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; float            Stack[-0x98]:4  local_98
; float            Stack[-0x94]:4  local_94
; float            Stack[-0x90]:4  local_90
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; float            Stack[-0x84]:4  local_84
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; CDeformableModel * Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; SLod *           Stack[-0x24]:4  local_24
; CDeformableModelInstance * Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; ushort *         Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970 at 0059c1a4
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064eca9
;   TerminatedCString s_core_skeleton_cpp_0064ecbe
;   TerminatedCString s_CDeformableModel_compute_0064ecd3
;   TerminatedCString s_core_skeleton_cpp_0064ed0f
;   float FLOAT_00662ea0 = 0.00390625
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d460
        ;   Label: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460
    PUSH ESI                            ; 0059d461
    PUSH EDI                            ; 0059d462
    PUSH EBP                            ; 0059d463
    SUB ESP,0x220                       ; 0059d464
    MOV EBP,dword ptr [ESP + 0x234]     ; 0059d46a
    CMP dword ptr [EBP + 0x7140],0x2    ; 0059d471
    JGE 0x0059d4ab                      ; 0059d478
        ;   XREF to: 0059d4ab (CONDITIONAL_JUMP)  ; LAB_0059d4ab
    MOV EAX,EBP                         ; 0059d47a
    MOV dword ptr [EBP + 0x71a0],0x0    ; 0059d47c
    ADD EBP,0x190                       ; 0059d486
    ADD EAX,0x4                         ; 0059d48c
        ;   Label: LAB_0059d48c
    MOV dword ptr [EAX + 0x8c38],0x0    ; 0059d48f
    CMP EAX,EBP                         ; 0059d499
    JNZ 0x0059d48c                      ; 0059d49b
        ;   XREF to: 0059d48c (CONDITIONAL_JUMP)  ; LAB_0059d48c
    LEA EAX,[EAX]                       ; 0059d49d
    ADD ESP,0x220                       ; 0059d4a0
        ;   Label: LAB_0059d4a0
    POP EBP                             ; 0059d4a6
    POP EDI                             ; 0059d4a7
    POP ESI                             ; 0059d4a8
    POP EBX                             ; 0059d4a9
    RET                                 ; 0059d4aa
    PUSH EBP                            ; 0059d4ab
        ;   Label: LAB_0059d4ab
    CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780 ; 0059d4ac
        ;   XREF to: 0059a780 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0059d4b1
    PUSH EBP                            ; 0059d4b4
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 0059d4b5
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0059d4ba
    PUSH 0x7d2                          ; 0059d4bd
    PUSH 0x64eca9                       ; 0059d4c2 | = "..\\core\\skeleton.cpp"
    MOV EAX,dword ptr [EAX + 0x28558]   ; 0059d4c7
    PUSH 0x22b4                         ; 0059d4cd
    MOV dword ptr [ESP + 0x218],EAX     ; 0059d4d2
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0059d4d9
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0059d4de
    TEST EAX,EAX                        ; 0059d4e1
    JZ 0x0059d4ee                       ; 0059d4e3
        ;   XREF to: 0059d4ee (CONDITIONAL_JUMP)  ; LAB_0059d4ee
    PUSH EAX                            ; 0059d4e5
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 0059d4e6
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059d4eb
    MOV dword ptr [ESP + 0x210],EAX     ; 0059d4ee
        ;   Label: LAB_0059d4ee
    TEST EAX,EAX                        ; 0059d4f5
    JNZ 0x0059d51c                      ; 0059d4f7
        ;   XREF to: 0059d51c (CONDITIONAL_JUMP)  ; LAB_0059d51c
    MOV ECX,0x64ecbe                    ; 0059d4f9 | = "..\\core\\skeleton.cpp"
    MOV EBX,0x7d3                       ; 0059d4fe
    PUSH 0x64ecd3                       ; 0059d503 | = "CDeformableModel::computePartDominant..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0059d508 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0059d50e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059d514
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059d519
    PUSH EBP                            ; 0059d51c
        ;   Label: LAB_0059d51c
    MOV ESI,dword ptr [ESP + 0x214]     ; 0059d51d
    PUSH ESI                            ; 0059d524
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 ; 0059d525
        ;   XREF to: 005a0480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 0059d52a
    PUSH ESI                            ; 0059d52d
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 0059d52e
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059d533
    PUSH ESI                            ; 0059d536
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0059d537
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059d53c
    PUSH 0x0                            ; 0059d53f
    PUSH ESI                            ; 0059d541
    XOR EBX,EBX                         ; 0059d542
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 0059d544
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0059d549
    MOV ESI,dword ptr [EBP + 0x7140]    ; 0059d54c
    MOV dword ptr [ESP + 0x1fc],EBX     ; 0059d552
    TEST ESI,ESI                        ; 0059d559
    JLE 0x0059d8c9                      ; 0059d55b
        ;   XREF to: 0059d8c9 (CONDITIONAL_JUMP)  ; LAB_0059d8c9
    MOV dword ptr [ESP + 0x204],EBP     ; 0059d561
    MOV EAX,dword ptr [ESP + 0x204]     ; 0059d568
        ;   Label: LAB_0059d568
    MOV EAX,dword ptr [EAX + 0x7164]    ; 0059d56f
    ADD EAX,EBX                         ; 0059d575
    MOV EDX,dword ptr [ESP + 0x20c]     ; 0059d577
    MOV dword ptr [ESP + 0x200],EAX     ; 0059d57e
    TEST EDX,EDX                        ; 0059d585
    JLE 0x0059d59b                      ; 0059d587
        ;   XREF to: 0059d59b (CONDITIONAL_JUMP)  ; LAB_0059d59b
    SHL EDX,0x2                         ; 0059d589
    XOR EAX,EAX                         ; 0059d58c
    ADD EAX,0x4                         ; 0059d58e
        ;   Label: LAB_0059d58e
    XOR ESI,ESI                         ; 0059d591
    MOV dword ptr [ESP + EAX*0x1 + -0x4],ESI ; 0059d593
    CMP EAX,EDX                         ; 0059d597
    JL 0x0059d58e                       ; 0059d599
        ;   XREF to: 0059d58e (CONDITIONAL_JUMP)  ; LAB_0059d58e
    MOV EDI,dword ptr [ESP + 0x200]     ; 0059d59b
        ;   Label: LAB_0059d59b
    CMP EBX,EDI                         ; 0059d5a2
    JGE 0x0059d952                      ; 0059d5a4
        ;   XREF to: 0059d952 (CONDITIONAL_JUMP)  ; LAB_0059d952
    IMUL EBX,EBX,0x12                   ; 0059d5aa
    IMUL EAX,EDI,0x12                   ; 0059d5ad
    MOV dword ptr [ESP + 0x214],EBX     ; 0059d5b0
    MOV dword ptr [ESP + 0x208],EAX     ; 0059d5b7
    MOV ESI,dword ptr [ESP + 0x214]     ; 0059d5be
        ;   Label: LAB_0059d5be
    MOV EDX,dword ptr [EBP + 0x7c]      ; 0059d5c5
    ADD EDX,ESI                         ; 0059d5c8
    XOR EAX,EAX                         ; 0059d5ca
    MOV AX,word ptr [EDX]               ; 0059d5cc
    IMUL EAX,EAX,0xc                    ; 0059d5cf
    MOV ECX,dword ptr [ESP + 0x210]     ; 0059d5d2
    MOV ECX,dword ptr [ECX + 0x2234]    ; 0059d5d9
    LEA EBX,[ESP + 0x1e4]               ; 0059d5df
    ADD EAX,ECX                         ; 0059d5e6
    FILD dword ptr [EAX]                ; 0059d5e8
    FMUL float ptr [0x00662ea0]         ; 0059d5ea | FLOAT_00662ea0
    FSTP float ptr [EBX]                ; 0059d5f0
    FILD dword ptr [EAX + 0x4]          ; 0059d5f2
    FMUL float ptr [0x00662ea0]         ; 0059d5f5 | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x4]          ; 0059d5fb
    FILD dword ptr [EAX + 0x8]          ; 0059d5fe
    FMUL float ptr [0x00662ea0]         ; 0059d601 | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x8]          ; 0059d607
    XOR EAX,EAX                         ; 0059d60a
    MOV AX,word ptr [EDX + 0x2]         ; 0059d60c
    IMUL ECX,EAX,0xc                    ; 0059d610
    MOV EAX,dword ptr [ESP + 0x210]     ; 0059d613
    MOV EAX,dword ptr [EAX + 0x2234]    ; 0059d61a
    LEA EBX,[ESP + 0x1c0]               ; 0059d620
    ADD EAX,ECX                         ; 0059d627
    FILD dword ptr [EAX]                ; 0059d629
    FMUL float ptr [0x00662ea0]         ; 0059d62b | FLOAT_00662ea0
    FSTP float ptr [EBX]                ; 0059d631
    FILD dword ptr [EAX + 0x4]          ; 0059d633
    FMUL float ptr [0x00662ea0]         ; 0059d636 | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x4]          ; 0059d63c
    FILD dword ptr [EAX + 0x8]          ; 0059d63f
    FMUL float ptr [0x00662ea0]         ; 0059d642 | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x8]          ; 0059d648
    XOR EAX,EAX                         ; 0059d64b
    MOV AX,word ptr [EDX + 0x4]         ; 0059d64d
    IMUL EAX,EAX,0xc                    ; 0059d651
    MOV ECX,dword ptr [ESP + 0x210]     ; 0059d654
    MOV ECX,dword ptr [ECX + 0x2234]    ; 0059d65b
    LEA EBX,[ESP + 0x1f0]               ; 0059d661
    ADD EAX,ECX                         ; 0059d668
    FILD dword ptr [EAX]                ; 0059d66a
    FMUL float ptr [0x00662ea0]         ; 0059d66c | FLOAT_00662ea0
    FSTP float ptr [EBX]                ; 0059d672
    FILD dword ptr [EAX + 0x4]          ; 0059d674
    FMUL float ptr [0x00662ea0]         ; 0059d677 | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x4]          ; 0059d67d
    FILD dword ptr [EAX + 0x8]          ; 0059d680
    FMUL float ptr [0x00662ea0]         ; 0059d683 | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x8]          ; 0059d689
    FLD float ptr [ESP + 0x1f0]         ; 0059d68c
    FLD float ptr [ESP + 0x1f4]         ; 0059d693
    FLD float ptr [ESP + 0x1f8]         ; 0059d69a
    LEA EAX,[ESP + 0x1d8]               ; 0059d6a1
    LEA ECX,[ESP + 0x190]               ; 0059d6a8
    FXCH ST2                            ; 0059d6af
    FSUB float ptr [ESP + 0x1c0]        ; 0059d6b1
    FXCH                                ; 0059d6b8
    FSUB float ptr [ESP + 0x1c4]        ; 0059d6ba
    FXCH ST2                            ; 0059d6c1
    FSUB float ptr [ESP + 0x1c8]        ; 0059d6c3
    FXCH                                ; 0059d6ca
    FSTP float ptr [ESP + 0x1d8]        ; 0059d6cc
    FXCH                                ; 0059d6d3
    FSTP float ptr [ESP + 0x1dc]        ; 0059d6d5
    FSTP float ptr [ESP + 0x1e0]        ; 0059d6dc
    CMP ECX,EAX                         ; 0059d6e3
    JZ 0x0059d711                       ; 0059d6e5
        ;   XREF to: 0059d711 (CONDITIONAL_JUMP)  ; LAB_0059d711
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0059d6e7
    MOV dword ptr [ESP + 0x190],EAX     ; 0059d6ee
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 0059d6f5
    MOV dword ptr [ESP + 0x194],EAX     ; 0059d6fc
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0059d703
    MOV dword ptr [ESP + 0x198],EAX     ; 0059d70a
    FLD float ptr [ESP + 0x1c0]         ; 0059d711
        ;   Label: LAB_0059d711
    FLD float ptr [ESP + 0x1c4]         ; 0059d718
    FLD float ptr [ESP + 0x1c8]         ; 0059d71f
    LEA ECX,[ESP + 0x1b4]               ; 0059d726
    LEA EAX,[ESP + 0x1a8]               ; 0059d72d
    FXCH ST2                            ; 0059d734
    FSUB float ptr [ESP + 0x1e4]        ; 0059d736
    FXCH                                ; 0059d73d
    FSUB float ptr [ESP + 0x1e8]        ; 0059d73f
    FXCH ST2                            ; 0059d746
    FSUB float ptr [ESP + 0x1ec]        ; 0059d748
    FXCH ST2                            ; 0059d74f
    FSTP float ptr [ESP + 0x1b8]        ; 0059d751
    FXCH                                ; 0059d758
    FSTP float ptr [ESP + 0x1bc]        ; 0059d75a
    FSTP float ptr [ESP + 0x1b4]        ; 0059d761
    CMP EAX,ECX                         ; 0059d768
    JZ 0x0059d796                       ; 0059d76a
        ;   XREF to: 0059d796 (CONDITIONAL_JUMP)  ; LAB_0059d796
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 0059d76c
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0059d773
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 0059d77a
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0059d781
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0059d788
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0059d78f
    FLD float ptr [ESP + 0x194]         ; 0059d796
        ;   Label: LAB_0059d796
    FMUL float ptr [ESP + 0x1b0]        ; 0059d79d
    FLD float ptr [ESP + 0x198]         ; 0059d7a4
    FMUL float ptr [ESP + 0x1a8]        ; 0059d7ab
    FLD float ptr [ESP + 0x190]         ; 0059d7b2
    FMUL float ptr [ESP + 0x1ac]        ; 0059d7b9
    FLD float ptr [ESP + 0x198]         ; 0059d7c0
    FMUL float ptr [ESP + 0x1ac]        ; 0059d7c7
    FLD float ptr [ESP + 0x190]         ; 0059d7ce
    FMUL float ptr [ESP + 0x1b0]        ; 0059d7d5
    FLD float ptr [ESP + 0x194]         ; 0059d7dc
    FMUL float ptr [ESP + 0x1a8]        ; 0059d7e3
    LEA ECX,[ESP + 0x19c]               ; 0059d7ea
    LEA EAX,[ESP + 0x1cc]               ; 0059d7f1
    FXCH ST2                            ; 0059d7f8
    FSUBP ST5,ST0                       ; 0059d7fa
    FSUBP ST3,ST0                       ; 0059d7fc
    FSUBP                               ; 0059d7fe
    FXCH                                ; 0059d800
    FSTP float ptr [ESP + 0x1a0]        ; 0059d802
    FSTP float ptr [ESP + 0x1a4]        ; 0059d809
    FSTP float ptr [ESP + 0x19c]        ; 0059d810
    CMP EAX,ECX                         ; 0059d817
    JNZ 0x0059d98f                      ; 0059d819
        ;   XREF to: 0059d98f (CONDITIONAL_JUMP)  ; LAB_0059d98f
    FLD float ptr [ESP + 0x1d0]         ; 0059d81f
        ;   Label: LAB_0059d81f
    FMUL ST0                            ; 0059d826
    FLD float ptr [ESP + 0x1cc]         ; 0059d828
    FMUL ST0                            ; 0059d82f
    FADDP                               ; 0059d831
    FLD float ptr [ESP + 0x1d4]         ; 0059d833
    FMUL ST0                            ; 0059d83a
    FADDP                               ; 0059d83c
    FSQRT                               ; 0059d83e
    MOV EDI,EDX                         ; 0059d840
    ADD EDX,0x6                         ; 0059d842
    MOV dword ptr [ESP + 0x218],EDX     ; 0059d845
    FSTP float ptr [ESP + 0x21c]        ; 0059d84c
    XOR ESI,ESI                         ; 0059d853
        ;   Label: LAB_0059d853
    MOV SI,word ptr [EDI]               ; 0059d855
    IMUL ESI,ESI,0x34                   ; 0059d858
    MOV EAX,dword ptr [EBP + 0x40]      ; 0059d85b
    ADD ESI,EAX                         ; 0059d85e
    XOR ECX,ECX                         ; 0059d860
    MOV EAX,ESI                         ; 0059d862
    MOV EDX,ESI                         ; 0059d864
    XOR EBX,EBX                         ; 0059d866
        ;   Label: LAB_0059d866
    MOV BL,byte ptr [ESI]               ; 0059d868
    CMP ECX,EBX                         ; 0059d86a
    JGE 0x0059d9be                      ; 0059d86c
        ;   XREF to: 0059d9be (CONDITIONAL_JUMP)  ; LAB_0059d9be
    FLD float ptr [EAX + 0x4]           ; 0059d872
    XOR EBX,EBX                         ; 0059d875
    FMUL float ptr [ESP + 0x21c]        ; 0059d877
    MOV BL,byte ptr [EDX + 0x1]         ; 0059d87e
    ADD EAX,0x4                         ; 0059d881
    INC EDX                             ; 0059d884
    FADD float ptr [ESP + EBX*0x4]      ; 0059d885
    INC ECX                             ; 0059d888
    FSTP float ptr [ESP + EBX*0x4]      ; 0059d889
    JMP 0x0059d866                      ; 0059d88c
        ;   XREF to: 0059d866 (UNCONDITIONAL_JUMP)  ; LAB_0059d866
    MOV EAX,dword ptr [ESP + 0x204]     ; 0059d88e
        ;   Label: LAB_0059d88e
    MOV dword ptr [EAX + 0x71a0],EDI    ; 0059d895
    LEA EDI,[EAX + 0x60]                ; 0059d89b
    MOV EBX,dword ptr [ESP + 0x200]     ; 0059d89e
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0059d8a5
    MOV EDX,dword ptr [EBP + 0x7140]    ; 0059d8ac
    INC EAX                             ; 0059d8b2
    MOV dword ptr [ESP + 0x204],EDI     ; 0059d8b3
    MOV dword ptr [ESP + 0x1fc],EAX     ; 0059d8ba
    CMP EAX,EDX                         ; 0059d8c1
    JL 0x0059d568                       ; 0059d8c3
        ;   XREF to: 0059d568 (CONDITIONAL_JUMP)  ; LAB_0059d568
    MOV EBX,0x815                       ; 0059d8c9
        ;   Label: LAB_0059d8c9
    MOV ECX,0x64ed0f                    ; 0059d8ce | = "..\\core\\skeleton.cpp"
    MOV ESI,dword ptr [ESP + 0x210]     ; 0059d8d3
    MOV dword ptr [0x02f0d944],EBX      ; 0059d8da | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 0059d8e0 | g_CurrentDebugFilename
    TEST ESI,ESI                        ; 0059d8e6
    JZ 0x0059d8f5                       ; 0059d8e8
        ;   XREF to: 0059d8f5 (CONDITIONAL_JUMP)  ; LAB_0059d8f5
    PUSH 0x2                            ; 0059d8ea
    MOV EAX,dword ptr [ESI + 0x50]      ; 0059d8ec
    PUSH ESI                            ; 0059d8ef
    CALL dword ptr [EAX]                ; 0059d8f0
    ADD ESP,0x8                         ; 0059d8f2
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0059d8f5
        ;   Label: LAB_0059d8f5
    XOR EBX,EBX                         ; 0059d8fc
    TEST EAX,EAX                        ; 0059d8fe
    JLE 0x0059d4a0                      ; 0059d900
        ;   XREF to: 0059d4a0 (CONDITIONAL_JUMP)  ; LAB_0059d4a0
    MOV ESI,EBP                         ; 0059d906
    PUSH EBX                            ; 0059d908
        ;   Label: LAB_0059d908
    PUSH EBP                            ; 0059d909
    ADD ESI,0x4                         ; 0059d90a
    CALL core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0 ; 0059d90d
        ;   XREF to: 0059c2f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0(CDeformableModel * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0059d912
    INC EBX                             ; 0059d915
    MOV ECX,dword ptr [ESP + 0x20c]     ; 0059d916
    MOV dword ptr [ESI + 0x8c38],EAX    ; 0059d91d
    CMP EBX,ECX                         ; 0059d923
    JL 0x0059d908                       ; 0059d925
        ;   XREF to: 0059d908 (CONDITIONAL_JUMP)  ; LAB_0059d908
    ADD ESP,0x220                       ; 0059d927
    POP EBP                             ; 0059d92d
    POP EDI                             ; 0059d92e
    POP ESI                             ; 0059d92f
    POP EBX                             ; 0059d930
    RET                                 ; 0059d931
    MOV EAX,dword ptr [ESP + 0x214]     ; 0059d932
        ;   Label: LAB_0059d932
    ADD EAX,0x12                        ; 0059d939
    MOV EDX,dword ptr [ESP + 0x208]     ; 0059d93c
    MOV dword ptr [ESP + 0x214],EAX     ; 0059d943
    CMP EAX,EDX                         ; 0059d94a
    JL 0x0059d5be                       ; 0059d94c
        ;   XREF to: 0059d5be (CONDITIONAL_JUMP)  ; LAB_0059d5be
    MOV EBX,0x1                         ; 0059d952
        ;   Label: LAB_0059d952
    MOV ECX,dword ptr [ESP + 0x20c]     ; 0059d957
    XOR EDI,EDI                         ; 0059d95e
    CMP ECX,EBX                         ; 0059d960
    JLE 0x0059d88e                      ; 0059d962
        ;   XREF to: 0059d88e (CONDITIONAL_JUMP)  ; LAB_0059d88e
    MOV EDX,0x4                         ; 0059d968
    FLD float ptr [ESP + EDX*0x1]       ; 0059d96d
        ;   Label: LAB_0059d96d
    FCOMP float ptr [ESP + EDI*0x4]     ; 0059d970
    FNSTSW AX                           ; 0059d973
    SAHF                                ; 0059d975
    JBE 0x0059d97a                      ; 0059d976
        ;   XREF to: 0059d97a (CONDITIONAL_JUMP)  ; LAB_0059d97a
    MOV EDI,EBX                         ; 0059d978
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0059d97a
        ;   Label: LAB_0059d97a
    INC EBX                             ; 0059d981
    ADD EDX,0x4                         ; 0059d982
    CMP EBX,EAX                         ; 0059d985
    JGE 0x0059d88e                      ; 0059d987
        ;   XREF to: 0059d88e (CONDITIONAL_JUMP)  ; LAB_0059d88e
    JMP 0x0059d96d                      ; 0059d98d
        ;   XREF to: 0059d96d (UNCONDITIONAL_JUMP)  ; LAB_0059d96d
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0059d98f
        ;   Label: LAB_0059d98f
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0059d996
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0059d99d
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0059d9a4
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 0059d9ab
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0059d9b2
    JMP 0x0059d81f                      ; 0059d9b9
        ;   XREF to: 0059d81f (UNCONDITIONAL_JUMP)  ; LAB_0059d81f
    MOV EDX,dword ptr [ESP + 0x218]     ; 0059d9be
        ;   Label: LAB_0059d9be
    ADD EDI,0x2                         ; 0059d9c5
    CMP EDI,EDX                         ; 0059d9c8
    JZ 0x0059d932                       ; 0059d9ca
        ;   XREF to: 0059d932 (CONDITIONAL_JUMP)  ; LAB_0059d932
    JMP 0x0059d853                      ; 0059d9d0
        ;   XREF to: 0059d853 (UNCONDITIONAL_JUMP)  ; LAB_0059d853

