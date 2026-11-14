; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_setup_FUN_00469060(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005d9aac
;   TerminatedCString s_Bip01_L_Clavicle_005d9ab7
;   TerminatedCString s_Bip01_R_Clavicle_005d9ac8
;   TerminatedCString s_Bip01_L_UpperArm_005d9ad9
;   TerminatedCString s_Bip01_R_UpperArm_005d9aea
;   TerminatedCString s_Bip01_L_ForeArm_005d9afb
;   TerminatedCString s_Bip01_R_ForeArm_005d9b0b
;   TerminatedCString s_Bip01_L_Foot_005d9b1b
;   TerminatedCString s_Bip01_R_Foot_005d9b28
;   TerminatedCString s_Bip01_L_Thigh_005d9b35
;   TerminatedCString s_Bip01_R_Thigh_005d9b43
;   TerminatedCString s_Bip01_L_Calf_005d9b51
;   TerminatedCString s_Bip01_R_Calf_005d9b5e
;   TerminatedCString s_Bip01_L_Hand_005d9b6b
;   TerminatedCString s_Bip01_R_Hand_005d9b78
;   ... and 31 more
;
; Called Functions:
;   core_doc.cpp_FUN_0046caa0
;   core_hero.cpp_CHero_setup_FUN_004eaa10
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469060
        ;   Label: core_doc.cpp_CDoc_setup_FUN_00469060
    PUSH ESI                            ; 00469061
    PUSH EDI                            ; 00469062
    PUSH EBP                            ; 00469063
    SUB ESP,0x30                        ; 00469064
    MOV EBP,dword ptr [ESP + 0x44]      ; 00469067
    PUSH EBP                            ; 0046906b
    CALL core_hero.cpp_CHero_setup_FUN_004eaa10 ; 0046906c
        ;   XREF to: 004eaa10 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004eaa10(CHero * this_ptr)
    ADD ESP,0x4                         ; 00469071
    LEA ESI,[EBP + 0x158]               ; 00469074
    PUSH ESI                            ; 0046907a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0046907b
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00469080
    PUSH 0x1                            ; 00469083
    PUSH 0x5d9aac                       ; 00469085 | = "Bip01 head"
    PUSH EAX                            ; 0046908a
    MOV EBX,EAX                         ; 0046908b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0046908d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00469092
    PUSH 0x1                            ; 00469095
    PUSH 0x5d9ab7                       ; 00469097 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 0046909c
    MOV [0x01b68814],EAX                ; 0046909d | DAT_01b68814
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004690a2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004690a7
    PUSH 0x1                            ; 004690aa
    PUSH 0x5d9ac8                       ; 004690ac | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004690b1
    MOV [0x01b68818],EAX                ; 004690b2 | DAT_01b68818
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004690b7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004690bc
    PUSH 0x1                            ; 004690bf
    PUSH 0x5d9ad9                       ; 004690c1 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004690c6
    MOV [0x01b6881c],EAX                ; 004690c7 | DAT_01b6881c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004690cc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004690d1
    PUSH 0x1                            ; 004690d4
    PUSH 0x5d9aea                       ; 004690d6 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004690db
    MOV [0x01b68820],EAX                ; 004690dc | DAT_01b68820
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004690e1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004690e6
    PUSH 0x1                            ; 004690e9
    PUSH 0x5d9afb                       ; 004690eb | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004690f0
    MOV [0x01b68824],EAX                ; 004690f1 | DAT_01b68824
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004690f6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004690fb
    PUSH 0x1                            ; 004690fe
    PUSH 0x5d9b0b                       ; 00469100 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00469105
    MOV [0x01b68828],EAX                ; 00469106 | DAT_01b68828
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0046910b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00469110
    PUSH 0x1                            ; 00469113
    PUSH 0x5d9b1b                       ; 00469115 | = "Bip01 L Foot"
    PUSH EBX                            ; 0046911a
    MOV [0x01b6882c],EAX                ; 0046911b | DAT_01b6882c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00469120
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00469125
    PUSH 0x1                            ; 00469128
    PUSH 0x5d9b28                       ; 0046912a | = "Bip01 R Foot"
    PUSH EBX                            ; 0046912f
    MOV [0x01b68830],EAX                ; 00469130 | DAT_01b68830
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00469135
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0046913a
    MOV [0x01b68834],EAX                ; 0046913d | DAT_01b68834
    PUSH 0x1                            ; 00469142
    PUSH 0x5d9b35                       ; 00469144 | = "Bip01 L Thigh"
    PUSH EBX                            ; 00469149
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0046914a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0046914f
    PUSH 0x1                            ; 00469152
    PUSH 0x5d9b43                       ; 00469154 | = "Bip01 R Thigh"
    PUSH EBX                            ; 00469159
    MOV [0x01b68838],EAX                ; 0046915a | DAT_01b68838
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0046915f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00469164
    PUSH 0x1                            ; 00469167
    PUSH 0x5d9b51                       ; 00469169 | = "Bip01 L Calf"
    PUSH EBX                            ; 0046916e
    MOV [0x01b6883c],EAX                ; 0046916f | DAT_01b6883c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00469174
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00469179
    PUSH 0x1                            ; 0046917c
    PUSH 0x5d9b5e                       ; 0046917e | = "Bip01 R Calf"
    PUSH EBX                            ; 00469183
    MOV [0x01b68840],EAX                ; 00469184 | DAT_01b68840
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00469189
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0046918e
    PUSH 0x1                            ; 00469191
    PUSH 0x5d9b6b                       ; 00469193 | = "Bip01 L Hand"
    PUSH EBX                            ; 00469198
    MOV [0x01b68844],EAX                ; 00469199 | DAT_01b68844
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0046919e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004691a3
    PUSH 0x1                            ; 004691a6
    PUSH 0x5d9b78                       ; 004691a8 | = "Bip01 R Hand"
    PUSH EBX                            ; 004691ad
    MOV [0x01b68848],EAX                ; 004691ae | DAT_01b68848
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004691b3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004691b8
    PUSH 0x1                            ; 004691bb
    PUSH 0x5d9b85                       ; 004691bd | = "Bip01 Neck"
    PUSH EBX                            ; 004691c2
    MOV [0x01b6884c],EAX                ; 004691c3 | DAT_01b6884c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004691c8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004691cd
    PUSH 0x1                            ; 004691d0
    PUSH 0x5d9b90                       ; 004691d2 | = "Bip01 Spine2"
    PUSH EBX                            ; 004691d7
    MOV [0x01b68850],EAX                ; 004691d8 | DAT_01b68850
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004691dd
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004691e2
    PUSH 0x1                            ; 004691e5
    PUSH 0x5d9b9d                       ; 004691e7 | = "Bip01 Spine1"
    PUSH EBX                            ; 004691ec
    MOV [0x01b68854],EAX                ; 004691ed | DAT_01b68854
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004691f2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004691f7
    PUSH 0x1                            ; 004691fa
    PUSH 0x5d9baa                       ; 004691fc | = "Bip01 Spine"
    PUSH EBX                            ; 00469201
    MOV [0x01b68858],EAX                ; 00469202 | DAT_01b68858
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00469207
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0046920c
    MOV [0x01b6885c],EAX                ; 0046920f | DAT_01b6885c
    PUSH 0x1                            ; 00469214
    PUSH 0x5d9bb6                       ; 00469216 | = "Bip01 Pelvis"
    PUSH EBX                            ; 0046921b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0046921c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00469221
    PUSH 0x1                            ; 00469224
    MOV [0x01b68860],EAX                ; 00469226 | DAT_01b68860
    MOV EAX,[0x01b68848]                ; 0046922b | DAT_01b68848
    PUSH 0x5d9bc3                       ; 00469230 | = "turnlstart"
    MOV dword ptr [EBP + 0x25a8],EAX    ; 00469235
    MOV EAX,[0x01b6884c]                ; 0046923b | DAT_01b6884c
    PUSH ESI                            ; 00469240
    MOV dword ptr [EBP + 0x2620],EAX    ; 00469241
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00469247
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0046924c
    PUSH EAX                            ; 0046924f
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 00469250
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00469255
    PUSH 0x1                            ; 00469258
    PUSH 0x5d9bce                       ; 0046925a | = "turnrstart"
    PUSH ESI                            ; 0046925f
    MOV [0x01b68864],EAX                ; 00469260 | DAT_01b68864
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00469265
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0046926a
    PUSH EAX                            ; 0046926d
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 0046926e
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00469273
    PUSH 0x1                            ; 00469276
    PUSH 0x5d9bd9                       ; 00469278 | = "pickup"
    PUSH ESI                            ; 0046927d
    MOV [0x01b68868],EAX                ; 0046927e | DAT_01b68868
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00469283
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00469288
    PUSH EAX                            ; 0046928b
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 0046928c
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00469291
    PUSH 0x41b00000                     ; 00469294
    PUSH EAX                            ; 00469299
    PUSH ESI                            ; 0046929a
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0 ; 0046929b
        ;   XREF to: 005675f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 004692a0
    MOV EDX,dword ptr [0x01b6884c]      ; 004692a3 | DAT_01b6884c
    PUSH EDX                            ; 004692a9
    LEA EDI,[ESP + 0x1c]                ; 004692aa
    PUSH ESI                            ; 004692ae
    LEA ESI,[ESP + 0x8]                 ; 004692af
    LEA EBX,[EBP + 0x20090]             ; 004692b3
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 004692b9
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x8]                 ; 004692be
    ADD ESP,0x8                         ; 004692c2
    LEA EAX,[ESP + 0x18]                ; 004692c5
    MOVSD ES:EDI,ESI                    ; 004692c9
    MOVSD ES:EDI,ESI                    ; 004692ca
    MOVSD ES:EDI,ESI                    ; 004692cb
    CMP EBX,EAX                         ; 004692cc
    JZ 0x004692e4                       ; 004692ce
        ;   XREF to: 004692e4 (CONDITIONAL_JUMP)  ; LAB_004692e4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004692d0
    MOV dword ptr [EBX],EAX             ; 004692d4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004692d6
    MOV dword ptr [EBX + 0x4],EAX       ; 004692da
    MOV EAX,dword ptr [ESP + 0x20]      ; 004692dd
    MOV dword ptr [EBX + 0x8],EAX       ; 004692e1
    MOV ECX,dword ptr [0x01b68824]      ; 004692e4 | DAT_01b68824
        ;   Label: LAB_004692e4
    PUSH ECX                            ; 004692ea
    LEA EAX,[EBP + 0x158]               ; 004692eb
    LEA ESI,[ESP + 0x10]                ; 004692f1
    PUSH EAX                            ; 004692f5
    LEA EDI,[ESP + 0x2c]                ; 004692f6
    LEA EBX,[EBP + 0x2009c]             ; 004692fa
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 00469300
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x14]                ; 00469305
    ADD ESP,0x8                         ; 00469309
    LEA EAX,[ESP + 0x24]                ; 0046930c
    MOVSD ES:EDI,ESI                    ; 00469310
    MOVSD ES:EDI,ESI                    ; 00469311
    MOVSD ES:EDI,ESI                    ; 00469312
    CMP EBX,EAX                         ; 00469313
    JZ 0x0046932b                       ; 00469315
        ;   XREF to: 0046932b (CONDITIONAL_JUMP)  ; LAB_0046932b
    MOV EAX,dword ptr [ESP + 0x24]      ; 00469317
    MOV dword ptr [EBX],EAX             ; 0046931b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0046931d
    MOV dword ptr [EBX + 0x4],EAX       ; 00469321
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00469324
    MOV dword ptr [EBX + 0x8],EAX       ; 00469328
    PUSH EBP                            ; 0046932b
        ;   Label: LAB_0046932b
    CALL core_doc.cpp_FUN_0046caa0      ; 0046932c
        ;   XREF to: 0046caa0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046caa0()
    MOV dword ptr [EBP + 0x200a8],0x0   ; 00469331
    MOV dword ptr [EBP + 0x200bc],0x0   ; 0046933b
    MOV dword ptr [EBP + 0x200d0],0x0   ; 00469345
    MOV dword ptr [EBP + 0x20020],0x0   ; 0046934f
    ADD ESP,0x4                         ; 00469359
    MOV dword ptr [EBP + 0x200e0],0x0   ; 0046935c
    LEA EAX,[EBP + 0x158]               ; 00469366
    MOV dword ptr [EBP + 0x20018],0x0   ; 0046936c
    PUSH EAX                            ; 00469376
    XOR EBX,EBX                         ; 00469377
    MOV dword ptr [EBP + 0x2001c],0x0   ; 00469379
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 00469383
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00469388
    MOV dword ptr [EBP + 0x200d8],EBX   ; 0046938b
    MOV dword ptr [0x01b6886c],EBX      ; 00469391 | DAT_01b6886c
    MOV dword ptr [EBP + 0x200dc],EBX   ; 00469397
    ADD ESP,0x30                        ; 0046939d
    POP EBP                             ; 004693a0
    POP EDI                             ; 004693a1
    POP ESI                             ; 004693a2
    POP EBX                             ; 004693a3
    RET                                 ; 004693a4

