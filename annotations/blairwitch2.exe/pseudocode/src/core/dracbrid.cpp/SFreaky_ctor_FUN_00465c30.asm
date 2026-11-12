; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SFreaky * __cdecl core_dracbrid_cpp_SFreaky_ctor_FUN_00465c30(SFreaky *this_ptr)
;
; Parameters:
; SFreaky *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00465c30
        ;   Label: core_dracbrid.cpp_SFreaky_ctor_FUN_00465c30
    PUSH 0x5f22b0                       ; 00465c34
    PUSH 0x4                            ; 00465c39
    ADD EAX,0x20                        ; 00465c3b
    PUSH EAX                            ; 00465c3e
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00465c3f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00465c44
    SUB EAX,0x20                        ; 00465c47
    RET                                 ; 00465c4a

