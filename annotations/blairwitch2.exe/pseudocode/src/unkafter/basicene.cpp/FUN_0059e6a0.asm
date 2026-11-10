; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_basicene_cpp_FUN_0059e6a0(CEnemy *param_1)
;
;
; XREF[10]:
;   core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870 at 005a4875
;   core_confedrt.cpp_CConfederate_setup_FUN_005a0a90 at 005a0a97
;   core_confzomb.cpp_CConfederateZombie_setup_FUN_005a1d90 at 005a1d97
;   core_dog1.cpp_CDog_setup_FUN_005abdd0 at 005abddd
;   core_ghostchi.cpp_CGhostChild_setup_FUN_005a9440 at 005a9447
;   core_hag.cpp_CHag_setup_FUN_005aa8c0 at 005aa8c7
;   core_hand.cpp_CHand_setup_FUN_005a9dd0 at 005a9dd6
;   core_schngeis.cpp_CSchnellGeist_setup_FUN_005a3140 at 005a3147
;   core_twigzomb.cpp_CTwigZombie_setup_FUN_005a2820 at 005a2829
;   core_unionzom.cpp_CUnionZombie_setup_FUN_005a3f40 at 005a3f47
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005ef8aa
;   TerminatedCString s_Bip01_Spine1_005ef8b5
;   undefined4 DAT_00618170
;   undefined4 DAT_01d192f8
;
; Called Functions:
;   core_cloth.cpp_CClothList_process_FUN_005b1780
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   unkaddr_0059d350.cpp_FUN_0059da70
;   unkafter_basicene.cpp_FUN_005a01d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e6a0
        ;   Label: unkafter_basicene.cpp_FUN_0059e6a0
    PUSH ESI                            ; 0059e6a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059e6a2
    LEA ESI,[EBX + 0x2b4]               ; 0059e6a6
    PUSH ESI                            ; 0059e6ac
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 0059e6ad
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e6b2
    PUSH EBX                            ; 0059e6b5
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 0059e6b6
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059e6bb
    PUSH ESI                            ; 0059e6be
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0059e6bf
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e6c4
    PUSH ESI                            ; 0059e6c7
    MOV dword ptr [EBX + 0x113b0],EAX   ; 0059e6c8
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0059e6ce
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [EBX + 0x1137c]   ; 0059e6d3
    ADD ESP,0x4                         ; 0059e6d9
    CMP EDX,0xfffffc19                  ; 0059e6dc
    JZ 0x0059e770                       ; 0059e6e2
        ;   XREF to: 0059e770 (CONDITIONAL_JUMP)  ; LAB_0059e770
    FLD float ptr [EBX + 0x11370]       ; 0059e6e8
        ;   Label: LAB_0059e6e8
    MOV ECX,dword ptr [EBX + 0x113fc]   ; 0059e6ee
    FSTP float ptr [EBX + 0x10a80]      ; 0059e6f4
    CMP ECX,0xfffffc19                  ; 0059e6fa
    JNZ 0x0059e71e                      ; 0059e700
        ;   XREF to: 0059e71e (CONDITIONAL_JUMP)  ; LAB_0059e71e
    PUSH 0x1                            ; 0059e702
    PUSH 0x5ef8b5                       ; 0059e704 | = "Bip01 Spine1"
    MOV ESI,dword ptr [EBX + 0x113b0]   ; 0059e709
    PUSH ESI                            ; 0059e70f
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0059e710
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059e715
    MOV dword ptr [EBX + 0x113fc],EAX   ; 0059e718
    CMP dword ptr [EBX + 0x11418],0x0   ; 0059e71e
        ;   Label: LAB_0059e71e
    JZ 0x0059e735                       ; 0059e725
        ;   XREF to: 0059e735 (CONDITIONAL_JUMP)  ; LAB_0059e735
    MOV EAX,[0x00618170]                ; 0059e727 | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 0059e72c | DAT_01d192f8
    JZ 0x0059e78b                       ; 0059e733
        ;   XREF to: 0059e78b (CONDITIONAL_JUMP)  ; LAB_0059e78b
    LEA EAX,[EBX + 0x10af8]             ; 0059e735
        ;   Label: LAB_0059e735
    PUSH EAX                            ; 0059e73b
    CALL unkaddr_0059d350.cpp_FUN_0059da70 ; 0059e73c
        ;   XREF to: 0059da70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059da70()
    ADD ESP,0x4                         ; 0059e741
    LEA EAX,[EBX + 0x2b4]               ; 0059e744
    PUSH EAX                            ; 0059e74a
    PUSH dword ptr [EBX + 0x2574]       ; 0059e74b
    LEA EAX,[EBX + 0x30]                ; 0059e751
    PUSH 0x41200000                     ; 0059e754
    PUSH EAX                            ; 0059e759
    LEA EAX,[EBX + 0x20]                ; 0059e75a
    PUSH EAX                            ; 0059e75d
    ADD EBX,0x2d0c                      ; 0059e75e
    PUSH EBX                            ; 0059e764
    CALL core_cloth.cpp_CClothList_process_FUN_005b1780 ; 0059e765
        ;   XREF to: 005b1780 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_005b1780(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 0059e76a
    POP ESI                             ; 0059e76d
    POP EBX                             ; 0059e76e
    RET                                 ; 0059e76f
    PUSH 0x1                            ; 0059e770
        ;   Label: LAB_0059e770
    PUSH 0x5ef8aa                       ; 0059e772 | = "Bip01 Head"
    PUSH EAX                            ; 0059e777
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0059e778
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059e77d
    MOV dword ptr [EBX + 0x1137c],EAX   ; 0059e780
    JMP 0x0059e6e8                      ; 0059e786
        ;   XREF to: 0059e6e8 (UNCONDITIONAL_JUMP)  ; LAB_0059e6e8
    LEA EAX,[EBX + 0x113d0]             ; 0059e78b
        ;   Label: LAB_0059e78b
    PUSH EAX                            ; 0059e791
    PUSH EBX                            ; 0059e792
    CALL unkafter_basicene.cpp_FUN_005a01d0 ; 0059e793
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_005a01d0()
    ADD ESP,0x8                         ; 0059e798
    JMP 0x0059e735                      ; 0059e79b
        ;   XREF to: 0059e735 (UNCONDITIONAL_JUMP)  ; LAB_0059e735

