; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_setup_FUN_00435680(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005cdac2
;   TerminatedCString s_Bip01_L_Clavicle_005cdacd
;   TerminatedCString s_Bip01_R_Clavicle_005cdade
;   TerminatedCString s_Bip01_L_UpperArm_005cdaef
;   TerminatedCString s_Bip01_R_UpperArm_005cdb00
;   TerminatedCString s_Bip01_L_ForeArm_005cdb11
;   TerminatedCString s_Bip01_R_ForeArm_005cdb21
;   TerminatedCString s_Bip01_L_Foot_005cdb31
;   TerminatedCString s_Bip01_R_Foot_005cdb3e
;   TerminatedCString s_Bip01_L_Thigh_005cdb4b
;   TerminatedCString s_Bip01_R_Thigh_005cdb59
;   TerminatedCString s_Bip01_L_Calf_005cdb67
;   TerminatedCString s_Bip01_R_Calf_005cdb74
;   TerminatedCString s_Bip01_L_Hand_005cdb81
;   TerminatedCString s_Bip01_R_Hand_005cdb8e
;   ... and 19 more
;
; Called Functions:
;   core_hero.cpp_CHero_setup_FUN_004ce4a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435680
        ;   Label: core_colonel.cpp_CColonel_setup_FUN_00435680
    PUSH ESI                            ; 00435681
    MOV ESI,dword ptr [ESP + 0xc]       ; 00435682
    PUSH ESI                            ; 00435686
    CALL core_hero.cpp_CHero_setup_FUN_004ce4a0 ; 00435687
        ;   XREF to: 004ce4a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004ce4a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0043568c
    LEA EAX,[ESI + 0x2b4]               ; 0043568f
    PUSH EAX                            ; 00435695
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00435696
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043569b
    PUSH 0x1                            ; 0043569e
    PUSH 0x5cdac2                       ; 004356a0 | = "Bip01 head"
    PUSH EAX                            ; 004356a5
    MOV EBX,EAX                         ; 004356a6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004356a8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004356ad
    PUSH 0x1                            ; 004356b0
    PUSH 0x5cdacd                       ; 004356b2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004356b7
    MOV [0x007c150c],EAX                ; 004356b8 | DAT_007c150c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004356bd
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004356c2
    PUSH 0x1                            ; 004356c5
    PUSH 0x5cdade                       ; 004356c7 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004356cc
    MOV [0x007c1510],EAX                ; 004356cd | DAT_007c1510
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004356d2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004356d7
    PUSH 0x1                            ; 004356da
    PUSH 0x5cdaef                       ; 004356dc | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004356e1
    MOV [0x007c1514],EAX                ; 004356e2 | DAT_007c1514
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004356e7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004356ec
    PUSH 0x1                            ; 004356ef
    PUSH 0x5cdb00                       ; 004356f1 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004356f6
    MOV [0x007c1518],EAX                ; 004356f7 | DAT_007c1518
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004356fc
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00435701
    PUSH 0x1                            ; 00435704
    PUSH 0x5cdb11                       ; 00435706 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0043570b
    MOV [0x007c151c],EAX                ; 0043570c | DAT_007c151c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00435711
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00435716
    PUSH 0x1                            ; 00435719
    PUSH 0x5cdb21                       ; 0043571b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00435720
    MOV [0x007c1520],EAX                ; 00435721 | DAT_007c1520
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00435726
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0043572b
    PUSH 0x1                            ; 0043572e
    PUSH 0x5cdb31                       ; 00435730 | = "Bip01 L Foot"
    PUSH EBX                            ; 00435735
    MOV [0x007c1524],EAX                ; 00435736 | DAT_007c1524
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0043573b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00435740
    PUSH 0x1                            ; 00435743
    PUSH 0x5cdb3e                       ; 00435745 | = "Bip01 R Foot"
    PUSH EBX                            ; 0043574a
    MOV [0x007c1528],EAX                ; 0043574b | DAT_007c1528
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00435750
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00435755
    MOV [0x007c152c],EAX                ; 00435758 | DAT_007c152c
    PUSH 0x1                            ; 0043575d
    PUSH 0x5cdb4b                       ; 0043575f | = "Bip01 L Thigh"
    PUSH EBX                            ; 00435764
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00435765
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0043576a
    PUSH 0x1                            ; 0043576d
    PUSH 0x5cdb59                       ; 0043576f | = "Bip01 R Thigh"
    PUSH EBX                            ; 00435774
    MOV [0x007c1530],EAX                ; 00435775 | DAT_007c1530
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0043577a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0043577f
    PUSH 0x1                            ; 00435782
    PUSH 0x5cdb67                       ; 00435784 | = "Bip01 L Calf"
    PUSH EBX                            ; 00435789
    MOV [0x007c1534],EAX                ; 0043578a | DAT_007c1534
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0043578f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00435794
    PUSH 0x1                            ; 00435797
    PUSH 0x5cdb74                       ; 00435799 | = "Bip01 R Calf"
    PUSH EBX                            ; 0043579e
    MOV [0x007c1538],EAX                ; 0043579f | DAT_007c1538
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004357a4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004357a9
    PUSH 0x1                            ; 004357ac
    PUSH 0x5cdb81                       ; 004357ae | = "Bip01 L Hand"
    PUSH EBX                            ; 004357b3
    MOV [0x007c153c],EAX                ; 004357b4 | DAT_007c153c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004357b9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004357be
    PUSH 0x1                            ; 004357c1
    PUSH 0x5cdb8e                       ; 004357c3 | = "Bip01 R Hand"
    PUSH EBX                            ; 004357c8
    MOV [0x007c1540],EAX                ; 004357c9 | DAT_007c1540
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004357ce
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004357d3
    PUSH 0x1                            ; 004357d6
    PUSH 0x5cdb9b                       ; 004357d8 | = "Bip01 Spine2"
    PUSH EBX                            ; 004357dd
    MOV [0x007c1544],EAX                ; 004357de | DAT_007c1544
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004357e3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004357e8
    PUSH 0x1                            ; 004357eb
    PUSH 0x5cdba8                       ; 004357ed | = "Bip01 Spine"
    PUSH EBX                            ; 004357f2
    MOV [0x007c1548],EAX                ; 004357f3 | DAT_007c1548
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004357f8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004357fd
    MOV [0x007c154c],EAX                ; 00435800 | DAT_007c154c
    MOV dword ptr [ESI + 0x25640],0x0   ; 00435805
    POP ESI                             ; 0043580f
    POP EBX                             ; 00435810
    RET                                 ; 00435811

