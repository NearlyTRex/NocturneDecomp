; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_0040ec90(CBarrier *this_ptr,uint flags)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBarrierTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ec90
        ;   Label: core_barrier.cpp_CBarrier_dtor_FUN_0040ec90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ec91
    TEST byte ptr [ESP + 0xc],0x4       ; 0040ec95
    JNZ 0x0040ecb6                      ; 0040ec9a
        ;   XREF to: 0040ecb6 (CONDITIONAL_JUMP)  ; LAB_0040ecb6
    PUSH 0x1                            ; 0040ec9c
    PUSH EBX                            ; 0040ec9e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0040ec9f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040eca4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040eca7
    MOV EBX,EAX                         ; 0040ecab
    TEST DL,0x2                         ; 0040ecad
    JNZ 0x0040ecd1                      ; 0040ecb0
        ;   XREF to: 0040ecd1 (CONDITIONAL_JUMP)  ; LAB_0040ecd1
    MOV EAX,EBX                         ; 0040ecb2
    POP EBX                             ; 0040ecb4
    RET                                 ; 0040ecb5
    PUSH 0x5db750                       ; 0040ecb6 | g_CBarrierTypeInfo
        ;   Label: LAB_0040ecb6
    PUSH EBX                            ; 0040ecbb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0040ecbc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0040ecc1
    PUSH EAX                            ; 0040ecc4
    CALL crt_unknown.c_FUN_005a30b6     ; 0040ecc5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0040ecca
    MOV EAX,EBX                         ; 0040eccd
    POP EBX                             ; 0040eccf
    RET                                 ; 0040ecd0
    PUSH EAX                            ; 0040ecd1
        ;   Label: LAB_0040ecd1
    CALL crt_unknown.c_FUN_005a30c4     ; 0040ecd2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0040ecd7
    MOV EAX,EBX                         ; 0040ecda
    POP EBX                             ; 0040ecdc
    RET                                 ; 0040ecdd

