; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_00414fe0(CBat *this_ptr,uint flags)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_course.cpp_CCourse_dtor_FUN_004424e0
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414fe0
        ;   Label: core_bat.cpp_CBat_dtor_FUN_00414fe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414fe1
    TEST byte ptr [ESP + 0xc],0x4       ; 00414fe5
    JNZ 0x0041501d                      ; 00414fea
        ;   XREF to: 0041501d (CONDITIONAL_JUMP)  ; LAB_0041501d
    PUSH 0x0                            ; 00414fec
    ADD EBX,0x178                       ; 00414fee
    PUSH EBX                            ; 00414ff4
    CALL core_course.cpp_CCourse_dtor_FUN_004424e0 ; 00414ff5
        ;   XREF to: 004424e0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00414ffa
    PUSH 0x1                            ; 00414ffd
    LEA EBX,[EAX + 0xfffffe88]          ; 00414fff
    PUSH EBX                            ; 00415005
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00415006
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041500b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041500e
    MOV EBX,EAX                         ; 00415012
    TEST DL,0x2                         ; 00415014
    JNZ 0x00415038                      ; 00415017
        ;   XREF to: 00415038 (CONDITIONAL_JUMP)  ; LAB_00415038
    MOV EAX,EBX                         ; 00415019
    POP EBX                             ; 0041501b
    RET                                 ; 0041501c
    PUSH 0x65a570                       ; 0041501d | g_CBatTypeInfo
        ;   Label: LAB_0041501d
    PUSH EBX                            ; 00415022
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00415023
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00415028
    PUSH EAX                            ; 0041502b
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0041502c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00415031
    MOV EAX,EBX                         ; 00415034
    POP EBX                             ; 00415036
    RET                                 ; 00415037
    PUSH EAX                            ; 00415038
        ;   Label: LAB_00415038
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00415039
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0041503e
    MOV EAX,EBX                         ; 00415041
    POP EBX                             ; 00415043
    RET                                 ; 00415044

