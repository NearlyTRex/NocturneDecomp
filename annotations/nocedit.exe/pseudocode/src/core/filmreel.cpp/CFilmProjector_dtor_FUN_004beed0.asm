; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_004beed0(CFilmProjector *this_ptr,uint flags)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFilmProjectorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004beed0
        ;   Label: core_filmreel.cpp_CFilmProjector_dtor_FUN_004beed0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004beed1
    TEST byte ptr [ESP + 0xc],0x4       ; 004beed5
    JNZ 0x004beef6                      ; 004beeda
        ;   XREF to: 004beef6 (CONDITIONAL_JUMP)  ; LAB_004beef6
    PUSH 0x1                            ; 004beedc
    PUSH EBX                            ; 004beede
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004beedf
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004beee4
    MOV DL,byte ptr [ESP + 0xc]         ; 004beee7
    MOV EBX,EAX                         ; 004beeeb
    TEST DL,0x2                         ; 004beeed
    JNZ 0x004bef11                      ; 004beef0
        ;   XREF to: 004bef11 (CONDITIONAL_JUMP)  ; LAB_004bef11
    MOV EAX,EBX                         ; 004beef2
    POP EBX                             ; 004beef4
    RET                                 ; 004beef5
    PUSH 0x65dc10                       ; 004beef6 | g_CFilmProjectorTypeInfo
        ;   Label: LAB_004beef6
    PUSH EBX                            ; 004beefb
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004beefc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004bef01
    PUSH EAX                            ; 004bef04
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004bef05
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004bef0a
    MOV EAX,EBX                         ; 004bef0d
    POP EBX                             ; 004bef0f
    RET                                 ; 004bef10
    PUSH EAX                            ; 004bef11
        ;   Label: LAB_004bef11
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004bef12
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004bef17
    MOV EAX,EBX                         ; 004bef1a
    POP EBX                             ; 004bef1c
    RET                                 ; 004bef1d

