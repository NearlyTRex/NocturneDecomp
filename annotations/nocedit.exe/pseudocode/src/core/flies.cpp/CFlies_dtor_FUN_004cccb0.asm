; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004cccb0(CFlies *this_ptr,uint flags)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFliesTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_flies.cpp_SFly_arrdtor200_FUN_004ccd60
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cccb0
        ;   Label: core_flies.cpp_CFlies_dtor_FUN_004cccb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cccb1
    TEST byte ptr [ESP + 0xc],0x4       ; 004cccb5
    JNZ 0x004ccced                      ; 004cccba
        ;   XREF to: 004ccced (CONDITIONAL_JUMP)  ; LAB_004ccced
    PUSH 0x0                            ; 004cccbc
    ADD EBX,0x168                       ; 004cccbe
    PUSH EBX                            ; 004cccc4
    CALL core_flies.cpp_SFly_arrdtor200_FUN_004ccd60 ; 004cccc5
        ;   XREF to: 004ccd60 (UNCONDITIONAL_CALL)  ; SFly * core_flies.cpp_SFly_arrdtor200_FUN_004ccd60(SFly * objs, uint flags)
    ADD ESP,0x8                         ; 004cccca
    PUSH 0x1                            ; 004ccccd
    LEA EBX,[EAX + 0xfffffe98]          ; 004ccccf
    PUSH EBX                            ; 004cccd5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004cccd6
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cccdb
    MOV DL,byte ptr [ESP + 0xc]         ; 004cccde
    MOV EBX,EAX                         ; 004ccce2
    TEST DL,0x2                         ; 004ccce4
    JNZ 0x004ccd08                      ; 004ccce7
        ;   XREF to: 004ccd08 (CONDITIONAL_JUMP)  ; LAB_004ccd08
    MOV EAX,EBX                         ; 004ccce9
    POP EBX                             ; 004ccceb
    RET                                 ; 004cccec
    PUSH 0x65e630                       ; 004ccced | g_CFliesTypeInfo
        ;   Label: LAB_004ccced
    PUSH EBX                            ; 004cccf2
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004cccf3
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cccf8
    PUSH EAX                            ; 004cccfb
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004cccfc
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004ccd01
    MOV EAX,EBX                         ; 004ccd04
    POP EBX                             ; 004ccd06
    RET                                 ; 004ccd07
    PUSH EAX                            ; 004ccd08
        ;   Label: LAB_004ccd08
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004ccd09
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004ccd0e
    MOV EAX,EBX                         ; 004ccd11
    POP EBX                             ; 004ccd13
    RET                                 ; 004ccd14

