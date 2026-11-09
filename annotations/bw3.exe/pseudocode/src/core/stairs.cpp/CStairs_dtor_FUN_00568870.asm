; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStairs * core_stairs_cpp_CStairs_dtor_FUN_00568870(CStairs *this_ptr,uint flags)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStairsTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568870
        ;   Label: core_stairs.cpp_CStairs_dtor_FUN_00568870
    MOV EBX,dword ptr [ESP + 0x8]       ; 00568871
    TEST byte ptr [ESP + 0xc],0x4       ; 00568875
    JNZ 0x00568896                      ; 0056887a
        ;   XREF to: 00568896 (CONDITIONAL_JUMP)  ; LAB_00568896
    PUSH 0x1                            ; 0056887c
    PUSH EBX                            ; 0056887e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0056887f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00568884
    MOV DL,byte ptr [ESP + 0xc]         ; 00568887
    MOV EBX,EAX                         ; 0056888b
    TEST DL,0x2                         ; 0056888d
    JNZ 0x005688b1                      ; 00568890
        ;   XREF to: 005688b1 (CONDITIONAL_JUMP)  ; LAB_005688b1
    MOV EAX,EBX                         ; 00568892
    POP EBX                             ; 00568894
    RET                                 ; 00568895
    PUSH 0x5e4eb0                       ; 00568896 | g_CStairsTypeInfo
        ;   Label: LAB_00568896
    PUSH EBX                            ; 0056889b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0056889c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 005688a1
    PUSH EAX                            ; 005688a4
    CALL crt_unknown.c_FUN_005a30b6     ; 005688a5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005688aa
    MOV EAX,EBX                         ; 005688ad
    POP EBX                             ; 005688af
    RET                                 ; 005688b0
    PUSH EAX                            ; 005688b1
        ;   Label: LAB_005688b1
    CALL crt_unknown.c_FUN_005a30c4     ; 005688b2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 005688b7
    MOV EAX,EBX                         ; 005688ba
    POP EBX                             ; 005688bc
    RET                                 ; 005688bd

