; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLeaf * __cdecl core_fire_cpp_CLeaf_arrdtor64_FUN_0049f040(CLeaf *this_ptr,uint flags)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6790                       ; 0049f040
        ;   Label: core_fire.cpp_CLeaf_arrdtor64_FUN_0049f040
    PUSH 0x40                           ; 0049f045
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f047
    PUSH EDX                            ; 0049f04b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0049f04c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049f051
    RET                                 ; 0049f054

