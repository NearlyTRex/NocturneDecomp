; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double __cdecl shape_superopt_cpp_CPoly_computePlaneDistance_FUN_005d1fa0(CPoly *this_ptr)
;
; Parameters:
; CPoly *          Stack[0x8]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005d1fa0
        ;   Label: shape_superopt.cpp_CPoly_computePlaneDistance_FUN_005d1fa0
    MOV ECX,dword ptr [ESP + 0xc]       ; 005d1fa3
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d1fa7
    SHL EAX,0x3                         ; 005d1faa
    MOV EDX,EAX                         ; 005d1fad
    SHL EAX,0x3                         ; 005d1faf
    SUB EAX,EDX                         ; 005d1fb2
    MOV EDX,EAX                         ; 005d1fb4
    MOV EAX,dword ptr [ECX]             ; 005d1fb6
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d1fb8
    FLD double ptr [EDX + EAX*0x1 + 0x8] ; 005d1fbb
    FMUL double ptr [ECX + 0x48]        ; 005d1fbf
    FLD double ptr [EDX + EAX*0x1]      ; 005d1fc2
    FMUL double ptr [ECX + 0x40]        ; 005d1fc5
    FADDP                               ; 005d1fc8
    FLD double ptr [EDX + EAX*0x1 + 0x10] ; 005d1fca
    FMUL double ptr [ECX + 0x50]        ; 005d1fce
    FADDP                               ; 005d1fd1
    FCHS                                ; 005d1fd3
    FSTP double ptr [ESP]               ; 005d1fd5
    MOV EAX,dword ptr [ESP]             ; 005d1fd8
    MOV EDX,dword ptr [ESP + 0x4]       ; 005d1fdb
    ADD ESP,0x8                         ; 005d1fdf
    RET                                 ; 005d1fe2

