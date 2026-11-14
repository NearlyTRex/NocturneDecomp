; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00410780(CBaron *this_ptr,uint flags)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBaronTypeInfo
;
; Called Functions:
;   core_hero.cpp_FUN_004ea980
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410780
        ;   Label: core_baron.cpp_CBaron_dtor_FUN_00410780
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410781
    TEST byte ptr [ESP + 0xc],0x4       ; 00410785
    JNZ 0x004107a6                      ; 0041078a
        ;   XREF to: 004107a6 (CONDITIONAL_JUMP)  ; LAB_004107a6
    PUSH 0x1                            ; 0041078c
    PUSH EBX                            ; 0041078e
    CALL core_hero.cpp_FUN_004ea980     ; 0041078f
        ;   XREF to: 004ea980 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ea980()
    ADD ESP,0x8                         ; 00410794
    MOV DL,byte ptr [ESP + 0xc]         ; 00410797
    MOV EBX,EAX                         ; 0041079b
    TEST DL,0x2                         ; 0041079d
    JNZ 0x004107c1                      ; 004107a0
        ;   XREF to: 004107c1 (CONDITIONAL_JUMP)  ; LAB_004107c1
    MOV EAX,EBX                         ; 004107a2
    POP EBX                             ; 004107a4
    RET                                 ; 004107a5
    PUSH 0x5fbd50                       ; 004107a6 | g_CBaronTypeInfo
        ;   Label: LAB_004107a6
    PUSH EBX                            ; 004107ab
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004107ac
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004107b1
    PUSH EAX                            ; 004107b4
    CALL crt_unknown.c_FUN_005c0336     ; 004107b5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004107ba
    MOV EAX,EBX                         ; 004107bd
    POP EBX                             ; 004107bf
    RET                                 ; 004107c0
    PUSH EAX                            ; 004107c1
        ;   Label: LAB_004107c1
    CALL crt_unknown.c_FUN_005c0344     ; 004107c2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004107c7
    MOV EAX,EBX                         ; 004107ca
    POP EBX                             ; 004107cc
    RET                                 ; 004107cd

