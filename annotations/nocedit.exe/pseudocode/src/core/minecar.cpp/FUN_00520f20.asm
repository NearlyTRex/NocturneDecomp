; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMineCar * __cdecl core_minecar_cpp_FUN_00520f20(CMineCar *this_ptr)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActor_vtable g_CMinecarVTable
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_ctor_FUN_0054c850
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00520f20
        ;   Label: core_minecar.cpp_FUN_00520f20
    PUSH EDX                            ; 00520f24
    CALL core_platfrm.cpp_CPlatform_ctor_FUN_0054c850 ; 00520f25
        ;   XREF to: 0054c850 (UNCONDITIONAL_CALL)  ; CPlatform * core_platfrm.cpp_CPlatform_ctor_FUN_0054c850(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 00520f2a
    MOV dword ptr [EAX + 0x154],0x6615d4 ; 00520f2d | g_CMinecarVTable
    RET                                 ; 00520f37

