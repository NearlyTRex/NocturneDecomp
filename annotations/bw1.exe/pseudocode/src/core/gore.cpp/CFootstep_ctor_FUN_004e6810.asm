; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFootstep * __cdecl core_gore_cpp_CFootstep_ctor_FUN_004e6810(CFootstep *this_ptr)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e6810
        ;   Label: core_gore.cpp_CFootstep_ctor_FUN_004e6810
    PUSH 0x5fb430                       ; 004e6814
    PUSH 0x4                            ; 004e6819
    ADD EAX,0x8                         ; 004e681b
    PUSH EAX                            ; 004e681e
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004e681f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004e6824
    SUB EAX,0x8                         ; 004e6827
    RET                                 ; 004e682a

