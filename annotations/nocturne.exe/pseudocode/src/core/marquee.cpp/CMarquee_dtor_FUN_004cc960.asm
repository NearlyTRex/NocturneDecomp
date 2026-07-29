; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMarquee * __cdecl core_marquee_cpp_CMarquee_dtor_FUN_004cc960(CMarquee *this_ptr,uint flags)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMarqueeTypeInfo_005a03b0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_course.cpp_CDemonTriangle_arrdtor_FUN_0043b5f0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc960
        ;   Label: core_marquee.cpp_CMarquee_dtor_FUN_004cc960
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cc961
    TEST byte ptr [ESP + 0xc],0x4       ; 004cc965
    JNZ 0x004cc99d                      ; 004cc96a
        ;   XREF to: 004cc99d (CONDITIONAL_JUMP)  ; LAB_004cc99d
    PUSH 0x0                            ; 004cc96c
    ADD EBX,0x19c                       ; 004cc96e
    PUSH EBX                            ; 004cc974
    CALL core_course.cpp_CDemonTriangle_arrdtor_FUN_0043b5f0 ; 004cc975
        ;   XREF to: 0043b5f0 (UNCONDITIONAL_CALL)  ; CDemonTriangle * core_course.cpp_CDemonTriangle_arrdtor_FUN_0043b5f0(CDemonTriangle * objs, uint flags)
    ADD ESP,0x8                         ; 004cc97a
    PUSH 0x1                            ; 004cc97d
    LEA EBX,[EAX + 0xfffffe64]          ; 004cc97f
    PUSH EBX                            ; 004cc985
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004cc986
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cc98b
    MOV DL,byte ptr [ESP + 0xc]         ; 004cc98e
    MOV EBX,EAX                         ; 004cc992
    TEST DL,0x2                         ; 004cc994
    JNZ 0x004cc9b8                      ; 004cc997
        ;   XREF to: 004cc9b8 (CONDITIONAL_JUMP)  ; LAB_004cc9b8
    MOV EAX,EBX                         ; 004cc999
    POP EBX                             ; 004cc99b
    RET                                 ; 004cc99c
    PUSH 0x5a03b0                       ; 004cc99d | g_CMarqueeTypeInfo_005a03b0
        ;   Label: LAB_004cc99d
    PUSH EBX                            ; 004cc9a2
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004cc9a3
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cc9a8
    PUSH EAX                            ; 004cc9ab
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004cc9ac
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004cc9b1
    MOV EAX,EBX                         ; 004cc9b4
    POP EBX                             ; 004cc9b6
    RET                                 ; 004cc9b7
    PUSH EAX                            ; 004cc9b8
        ;   Label: LAB_004cc9b8
    CALL crt_unknown.c_FUN_00564494     ; 004cc9b9
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004cc9be
    MOV EAX,EBX                         ; 004cc9c1
    POP EBX                             ; 004cc9c3
    RET                                 ; 004cc9c4

