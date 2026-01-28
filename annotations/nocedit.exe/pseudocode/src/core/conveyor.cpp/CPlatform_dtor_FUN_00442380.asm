; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_00442380(CPlatform *this_ptr,uint d1,uint d2,uint d3)
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
        ;   Label: core_conveyor.cpp_CPlatform_dtor_FUN_00442380
    MOV EBX,dword ptr [ESP + 0x8]       ; 00442381
    TEST byte ptr [ESP + 0xc],0x4       ; 00442385
    JNZ 0x004423bd                      ; 0044238a
        ;   XREF to: 004423bd (CONDITIONAL_JUMP)  ; LAB_004423bd
    PUSH 0x0                            ; 0044238c
    ADD EBX,0x310                       ; 0044238e
    PUSH EBX                            ; 00442394
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 00442395
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr)
    ADD ESP,0x8                         ; 0044239a
    PUSH 0x1                            ; 0044239d
    LEA EBX,[EAX + 0xfffffcf0]          ; 0044239f
    PUSH EBX                            ; 004423a5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004423a6
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004423ab
    MOV DL,byte ptr [ESP + 0xc]         ; 004423ae
    MOV EBX,EAX                         ; 004423b2
    TEST DL,0x2                         ; 004423b4
    JNZ 0x004423d8                      ; 004423b7
        ;   XREF to: 004423d8 (CONDITIONAL_JUMP)  ; LAB_004423d8
    MOV EAX,EBX                         ; 004423b9
    POP EBX                             ; 004423bb
    RET                                 ; 004423bc
    PUSH 0x65c040                       ; 004423bd | g_CPlatformTypeInfo
        ;   Label: LAB_004423bd
    PUSH EBX                            ; 004423c2
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004423c3
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004423c8
    PUSH EAX                            ; 004423cb
    CALL crt_memory.c_free_FUN_005fe659 ; 004423cc
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004423d1
    MOV EAX,EBX                         ; 004423d4
    POP EBX                             ; 004423d6
    RET                                 ; 004423d7
    PUSH EAX                            ; 004423d8
        ;   Label: LAB_004423d8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004423d9
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004423de
    MOV EAX,EBX                         ; 004423e1
    POP EBX                             ; 004423e3
    RET                                 ; 004423e4

