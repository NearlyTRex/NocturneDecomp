; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_CHostage_setup_FUN_004d1400(CHostage *this_ptr)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_hickboy_dfm_005da118
;   TerminatedCString s_depute_dfm_005da124
;   TerminatedCString s_hickho_dfm_005da12f
;   TerminatedCString s_hickgirl_dfm_005da13a
;   TerminatedCString s_hickdad_dfm_005da147
;   TerminatedCString s_preacher_dfm_005da153
;   TerminatedCString s_Bip01_R_UpperArm_005da160
;   TerminatedCString s_Bip01_Head_005da171
;   TerminatedCString s_Bip01_L_Foot_005da17c
;   TerminatedCString s_Bip01_R_Foot_005da189
;   TerminatedCString s_Bip01_R_Hand_005da196
;   TerminatedCString s_Bip01_L_Hand_005da1a3
;   TerminatedCString s_Bip01_Spine1_005da1b0
;   TerminatedCString s_gunup_005da1bd
;   undefined4 DAT_01cedfcc
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
;   core_npc.cpp_CNPC_setup_FUN_00510510
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1400
        ;   Label: core_hostage.cpp_CHostage_setup_FUN_004d1400
    PUSH ESI                            ; 004d1401
    PUSH EDI                            ; 004d1402
    PUSH EBP                            ; 004d1403
    MOV EBX,dword ptr [ESP + 0x14]      ; 004d1404
    LEA EAX,[EBX + 0x2b4]               ; 004d1408
    PUSH EAX                            ; 004d140e
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 004d140f
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d1414
    PUSH 0x5da118                       ; 004d1417 | = "hickboy.dfm"
    LEA EAX,[EBX + 0x2514]              ; 004d141c
    PUSH EAX                            ; 004d1422
    MOV dword ptr [EBX + 0x246f8],0x6   ; 004d1423
    MOV ESI,EAX                         ; 004d142d
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004d142f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d1434
    TEST EAX,EAX                        ; 004d1437
    JNZ 0x004d1441                      ; 004d1439
        ;   XREF to: 004d1441 (CONDITIONAL_JUMP)  ; LAB_004d1441
    MOV dword ptr [EBX + 0x246f8],EAX   ; 004d143b
    PUSH 0x5da124                       ; 004d1441 | = "depute.dfm"
        ;   Label: LAB_004d1441
    PUSH ESI                            ; 004d1446
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004d1447
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d144c
    TEST EAX,EAX                        ; 004d144f
    JNZ 0x004d145d                      ; 004d1451
        ;   XREF to: 004d145d (CONDITIONAL_JUMP)  ; LAB_004d145d
    MOV dword ptr [EBX + 0x246f8],0x1   ; 004d1453
    PUSH 0x5da12f                       ; 004d145d | = "hickho.dfm"
        ;   Label: LAB_004d145d
    PUSH ESI                            ; 004d1462
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004d1463
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d1468
    TEST EAX,EAX                        ; 004d146b
    JNZ 0x004d1479                      ; 004d146d
        ;   XREF to: 004d1479 (CONDITIONAL_JUMP)  ; LAB_004d1479
    MOV dword ptr [EBX + 0x246f8],0x2   ; 004d146f
    PUSH 0x5da13a                       ; 004d1479 | = "hickgirl.dfm"
        ;   Label: LAB_004d1479
    PUSH ESI                            ; 004d147e
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004d147f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d1484
    TEST EAX,EAX                        ; 004d1487
    JNZ 0x004d1495                      ; 004d1489
        ;   XREF to: 004d1495 (CONDITIONAL_JUMP)  ; LAB_004d1495
    MOV dword ptr [EBX + 0x246f8],0x4   ; 004d148b
    PUSH 0x5da147                       ; 004d1495 | = "hickdad.dfm"
        ;   Label: LAB_004d1495
    PUSH ESI                            ; 004d149a
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004d149b
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d14a0
    TEST EAX,EAX                        ; 004d14a3
    JNZ 0x004d14b1                      ; 004d14a5
        ;   XREF to: 004d14b1 (CONDITIONAL_JUMP)  ; LAB_004d14b1
    MOV dword ptr [EBX + 0x246f8],0x5   ; 004d14a7
    PUSH 0x5da153                       ; 004d14b1 | = "preacher.dfm"
        ;   Label: LAB_004d14b1
    PUSH ESI                            ; 004d14b6
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004d14b7
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d14bc
    TEST EAX,EAX                        ; 004d14bf
    JNZ 0x004d14cd                      ; 004d14c1
        ;   XREF to: 004d14cd (CONDITIONAL_JUMP)  ; LAB_004d14cd
    MOV dword ptr [EBX + 0x246f8],0x3   ; 004d14c3
    LEA EDI,[EBX + 0x2b4]               ; 004d14cd
        ;   Label: LAB_004d14cd
    PUSH EDI                            ; 004d14d3
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004d14d4
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d14d9
    PUSH EDI                            ; 004d14dc
    MOV ESI,EAX                         ; 004d14dd
    MOV EBP,EAX                         ; 004d14df
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 004d14e1
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004d14e6
    PUSH 0x1                            ; 004d14e9
    PUSH 0x5da160                       ; 004d14eb | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004d14f0
    MOV EDI,EAX                         ; 004d14f1
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d14f3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d14f8
    PUSH 0x1                            ; 004d14fb
    PUSH 0x5da171                       ; 004d14fd | = "Bip01 Head"
    PUSH ESI                            ; 004d1502
    MOV dword ptr [EBX + 0x24710],EAX   ; 004d1503
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d1509
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d150e
    PUSH 0x1                            ; 004d1511
    PUSH 0x5da17c                       ; 004d1513 | = "Bip01 L Foot"
    PUSH ESI                            ; 004d1518
    MOV dword ptr [EBX + 0x2470c],EAX   ; 004d1519
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d151f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d1524
    PUSH 0x1                            ; 004d1527
    PUSH 0x5da189                       ; 004d1529 | = "Bip01 R Foot"
    PUSH ESI                            ; 004d152e
    MOV dword ptr [EBX + 0x24714],EAX   ; 004d152f
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d1535
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d153a
    PUSH 0x1                            ; 004d153d
    PUSH 0x5da196                       ; 004d153f | = "Bip01 R Hand"
    PUSH ESI                            ; 004d1544
    MOV dword ptr [EBX + 0x24718],EAX   ; 004d1545
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d154b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d1550
    MOV EDX,dword ptr [EBX + 0x246f8]   ; 004d1553
    MOV dword ptr [EBX + 0x2690],EAX    ; 004d1559
    CMP EDX,0x1                         ; 004d155f
    JZ 0x004d157a                       ; 004d1562
        ;   XREF to: 004d157a (CONDITIONAL_JUMP)  ; LAB_004d157a
    PUSH 0x1                            ; 004d1564
    PUSH 0x5da1a3                       ; 004d1566 | = "Bip01 L Hand"
    PUSH ESI                            ; 004d156b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d156c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d1571
    MOV dword ptr [EBX + 0x2618],EAX    ; 004d1574
    PUSH 0x1                            ; 004d157a
        ;   Label: LAB_004d157a
    PUSH 0x5da1b0                       ; 004d157c | = "Bip01 Spine1"
    PUSH EBP                            ; 004d1581
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004d1582
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004d1587
    MOV ECX,dword ptr [EBX + 0x246f8]   ; 004d158a
    MOV dword ptr [EBX + 0x27c0],EAX    ; 004d1590
    CMP ECX,0x1                         ; 004d1596
    JZ 0x004d15b3                       ; 004d1599
        ;   XREF to: 004d15b3 (CONDITIONAL_JUMP)  ; LAB_004d15b3
    PUSH EBX                            ; 004d159b
        ;   Label: LAB_004d159b
    CALL core_npc.cpp_CNPC_setup_FUN_00510510 ; 004d159c
        ;   XREF to: 00510510 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_setup_FUN_00510510(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004d15a1
    MOV dword ptr [EBX + 0x246f0],0x0   ; 004d15a4
    POP EBP                             ; 004d15ae
    POP EDI                             ; 004d15af
    POP ESI                             ; 004d15b0
    POP EBX                             ; 004d15b1
    RET                                 ; 004d15b2
    PUSH ECX                            ; 004d15b3
        ;   Label: LAB_004d15b3
    PUSH 0x5da1bd                       ; 004d15b4 | = "gunup"
    PUSH EDI                            ; 004d15b9
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 004d15ba
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004d15bf
    MOV [0x01cedfcc],EAX                ; 004d15c2 | DAT_01cedfcc
    JMP 0x004d159b                      ; 004d15c7
        ;   XREF to: 004d159b (UNCONDITIONAL_JUMP)  ; LAB_004d159b

