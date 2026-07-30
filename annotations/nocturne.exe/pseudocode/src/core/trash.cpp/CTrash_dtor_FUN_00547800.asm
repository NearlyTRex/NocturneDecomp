; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_trash_cpp_CTrash_dtor_FUN_00547800(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CTrashTypeInfo_005a3620
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547800
        ;   Label: core_trash.cpp_CTrash_dtor_FUN_00547800
    MOV EBX,dword ptr [ESP + 0x8]       ; 00547801
    TEST byte ptr [ESP + 0xc],0x4       ; 00547805
    JNZ 0x00547826                      ; 0054780a
        ;   XREF to: 00547826 (CONDITIONAL_JUMP)  ; LAB_00547826
    PUSH 0x1                            ; 0054780c
    PUSH EBX                            ; 0054780e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0054780f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00547814
    MOV DL,byte ptr [ESP + 0xc]         ; 00547817
    MOV EBX,EAX                         ; 0054781b
    TEST DL,0x2                         ; 0054781d
    JNZ 0x00547841                      ; 00547820
        ;   XREF to: 00547841 (CONDITIONAL_JUMP)  ; LAB_00547841
    MOV EAX,EBX                         ; 00547822
    POP EBX                             ; 00547824
    RET                                 ; 00547825
    PUSH 0x5a3620                       ; 00547826 | g_CTrashTypeInfo_005a3620
        ;   Label: LAB_00547826
    PUSH EBX                            ; 0054782b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0054782c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00547831
    PUSH EAX                            ; 00547834
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00547835
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0054783a
    MOV EAX,EBX                         ; 0054783d
    POP EBX                             ; 0054783f
    RET                                 ; 00547840
    PUSH EAX                            ; 00547841
        ;   Label: LAB_00547841
    CALL crt_unknown.c_FUN_00564494     ; 00547842
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00547847
    MOV EAX,EBX                         ; 0054784a
    POP EBX                             ; 0054784c
    RET                                 ; 0054784d

