; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMineCar * __cdecl core_minecar_cpp_CMineCar_ctor_FUN_004d60b0(CMineCar *this_ptr)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActor_vtable g_CMineCarVTable
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_ctor_FUN_004f5d90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d60b0
        ;   Label: core_minecar.cpp_CMineCar_ctor_FUN_004d60b0
    PUSH EDX                            ; 004d60b4
    CALL core_platfrm.cpp_CPlatform_ctor_FUN_004f5d90 ; 004d60b5
        ;   XREF to: 004f5d90 (UNCONDITIONAL_CALL)  ; CPlatform * core_platfrm.cpp_CPlatform_ctor_FUN_004f5d90(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 004d60ba
    MOV dword ptr [EAX + 0x14c],0x5a0784 ; 004d60bd | g_CMineCarVTable
    RET                                 ; 004d60c7

