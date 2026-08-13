; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_getDeformableModelPartCount_FUN_0042b5a0(CDeformableModel *model_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   model_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b5a0
        ;   Label: core_charactr.cpp_getDeformableModelPartCount_FUN_0042b5a0
    MOV EAX,dword ptr [EAX + 0xc00]     ; 0042b5a4
    RET                                 ; 0042b5aa

