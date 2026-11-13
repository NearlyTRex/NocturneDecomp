; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpawner * __cdecl core_spawner_cpp_CSpawner_ctor_FUN_005638a0(CSpawner *this_ptr)
;
; Parameters:
; CSpawner *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_spawner.cpp_factoryFuncSpawner_FUN_00563870 at 00563883
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005638a0
        ;   Label: core_spawner.cpp_CSpawner_ctor_FUN_005638a0
    PUSH EAX                            ; 005638a4
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 005638a5
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005638aa
    ADD EAX,0x1d0                       ; 005638ad
    PUSH EAX                            ; 005638b2
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00 ; 005638b3
        ;   XREF to: 0054bf00 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EAX + -0x7c],0x5e4a24 ; 005638b8
    MOV dword ptr [EAX + -0x14],0x41f00000 ; 005638bf
    MOV byte ptr [EAX + -0x5a],0x0      ; 005638c6
    MOV byte ptr [EAX + -0x3c],0x0      ; 005638ca
    MOV dword ptr [EAX + 0xffffff30],0x1 ; 005638ce
    MOV dword ptr [EAX + -0x10],0x0     ; 005638d8
    MOV dword ptr [EAX + -0xc],0xa      ; 005638df
    MOV dword ptr [EAX + -0x18],0x0     ; 005638e6
    MOV dword ptr [EAX + -0x1c],0x0     ; 005638ed
    MOV dword ptr [EAX + -0x8],0x0      ; 005638f4
    ADD ESP,0x4                         ; 005638fb
    MOV dword ptr [EAX + -0x4],0x42c80000 ; 005638fe
    SUB EAX,0x1d0                       ; 00563905
    RET                                 ; 0056390a

