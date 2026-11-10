; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_CHotDemon_setup_FUN_004d3850(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_hotdemonx_dfm_005da500
;   TerminatedCString s_hotdemon_dfm_005da50e
;   TerminatedCString s_Bip01_Head_005da51b
;   TerminatedCString s_Bip01_L_ForeArm_005da526
;   TerminatedCString s_Bip01_R_ForeArm_005da536
;   TerminatedCString s_Bip01_L_UpperArm_005da546
;   TerminatedCString s_Bip01_R_UpperArm_005da557
;   TerminatedCString s_Bip01_L_Foot_005da568
;   TerminatedCString s_Bip01_R_Foot_005da575
;   TerminatedCString s_Bip01_L_Hand_005da582
;   TerminatedCString s_Bip01_R_Hand_005da58f
;   TerminatedCString s_Bip01_Spine_005da59c
;   TerminatedCString s_Bip01_Spine1_005da5a8
;   TerminatedCString s_Bip01_Spine2_005da5b5
;   TerminatedCString s_Bip01_Head_005da5c2
;   ... and 18 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3850
        ;   Label: core_hotdemon.cpp_CHotDemon_setup_FUN_004d3850
    PUSH ESI                            ; 004d3851
    PUSH EDI                            ; 004d3852
    MOV EDI,dword ptr [ESP + 0x10]      ; 004d3853
    MOV EBX,dword ptr [0x00616494]      ; 004d3857 | g_CGamePtr
    MOV EDX,dword ptr [EBX + 0x18]      ; 004d385d | g_CGameInstance.field15_0x18
    LEA EAX,[EDI + 0x2b4]               ; 004d3860
    TEST EDX,EDX                        ; 004d3866
    JZ 0x004d3a25                       ; 004d3868
        ;   XREF to: 004d3a25 (CONDITIONAL_JUMP)  ; LAB_004d3a25
    PUSH 0x5da50e                       ; 004d386e | = "hotdemon.dfm"
    PUSH EAX                            ; 004d3873
        ;   Label: LAB_004d3873
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 004d3874
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004d3879
    PUSH EDI                            ; 004d387c
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 004d387d
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004d3882
    LEA ESI,[EDI + 0x2b4]               ; 004d3885
    PUSH ESI                            ; 004d388b
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 004d388c
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d3891
    PUSH ESI                            ; 004d3894
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004d3895
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d389a
    PUSH 0x1                            ; 004d389d
    PUSH 0x5da51b                       ; 004d389f | = "Bip01 Head"
    PUSH EAX                            ; 004d38a4
    MOV EBX,EAX                         ; 004d38a5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d38a7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d38ac
    PUSH 0x1                            ; 004d38af
    PUSH 0x5da526                       ; 004d38b1 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004d38b6
    MOV [0x01cee00c],EAX                ; 004d38b7 | DAT_01cee00c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d38bc
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d38c1
    PUSH 0x1                            ; 004d38c4
    PUSH 0x5da536                       ; 004d38c6 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004d38cb
    MOV [0x01cee018],EAX                ; 004d38cc | DAT_01cee018
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d38d1
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d38d6
    PUSH 0x1                            ; 004d38d9
    PUSH 0x5da546                       ; 004d38db | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004d38e0
    MOV [0x01cee01c],EAX                ; 004d38e1 | DAT_01cee01c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d38e6
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d38eb
    PUSH 0x1                            ; 004d38ee
    PUSH 0x5da557                       ; 004d38f0 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004d38f5
    MOV [0x01cee020],EAX                ; 004d38f6 | DAT_01cee020
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d38fb
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d3900
    PUSH 0x1                            ; 004d3903
    PUSH 0x5da568                       ; 004d3905 | = "Bip01 L Foot"
    PUSH EBX                            ; 004d390a
    MOV [0x01cee024],EAX                ; 004d390b | DAT_01cee024
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d3910
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d3915
    PUSH 0x1                            ; 004d3918
    PUSH 0x5da575                       ; 004d391a | = "Bip01 R Foot"
    PUSH EBX                            ; 004d391f
    MOV [0x01cee028],EAX                ; 004d3920 | DAT_01cee028
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d3925
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d392a
    PUSH 0x1                            ; 004d392d
    PUSH 0x5da582                       ; 004d392f | = "Bip01 L Hand"
    PUSH EBX                            ; 004d3934
    MOV [0x01cee02c],EAX                ; 004d3935 | DAT_01cee02c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d393a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d393f
    MOV [0x01cee010],EAX                ; 004d3942 | DAT_01cee010
    PUSH 0x1                            ; 004d3947
    PUSH 0x5da58f                       ; 004d3949 | = "Bip01 R Hand"
    PUSH EBX                            ; 004d394e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d394f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d3954
    PUSH 0x1                            ; 004d3957
    PUSH 0x5da59c                       ; 004d3959 | = "Bip01 Spine"
    PUSH EBX                            ; 004d395e
    MOV [0x01cee014],EAX                ; 004d395f | DAT_01cee014
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d3964
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d3969
    PUSH 0x1                            ; 004d396c
    PUSH 0x5da5a8                       ; 004d396e | = "Bip01 Spine1"
    PUSH EBX                            ; 004d3973
    MOV [0x01cee030],EAX                ; 004d3974 | DAT_01cee030
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d3979
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d397e
    PUSH 0x1                            ; 004d3981
    PUSH 0x5da5b5                       ; 004d3983 | = "Bip01 Spine2"
    PUSH EBX                            ; 004d3988
    MOV [0x01cee034],EAX                ; 004d3989 | DAT_01cee034
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d398e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d3993
    PUSH 0x1                            ; 004d3996
    PUSH 0x5da5c2                       ; 004d3998 | = "Bip01 Head"
    PUSH EBX                            ; 004d399d
    MOV [0x01cee038],EAX                ; 004d399e | DAT_01cee038
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d39a3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d39a8
    PUSH 0x1                            ; 004d39ab
    PUSH 0x5da5cd                       ; 004d39ad | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004d39b2
    MOV [0x01cee00c],EAX                ; 004d39b3 | DAT_01cee00c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d39b8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d39bd
    PUSH 0x1                            ; 004d39c0
    PUSH 0x5da5de                       ; 004d39c2 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004d39c7
    MOV [0x01cee020],EAX                ; 004d39c8 | DAT_01cee020
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d39cd
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d39d2
    PUSH 0x1                            ; 004d39d5
    PUSH 0x5da5ef                       ; 004d39d7 | = "Bip01 Spine"
    PUSH EBX                            ; 004d39dc
    MOV [0x01cee024],EAX                ; 004d39dd | DAT_01cee024
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d39e2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d39e7
    PUSH 0x1                            ; 004d39ea
    PUSH 0x5da5fb                       ; 004d39ec | = "Bip01 Spine2"
    PUSH EBX                            ; 004d39f1
    MOV [0x01cee030],EAX                ; 004d39f2 | DAT_01cee030
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d39f7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d39fc
    PUSH ESI                            ; 004d39ff
    MOV [0x01cee038],EAX                ; 004d3a00 | DAT_01cee038
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 004d3a05
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EDI + 0x10af8],0x0   ; 004d3a0a
    ADD ESP,0x4                         ; 004d3a14
    MOV dword ptr [EDI + 0x10afc],0x0   ; 004d3a17
    POP EDI                             ; 004d3a21
    POP ESI                             ; 004d3a22
    POP EBX                             ; 004d3a23
    RET                                 ; 004d3a24
    PUSH 0x5da500                       ; 004d3a25 | = "hotdemonx.dfm"
        ;   Label: LAB_004d3a25
    JMP 0x004d3873                      ; 004d3a2a
        ;   XREF to: 004d3873 (UNCONDITIONAL_JUMP)  ; LAB_004d3873

