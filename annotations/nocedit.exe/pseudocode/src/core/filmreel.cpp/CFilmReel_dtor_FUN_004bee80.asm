; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_004bee80(CFilmReel *this_ptr,uint flags)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFilmReelTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bee80
        ;   Label: core_filmreel.cpp_CFilmReel_dtor_FUN_004bee80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bee81
    TEST byte ptr [ESP + 0xc],0x4       ; 004bee85
    JNZ 0x004beea6                      ; 004bee8a
        ;   XREF to: 004beea6 (CONDITIONAL_JUMP)  ; LAB_004beea6
    PUSH 0x1                            ; 004bee8c
    PUSH EBX                            ; 004bee8e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004bee8f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bee94
    MOV DL,byte ptr [ESP + 0xc]         ; 004bee97
    MOV EBX,EAX                         ; 004bee9b
    TEST DL,0x2                         ; 004bee9d
    JNZ 0x004beec1                      ; 004beea0
        ;   XREF to: 004beec1 (CONDITIONAL_JUMP)  ; LAB_004beec1
    MOV EAX,EBX                         ; 004beea2
    POP EBX                             ; 004beea4
    RET                                 ; 004beea5
    PUSH 0x65dbf0                       ; 004beea6 | g_CFilmReelTypeInfo
        ;   Label: LAB_004beea6
    PUSH EBX                            ; 004beeab
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004beeac
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004beeb1
    PUSH EAX                            ; 004beeb4
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004beeb5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004beeba
    MOV EAX,EBX                         ; 004beebd
    POP EBX                             ; 004beebf
    RET                                 ; 004beec0
    PUSH EAX                            ; 004beec1
        ;   Label: LAB_004beec1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004beec2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004beec7
    MOV EAX,EBX                         ; 004beeca
    POP EBX                             ; 004beecc
    RET                                 ; 004beecd

