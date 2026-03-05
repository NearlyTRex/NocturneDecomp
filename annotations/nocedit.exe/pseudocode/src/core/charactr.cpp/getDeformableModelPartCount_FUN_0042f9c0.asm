; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_getDeformableModelPartCount_FUN_0042f9c0(CDeformableModel *model_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   model_ptr
;
; XREF[1]:
;   core_script.cpp_editParameterValue_FUN_00562920 at 00563ed3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042f9c0
        ;   Label: core_charactr.cpp_getDeformableModelPartCount_FUN_0042f9c0
    MOV EAX,dword ptr [EAX + 0x7140]    ; 0042f9c4
    RET                                 ; 0042f9ca

