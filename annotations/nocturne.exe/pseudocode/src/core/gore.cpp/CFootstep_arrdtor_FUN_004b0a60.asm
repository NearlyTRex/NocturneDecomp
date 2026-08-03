; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFootstep * __cdecl core_gore_cpp_CFootstep_arrdtor_FUN_004b0a60(CFootstep *this_ptr,uint flags)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59e590                       ; 004b0a60
        ;   Label: core_gore.cpp_CFootstep_arrdtor_FUN_004b0a60
    PUSH 0x3e8                          ; 004b0a65
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b0a6a
    PUSH EDX                            ; 004b0a6e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004b0a6f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b0a74
    RET                                 ; 004b0a77

