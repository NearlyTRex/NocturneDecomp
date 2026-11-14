; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_setup_FUN_004d6660(CImp *this_ptr)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005da936
;   TerminatedCString s_Bip01_L_ForeArm_005da941
;   TerminatedCString s_Bip01_R_ForeArm_005da951
;   TerminatedCString s_Bip01_L_UpperArm_005da961
;   TerminatedCString s_Bip01_R_UpperArm_005da972
;   TerminatedCString s_Bip01_L_Foot_005da983
;   TerminatedCString s_Bip01_R_Foot_005da990
;   TerminatedCString s_Bip01_L_Hand_005da99d
;   TerminatedCString s_Bip01_R_Hand_005da9aa
;   TerminatedCString s_Bip01_Spine_005da9b7
;   TerminatedCString s_Bip01_Spine1_005da9c3
;   TerminatedCString s_Bip01_Spine2_005da9d0
;   TerminatedCString s_Bip01_Head_005da9dd
;   TerminatedCString s_Bip01_L_UpperArm_005da9e8
;   TerminatedCString s_Bip01_R_UpperArm_005da9f9
;   ... and 25 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6660
        ;   Label: core_imp.cpp_CImp_setup_FUN_004d6660
    PUSH ESI                            ; 004d6661
    SUB ESP,0x4                         ; 004d6662
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d6665
    PUSH EDI                            ; 004d6669
    PUSH EBX                            ; 004d666a
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 004d666b
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004d6670
    LEA EDI,[EBX + 0x2b4]               ; 004d6673
    PUSH EDI                            ; 004d6679
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 004d667a
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d667f
    PUSH EDI                            ; 004d6682
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004d6683
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d6688
    PUSH 0x1                            ; 004d668b
    PUSH 0x5da936                       ; 004d668d | = "Bip01 Head"
    PUSH EAX                            ; 004d6692
    MOV ESI,EAX                         ; 004d6693
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d6695
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d669a
    PUSH 0x1                            ; 004d669d
    PUSH 0x5da941                       ; 004d669f | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004d66a4
    MOV [0x01cee138],EAX                ; 004d66a5 | DAT_01cee138
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d66aa
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d66af
    PUSH 0x1                            ; 004d66b2
    PUSH 0x5da951                       ; 004d66b4 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004d66b9
    MOV [0x01cee144],EAX                ; 004d66ba | DAT_01cee144
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d66bf
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d66c4
    PUSH 0x1                            ; 004d66c7
    PUSH 0x5da961                       ; 004d66c9 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004d66ce
    MOV [0x01cee148],EAX                ; 004d66cf | DAT_01cee148
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d66d4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d66d9
    PUSH 0x1                            ; 004d66dc
    PUSH 0x5da972                       ; 004d66de | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004d66e3
    MOV [0x01cee14c],EAX                ; 004d66e4 | DAT_01cee14c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d66e9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d66ee
    PUSH 0x1                            ; 004d66f1
    PUSH 0x5da983                       ; 004d66f3 | = "Bip01 L Foot"
    PUSH ESI                            ; 004d66f8
    MOV [0x01cee150],EAX                ; 004d66f9 | DAT_01cee150
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d66fe
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d6703
    PUSH 0x1                            ; 004d6706
    PUSH 0x5da990                       ; 004d6708 | = "Bip01 R Foot"
    PUSH ESI                            ; 004d670d
    MOV [0x01cee154],EAX                ; 004d670e | DAT_01cee154
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d6713
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d6718
    PUSH 0x1                            ; 004d671b
    PUSH 0x5da99d                       ; 004d671d | = "Bip01 L Hand"
    PUSH ESI                            ; 004d6722
    MOV [0x01cee158],EAX                ; 004d6723 | DAT_01cee158
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d6728
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d672d
    MOV [0x01cee13c],EAX                ; 004d6730 | DAT_01cee13c
    PUSH 0x1                            ; 004d6735
    PUSH 0x5da9aa                       ; 004d6737 | = "Bip01 R Hand"
    PUSH ESI                            ; 004d673c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d673d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d6742
    PUSH 0x1                            ; 004d6745
    PUSH 0x5da9b7                       ; 004d6747 | = "Bip01 Spine"
    PUSH ESI                            ; 004d674c
    MOV [0x01cee140],EAX                ; 004d674d | DAT_01cee140
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d6752
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d6757
    PUSH 0x1                            ; 004d675a
    PUSH 0x5da9c3                       ; 004d675c | = "Bip01 Spine1"
    PUSH ESI                            ; 004d6761
    MOV [0x01cee15c],EAX                ; 004d6762 | DAT_01cee15c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d6767
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d676c
    PUSH 0x1                            ; 004d676f
    PUSH 0x5da9d0                       ; 004d6771 | = "Bip01 Spine2"
    PUSH ESI                            ; 004d6776
    MOV [0x01cee160],EAX                ; 004d6777 | DAT_01cee160
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d677c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d6781
    PUSH 0x1                            ; 004d6784
    PUSH 0x5da9dd                       ; 004d6786 | = "Bip01 Head"
    PUSH ESI                            ; 004d678b
    MOV [0x01cee164],EAX                ; 004d678c | DAT_01cee164
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d6791
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d6796
    PUSH 0x1                            ; 004d6799
    PUSH 0x5da9e8                       ; 004d679b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004d67a0
    MOV [0x01cee138],EAX                ; 004d67a1 | DAT_01cee138
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d67a6
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d67ab
    PUSH 0x1                            ; 004d67ae
    PUSH 0x5da9f9                       ; 004d67b0 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004d67b5
    MOV [0x01cee14c],EAX                ; 004d67b6 | DAT_01cee14c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d67bb
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d67c0
    PUSH 0x1                            ; 004d67c3
    PUSH 0x5daa0a                       ; 004d67c5 | = "Bip01 Spine"
    PUSH ESI                            ; 004d67ca
    MOV [0x01cee150],EAX                ; 004d67cb | DAT_01cee150
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d67d0
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d67d5
    PUSH 0x1                            ; 004d67d8
    PUSH 0x5daa16                       ; 004d67da | = "Bip01 Spine2"
    PUSH ESI                            ; 004d67df
    MOV [0x01cee15c],EAX                ; 004d67e0 | DAT_01cee15c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d67e5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d67ea
    PUSH EDI                            ; 004d67ed
    MOV [0x01cee164],EAX                ; 004d67ee | DAT_01cee164
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 004d67f3
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 004d67f8
    ADD ESP,0x4                         ; 004d67fa
    POP EDI                             ; 004d67fd
    PUSH 0x1                            ; 004d67fe
    PUSH 0x5daa23                       ; 004d6800 | = "larm01"
    PUSH EAX                            ; 004d6805
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004d6806
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004d680b
    PUSH 0x1                            ; 004d680e
    PUSH 0x5daa2a                       ; 004d6810 | = "l4arm01"
    PUSH ESI                            ; 004d6815
    MOV dword ptr [EBX + 0x10b04],EAX   ; 004d6816
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004d681c
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004d6821
    PUSH 0x1                            ; 004d6824
    PUSH 0x5daa32                       ; 004d6826 | = "rarm01"
    PUSH ESI                            ; 004d682b
    MOV dword ptr [EBX + 0x10b08],EAX   ; 004d682c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004d6832
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004d6837
    PUSH 0x1                            ; 004d683a
    PUSH 0x5daa39                       ; 004d683c | = "r4arm01"
    PUSH ESI                            ; 004d6841
    MOV dword ptr [EBX + 0x10b0c],EAX   ; 004d6842
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004d6848
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004d684d
    PUSH 0x1                            ; 004d6850
    PUSH 0x5daa41                       ; 004d6852 | = "rthigh01"
    PUSH ESI                            ; 004d6857
    MOV dword ptr [EBX + 0x10b10],EAX   ; 004d6858
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004d685e
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004d6863
    PUSH 0x1                            ; 004d6866
    PUSH 0x5daa4a                       ; 004d6868 | = "rshin01"
    PUSH ESI                            ; 004d686d
    MOV dword ptr [EBX + 0x10b14],EAX   ; 004d686e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004d6874
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004d6879
    PUSH 0x1                            ; 004d687c
    PUSH 0x5daa52                       ; 004d687e | = "lthigh01"
    PUSH ESI                            ; 004d6883
    MOV dword ptr [EBX + 0x10b18],EAX   ; 004d6884
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004d688a
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004d688f
    PUSH 0x1                            ; 004d6892
    PUSH 0x5daa5b                       ; 004d6894 | = "lshin01"
    PUSH ESI                            ; 004d6899
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 004d689a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004d68a0
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004d68a5
    PUSH 0x1                            ; 004d68a8
    PUSH 0x5daa63                       ; 004d68aa | = "ass01"
    PUSH ESI                            ; 004d68af
    MOV dword ptr [EBX + 0x10b20],EAX   ; 004d68b0
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004d68b6
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004d68bb
    MOV dword ptr [EBX + 0x10b24],EAX   ; 004d68be
    PUSH 0x1                            ; 004d68c4
    PUSH 0x5daa69                       ; 004d68c6 | = "torso01"
    PUSH ESI                            ; 004d68cb
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004d68cc
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004d68d1
    PUSH 0x1                            ; 004d68d4
    PUSH 0x5daa71                       ; 004d68d6 | = "head01"
    PUSH ESI                            ; 004d68db
    MOV dword ptr [EBX + 0x10b28],EAX   ; 004d68dc
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004d68e2
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0x10af8],0x0   ; 004d68e7
    MOV dword ptr [EBX + 0x10afc],0x0   ; 004d68f1
    MOV dword ptr [EBX + 0x10b2c],EAX   ; 004d68fb
    MOV EAX,[0x01cee13c]                ; 004d6901 | DAT_01cee13c
    MOV dword ptr [EBX + 0x2618],EAX    ; 004d6906
    MOV EAX,dword ptr [EBX + 0x10b08]   ; 004d690c
    MOV dword ptr [EBX + 0x261c],EAX    ; 004d6912
    MOV EAX,[0x01cee140]                ; 004d6918 | DAT_01cee140
    ADD ESP,0xc                         ; 004d691d
    MOV dword ptr [EBX + 0x2690],EAX    ; 004d6920
    PUSH 0x41a00000                     ; 004d6926
    MOV EAX,dword ptr [EBX + 0x10b10]   ; 004d692b
    PUSH 0x41200000                     ; 004d6931
    MOV dword ptr [EBX + 0x2694],EAX    ; 004d6936
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004d693c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 004d6941
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d6945
    MOV dword ptr [EBX + 0x10b00],EAX   ; 004d6949
    ADD ESP,0x8                         ; 004d694f
    ADD ESP,0x4                         ; 004d6952
    POP ESI                             ; 004d6955
    POP EBX                             ; 004d6956
    RET                                 ; 004d6957

