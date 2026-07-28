; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_boxactor_cpp_CBoxActor_dtor_FUN_0041fa90(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoxActorTypeInfo_0059acd0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_box.cpp_CBox_dtor_FUN_0041a6c0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041fa90
        ;   Label: core_boxactor.cpp_CBoxActor_dtor_FUN_0041fa90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041fa91
    TEST byte ptr [ESP + 0xc],0x4       ; 0041fa95
    JNZ 0x0041facd                      ; 0041fa9a
        ;   XREF to: 0041facd (CONDITIONAL_JUMP)  ; LAB_0041facd
    PUSH 0x0                            ; 0041fa9c
    ADD EBX,0x38c                       ; 0041fa9e
    PUSH EBX                            ; 0041faa4
    CALL core_box.cpp_CBox_dtor_FUN_0041a6c0 ; 0041faa5
        ;   XREF to: 0041a6c0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041a6c0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041faaa
    PUSH 0x1                            ; 0041faad
    LEA EBX,[EAX + 0xfffffc74]          ; 0041faaf
    PUSH EBX                            ; 0041fab5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0041fab6
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041fabb
    MOV DL,byte ptr [ESP + 0xc]         ; 0041fabe
    MOV EBX,EAX                         ; 0041fac2
    TEST DL,0x2                         ; 0041fac4
    JNZ 0x0041fae8                      ; 0041fac7
        ;   XREF to: 0041fae8 (CONDITIONAL_JUMP)  ; LAB_0041fae8
    MOV EAX,EBX                         ; 0041fac9
    POP EBX                             ; 0041facb
    RET                                 ; 0041facc
    PUSH 0x59acd0                       ; 0041facd | g_CBoxActorTypeInfo_0059acd0
        ;   Label: LAB_0041facd
    PUSH EBX                            ; 0041fad2
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0041fad3
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0041fad8
    PUSH EAX                            ; 0041fadb
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0041fadc
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0041fae1
    MOV EAX,EBX                         ; 0041fae4
    POP EBX                             ; 0041fae6
    RET                                 ; 0041fae7
    PUSH EAX                            ; 0041fae8
        ;   Label: LAB_0041fae8
    CALL crt_unknown.c_FUN_00564494     ; 0041fae9
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0041faee
    MOV EAX,EBX                         ; 0041faf1
    POP EBX                             ; 0041faf3
    RET                                 ; 0041faf4

