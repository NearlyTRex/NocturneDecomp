; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00532b00(CDemonSet *this_ptr,uint flags)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_set.cpp_CDemonSet_clear_FUN_00532b30
;   core_set.cpp_FUN_0053bb60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532b00
        ;   Label: core_set.cpp_CDemonSet_dtor_FUN_00532b00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00532b01
    PUSH EBX                            ; 00532b05
    CALL core_set.cpp_CDemonSet_clear_FUN_00532b30 ; 00532b06
        ;   XREF to: 00532b30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clear_FUN_00532b30(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00532b0b
    PUSH 0x0                            ; 00532b0e
    ADD EBX,0x4                         ; 00532b10
    PUSH EBX                            ; 00532b13
    CALL core_set.cpp_FUN_0053bb60      ; 00532b14
        ;   XREF to: 0053bb60 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0053bb60()
    ADD ESP,0x8                         ; 00532b19
    SUB EAX,0x4                         ; 00532b1c
    POP EBX                             ; 00532b1f
    RET                                 ; 00532b20

