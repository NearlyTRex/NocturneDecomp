; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrater * __cdecl core_fire_cpp_CCrater_arrdtor20_FUN_0048cd60(CCrater *this_ptr,uint flags)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d480                       ; 0048cd60
        ;   Label: core_fire.cpp_CCrater_arrdtor20_FUN_0048cd60
    PUSH 0x14                           ; 0048cd65
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cd67
    PUSH EDX                            ; 0048cd6b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cd6c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048cd71
    RET                                 ; 0048cd74

