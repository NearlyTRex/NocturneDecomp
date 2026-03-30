; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVec * __cdecl shape_superopt_cpp_CVec_copy1_FUN_005d8160(CVec *this_ptr,CVec *other)
;
; Parameters:
; CVec *           Stack[0x4]:4   this_ptr
; CVec *           Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d8160
        ;   Label: shape_superopt.cpp_CVec_copy1_FUN_005d8160
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d8164
    MOV ECX,dword ptr [EDX]             ; 005d8168
    MOV dword ptr [EAX],ECX             ; 005d816a
    MOV ECX,dword ptr [EDX + 0x4]       ; 005d816c
    MOV dword ptr [EAX + 0x4],ECX       ; 005d816f
    MOV ECX,dword ptr [EDX + 0x8]       ; 005d8172
    MOV dword ptr [EAX + 0x8],ECX       ; 005d8175
    MOV ECX,dword ptr [EDX + 0xc]       ; 005d8178
    MOV dword ptr [EAX + 0xc],ECX       ; 005d817b
    MOV ECX,dword ptr [EDX + 0x10]      ; 005d817e
    MOV dword ptr [EAX + 0x10],ECX      ; 005d8181
    MOV ECX,dword ptr [EDX + 0x14]      ; 005d8184
    MOV dword ptr [EAX + 0x14],ECX      ; 005d8187
    RET                                 ; 005d818a

