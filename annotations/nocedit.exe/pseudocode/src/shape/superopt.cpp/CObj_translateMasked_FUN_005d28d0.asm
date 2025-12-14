; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_translateMasked_FUN_005d28d0(CObj * this_ptr, uint flag_mask, CVector3d * offset)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
; CVector3d *      Stack[0xc]:4   offset
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d28d0
        ;   Label: shape_superopt.cpp_CObj_translateMasked_FUN_005d28d0
    PUSH ESI                            ; 005d28d1
    PUSH EDI                            ; 005d28d2
    PUSH EBP                            ; 005d28d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005d28d4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005d28d8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005d28dc
    PUSH EDI                            ; 005d28e0
    MOV EAX,dword ptr [EDI + 0x18]      ; 005d28e1
    CALL dword ptr [EAX + 0x4]          ; 005d28e4
    ADD ESP,0x4                         ; 005d28e7
    TEST EAX,EAX                        ; 005d28ea
    JZ 0x005d290c                       ; 005d28ec
        ;   XREF to: 005d290c (CONDITIONAL_JUMP)  ; LAB_005d290c
    MOV ECX,dword ptr [EDI]             ; 005d28ee
    MOV EAX,dword ptr [EDI + 0x4]       ; 005d28f0
    XOR EDX,EDX                         ; 005d28f3
    TEST ECX,ECX                        ; 005d28f5
    JBE 0x005d290c                      ; 005d28f7
        ;   XREF to: 005d290c (CONDITIONAL_JUMP)  ; LAB_005d290c
    MOV ECX,dword ptr [EAX + 0x34]      ; 005d28f9
        ;   Label: LAB_005d28f9
    AND ECX,ESI                         ; 005d28fc
    CMP ECX,ESI                         ; 005d28fe
    JZ 0x005d2911                       ; 005d2900
        ;   XREF to: 005d2911 (CONDITIONAL_JUMP)  ; LAB_005d2911
    INC EDX                             ; 005d2902
    MOV EBP,dword ptr [EDI]             ; 005d2903
    ADD EAX,0x38                        ; 005d2905
    CMP EDX,EBP                         ; 005d2908
    JC 0x005d28f9                       ; 005d290a
        ;   XREF to: 005d28f9 (CONDITIONAL_JUMP)  ; LAB_005d28f9
    POP EBP                             ; 005d290c
        ;   Label: LAB_005d290c
    POP EDI                             ; 005d290d
    POP ESI                             ; 005d290e
    POP EBX                             ; 005d290f
    RET                                 ; 005d2910
    FLD double ptr [EBX]                ; 005d2911
        ;   Label: LAB_005d2911
    FADD double ptr [EAX]               ; 005d2913
    FSTP double ptr [EAX]               ; 005d2915
    FLD double ptr [EBX + 0x8]          ; 005d2917
    FADD double ptr [EAX + 0x8]         ; 005d291a
    FSTP double ptr [EAX + 0x8]         ; 005d291d
    FLD double ptr [EBX + 0x10]         ; 005d2920
    FADD double ptr [EAX + 0x10]        ; 005d2923
    FSTP double ptr [EAX + 0x10]        ; 005d2926
    INC EDX                             ; 005d2929
    MOV EBP,dword ptr [EDI]             ; 005d292a
    ADD EAX,0x38                        ; 005d292c
    CMP EDX,EBP                         ; 005d292f
    JC 0x005d28f9                       ; 005d2931
        ;   XREF to: 005d28f9 (CONDITIONAL_JUMP)  ; LAB_005d28f9
    POP EBP                             ; 005d2933
    POP EDI                             ; 005d2934
    POP ESI                             ; 005d2935
    POP EBX                             ; 005d2936
    RET                                 ; 005d2937

