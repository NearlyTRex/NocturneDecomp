; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMorphModel * __cdecl core_morph_cpp_CMorphModel_ctor_FUN_00522120(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00522120
        ;   Label: core_morph.cpp_CMorphModel_ctor_FUN_00522120
    MOV dword ptr [EAX + 0x58],0x0      ; 00522124
    MOV dword ptr [EAX + 0x5c],0x0      ; 0052212b
    MOV dword ptr [EAX + 0x60],0x0      ; 00522132
    MOV dword ptr [EAX + 0x64],0x0      ; 00522139
    MOV dword ptr [EAX],0x0             ; 00522140
    MOV dword ptr [EAX + 0x54],0x0      ; 00522146
    RET                                 ; 0052214d

