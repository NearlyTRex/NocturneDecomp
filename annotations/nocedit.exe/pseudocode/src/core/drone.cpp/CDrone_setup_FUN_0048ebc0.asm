; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drone_cpp_CDrone_setup_FUN_0048ebc0(CDrone *this_ptr)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bipn04_00622377
;   TerminatedCString s_Bipn09_0062237e
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ebc0
        ;   Label: core_drone.cpp_CDrone_setup_FUN_0048ebc0
    PUSH ESI                            ; 0048ebc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048ebc2
    LEA ESI,[EBX + 0x158]               ; 0048ebc6
    PUSH ESI                            ; 0048ebcc
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 0048ebcd
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0048ebd2
    PUSH ESI                            ; 0048ebd5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0048ebd6
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0048ebdb
    PUSH 0x1                            ; 0048ebde
    PUSH 0x622377                       ; 0048ebe0 | = "Bipn04"
    PUSH EAX                            ; 0048ebe5
    MOV ESI,EAX                         ; 0048ebe6
    MOV dword ptr [EBX + 0xbebc],0x0    ; 0048ebe8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0048ebf2
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0048ebf7
    PUSH 0x1                            ; 0048ebfa
    PUSH 0x62237e                       ; 0048ebfc | = "Bipn09"
    PUSH ESI                            ; 0048ec01
    MOV dword ptr [EBX + 0xbec0],EAX    ; 0048ec02
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0048ec08
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0048ec0d
    PUSH EBX                            ; 0048ec10
    MOV dword ptr [EBX + 0xbec4],EAX    ; 0048ec11
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 0048ec17
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xbec8],0x0    ; 0048ec1c
    MOV dword ptr [EBX + 0xbecc],0x0    ; 0048ec26
    ADD ESP,0x4                         ; 0048ec30
    MOV dword ptr [EBX + 0xbed0],0x0    ; 0048ec33
    POP ESI                             ; 0048ec3d
    POP EBX                             ; 0048ec3e
    RET                                 ; 0048ec3f

