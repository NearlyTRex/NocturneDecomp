; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMorphControlPoint * core_morph.cpp_SMorphControlPoint_ctor_FUN_0052cc50(SMorphControlPoint * this_ptr)
;
; Parameters:
; SMorphControlPoint * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052cc50
        ;   Label: core_morph.cpp_SMorphControlPoint_ctor_FUN_0052cc50
    PUSH 0x6598c0                       ; 0052cc54 | WatcomTypeInfo g_CVectorTypeInfo
    PUSH 0x2                            ; 0052cc59
    ADD EAX,0x8                         ; 0052cc5b
    PUSH EAX                            ; 0052cc5e
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0052cc5f | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052cc64
    SUB EAX,0x8                         ; 0052cc67
    RET                                 ; 0052cc6a

