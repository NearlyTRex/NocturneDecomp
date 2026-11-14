; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFootstep * __cdecl core_gore_cpp_CFootstep_ctor_FUN_004cf1a0(CFootstep *this_ptr)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf1a0
        ;   Label: core_gore.cpp_CFootstep_ctor_FUN_004cf1a0
    PUSH 0x5db0f0                       ; 004cf1a4
    PUSH 0x4                            ; 004cf1a9
    ADD EAX,0xc                         ; 004cf1ab
    PUSH EAX                            ; 004cf1ae
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004cf1af
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004cf1b4
    SUB EAX,0xc                         ; 004cf1b7
    RET                                 ; 004cf1ba

