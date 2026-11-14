; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sentinel_cpp_CSentinel_setup_FUN_0052a790(CSentinel *this_ptr)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005e52ac
;   TerminatedCString s_Bip01_L_ForeArm_005e52b7
;   TerminatedCString s_Bip01_R_ForeArm_005e52c7
;   TerminatedCString s_Bip01_L_UpperArm_005e52d7
;   TerminatedCString s_Bip01_R_UpperArm_005e52e8
;   TerminatedCString s_Bip01_L_Foot_005e52f9
;   TerminatedCString s_Bip01_R_Foot_005e5306
;   TerminatedCString s_Bip01_L_Hand_005e5313
;   TerminatedCString s_Bip01_R_Hand_005e5320
;   TerminatedCString s_Bip01_Spine_005e532d
;   TerminatedCString s_Bip01_Spine1_005e5339
;   TerminatedCString s_Bip01_Spine2_005e5346
;   TerminatedCString s_Bip01_Head_005e5353
;   TerminatedCString s_Bip01_L_UpperArm_005e535e
;   TerminatedCString s_Bip01_R_UpperArm_005e536f
;   ... and 14 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a790
        ;   Label: core_sentinel.cpp_CSentinel_setup_FUN_0052a790
    PUSH ESI                            ; 0052a791
    PUSH EDI                            ; 0052a792
    MOV EDI,dword ptr [ESP + 0x10]      ; 0052a793
    PUSH EDI                            ; 0052a797
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 0052a798
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0052a79d
    LEA ESI,[EDI + 0x2b4]               ; 0052a7a0
    PUSH ESI                            ; 0052a7a6
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 0052a7a7
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0052a7ac
    PUSH ESI                            ; 0052a7af
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0052a7b0
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0052a7b5
    PUSH 0x1                            ; 0052a7b8
    PUSH 0x5e52ac                       ; 0052a7ba | = "Bip01 Head"
    PUSH EAX                            ; 0052a7bf
    MOV EBX,EAX                         ; 0052a7c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a7c2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a7c7
    PUSH 0x1                            ; 0052a7ca
    PUSH 0x5e52b7                       ; 0052a7cc | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0052a7d1
    MOV [0x01e6614c],EAX                ; 0052a7d2 | DAT_01e6614c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a7d7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a7dc
    PUSH 0x1                            ; 0052a7df
    PUSH 0x5e52c7                       ; 0052a7e1 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 0052a7e6
    MOV [0x01e66158],EAX                ; 0052a7e7 | DAT_01e66158
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a7ec
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a7f1
    PUSH 0x1                            ; 0052a7f4
    PUSH 0x5e52d7                       ; 0052a7f6 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0052a7fb
    MOV [0x01e6615c],EAX                ; 0052a7fc | DAT_01e6615c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a801
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a806
    PUSH 0x1                            ; 0052a809
    PUSH 0x5e52e8                       ; 0052a80b | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0052a810
    MOV [0x01e66160],EAX                ; 0052a811 | DAT_01e66160
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a816
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a81b
    PUSH 0x1                            ; 0052a81e
    PUSH 0x5e52f9                       ; 0052a820 | = "Bip01 L Foot"
    PUSH EBX                            ; 0052a825
    MOV [0x01e66164],EAX                ; 0052a826 | DAT_01e66164
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a82b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a830
    PUSH 0x1                            ; 0052a833
    PUSH 0x5e5306                       ; 0052a835 | = "Bip01 R Foot"
    PUSH EBX                            ; 0052a83a
    MOV [0x01e66168],EAX                ; 0052a83b | DAT_01e66168
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a840
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a845
    PUSH 0x1                            ; 0052a848
    PUSH 0x5e5313                       ; 0052a84a | = "Bip01 L Hand"
    PUSH EBX                            ; 0052a84f
    MOV [0x01e6616c],EAX                ; 0052a850 | DAT_01e6616c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a855
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a85a
    MOV [0x01e66150],EAX                ; 0052a85d | DAT_01e66150
    PUSH 0x1                            ; 0052a862
    PUSH 0x5e5320                       ; 0052a864 | = "Bip01 R Hand"
    PUSH EBX                            ; 0052a869
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a86a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a86f
    PUSH 0x1                            ; 0052a872
    PUSH 0x5e532d                       ; 0052a874 | = "Bip01 Spine"
    PUSH EBX                            ; 0052a879
    MOV [0x01e66154],EAX                ; 0052a87a | DAT_01e66154
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a87f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a884
    PUSH 0x1                            ; 0052a887
    PUSH 0x5e5339                       ; 0052a889 | = "Bip01 Spine1"
    PUSH EBX                            ; 0052a88e
    MOV [0x01e66170],EAX                ; 0052a88f | DAT_01e66170
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a894
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a899
    PUSH 0x1                            ; 0052a89c
    PUSH 0x5e5346                       ; 0052a89e | = "Bip01 Spine2"
    PUSH EBX                            ; 0052a8a3
    MOV [0x01e66174],EAX                ; 0052a8a4 | DAT_01e66174
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a8a9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a8ae
    PUSH 0x1                            ; 0052a8b1
    PUSH 0x5e5353                       ; 0052a8b3 | = "Bip01 Head"
    PUSH EBX                            ; 0052a8b8
    MOV [0x01e66178],EAX                ; 0052a8b9 | DAT_01e66178
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a8be
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a8c3
    PUSH 0x1                            ; 0052a8c6
    PUSH 0x5e535e                       ; 0052a8c8 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0052a8cd
    MOV [0x01e6614c],EAX                ; 0052a8ce | DAT_01e6614c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a8d3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a8d8
    PUSH 0x1                            ; 0052a8db
    PUSH 0x5e536f                       ; 0052a8dd | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0052a8e2
    MOV [0x01e66160],EAX                ; 0052a8e3 | DAT_01e66160
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a8e8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a8ed
    PUSH 0x1                            ; 0052a8f0
    PUSH 0x5e5380                       ; 0052a8f2 | = "Bip01 Spine"
    PUSH EBX                            ; 0052a8f7
    MOV [0x01e66164],EAX                ; 0052a8f8 | DAT_01e66164
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a8fd
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a902
    PUSH 0x1                            ; 0052a905
    PUSH 0x5e538c                       ; 0052a907 | = "Bip01 Spine2"
    PUSH EBX                            ; 0052a90c
    MOV [0x01e66170],EAX                ; 0052a90d | DAT_01e66170
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0052a912
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0052a917
    PUSH ESI                            ; 0052a91a
    MOV [0x01e66178],EAX                ; 0052a91b | DAT_01e66178
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 0052a920
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EDI + 0x10afc],0x0   ; 0052a925
    ADD ESP,0x4                         ; 0052a92f
    MOV dword ptr [EDI + 0x10af8],0x0   ; 0052a932
    POP EDI                             ; 0052a93c
    POP ESI                             ; 0052a93d
    POP EBX                             ; 0052a93e
    RET                                 ; 0052a93f

