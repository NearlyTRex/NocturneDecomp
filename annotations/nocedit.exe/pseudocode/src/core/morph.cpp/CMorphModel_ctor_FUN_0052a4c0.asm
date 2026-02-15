; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_CMorphModel_ctor_FUN_0052a4c0(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052a4c0
        ;   Label: core_morph.cpp_CMorphModel_ctor_FUN_0052a4c0
    MOV dword ptr [EAX + 0x58],0x0      ; 0052a4c4
    MOV dword ptr [EAX + 0x5c],0x0      ; 0052a4cb
    MOV dword ptr [EAX + 0x60],0x0      ; 0052a4d2
    MOV dword ptr [EAX + 0x64],0x0      ; 0052a4d9
    MOV dword ptr [EAX],0x0             ; 0052a4e0
    MOV dword ptr [EAX + 0x54],0x0      ; 0052a4e6
    RET                                 ; 0052a4ed

