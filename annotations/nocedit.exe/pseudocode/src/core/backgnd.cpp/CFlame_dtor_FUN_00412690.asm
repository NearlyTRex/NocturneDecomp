; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFlame * __cdecl core_backgnd_cpp_CFlame_dtor_FUN_00412690(CFlame *this_ptr,uint d1,uint d2)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412690
        ;   Label: core_backgnd.cpp_CFlame_dtor_FUN_00412690
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412691
    TEST byte ptr [ESP + 0xc],0x4       ; 00412695
    JNZ 0x004126b6                      ; 0041269a
        ;   XREF to: 004126b6 (CONDITIONAL_JUMP)  ; LAB_004126b6
    PUSH 0x1                            ; 0041269c
    PUSH EBX                            ; 0041269e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0041269f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004126a4
    MOV DL,byte ptr [ESP + 0xc]         ; 004126a7
    MOV EBX,EAX                         ; 004126ab
    TEST DL,0x2                         ; 004126ad
    JNZ 0x004126d1                      ; 004126b0
        ;   XREF to: 004126d1 (CONDITIONAL_JUMP)  ; LAB_004126d1
    MOV EAX,EBX                         ; 004126b2
    POP EBX                             ; 004126b4
    RET                                 ; 004126b5
    PUSH 0x659ee0                       ; 004126b6 | g_CFlameTypeInfo
        ;   Label: LAB_004126b6
    PUSH EBX                            ; 004126bb
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004126bc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004126c1
    PUSH EAX                            ; 004126c4
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004126c5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004126ca
    MOV EAX,EBX                         ; 004126cd
    POP EBX                             ; 004126cf
    RET                                 ; 004126d0
    PUSH EAX                            ; 004126d1
        ;   Label: LAB_004126d1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004126d2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004126d7
    MOV EAX,EBX                         ; 004126da
    POP EBX                             ; 004126dc
    RET                                 ; 004126dd

