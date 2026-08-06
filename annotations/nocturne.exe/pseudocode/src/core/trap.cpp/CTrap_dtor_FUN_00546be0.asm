; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_00546be0(CTrap *this_ptr,uint flags)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTrapTypeInfo_005a3500
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546be0
        ;   Label: core_trap.cpp_CTrap_dtor_FUN_00546be0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546be1
    TEST byte ptr [ESP + 0xc],0x4       ; 00546be5
    JNZ 0x00546c06                      ; 00546bea
        ;   XREF to: 00546c06 (CONDITIONAL_JUMP)  ; LAB_00546c06
    PUSH 0x1                            ; 00546bec
    PUSH EBX                            ; 00546bee
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00546bef
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
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
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00546c11
    PUSH EAX                            ; 00546c14
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00546c15
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00546c1a
    MOV EAX,EBX                         ; 00546c1d
    POP EBX                             ; 00546c1f
    RET                                 ; 00546c20
    PUSH EAX                            ; 00546c21
        ;   Label: LAB_00546c21
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 00546c22
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 00546c27
    MOV EAX,EBX                         ; 00546c2a
    POP EBX                             ; 00546c2c
    RET                                 ; 00546c2d

