; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_CMorphModel_ctor_FUN_004f9a20(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f9a20
        ;   Label: core_morph.cpp_CMorphModel_ctor_FUN_004f9a20
    MOV dword ptr [EAX + 0x58],0x0      ; 004f9a24
    MOV dword ptr [EAX + 0x5c],0x0      ; 004f9a2b
    MOV dword ptr [EAX + 0x60],0x0      ; 004f9a32
    MOV dword ptr [EAX + 0x64],0x0      ; 004f9a39
    MOV dword ptr [EAX],0x0             ; 004f9a40
    MOV dword ptr [EAX + 0x54],0x0      ; 004f9a46
    RET                                 ; 004f9a4d

