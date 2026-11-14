; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_larva_cpp_CLarva_setup_FUN_004fd9e0(CLarva *this_ptr)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd9e0
        ;   Label: core_larva.cpp_CLarva_setup_FUN_004fd9e0
    PUSH ESI                            ; 004fd9e1
    SUB ESP,0x4                         ; 004fd9e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fd9e5
    LEA EBX,[ESI + 0x158]               ; 004fd9e9
    PUSH EBX                            ; 004fd9ef
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 004fd9f0
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fd9f5
    PUSH EBX                            ; 004fd9f8
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 004fd9f9
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fd9fe
    PUSH ESI                            ; 004fda01
    MOV dword ptr [ESI + 0xc268],0x0    ; 004fda02
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 004fda0c
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004fda11
    PUSH 0x41f00000                     ; 004fda14
    PUSH 0x0                            ; 004fda19
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004fda1b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 004fda20
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fda24
    MOV dword ptr [ESI + 0xc1e4],EAX    ; 004fda28
    ADD ESP,0x8                         ; 004fda2e
    ADD ESP,0x4                         ; 004fda31
    POP ESI                             ; 004fda34
    POP EBX                             ; 004fda35
    RET                                 ; 004fda36

