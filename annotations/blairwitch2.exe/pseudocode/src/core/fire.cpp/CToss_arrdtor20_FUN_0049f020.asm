; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * core_fire_cpp_CToss_arrdtor20_FUN_0049f020(CToss *this_ptr,uint flags)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f67f0                       ; 0049f020
        ;   Label: core_fire.cpp_CToss_arrdtor20_FUN_0049f020
    PUSH 0x14                           ; 0049f025
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f027
    PUSH EDX                            ; 0049f02b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0049f02c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049f031
    RET                                 ; 0049f034

