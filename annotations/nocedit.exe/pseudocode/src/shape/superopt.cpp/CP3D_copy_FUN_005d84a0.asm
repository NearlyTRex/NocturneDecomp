; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CP3D_copy_FUN_005d84a0(CP3D *this_ptr,CP3D *other)
;
; Parameters:
; CP3D *           Stack[0x4]:4   this_ptr
; CP3D *           Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d84a0
        ;   Label: shape_superopt.cpp_CP3D_copy_FUN_005d84a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d84a4
    MOV ECX,dword ptr [EDX]             ; 005d84a8
    MOV dword ptr [EAX],ECX             ; 005d84aa
    MOV ECX,dword ptr [EDX + 0x4]       ; 005d84ac
    MOV dword ptr [EAX + 0x4],ECX       ; 005d84af
    MOV ECX,dword ptr [EDX + 0x8]       ; 005d84b2
    MOV dword ptr [EAX + 0x8],ECX       ; 005d84b5
    MOV ECX,dword ptr [EDX + 0xc]       ; 005d84b8
    MOV dword ptr [EAX + 0xc],ECX       ; 005d84bb
    MOV ECX,dword ptr [EDX + 0x10]      ; 005d84be
    MOV dword ptr [EAX + 0x10],ECX      ; 005d84c1
    MOV ECX,dword ptr [EDX + 0x14]      ; 005d84c4
    MOV dword ptr [EAX + 0x14],ECX      ; 005d84c7
    RET                                 ; 005d84ca

