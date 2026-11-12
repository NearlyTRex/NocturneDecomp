; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_004cb760(CGabriella *this_ptr,uint flags)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGabriellaTypeInfo
;
; Called Functions:
;   core_cloth.cpp_FUN_0043e620
;   core_hero.cpp_FUN_004ea980
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb760
        ;   Label: core_gabriela.cpp_CGabriella_dtor_FUN_004cb760
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cb761
    TEST byte ptr [ESP + 0xc],0x4       ; 004cb765
    JNZ 0x004cb79d                      ; 004cb76a
        ;   XREF to: 004cb79d (CONDITIONAL_JUMP)  ; LAB_004cb79d
    PUSH 0x0                            ; 004cb76c
    ADD EBX,0x1ffec                     ; 004cb76e
    PUSH EBX                            ; 004cb774
    CALL core_cloth.cpp_FUN_0043e620    ; 004cb775
        ;   XREF to: 0043e620 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043e620()
    ADD ESP,0x8                         ; 004cb77a
    PUSH 0x1                            ; 004cb77d
    LEA EBX,[EAX + 0xfffe0014]          ; 004cb77f
    PUSH EBX                            ; 004cb785
    CALL core_hero.cpp_FUN_004ea980     ; 004cb786
        ;   XREF to: 004ea980 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ea980()
    ADD ESP,0x8                         ; 004cb78b
    MOV DL,byte ptr [ESP + 0xc]         ; 004cb78e
    MOV EBX,EAX                         ; 004cb792
    TEST DL,0x2                         ; 004cb794
    JNZ 0x004cb7b8                      ; 004cb797
        ;   XREF to: 004cb7b8 (CONDITIONAL_JUMP)  ; LAB_004cb7b8
    MOV EAX,EBX                         ; 004cb799
    POP EBX                             ; 004cb79b
    RET                                 ; 004cb79c
    PUSH 0x600f10                       ; 004cb79d | g_CGabriellaTypeInfo
        ;   Label: LAB_004cb79d
    PUSH EBX                            ; 004cb7a2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004cb7a3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cb7a8
    PUSH EAX                            ; 004cb7ab
    CALL crt_unknown.c_FUN_005c0336     ; 004cb7ac
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004cb7b1
    MOV EAX,EBX                         ; 004cb7b4
    POP EBX                             ; 004cb7b6
    RET                                 ; 004cb7b7
    PUSH EAX                            ; 004cb7b8
        ;   Label: LAB_004cb7b8
    CALL crt_unknown.c_FUN_005c0344     ; 004cb7b9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004cb7be
    MOV EAX,EBX                         ; 004cb7c1
    POP EBX                             ; 004cb7c3
    RET                                 ; 004cb7c4

