; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVehicle * __cdecl core_vehicle_cpp_CVehicle_dtor_FUN_005e8d20(CVehicle *this_ptr,uint flags)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CVehicleTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_course.cpp_CCourse_dtor_FUN_004424e0
;   core_vehicle.cpp_CTire_arrdtor_FUN_005e8dd0
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e8d20
        ;   Label: core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e8d21
    TEST byte ptr [ESP + 0xc],0x4       ; 005e8d25
    JNZ 0x005e8d6d                      ; 005e8d2a
        ;   XREF to: 005e8d6d (CONDITIONAL_JUMP)  ; LAB_005e8d6d
    PUSH 0x0                            ; 005e8d2c
    ADD EBX,0x1020                      ; 005e8d2e
    PUSH EBX                            ; 005e8d34
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 005e8d35
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e8d3a
    PUSH 0x0                            ; 005e8d3d
    SUB EAX,0x6e4                       ; 005e8d3f
    PUSH EAX                            ; 005e8d44
    CALL core_vehicle.cpp_CTire_arrdtor_FUN_005e8dd0 ; 005e8d45
        ;   XREF to: 005e8dd0 (UNCONDITIONAL_CALL)  ; CTire * core_vehicle.cpp_CTire_arrdtor_FUN_005e8dd0(CTire * objs, uint flags)
    ADD ESP,0x8                         ; 005e8d4a
    PUSH 0x1                            ; 005e8d4d
    LEA EBX,[EAX + 0xfffff6c4]          ; 005e8d4f
    PUSH EBX                            ; 005e8d55
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005e8d56
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005e8d5b
    MOV DL,byte ptr [ESP + 0xc]         ; 005e8d5e
    MOV EBX,EAX                         ; 005e8d62
    TEST DL,0x2                         ; 005e8d64
    JNZ 0x005e8d88                      ; 005e8d67
        ;   XREF to: 005e8d88 (CONDITIONAL_JUMP)  ; LAB_005e8d88
    MOV EAX,EBX                         ; 005e8d69
    POP EBX                             ; 005e8d6b
    RET                                 ; 005e8d6c
    PUSH 0x665170                       ; 005e8d6d | g_CVehicleTypeInfo
        ;   Label: LAB_005e8d6d
    PUSH EBX                            ; 005e8d72
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005e8d73
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005e8d78
    PUSH EAX                            ; 005e8d7b
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005e8d7c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005e8d81
    MOV EAX,EBX                         ; 005e8d84
    POP EBX                             ; 005e8d86
    RET                                 ; 005e8d87
    PUSH EAX                            ; 005e8d88
        ;   Label: LAB_005e8d88
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 005e8d89
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005e8d8e
    MOV EAX,EBX                         ; 005e8d91
    POP EBX                             ; 005e8d93
    RET                                 ; 005e8d94

