; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlass * __cdecl core_glass_cpp_CGlass_dtor_FUN_004cc5f0(CGlass *this_ptr,uint flags)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGlassTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_mirror.cpp_FUN_004f3fe0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc5f0
        ;   Label: core_glass.cpp_CGlass_dtor_FUN_004cc5f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cc5f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004cc5f5
    JNZ 0x004cc62d                      ; 004cc5fa
        ;   XREF to: 004cc62d (CONDITIONAL_JUMP)  ; LAB_004cc62d
    PUSH 0x0                            ; 004cc5fc
    ADD EBX,0x21c                       ; 004cc5fe
    PUSH EBX                            ; 004cc604
    CALL core_mirror.cpp_FUN_004f3fe0   ; 004cc605
        ;   XREF to: 004f3fe0 (UNCONDITIONAL_CALL)  ; CMirror * core_mirror.cpp_FUN_004f3fe0(CMirror * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cc60a
    PUSH 0x1                            ; 004cc60d
    LEA EBX,[EAX + 0xfffffde4]          ; 004cc60f
    PUSH EBX                            ; 004cc615
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004cc616
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cc61b
    MOV DL,byte ptr [ESP + 0xc]         ; 004cc61e
    MOV EBX,EAX                         ; 004cc622
    TEST DL,0x2                         ; 004cc624
    JNZ 0x004cc648                      ; 004cc627
        ;   XREF to: 004cc648 (CONDITIONAL_JUMP)  ; LAB_004cc648
    MOV EAX,EBX                         ; 004cc629
    POP EBX                             ; 004cc62b
    RET                                 ; 004cc62c
    PUSH 0x5e0cc0                       ; 004cc62d | g_CGlassTypeInfo
        ;   Label: LAB_004cc62d
    PUSH EBX                            ; 004cc632
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004cc633
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cc638
    PUSH EAX                            ; 004cc63b
    CALL crt_unknown.c_FUN_005a30b6     ; 004cc63c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004cc641
    MOV EAX,EBX                         ; 004cc644
    POP EBX                             ; 004cc646
    RET                                 ; 004cc647
    PUSH EAX                            ; 004cc648
        ;   Label: LAB_004cc648
    CALL crt_unknown.c_FUN_005a30c4     ; 004cc649
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004cc64e
    MOV EAX,EBX                         ; 004cc651
    POP EBX                             ; 004cc653
    RET                                 ; 004cc654

