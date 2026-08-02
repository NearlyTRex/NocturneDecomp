; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConveyor * __cdecl core_conveyor_cpp_CConveyor_dtor_FUN_0043b420(CConveyor *this_ptr,uint flags)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CConveyorTypeInfo_0059b810
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_course.cpp_CCourse_dtor_FUN_0043b5f0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b420
        ;   Label: core_conveyor.cpp_CConveyor_dtor_FUN_0043b420
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043b421
    TEST byte ptr [ESP + 0xc],0x4       ; 0043b425
    JNZ 0x0043b45d                      ; 0043b42a
        ;   XREF to: 0043b45d (CONDITIONAL_JUMP)  ; LAB_0043b45d
    PUSH 0x0                            ; 0043b42c
    ADD EBX,0x308                       ; 0043b42e
    PUSH EBX                            ; 0043b434
    CALL core_course.cpp_CCourse_dtor_FUN_0043b5f0 ; 0043b435
        ;   XREF to: 0043b5f0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_0043b5f0(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043b43a
    PUSH 0x1                            ; 0043b43d
    LEA EBX,[EAX + 0xfffffcf8]          ; 0043b43f
    PUSH EBX                            ; 0043b445
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0043b446
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043b44b
    MOV DL,byte ptr [ESP + 0xc]         ; 0043b44e
    MOV EBX,EAX                         ; 0043b452
    TEST DL,0x2                         ; 0043b454
    JNZ 0x0043b478                      ; 0043b457
        ;   XREF to: 0043b478 (CONDITIONAL_JUMP)  ; LAB_0043b478
    MOV EAX,EBX                         ; 0043b459
    POP EBX                             ; 0043b45b
    RET                                 ; 0043b45c
    PUSH 0x59b810                       ; 0043b45d | g_CConveyorTypeInfo_0059b810
        ;   Label: LAB_0043b45d
    PUSH EBX                            ; 0043b462
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0043b463
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0043b468
    PUSH EAX                            ; 0043b46b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0043b46c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0043b471
    MOV EAX,EBX                         ; 0043b474
    POP EBX                             ; 0043b476
    RET                                 ; 0043b477
    PUSH EAX                            ; 0043b478
        ;   Label: LAB_0043b478
    CALL crt_unknown.c_FUN_00564494     ; 0043b479
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0043b47e
    MOV EAX,EBX                         ; 0043b481
    POP EBX                             ; 0043b483
    RET                                 ; 0043b484

