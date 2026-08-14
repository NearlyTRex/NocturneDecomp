; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlass * __cdecl core_glass_cpp_CGlass_dtor_FUN_004eb820(CGlass *this_ptr,uint flags)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGlassTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_glass.cpp_CVector3f_arrdtor_FUN_004eb8a0
;   core_mirror.cpp_CMirror_dtor_FUN_005213e0
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb820
        ;   Label: core_glass.cpp_CGlass_dtor_FUN_004eb820
    MOV EBX,dword ptr [ESP + 0x8]       ; 004eb821
    TEST byte ptr [ESP + 0xc],0x4       ; 004eb825
    JNZ 0x004eb86d                      ; 004eb82a
        ;   XREF to: 004eb86d (CONDITIONAL_JUMP)  ; LAB_004eb86d
    PUSH 0x0                            ; 004eb82c
    ADD EBX,0x38c                       ; 004eb82e
    PUSH EBX                            ; 004eb834
    CALL core_glass.cpp_CVector3f_arrdtor_FUN_004eb8a0 ; 004eb835
        ;   XREF to: 004eb8a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_glass.cpp_CVector3f_arrdtor_FUN_004eb8a0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004eb83a
    PUSH 0x0                            ; 004eb83d
    SUB EAX,0x1a0                       ; 004eb83f
    PUSH EAX                            ; 004eb844
    CALL core_mirror.cpp_CMirror_dtor_FUN_005213e0 ; 004eb845
        ;   XREF to: 005213e0 (UNCONDITIONAL_CALL)  ; CMirror * core_mirror.cpp_CMirror_dtor_FUN_005213e0(CMirror * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004eb84a
    PUSH 0x1                            ; 004eb84d
    LEA EBX,[EAX + 0xfffffe14]          ; 004eb84f
    PUSH EBX                            ; 004eb855
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004eb856
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004eb85b
    MOV DL,byte ptr [ESP + 0xc]         ; 004eb85e
    MOV EBX,EAX                         ; 004eb862
    TEST DL,0x2                         ; 004eb864
    JNZ 0x004eb888                      ; 004eb867
        ;   XREF to: 004eb888 (CONDITIONAL_JUMP)  ; LAB_004eb888
    MOV EAX,EBX                         ; 004eb869
    POP EBX                             ; 004eb86b
    RET                                 ; 004eb86c
    PUSH 0x65efe0                       ; 004eb86d | g_CGlassTypeInfo
        ;   Label: LAB_004eb86d
    PUSH EBX                            ; 004eb872
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004eb873
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004eb878
    PUSH EAX                            ; 004eb87b
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004eb87c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004eb881
    MOV EAX,EBX                         ; 004eb884
    POP EBX                             ; 004eb886
    RET                                 ; 004eb887
    PUSH EAX                            ; 004eb888
        ;   Label: LAB_004eb888
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004eb889
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004eb88e
    MOV EAX,EBX                         ; 004eb891
    POP EBX                             ; 004eb893
    RET                                 ; 004eb894

