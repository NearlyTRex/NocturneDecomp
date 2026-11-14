; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_CZombieCow_setup_FUN_00444fd0(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine2_005b98b8
;   TerminatedCString s_Bip01_Head_005b98c5
;   TerminatedCString s_head01_005b98d0
;   TerminatedCString s_neck01_005b98d7
;   TerminatedCString s_lfrontleg01_005b98de
;   TerminatedCString s_rfrontleg01_005b98ea
;   TerminatedCString s_rbackleg01_005b98f6
;   TerminatedCString s_lbackleg01_005b9901
;   TerminatedCString s_torso01_005b990c
;   TerminatedCString s_utter01_005b9914
;   TerminatedCString s_back01_005b991c
;   TerminatedCString s_tail01_005b9923
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444fd0
        ;   Label: core_cow.cpp_CZombieCow_setup_FUN_00444fd0
    PUSH ESI                            ; 00444fd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00444fd2
    PUSH EDI                            ; 00444fd6
    LEA ESI,[EBX + 0x158]               ; 00444fd7
    PUSH ESI                            ; 00444fdd
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 00444fde
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00444fe3
    PUSH ESI                            ; 00444fe6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 00444fe7
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00444fec
    PUSH 0x1                            ; 00444fef
    PUSH 0x5b98b8                       ; 00444ff1 | = "Bip01 Spine2"
    PUSH EAX                            ; 00444ff6
    MOV EDI,EAX                         ; 00444ff7
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00444ff9
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00444ffe
    PUSH 0x1                            ; 00445001
    PUSH 0x5b98c5                       ; 00445003 | = "Bip01 Head"
    PUSH EDI                            ; 00445008
    MOV dword ptr [EBX + 0xd054],EAX    ; 00445009
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0044500f
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445014
    PUSH EBX                            ; 00445017
    MOV dword ptr [EBX + 0xd058],EAX    ; 00445018
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 0044501e
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00445023
    PUSH ESI                            ; 00445026
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 00445027
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044502c
    PUSH 0x1                            ; 0044502f
    PUSH 0x5b98d0                       ; 00445031 | = "head01"
    PUSH EAX                            ; 00445036
    MOV ESI,EAX                         ; 00445037
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00445039
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0044503e
    PUSH 0x1                            ; 00445041
    PUSH 0x5b98d7                       ; 00445043 | = "neck01"
    PUSH ESI                            ; 00445048
    MOV dword ptr [EBX + 0xd060],EAX    ; 00445049
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0044504f
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445054
    PUSH 0x1                            ; 00445057
    PUSH 0x5b98de                       ; 00445059 | = "lfrontleg01"
    PUSH ESI                            ; 0044505e
    MOV dword ptr [EBX + 0xd064],EAX    ; 0044505f
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00445065
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0044506a
    PUSH 0x1                            ; 0044506d
    PUSH 0x5b98ea                       ; 0044506f | = "rfrontleg01"
    PUSH ESI                            ; 00445074
    MOV dword ptr [EBX + 0xd068],EAX    ; 00445075
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 0044507b
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445080
    PUSH 0x1                            ; 00445083
    PUSH 0x5b98f6                       ; 00445085 | = "rbackleg01"
    PUSH ESI                            ; 0044508a
    MOV dword ptr [EBX + 0xd06c],EAX    ; 0044508b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00445091
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445096
    MOV dword ptr [EBX + 0xd070],EAX    ; 00445099
    POP EDI                             ; 0044509f
    PUSH 0x1                            ; 004450a0
    PUSH 0x5b9901                       ; 004450a2 | = "lbackleg01"
    PUSH ESI                            ; 004450a7
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004450a8
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004450ad
    PUSH 0x1                            ; 004450b0
    PUSH 0x5b990c                       ; 004450b2 | = "torso01"
    PUSH ESI                            ; 004450b7
    MOV dword ptr [EBX + 0xd074],EAX    ; 004450b8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004450be
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004450c3
    PUSH 0x1                            ; 004450c6
    PUSH 0x5b9914                       ; 004450c8 | = "utter01"
    PUSH ESI                            ; 004450cd
    MOV dword ptr [EBX + 0xd078],EAX    ; 004450ce
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004450d4
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004450d9
    PUSH 0x1                            ; 004450dc
    PUSH 0x5b991c                       ; 004450de | = "back01"
    PUSH ESI                            ; 004450e3
    MOV dword ptr [EBX + 0xd07c],EAX    ; 004450e4
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004450ea
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004450ef
    PUSH 0x1                            ; 004450f2
    PUSH 0x5b9923                       ; 004450f4 | = "tail01"
    PUSH ESI                            ; 004450f9
    MOV dword ptr [EBX + 0xd080],EAX    ; 004450fa
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00445100
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445105
    MOV dword ptr [EBX + 0xd084],EAX    ; 00445108
    POP ESI                             ; 0044510e
    POP EBX                             ; 0044510f
    RET                                 ; 00445110

