; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_dtor_FUN_00412ad0(CBackgroundActor *this_ptr,uint d1,uint d2)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CBackgroundActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412ad0
        ;   Label: core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412ad1
    TEST byte ptr [ESP + 0xc],0x4       ; 00412ad5
    JNZ 0x00412af6                      ; 00412ada
        ;   XREF to: 00412af6 (CONDITIONAL_JUMP)  ; LAB_00412af6
    PUSH 0x1                            ; 00412adc
    PUSH EBX                            ; 00412ade
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00412adf
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 00412ae4
    MOV DL,byte ptr [ESP + 0xc]         ; 00412ae7
    MOV EBX,EAX                         ; 00412aeb
    TEST DL,0x2                         ; 00412aed
    JNZ 0x00412b11                      ; 00412af0
        ;   XREF to: 00412b11 (CONDITIONAL_JUMP)  ; LAB_00412b11
    MOV EAX,EBX                         ; 00412af2
    POP EBX                             ; 00412af4
    RET                                 ; 00412af5
    PUSH 0x65a030                       ; 00412af6 | g_CBackgroundActorTypeInfo
        ;   Label: LAB_00412af6
    PUSH EBX                            ; 00412afb
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00412afc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00412b01
    PUSH EAX                            ; 00412b04
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00412b05
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00412b0a
    MOV EAX,EBX                         ; 00412b0d
    POP EBX                             ; 00412b0f
    RET                                 ; 00412b10
    PUSH EAX                            ; 00412b11
        ;   Label: LAB_00412b11
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00412b12
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00412b17
    MOV EAX,EBX                         ; 00412b1a
    POP EBX                             ; 00412b1c
    RET                                 ; 00412b1d

