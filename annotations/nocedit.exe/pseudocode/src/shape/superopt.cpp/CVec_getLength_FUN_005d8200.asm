; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl shape_superopt_cpp_CVec_getLength_FUN_005d8200(CVec *this_ptr)
;
; Parameters:
; CVec *           Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x8]:4  local_8
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005d8200
        ;   Label: shape_superopt.cpp_CVec_getLength_FUN_005d8200
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d8203
    FLD double ptr [EAX + 0x8]          ; 005d8207
    FMUL ST0                            ; 005d820a
    FLD double ptr [EAX]                ; 005d820c
    FMUL ST0                            ; 005d820e
    FADDP                               ; 005d8210
    FLD double ptr [EAX + 0x10]         ; 005d8212
    FMUL ST0                            ; 005d8215
    FADDP                               ; 005d8217
    FSQRT                               ; 005d8219
    FSTP double ptr [ESP]               ; 005d821b
    MOV EAX,dword ptr [ESP]             ; 005d821e
    MOV EDX,dword ptr [ESP + 0x4]       ; 005d8221
    ADD ESP,0x8                         ; 005d8225
    RET                                 ; 005d8228

