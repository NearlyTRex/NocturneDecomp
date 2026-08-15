; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * __cdecl core_fire_cpp_CFireball_arrdtor64_FUN_0048ce00(CFireball *this_ptr,uint flags)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d3e0                       ; 0048ce00
        ;   Label: core_fire.cpp_CFireball_arrdtor64_FUN_0048ce00
    PUSH 0x40                           ; 0048ce05
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ce07
    PUSH EDX                            ; 0048ce0b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ce0c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048ce11
    RET                                 ; 0048ce14

