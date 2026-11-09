; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_004e2560(CLever *this_ptr,uint flags)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLeverTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2560
        ;   Label: core_lever.cpp_CLever_dtor_FUN_004e2560
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e2561
    TEST byte ptr [ESP + 0xc],0x4       ; 004e2565
    JNZ 0x004e2586                      ; 004e256a
        ;   XREF to: 004e2586 (CONDITIONAL_JUMP)  ; LAB_004e2586
    PUSH 0x1                            ; 004e256c
    PUSH EBX                            ; 004e256e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004e256f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e2574
    MOV DL,byte ptr [ESP + 0xc]         ; 004e2577
    MOV EBX,EAX                         ; 004e257b
    TEST DL,0x2                         ; 004e257d
    JNZ 0x004e25a1                      ; 004e2580
        ;   XREF to: 004e25a1 (CONDITIONAL_JUMP)  ; LAB_004e25a1
    MOV EAX,EBX                         ; 004e2582
    POP EBX                             ; 004e2584
    RET                                 ; 004e2585
    PUSH 0x5f9590                       ; 004e2586 | g_CLeverTypeInfo
        ;   Label: LAB_004e2586
    PUSH EBX                            ; 004e258b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004e258c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e2591
    PUSH EAX                            ; 004e2594
    CALL crt_unknown.c_FUN_005b7fce     ; 004e2595
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004e259a
    MOV EAX,EBX                         ; 004e259d
    POP EBX                             ; 004e259f
    RET                                 ; 004e25a0
    PUSH EAX                            ; 004e25a1
        ;   Label: LAB_004e25a1
    CALL crt_unknown.c_FUN_005b7fdc     ; 004e25a2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e25a7
    MOV EAX,EBX                         ; 004e25aa
    POP EBX                             ; 004e25ac
    RET                                 ; 004e25ad

