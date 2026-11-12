; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte cockpit_drawsurf_cpp_FUN_0047f170(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f170
        ;   Label: cockpit_drawsurf.cpp_FUN_0047f170
    MOV ECX,dword ptr [ESP + 0x8]       ; 0047f171
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047f175
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0047f179
    XOR EAX,EAX                         ; 0047f17d
    CMP EDX,EBX                         ; 0047f17f
    JLE 0x0047f188                      ; 0047f181
        ;   XREF to: 0047f188 (CONDITIONAL_JUMP)  ; LAB_0047f188
    MOV EAX,0x1                         ; 0047f183
    CMP EDX,dword ptr [ESP + 0x14]      ; 0047f188
        ;   Label: LAB_0047f188
    JGE 0x0047f190                      ; 0047f18c
        ;   XREF to: 0047f190 (CONDITIONAL_JUMP)  ; LAB_0047f190
    OR AL,0x2                           ; 0047f18e
    CMP ECX,dword ptr [ESP + 0x18]      ; 0047f190
        ;   Label: LAB_0047f190
    JLE 0x0047f198                      ; 0047f194
        ;   XREF to: 0047f198 (CONDITIONAL_JUMP)  ; LAB_0047f198
    OR AL,0x4                           ; 0047f196
    CMP ECX,dword ptr [ESP + 0x10]      ; 0047f198
        ;   Label: LAB_0047f198
    JGE 0x0047f1a0                      ; 0047f19c
        ;   XREF to: 0047f1a0 (CONDITIONAL_JUMP)  ; LAB_0047f1a0
    OR AL,0x8                           ; 0047f19e
    POP EBX                             ; 0047f1a0
        ;   Label: LAB_0047f1a0
    RET                                 ; 0047f1a1

