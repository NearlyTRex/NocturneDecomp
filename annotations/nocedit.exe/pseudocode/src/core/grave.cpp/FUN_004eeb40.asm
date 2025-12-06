; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGrave * core_grave.cpp_FUN_004eeb40(CGrave * this_ptr, uint d1, uint d2)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CGraveTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eeb40
        ;   Label: core_grave.cpp_FUN_004eeb40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004eeb41
    TEST byte ptr [ESP + 0xc],0x4       ; 004eeb45
    JNZ 0x004eeb66                      ; 004eeb4a | LAB_004eeb66
        ;   XREF to: 004eeb66 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004eeb4c
    PUSH EBX                            ; 004eeb4e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004eeb4f | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004eeb54
    MOV DL,byte ptr [ESP + 0xc]         ; 004eeb57
    MOV EBX,EAX                         ; 004eeb5b
    TEST DL,0x2                         ; 004eeb5d
    JNZ 0x004eeb81                      ; 004eeb60 | LAB_004eeb81
        ;   XREF to: 004eeb81 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 004eeb62
    POP EBX                             ; 004eeb64
    RET                                 ; 004eeb65
    PUSH 0x65f210                       ; 004eeb66 | WatcomTypeInfo g_CGraveTypeInfo
        ;   Label: LAB_004eeb66
    PUSH EBX                            ; 004eeb6b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004eeb6c | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004eeb71
    PUSH EAX                            ; 004eeb74
    CALL crt_memory.c_free_FUN_005fe659 ; 004eeb75 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004eeb7a
    MOV EAX,EBX                         ; 004eeb7d
    POP EBX                             ; 004eeb7f
    RET                                 ; 004eeb80
    PUSH EAX                            ; 004eeb81
        ;   Label: LAB_004eeb81
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004eeb82 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004eeb87
    MOV EAX,EBX                         ; 004eeb8a
    POP EBX                             ; 004eeb8c
    RET                                 ; 004eeb8d

