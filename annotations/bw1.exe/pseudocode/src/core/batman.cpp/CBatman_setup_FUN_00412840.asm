; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_setup_FUN_00412840(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005d38e9
;   TerminatedCString s_Bip01_L_ForeArm_005d38f4
;   TerminatedCString s_Bip01_R_ForeArm_005d3904
;   TerminatedCString s_Bip01_L_UpperArm_005d3914
;   TerminatedCString s_Bip01_R_UpperArm_005d3925
;   TerminatedCString s_Bip01_L_Foot_005d3936
;   TerminatedCString s_Bip01_R_Foot_005d3943
;   TerminatedCString s_Bip01_L_Hand_005d3950
;   TerminatedCString s_Bip01_R_Hand_005d395d
;   TerminatedCString s_Bip01_Spine_005d396a
;   TerminatedCString s_Bip01_Spine1_005d3976
;   TerminatedCString s_Bip01_Spine2_005d3983
;   TerminatedCString s_Bip01_Head_005d3990
;   TerminatedCString s_Bip01_L_UpperArm_005d399b
;   TerminatedCString s_Bip01_R_UpperArm_005d39ac
;   ... and 28 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412840
        ;   Label: core_batman.cpp_CBatman_setup_FUN_00412840
    PUSH ESI                            ; 00412841
    PUSH EDI                            ; 00412842
    MOV ESI,dword ptr [ESP + 0x10]      ; 00412843
    PUSH ESI                            ; 00412847
    MOV dword ptr [ESI + 0xc268],0x0    ; 00412848
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 00412852
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00412857
    LEA EDI,[ESI + 0x158]               ; 0041285a
    PUSH EDI                            ; 00412860
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 00412861
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00412866
    PUSH EDI                            ; 00412869
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0041286a
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041286f
    PUSH 0x1                            ; 00412872
    PUSH 0x5d38e9                       ; 00412874 | = "Bip01 Head"
    PUSH EAX                            ; 00412879
    MOV EBX,EAX                         ; 0041287a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041287c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412881
    PUSH 0x1                            ; 00412884
    PUSH 0x5d38f4                       ; 00412886 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0041288b
    MOV [0x007c37b8],EAX                ; 0041288c | DAT_007c37b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00412891
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412896
    PUSH 0x1                            ; 00412899
    PUSH 0x5d3904                       ; 0041289b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004128a0
    MOV [0x007c37c4],EAX                ; 004128a1 | DAT_007c37c4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004128a6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004128ab
    PUSH 0x1                            ; 004128ae
    PUSH 0x5d3914                       ; 004128b0 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004128b5
    MOV [0x007c37c8],EAX                ; 004128b6 | DAT_007c37c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004128bb
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004128c0
    PUSH 0x1                            ; 004128c3
    PUSH 0x5d3925                       ; 004128c5 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004128ca
    MOV [0x007c37cc],EAX                ; 004128cb | DAT_007c37cc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004128d0
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004128d5
    PUSH 0x1                            ; 004128d8
    PUSH 0x5d3936                       ; 004128da | = "Bip01 L Foot"
    PUSH EBX                            ; 004128df
    MOV [0x007c37d0],EAX                ; 004128e0 | DAT_007c37d0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004128e5
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004128ea
    PUSH 0x1                            ; 004128ed
    PUSH 0x5d3943                       ; 004128ef | = "Bip01 R Foot"
    PUSH EBX                            ; 004128f4
    MOV [0x007c37d4],EAX                ; 004128f5 | DAT_007c37d4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004128fa
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004128ff
    PUSH 0x1                            ; 00412902
    PUSH 0x5d3950                       ; 00412904 | = "Bip01 L Hand"
    PUSH EBX                            ; 00412909
    MOV [0x007c37d8],EAX                ; 0041290a | DAT_007c37d8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041290f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412914
    MOV [0x007c37bc],EAX                ; 00412917 | DAT_007c37bc
    PUSH 0x1                            ; 0041291c
    PUSH 0x5d395d                       ; 0041291e | = "Bip01 R Hand"
    PUSH EBX                            ; 00412923
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00412924
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412929
    PUSH 0x1                            ; 0041292c
    PUSH 0x5d396a                       ; 0041292e | = "Bip01 Spine"
    PUSH EBX                            ; 00412933
    MOV [0x007c37c0],EAX                ; 00412934 | DAT_007c37c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00412939
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041293e
    PUSH 0x1                            ; 00412941
    PUSH 0x5d3976                       ; 00412943 | = "Bip01 Spine1"
    PUSH EBX                            ; 00412948
    MOV [0x007c37dc],EAX                ; 00412949 | DAT_007c37dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041294e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412953
    PUSH 0x1                            ; 00412956
    PUSH 0x5d3983                       ; 00412958 | = "Bip01 Spine2"
    PUSH EBX                            ; 0041295d
    MOV [0x007c37e0],EAX                ; 0041295e | DAT_007c37e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00412963
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412968
    PUSH 0x1                            ; 0041296b
    PUSH 0x5d3990                       ; 0041296d | = "Bip01 Head"
    PUSH EBX                            ; 00412972
    MOV [0x007c37e4],EAX                ; 00412973 | DAT_007c37e4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00412978
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041297d
    PUSH 0x1                            ; 00412980
    PUSH 0x5d399b                       ; 00412982 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00412987
    MOV [0x007c37b8],EAX                ; 00412988 | DAT_007c37b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0041298d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412992
    PUSH 0x1                            ; 00412995
    PUSH 0x5d39ac                       ; 00412997 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0041299c
    MOV [0x007c37cc],EAX                ; 0041299d | DAT_007c37cc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004129a2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004129a7
    PUSH 0x1                            ; 004129aa
    PUSH 0x5d39bd                       ; 004129ac | = "Bip01 Spine"
    PUSH EBX                            ; 004129b1
    MOV [0x007c37d0],EAX                ; 004129b2 | DAT_007c37d0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004129b7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004129bc
    PUSH 0x1                            ; 004129bf
    PUSH 0x5d39c9                       ; 004129c1 | = "Bip01 Spine2"
    PUSH EBX                            ; 004129c6
    MOV [0x007c37dc],EAX                ; 004129c7 | DAT_007c37dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004129cc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004129d1
    PUSH EDI                            ; 004129d4
    MOV [0x007c37e4],EAX                ; 004129d5 | DAT_007c37e4
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 004129da
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    MOV EBX,EAX                         ; 004129df
    ADD ESP,0x4                         ; 004129e1
    PUSH 0x1                            ; 004129e4
    PUSH 0x5d39d6                       ; 004129e6 | = "head01"
    PUSH EAX                            ; 004129eb
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004129ec
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004129f1
    PUSH 0x1                            ; 004129f4
    PUSH 0x5d39dd                       ; 004129f6 | = "torso01"
    PUSH EBX                            ; 004129fb
    MOV dword ptr [ESI + 0xc2d0],EAX    ; 004129fc
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412a02
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412a07
    PUSH 0x1                            ; 00412a0a
    PUSH 0x5d39e5                       ; 00412a0c | = "larm01"
    PUSH EBX                            ; 00412a11
    MOV dword ptr [ESI + 0xc2d4],EAX    ; 00412a12
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412a18
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412a1d
    PUSH 0x1                            ; 00412a20
    PUSH 0x5d39ec                       ; 00412a22 | = "l4arm01"
    PUSH EBX                            ; 00412a27
    MOV dword ptr [ESI + 0xc2d8],EAX    ; 00412a28
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412a2e
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412a33
    PUSH 0x1                            ; 00412a36
    PUSH 0x5d39f4                       ; 00412a38 | = "rarm01"
    PUSH EBX                            ; 00412a3d
    MOV dword ptr [ESI + 0xc2dc],EAX    ; 00412a3e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412a44
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412a49
    PUSH 0x1                            ; 00412a4c
    PUSH 0x5d39fb                       ; 00412a4e | = "r4arm01"
    PUSH EBX                            ; 00412a53
    MOV dword ptr [ESI + 0xc2e0],EAX    ; 00412a54
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412a5a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412a5f
    PUSH 0x1                            ; 00412a62
    PUSH 0x5d3a03                       ; 00412a64 | = "ass01"
    PUSH EBX                            ; 00412a69
    MOV dword ptr [ESI + 0xc2e4],EAX    ; 00412a6a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412a70
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412a75
    PUSH 0x1                            ; 00412a78
    PUSH 0x5d3a09                       ; 00412a7a | = "tail01"
    PUSH EBX                            ; 00412a7f
    MOV dword ptr [ESI + 0xc2e8],EAX    ; 00412a80
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412a86
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412a8b
    PUSH 0x1                            ; 00412a8e
    PUSH 0x5d3a10                       ; 00412a90 | = "lthigh01"
    PUSH EBX                            ; 00412a95
    MOV dword ptr [ESI + 0xc2ec],EAX    ; 00412a96
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412a9c
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412aa1
    MOV dword ptr [ESI + 0xc2f0],EAX    ; 00412aa4
    PUSH 0x1                            ; 00412aaa
    PUSH 0x5d3a19                       ; 00412aac | = "lshin01"
    PUSH EBX                            ; 00412ab1
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412ab2
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412ab7
    PUSH 0x1                            ; 00412aba
    PUSH 0x5d3a21                       ; 00412abc | = "rthigh01"
    PUSH EBX                            ; 00412ac1
    MOV dword ptr [ESI + 0xc2f4],EAX    ; 00412ac2
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412ac8
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412acd
    PUSH 0x1                            ; 00412ad0
    PUSH 0x5d3a2a                       ; 00412ad2 | = "rshin01"
    PUSH EBX                            ; 00412ad7
    MOV dword ptr [ESI + 0xc2f8],EAX    ; 00412ad8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412ade
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412ae3
    PUSH 0x1                            ; 00412ae6
    PUSH 0x5d3a32                       ; 00412ae8 | = "lfoot01"
    PUSH EBX                            ; 00412aed
    MOV dword ptr [ESI + 0xc2fc],EAX    ; 00412aee
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412af4
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412af9
    PUSH 0x1                            ; 00412afc
    PUSH 0x5d3a3a                       ; 00412afe | = "rfoot01"
    PUSH EBX                            ; 00412b03
    MOV dword ptr [ESI + 0xc300],EAX    ; 00412b04
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 00412b0a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412b0f
    MOV dword ptr [ESI + 0xc304],EAX    ; 00412b12
    POP EDI                             ; 00412b18
    POP ESI                             ; 00412b19
    POP EBX                             ; 00412b1a
    RET                                 ; 00412b1b

