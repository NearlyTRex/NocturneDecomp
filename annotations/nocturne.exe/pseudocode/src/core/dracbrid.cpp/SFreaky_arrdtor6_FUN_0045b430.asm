; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SFreaky * __cdecl core_dracbrid_cpp_SFreaky_arrdtor6_FUN_0045b430(SFreaky *this_ptr,uint flags)
;
; Parameters:
; SFreaky *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59c560                       ; 0045b430
        ;   Label: core_dracbrid.cpp_SFreaky_arrdtor6_FUN_0045b430
    PUSH 0x6                            ; 0045b435
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045b437
    PUSH EDX                            ; 0045b43b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0045b43c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0045b441
    RET                                 ; 0045b444

