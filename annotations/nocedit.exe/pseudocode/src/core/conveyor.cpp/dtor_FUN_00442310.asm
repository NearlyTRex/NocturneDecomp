; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CConveyor * core_conveyor.cpp_dtor_FUN_00442310(CConveyor * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   WatcomTypeInfo g_CConveyorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_course.cpp_CCourse_dtor_FUN_004424e0
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442310
        ;   Label: core_conveyor.cpp_dtor_FUN_00442310
    MOV EBX,dword ptr [ESP + 0x8]       ; 00442311
    TEST byte ptr [ESP + 0xc],0x4       ; 00442315
    JNZ 0x0044234d                      ; 0044231a
        ;   XREF to: 0044234d (CONDITIONAL_JUMP)  ; LAB_0044234d
    PUSH 0x0                            ; 0044231c
    ADD EBX,0x310                       ; 0044231e
    PUSH EBX                            ; 00442324
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 00442325
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr)
    ADD ESP,0x8                         ; 0044232a
    PUSH 0x1                            ; 0044232d
    LEA EBX,[EAX + 0xfffffcf0]          ; 0044232f
    PUSH EBX                            ; 00442335
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00442336
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 0044233b
    MOV DL,byte ptr [ESP + 0xc]         ; 0044233e
    MOV EBX,EAX                         ; 00442342
    TEST DL,0x2                         ; 00442344
    JNZ 0x00442368                      ; 00442347
        ;   XREF to: 00442368 (CONDITIONAL_JUMP)  ; LAB_00442368
    MOV EAX,EBX                         ; 00442349
    POP EBX                             ; 0044234b
    RET                                 ; 0044234c
    PUSH 0x65c020                       ; 0044234d | g_CConveyorTypeInfo
        ;   Label: LAB_0044234d
    PUSH EBX                            ; 00442352
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00442353
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00442358
    PUSH EAX                            ; 0044235b
    CALL crt_memory.c_free_FUN_005fe659 ; 0044235c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00442361
    MOV EAX,EBX                         ; 00442364
    POP EBX                             ; 00442366
    RET                                 ; 00442367
    PUSH EAX                            ; 00442368
        ;   Label: LAB_00442368
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00442369
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0044236e
    MOV EAX,EBX                         ; 00442371
    POP EBX                             ; 00442373
    RET                                 ; 00442374

