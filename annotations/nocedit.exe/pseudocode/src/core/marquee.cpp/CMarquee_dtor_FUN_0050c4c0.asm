; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMarquee * core_marquee.cpp_CMarquee_dtor_FUN_0050c4c0(CMarquee * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   WatcomTypeInfo g_CMarqueeTypeInfo
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

    PUSH EBX                            ; 0050c4c0
        ;   Label: core_marquee.cpp_CMarquee_dtor_FUN_0050c4c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050c4c1
    TEST byte ptr [ESP + 0xc],0x4       ; 0050c4c5
    JNZ 0x0050c4fd                      ; 0050c4ca
        ;   XREF to: 0050c4fd (CONDITIONAL_JUMP)  ; LAB_0050c4fd
    PUSH 0x0                            ; 0050c4cc
    ADD EBX,0x1a4                       ; 0050c4ce
    PUSH EBX                            ; 0050c4d4
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 0050c4d5
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr)
    ADD ESP,0x8                         ; 0050c4da
    PUSH 0x1                            ; 0050c4dd
    LEA EBX,[EAX + 0xfffffe5c]          ; 0050c4df
    PUSH EBX                            ; 0050c4e5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0050c4e6
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 0050c4eb
    MOV DL,byte ptr [ESP + 0xc]         ; 0050c4ee
    MOV EBX,EAX                         ; 0050c4f2
    TEST DL,0x2                         ; 0050c4f4
    JNZ 0x0050c518                      ; 0050c4f7
        ;   XREF to: 0050c518 (CONDITIONAL_JUMP)  ; LAB_0050c518
    MOV EAX,EBX                         ; 0050c4f9
    POP EBX                             ; 0050c4fb
    RET                                 ; 0050c4fc
    PUSH 0x661130                       ; 0050c4fd | g_CMarqueeTypeInfo
        ;   Label: LAB_0050c4fd
    PUSH EBX                            ; 0050c502
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0050c503
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0050c508
    PUSH EAX                            ; 0050c50b
    CALL crt_memory.c_free_FUN_005fe659 ; 0050c50c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0050c511
    MOV EAX,EBX                         ; 0050c514
    POP EBX                             ; 0050c516
    RET                                 ; 0050c517
    PUSH EAX                            ; 0050c518
        ;   Label: LAB_0050c518
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0050c519
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0050c51e
    MOV EAX,EBX                         ; 0050c521
    POP EBX                             ; 0050c523
    RET                                 ; 0050c524

