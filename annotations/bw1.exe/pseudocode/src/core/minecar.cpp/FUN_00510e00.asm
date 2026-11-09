; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_minecar_cpp_FUN_00510e00(CPlatform *param_1,int param_2)
;
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_setup_FUN_005395d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00510e00
        ;   Label: core_minecar.cpp_FUN_00510e00
    PUSH EDX                            ; 00510e04
    CALL core_platfrm.cpp_CPlatform_setup_FUN_005395d0 ; 00510e05
        ;   XREF to: 005395d0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_setup_FUN_005395d0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 00510e0a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00510e0d
    MOV dword ptr [EAX + 0x728],0x0     ; 00510e11
    RET                                 ; 00510e1b

