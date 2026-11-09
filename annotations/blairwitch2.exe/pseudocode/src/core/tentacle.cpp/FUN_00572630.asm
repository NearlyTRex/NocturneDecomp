; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tentacle_cpp_FUN_00572630(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_bipp02_005ec471
;   TerminatedCString s_bipp05_005ec478
;   TerminatedCString s_bipp06_005ec47f
;   TerminatedCString s_bipp09_005ec486
;   undefined4 DAT_0264c0b0
;   undefined4 DAT_0264c0b4
;   undefined4 DAT_0264c0b8
;   undefined4 DAT_0264c0bc
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572630
        ;   Label: core_tentacle.cpp_FUN_00572630
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572631
    ADD EBX,0x2b4                       ; 00572635
    PUSH EBX                            ; 0057263b
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 0057263c
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00572641
    MOV EDX,dword ptr [ESP + 0x8]       ; 00572644
    PUSH EDX                            ; 00572648
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 00572649
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0057264e
    PUSH EBX                            ; 00572651
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00572652
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00572657
    PUSH 0x1                            ; 0057265a
    PUSH 0x5ec471                       ; 0057265c | = "bipp02"
    PUSH EAX                            ; 00572661
    MOV EBX,EAX                         ; 00572662
    CALL core_skeleton.cpp_FUN_00540e80 ; 00572664
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00572669
    PUSH 0x1                            ; 0057266c
    PUSH 0x5ec478                       ; 0057266e | = "bipp05"
    PUSH EBX                            ; 00572673
    MOV [0x0264c0b0],EAX                ; 00572674 | DAT_0264c0b0
    CALL core_skeleton.cpp_FUN_00540e80 ; 00572679
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0057267e
    PUSH 0x1                            ; 00572681
    PUSH 0x5ec47f                       ; 00572683 | = "bipp06"
    PUSH EBX                            ; 00572688
    MOV [0x0264c0b4],EAX                ; 00572689 | DAT_0264c0b4
    CALL core_skeleton.cpp_FUN_00540e80 ; 0057268e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00572693
    PUSH 0x1                            ; 00572696
    PUSH 0x5ec486                       ; 00572698 | = "bipp09"
    PUSH EBX                            ; 0057269d
    MOV [0x0264c0b8],EAX                ; 0057269e | DAT_0264c0b8
    CALL core_skeleton.cpp_FUN_00540e80 ; 005726a3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005726a8
    MOV [0x0264c0bc],EAX                ; 005726ab | DAT_0264c0bc
    POP EBX                             ; 005726b0
    RET                                 ; 005726b1

