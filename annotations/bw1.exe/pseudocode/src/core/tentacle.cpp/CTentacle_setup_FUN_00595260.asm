; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tentacle_cpp_CTentacle_setup_FUN_00595260(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_bipp02_005f76e5
;   TerminatedCString s_bipp05_005f76ec
;   TerminatedCString s_bipp06_005f76f3
;   TerminatedCString s_bipp09_005f76fa
;   undefined4 DAT_02c83880
;   undefined4 DAT_02c83884
;   undefined4 DAT_02c83888
;   undefined4 DAT_02c8388c
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_skeleton.cpp_FUN_00569b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595260
        ;   Label: core_tentacle.cpp_CTentacle_setup_FUN_00595260
    MOV EBX,dword ptr [ESP + 0x8]       ; 00595261
    ADD EBX,0x158                       ; 00595265
    PUSH EBX                            ; 0059526b
    CALL core_skeleton.cpp_FUN_00569b20 ; 0059526c
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00595271
    MOV EDX,dword ptr [ESP + 0x8]       ; 00595274
    PUSH EDX                            ; 00595278
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 00595279
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059527e
    PUSH EBX                            ; 00595281
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00595282
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00595287
    PUSH 0x1                            ; 0059528a
    PUSH 0x5f76e5                       ; 0059528c | = "bipp02"
    PUSH EAX                            ; 00595291
    MOV EBX,EAX                         ; 00595292
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00595294
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595299
    PUSH 0x1                            ; 0059529c
    PUSH 0x5f76ec                       ; 0059529e | = "bipp05"
    PUSH EBX                            ; 005952a3
    MOV [0x02c83880],EAX                ; 005952a4 | DAT_02c83880
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005952a9
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005952ae
    PUSH 0x1                            ; 005952b1
    PUSH 0x5f76f3                       ; 005952b3 | = "bipp06"
    PUSH EBX                            ; 005952b8
    MOV [0x02c83884],EAX                ; 005952b9 | DAT_02c83884
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005952be
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005952c3
    PUSH 0x1                            ; 005952c6
    PUSH 0x5f76fa                       ; 005952c8 | = "bipp09"
    PUSH EBX                            ; 005952cd
    MOV [0x02c83888],EAX                ; 005952ce | DAT_02c83888
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005952d3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005952d8
    MOV [0x02c8388c],EAX                ; 005952db | DAT_02c8388c
    POP EBX                             ; 005952e0
    RET                                 ; 005952e1

