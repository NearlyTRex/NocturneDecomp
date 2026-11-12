; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonSet * core_set_cpp_CDemonSet_dtor_FUN_0052c060(CDemonSet *this_ptr,uint flags)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_set.cpp_CDemonSet_clear_FUN_0052c090
;   core_set.cpp_FUN_00534d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c060
        ;   Label: core_set.cpp_CDemonSet_dtor_FUN_0052c060
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052c061
    PUSH EBX                            ; 0052c065
    CALL core_set.cpp_CDemonSet_clear_FUN_0052c090 ; 0052c066
        ;   XREF to: 0052c090 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clear_FUN_0052c090(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052c06b
    PUSH 0x0                            ; 0052c06e
    ADD EBX,0x4                         ; 0052c070
    PUSH EBX                            ; 0052c073
    CALL core_set.cpp_FUN_00534d80      ; 0052c074
        ;   XREF to: 00534d80 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00534d80()
    ADD ESP,0x8                         ; 0052c079
    SUB EAX,0x4                         ; 0052c07c
    POP EBX                             ; 0052c07f
    RET                                 ; 0052c080

