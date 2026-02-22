; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_CZombieCow_setup_FUN_004441b0(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine2_00619478
;   TerminatedCString s_Bip01_Head_00619485
;   TerminatedCString s_head01_00619490
;   TerminatedCString s_neck01_00619497
;   TerminatedCString s_lfrontleg01_0061949e
;   TerminatedCString s_rfrontleg01_006194aa
;   TerminatedCString s_rbackleg01_006194b6
;   TerminatedCString s_lbackleg01_006194c1
;   TerminatedCString s_torso01_006194cc
;   TerminatedCString s_utter01_006194d4
;   TerminatedCString s_back01_006194dc
;   TerminatedCString s_tail01_006194e3
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004441b0
        ;   Label: core_cow.cpp_CZombieCow_setup_FUN_004441b0
    PUSH ESI                            ; 004441b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004441b2
    PUSH EDI                            ; 004441b6
    LEA ESI,[EBX + 0x158]               ; 004441b7
    PUSH ESI                            ; 004441bd
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 004441be
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004441c3
    PUSH ESI                            ; 004441c6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004441c7
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004441cc
    PUSH 0x1                            ; 004441cf
    PUSH 0x619478                       ; 004441d1 | = "Bip01 Spine2"
    PUSH EAX                            ; 004441d6
    MOV EDI,EAX                         ; 004441d7
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004441d9
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004441de
    PUSH 0x1                            ; 004441e1
    PUSH 0x619485                       ; 004441e3 | = "Bip01 Head"
    PUSH EDI                            ; 004441e8
    MOV dword ptr [EBX + 0xbebc],EAX    ; 004441e9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004441ef
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004441f4
    PUSH EBX                            ; 004441f7
    MOV dword ptr [EBX + 0xbec0],EAX    ; 004441f8
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 004441fe
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00444203
    PUSH ESI                            ; 00444206
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 00444207
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044420c
    PUSH 0x1                            ; 0044420f
    PUSH 0x619490                       ; 00444211 | = "head01"
    PUSH EAX                            ; 00444216
    MOV ESI,EAX                         ; 00444217
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00444219
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0044421e
    PUSH 0x1                            ; 00444221
    PUSH 0x619497                       ; 00444223 | = "neck01"
    PUSH ESI                            ; 00444228
    MOV dword ptr [EBX + 0xbec8],EAX    ; 00444229
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0044422f
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00444234
    PUSH 0x1                            ; 00444237
    PUSH 0x61949e                       ; 00444239 | = "lfrontleg01"
    PUSH ESI                            ; 0044423e
    MOV dword ptr [EBX + 0xbecc],EAX    ; 0044423f
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00444245
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0044424a
    PUSH 0x1                            ; 0044424d
    PUSH 0x6194aa                       ; 0044424f | = "rfrontleg01"
    PUSH ESI                            ; 00444254
    MOV dword ptr [EBX + 0xbed0],EAX    ; 00444255
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0044425b
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00444260
    PUSH 0x1                            ; 00444263
    PUSH 0x6194b6                       ; 00444265 | = "rbackleg01"
    PUSH ESI                            ; 0044426a
    MOV dword ptr [EBX + 0xbed4],EAX    ; 0044426b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00444271
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00444276
    MOV dword ptr [EBX + 0xbed8],EAX    ; 00444279
    POP EDI                             ; 0044427f
    PUSH 0x1                            ; 00444280
    PUSH 0x6194c1                       ; 00444282 | = "lbackleg01"
    PUSH ESI                            ; 00444287
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00444288
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0044428d
    PUSH 0x1                            ; 00444290
    PUSH 0x6194cc                       ; 00444292 | = "torso01"
    PUSH ESI                            ; 00444297
    MOV dword ptr [EBX + 0xbedc],EAX    ; 00444298
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0044429e
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004442a3
    PUSH 0x1                            ; 004442a6
    PUSH 0x6194d4                       ; 004442a8 | = "utter01"
    PUSH ESI                            ; 004442ad
    MOV dword ptr [EBX + 0xbee0],EAX    ; 004442ae
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004442b4
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004442b9
    PUSH 0x1                            ; 004442bc
    PUSH 0x6194dc                       ; 004442be | = "back01"
    PUSH ESI                            ; 004442c3
    MOV dword ptr [EBX + 0xbee4],EAX    ; 004442c4
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004442ca
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004442cf
    PUSH 0x1                            ; 004442d2
    PUSH 0x6194e3                       ; 004442d4 | = "tail01"
    PUSH ESI                            ; 004442d9
    MOV dword ptr [EBX + 0xbee8],EAX    ; 004442da
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004442e0
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004442e5
    MOV dword ptr [EBX + 0xbeec],EAX    ; 004442e8
    POP ESI                             ; 004442ee
    POP EBX                             ; 004442ef
    RET                                 ; 004442f0

