; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CObj_containsPolygon_FUN_005d3400(CObj *this_ptr,CPoly *poly_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   poly_ptr
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 005d3400
        ;   Label: shape_superopt.cpp_CObj_containsPolygon_FUN_005d3400
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d3404
    CMP EAX,dword ptr [ECX + 0xc]       ; 005d3408
    JC 0x005d33dd                       ; 005d340b
        ;   XREF to: 005d33dd (CONDITIONAL_JUMP)  ; LAB_005d33dd
    MOV EDX,dword ptr [ECX + 0x8]       ; 005d340d
    LEA EAX,[EDX*0x4 + 0x0]             ; 005d3410
    SUB EAX,EDX                         ; 005d3417
    SHL EAX,0x2                         ; 005d3419
    ADD EDX,EAX                         ; 005d341c
    SHL EDX,0x3                         ; 005d341e
    MOV EAX,dword ptr [ECX + 0xc]       ; 005d3421
    MOV ECX,dword ptr [ESP + 0x8]       ; 005d3424
    ADD EAX,EDX                         ; 005d3428
    CMP EAX,ECX                         ; 005d342a
    JBE 0x005d33dd                      ; 005d342c
        ;   XREF to: 005d33dd (CONDITIONAL_JUMP)  ; LAB_005d33dd
    MOV EAX,0x1                         ; 005d342e
    RET                                 ; 005d3433

