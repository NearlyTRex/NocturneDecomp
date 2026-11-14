; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConfederate * __cdecl core_confedrt_cpp_CConfederate_dtor_FUN_005a09c0(CConfederate *this_ptr,uint flags)
;
; Parameters:
; CConfederate *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CBasicEnemy_full_vtable g_CConfederateVTable
;   WatcomTypeInfo g_CConfederateTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220
;   core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_muzzle.cpp_FUN_0059df70
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a09c0
        ;   Label: core_confedrt.cpp_CConfederate_dtor_FUN_005a09c0
    PUSH ESI                            ; 005a09c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a09c2
    TEST byte ptr [ESP + 0x10],0x4      ; 005a09c6
    JNZ 0x005a0a57                      ; 005a09cb
        ;   XREF to: 005a0a57 (CONDITIONAL_JUMP)  ; LAB_005a0a57
    PUSH 0x0                            ; 005a09d1
    LEA ESI,[EBX + 0x154]               ; 005a09d3
    PUSH ESI                            ; 005a09d9
    MOV dword ptr [EBX + 0x2b0],0x5fedc4 ; 005a09da | g_CConfederateVTable
    CALL core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100 ; 005a09e4
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100(CSimpleParticleSystem * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005a09e9
    PUSH ESI                            ; 005a09ec
    CALL core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220 ; 005a09ed
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005a09f2
    PUSH 0x0                            ; 005a09f5
    ADD EBX,0x3a20                      ; 005a09f7
    PUSH EBX                            ; 005a09fd
    CALL core_armour.cpp_FUN_0040f2b0   ; 005a09fe
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a0a03
    PUSH 0x0                            ; 005a0a06
    SUB EAX,0x9c8                       ; 005a0a08
    PUSH EAX                            ; 005a0a0d
    CALL core_muzzle.cpp_FUN_0059df70   ; 005a0a0e
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005a0a13
    PUSH 0x0                            ; 005a0a16
    SUB EAX,0x34c                       ; 005a0a18
    PUSH EAX                            ; 005a0a1d
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 005a0a1e
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a0a23
    PUSH 0x0                            ; 005a0a26
    SUB EAX,0x2a58                      ; 005a0a28
    PUSH EAX                            ; 005a0a2d
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005a0a2e
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a0a33
    PUSH 0x1                            ; 005a0a36
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a0a38
    PUSH EBX                            ; 005a0a3e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005a0a3f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a0a44
    MOV DL,byte ptr [ESP + 0x10]        ; 005a0a47
    MOV EBX,EAX                         ; 005a0a4b
    TEST DL,0x2                         ; 005a0a4d
    JNZ 0x005a0a73                      ; 005a0a50
        ;   XREF to: 005a0a73 (CONDITIONAL_JUMP)  ; LAB_005a0a73
    MOV EAX,EBX                         ; 005a0a52
    POP ESI                             ; 005a0a54
    POP EBX                             ; 005a0a55
    RET                                 ; 005a0a56
    PUSH 0x5fef50                       ; 005a0a57 | g_CConfederateTypeInfo
        ;   Label: LAB_005a0a57
    PUSH EBX                            ; 005a0a5c
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005a0a5d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005a0a62
    PUSH EAX                            ; 005a0a65
    CALL crt_unknown.c_FUN_005b7fce     ; 005a0a66
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005a0a6b
    MOV EAX,EBX                         ; 005a0a6e
    POP ESI                             ; 005a0a70
    POP EBX                             ; 005a0a71
    RET                                 ; 005a0a72
    PUSH EAX                            ; 005a0a73
        ;   Label: LAB_005a0a73
    CALL crt_unknown.c_FUN_005b7fdc     ; 005a0a74
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a0a79
    MOV EAX,EBX                         ; 005a0a7c
    POP ESI                             ; 005a0a7e
    POP EBX                             ; 005a0a7f
    RET                                 ; 005a0a80

