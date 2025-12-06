; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CHealthItem * core_health.cpp_FUN_004f20d0(CHealthItem * this_ptr, uint d1, uint d2)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CHealthItemTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f20d0
        ;   Label: core_health.cpp_FUN_004f20d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f20d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004f20d5
    JNZ 0x004f20f6                      ; 004f20da | LAB_004f20f6
        ;   XREF to: 004f20f6 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004f20dc
    PUSH EBX                            ; 004f20de
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004f20df | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f20e4
    MOV DL,byte ptr [ESP + 0xc]         ; 004f20e7
    MOV EBX,EAX                         ; 004f20eb
    TEST DL,0x2                         ; 004f20ed
    JNZ 0x004f2111                      ; 004f20f0 | LAB_004f2111
        ;   XREF to: 004f2111 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 004f20f2
    POP EBX                             ; 004f20f4
    RET                                 ; 004f20f5
    PUSH 0x65f690                       ; 004f20f6 | WatcomTypeInfo g_CHealthItemTypeInfo
        ;   Label: LAB_004f20f6
    PUSH EBX                            ; 004f20fb
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004f20fc | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f2101
    PUSH EAX                            ; 004f2104
    CALL crt_memory.c_free_FUN_005fe659 ; 004f2105 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f210a
    MOV EAX,EBX                         ; 004f210d
    POP EBX                             ; 004f210f
    RET                                 ; 004f2110
    PUSH EAX                            ; 004f2111
        ;   Label: LAB_004f2111
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004f2112 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f2117
    MOV EAX,EBX                         ; 004f211a
    POP EBX                             ; 004f211c
    RET                                 ; 004f211d

