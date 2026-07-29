; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonPart * __cdecl core_dpart_cpp_CDemonPart_ctor_FUN_00456ef0(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00456ef0
        ;   Label: core_dpart.cpp_CDemonPart_ctor_FUN_00456ef0
    MOV dword ptr [EAX + 0x2c],0x0      ; 00456ef4
    MOV dword ptr [EAX + 0x34],0x0      ; 00456efb
    MOV dword ptr [EAX + 0x30],0x0      ; 00456f02
    MOV dword ptr [EAX + 0x28],0x0      ; 00456f09
    MOV dword ptr [EAX + 0x20],0x0      ; 00456f10
    MOV dword ptr [EAX + 0x24],0x0      ; 00456f17
    MOV dword ptr [EAX + 0x38],0x0      ; 00456f1e
    MOV dword ptr [EAX + 0x384],0x0     ; 00456f25
    MOV byte ptr [EAX],0x0              ; 00456f2f
    RET                                 ; 00456f32

