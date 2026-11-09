; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_00447510(CActorDestination *this_ptr,uint flags)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CActorDestinationTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447510
        ;   Label: core_dest.cpp_CActorDestination_dtor_FUN_00447510
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447511
    TEST byte ptr [ESP + 0xc],0x4       ; 00447515
    JNZ 0x00447536                      ; 0044751a
        ;   XREF to: 00447536 (CONDITIONAL_JUMP)  ; LAB_00447536
    PUSH 0x1                            ; 0044751c
    PUSH EBX                            ; 0044751e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0044751f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00447524
    MOV DL,byte ptr [ESP + 0xc]         ; 00447527
    MOV EBX,EAX                         ; 0044752b
    TEST DL,0x2                         ; 0044752d
    JNZ 0x00447551                      ; 00447530
        ;   XREF to: 00447551 (CONDITIONAL_JUMP)  ; LAB_00447551
    MOV EAX,EBX                         ; 00447532
    POP EBX                             ; 00447534
    RET                                 ; 00447535
    PUSH 0x5f4f80                       ; 00447536 | g_CActorDestinationTypeInfo
        ;   Label: LAB_00447536
    PUSH EBX                            ; 0044753b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0044753c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00447541
    PUSH EAX                            ; 00447544
    CALL crt_unknown.c_FUN_005b7fce     ; 00447545
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0044754a
    MOV EAX,EBX                         ; 0044754d
    POP EBX                             ; 0044754f
    RET                                 ; 00447550
    PUSH EAX                            ; 00447551
        ;   Label: LAB_00447551
    CALL crt_unknown.c_FUN_005b7fdc     ; 00447552
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00447557
    MOV EAX,EBX                         ; 0044755a
    POP EBX                             ; 0044755c
    RET                                 ; 0044755d

