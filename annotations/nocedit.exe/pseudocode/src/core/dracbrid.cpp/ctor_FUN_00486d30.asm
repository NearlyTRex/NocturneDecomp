; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SFreaky * __cdecl core_dracbrid_cpp_ctor_FUN_00486d30(SFreaky *this_ptr)
;
; Parameters:
; SFreaky *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00486d30
        ;   Label: core_dracbrid.cpp_ctor_FUN_00486d30
    PUSH 0x6598c0                       ; 00486d34 | g_CVectorTypeInfo
    PUSH 0x4                            ; 00486d39
    ADD EAX,0x20                        ; 00486d3b
    PUSH EAX                            ; 00486d3e
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00486d3f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00486d44
    SUB EAX,0x20                        ; 00486d47
    RET                                 ; 00486d4a

