; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_dest_cpp_CActorDestination_dtor_FUN_0044bbd0(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CActorDestinationTypeInfo_0059bf40
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bbd0
        ;   Label: core_dest.cpp_CActorDestination_dtor_FUN_0044bbd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044bbd1
    TEST byte ptr [ESP + 0xc],0x4       ; 0044bbd5
    JNZ 0x0044bbf6                      ; 0044bbda
        ;   XREF to: 0044bbf6 (CONDITIONAL_JUMP)  ; LAB_0044bbf6
    PUSH 0x1                            ; 0044bbdc
    PUSH EBX                            ; 0044bbde
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0044bbdf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044bbe4
    MOV DL,byte ptr [ESP + 0xc]         ; 0044bbe7
    MOV EBX,EAX                         ; 0044bbeb
    TEST DL,0x2                         ; 0044bbed
    JNZ 0x0044bc11                      ; 0044bbf0
        ;   XREF to: 0044bc11 (CONDITIONAL_JUMP)  ; LAB_0044bc11
    MOV EAX,EBX                         ; 0044bbf2
    POP EBX                             ; 0044bbf4
    RET                                 ; 0044bbf5
    PUSH 0x59bf40                       ; 0044bbf6 | g_CActorDestinationTypeInfo_0059bf40
        ;   Label: LAB_0044bbf6
    PUSH EBX                            ; 0044bbfb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0044bbfc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0044bc01
    PUSH EAX                            ; 0044bc04
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0044bc05
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0044bc0a
    MOV EAX,EBX                         ; 0044bc0d
    POP EBX                             ; 0044bc0f
    RET                                 ; 0044bc10
    PUSH EAX                            ; 0044bc11
        ;   Label: LAB_0044bc11
    CALL crt_unknown.c_FUN_00564494     ; 0044bc12
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0044bc17
    MOV EAX,EBX                         ; 0044bc1a
    POP EBX                             ; 0044bc1c
    RET                                 ; 0044bc1d

