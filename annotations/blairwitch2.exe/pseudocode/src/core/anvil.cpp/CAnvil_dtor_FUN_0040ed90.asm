; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040ed90(CAnvil *this_ptr,uint flags)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAnvilTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ed90
        ;   Label: core_anvil.cpp_CAnvil_dtor_FUN_0040ed90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ed91
    TEST byte ptr [ESP + 0xc],0x4       ; 0040ed95
    JNZ 0x0040edb6                      ; 0040ed9a
        ;   XREF to: 0040edb6 (CONDITIONAL_JUMP)  ; LAB_0040edb6
    PUSH 0x1                            ; 0040ed9c
    PUSH EBX                            ; 0040ed9e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0040ed9f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040eda4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040eda7
    MOV EBX,EAX                         ; 0040edab
    TEST DL,0x2                         ; 0040edad
    JNZ 0x0040edd1                      ; 0040edb0
        ;   XREF to: 0040edd1 (CONDITIONAL_JUMP)  ; LAB_0040edd1
    MOV EAX,EBX                         ; 0040edb2
    POP EBX                             ; 0040edb4
    RET                                 ; 0040edb5
    PUSH 0x5f2640                       ; 0040edb6 | g_CAnvilTypeInfo
        ;   Label: LAB_0040edb6
    PUSH EBX                            ; 0040edbb
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0040edbc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0040edc1
    PUSH EAX                            ; 0040edc4
    CALL crt_unknown.c_FUN_005b7fce     ; 0040edc5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0040edca
    MOV EAX,EBX                         ; 0040edcd
    POP EBX                             ; 0040edcf
    RET                                 ; 0040edd0
    PUSH EAX                            ; 0040edd1
        ;   Label: LAB_0040edd1
    CALL crt_unknown.c_FUN_005b7fdc     ; 0040edd2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0040edd7
    MOV EAX,EBX                         ; 0040edda
    POP EBX                             ; 0040eddc
    RET                                 ; 0040eddd

