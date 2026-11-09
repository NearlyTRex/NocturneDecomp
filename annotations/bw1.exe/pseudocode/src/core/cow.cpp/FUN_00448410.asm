; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_FUN_00448410(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine2_005d7201
;   TerminatedCString s_Bip01_Head_005d720e
;   TerminatedCString s_head01_005d7219
;   TerminatedCString s_neck01_005d7220
;   TerminatedCString s_lfrontleg01_005d7227
;   TerminatedCString s_rfrontleg01_005d7233
;   TerminatedCString s_rbackleg01_005d723f
;   TerminatedCString s_lbackleg01_005d724a
;   TerminatedCString s_torso01_005d7255
;   TerminatedCString s_utter01_005d725d
;   TerminatedCString s_back01_005d7265
;   TerminatedCString s_tail01_005d726c
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_skeleton.cpp_FUN_00565780
;   core_skeleton.cpp_FUN_00569b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448410
        ;   Label: core_cow.cpp_FUN_00448410
    PUSH ESI                            ; 00448411
    MOV EBX,dword ptr [ESP + 0xc]       ; 00448412
    PUSH EDI                            ; 00448416
    LEA ESI,[EBX + 0x158]               ; 00448417
    PUSH ESI                            ; 0044841d
    CALL core_skeleton.cpp_FUN_00569b20 ; 0044841e
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00448423
    PUSH ESI                            ; 00448426
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00448427
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044842c
    PUSH 0x1                            ; 0044842f
    PUSH 0x5d7201                       ; 00448431 | = "Bip01 Spine2"
    PUSH EAX                            ; 00448436
    MOV EDI,EAX                         ; 00448437
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00448439
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0044843e
    PUSH 0x1                            ; 00448441
    PUSH 0x5d720e                       ; 00448443 | = "Bip01 Head"
    PUSH EDI                            ; 00448448
    MOV dword ptr [EBX + 0xc268],EAX    ; 00448449
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0044844f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00448454
    PUSH EBX                            ; 00448457
    MOV dword ptr [EBX + 0xc26c],EAX    ; 00448458
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 0044845e
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00448463
    PUSH ESI                            ; 00448466
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 00448467
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044846c
    PUSH 0x1                            ; 0044846f
    PUSH 0x5d7219                       ; 00448471 | = "head01"
    PUSH EAX                            ; 00448476
    MOV ESI,EAX                         ; 00448477
    CALL core_skeleton.cpp_FUN_00565780 ; 00448479
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0044847e
    PUSH 0x1                            ; 00448481
    PUSH 0x5d7220                       ; 00448483 | = "neck01"
    PUSH ESI                            ; 00448488
    MOV dword ptr [EBX + 0xc274],EAX    ; 00448489
    CALL core_skeleton.cpp_FUN_00565780 ; 0044848f
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00448494
    PUSH 0x1                            ; 00448497
    PUSH 0x5d7227                       ; 00448499 | = "lfrontleg01"
    PUSH ESI                            ; 0044849e
    MOV dword ptr [EBX + 0xc278],EAX    ; 0044849f
    CALL core_skeleton.cpp_FUN_00565780 ; 004484a5
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004484aa
    PUSH 0x1                            ; 004484ad
    PUSH 0x5d7233                       ; 004484af | = "rfrontleg01"
    PUSH ESI                            ; 004484b4
    MOV dword ptr [EBX + 0xc27c],EAX    ; 004484b5
    CALL core_skeleton.cpp_FUN_00565780 ; 004484bb
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004484c0
    PUSH 0x1                            ; 004484c3
    PUSH 0x5d723f                       ; 004484c5 | = "rbackleg01"
    PUSH ESI                            ; 004484ca
    MOV dword ptr [EBX + 0xc280],EAX    ; 004484cb
    CALL core_skeleton.cpp_FUN_00565780 ; 004484d1
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004484d6
    MOV dword ptr [EBX + 0xc284],EAX    ; 004484d9
    POP EDI                             ; 004484df
    PUSH 0x1                            ; 004484e0
    PUSH 0x5d724a                       ; 004484e2 | = "lbackleg01"
    PUSH ESI                            ; 004484e7
    CALL core_skeleton.cpp_FUN_00565780 ; 004484e8
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004484ed
    PUSH 0x1                            ; 004484f0
    PUSH 0x5d7255                       ; 004484f2 | = "torso01"
    PUSH ESI                            ; 004484f7
    MOV dword ptr [EBX + 0xc288],EAX    ; 004484f8
    CALL core_skeleton.cpp_FUN_00565780 ; 004484fe
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00448503
    PUSH 0x1                            ; 00448506
    PUSH 0x5d725d                       ; 00448508 | = "utter01"
    PUSH ESI                            ; 0044850d
    MOV dword ptr [EBX + 0xc28c],EAX    ; 0044850e
    CALL core_skeleton.cpp_FUN_00565780 ; 00448514
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00448519
    PUSH 0x1                            ; 0044851c
    PUSH 0x5d7265                       ; 0044851e | = "back01"
    PUSH ESI                            ; 00448523
    MOV dword ptr [EBX + 0xc290],EAX    ; 00448524
    CALL core_skeleton.cpp_FUN_00565780 ; 0044852a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0044852f
    PUSH 0x1                            ; 00448532
    PUSH 0x5d726c                       ; 00448534 | = "tail01"
    PUSH ESI                            ; 00448539
    MOV dword ptr [EBX + 0xc294],EAX    ; 0044853a
    CALL core_skeleton.cpp_FUN_00565780 ; 00448540
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00448545
    MOV dword ptr [EBX + 0xc298],EAX    ; 00448548
    POP ESI                             ; 0044854e
    POP EBX                             ; 0044854f
    RET                                 ; 00448550

