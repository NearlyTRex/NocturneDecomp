; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_0046ff00(CActorDestination *this_ptr,uint flags)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CActorDestination
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ff00
        ;   Label: core_dest.cpp_CActorDestination_dtor_FUN_0046ff00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046ff01
    TEST byte ptr [ESP + 0xc],0x4       ; 0046ff05
    JNZ 0x0046ff26                      ; 0046ff0a
        ;   XREF to: 0046ff26 (CONDITIONAL_JUMP)  ; LAB_0046ff26
    PUSH 0x1                            ; 0046ff0c
    PUSH EBX                            ; 0046ff0e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0046ff0f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0046ff14
    MOV DL,byte ptr [ESP + 0xc]         ; 0046ff17
    MOV EBX,EAX                         ; 0046ff1b
    TEST DL,0x2                         ; 0046ff1d
    JNZ 0x0046ff41                      ; 0046ff20
        ;   XREF to: 0046ff41 (CONDITIONAL_JUMP)  ; LAB_0046ff41
    MOV EAX,EBX                         ; 0046ff22
    POP EBX                             ; 0046ff24
    RET                                 ; 0046ff25
    PUSH 0x65c810                       ; 0046ff26 | g_CActorDestination
        ;   Label: LAB_0046ff26
    PUSH EBX                            ; 0046ff2b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0046ff2c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0046ff31
    PUSH EAX                            ; 0046ff34
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0046ff35
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0046ff3a
    MOV EAX,EBX                         ; 0046ff3d
    POP EBX                             ; 0046ff3f
    RET                                 ; 0046ff40
    PUSH EAX                            ; 0046ff41
        ;   Label: LAB_0046ff41
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 0046ff42
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0046ff47
    MOV EAX,EBX                         ; 0046ff4a
    POP EBX                             ; 0046ff4c
    RET                                 ; 0046ff4d

