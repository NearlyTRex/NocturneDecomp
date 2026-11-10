; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_setup_FUN_004fd950(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005dec1f
;   TerminatedCString s_Bip01_L_ForeArm_005dec2a
;   TerminatedCString s_Bip01_R_ForeArm_005dec3a
;   TerminatedCString s_Bip01_L_UpperArm_005dec4a
;   TerminatedCString s_Bip01_R_UpperArm_005dec5b
;   TerminatedCString s_Bip01_L_Foot_005dec6c
;   TerminatedCString s_Bip01_R_Foot_005dec79
;   TerminatedCString s_Bip01_L_Hand_005dec86
;   TerminatedCString s_Bip01_R_Hand_005dec93
;   TerminatedCString s_Bip01_Spine_005deca0
;   TerminatedCString s_Bip01_Spine1_005decac
;   TerminatedCString s_Bip01_Spine2_005decb9
;   TerminatedCString s_Bip01_Head_005decc6
;   TerminatedCString s_Bip01_L_UpperArm_005decd1
;   TerminatedCString s_Bip01_R_UpperArm_005dece2
;   ... and 25 more
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

    PUSH EBX                            ; 004fd950
        ;   Label: core_mobster.cpp_CMobster_setup_FUN_004fd950
    PUSH ESI                            ; 004fd951
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fd952
    PUSH EDI                            ; 004fd956
    LEA EDI,[EBX + 0x2b4]               ; 004fd957
    PUSH EDI                            ; 004fd95d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 004fd95e
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fd963
    PUSH EDI                            ; 004fd966
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004fd967
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fd96c
    PUSH 0x1                            ; 004fd96f
    PUSH 0x5dec1f                       ; 004fd971 | = "Bip01 Head"
    PUSH EAX                            ; 004fd976
    MOV ESI,EAX                         ; 004fd977
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fd979
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fd97e
    PUSH 0x1                            ; 004fd981
    PUSH 0x5dec2a                       ; 004fd983 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004fd988
    MOV [0x01d1c710],EAX                ; 004fd989 | DAT_01d1c710
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fd98e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fd993
    PUSH 0x1                            ; 004fd996
    PUSH 0x5dec3a                       ; 004fd998 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004fd99d
    MOV [0x01d1c71c],EAX                ; 004fd99e | DAT_01d1c71c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fd9a3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fd9a8
    PUSH 0x1                            ; 004fd9ab
    PUSH 0x5dec4a                       ; 004fd9ad | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004fd9b2
    MOV [0x01d1c720],EAX                ; 004fd9b3 | DAT_01d1c720
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fd9b8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fd9bd
    PUSH 0x1                            ; 004fd9c0
    PUSH 0x5dec5b                       ; 004fd9c2 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004fd9c7
    MOV [0x01d1c724],EAX                ; 004fd9c8 | DAT_01d1c724
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fd9cd
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fd9d2
    PUSH 0x1                            ; 004fd9d5
    PUSH 0x5dec6c                       ; 004fd9d7 | = "Bip01 L Foot"
    PUSH ESI                            ; 004fd9dc
    MOV [0x01d1c728],EAX                ; 004fd9dd | DAT_01d1c728
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fd9e2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fd9e7
    PUSH 0x1                            ; 004fd9ea
    PUSH 0x5dec79                       ; 004fd9ec | = "Bip01 R Foot"
    PUSH ESI                            ; 004fd9f1
    MOV [0x01d1c72c],EAX                ; 004fd9f2 | DAT_01d1c72c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fd9f7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fd9fc
    PUSH 0x1                            ; 004fd9ff
    PUSH 0x5dec86                       ; 004fda01 | = "Bip01 L Hand"
    PUSH ESI                            ; 004fda06
    MOV [0x01d1c730],EAX                ; 004fda07 | DAT_01d1c730
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fda0c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fda11
    PUSH 0x1                            ; 004fda14
    PUSH 0x5dec93                       ; 004fda16 | = "Bip01 R Hand"
    PUSH ESI                            ; 004fda1b
    MOV [0x01d1c714],EAX                ; 004fda1c | DAT_01d1c714
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fda21
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fda26
    MOV [0x01d1c718],EAX                ; 004fda29 | DAT_01d1c718
    PUSH 0x1                            ; 004fda2e
    PUSH 0x5deca0                       ; 004fda30 | = "Bip01 Spine"
    PUSH ESI                            ; 004fda35
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fda36
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fda3b
    PUSH 0x1                            ; 004fda3e
    PUSH 0x5decac                       ; 004fda40 | = "Bip01 Spine1"
    PUSH ESI                            ; 004fda45
    MOV [0x01d1c734],EAX                ; 004fda46 | DAT_01d1c734
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fda4b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fda50
    PUSH 0x1                            ; 004fda53
    PUSH 0x5decb9                       ; 004fda55 | = "Bip01 Spine2"
    PUSH ESI                            ; 004fda5a
    MOV [0x01d1c738],EAX                ; 004fda5b | DAT_01d1c738
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fda60
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fda65
    PUSH 0x1                            ; 004fda68
    PUSH 0x5decc6                       ; 004fda6a | = "Bip01 Head"
    PUSH ESI                            ; 004fda6f
    MOV [0x01d1c73c],EAX                ; 004fda70 | DAT_01d1c73c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fda75
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fda7a
    PUSH 0x1                            ; 004fda7d
    PUSH 0x5decd1                       ; 004fda7f | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004fda84
    MOV [0x01d1c710],EAX                ; 004fda85 | DAT_01d1c710
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fda8a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fda8f
    PUSH 0x1                            ; 004fda92
    PUSH 0x5dece2                       ; 004fda94 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004fda99
    MOV [0x01d1c724],EAX                ; 004fda9a | DAT_01d1c724
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fda9f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fdaa4
    PUSH 0x1                            ; 004fdaa7
    PUSH 0x5decf3                       ; 004fdaa9 | = "Bip01 Spine"
    PUSH ESI                            ; 004fdaae
    MOV [0x01d1c728],EAX                ; 004fdaaf | DAT_01d1c728
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fdab4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fdab9
    PUSH 0x1                            ; 004fdabc
    PUSH 0x5decff                       ; 004fdabe | = "Bip01 Spine2"
    PUSH ESI                            ; 004fdac3
    MOV [0x01d1c734],EAX                ; 004fdac4 | DAT_01d1c734
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004fdac9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004fdace
    PUSH EDI                            ; 004fdad1
    MOV [0x01d1c73c],EAX                ; 004fdad2 | DAT_01d1c73c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 004fdad7
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fdadc
    PUSH 0x1                            ; 004fdadf
    PUSH 0x5ded0c                       ; 004fdae1 | = "larm01"
    PUSH EAX                            ; 004fdae6
    MOV ESI,EAX                         ; 004fdae7
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004fdae9
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004fdaee
    MOV dword ptr [EBX + 0x10b9c],EAX   ; 004fdaf1
    POP EDI                             ; 004fdaf7
    PUSH 0x1                            ; 004fdaf8
    PUSH 0x5ded13                       ; 004fdafa | = "l4arm01"
    PUSH ESI                            ; 004fdaff
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004fdb00
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004fdb05
    PUSH 0x1                            ; 004fdb08
    PUSH 0x5ded1b                       ; 004fdb0a | = "rarm01"
    PUSH ESI                            ; 004fdb0f
    MOV dword ptr [EBX + 0x10ba0],EAX   ; 004fdb10
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004fdb16
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004fdb1b
    PUSH 0x1                            ; 004fdb1e
    PUSH 0x5ded22                       ; 004fdb20 | = "r4arm01"
    PUSH ESI                            ; 004fdb25
    MOV dword ptr [EBX + 0x10ba4],EAX   ; 004fdb26
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004fdb2c
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004fdb31
    PUSH 0x1                            ; 004fdb34
    PUSH 0x5ded2a                       ; 004fdb36 | = "rthigh01"
    PUSH ESI                            ; 004fdb3b
    MOV dword ptr [EBX + 0x10ba8],EAX   ; 004fdb3c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004fdb42
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004fdb47
    PUSH 0x1                            ; 004fdb4a
    PUSH 0x5ded33                       ; 004fdb4c | = "rshin01"
    PUSH ESI                            ; 004fdb51
    MOV dword ptr [EBX + 0x10bac],EAX   ; 004fdb52
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004fdb58
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004fdb5d
    PUSH 0x1                            ; 004fdb60
    PUSH 0x5ded3b                       ; 004fdb62 | = "lthigh01"
    PUSH ESI                            ; 004fdb67
    MOV dword ptr [EBX + 0x10bb0],EAX   ; 004fdb68
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004fdb6e
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004fdb73
    PUSH 0x1                            ; 004fdb76
    PUSH 0x5ded44                       ; 004fdb78 | = "lshin01"
    PUSH ESI                            ; 004fdb7d
    MOV dword ptr [EBX + 0x10bb4],EAX   ; 004fdb7e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004fdb84
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004fdb89
    PUSH 0x1                            ; 004fdb8c
    PUSH 0x5ded4c                       ; 004fdb8e | = "waist01"
    PUSH ESI                            ; 004fdb93
    MOV dword ptr [EBX + 0x10bb8],EAX   ; 004fdb94
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004fdb9a
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004fdb9f
    PUSH 0x1                            ; 004fdba2
    PUSH 0x5ded54                       ; 004fdba4 | = "torso01"
    PUSH ESI                            ; 004fdba9
    MOV dword ptr [EBX + 0x10bbc],EAX   ; 004fdbaa
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004fdbb0
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004fdbb5
    MOV dword ptr [EBX + 0x10bc0],EAX   ; 004fdbb8
    PUSH 0x1                            ; 004fdbbe
    PUSH 0x5ded5c                       ; 004fdbc0 | = "head01"
    PUSH ESI                            ; 004fdbc5
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004fdbc6
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0x10bc4],EAX   ; 004fdbcb
    MOV EAX,[0x01d1c714]                ; 004fdbd1 | DAT_01d1c714
    MOV dword ptr [EBX + 0x2618],EAX    ; 004fdbd6
    MOV EAX,dword ptr [EBX + 0x10ba0]   ; 004fdbdc
    MOV dword ptr [EBX + 0x261c],EAX    ; 004fdbe2
    MOV EAX,[0x01d1c718]                ; 004fdbe8 | DAT_01d1c718
    MOV dword ptr [EBX + 0x2690],EAX    ; 004fdbed
    ADD ESP,0xc                         ; 004fdbf3
    MOV EAX,dword ptr [EBX + 0x10ba8]   ; 004fdbf6
    PUSH EBX                            ; 004fdbfc
    MOV dword ptr [EBX + 0x2694],EAX    ; 004fdbfd
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 004fdc03
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0x10bc8],0x0   ; 004fdc08
    ADD ESP,0x4                         ; 004fdc12
    MOV EDX,dword ptr [EBX + 0x10b18]   ; 004fdc15
    MOV dword ptr [EBX + 0x10bcc],0x0   ; 004fdc1b
    TEST EDX,EDX                        ; 004fdc25
    JNZ 0x004fdc54                      ; 004fdc27
        ;   XREF to: 004fdc54 (CONDITIONAL_JUMP)  ; LAB_004fdc54
    MOV dword ptr [EBX + 0x10b90],0x0   ; 004fdc29
        ;   Label: LAB_004fdc29
    MOV dword ptr [EBX + 0x10b94],0x0   ; 004fdc33
    MOV dword ptr [EBX + 0x10b98],0x0   ; 004fdc3d
    MOV dword ptr [EBX + 0x10b8c],0x0   ; 004fdc47
    POP ESI                             ; 004fdc51
    POP EBX                             ; 004fdc52
    RET                                 ; 004fdc53
    MOV dword ptr [EBX + 0x10af4],0x1   ; 004fdc54
        ;   Label: LAB_004fdc54
    JMP 0x004fdc29                      ; 004fdc5e
        ;   XREF to: 004fdc29 (UNCONDITIONAL_JUMP)  ; LAB_004fdc29

