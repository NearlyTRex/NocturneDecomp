; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte cockpit_drawsurf_cpp_FUN_00468830(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468830
        ;   Label: cockpit_drawsurf.cpp_FUN_00468830
    MOV ECX,dword ptr [ESP + 0x8]       ; 00468831
    MOV EDX,dword ptr [ESP + 0xc]       ; 00468835
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00468839
    XOR EAX,EAX                         ; 0046883d
    CMP EDX,EBX                         ; 0046883f
    JLE 0x00468848                      ; 00468841
        ;   XREF to: 00468848 (CONDITIONAL_JUMP)  ; LAB_00468848
    MOV EAX,0x1                         ; 00468843
    CMP EDX,dword ptr [ESP + 0x14]      ; 00468848
        ;   Label: LAB_00468848
    JGE 0x00468850                      ; 0046884c
        ;   XREF to: 00468850 (CONDITIONAL_JUMP)  ; LAB_00468850
    OR AL,0x2                           ; 0046884e
    CMP ECX,dword ptr [ESP + 0x18]      ; 00468850
        ;   Label: LAB_00468850
    JLE 0x00468858                      ; 00468854
        ;   XREF to: 00468858 (CONDITIONAL_JUMP)  ; LAB_00468858
    OR AL,0x4                           ; 00468856
    CMP ECX,dword ptr [ESP + 0x10]      ; 00468858
        ;   Label: LAB_00468858
    JGE 0x00468860                      ; 0046885c
        ;   XREF to: 00468860 (CONDITIONAL_JUMP)  ; LAB_00468860
    OR AL,0x8                           ; 0046885e
    POP EBX                             ; 00468860
        ;   Label: LAB_00468860
    RET                                 ; 00468861

