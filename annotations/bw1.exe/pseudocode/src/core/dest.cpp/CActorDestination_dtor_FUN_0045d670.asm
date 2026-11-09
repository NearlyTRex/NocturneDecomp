; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_0045d670(CActorDestination *this_ptr,uint flags)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CActorDestinationTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d670
        ;   Label: core_dest.cpp_CActorDestination_dtor_FUN_0045d670
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045d671
    TEST byte ptr [ESP + 0xc],0x4       ; 0045d675
    JNZ 0x0045d696                      ; 0045d67a
        ;   XREF to: 0045d696 (CONDITIONAL_JUMP)  ; LAB_0045d696
    PUSH 0x1                            ; 0045d67c
    PUSH EBX                            ; 0045d67e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0045d67f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045d684
    MOV DL,byte ptr [ESP + 0xc]         ; 0045d687
    MOV EBX,EAX                         ; 0045d68b
    TEST DL,0x2                         ; 0045d68d
    JNZ 0x0045d6b1                      ; 0045d690
        ;   XREF to: 0045d6b1 (CONDITIONAL_JUMP)  ; LAB_0045d6b1
    MOV EAX,EBX                         ; 0045d692
    POP EBX                             ; 0045d694
    RET                                 ; 0045d695
    PUSH 0x5fe930                       ; 0045d696 | g_CActorDestinationTypeInfo
        ;   Label: LAB_0045d696
    PUSH EBX                            ; 0045d69b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0045d69c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0045d6a1
    PUSH EAX                            ; 0045d6a4
    CALL crt_unknown.c_FUN_005c0336     ; 0045d6a5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0045d6aa
    MOV EAX,EBX                         ; 0045d6ad
    POP EBX                             ; 0045d6af
    RET                                 ; 0045d6b0
    PUSH EAX                            ; 0045d6b1
        ;   Label: LAB_0045d6b1
    CALL crt_unknown.c_FUN_005c0344     ; 0045d6b2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0045d6b7
    MOV EAX,EBX                         ; 0045d6ba
    POP EBX                             ; 0045d6bc
    RET                                 ; 0045d6bd

