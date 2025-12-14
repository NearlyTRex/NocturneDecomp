; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDrip * core_drip.cpp_dtor_FUN_0048ea90(CDrip * this_ptr, uint d1, uint d2)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CDripTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ea90
        ;   Label: core_drip.cpp_dtor_FUN_0048ea90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048ea91
    TEST byte ptr [ESP + 0xc],0x4       ; 0048ea95
    JNZ 0x0048eab6                      ; 0048ea9a
        ;   XREF to: 0048eab6 (CONDITIONAL_JUMP)  ; LAB_0048eab6
    PUSH 0x1                            ; 0048ea9c
    PUSH EBX                            ; 0048ea9e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0048ea9f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 0048eaa4
    MOV DL,byte ptr [ESP + 0xc]         ; 0048eaa7
    MOV EBX,EAX                         ; 0048eaab
    TEST DL,0x2                         ; 0048eaad
    JNZ 0x0048ead1                      ; 0048eab0
        ;   XREF to: 0048ead1 (CONDITIONAL_JUMP)  ; LAB_0048ead1
    MOV EAX,EBX                         ; 0048eab2
    POP EBX                             ; 0048eab4
    RET                                 ; 0048eab5
    PUSH 0x65d070                       ; 0048eab6 | g_CDripTypeInfo
        ;   Label: LAB_0048eab6
    PUSH EBX                            ; 0048eabb
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0048eabc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0048eac1
    PUSH EAX                            ; 0048eac4
    CALL crt_memory.c_free_FUN_005fe659 ; 0048eac5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0048eaca
    MOV EAX,EBX                         ; 0048eacd
    POP EBX                             ; 0048eacf
    RET                                 ; 0048ead0
    PUSH EAX                            ; 0048ead1
        ;   Label: LAB_0048ead1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0048ead2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0048ead7
    MOV EAX,EBX                         ; 0048eada
    POP EBX                             ; 0048eadc
    RET                                 ; 0048eadd

