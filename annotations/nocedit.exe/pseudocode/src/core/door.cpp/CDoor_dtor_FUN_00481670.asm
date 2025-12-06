; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDoor * core_door.cpp_CDoor_dtor_FUN_00481670(CDoor * this_ptr, uint d1, uint d2)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CDoorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481670
        ;   Label: core_door.cpp_CDoor_dtor_FUN_00481670
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481671
    TEST byte ptr [ESP + 0xc],0x4       ; 00481675
    JNZ 0x00481696                      ; 0048167a | LAB_00481696
        ;   XREF to: 00481696 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0048167c
    PUSH EBX                            ; 0048167e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0048167f | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00481684
    MOV DL,byte ptr [ESP + 0xc]         ; 00481687
    MOV EBX,EAX                         ; 0048168b
    TEST DL,0x2                         ; 0048168d
    JNZ 0x004816b1                      ; 00481690 | LAB_004816b1
        ;   XREF to: 004816b1 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00481692
    POP EBX                             ; 00481694
    RET                                 ; 00481695
    PUSH 0x65cce0                       ; 00481696 | WatcomTypeInfo g_CDoorTypeInfo
        ;   Label: LAB_00481696
    PUSH EBX                            ; 0048169b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0048169c | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004816a1
    PUSH EAX                            ; 004816a4
    CALL crt_memory.c_free_FUN_005fe659 ; 004816a5 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004816aa
    MOV EAX,EBX                         ; 004816ad
    POP EBX                             ; 004816af
    RET                                 ; 004816b0
    PUSH EAX                            ; 004816b1
        ;   Label: LAB_004816b1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004816b2 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004816b7
    MOV EAX,EBX                         ; 004816ba
    POP EBX                             ; 004816bc
    RET                                 ; 004816bd

