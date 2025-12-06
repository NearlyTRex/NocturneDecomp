; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPoly * shape_superopt.cpp_CObj_getPolygon_FUN_005d33d0(CObj * this_ptr, uint index)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   index
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 005d33d0
        ;   Label: shape_superopt.cpp_CObj_getPolygon_FUN_005d33d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d33d4
    CMP EDX,dword ptr [ECX + 0x8]       ; 005d33d8
    JBE 0x005d33e0                      ; 005d33db | LAB_005d33e0
        ;   XREF to: 005d33e0 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005d33dd
        ;   Label: LAB_005d33dd
    RET                                 ; 005d33df
    LEA EAX,[EDX*0x4 + 0x0]             ; 005d33e0
        ;   Label: LAB_005d33e0
    SUB EAX,EDX                         ; 005d33e7
    SHL EAX,0x2                         ; 005d33e9
    ADD EAX,EDX                         ; 005d33ec
    SHL EAX,0x3                         ; 005d33ee
    MOV EDX,dword ptr [ECX + 0xc]       ; 005d33f1
    ADD EAX,EDX                         ; 005d33f4
    RET                                 ; 005d33f6

