; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPlatform * core_conveyor.cpp_FUN_00442380(CPlatform * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   WatcomTypeInfo g_CPlatformTypeInfo
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

    PUSH EBX                            ; 00442380
        ;   Label: core_conveyor.cpp_FUN_00442380
    MOV EBX,dword ptr [ESP + 0x8]       ; 00442381
    TEST byte ptr [ESP + 0xc],0x4       ; 00442385
    JNZ 0x004423bd                      ; 0044238a | LAB_004423bd
        ;   XREF to: 004423bd (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0044238c
    ADD EBX,0x310                       ; 0044238e
    PUSH EBX                            ; 00442394
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 00442395 | CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr)
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0044239a
    PUSH 0x1                            ; 0044239d
    LEA EBX,[EAX + 0xfffffcf0]          ; 0044239f
    PUSH EBX                            ; 004423a5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004423a6 | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004423ab
    MOV DL,byte ptr [ESP + 0xc]         ; 004423ae
    MOV EBX,EAX                         ; 004423b2
    TEST DL,0x2                         ; 004423b4
    JNZ 0x004423d8                      ; 004423b7 | LAB_004423d8
        ;   XREF to: 004423d8 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 004423b9
    POP EBX                             ; 004423bb
    RET                                 ; 004423bc
    PUSH 0x65c040                       ; 004423bd | WatcomTypeInfo g_CPlatformTypeInfo
        ;   Label: LAB_004423bd
    PUSH EBX                            ; 004423c2
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004423c3 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004423c8
    PUSH EAX                            ; 004423cb
    CALL crt_memory.c_free_FUN_005fe659 ; 004423cc | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004423d1
    MOV EAX,EBX                         ; 004423d4
    POP EBX                             ; 004423d6
    RET                                 ; 004423d7
    PUSH EAX                            ; 004423d8
        ;   Label: LAB_004423d8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004423d9 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004423de
    MOV EAX,EBX                         ; 004423e1
    POP EBX                             ; 004423e3
    RET                                 ; 004423e4

