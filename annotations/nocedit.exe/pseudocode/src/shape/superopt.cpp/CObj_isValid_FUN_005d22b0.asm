; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_CObj_isValid_FUN_005d22b0(CObj *this_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d22b0
        ;   Label: shape_superopt.cpp_CObj_isValid_FUN_005d22b0
    CMP dword ptr [EAX + 0x4],0x0       ; 005d22b4
    JZ 0x005d22c4                       ; 005d22b8
        ;   XREF to: 005d22c4 (CONDITIONAL_JUMP)  ; LAB_005d22c4
    CMP dword ptr [EAX + 0xc],0x0       ; 005d22ba
    JZ 0x005d22c4                       ; 005d22be
        ;   XREF to: 005d22c4 (CONDITIONAL_JUMP)  ; LAB_005d22c4
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d22c0
    RET                                 ; 005d22c3
    XOR EAX,EAX                         ; 005d22c4
        ;   Label: LAB_005d22c4
    RET                                 ; 005d22c6

