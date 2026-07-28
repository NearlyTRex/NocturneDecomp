; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_glass_cpp_FUN_004adef0(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CGlassTypeInfo_0059e490
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_glass.cpp_CVector3f_arrdtor_FUN_004adf70
;   core_mirror.cpp_CMirror_dtor_FUN_004d6570
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004adef0
        ;   Label: core_glass.cpp_FUN_004adef0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004adef1
    TEST byte ptr [ESP + 0xc],0x4       ; 004adef5
    JNZ 0x004adf3d                      ; 004adefa
        ;   XREF to: 004adf3d (CONDITIONAL_JUMP)  ; LAB_004adf3d
    PUSH 0x0                            ; 004adefc
    ADD EBX,0x384                       ; 004adefe
    PUSH EBX                            ; 004adf04
    CALL core_glass.cpp_CVector3f_arrdtor_FUN_004adf70 ; 004adf05
        ;   XREF to: 004adf70 (UNCONDITIONAL_CALL)  ; CVector3f * core_glass.cpp_CVector3f_arrdtor_FUN_004adf70(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 004adf0a
    PUSH 0x0                            ; 004adf0d
    SUB EAX,0x1a0                       ; 004adf0f
    PUSH EAX                            ; 004adf14
    CALL core_mirror.cpp_CMirror_dtor_FUN_004d6570 ; 004adf15
        ;   XREF to: 004d6570 (UNCONDITIONAL_CALL)  ; CMirror * core_mirror.cpp_CMirror_dtor_FUN_004d6570(CMirror * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004adf1a
    PUSH 0x1                            ; 004adf1d
    LEA EBX,[EAX + 0xfffffe1c]          ; 004adf1f
    PUSH EBX                            ; 004adf25
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004adf26
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004adf2b
    MOV DL,byte ptr [ESP + 0xc]         ; 004adf2e
    MOV EBX,EAX                         ; 004adf32
    TEST DL,0x2                         ; 004adf34
    JNZ 0x004adf58                      ; 004adf37
        ;   XREF to: 004adf58 (CONDITIONAL_JUMP)  ; LAB_004adf58
    MOV EAX,EBX                         ; 004adf39
    POP EBX                             ; 004adf3b
    RET                                 ; 004adf3c
    PUSH 0x59e490                       ; 004adf3d | g_CGlassTypeInfo_0059e490
        ;   Label: LAB_004adf3d
    PUSH EBX                            ; 004adf42
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004adf43
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004adf48
    PUSH EAX                            ; 004adf4b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004adf4c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004adf51
    MOV EAX,EBX                         ; 004adf54
    POP EBX                             ; 004adf56
    RET                                 ; 004adf57
    PUSH EAX                            ; 004adf58
        ;   Label: LAB_004adf58
    CALL crt_unknown.c_FUN_00564494     ; 004adf59
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004adf5e
    MOV EAX,EBX                         ; 004adf61
    POP EBX                             ; 004adf63
    RET                                 ; 004adf64

