; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpawner * core_spawner_cpp_CSpawner_dtor_FUN_00563f70(CSpawner *this_ptr,uint flags)
;
; Parameters:
; CSpawner *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSpawnerTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563f70
        ;   Label: core_spawner.cpp_CSpawner_dtor_FUN_00563f70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00563f71
    TEST byte ptr [ESP + 0xc],0x4       ; 00563f75
    JNZ 0x00563fad                      ; 00563f7a
        ;   XREF to: 00563fad (CONDITIONAL_JUMP)  ; LAB_00563fad
    PUSH 0x0                            ; 00563f7c
    ADD EBX,0x1d0                       ; 00563f7e
    PUSH EBX                            ; 00563f84
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00563f85
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00563f8a
    PUSH 0x1                            ; 00563f8d
    LEA EBX,[EAX + 0xfffffe30]          ; 00563f8f
    PUSH EBX                            ; 00563f95
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00563f96
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00563f9b
    MOV DL,byte ptr [ESP + 0xc]         ; 00563f9e
    MOV EBX,EAX                         ; 00563fa2
    TEST DL,0x2                         ; 00563fa4
    JNZ 0x00563fc8                      ; 00563fa7
        ;   XREF to: 00563fc8 (CONDITIONAL_JUMP)  ; LAB_00563fc8
    MOV EAX,EBX                         ; 00563fa9
    POP EBX                             ; 00563fab
    RET                                 ; 00563fac
    PUSH 0x5e4b00                       ; 00563fad | g_CSpawnerTypeInfo
        ;   Label: LAB_00563fad
    PUSH EBX                            ; 00563fb2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00563fb3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00563fb8
    PUSH EAX                            ; 00563fbb
    CALL crt_unknown.c_FUN_005a30b6     ; 00563fbc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00563fc1
    MOV EAX,EBX                         ; 00563fc4
    POP EBX                             ; 00563fc6
    RET                                 ; 00563fc7
    PUSH EAX                            ; 00563fc8
        ;   Label: LAB_00563fc8
    CALL crt_unknown.c_FUN_005a30c4     ; 00563fc9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00563fce
    MOV EAX,EBX                         ; 00563fd1
    POP EBX                             ; 00563fd3
    RET                                 ; 00563fd4

