; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMineCar * __cdecl core_minecar_cpp_CMineCar_ctor_FUN_004f2100(CMineCar *this_ptr)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_ctor_FUN_005180b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2100
        ;   Label: core_minecar.cpp_CMineCar_ctor_FUN_004f2100
    PUSH EDX                            ; 004f2104
    CALL core_platfrm.cpp_CPlatform_ctor_FUN_005180b0 ; 004f2105
        ;   XREF to: 005180b0 (UNCONDITIONAL_CALL)  ; CPlatform * core_platfrm.cpp_CPlatform_ctor_FUN_005180b0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 004f210a
    MOV dword ptr [EAX + 0x2b0],0x5fa034 ; 004f210d
    RET                                 ; 004f2117

