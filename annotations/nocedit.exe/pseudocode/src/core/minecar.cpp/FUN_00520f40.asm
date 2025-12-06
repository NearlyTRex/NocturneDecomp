; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMineCar * core_minecar.cpp_FUN_00520f40(CMineCar * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   WatcomTypeInfo g_CMineCarTypeInfo
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

    PUSH EBX                            ; 00520f40
        ;   Label: core_minecar.cpp_FUN_00520f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00520f41
    TEST byte ptr [ESP + 0xc],0x4       ; 00520f45
    JNZ 0x00520f7d                      ; 00520f4a | LAB_00520f7d
        ;   XREF to: 00520f7d (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00520f4c
    ADD EBX,0x310                       ; 00520f4e
    PUSH EBX                            ; 00520f54
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 00520f55 | CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr)
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00520f5a
    PUSH 0x1                            ; 00520f5d
    LEA EBX,[EAX + 0xfffffcf0]          ; 00520f5f
    PUSH EBX                            ; 00520f65
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00520f66 | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00520f6b
    MOV DL,byte ptr [ESP + 0xc]         ; 00520f6e
    MOV EBX,EAX                         ; 00520f72
    TEST DL,0x2                         ; 00520f74
    JNZ 0x00520f98                      ; 00520f77 | LAB_00520f98
        ;   XREF to: 00520f98 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00520f79
    POP EBX                             ; 00520f7b
    RET                                 ; 00520f7c
    PUSH 0x6616c0                       ; 00520f7d | WatcomTypeInfo g_CMineCarTypeInfo
        ;   Label: LAB_00520f7d
    PUSH EBX                            ; 00520f82
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00520f83 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00520f88
    PUSH EAX                            ; 00520f8b
    CALL crt_memory.c_free_FUN_005fe659 ; 00520f8c | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00520f91
    MOV EAX,EBX                         ; 00520f94
    POP EBX                             ; 00520f96
    RET                                 ; 00520f97
    PUSH EAX                            ; 00520f98
        ;   Label: LAB_00520f98
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00520f99 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00520f9e
    MOV EAX,EBX                         ; 00520fa1
    POP EBX                             ; 00520fa3
    RET                                 ; 00520fa4

