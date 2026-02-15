; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_004235f0(CLightActor *this_ptr,uint flags)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_box.cpp_CBox_dtor_FUN_0041dd00
;   core_dlight.cpp_CDemonLight_dtor_FUN_00472760
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004235f0
        ;   Label: core_boxactor.cpp_CLightActor_dtor_FUN_004235f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004235f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004235f5
    JNZ 0x0042363d                      ; 004235fa
        ;   XREF to: 0042363d (CONDITIONAL_JUMP)  ; LAB_0042363d
    PUSH 0x0                            ; 004235fc
    ADD EBX,0x670                       ; 004235fe
    PUSH EBX                            ; 00423604
    CALL core_dlight.cpp_CDemonLight_dtor_FUN_00472760 ; 00423605
        ;   XREF to: 00472760 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_dtor_FUN_00472760(CDemonLight * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042360a
    PUSH 0x0                            ; 0042360d
    SUB EAX,0x2dc                       ; 0042360f
    PUSH EAX                            ; 00423614
    CALL core_box.cpp_CBox_dtor_FUN_0041dd00 ; 00423615
        ;   XREF to: 0041dd00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dd00(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042361a
    PUSH 0x1                            ; 0042361d
    LEA EBX,[EAX + 0xfffffc6c]          ; 0042361f
    PUSH EBX                            ; 00423625
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00423626
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042362b
    MOV DL,byte ptr [ESP + 0xc]         ; 0042362e
    MOV EBX,EAX                         ; 00423632
    TEST DL,0x2                         ; 00423634
    JNZ 0x00423658                      ; 00423637
        ;   XREF to: 00423658 (CONDITIONAL_JUMP)  ; LAB_00423658
    MOV EAX,EBX                         ; 00423639
    POP EBX                             ; 0042363b
    RET                                 ; 0042363c
    PUSH 0x65b3b0                       ; 0042363d | g_CLightActorTypeInfo
        ;   Label: LAB_0042363d
    PUSH EBX                            ; 00423642
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00423643
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00423648
    PUSH EAX                            ; 0042364b
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0042364c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00423651
    MOV EAX,EBX                         ; 00423654
    POP EBX                             ; 00423656
    RET                                 ; 00423657
    PUSH EAX                            ; 00423658
        ;   Label: LAB_00423658
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00423659
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0042365e
    MOV EAX,EBX                         ; 00423661
    POP EBX                             ; 00423663
    RET                                 ; 00423664

