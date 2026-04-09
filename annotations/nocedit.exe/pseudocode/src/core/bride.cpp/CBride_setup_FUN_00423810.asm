; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bride_cpp_CBride_setup_FUN_00423810(CBride *this_ptr)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_00616ac0
;   TerminatedCString s_Bip01_L_ForeArm_00616acb
;   TerminatedCString s_Bip01_R_ForeArm_00616adb
;   TerminatedCString s_Bip01_L_Foot_00616aeb
;   TerminatedCString s_Bip01_R_Foot_00616af8
;   TerminatedCString s_Bip01_L_Hand_00616b05
;   TerminatedCString s_Bip01_R_Hand_00616b12
;   TerminatedCString s_Bip01_L_UpperArm_00616b1f
;   TerminatedCString s_Bip01_R_UpperArm_00616b30
;   TerminatedCString s_Bip01_Spine_00616b41
;   TerminatedCString s_Bip01_Spine2_00616b4d
;   TerminatedCString s_lshoulderpiece_00616b5a
;   TerminatedCString s_l4armpiece_00616b69
;   TerminatedCString s_rshoulderpiece_00616b74
;   TerminatedCString s_r4armpiece_00616b83
;   ... and 16 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423810
        ;   Label: core_bride.cpp_CBride_setup_FUN_00423810
    PUSH ESI                            ; 00423811
    SUB ESP,0x4                         ; 00423812
    MOV EBX,dword ptr [ESP + 0x10]      ; 00423815
    PUSH EDI                            ; 00423819
    LEA EDI,[EBX + 0x158]               ; 0042381a
    PUSH EDI                            ; 00423820
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00423821
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00423826
    PUSH EDI                            ; 00423829
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042382a
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042382f
    PUSH 0x1                            ; 00423832
    PUSH 0x616ac0                       ; 00423834 | = "Bip01 Head"
    PUSH EAX                            ; 00423839
    MOV ESI,EAX                         ; 0042383a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0042383c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00423841
    PUSH 0x1                            ; 00423844
    PUSH 0x616acb                       ; 00423846 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0042384b
    MOV [0x00822cdc],EAX                ; 0042384c | g_BrideIndices
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00423851
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00423856
    PUSH 0x1                            ; 00423859
    PUSH 0x616adb                       ; 0042385b | = "Bip01 R ForeArm"
    PUSH ESI                            ; 00423860
    MOV [0x00822ce8],EAX                ; 00423861 | g_BrideIndices[3]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00423866
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0042386b
    PUSH 0x1                            ; 0042386e
    PUSH 0x616aeb                       ; 00423870 | = "Bip01 L Foot"
    PUSH ESI                            ; 00423875
    MOV [0x00822cec],EAX                ; 00423876 | g_BrideIndices[4]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0042387b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00423880
    PUSH 0x1                            ; 00423883
    PUSH 0x616af8                       ; 00423885 | = "Bip01 R Foot"
    PUSH ESI                            ; 0042388a
    MOV [0x00822cf8],EAX                ; 0042388b | g_BrideIndices[7]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00423890
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00423895
    PUSH 0x1                            ; 00423898
    PUSH 0x616b05                       ; 0042389a | = "Bip01 L Hand"
    PUSH ESI                            ; 0042389f
    MOV [0x00822cfc],EAX                ; 004238a0 | g_BrideIndices[8]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004238a5
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004238aa
    PUSH 0x1                            ; 004238ad
    PUSH 0x616b12                       ; 004238af | = "Bip01 R Hand"
    PUSH ESI                            ; 004238b4
    MOV [0x00822ce0],EAX                ; 004238b5 | g_BrideIndices[1]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004238ba
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004238bf
    PUSH 0x1                            ; 004238c2
    PUSH 0x616b1f                       ; 004238c4 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004238c9
    MOV [0x00822ce4],EAX                ; 004238ca | g_BrideIndices[2]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004238cf
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004238d4
    PUSH 0x1                            ; 004238d7
    PUSH 0x616b30                       ; 004238d9 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004238de
    MOV [0x00822cf0],EAX                ; 004238df | g_BrideIndices[5]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004238e4
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004238e9
    MOV [0x00822cf4],EAX                ; 004238ec | g_BrideIndices[6]
    PUSH 0x1                            ; 004238f1
    PUSH 0x616b41                       ; 004238f3 | = "Bip01 Spine"
    PUSH ESI                            ; 004238f8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004238f9
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004238fe
    PUSH 0x1                            ; 00423901
    PUSH 0x616b4d                       ; 00423903 | = "Bip01 Spine2"
    PUSH ESI                            ; 00423908
    MOV [0x00822d00],EAX                ; 00423909 | g_BrideIndices[9]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0042390e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00423913
    PUSH EDI                            ; 00423916
    MOV [0x00822d04],EAX                ; 00423917 | g_BrideIndices[10]
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0042391c
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00423921
    PUSH 0x1                            ; 00423924
    PUSH 0x616b5a                       ; 00423926 | = "lshoulderpiece"
    PUSH EAX                            ; 0042392b
    MOV ESI,EAX                         ; 0042392c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0042392e
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00423933
    PUSH 0x1                            ; 00423936
    PUSH 0x616b69                       ; 00423938 | = "l4armpiece"
    PUSH ESI                            ; 0042393d
    MOV dword ptr [EBX + 0xbebc],EAX    ; 0042393e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00423944
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00423949
    PUSH 0x1                            ; 0042394c
    PUSH 0x616b74                       ; 0042394e | = "rshoulderpiece"
    PUSH ESI                            ; 00423953
    MOV dword ptr [EBX + 0xbec0],EAX    ; 00423954
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0042395a
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042395f
    PUSH 0x1                            ; 00423962
    PUSH 0x616b83                       ; 00423964 | = "r4armpiece"
    PUSH ESI                            ; 00423969
    MOV dword ptr [EBX + 0xbec4],EAX    ; 0042396a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00423970
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00423975
    PUSH 0x1                            ; 00423978
    PUSH 0x616b8e                       ; 0042397a | = "lshinpiece"
    PUSH ESI                            ; 0042397f
    MOV dword ptr [EBX + 0xbec8],EAX    ; 00423980
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00423986
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0042398b
    PUSH 0x1                            ; 0042398e
    PUSH 0x616b99                       ; 00423990 | = "rshinpiece"
    PUSH ESI                            ; 00423995
    MOV dword ptr [EBX + 0xbecc],EAX    ; 00423996
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0042399c
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004239a1
    PUSH 0x1                            ; 004239a4
    PUSH 0x616ba4                       ; 004239a6 | = "torsopiece"
    PUSH ESI                            ; 004239ab
    MOV dword ptr [EBX + 0xbed0],EAX    ; 004239ac
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004239b2
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004239b7
    MOV dword ptr [EBX + 0xbed4],EAX    ; 004239ba
    POP EDI                             ; 004239c0
    PUSH 0x1                            ; 004239c1
    PUSH 0x616baf                       ; 004239c3 | = "lowerbodypiece"
    PUSH ESI                            ; 004239c8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004239c9
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004239ce
    PUSH 0x1                            ; 004239d1
    PUSH 0x616bbe                       ; 004239d3 | = "headpiece"
    PUSH ESI                            ; 004239d8
    MOV dword ptr [EBX + 0xbed8],EAX    ; 004239d9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004239df
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004239e4
    PUSH EBX                            ; 004239e7
    MOV dword ptr [EBX + 0xbedc],EAX    ; 004239e8
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 004239ee
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004239f3
    PUSH 0x41a00000                     ; 004239f6
    PUSH 0x40000000                     ; 004239fb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00423a00
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBX + 0xbee4],0x0    ; 00423a05
    MOV dword ptr [ESP + 0x8],EAX       ; 00423a0f
    MOV dword ptr [EBX + 0xbee8],0x0    ; 00423a13
    MOV EAX,dword ptr [ESP + 0x8]       ; 00423a1d
    MOV dword ptr [EBX + 0xbee0],EAX    ; 00423a21
    ADD ESP,0x8                         ; 00423a27
    ADD ESP,0x4                         ; 00423a2a
    POP ESI                             ; 00423a2d
    POP EBX                             ; 00423a2e
    RET                                 ; 00423a2f

