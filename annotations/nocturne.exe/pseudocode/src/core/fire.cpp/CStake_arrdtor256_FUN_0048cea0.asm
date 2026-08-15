; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStake * __cdecl core_fire_cpp_CStake_arrdtor256_FUN_0048cea0(CStake *this_ptr,uint flags)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d340                       ; 0048cea0
        ;   Label: core_fire.cpp_CStake_arrdtor256_FUN_0048cea0
    PUSH 0x100                          ; 0048cea5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ceaa
    PUSH EDX                            ; 0048ceae
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ceaf
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048ceb4
    RET                                 ; 0048ceb7

