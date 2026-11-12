; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_00534d80(void *param_1)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_0052c060 at 0052c074
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5fb270                       ; 00534d80
        ;   Label: core_set.cpp_FUN_00534d80
    PUSH 0xfa                           ; 00534d85
    MOV EDX,dword ptr [ESP + 0xc]       ; 00534d8a
    PUSH EDX                            ; 00534d8e
    CALL crt_memory.c___arrfini_FUN_005b854f ; 00534d8f
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00534d94
    RET                                 ; 00534d97

