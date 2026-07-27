; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_trap_cpp_FUN_00546be0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CTrapTypeInfo_005a3500
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546be0
        ;   Label: core_trap.cpp_FUN_00546be0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546be1
    TEST byte ptr [ESP + 0xc],0x4       ; 00546be5
    JNZ 0x00546c06                      ; 00546bea
        ;   XREF to: 00546c06 (CONDITIONAL_JUMP)  ; LAB_00546c06
    PUSH 0x1                            ; 00546bec
    PUSH EBX                            ; 00546bee
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00546bef
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 00546bf4
    MOV DL,byte ptr [ESP + 0xc]         ; 00546bf7
    MOV EBX,EAX                         ; 00546bfb
    TEST DL,0x2                         ; 00546bfd
    JNZ 0x00546c21                      ; 00546c00
        ;   XREF to: 00546c21 (CONDITIONAL_JUMP)  ; LAB_00546c21
    MOV EAX,EBX                         ; 00546c02
    POP EBX                             ; 00546c04
    RET                                 ; 00546c05
    PUSH 0x5a3500                       ; 00546c06 | g_CTrapTypeInfo_005a3500
        ;   Label: LAB_00546c06
    PUSH EBX                            ; 00546c0b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00546c0c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 00546c11
    PUSH EAX                            ; 00546c14
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00546c15
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 00546c1a
    MOV EAX,EBX                         ; 00546c1d
    POP EBX                             ; 00546c1f
    RET                                 ; 00546c20
    PUSH EAX                            ; 00546c21
        ;   Label: LAB_00546c21
    CALL crt_unknown.c_FUN_00564494     ; 00546c22
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00546c27
    MOV EAX,EBX                         ; 00546c2a
    POP EBX                             ; 00546c2c
    RET                                 ; 00546c2d

