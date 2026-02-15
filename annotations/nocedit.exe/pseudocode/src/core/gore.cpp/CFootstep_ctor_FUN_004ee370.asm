; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFootstep * __cdecl core_gore_cpp_CFootstep_ctor_FUN_004ee370(CFootstep *this_ptr)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ee370
        ;   Label: core_gore.cpp_CFootstep_ctor_FUN_004ee370
    PUSH 0x6598c0                       ; 004ee374 | g_CVectorTypeInfo
    PUSH 0x4                            ; 004ee379
    ADD EAX,0x8                         ; 004ee37b
    PUSH EAX                            ; 004ee37e
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004ee37f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ee384
    SUB EAX,0x8                         ; 004ee387
    RET                                 ; 004ee38a

