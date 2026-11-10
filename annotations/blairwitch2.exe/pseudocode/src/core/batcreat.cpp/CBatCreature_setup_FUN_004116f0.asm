; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_CBatCreature_setup_FUN_004116f0(CBatCreature *this_ptr)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005cb728
;   TerminatedCString s_Bip01_L_ForeArm_005cb733
;   TerminatedCString s_Bip01_R_ForeArm_005cb743
;   TerminatedCString s_Bip01_L_UpperArm_005cb753
;   TerminatedCString s_Bip01_R_UpperArm_005cb764
;   TerminatedCString s_Bip01_L_Foot_005cb775
;   TerminatedCString s_Bip01_R_Foot_005cb782
;   TerminatedCString s_Bip01_L_Hand_005cb78f
;   TerminatedCString s_Bip01_R_Hand_005cb79c
;   TerminatedCString s_Bip01_Spine_005cb7a9
;   TerminatedCString s_Bip01_Spine1_005cb7b5
;   TerminatedCString s_Bip01_Spine2_005cb7c2
;   TerminatedCString s_Bip01_Head_005cb7cf
;   TerminatedCString s_Bip01_L_UpperArm_005cb7da
;   TerminatedCString s_Bip01_R_UpperArm_005cb7eb
;   ... and 28 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004116f0
        ;   Label: core_batcreat.cpp_CBatCreature_setup_FUN_004116f0
    PUSH ESI                            ; 004116f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004116f2
    PUSH EDI                            ; 004116f6
    PUSH EBX                            ; 004116f7
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 004116f8
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004116fd
    LEA EDI,[EBX + 0x2b4]               ; 00411700
    PUSH EDI                            ; 00411706
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 00411707
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041170c
    PUSH EDI                            ; 0041170f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00411710
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00411715
    PUSH 0x1                            ; 00411718
    PUSH 0x5cb728                       ; 0041171a | = "Bip01 Head"
    PUSH EAX                            ; 0041171f
    MOV ESI,EAX                         ; 00411720
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00411722
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00411727
    PUSH 0x1                            ; 0041172a
    PUSH 0x5cb733                       ; 0041172c | = "Bip01 L ForeArm"
    PUSH ESI                            ; 00411731
    MOV [0x007bc74c],EAX                ; 00411732 | DAT_007bc74c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00411737
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041173c
    PUSH 0x1                            ; 0041173f
    PUSH 0x5cb743                       ; 00411741 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 00411746
    MOV [0x007bc758],EAX                ; 00411747 | DAT_007bc758
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0041174c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00411751
    PUSH 0x1                            ; 00411754
    PUSH 0x5cb753                       ; 00411756 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0041175b
    MOV [0x007bc75c],EAX                ; 0041175c | DAT_007bc75c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00411761
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00411766
    PUSH 0x1                            ; 00411769
    PUSH 0x5cb764                       ; 0041176b | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00411770
    MOV [0x007bc760],EAX                ; 00411771 | DAT_007bc760
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00411776
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041177b
    PUSH 0x1                            ; 0041177e
    PUSH 0x5cb775                       ; 00411780 | = "Bip01 L Foot"
    PUSH ESI                            ; 00411785
    MOV [0x007bc764],EAX                ; 00411786 | DAT_007bc764
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0041178b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00411790
    PUSH 0x1                            ; 00411793
    PUSH 0x5cb782                       ; 00411795 | = "Bip01 R Foot"
    PUSH ESI                            ; 0041179a
    MOV [0x007bc768],EAX                ; 0041179b | DAT_007bc768
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004117a0
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004117a5
    PUSH 0x1                            ; 004117a8
    PUSH 0x5cb78f                       ; 004117aa | = "Bip01 L Hand"
    PUSH ESI                            ; 004117af
    MOV [0x007bc76c],EAX                ; 004117b0 | DAT_007bc76c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004117b5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004117ba
    MOV [0x007bc750],EAX                ; 004117bd | DAT_007bc750
    PUSH 0x1                            ; 004117c2
    PUSH 0x5cb79c                       ; 004117c4 | = "Bip01 R Hand"
    PUSH ESI                            ; 004117c9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004117ca
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004117cf
    PUSH 0x1                            ; 004117d2
    PUSH 0x5cb7a9                       ; 004117d4 | = "Bip01 Spine"
    PUSH ESI                            ; 004117d9
    MOV [0x007bc754],EAX                ; 004117da | DAT_007bc754
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004117df
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004117e4
    PUSH 0x1                            ; 004117e7
    PUSH 0x5cb7b5                       ; 004117e9 | = "Bip01 Spine1"
    PUSH ESI                            ; 004117ee
    MOV [0x007bc770],EAX                ; 004117ef | DAT_007bc770
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004117f4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004117f9
    PUSH 0x1                            ; 004117fc
    PUSH 0x5cb7c2                       ; 004117fe | = "Bip01 Spine2"
    PUSH ESI                            ; 00411803
    MOV [0x007bc774],EAX                ; 00411804 | DAT_007bc774
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00411809
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041180e
    PUSH 0x1                            ; 00411811
    PUSH 0x5cb7cf                       ; 00411813 | = "Bip01 Head"
    PUSH ESI                            ; 00411818
    MOV [0x007bc778],EAX                ; 00411819 | DAT_007bc778
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0041181e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00411823
    PUSH 0x1                            ; 00411826
    PUSH 0x5cb7da                       ; 00411828 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0041182d
    MOV [0x007bc74c],EAX                ; 0041182e | DAT_007bc74c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00411833
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00411838
    PUSH 0x1                            ; 0041183b
    PUSH 0x5cb7eb                       ; 0041183d | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00411842
    MOV [0x007bc760],EAX                ; 00411843 | DAT_007bc760
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00411848
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041184d
    PUSH 0x1                            ; 00411850
    PUSH 0x5cb7fc                       ; 00411852 | = "Bip01 Spine"
    PUSH ESI                            ; 00411857
    MOV [0x007bc764],EAX                ; 00411858 | DAT_007bc764
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0041185d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00411862
    PUSH 0x1                            ; 00411865
    PUSH 0x5cb808                       ; 00411867 | = "Bip01 Spine2"
    PUSH ESI                            ; 0041186c
    MOV [0x007bc770],EAX                ; 0041186d | DAT_007bc770
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00411872
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00411877
    PUSH EDI                            ; 0041187a
    MOV [0x007bc778],EAX                ; 0041187b | DAT_007bc778
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00411880
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 00411885
    ADD ESP,0x4                         ; 00411887
    POP EDI                             ; 0041188a
    PUSH 0x1                            ; 0041188b
    PUSH 0x5cb815                       ; 0041188d | = "head01"
    PUSH EAX                            ; 00411892
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00411893
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00411898
    PUSH 0x1                            ; 0041189b
    PUSH 0x5cb81c                       ; 0041189d | = "torso01"
    PUSH ESI                            ; 004118a2
    MOV dword ptr [EBX + 0x10af8],EAX   ; 004118a3
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004118a9
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004118ae
    PUSH 0x1                            ; 004118b1
    PUSH 0x5cb824                       ; 004118b3 | = "ass01"
    PUSH ESI                            ; 004118b8
    MOV dword ptr [EBX + 0x10afc],EAX   ; 004118b9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004118bf
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004118c4
    PUSH 0x1                            ; 004118c7
    PUSH 0x5cb82a                       ; 004118c9 | = "tail01"
    PUSH ESI                            ; 004118ce
    MOV dword ptr [EBX + 0x10b00],EAX   ; 004118cf
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004118d5
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004118da
    PUSH 0x1                            ; 004118dd
    PUSH 0x5cb831                       ; 004118df | = "lthigh01"
    PUSH ESI                            ; 004118e4
    MOV dword ptr [EBX + 0x10b04],EAX   ; 004118e5
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004118eb
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004118f0
    PUSH 0x1                            ; 004118f3
    PUSH 0x5cb83a                       ; 004118f5 | = "lshin01"
    PUSH ESI                            ; 004118fa
    MOV dword ptr [EBX + 0x10b08],EAX   ; 004118fb
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00411901
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00411906
    PUSH 0x1                            ; 00411909
    PUSH 0x5cb842                       ; 0041190b | = "rthigh01"
    PUSH ESI                            ; 00411910
    MOV dword ptr [EBX + 0x10b0c],EAX   ; 00411911
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00411917
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041191c
    PUSH 0x1                            ; 0041191f
    PUSH 0x5cb84b                       ; 00411921 | = "rshin01"
    PUSH ESI                            ; 00411926
    MOV dword ptr [EBX + 0x10b10],EAX   ; 00411927
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 0041192d
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00411932
    PUSH 0x1                            ; 00411935
    PUSH 0x5cb853                       ; 00411937 | = "larm01"
    PUSH ESI                            ; 0041193c
    MOV dword ptr [EBX + 0x10b14],EAX   ; 0041193d
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00411943
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00411948
    MOV dword ptr [EBX + 0x10b18],EAX   ; 0041194b
    PUSH 0x1                            ; 00411951
    PUSH 0x5cb85a                       ; 00411953 | = "l4arm01"
    PUSH ESI                            ; 00411958
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00411959
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041195e
    PUSH 0x1                            ; 00411961
    PUSH 0x5cb862                       ; 00411963 | = "rarm01"
    PUSH ESI                            ; 00411968
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 00411969
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 0041196f
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00411974
    PUSH 0x1                            ; 00411977
    PUSH 0x5cb869                       ; 00411979 | = "r4arm01"
    PUSH ESI                            ; 0041197e
    MOV dword ptr [EBX + 0x10b20],EAX   ; 0041197f
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00411985
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041198a
    PUSH 0x1                            ; 0041198d
    PUSH 0x5cb871                       ; 0041198f | = "lwing"
    PUSH ESI                            ; 00411994
    MOV dword ptr [EBX + 0x10b24],EAX   ; 00411995
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 0041199b
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004119a0
    PUSH 0x1                            ; 004119a3
    PUSH 0x5cb877                       ; 004119a5 | = "rwing"
    PUSH ESI                            ; 004119aa
    MOV dword ptr [EBX + 0x10b28],EAX   ; 004119ab
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004119b1
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0x10b30],0x0   ; 004119b6
    MOV dword ptr [EBX + 0x10b34],0x0   ; 004119c0
    MOV dword ptr [EBX + 0x10b38],0x0   ; 004119ca
    MOV dword ptr [EBX + 0x10b3c],0x0   ; 004119d4
    ADD ESP,0xc                         ; 004119de
    MOV dword ptr [EBX + 0x10b2c],EAX   ; 004119e1
    POP ESI                             ; 004119e7
    POP EBX                             ; 004119e8
    RET                                 ; 004119e9

