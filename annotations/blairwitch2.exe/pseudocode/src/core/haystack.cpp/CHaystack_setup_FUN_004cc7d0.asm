; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_setup_FUN_004cc7d0(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005d9815
;   TerminatedCString s_Bip01_L_Clavicle_005d9820
;   TerminatedCString s_Bip01_R_Clavicle_005d9831
;   TerminatedCString s_Bip01_L_UpperArm_005d9842
;   TerminatedCString s_Bip01_R_UpperArm_005d9853
;   TerminatedCString s_Bip01_L_ForeArm_005d9864
;   TerminatedCString s_Bip01_R_ForeArm_005d9874
;   TerminatedCString s_Bip01_L_Foot_005d9884
;   TerminatedCString s_Bip01_R_Foot_005d9891
;   TerminatedCString s_Bip01_L_Thigh_005d989e
;   TerminatedCString s_Bip01_R_Thigh_005d98ac
;   TerminatedCString s_Bip01_L_Calf_005d98ba
;   TerminatedCString s_Bip01_R_Calf_005d98c7
;   TerminatedCString s_Bip01_L_Hand_005d98d4
;   TerminatedCString s_Bip01_R_Hand_005d98e1
;   ... and 19 more
;
; Called Functions:
;   core_hero.cpp_CHero_setup_FUN_004ce4a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc7d0
        ;   Label: core_haystack.cpp_CHaystack_setup_FUN_004cc7d0
    PUSH ESI                            ; 004cc7d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004cc7d2
    PUSH ESI                            ; 004cc7d6
    CALL core_hero.cpp_CHero_setup_FUN_004ce4a0 ; 004cc7d7
        ;   XREF to: 004ce4a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004ce4a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004cc7dc
    LEA EAX,[ESI + 0x2b4]               ; 004cc7df
    PUSH EAX                            ; 004cc7e5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004cc7e6
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004cc7eb
    PUSH 0x1                            ; 004cc7ee
    PUSH 0x5d9815                       ; 004cc7f0 | = "Bip01 head"
    PUSH EAX                            ; 004cc7f5
    MOV EBX,EAX                         ; 004cc7f6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc7f8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc7fd
    PUSH 0x1                            ; 004cc800
    PUSH 0x5d9820                       ; 004cc802 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004cc807
    MOV [0x01cede20],EAX                ; 004cc808 | DAT_01cede20
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc80d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc812
    PUSH 0x1                            ; 004cc815
    PUSH 0x5d9831                       ; 004cc817 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004cc81c
    MOV [0x01cede24],EAX                ; 004cc81d | DAT_01cede24
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc822
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc827
    PUSH 0x1                            ; 004cc82a
    PUSH 0x5d9842                       ; 004cc82c | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004cc831
    MOV [0x01cede28],EAX                ; 004cc832 | DAT_01cede28
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc837
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc83c
    PUSH 0x1                            ; 004cc83f
    PUSH 0x5d9853                       ; 004cc841 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004cc846
    MOV [0x01cede2c],EAX                ; 004cc847 | DAT_01cede2c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc84c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc851
    PUSH 0x1                            ; 004cc854
    PUSH 0x5d9864                       ; 004cc856 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004cc85b
    MOV [0x01cede30],EAX                ; 004cc85c | DAT_01cede30
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc861
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc866
    PUSH 0x1                            ; 004cc869
    PUSH 0x5d9874                       ; 004cc86b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004cc870
    MOV [0x01cede34],EAX                ; 004cc871 | DAT_01cede34
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc876
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc87b
    PUSH 0x1                            ; 004cc87e
    PUSH 0x5d9884                       ; 004cc880 | = "Bip01 L Foot"
    PUSH EBX                            ; 004cc885
    MOV [0x01cede38],EAX                ; 004cc886 | DAT_01cede38
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc88b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc890
    PUSH 0x1                            ; 004cc893
    PUSH 0x5d9891                       ; 004cc895 | = "Bip01 R Foot"
    PUSH EBX                            ; 004cc89a
    MOV [0x01cede3c],EAX                ; 004cc89b | DAT_01cede3c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc8a0
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc8a5
    MOV [0x01cede40],EAX                ; 004cc8a8 | DAT_01cede40
    PUSH 0x1                            ; 004cc8ad
    PUSH 0x5d989e                       ; 004cc8af | = "Bip01 L Thigh"
    PUSH EBX                            ; 004cc8b4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc8b5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc8ba
    PUSH 0x1                            ; 004cc8bd
    PUSH 0x5d98ac                       ; 004cc8bf | = "Bip01 R Thigh"
    PUSH EBX                            ; 004cc8c4
    MOV [0x01cede44],EAX                ; 004cc8c5 | DAT_01cede44
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc8ca
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc8cf
    PUSH 0x1                            ; 004cc8d2
    PUSH 0x5d98ba                       ; 004cc8d4 | = "Bip01 L Calf"
    PUSH EBX                            ; 004cc8d9
    MOV [0x01cede48],EAX                ; 004cc8da | DAT_01cede48
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc8df
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc8e4
    PUSH 0x1                            ; 004cc8e7
    PUSH 0x5d98c7                       ; 004cc8e9 | = "Bip01 R Calf"
    PUSH EBX                            ; 004cc8ee
    MOV [0x01cede4c],EAX                ; 004cc8ef | DAT_01cede4c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc8f4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc8f9
    PUSH 0x1                            ; 004cc8fc
    PUSH 0x5d98d4                       ; 004cc8fe | = "Bip01 L Hand"
    PUSH EBX                            ; 004cc903
    MOV [0x01cede50],EAX                ; 004cc904 | DAT_01cede50
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc909
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc90e
    PUSH 0x1                            ; 004cc911
    PUSH 0x5d98e1                       ; 004cc913 | = "Bip01 R Hand"
    PUSH EBX                            ; 004cc918
    MOV [0x01cede54],EAX                ; 004cc919 | DAT_01cede54
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc91e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc923
    PUSH 0x1                            ; 004cc926
    PUSH 0x5d98ee                       ; 004cc928 | = "Bip01 Spine2"
    PUSH EBX                            ; 004cc92d
    MOV [0x01cede58],EAX                ; 004cc92e | DAT_01cede58
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc933
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc938
    PUSH 0x1                            ; 004cc93b
    PUSH 0x5d98fb                       ; 004cc93d | = "Bip01 Spine"
    PUSH EBX                            ; 004cc942
    MOV [0x01cede5c],EAX                ; 004cc943 | DAT_01cede5c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004cc948
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004cc94d
    MOV [0x01cede60],EAX                ; 004cc950 | DAT_01cede60
    MOV dword ptr [ESI + 0x25640],0x0   ; 004cc955
    POP ESI                             ; 004cc95f
    POP EBX                             ; 004cc960
    RET                                 ; 004cc961

