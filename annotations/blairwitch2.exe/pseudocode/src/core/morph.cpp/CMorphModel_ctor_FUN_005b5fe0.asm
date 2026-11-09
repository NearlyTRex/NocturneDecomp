; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_CMorphModel_ctor_FUN_005b5fe0(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b5fe0
        ;   Label: core_morph.cpp_CMorphModel_ctor_FUN_005b5fe0
    MOV dword ptr [EAX + 0x58],0x0      ; 005b5fe4
    MOV dword ptr [EAX + 0x5c],0x0      ; 005b5feb
    MOV dword ptr [EAX + 0x60],0x0      ; 005b5ff2
    MOV dword ptr [EAX + 0x64],0x0      ; 005b5ff9
    MOV dword ptr [EAX],0x0             ; 005b6000
    MOV dword ptr [EAX + 0x54],0x0      ; 005b6006
    RET                                 ; 005b600d

