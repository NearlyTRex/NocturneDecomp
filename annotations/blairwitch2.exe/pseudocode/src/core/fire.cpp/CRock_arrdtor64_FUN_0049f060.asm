; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * __cdecl core_fire_cpp_CRock_arrdtor64_FUN_0049f060(CRock *this_ptr,uint flags)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6770                       ; 0049f060
        ;   Label: core_fire.cpp_CRock_arrdtor64_FUN_0049f060
    PUSH 0x40                           ; 0049f065
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f067
    PUSH EDX                            ; 0049f06b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0049f06c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049f071
    RET                                 ; 0049f074

