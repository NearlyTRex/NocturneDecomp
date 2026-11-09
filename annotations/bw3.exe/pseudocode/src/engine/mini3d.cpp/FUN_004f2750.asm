; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f2750(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2750
        ;   Label: engine_mini3d.cpp_FUN_004f2750
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f2751
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f2755
    CMP EAX,ECX                         ; 004f2759
    JLE 0x004f2763                      ; 004f275b
        ;   XREF to: 004f2763 (CONDITIONAL_JUMP)  ; LAB_004f2763
    MOV EDX,EAX                         ; 004f275d
    MOV EAX,ECX                         ; 004f275f
    MOV ECX,EDX                         ; 004f2761
    SAR EAX,0x10                        ; 004f2763
        ;   Label: LAB_004f2763
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f2766
    LEA EBX,[EAX*0x4 + 0x0]             ; 004f276a
    MOV EDX,dword ptr [EDX*0x4 + 0x1c5faec] ; 004f2771
    SAR ECX,0x10                        ; 004f2778
    ADD EDX,EBX                         ; 004f277b
    CMP EAX,ECX                         ; 004f277d
    JGE 0x004f2790                      ; 004f277f
        ;   XREF to: 004f2790 (CONDITIONAL_JUMP)  ; LAB_004f2790
    INC EAX                             ; 004f2781
        ;   Label: LAB_004f2781
    MOV dword ptr [EDX],0x80000000      ; 004f2782
    ADD EDX,0x4                         ; 004f2788
    CMP EAX,ECX                         ; 004f278b
    JL 0x004f2781                       ; 004f278d
        ;   XREF to: 004f2781 (CONDITIONAL_JUMP)  ; LAB_004f2781
    NOP                                 ; 004f278f
    POP EBX                             ; 004f2790
        ;   Label: LAB_004f2790
    RET                                 ; 004f2791

