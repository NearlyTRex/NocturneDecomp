; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CPoly_translate_FUN_005cc720(CPoly * this_ptr, CVector3d * offset)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CVector3d *      Stack[0x8]:4   offset
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc720
        ;   Label: shape_superopt.cpp_CPoly_translate_FUN_005cc720
    PUSH ESI                            ; 005cc721
    MOV ESI,dword ptr [ESP + 0xc]       ; 005cc722
    MOV EDX,dword ptr [ESP + 0x10]      ; 005cc726
    MOV EAX,dword ptr [ESI + 0x4]       ; 005cc72a
    SHL EAX,0x3                         ; 005cc72d
    MOV EBX,dword ptr [ESI]             ; 005cc730
    MOV ECX,EAX                         ; 005cc732
    SHL EAX,0x3                         ; 005cc734
    MOV EBX,dword ptr [EBX + 0x4]       ; 005cc737
    SUB EAX,ECX                         ; 005cc73a
    FLD double ptr [EDX]                ; 005cc73c
    FADD double ptr [EBX + EAX*0x1]     ; 005cc73e
    FSTP double ptr [EBX + EAX*0x1]     ; 005cc741
    FLD double ptr [EDX + 0x8]          ; 005cc744
    FADD double ptr [EBX + EAX*0x1 + 0x8] ; 005cc747
    FSTP double ptr [EBX + EAX*0x1 + 0x8] ; 005cc74b
    FLD double ptr [EDX + 0x10]         ; 005cc74f
    FADD double ptr [EBX + EAX*0x1 + 0x10] ; 005cc752
    FSTP double ptr [EBX + EAX*0x1 + 0x10] ; 005cc756
    MOV EAX,dword ptr [ESI + 0x8]       ; 005cc75a
    SHL EAX,0x3                         ; 005cc75d
    MOV ECX,EAX                         ; 005cc760
    SHL EAX,0x3                         ; 005cc762
    SUB EAX,ECX                         ; 005cc765
    FLD double ptr [EDX]                ; 005cc767
    FADD double ptr [EBX + EAX*0x1]     ; 005cc769
    FSTP double ptr [EBX + EAX*0x1]     ; 005cc76c
    FLD double ptr [EDX + 0x8]          ; 005cc76f
    FADD double ptr [EBX + EAX*0x1 + 0x8] ; 005cc772
    FSTP double ptr [EBX + EAX*0x1 + 0x8] ; 005cc776
    FLD double ptr [EDX + 0x10]         ; 005cc77a
    FADD double ptr [EBX + EAX*0x1 + 0x10] ; 005cc77d
    FSTP double ptr [EBX + EAX*0x1 + 0x10] ; 005cc781
    MOV EAX,dword ptr [ESI + 0xc]       ; 005cc785
    SHL EAX,0x3                         ; 005cc788
    MOV ECX,EAX                         ; 005cc78b
    SHL EAX,0x3                         ; 005cc78d
    SUB EAX,ECX                         ; 005cc790
    FLD double ptr [EDX]                ; 005cc792
    FADD double ptr [EBX + EAX*0x1]     ; 005cc794
    FSTP double ptr [EBX + EAX*0x1]     ; 005cc797
    FLD double ptr [EDX + 0x8]          ; 005cc79a
    FADD double ptr [EBX + EAX*0x1 + 0x8] ; 005cc79d
    FSTP double ptr [EBX + EAX*0x1 + 0x8] ; 005cc7a1
    FLD double ptr [EDX + 0x10]         ; 005cc7a5
    FADD double ptr [EBX + EAX*0x1 + 0x10] ; 005cc7a8
    FSTP double ptr [EBX + EAX*0x1 + 0x10] ; 005cc7ac
    POP ESI                             ; 005cc7b0
    POP EBX                             ; 005cc7b1
    RET                                 ; 005cc7b2

