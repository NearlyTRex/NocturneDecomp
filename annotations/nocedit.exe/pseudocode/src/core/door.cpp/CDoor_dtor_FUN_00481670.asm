; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00481670(CDoor *this_ptr,uint flags)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDoorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481670
        ;   Label: core_door.cpp_CDoor_dtor_FUN_00481670
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481671
    TEST byte ptr [ESP + 0xc],0x4       ; 00481675
    JNZ 0x00481696                      ; 0048167a
        ;   XREF to: 00481696 (CONDITIONAL_JUMP)  ; LAB_00481696
    PUSH 0x1                            ; 0048167c
    PUSH EBX                            ; 0048167e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0048167f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00481684
    MOV DL,byte ptr [ESP + 0xc]         ; 00481687
    MOV EBX,EAX                         ; 0048168b
    TEST DL,0x2                         ; 0048168d
    JNZ 0x004816b1                      ; 00481690
        ;   XREF to: 004816b1 (CONDITIONAL_JUMP)  ; LAB_004816b1
    MOV EAX,EBX                         ; 00481692
    POP EBX                             ; 00481694
    RET                                 ; 00481695
    PUSH 0x65cce0                       ; 00481696 | g_CDoorTypeInfo
        ;   Label: LAB_00481696
    PUSH EBX                            ; 0048169b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0048169c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004816a1
    PUSH EAX                            ; 004816a4
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004816a5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004816aa
    MOV EAX,EBX                         ; 004816ad
    POP EBX                             ; 004816af
    RET                                 ; 004816b0
    PUSH EAX                            ; 004816b1
        ;   Label: LAB_004816b1
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004816b2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004816b7
    MOV EAX,EBX                         ; 004816ba
    POP EBX                             ; 004816bc
    RET                                 ; 004816bd

