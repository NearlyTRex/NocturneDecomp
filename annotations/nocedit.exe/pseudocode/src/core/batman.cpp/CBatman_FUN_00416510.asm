; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_batman.cpp_CBatman_FUN_00416510(CBatman * this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_006156f0
;   TerminatedCString s_Bip01_L_ForeArm_006156fb
;   TerminatedCString s_Bip01_R_ForeArm_0061570b
;   TerminatedCString s_Bip01_L_UpperArm_0061571b
;   TerminatedCString s_Bip01_R_UpperArm_0061572c
;   TerminatedCString s_Bip01_L_Foot_0061573d
;   TerminatedCString s_Bip01_R_Foot_0061574a
;   TerminatedCString s_Bip01_L_Hand_00615757
;   TerminatedCString s_Bip01_R_Hand_00615764
;   TerminatedCString s_Bip01_Spine_00615771
;   TerminatedCString s_Bip01_Spine1_0061577d
;   TerminatedCString s_Bip01_Spine2_0061578a
;   TerminatedCString s_Bip01_Head_00615797
;   TerminatedCString s_Bip01_L_UpperArm_006157a2
;   TerminatedCString s_Bip01_R_UpperArm_006157b3
;   ... and 28 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_FUN_004a9650
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416510
        ;   Label: core_batman.cpp_CBatman_FUN_00416510
    PUSH ESI                            ; 00416511
    PUSH EDI                            ; 00416512
    MOV ESI,dword ptr [ESP + 0x10]      ; 00416513
    PUSH ESI                            ; 00416517
    CALL core_enemy.cpp_CEnemy_FUN_004a9650 ; 00416518
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041651d
    LEA EDI,[ESI + 0x158]               ; 00416520
    PUSH EDI                            ; 00416526
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00416527
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041652c
    PUSH EDI                            ; 0041652f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00416530
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00416535
    PUSH 0x1                            ; 00416538
    PUSH 0x6156f0                       ; 0041653a | = "Bip01 Head"
    PUSH EAX                            ; 0041653f
    MOV EBX,EAX                         ; 00416540
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00416542
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00416547
    PUSH 0x1                            ; 0041654a
    PUSH 0x6156fb                       ; 0041654c | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00416551
    MOV [0x008227b8],EAX                ; 00416552 | DAT_008227b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00416557
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041655c
    PUSH 0x1                            ; 0041655f
    PUSH 0x61570b                       ; 00416561 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00416566
    MOV [0x008227c4],EAX                ; 00416567 | DAT_008227c4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041656c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00416571
    PUSH 0x1                            ; 00416574
    PUSH 0x61571b                       ; 00416576 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0041657b
    MOV [0x008227c8],EAX                ; 0041657c | DAT_008227c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00416581
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00416586
    PUSH 0x1                            ; 00416589
    PUSH 0x61572c                       ; 0041658b | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00416590
    MOV [0x008227cc],EAX                ; 00416591 | DAT_008227cc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00416596
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041659b
    PUSH 0x1                            ; 0041659e
    PUSH 0x61573d                       ; 004165a0 | = "Bip01 L Foot"
    PUSH EBX                            ; 004165a5
    MOV [0x008227d0],EAX                ; 004165a6 | DAT_008227d0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004165ab
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004165b0
    PUSH 0x1                            ; 004165b3
    PUSH 0x61574a                       ; 004165b5 | = "Bip01 R Foot"
    PUSH EBX                            ; 004165ba
    MOV [0x008227d4],EAX                ; 004165bb | DAT_008227d4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004165c0
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004165c5
    PUSH 0x1                            ; 004165c8
    PUSH 0x615757                       ; 004165ca | = "Bip01 L Hand"
    PUSH EBX                            ; 004165cf
    MOV [0x008227d8],EAX                ; 004165d0 | DAT_008227d8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004165d5
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004165da
    MOV [0x008227bc],EAX                ; 004165dd | DAT_008227bc
    PUSH 0x1                            ; 004165e2
    PUSH 0x615764                       ; 004165e4 | = "Bip01 R Hand"
    PUSH EBX                            ; 004165e9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004165ea
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004165ef
    PUSH 0x1                            ; 004165f2
    PUSH 0x615771                       ; 004165f4 | = "Bip01 Spine"
    PUSH EBX                            ; 004165f9
    MOV [0x008227c0],EAX                ; 004165fa | DAT_008227c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004165ff
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00416604
    PUSH 0x1                            ; 00416607
    PUSH 0x61577d                       ; 00416609 | = "Bip01 Spine1"
    PUSH EBX                            ; 0041660e
    MOV [0x008227dc],EAX                ; 0041660f | DAT_008227dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00416614
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00416619
    PUSH 0x1                            ; 0041661c
    PUSH 0x61578a                       ; 0041661e | = "Bip01 Spine2"
    PUSH EBX                            ; 00416623
    MOV [0x008227e0],EAX                ; 00416624 | DAT_008227e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00416629
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041662e
    PUSH 0x1                            ; 00416631
    PUSH 0x615797                       ; 00416633 | = "Bip01 Head"
    PUSH EBX                            ; 00416638
    MOV [0x008227e4],EAX                ; 00416639 | DAT_008227e4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041663e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00416643
    PUSH 0x1                            ; 00416646
    PUSH 0x6157a2                       ; 00416648 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0041664d
    MOV [0x008227b8],EAX                ; 0041664e | DAT_008227b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00416653
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00416658
    PUSH 0x1                            ; 0041665b
    PUSH 0x6157b3                       ; 0041665d | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00416662
    MOV [0x008227cc],EAX                ; 00416663 | DAT_008227cc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00416668
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0041666d
    PUSH 0x1                            ; 00416670
    PUSH 0x6157c4                       ; 00416672 | = "Bip01 Spine"
    PUSH EBX                            ; 00416677
    MOV [0x008227d0],EAX                ; 00416678 | DAT_008227d0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0041667d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00416682
    PUSH 0x1                            ; 00416685
    PUSH 0x6157d0                       ; 00416687 | = "Bip01 Spine2"
    PUSH EBX                            ; 0041668c
    MOV [0x008227dc],EAX                ; 0041668d | DAT_008227dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00416692
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00416697
    PUSH EDI                            ; 0041669a
    MOV [0x008227e4],EAX                ; 0041669b | DAT_008227e4
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 004166a0
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV EBX,EAX                         ; 004166a5
    ADD ESP,0x4                         ; 004166a7
    PUSH 0x1                            ; 004166aa
    PUSH 0x6157dd                       ; 004166ac | = "head01"
    PUSH EAX                            ; 004166b1
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004166b2
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004166b7
    PUSH 0x1                            ; 004166ba
    PUSH 0x6157e4                       ; 004166bc | = "torso01"
    PUSH EBX                            ; 004166c1
    MOV dword ptr [ESI + 0xbf20],EAX    ; 004166c2
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004166c8
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004166cd
    PUSH 0x1                            ; 004166d0
    PUSH 0x6157ec                       ; 004166d2 | = "larm01"
    PUSH EBX                            ; 004166d7
    MOV dword ptr [ESI + 0xbf24],EAX    ; 004166d8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004166de
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004166e3
    PUSH 0x1                            ; 004166e6
    PUSH 0x6157f3                       ; 004166e8 | = "l4arm01"
    PUSH EBX                            ; 004166ed
    MOV dword ptr [ESI + 0xbf28],EAX    ; 004166ee
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004166f4
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004166f9
    PUSH 0x1                            ; 004166fc
    PUSH 0x6157fb                       ; 004166fe | = "rarm01"
    PUSH EBX                            ; 00416703
    MOV dword ptr [ESI + 0xbf2c],EAX    ; 00416704
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0041670a
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041670f
    PUSH 0x1                            ; 00416712
    PUSH 0x615802                       ; 00416714 | = "r4arm01"
    PUSH EBX                            ; 00416719
    MOV dword ptr [ESI + 0xbf30],EAX    ; 0041671a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00416720
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00416725
    PUSH 0x1                            ; 00416728
    PUSH 0x61580a                       ; 0041672a | = "ass01"
    PUSH EBX                            ; 0041672f
    MOV dword ptr [ESI + 0xbf34],EAX    ; 00416730
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00416736
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041673b
    PUSH 0x1                            ; 0041673e
    PUSH 0x615810                       ; 00416740 | = "tail01"
    PUSH EBX                            ; 00416745
    MOV dword ptr [ESI + 0xbf38],EAX    ; 00416746
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0041674c
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00416751
    PUSH 0x1                            ; 00416754
    PUSH 0x615817                       ; 00416756 | = "lthigh01"
    PUSH EBX                            ; 0041675b
    MOV dword ptr [ESI + 0xbf3c],EAX    ; 0041675c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00416762
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00416767
    MOV dword ptr [ESI + 0xbf40],EAX    ; 0041676a
    PUSH 0x1                            ; 00416770
    PUSH 0x615820                       ; 00416772 | = "lshin01"
    PUSH EBX                            ; 00416777
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00416778
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0041677d
    PUSH 0x1                            ; 00416780
    PUSH 0x615828                       ; 00416782 | = "rthigh01"
    PUSH EBX                            ; 00416787
    MOV dword ptr [ESI + 0xbf44],EAX    ; 00416788
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0041678e
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00416793
    PUSH 0x1                            ; 00416796
    PUSH 0x615831                       ; 00416798 | = "rshin01"
    PUSH EBX                            ; 0041679d
    MOV dword ptr [ESI + 0xbf48],EAX    ; 0041679e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004167a4
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004167a9
    PUSH 0x1                            ; 004167ac
    PUSH 0x615839                       ; 004167ae | = "lfoot01"
    PUSH EBX                            ; 004167b3
    MOV dword ptr [ESI + 0xbf4c],EAX    ; 004167b4
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004167ba
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004167bf
    PUSH 0x1                            ; 004167c2
    PUSH 0x615841                       ; 004167c4 | = "rfoot01"
    PUSH EBX                            ; 004167c9
    MOV dword ptr [ESI + 0xbf50],EAX    ; 004167ca
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004167d0
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004167d5
    MOV dword ptr [ESI + 0xbf54],EAX    ; 004167d8
    POP EDI                             ; 004167de
    POP ESI                             ; 004167df
    POP EBX                             ; 004167e0
    RET                                 ; 004167e1

