; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpark * __cdecl core_fire_cpp_CSpark_arrdtor256_FUN_0049f0e0(CSpark *this_ptr,uint flags)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6690                       ; 0049f0e0
        ;   Label: core_fire.cpp_CSpark_arrdtor256_FUN_0049f0e0
    PUSH 0x100                          ; 0049f0e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f0ea
    PUSH EDX                            ; 0049f0ee
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0049f0ef
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049f0f4
    RET                                 ; 0049f0f7

