; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMineCar * __cdecl core_minecar_cpp_FUN_00520f40(CMineCar *this_ptr,uint d1,uint d2,uint d3)
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
    JNZ 0x00520f7d                      ; 00520f4a
        ;   XREF to: 00520f7d (CONDITIONAL_JUMP)  ; LAB_00520f7d
    PUSH 0x0                            ; 00520f4c
    ADD EBX,0x310                       ; 00520f4e
    PUSH EBX                            ; 00520f54
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 00520f55
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr)
    ADD ESP,0x8                         ; 00520f5a
    PUSH 0x1                            ; 00520f5d
    LEA EBX,[EAX + 0xfffffcf0]          ; 00520f5f
    PUSH EBX                            ; 00520f65
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00520f66
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 00520f6b
    MOV DL,byte ptr [ESP + 0xc]         ; 00520f6e
    MOV EBX,EAX                         ; 00520f72
    TEST DL,0x2                         ; 00520f74
    JNZ 0x00520f98                      ; 00520f77
        ;   XREF to: 00520f98 (CONDITIONAL_JUMP)  ; LAB_00520f98
    MOV EAX,EBX                         ; 00520f79
    POP EBX                             ; 00520f7b
    RET                                 ; 00520f7c
    PUSH 0x6616c0                       ; 00520f7d | g_CMineCarTypeInfo
        ;   Label: LAB_00520f7d
    PUSH EBX                            ; 00520f82
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00520f83
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00520f88
    PUSH EAX                            ; 00520f8b
    CALL crt_memory.c_free_FUN_005fe659 ; 00520f8c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00520f91
    MOV EAX,EBX                         ; 00520f94
    POP EBX                             ; 00520f96
    RET                                 ; 00520f97
    PUSH EAX                            ; 00520f98
        ;   Label: LAB_00520f98
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00520f99
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00520f9e
    MOV EAX,EBX                         ; 00520fa1
    POP EBX                             ; 00520fa3
    RET                                 ; 00520fa4

