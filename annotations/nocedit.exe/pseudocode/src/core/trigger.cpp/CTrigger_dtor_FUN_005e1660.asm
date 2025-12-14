; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTrigger * core_trigger.cpp_CTrigger_dtor_FUN_005e1660(CTrigger * this_ptr, uint d1, uint d2)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CTriggerTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1660
        ;   Label: core_trigger.cpp_CTrigger_dtor_FUN_005e1660
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e1661
    TEST byte ptr [ESP + 0xc],0x4       ; 005e1665
    JNZ 0x005e1686                      ; 005e166a
        ;   XREF to: 005e1686 (CONDITIONAL_JUMP)  ; LAB_005e1686
    PUSH 0x1                            ; 005e166c
    PUSH EBX                            ; 005e166e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005e166f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 005e1674
    MOV DL,byte ptr [ESP + 0xc]         ; 005e1677
    MOV EBX,EAX                         ; 005e167b
    TEST DL,0x2                         ; 005e167d
    JNZ 0x005e16a1                      ; 005e1680
        ;   XREF to: 005e16a1 (CONDITIONAL_JUMP)  ; LAB_005e16a1
    MOV EAX,EBX                         ; 005e1682
    POP EBX                             ; 005e1684
    RET                                 ; 005e1685
    PUSH 0x664b10                       ; 005e1686 | g_CTriggerTypeInfo
        ;   Label: LAB_005e1686
    PUSH EBX                            ; 005e168b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005e168c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005e1691
    PUSH EAX                            ; 005e1694
    CALL crt_memory.c_free_FUN_005fe659 ; 005e1695
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005e169a
    MOV EAX,EBX                         ; 005e169d
    POP EBX                             ; 005e169f
    RET                                 ; 005e16a0
    PUSH EAX                            ; 005e16a1
        ;   Label: LAB_005e16a1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005e16a2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005e16a7
    MOV EAX,EBX                         ; 005e16aa
    POP EBX                             ; 005e16ac
    RET                                 ; 005e16ad

