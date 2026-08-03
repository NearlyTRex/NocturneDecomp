; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * __cdecl core_fire_cpp_CRock_arrdtor_FUN_0048cde0(CRock *this_ptr,uint flags)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d400                       ; 0048cde0
        ;   Label: core_fire.cpp_CRock_arrdtor_FUN_0048cde0
    PUSH 0x40                           ; 0048cde5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cde7
    PUSH EDX                            ; 0048cdeb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cdec
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048cdf1
    RET                                 ; 0048cdf4

