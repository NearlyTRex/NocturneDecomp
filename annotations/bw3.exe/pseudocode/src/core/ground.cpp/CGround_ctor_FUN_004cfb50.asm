; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGround * __cdecl core_ground_cpp_CGround_ctor_FUN_004cfb50(CGround *this_ptr,int width,int height)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfb50
        ;   Label: core_ground.cpp_CGround_ctor_FUN_004cfb50
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cfb51
    MOV ECX,dword ptr [ESP + 0x10]      ; 004cfb55
    MOV dword ptr [EAX + 0x10],0x1e     ; 004cfb59
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cfb60
    MOV dword ptr [EAX + 0x14],0x1e     ; 004cfb64
    MOV dword ptr [EAX],EDX             ; 004cfb6b
    MOV EBX,dword ptr [EAX + 0x14]      ; 004cfb6d
    MOV EDX,dword ptr [EAX + 0x10]      ; 004cfb70
    IMUL EDX,EBX                        ; 004cfb73
    MOV dword ptr [EAX + 0x24],0x0      ; 004cfb76
    MOV dword ptr [EAX + 0x28],0x0      ; 004cfb7d
    MOV dword ptr [EAX + 0x1c],0x8      ; 004cfb84
    MOV dword ptr [EAX + 0x20],0x1      ; 004cfb8b
    MOV dword ptr [EAX + 0x4],ECX       ; 004cfb92
    DEC ECX                             ; 004cfb95
    MOV dword ptr [EAX + 0x18],EDX      ; 004cfb96
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cfb99
    MOV dword ptr [EAX + 0xc],ECX       ; 004cfb9d
    DEC EDX                             ; 004cfba0
    MOV dword ptr [EAX + 0x8],EDX       ; 004cfba1
    POP EBX                             ; 004cfba4
    RET                                 ; 004cfba5

