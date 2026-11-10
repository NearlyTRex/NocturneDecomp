; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_004184c0(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_CBip01_Head_005cc03d+1
;   TerminatedCString s_Bip01_L_ForeArm_005cc049
;   TerminatedCString s_Bip01_R_ForeArm_005cc059
;   TerminatedCString s_Bip01_L_UpperArm_005cc069
;   TerminatedCString s_Bip01_R_UpperArm_005cc07a
;   TerminatedCString s_Bip01_L_Foot_005cc08b
;   TerminatedCString s_Bip01_R_Foot_005cc098
;   TerminatedCString s_Bip01_L_Hand_005cc0a5
;   TerminatedCString s_Bip01_R_Hand_005cc0b2
;   TerminatedCString s_Bip01_Spine_005cc0bf
;   TerminatedCString s_Bip01_Spine2_005cc0cb
;   TerminatedCString s_Bip01_Head_005cc0d8
;   TerminatedCString s_Bip01_L_UpperArm_005cc0e3
;   TerminatedCString s_Bip01_R_UpperArm_005cc0f4
;   TerminatedCString s_Bip01_Spine_005cc105
;   ... and 16 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004184c0
        ;   Label: core_boneguy.cpp_CBoneGuy_setup_FUN_004184c0
    PUSH ESI                            ; 004184c1
    PUSH EDI                            ; 004184c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004184c3
    LEA EDI,[ESI + 0x2b4]               ; 004184c7
    PUSH EDI                            ; 004184cd
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 004184ce
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004184d3
    PUSH EDI                            ; 004184d6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004184d7
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004184dc
    PUSH 0x1                            ; 004184df
    PUSH 0x5cc03e                       ; 004184e1 | s_CBip01_Head_005cc03d+1
    PUSH EAX                            ; 004184e6
    MOV EBX,EAX                         ; 004184e7
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004184e9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004184ee
    PUSH 0x1                            ; 004184f1
    PUSH 0x5cc049                       ; 004184f3 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004184f8
    MOV [0x007bc944],EAX                ; 004184f9 | DAT_007bc944
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004184fe
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00418503
    PUSH 0x1                            ; 00418506
    PUSH 0x5cc059                       ; 00418508 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 0041850d
    MOV [0x007bc950],EAX                ; 0041850e | DAT_007bc950
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00418513
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00418518
    PUSH 0x1                            ; 0041851b
    PUSH 0x5cc069                       ; 0041851d | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00418522
    MOV [0x007bc954],EAX                ; 00418523 | DAT_007bc954
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00418528
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041852d
    PUSH 0x1                            ; 00418530
    PUSH 0x5cc07a                       ; 00418532 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00418537
    MOV [0x007bc958],EAX                ; 00418538 | DAT_007bc958
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0041853d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00418542
    PUSH 0x1                            ; 00418545
    PUSH 0x5cc08b                       ; 00418547 | = "Bip01 L Foot"
    PUSH EBX                            ; 0041854c
    MOV [0x007bc95c],EAX                ; 0041854d | DAT_007bc95c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00418552
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00418557
    PUSH 0x1                            ; 0041855a
    PUSH 0x5cc098                       ; 0041855c | = "Bip01 R Foot"
    PUSH EBX                            ; 00418561
    MOV [0x007bc960],EAX                ; 00418562 | DAT_007bc960
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00418567
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041856c
    PUSH 0x1                            ; 0041856f
    PUSH 0x5cc0a5                       ; 00418571 | = "Bip01 L Hand"
    PUSH EBX                            ; 00418576
    MOV [0x007bc964],EAX                ; 00418577 | DAT_007bc964
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0041857c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00418581
    PUSH 0x1                            ; 00418584
    PUSH 0x5cc0b2                       ; 00418586 | = "Bip01 R Hand"
    PUSH EBX                            ; 0041858b
    MOV [0x007bc948],EAX                ; 0041858c | DAT_007bc948
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00418591
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00418596
    MOV [0x007bc94c],EAX                ; 00418599 | DAT_007bc94c
    PUSH 0x1                            ; 0041859e
    PUSH 0x5cc0bf                       ; 004185a0 | = "Bip01 Spine"
    PUSH EBX                            ; 004185a5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004185a6
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004185ab
    PUSH 0x1                            ; 004185ae
    PUSH 0x5cc0cb                       ; 004185b0 | = "Bip01 Spine2"
    PUSH EBX                            ; 004185b5
    MOV [0x007bc968],EAX                ; 004185b6 | DAT_007bc968
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004185bb
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004185c0
    PUSH 0x1                            ; 004185c3
    PUSH 0x5cc0d8                       ; 004185c5 | = "Bip01 Head"
    PUSH EBX                            ; 004185ca
    MOV [0x007bc96c],EAX                ; 004185cb | DAT_007bc96c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004185d0
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004185d5
    PUSH 0x1                            ; 004185d8
    PUSH 0x5cc0e3                       ; 004185da | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004185df
    MOV [0x007bc944],EAX                ; 004185e0 | DAT_007bc944
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004185e5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004185ea
    PUSH 0x1                            ; 004185ed
    PUSH 0x5cc0f4                       ; 004185ef | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004185f4
    MOV [0x007bc958],EAX                ; 004185f5 | DAT_007bc958
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004185fa
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004185ff
    PUSH 0x1                            ; 00418602
    PUSH 0x5cc105                       ; 00418604 | = "Bip01 Spine"
    PUSH EBX                            ; 00418609
    MOV [0x007bc95c],EAX                ; 0041860a | DAT_007bc95c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0041860f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00418614
    PUSH 0x1                            ; 00418617
    PUSH 0x5cc111                       ; 00418619 | = "Bip01 Spine2"
    PUSH EBX                            ; 0041861e
    MOV [0x007bc968],EAX                ; 0041861f | DAT_007bc968
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00418624
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00418629
    PUSH EDI                            ; 0041862c
    MOV [0x007bc96c],EAX                ; 0041862d | DAT_007bc96c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00418632
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0xc00]     ; 00418637
    ADD ESP,0x4                         ; 0041863d
    MOV dword ptr [ESI + 0x10b74],EAX   ; 00418640
    CMP EAX,0x14                        ; 00418646
    JG 0x00418678                       ; 00418649
        ;   XREF to: 00418678 (CONDITIONAL_JUMP)  ; LAB_00418678
    MOV EAX,[0x007bc948]                ; 0041864b | DAT_007bc948
        ;   Label: LAB_0041864b
    MOV dword ptr [ESI + 0x2618],EAX    ; 00418650
    MOV EAX,[0x007bc94c]                ; 00418656 | DAT_007bc94c
    PUSH ESI                            ; 0041865b
    MOV dword ptr [ESI + 0x2690],EAX    ; 0041865c
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 00418662
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00418667
    MOV dword ptr [ESI + 0x10b08],0x0   ; 0041866a
    POP EDI                             ; 00418674
    POP ESI                             ; 00418675
    POP EBX                             ; 00418676
    RET                                 ; 00418677
    MOV ECX,0x5cc11e                    ; 00418678 | = "..\\core\\boneguy.cpp"
        ;   Label: LAB_00418678
    MOV EBX,0x130                       ; 0041867d
    PUSH 0x5cc132                       ; 00418682 | = "CBoneGuy::explode - Not enough contai..."
    MOV dword ptr [0x01d046a0],ECX      ; 00418687 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0041868d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00418693
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00418698
    JMP 0x0041864b                      ; 0041869b
        ;   XREF to: 0041864b (UNCONDITIONAL_JUMP)  ; LAB_0041864b

