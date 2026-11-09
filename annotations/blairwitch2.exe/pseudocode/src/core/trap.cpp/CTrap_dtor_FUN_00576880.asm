; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_00576880(CTrap *this_ptr,uint flags)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTrapTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576880
        ;   Label: core_trap.cpp_CTrap_dtor_FUN_00576880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00576881
    TEST byte ptr [ESP + 0xc],0x4       ; 00576885
    JNZ 0x005768a6                      ; 0057688a
        ;   XREF to: 005768a6 (CONDITIONAL_JUMP)  ; LAB_005768a6
    PUSH 0x1                            ; 0057688c
    PUSH EBX                            ; 0057688e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0057688f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00576894
    MOV DL,byte ptr [ESP + 0xc]         ; 00576897
    MOV EBX,EAX                         ; 0057689b
    TEST DL,0x2                         ; 0057689d
    JNZ 0x005768c1                      ; 005768a0
        ;   XREF to: 005768c1 (CONDITIONAL_JUMP)  ; LAB_005768c1
    MOV EAX,EBX                         ; 005768a2
    POP EBX                             ; 005768a4
    RET                                 ; 005768a5
    PUSH 0x5fd0b0                       ; 005768a6 | g_CTrapTypeInfo
        ;   Label: LAB_005768a6
    PUSH EBX                            ; 005768ab
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005768ac
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005768b1
    PUSH EAX                            ; 005768b4
    CALL crt_unknown.c_FUN_005b7fce     ; 005768b5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005768ba
    MOV EAX,EBX                         ; 005768bd
    POP EBX                             ; 005768bf
    RET                                 ; 005768c0
    PUSH EAX                            ; 005768c1
        ;   Label: LAB_005768c1
    CALL crt_unknown.c_FUN_005b7fdc     ; 005768c2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005768c7
    MOV EAX,EBX                         ; 005768ca
    POP EBX                             ; 005768cc
    RET                                 ; 005768cd

