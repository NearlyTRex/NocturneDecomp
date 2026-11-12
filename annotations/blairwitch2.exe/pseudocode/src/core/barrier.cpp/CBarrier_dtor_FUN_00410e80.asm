; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_00410e80(CBarrier *this_ptr,uint flags)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBarrierTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410e80
        ;   Label: core_barrier.cpp_CBarrier_dtor_FUN_00410e80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410e81
    TEST byte ptr [ESP + 0xc],0x4       ; 00410e85
    JNZ 0x00410ea6                      ; 00410e8a
        ;   XREF to: 00410ea6 (CONDITIONAL_JUMP)  ; LAB_00410ea6
    PUSH 0x1                            ; 00410e8c
    PUSH EBX                            ; 00410e8e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00410e8f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00410e94
    MOV DL,byte ptr [ESP + 0xc]         ; 00410e97
    MOV EBX,EAX                         ; 00410e9b
    TEST DL,0x2                         ; 00410e9d
    JNZ 0x00410ec1                      ; 00410ea0
        ;   XREF to: 00410ec1 (CONDITIONAL_JUMP)  ; LAB_00410ec1
    MOV EAX,EBX                         ; 00410ea2
    POP EBX                             ; 00410ea4
    RET                                 ; 00410ea5
    PUSH 0x5f2d70                       ; 00410ea6 | g_CBarrierTypeInfo
        ;   Label: LAB_00410ea6
    PUSH EBX                            ; 00410eab
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00410eac
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00410eb1
    PUSH EAX                            ; 00410eb4
    CALL crt_unknown.c_FUN_005b7fce     ; 00410eb5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00410eba
    MOV EAX,EBX                         ; 00410ebd
    POP EBX                             ; 00410ebf
    RET                                 ; 00410ec0
    PUSH EAX                            ; 00410ec1
        ;   Label: LAB_00410ec1
    CALL crt_unknown.c_FUN_005b7fdc     ; 00410ec2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00410ec7
    MOV EAX,EBX                         ; 00410eca
    POP EBX                             ; 00410ecc
    RET                                 ; 00410ecd

