; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_smiley_cpp_FUN_00549870(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005e7668
;   TerminatedCString s_Bip01_L_ForeArm_005e7673
;   TerminatedCString s_Bip01_R_ForeArm_005e7683
;   TerminatedCString s_Bip01_L_UpperArm_005e7693
;   TerminatedCString s_Bip01_R_UpperArm_005e76a4
;   TerminatedCString s_Bip01_L_Foot_005e76b5
;   TerminatedCString s_Bip01_R_Foot_005e76c2
;   TerminatedCString s_Bip01_L_Hand_005e76cf
;   TerminatedCString s_Bip01_R_Hand_005e76dc
;   TerminatedCString s_Bip01_Spine_005e76e9
;   TerminatedCString s_Bip01_Spine1_005e76f5
;   TerminatedCString s_Bip01_Spine2_005e7702
;   TerminatedCString s_Bip01_Head_005e770f
;   TerminatedCString s_Bip01_L_UpperArm_005e771a
;   TerminatedCString s_Bip01_R_UpperArm_005e772b
;   ... and 27 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_FUN_00540e80
;   core_skeleton.cpp_FUN_00543100
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549870
        ;   Label: core_smiley.cpp_FUN_00549870
    PUSH ESI                            ; 00549871
    PUSH EDI                            ; 00549872
    PUSH EBP                            ; 00549873
    MOV EBP,ESP                         ; 00549874
    MOV EBX,dword ptr [EBP + 0x14]      ; 00549876
    PUSH EBX                            ; 00549879
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 0054987a
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0054987f
    LEA EDI,[EBX + 0x2b4]               ; 00549882
    PUSH EDI                            ; 00549888
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 00549889
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054988e
    PUSH EDI                            ; 00549891
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00549892
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00549897
    PUSH 0x1                            ; 0054989a
    PUSH 0x5e7668                       ; 0054989c | = "Bip01 Head"
    PUSH EAX                            ; 005498a1
    MOV ESI,EAX                         ; 005498a2
    CALL core_skeleton.cpp_FUN_00540e80 ; 005498a4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005498a9
    PUSH 0x1                            ; 005498ac
    PUSH 0x5e7673                       ; 005498ae | = "Bip01 L ForeArm"
    PUSH ESI                            ; 005498b3
    MOV [0x02628610],EAX                ; 005498b4 | DAT_02628610
    CALL core_skeleton.cpp_FUN_00540e80 ; 005498b9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005498be
    PUSH 0x1                            ; 005498c1
    PUSH 0x5e7683                       ; 005498c3 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 005498c8
    MOV [0x0262861c],EAX                ; 005498c9 | DAT_0262861c
    CALL core_skeleton.cpp_FUN_00540e80 ; 005498ce
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005498d3
    PUSH 0x1                            ; 005498d6
    PUSH 0x5e7693                       ; 005498d8 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 005498dd
    MOV [0x02628620],EAX                ; 005498de | DAT_02628620
    CALL core_skeleton.cpp_FUN_00540e80 ; 005498e3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005498e8
    PUSH 0x1                            ; 005498eb
    PUSH 0x5e76a4                       ; 005498ed | = "Bip01 R UpperArm"
    PUSH ESI                            ; 005498f2
    MOV [0x02628624],EAX                ; 005498f3 | DAT_02628624
    CALL core_skeleton.cpp_FUN_00540e80 ; 005498f8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005498fd
    PUSH 0x1                            ; 00549900
    PUSH 0x5e76b5                       ; 00549902 | = "Bip01 L Foot"
    PUSH ESI                            ; 00549907
    MOV [0x02628628],EAX                ; 00549908 | DAT_02628628
    CALL core_skeleton.cpp_FUN_00540e80 ; 0054990d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00549912
    PUSH 0x1                            ; 00549915
    PUSH 0x5e76c2                       ; 00549917 | = "Bip01 R Foot"
    PUSH ESI                            ; 0054991c
    MOV [0x0262862c],EAX                ; 0054991d | DAT_0262862c
    CALL core_skeleton.cpp_FUN_00540e80 ; 00549922
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00549927
    PUSH 0x1                            ; 0054992a
    PUSH 0x5e76cf                       ; 0054992c | = "Bip01 L Hand"
    PUSH ESI                            ; 00549931
    MOV [0x02628630],EAX                ; 00549932 | DAT_02628630
    CALL core_skeleton.cpp_FUN_00540e80 ; 00549937
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0054993c
    MOV [0x02628614],EAX                ; 0054993f | DAT_02628614
    PUSH 0x1                            ; 00549944
    PUSH 0x5e76dc                       ; 00549946 | = "Bip01 R Hand"
    PUSH ESI                            ; 0054994b
    CALL core_skeleton.cpp_FUN_00540e80 ; 0054994c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00549951
    PUSH 0x1                            ; 00549954
    PUSH 0x5e76e9                       ; 00549956 | = "Bip01 Spine"
    PUSH ESI                            ; 0054995b
    MOV [0x02628618],EAX                ; 0054995c | DAT_02628618
    CALL core_skeleton.cpp_FUN_00540e80 ; 00549961
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00549966
    PUSH 0x1                            ; 00549969
    PUSH 0x5e76f5                       ; 0054996b | = "Bip01 Spine1"
    PUSH ESI                            ; 00549970
    MOV [0x02628634],EAX                ; 00549971 | DAT_02628634
    CALL core_skeleton.cpp_FUN_00540e80 ; 00549976
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0054997b
    PUSH 0x1                            ; 0054997e
    PUSH 0x5e7702                       ; 00549980 | = "Bip01 Spine2"
    PUSH ESI                            ; 00549985
    MOV [0x02628638],EAX                ; 00549986 | DAT_02628638
    CALL core_skeleton.cpp_FUN_00540e80 ; 0054998b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00549990
    PUSH 0x1                            ; 00549993
    PUSH 0x5e770f                       ; 00549995 | = "Bip01 Head"
    PUSH ESI                            ; 0054999a
    MOV [0x0262863c],EAX                ; 0054999b | DAT_0262863c
    CALL core_skeleton.cpp_FUN_00540e80 ; 005499a0
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005499a5
    PUSH 0x1                            ; 005499a8
    PUSH 0x5e771a                       ; 005499aa | = "Bip01 L UpperArm"
    PUSH ESI                            ; 005499af
    MOV [0x02628610],EAX                ; 005499b0 | DAT_02628610
    CALL core_skeleton.cpp_FUN_00540e80 ; 005499b5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005499ba
    PUSH 0x1                            ; 005499bd
    PUSH 0x5e772b                       ; 005499bf | = "Bip01 R UpperArm"
    PUSH ESI                            ; 005499c4
    MOV [0x02628624],EAX                ; 005499c5 | DAT_02628624
    CALL core_skeleton.cpp_FUN_00540e80 ; 005499ca
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005499cf
    PUSH 0x1                            ; 005499d2
    PUSH 0x5e773c                       ; 005499d4 | = "Bip01 Spine"
    PUSH ESI                            ; 005499d9
    MOV [0x02628628],EAX                ; 005499da | DAT_02628628
    CALL core_skeleton.cpp_FUN_00540e80 ; 005499df
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005499e4
    PUSH 0x1                            ; 005499e7
    PUSH 0x5e7748                       ; 005499e9 | = "Bip01 Spine2"
    PUSH ESI                            ; 005499ee
    MOV [0x02628634],EAX                ; 005499ef | DAT_02628634
    CALL core_skeleton.cpp_FUN_00540e80 ; 005499f4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005499f9
    PUSH EDI                            ; 005499fc
    MOV [0x0262863c],EAX                ; 005499fd | DAT_0262863c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00549a02
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 00549a07
    ADD ESP,0x4                         ; 00549a09
    PUSH 0x1                            ; 00549a0c
    PUSH 0x5e7755                       ; 00549a0e | = "larm01"
    PUSH EAX                            ; 00549a13
    CALL core_skeleton.cpp_FUN_00543100 ; 00549a14
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00549a19
    PUSH 0x1                            ; 00549a1c
    PUSH 0x5e775c                       ; 00549a1e | = "l4arm01"
    PUSH ESI                            ; 00549a23
    MOV dword ptr [EBX + 0x10b00],EAX   ; 00549a24
    CALL core_skeleton.cpp_FUN_00543100 ; 00549a2a
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00549a2f
    PUSH 0x1                            ; 00549a32
    PUSH 0x5e7764                       ; 00549a34 | = "rarm01"
    PUSH ESI                            ; 00549a39
    MOV dword ptr [EBX + 0x10b04],EAX   ; 00549a3a
    CALL core_skeleton.cpp_FUN_00543100 ; 00549a40
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00549a45
    PUSH 0x1                            ; 00549a48
    PUSH 0x5e776b                       ; 00549a4a | = "r4arm01"
    PUSH ESI                            ; 00549a4f
    MOV dword ptr [EBX + 0x10b08],EAX   ; 00549a50
    CALL core_skeleton.cpp_FUN_00543100 ; 00549a56
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00549a5b
    PUSH 0x1                            ; 00549a5e
    PUSH 0x5e7773                       ; 00549a60 | = "rthigh01"
    PUSH ESI                            ; 00549a65
    MOV dword ptr [EBX + 0x10b0c],EAX   ; 00549a66
    CALL core_skeleton.cpp_FUN_00543100 ; 00549a6c
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00549a71
    PUSH 0x1                            ; 00549a74
    PUSH 0x5e777c                       ; 00549a76 | = "rshin01"
    PUSH ESI                            ; 00549a7b
    MOV dword ptr [EBX + 0x10b10],EAX   ; 00549a7c
    CALL core_skeleton.cpp_FUN_00543100 ; 00549a82
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00549a87
    PUSH 0x1                            ; 00549a8a
    PUSH 0x5e7784                       ; 00549a8c | = "lthigh01"
    PUSH ESI                            ; 00549a91
    MOV dword ptr [EBX + 0x10b14],EAX   ; 00549a92
    CALL core_skeleton.cpp_FUN_00543100 ; 00549a98
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00549a9d
    PUSH 0x1                            ; 00549aa0
    PUSH 0x5e778d                       ; 00549aa2 | = "lshin01"
    PUSH ESI                            ; 00549aa7
    MOV dword ptr [EBX + 0x10b18],EAX   ; 00549aa8
    CALL core_skeleton.cpp_FUN_00543100 ; 00549aae
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00549ab3
    PUSH 0x1                            ; 00549ab6
    PUSH 0x5e7795                       ; 00549ab8 | = "ass01"
    PUSH ESI                            ; 00549abd
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 00549abe
    CALL core_skeleton.cpp_FUN_00543100 ; 00549ac4
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00549ac9
    MOV dword ptr [EBX + 0x10b20],EAX   ; 00549acc
    PUSH 0x1                            ; 00549ad2
    PUSH 0x5e779b                       ; 00549ad4 | = "torso01"
    PUSH ESI                            ; 00549ad9
    CALL core_skeleton.cpp_FUN_00543100 ; 00549ada
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00549adf
    PUSH 0x1                            ; 00549ae2
    PUSH 0x5e77a3                       ; 00549ae4 | = "head01"
    PUSH ESI                            ; 00549ae9
    MOV dword ptr [EBX + 0x10b24],EAX   ; 00549aea
    CALL core_skeleton.cpp_FUN_00543100 ; 00549af0
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0x10b2c],0x0   ; 00549af5
    ADD ESP,0xc                         ; 00549aff
    MOV dword ptr [EBX + 0x10b28],EAX   ; 00549b02
    PUSH 0x5e77aa                       ; 00549b08 | = "smiley2.dfm"
    LEA EAX,[EBX + 0x2514]              ; 00549b0d
    MOV dword ptr [EBX + 0x10b30],0x0   ; 00549b13
    PUSH EAX                            ; 00549b1d
    MOV dword ptr [EBX + 0x10b38],0x1   ; 00549b1e
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00549b28
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00549b2d
    TEST EAX,EAX                        ; 00549b30
    JNZ 0x00549b3e                      ; 00549b32
        ;   XREF to: 00549b3e (CONDITIONAL_JUMP)  ; LAB_00549b3e
    MOV dword ptr [EBX + 0x10b38],0x2   ; 00549b34
    PUSH 0x5e77b6                       ; 00549b3e | = "smiley3.dfm"
        ;   Label: LAB_00549b3e
    LEA EAX,[EBX + 0x2514]              ; 00549b43
    PUSH EAX                            ; 00549b49
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00549b4a
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00549b4f
    TEST EAX,EAX                        ; 00549b52
    JZ 0x00549b5b                       ; 00549b54
        ;   XREF to: 00549b5b (CONDITIONAL_JUMP)  ; LAB_00549b5b
    POP EBP                             ; 00549b56
    POP EDI                             ; 00549b57
    POP ESI                             ; 00549b58
    POP EBX                             ; 00549b59
    RET                                 ; 00549b5a
    MOV dword ptr [EBX + 0x10b38],0x3   ; 00549b5b
        ;   Label: LAB_00549b5b
    MOV dword ptr [EBX + 0x282c],EAX    ; 00549b65
    POP EBP                             ; 00549b6b
    POP EDI                             ; 00549b6c
    POP ESI                             ; 00549b6d
    POP EBX                             ; 00549b6e
    RET                                 ; 00549b6f

