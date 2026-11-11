; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_setup_FUN_00450620(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005cfce3
;   TerminatedCString s_Bip01_L_Clavicle_005cfcee
;   TerminatedCString s_Bip01_R_Clavicle_005cfcff
;   TerminatedCString s_Bip01_L_UpperArm_005cfd10
;   TerminatedCString s_Bip01_R_UpperArm_005cfd21
;   TerminatedCString s_Bip01_L_ForeArm_005cfd32
;   TerminatedCString s_Bip01_R_ForeArm_005cfd42
;   TerminatedCString s_Bip01_L_Foot_005cfd52
;   TerminatedCString s_Bip01_R_Foot_005cfd5f
;   TerminatedCString s_Bip01_L_Thigh_005cfd6c
;   TerminatedCString s_Bip01_R_Thigh_005cfd7a
;   TerminatedCString s_Bip01_L_Calf_005cfd88
;   TerminatedCString s_Bip01_R_Calf_005cfd95
;   TerminatedCString s_Bip01_L_Hand_005cfda2
;   TerminatedCString s_Bip01_R_Hand_005cfdaf
;   ... and 38 more
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_setup_FUN_0041be70
;   core_cloth.cpp_CClothList_process_FUN_005b1780
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_doc.cpp_FUN_00453d80
;   core_hero.cpp_CHero_setup_FUN_004ce4a0
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   core_skeleton.cpp_FUN_005469a0
;   crt_string.c__strcmp_FUN_005b8c30
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450620
        ;   Label: core_doc.cpp_CDoc_setup_FUN_00450620
    PUSH ESI                            ; 00450621
    PUSH EDI                            ; 00450622
    PUSH EBP                            ; 00450623
    MOV EBP,ESP                         ; 00450624
    SUB ESP,0x34                        ; 00450626
    MOV EBX,dword ptr [EBP + 0x14]      ; 00450629
    PUSH EBX                            ; 0045062c
    CALL core_hero.cpp_CHero_setup_FUN_004ce4a0 ; 0045062d
        ;   XREF to: 004ce4a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004ce4a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00450632
    LEA EDI,[EBX + 0x2b4]               ; 00450635
    PUSH EDI                            ; 0045063b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0045063c
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00450641
    PUSH 0x1                            ; 00450644
    PUSH 0x5cfce3                       ; 00450646 | = "Bip01 head"
    PUSH EAX                            ; 0045064b
    MOV ESI,EAX                         ; 0045064c
    MOV dword ptr [EBP + -0x4],EAX      ; 0045064e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00450651
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00450656
    PUSH 0x1                            ; 00450659
    PUSH 0x5cfcee                       ; 0045065b | = "Bip01 L Clavicle"
    PUSH ESI                            ; 00450660
    MOV [0x01b4d258],EAX                ; 00450661 | DAT_01b4d258
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00450666
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045066b
    PUSH 0x1                            ; 0045066e
    PUSH 0x5cfcff                       ; 00450670 | = "Bip01 R Clavicle"
    PUSH ESI                            ; 00450675
    MOV [0x01b4d25c],EAX                ; 00450676 | DAT_01b4d25c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0045067b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00450680
    PUSH 0x1                            ; 00450683
    PUSH 0x5cfd10                       ; 00450685 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0045068a
    MOV [0x01b4d260],EAX                ; 0045068b | DAT_01b4d260
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00450690
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00450695
    PUSH 0x1                            ; 00450698
    PUSH 0x5cfd21                       ; 0045069a | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0045069f
    MOV [0x01b4d264],EAX                ; 004506a0 | DAT_01b4d264
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004506a5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004506aa
    PUSH 0x1                            ; 004506ad
    PUSH 0x5cfd32                       ; 004506af | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004506b4
    MOV [0x01b4d268],EAX                ; 004506b5 | DAT_01b4d268
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004506ba
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004506bf
    PUSH 0x1                            ; 004506c2
    PUSH 0x5cfd42                       ; 004506c4 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004506c9
    MOV [0x01b4d26c],EAX                ; 004506ca | DAT_01b4d26c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004506cf
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004506d4
    PUSH 0x1                            ; 004506d7
    PUSH 0x5cfd52                       ; 004506d9 | = "Bip01 L Foot"
    PUSH ESI                            ; 004506de
    MOV [0x01b4d270],EAX                ; 004506df | DAT_01b4d270
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004506e4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004506e9
    PUSH 0x1                            ; 004506ec
    PUSH 0x5cfd5f                       ; 004506ee | = "Bip01 R Foot"
    PUSH ESI                            ; 004506f3
    MOV [0x01b4d274],EAX                ; 004506f4 | DAT_01b4d274
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004506f9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004506fe
    MOV [0x01b4d278],EAX                ; 00450701 | DAT_01b4d278
    PUSH 0x1                            ; 00450706
    PUSH 0x5cfd6c                       ; 00450708 | = "Bip01 L Thigh"
    PUSH ESI                            ; 0045070d
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0045070e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00450713
    PUSH 0x1                            ; 00450716
    PUSH 0x5cfd7a                       ; 00450718 | = "Bip01 R Thigh"
    PUSH ESI                            ; 0045071d
    MOV [0x01b4d27c],EAX                ; 0045071e | DAT_01b4d27c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00450723
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00450728
    PUSH 0x1                            ; 0045072b
    PUSH 0x5cfd88                       ; 0045072d | = "Bip01 L Calf"
    PUSH ESI                            ; 00450732
    MOV [0x01b4d280],EAX                ; 00450733 | DAT_01b4d280
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00450738
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045073d
    PUSH 0x1                            ; 00450740
    PUSH 0x5cfd95                       ; 00450742 | = "Bip01 R Calf"
    PUSH ESI                            ; 00450747
    MOV [0x01b4d284],EAX                ; 00450748 | DAT_01b4d284
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0045074d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00450752
    PUSH 0x1                            ; 00450755
    PUSH 0x5cfda2                       ; 00450757 | = "Bip01 L Hand"
    PUSH ESI                            ; 0045075c
    MOV [0x01b4d288],EAX                ; 0045075d | DAT_01b4d288
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00450762
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00450767
    PUSH 0x1                            ; 0045076a
    PUSH 0x5cfdaf                       ; 0045076c | = "Bip01 R Hand"
    PUSH ESI                            ; 00450771
    MOV [0x01b4d28c],EAX                ; 00450772 | DAT_01b4d28c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00450777
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045077c
    PUSH 0x1                            ; 0045077f
    PUSH 0x5cfdbc                       ; 00450781 | = "Bip01 Neck"
    PUSH ESI                            ; 00450786
    MOV [0x01b4d290],EAX                ; 00450787 | DAT_01b4d290
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0045078c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00450791
    PUSH 0x1                            ; 00450794
    PUSH 0x5cfdc7                       ; 00450796 | = "Bip01 Spine2"
    PUSH ESI                            ; 0045079b
    MOV [0x01b4d294],EAX                ; 0045079c | DAT_01b4d294
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004507a1
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004507a6
    PUSH 0x1                            ; 004507a9
    PUSH 0x5cfdd4                       ; 004507ab | = "Bip01 Spine1"
    PUSH ESI                            ; 004507b0
    MOV [0x01b4d298],EAX                ; 004507b1 | DAT_01b4d298
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004507b6
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004507bb
    PUSH 0x1                            ; 004507be
    PUSH 0x5cfde1                       ; 004507c0 | = "Bip01 Spine"
    PUSH ESI                            ; 004507c5
    MOV [0x01b4d29c],EAX                ; 004507c6 | DAT_01b4d29c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004507cb
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004507d0
    MOV [0x01b4d2a0],EAX                ; 004507d3 | DAT_01b4d2a0
    PUSH 0x1                            ; 004507d8
    PUSH 0x5cfded                       ; 004507da | = "Bip01 Pelvis"
    PUSH ESI                            ; 004507df
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004507e0
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004507e5
    PUSH 0x1                            ; 004507e8
    MOV [0x01b4d2a4],EAX                ; 004507ea | DAT_01b4d2a4
    MOV EAX,[0x01b4d28c]                ; 004507ef | DAT_01b4d28c
    PUSH 0x5cfdfa                       ; 004507f4 | = "turnlstart"
    MOV dword ptr [EBX + 0x2618],EAX    ; 004507f9
    MOV EAX,[0x01b4d290]                ; 004507ff | DAT_01b4d290
    PUSH EDI                            ; 00450804
    MOV dword ptr [EBX + 0x2690],EAX    ; 00450805
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 0045080b
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00450810
    PUSH EAX                            ; 00450813
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 00450814
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00450819
    PUSH 0x1                            ; 0045081c
    PUSH 0x5cfe05                       ; 0045081e | = "turnrstart"
    PUSH EDI                            ; 00450823
    MOV [0x01b4d2a8],EAX                ; 00450824 | DAT_01b4d2a8
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 00450829
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0045082e
    PUSH EAX                            ; 00450831
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 00450832
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00450837
    PUSH 0x1                            ; 0045083a
    PUSH 0x5cfe10                       ; 0045083c | = "pickup"
    PUSH EDI                            ; 00450841
    MOV [0x01b4d2ac],EAX                ; 00450842 | DAT_01b4d2ac
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 00450847
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0045084c
    PUSH EAX                            ; 0045084f
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 00450850
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00450855
    PUSH 0x41b00000                     ; 00450858
    PUSH EAX                            ; 0045085d
    PUSH EDI                            ; 0045085e
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50 ; 0045085f
        ;   XREF to: 00544f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 00450864
    MOV EDX,dword ptr [0x01b4d290]      ; 00450867 | DAT_01b4d290
    PUSH EDX                            ; 0045086d
    PUSH EDI                            ; 0045086e
    LEA ESI,[EBP + -0x1c]               ; 0045086f
    LEA EDI,[EBP + -0x34]               ; 00450872
    CALL core_skeleton.cpp_FUN_005469a0 ; 00450875
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[EBP + -0x1c]               ; 0045087a
    MOVSD ES:EDI,ESI                    ; 0045087d
    MOVSD ES:EDI,ESI                    ; 0045087e
    MOVSD ES:EDI,ESI                    ; 0045087f
    LEA EAX,[EBP + -0x34]               ; 00450880
    LEA ESI,[EBX + 0x25724]             ; 00450883
    ADD ESP,0x8                         ; 00450889
    CMP ESI,EAX                         ; 0045088c
    JZ 0x004508a1                       ; 0045088e
        ;   XREF to: 004508a1 (CONDITIONAL_JUMP)  ; LAB_004508a1
    MOV EAX,dword ptr [EBP + -0x34]     ; 00450890
    MOV dword ptr [ESI],EAX             ; 00450893
    MOV EAX,dword ptr [EBP + -0x30]     ; 00450895
    MOV dword ptr [ESI + 0x4],EAX       ; 00450898
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045089b
    MOV dword ptr [ESI + 0x8],EAX       ; 0045089e
    MOV ECX,dword ptr [0x01b4d268]      ; 004508a1 | DAT_01b4d268
        ;   Label: LAB_004508a1
    PUSH ECX                            ; 004508a7
    LEA EAX,[EBX + 0x2b4]               ; 004508a8
    PUSH EAX                            ; 004508ae
    LEA ESI,[EBP + -0x10]               ; 004508af
    LEA EDI,[EBP + -0x28]               ; 004508b2
    CALL core_skeleton.cpp_FUN_005469a0 ; 004508b5
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[EBP + -0x10]               ; 004508ba
    MOVSD ES:EDI,ESI                    ; 004508bd
    MOVSD ES:EDI,ESI                    ; 004508be
    MOVSD ES:EDI,ESI                    ; 004508bf
    LEA EAX,[EBP + -0x28]               ; 004508c0
    LEA ESI,[EBX + 0x25730]             ; 004508c3
    ADD ESP,0x8                         ; 004508c9
    CMP ESI,EAX                         ; 004508cc
    JZ 0x004508e1                       ; 004508ce
        ;   XREF to: 004508e1 (CONDITIONAL_JUMP)  ; LAB_004508e1
    MOV EAX,dword ptr [EBP + -0x28]     ; 004508d0
    MOV dword ptr [ESI],EAX             ; 004508d3
    MOV EAX,dword ptr [EBP + -0x24]     ; 004508d5
    MOV dword ptr [ESI + 0x4],EAX       ; 004508d8
    MOV EAX,dword ptr [EBP + -0x20]     ; 004508db
    MOV dword ptr [ESI + 0x8],EAX       ; 004508de
    PUSH EBX                            ; 004508e1
        ;   Label: LAB_004508e1
    CALL core_doc.cpp_FUN_00453d80      ; 004508e2
        ;   XREF to: 00453d80 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_00453d80()
    MOV dword ptr [EBX + 0x2573c],0x0   ; 004508e7
    MOV dword ptr [EBX + 0x25750],0x0   ; 004508f1
    ADD ESP,0x4                         ; 004508fb
    MOV dword ptr [EBX + 0x257a8],0x0   ; 004508fe
    LEA EAX,[EBX + 0x2b4]               ; 00450908
    MOV dword ptr [EBX + 0x256b0],0x0   ; 0045090e
    PUSH EAX                            ; 00450918
    MOV dword ptr [EBX + 0x256b4],0x0   ; 00450919
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00450923
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00450928
    LEA EAX,[EBX + 0x257b0]             ; 0045092b
    PUSH EAX                            ; 00450931
    LEA EAX,[EBX + 0x2514]              ; 00450932
    XOR ESI,ESI                         ; 00450938
    PUSH EAX                            ; 0045093a
    MOV dword ptr [0x01b4d2b0],ESI      ; 0045093b | DAT_01b4d2b0
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 00450941
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00450946
    TEST EAX,EAX                        ; 00450949
    JNZ 0x00450a25                      ; 0045094b
        ;   XREF to: 00450a25 (CONDITIONAL_JUMP)  ; LAB_00450a25
    LEA EAX,[EBX + 0x258b0]             ; 00450951
    PUSH EAX                            ; 00450957
    LEA EAX,[EBX + 0x2d10]              ; 00450958
    PUSH EAX                            ; 0045095e
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0045095f
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00450964
    TEST EAX,EAX                        ; 00450967
    JNZ 0x00450a25                      ; 00450969
        ;   XREF to: 00450a25 (CONDITIONAL_JUMP)  ; LAB_00450a25
    PUSH 0x1                            ; 0045096f
        ;   Label: LAB_0045096f
    PUSH 0x5cfe18                       ; 00450971 | = "Bip01 head"
    MOV EDI,dword ptr [EBP + -0x4]      ; 00450976
    PUSH EDI                            ; 00450979
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0045097a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0045097f
    MOV dword ptr [EBX + 0x10a24],EAX   ; 00450982
    LEA EAX,[EBX + 0x2b4]               ; 00450988
    PUSH EAX                            ; 0045098e
    PUSH dword ptr [EBX + 0x2574]       ; 0045098f
    LEA EAX,[EBX + 0x30]                ; 00450995
    PUSH 0x41200000                     ; 00450998
    PUSH EAX                            ; 0045099d
    LEA EAX,[EBX + 0x20]                ; 0045099e
    PUSH EAX                            ; 004509a1
    LEA EAX,[EBX + 0x2d0c]              ; 004509a2
    PUSH EAX                            ; 004509a8
    CALL core_cloth.cpp_CClothList_process_FUN_005b1780 ; 004509a9
        ;   XREF to: 005b1780 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_005b1780(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 004509ae
    PUSH 0x100                          ; 004509b1
    LEA ESI,[EBX + 0x154]               ; 004509b6
    PUSH ESI                            ; 004509bc
    CALL unkaddr_005a7eb0.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030 ; 004509bd
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; void unkaddr_005a7eb0.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 004509c2
    PUSH EBX                            ; 004509c5
    PUSH ESI                            ; 004509c6
    CALL unkaddr_005a7eb0.cpp_CSimpleParticleSystem_attach_FUN_005a8050 ; 004509c7
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; void unkaddr_005a7eb0.cpp_CSimpleParticleSystem_attach_FUN_005a8050(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    MOV ESI,0x5cfe23                    ; 004509cc | = "LANTERN"
    LEA EAX,[EBX + 0x259b4]             ; 004509d1
    ADD ESP,0x8                         ; 004509d7
    MOV EDI,EAX                         ; 004509da
    PUSH EDI                            ; 004509dc
    MOV AL,byte ptr [ESI]               ; 004509dd | = "LANTERN" | s_NTERN_005cfe23+2
        ;   Label: LAB_004509dd
    MOV byte ptr [EDI],AL               ; 004509df
    CMP AL,0x0                          ; 004509e1
    JZ 0x004509f5                       ; 004509e3
        ;   XREF to: 004509f5 (CONDITIONAL_JUMP)  ; LAB_004509f5
    MOV AL,byte ptr [ESI + 0x1]         ; 004509e5 | s_ANTERN_005cfe23+1 | s_TERN_005cfe23+3
    ADD ESI,0x2                         ; 004509e8
    MOV byte ptr [EDI + 0x1],AL         ; 004509eb
    ADD EDI,0x2                         ; 004509ee
    CMP AL,0x0                          ; 004509f1
    JNZ 0x004509dd                      ; 004509f3
        ;   XREF to: 004509dd (CONDITIONAL_JUMP)  ; LAB_004509dd
    POP EDI                             ; 004509f5
        ;   Label: LAB_004509f5
    PUSH 0x5cfe2b                       ; 004509f6 | = "Lantern.kfm"
    ADD EBX,0x25c68                     ; 004509fb
    PUSH EBX                            ; 00450a01
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00450a02
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00450a07
    PUSH EBX                            ; 00450a0a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00450a0b
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00450a10
    MOV EAX,EDI                         ; 00450a13
    PUSH EAX                            ; 00450a15
    CALL core_boxactor.cpp_CBoxActor_setup_FUN_0041be70 ; 00450a16
        ;   XREF to: 0041be70 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_setup_FUN_0041be70(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 00450a1b
    MOV ESP,EBP                         ; 00450a1e
    POP EBP                             ; 00450a20
    POP EDI                             ; 00450a21
    POP ESI                             ; 00450a22
    POP EBX                             ; 00450a23
    RET                                 ; 00450a24
    PUSH 0x5cfe17                       ; 00450a25 | DAT_005cfe17
        ;   Label: LAB_00450a25
    LEA EAX,[EBX + 0x2b4]               ; 00450a2a
    PUSH EAX                            ; 00450a30
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00450a31
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00450a36
    LEA EAX,[EBX + 0x258b0]             ; 00450a39
    PUSH EAX                            ; 00450a3f
    LEA EAX,[EBX + 0x257b0]             ; 00450a40
    PUSH EAX                            ; 00450a46
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 00450a47
    PUSH EBX                            ; 00450a4d
    CALL dword ptr [ESI + 0x148]        ; 00450a4e
    ADD ESP,0xc                         ; 00450a54
    JMP 0x0045096f                      ; 00450a57
        ;   XREF to: 0045096f (UNCONDITIONAL_JUMP)  ; LAB_0045096f

