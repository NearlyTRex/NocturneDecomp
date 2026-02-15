; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_createSinglePart_FUN_0047a3b0(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047a3b0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_createSinglePart_FUN_0047a3b0
    MOV EDX,dword ptr [EAX + 0x104]     ; 0047a3b4
    MOV dword ptr [EAX + 0x5584],0x1    ; 0047a3ba
    MOV dword ptr [EAX + 0x5588],EDX    ; 0047a3c4
    MOV EDX,dword ptr [EAX + 0x110]     ; 0047a3ca
    MOV dword ptr [EAX + 0x558c],EDX    ; 0047a3d0
    RET                                 ; 0047a3d6

