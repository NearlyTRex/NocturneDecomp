; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drone_cpp_FUN_0046d7c0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bipn04_005d182a
;   TerminatedCString s_Bipn09_005d1831
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d7c0
        ;   Label: core_drone.cpp_FUN_0046d7c0
    PUSH ESI                            ; 0046d7c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046d7c2
    LEA ESI,[EBX + 0x2b4]               ; 0046d7c6
    PUSH ESI                            ; 0046d7cc
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 0046d7cd
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046d7d2
    PUSH ESI                            ; 0046d7d5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0046d7d6
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046d7db
    PUSH 0x1                            ; 0046d7de
    PUSH 0x5d182a                       ; 0046d7e0 | = "Bipn04"
    PUSH EAX                            ; 0046d7e5
    MOV ESI,EAX                         ; 0046d7e6
    MOV dword ptr [EBX + 0x10af8],0x0   ; 0046d7e8
    CALL core_skeleton.cpp_FUN_00540e80 ; 0046d7f2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0046d7f7
    PUSH 0x1                            ; 0046d7fa
    PUSH 0x5d1831                       ; 0046d7fc | = "Bipn09"
    PUSH ESI                            ; 0046d801
    MOV dword ptr [EBX + 0x10afc],EAX   ; 0046d802
    CALL core_skeleton.cpp_FUN_00540e80 ; 0046d808
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0046d80d
    PUSH EBX                            ; 0046d810
    MOV dword ptr [EBX + 0x10b00],EAX   ; 0046d811
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 0046d817
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0x10b04],0x0   ; 0046d81c
    MOV dword ptr [EBX + 0x10b08],0x0   ; 0046d826
    ADD ESP,0x4                         ; 0046d830
    MOV dword ptr [EBX + 0x10b0c],0x0   ; 0046d833
    POP ESI                             ; 0046d83d
    POP EBX                             ; 0046d83e
    RET                                 ; 0046d83f

