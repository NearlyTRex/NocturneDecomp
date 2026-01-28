; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_ghoul_cpp_FUN_004e6160(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_0062db12
;   TerminatedCString s_Bip01_L_ForeArm_0062db1d
;   TerminatedCString s_Bip01_R_ForeArm_0062db2d
;   TerminatedCString s_Bip01_L_UpperArm_0062db3d
;   TerminatedCString s_Bip01_R_UpperArm_0062db4e
;   TerminatedCString s_Bip01_L_Foot_0062db5f
;   TerminatedCString s_Bip01_R_Foot_0062db6c
;   TerminatedCString s_Bip01_L_Hand_0062db79
;   TerminatedCString s_Bip01_R_Hand_0062db86
;   TerminatedCString s_Bip01_Spine_0062db93
;   TerminatedCString s_Bip01_Spine2_0062db9f
;   TerminatedCString s_r_high_arm01_0062dbac
;   TerminatedCString s_r_lo_arm01_0062dbb9
;   TerminatedCString s_l_high_arm01_0062dbc4
;   TerminatedCString s_l_lo_arm01_0062dbd1
;   ... and 18 more
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

    PUSH EBX                            ; 004e6160
        ;   Label: core_ghoul.cpp_FUN_004e6160
    PUSH ESI                            ; 004e6161
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e6162
    PUSH EDI                            ; 004e6166
    LEA EDI,[EBX + 0x158]               ; 004e6167
    PUSH EDI                            ; 004e616d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 004e616e
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e6173
    PUSH EDI                            ; 004e6176
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004e6177
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e617c
    PUSH 0x1                            ; 004e617f
    PUSH 0x62db12                       ; 004e6181 | = "Bip01 Head"
    PUSH EAX                            ; 004e6186
    MOV ESI,EAX                         ; 004e6187
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e6189
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e618e
    PUSH 0x1                            ; 004e6191
    PUSH 0x62db1d                       ; 004e6193 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004e6198
    MOV [0x02d832fc],EAX                ; 004e6199 | INT_02d832fc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e619e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e61a3
    PUSH 0x1                            ; 004e61a6
    PUSH 0x62db2d                       ; 004e61a8 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004e61ad
    MOV [0x02d83308],EAX                ; 004e61ae | INT_02d83308
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e61b3
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e61b8
    PUSH 0x1                            ; 004e61bb
    PUSH 0x62db3d                       ; 004e61bd | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004e61c2
    MOV [0x02d8330c],EAX                ; 004e61c3 | INT_02d8330c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e61c8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e61cd
    PUSH 0x1                            ; 004e61d0
    PUSH 0x62db4e                       ; 004e61d2 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004e61d7
    MOV [0x02d83310],EAX                ; 004e61d8 | INT_02d83310
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e61dd
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e61e2
    PUSH 0x1                            ; 004e61e5
    PUSH 0x62db5f                       ; 004e61e7 | = "Bip01 L Foot"
    PUSH ESI                            ; 004e61ec
    MOV [0x02d83314],EAX                ; 004e61ed | INT_02d83314
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e61f2
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e61f7
    PUSH 0x1                            ; 004e61fa
    PUSH 0x62db6c                       ; 004e61fc | = "Bip01 R Foot"
    PUSH ESI                            ; 004e6201
    MOV [0x02d83318],EAX                ; 004e6202 | INT_02d83318
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e6207
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e620c
    PUSH 0x1                            ; 004e620f
    PUSH 0x62db79                       ; 004e6211 | = "Bip01 L Hand"
    PUSH ESI                            ; 004e6216
    MOV [0x02d8331c],EAX                ; 004e6217 | INT_02d8331c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e621c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e6221
    PUSH 0x1                            ; 004e6224
    PUSH 0x62db86                       ; 004e6226 | = "Bip01 R Hand"
    PUSH ESI                            ; 004e622b
    MOV [0x02d83300],EAX                ; 004e622c | INT_02d83300
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e6231
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e6236
    MOV [0x02d83304],EAX                ; 004e6239 | INT_02d83304
    PUSH 0x1                            ; 004e623e
    PUSH 0x62db93                       ; 004e6240 | = "Bip01 Spine"
    PUSH ESI                            ; 004e6245
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e6246
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e624b
    PUSH 0x1                            ; 004e624e
    PUSH 0x62db9f                       ; 004e6250 | = "Bip01 Spine2"
    PUSH ESI                            ; 004e6255
    MOV [0x02d83320],EAX                ; 004e6256 | INT_02d83320
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004e625b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004e6260
    PUSH EDI                            ; 004e6263
    MOV [0x02d83324],EAX                ; 004e6264 | INT_02d83324
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 004e6269
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e626e
    PUSH 0x1                            ; 004e6271
    PUSH 0x62dbac                       ; 004e6273 | = "r high arm01"
    PUSH EAX                            ; 004e6278
    MOV ESI,EAX                         ; 004e6279
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e627b
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e6280
    PUSH 0x1                            ; 004e6283
    PUSH 0x62dbb9                       ; 004e6285 | = "r lo arm01"
    PUSH ESI                            ; 004e628a
    MOV dword ptr [EBX + 0xbee0],EAX    ; 004e628b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e6291
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e6296
    PUSH 0x1                            ; 004e6299
    PUSH 0x62dbc4                       ; 004e629b | = "l high arm01"
    PUSH ESI                            ; 004e62a0
    MOV dword ptr [EBX + 0xbee4],EAX    ; 004e62a1
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e62a7
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e62ac
    PUSH 0x1                            ; 004e62af
    PUSH 0x62dbd1                       ; 004e62b1 | = "l lo arm01"
    PUSH ESI                            ; 004e62b6
    MOV dword ptr [EBX + 0xbee8],EAX    ; 004e62b7
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e62bd
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e62c2
    PUSH 0x1                            ; 004e62c5
    PUSH 0x62dbdc                       ; 004e62c7 | = "r thigh01"
    PUSH ESI                            ; 004e62cc
    MOV dword ptr [EBX + 0xbeec],EAX    ; 004e62cd
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e62d3
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e62d8
    PUSH 0x1                            ; 004e62db
    PUSH 0x62dbe6                       ; 004e62dd | = "r shin01"
    PUSH ESI                            ; 004e62e2
    MOV dword ptr [EBX + 0xbef0],EAX    ; 004e62e3
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e62e9
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e62ee
    PUSH 0x1                            ; 004e62f1
    PUSH 0x62dbef                       ; 004e62f3 | = "l thigh01"
    PUSH ESI                            ; 004e62f8
    MOV dword ptr [EBX + 0xbef4],EAX    ; 004e62f9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e62ff
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e6304
    MOV dword ptr [EBX + 0xbef8],EAX    ; 004e6307
    POP EDI                             ; 004e630d
    PUSH 0x1                            ; 004e630e
    PUSH 0x62dbf9                       ; 004e6310 | = "l shin01"
    PUSH ESI                            ; 004e6315
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e6316
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e631b
    PUSH 0x1                            ; 004e631e
    PUSH 0x62dc02                       ; 004e6320 | = "lo torso01"
    PUSH ESI                            ; 004e6325
    MOV dword ptr [EBX + 0xbefc],EAX    ; 004e6326
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e632c
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e6331
    PUSH 0x1                            ; 004e6334
    PUSH 0x62dc0d                       ; 004e6336 | = "high torso01"
    PUSH ESI                            ; 004e633b
    MOV dword ptr [EBX + 0xbf00],EAX    ; 004e633c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e6342
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e6347
    PUSH 0x1                            ; 004e634a
    PUSH 0x62dc1a                       ; 004e634c | = "head01"
    PUSH ESI                            ; 004e6351
    MOV dword ptr [EBX + 0xbf04],EAX    ; 004e6352
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004e6358
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004e635d
    PUSH EBX                            ; 004e6360
    MOV dword ptr [EBX + 0xbf08],EAX    ; 004e6361
    CALL core_enemy.cpp_CEnemy_FUN_004a9650 ; 004e6367
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xbf18],0x0    ; 004e636c
    MOV dword ptr [EBX + 0xbf1c],0x0    ; 004e6376
    MOV dword ptr [EBX + 0xbf20],0x0    ; 004e6380
    MOV dword ptr [EBX + 0xbf24],0x0    ; 004e638a
    MOV dword ptr [EBX + 0xbf28],0x0    ; 004e6394
    MOV dword ptr [EBX + 0xbf0c],0x0    ; 004e639e
    MOV dword ptr [EBX + 0xbf10],0x0    ; 004e63a8
    ADD ESP,0x4                         ; 004e63b2
    MOV dword ptr [EBX + 0xbf14],0x0    ; 004e63b5
    POP ESI                             ; 004e63bf
    POP EBX                             ; 004e63c0
    RET                                 ; 004e63c1

