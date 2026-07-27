; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_frankgen_cpp_FUN_00495430(int param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CFrankenstienMachineTypeInfo_0059dc60
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

    PUSH EBX                            ; 00495430
        ;   Label: core_frankgen.cpp_FUN_00495430
    MOV EBX,dword ptr [ESP + 0x8]       ; 00495431
    TEST byte ptr [ESP + 0xc],0x4       ; 00495435
    JNZ 0x0049546d                      ; 0049543a
        ;   XREF to: 0049546d (CONDITIONAL_JUMP)  ; LAB_0049546d
    PUSH 0x0                            ; 0049543c
    ADD EBX,0x2f8                       ; 0049543e
    PUSH EBX                            ; 00495444
    CALL core_course.cpp_CDemonTriangle_arrdtor_FUN_0043b5f0 ; 00495445
        ;   XREF to: 0043b5f0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CDemonTriangle_arrdtor_FUN_0043b5f0()
    ADD ESP,0x8                         ; 0049544a
    PUSH 0x1                            ; 0049544d
    LEA EBX,[EAX + 0xfffffd08]          ; 0049544f
    PUSH EBX                            ; 00495455
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00495456
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 0049545b
    MOV DL,byte ptr [ESP + 0xc]         ; 0049545e
    MOV EBX,EAX                         ; 00495462
    TEST DL,0x2                         ; 00495464
    JNZ 0x00495488                      ; 00495467
        ;   XREF to: 00495488 (CONDITIONAL_JUMP)  ; LAB_00495488
    MOV EAX,EBX                         ; 00495469
    POP EBX                             ; 0049546b
    RET                                 ; 0049546c
    PUSH 0x59dc60                       ; 0049546d | g_CFrankenstienMachineTypeInfo_0059dc60
        ;   Label: LAB_0049546d
    PUSH EBX                            ; 00495472
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00495473
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 00495478
    PUSH EAX                            ; 0049547b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0049547c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 00495481
    MOV EAX,EBX                         ; 00495484
    POP EBX                             ; 00495486
    RET                                 ; 00495487
    PUSH EAX                            ; 00495488
        ;   Label: LAB_00495488
    CALL crt_unknown.c_FUN_00564494     ; 00495489
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0049548e
    MOV EAX,EBX                         ; 00495491
    POP EBX                             ; 00495493
    RET                                 ; 00495494

