; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drone_cpp_CDrone_setup_FUN_00485cc0(CDrone *this_ptr)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bipn04_005db623
;   TerminatedCString s_Bipn09_005db62a
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485cc0
        ;   Label: core_drone.cpp_CDrone_setup_FUN_00485cc0
    PUSH ESI                            ; 00485cc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00485cc2
    LEA ESI,[EBX + 0x158]               ; 00485cc6
    PUSH ESI                            ; 00485ccc
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 00485ccd
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00485cd2
    PUSH ESI                            ; 00485cd5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00485cd6
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00485cdb
    PUSH 0x1                            ; 00485cde
    PUSH 0x5db623                       ; 00485ce0 | = "Bipn04"
    PUSH EAX                            ; 00485ce5
    MOV ESI,EAX                         ; 00485ce6
    MOV dword ptr [EBX + 0xc268],0x0    ; 00485ce8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00485cf2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00485cf7
    PUSH 0x1                            ; 00485cfa
    PUSH 0x5db62a                       ; 00485cfc | = "Bipn09"
    PUSH ESI                            ; 00485d01
    MOV dword ptr [EBX + 0xc26c],EAX    ; 00485d02
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00485d08
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00485d0d
    PUSH EBX                            ; 00485d10
    MOV dword ptr [EBX + 0xc270],EAX    ; 00485d11
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 00485d17
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xc274],0x0    ; 00485d1c
    MOV dword ptr [EBX + 0xc278],0x0    ; 00485d26
    ADD ESP,0x4                         ; 00485d30
    MOV dword ptr [EBX + 0xc27c],0x0    ; 00485d33
    POP ESI                             ; 00485d3d
    POP EBX                             ; 00485d3e
    RET                                 ; 00485d3f

