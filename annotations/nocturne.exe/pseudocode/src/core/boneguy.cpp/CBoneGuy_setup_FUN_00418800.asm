; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_CBoneGuy_setup_FUN_00418800(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005791a2
;   string s_Bip01_L_ForeArm_005791ad
;   string s_Bip01_R_ForeArm_005791bd
;   string s_Bip01_L_UpperArm_005791cd
;   string s_Bip01_R_UpperArm_005791de
;   string s_Bip01_L_Foot_005791ef
;   string s_Bip01_R_Foot_005791fc
;   string s_Bip01_L_Hand_00579209
;   string s_Bip01_R_Hand_00579216
;   string s_Bip01_Spine_00579223
;   string s_Bip01_Spine2_0057922f
;   string s_Bip01_Head_0057923c
;   string s_Bip01_L_UpperArm_00579247
;   string s_Bip01_R_UpperArm_00579258
;   string s_Bip01_Spine_00579269
;   ... and 16 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418800
        ;   Label: core_boneguy.cpp_CBoneGuy_setup_FUN_00418800
    PUSH ESI                            ; 00418801
    PUSH EDI                            ; 00418802
    MOV ESI,dword ptr [ESP + 0x10]      ; 00418803
    LEA EDI,[ESI + 0x150]               ; 00418807
    PUSH EDI                            ; 0041880d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 0041880e
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 00418813
    PUSH EDI                            ; 00418816
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00418817
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0041881c
    PUSH 0x1                            ; 0041881f
    PUSH 0x5791a2                       ; 00418821 | = "Bip01 Head"
    PUSH EAX                            ; 00418826
    MOV EBX,EAX                         ; 00418827
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00418829
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041882e
    PUSH 0x1                            ; 00418831
    PUSH 0x5791ad                       ; 00418833 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00418838
    MOV [0x00764794],EAX                ; 00418839 | DAT_00764794
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041883e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00418843
    PUSH 0x1                            ; 00418846
    PUSH 0x5791bd                       ; 00418848 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 0041884d
    MOV [0x007647a0],EAX                ; 0041884e | DAT_007647a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00418853
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00418858
    PUSH 0x1                            ; 0041885b
    PUSH 0x5791cd                       ; 0041885d | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00418862
    MOV [0x007647a4],EAX                ; 00418863 | DAT_007647a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00418868
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041886d
    PUSH 0x1                            ; 00418870
    PUSH 0x5791de                       ; 00418872 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00418877
    MOV [0x007647a8],EAX                ; 00418878 | DAT_007647a8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041887d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00418882
    PUSH 0x1                            ; 00418885
    PUSH 0x5791ef                       ; 00418887 | = "Bip01 L Foot"
    PUSH EBX                            ; 0041888c
    MOV [0x007647ac],EAX                ; 0041888d | DAT_007647ac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00418892
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00418897
    PUSH 0x1                            ; 0041889a
    PUSH 0x5791fc                       ; 0041889c | = "Bip01 R Foot"
    PUSH EBX                            ; 004188a1
    MOV [0x007647b0],EAX                ; 004188a2 | DAT_007647b0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004188a7
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004188ac
    PUSH 0x1                            ; 004188af
    PUSH 0x579209                       ; 004188b1 | = "Bip01 L Hand"
    PUSH EBX                            ; 004188b6
    MOV [0x007647b4],EAX                ; 004188b7 | DAT_007647b4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004188bc
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004188c1
    PUSH 0x1                            ; 004188c4
    PUSH 0x579216                       ; 004188c6 | = "Bip01 R Hand"
    PUSH EBX                            ; 004188cb
    MOV [0x00764798],EAX                ; 004188cc | DAT_00764798
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004188d1
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004188d6
    MOV [0x0076479c],EAX                ; 004188d9 | DAT_0076479c
    PUSH 0x1                            ; 004188de
    PUSH 0x579223                       ; 004188e0 | = "Bip01 Spine"
    PUSH EBX                            ; 004188e5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004188e6
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004188eb
    PUSH 0x1                            ; 004188ee
    PUSH 0x57922f                       ; 004188f0 | = "Bip01 Spine2"
    PUSH EBX                            ; 004188f5
    MOV [0x007647b8],EAX                ; 004188f6 | DAT_007647b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004188fb
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00418900
    PUSH 0x1                            ; 00418903
    PUSH 0x57923c                       ; 00418905 | = "Bip01 Head"
    PUSH EBX                            ; 0041890a
    MOV [0x007647bc],EAX                ; 0041890b | DAT_007647bc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00418910
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00418915
    PUSH 0x1                            ; 00418918
    PUSH 0x579247                       ; 0041891a | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0041891f
    MOV [0x00764794],EAX                ; 00418920 | DAT_00764794
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00418925
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041892a
    PUSH 0x1                            ; 0041892d
    PUSH 0x579258                       ; 0041892f | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00418934
    MOV [0x007647a8],EAX                ; 00418935 | DAT_007647a8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041893a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 0041893f
    PUSH 0x1                            ; 00418942
    PUSH 0x579269                       ; 00418944 | = "Bip01 Spine"
    PUSH EBX                            ; 00418949
    MOV [0x007647ac],EAX                ; 0041894a | DAT_007647ac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0041894f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00418954
    PUSH 0x1                            ; 00418957
    PUSH 0x579275                       ; 00418959 | = "Bip01 Spine2"
    PUSH EBX                            ; 0041895e
    MOV [0x007647b8],EAX                ; 0041895f | DAT_007647b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00418964
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00418969
    PUSH EDI                            ; 0041896c
    MOV [0x007647bc],EAX                ; 0041896d | DAT_007647bc
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00418972
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    MOV EAX,dword ptr [EAX + 0xc00]     ; 00418977
    ADD ESP,0x4                         ; 0041897d
    MOV dword ptr [ESI + 0xbda0],EAX    ; 00418980
    CMP EAX,0x14                        ; 00418986
    JG 0x004189b8                       ; 00418989
        ;   XREF to: 004189b8 (CONDITIONAL_JUMP)  ; LAB_004189b8
    MOV EAX,[0x00764798]                ; 0041898b | DAT_00764798
        ;   Label: LAB_0041898b
    MOV dword ptr [ESI + 0x24a4],EAX    ; 00418990
    MOV EAX,[0x0076479c]                ; 00418996 | DAT_0076479c
    PUSH ESI                            ; 0041899b
    MOV dword ptr [ESI + 0x24e8],EAX    ; 0041899c
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 004189a2
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_setup_FUN_004796b0()
    ADD ESP,0x4                         ; 004189a7
    MOV dword ptr [ESI + 0xbd34],0x0    ; 004189aa
    POP EDI                             ; 004189b4
    POP ESI                             ; 004189b5
    POP EBX                             ; 004189b6
    RET                                 ; 004189b7
    MOV ECX,0x579282                    ; 004189b8 | = "..\\core\\boneguy.cpp"
        ;   Label: LAB_004189b8
    MOV EBX,0x12f                       ; 004189bd
    PUSH 0x579296                       ; 004189c2 | = "CBoneGuy::explode - Not enough contai..."
    MOV dword ptr [0x01cc4800],ECX      ; 004189c7 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004189cd | DAT_01cc4804
    CALL FUN_004c8440                   ; 004189d3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004189d8
    JMP 0x0041898b                      ; 004189db
        ;   XREF to: 0041898b (UNCONDITIONAL_JUMP)  ; LAB_0041898b

