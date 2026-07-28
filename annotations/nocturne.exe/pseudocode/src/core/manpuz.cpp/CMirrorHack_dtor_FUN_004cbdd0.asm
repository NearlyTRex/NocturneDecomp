; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_manpuz_cpp_CMirrorHack_dtor_FUN_004cbdd0(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CMirrorHackTypeInfo_005a0270
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbdd0
        ;   Label: core_manpuz.cpp_CMirrorHack_dtor_FUN_004cbdd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cbdd1
    TEST byte ptr [ESP + 0xc],0x4       ; 004cbdd5
    JNZ 0x004cbdf6                      ; 004cbdda
        ;   XREF to: 004cbdf6 (CONDITIONAL_JUMP)  ; LAB_004cbdf6
    PUSH 0x1                            ; 004cbddc
    PUSH EBX                            ; 004cbdde
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004cbddf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cbde4
    MOV DL,byte ptr [ESP + 0xc]         ; 004cbde7
    MOV EBX,EAX                         ; 004cbdeb
    TEST DL,0x2                         ; 004cbded
    JNZ 0x004cbe11                      ; 004cbdf0
        ;   XREF to: 004cbe11 (CONDITIONAL_JUMP)  ; LAB_004cbe11
    MOV EAX,EBX                         ; 004cbdf2
    POP EBX                             ; 004cbdf4
    RET                                 ; 004cbdf5
    PUSH 0x5a0270                       ; 004cbdf6 | g_CMirrorHackTypeInfo_005a0270
        ;   Label: LAB_004cbdf6
    PUSH EBX                            ; 004cbdfb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004cbdfc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cbe01
    PUSH EAX                            ; 004cbe04
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004cbe05
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004cbe0a
    MOV EAX,EBX                         ; 004cbe0d
    POP EBX                             ; 004cbe0f
    RET                                 ; 004cbe10
    PUSH EAX                            ; 004cbe11
        ;   Label: LAB_004cbe11
    CALL crt_unknown.c_FUN_00564494     ; 004cbe12
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004cbe17
    MOV EAX,EBX                         ; 004cbe1a
    POP EBX                             ; 004cbe1c
    RET                                 ; 004cbe1d

