; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_00423670(CBoxActor *this_ptr,uint d1,uint d2,uint d3)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoxActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_box.cpp_CBox_dtor_FUN_0041dd00
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423670
        ;   Label: core_boxactor.cpp_CBoxActor_dtor_FUN_00423670
    MOV EBX,dword ptr [ESP + 0x8]       ; 00423671
    TEST byte ptr [ESP + 0xc],0x4       ; 00423675
    JNZ 0x004236ad                      ; 0042367a
        ;   XREF to: 004236ad (CONDITIONAL_JUMP)  ; LAB_004236ad
    PUSH 0x0                            ; 0042367c
    ADD EBX,0x394                       ; 0042367e
    PUSH EBX                            ; 00423684
    CALL core_box.cpp_CBox_dtor_FUN_0041dd00 ; 00423685
        ;   XREF to: 0041dd00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dd00(CBox * this_ptr)
    ADD ESP,0x8                         ; 0042368a
    PUSH 0x1                            ; 0042368d
    LEA EBX,[EAX + 0xfffffc6c]          ; 0042368f
    PUSH EBX                            ; 00423695
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00423696
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 0042369b
    MOV DL,byte ptr [ESP + 0xc]         ; 0042369e
    MOV EBX,EAX                         ; 004236a2
    TEST DL,0x2                         ; 004236a4
    JNZ 0x004236c8                      ; 004236a7
        ;   XREF to: 004236c8 (CONDITIONAL_JUMP)  ; LAB_004236c8
    MOV EAX,EBX                         ; 004236a9
    POP EBX                             ; 004236ab
    RET                                 ; 004236ac
    PUSH 0x65b3d0                       ; 004236ad | g_CBoxActorTypeInfo
        ;   Label: LAB_004236ad
    PUSH EBX                            ; 004236b2
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004236b3
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004236b8
    PUSH EAX                            ; 004236bb
    CALL crt_memory.c_free_FUN_005fe659 ; 004236bc
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004236c1
    MOV EAX,EBX                         ; 004236c4
    POP EBX                             ; 004236c6
    RET                                 ; 004236c7
    PUSH EAX                            ; 004236c8
        ;   Label: LAB_004236c8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004236c9
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004236ce
    MOV EAX,EBX                         ; 004236d1
    POP EBX                             ; 004236d3
    RET                                 ; 004236d4

