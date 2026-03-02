; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CP3D_copy_FUN_005d8470(CP3D *this_ptr,CP3D *other)
;
; Parameters:
; CP3D *           Stack[0x4]:4   this_ptr
; CP3D *           Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d8470
        ;   Label: shape_superopt.cpp_CP3D_copy_FUN_005d8470
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d8474
    MOV ECX,dword ptr [EDX]             ; 005d8478
    MOV dword ptr [EAX],ECX             ; 005d847a
    MOV ECX,dword ptr [EDX + 0x4]       ; 005d847c
    MOV dword ptr [EAX + 0x4],ECX       ; 005d847f
    MOV ECX,dword ptr [EDX + 0x8]       ; 005d8482
    MOV dword ptr [EAX + 0x8],ECX       ; 005d8485
    MOV ECX,dword ptr [EDX + 0xc]       ; 005d8488
    MOV dword ptr [EAX + 0xc],ECX       ; 005d848b
    MOV ECX,dword ptr [EDX + 0x10]      ; 005d848e
    MOV dword ptr [EAX + 0x10],ECX      ; 005d8491
    MOV ECX,dword ptr [EDX + 0x14]      ; 005d8494
    MOV dword ptr [EAX + 0x14],ECX      ; 005d8497
    RET                                 ; 005d849a

