; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SVert * core_skeleton.cpp_SVert_ctor_FUN_005a1f70(SVert * this_ptr)
;
; Parameters:
; SVert *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1f70
        ;   Label: core_skeleton.cpp_SVert_ctor_FUN_005a1f70
    PUSH 0x6598c0                       ; 005a1f74 | g_CVectorTypeInfo
    PUSH 0x3                            ; 005a1f79
    ADD EAX,0x10                        ; 005a1f7b
    PUSH EAX                            ; 005a1f7e
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005a1f7f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005a1f84
    SUB EAX,0x10                        ; 005a1f87
    RET                                 ; 005a1f8a

