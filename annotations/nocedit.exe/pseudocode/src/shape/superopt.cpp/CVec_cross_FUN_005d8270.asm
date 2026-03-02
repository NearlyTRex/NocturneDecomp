; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVec * __cdecl shape_superopt_cpp_CVec_cross_FUN_005d8270(CVec *this_ptr,CVec *a,CVec *b)
;
; Parameters:
; CVec *           Stack[0x4]:4   this_ptr
; CVec *           Stack[0x8]:4   a
; CVec *           Stack[0xc]:4   b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d8270
        ;   Label: shape_superopt.cpp_CVec_cross_FUN_005d8270
    MOV ECX,dword ptr [ESP + 0x8]       ; 005d8274
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d8278
    FLD double ptr [EAX + 0x8]          ; 005d827c
    FMUL double ptr [EDX + 0x10]        ; 005d827f
    FLD double ptr [EAX + 0x10]         ; 005d8282
    FMUL double ptr [EDX + 0x8]         ; 005d8285
    FSUBP                               ; 005d8288
    FSTP double ptr [ECX]               ; 005d828a
    FLD double ptr [EAX + 0x10]         ; 005d828c
    FMUL double ptr [EDX]               ; 005d828f
    FLD double ptr [EAX]                ; 005d8291
    FMUL double ptr [EDX + 0x10]        ; 005d8293
    FSUBP                               ; 005d8296
    FSTP double ptr [ECX + 0x8]         ; 005d8298
    FLD double ptr [EAX]                ; 005d829b
    FMUL double ptr [EDX + 0x8]         ; 005d829d
    FLD double ptr [EAX + 0x8]          ; 005d82a0
    FMUL double ptr [EDX]               ; 005d82a3
    FSUBP                               ; 005d82a5
    MOV EAX,ECX                         ; 005d82a7
    FSTP double ptr [ECX + 0x10]        ; 005d82a9
    RET                                 ; 005d82ac

