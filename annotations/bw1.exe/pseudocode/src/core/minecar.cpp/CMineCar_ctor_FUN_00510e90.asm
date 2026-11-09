; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMineCar * __cdecl core_minecar_cpp_CMineCar_ctor_FUN_00510e90(CMineCar *this_ptr)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_ctor_FUN_00539400
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00510e90
        ;   Label: core_minecar.cpp_CMineCar_ctor_FUN_00510e90
    PUSH EDX                            ; 00510e94
    CALL core_platfrm.cpp_CPlatform_ctor_FUN_00539400 ; 00510e95
        ;   XREF to: 00539400 (UNCONDITIONAL_CALL)  ; CPlatform * core_platfrm.cpp_CPlatform_ctor_FUN_00539400(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 00510e9a
    MOV dword ptr [EAX + 0x154],0x603b74 ; 00510e9d
    RET                                 ; 00510ea7

