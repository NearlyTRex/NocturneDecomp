; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00516250(int param_1)
;
;
; XREF[1]:
;   FUN_00517f10 at 00517f36
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00516250
        ;   Label: FUN_00516250
    MOV EDX,dword ptr [EAX + 0x20]      ; 00516254
    TEST EDX,EDX                        ; 00516257
    JNZ 0x0051625e                      ; 00516259
        ;   XREF to: 0051625e (CONDITIONAL_JUMP)  ; LAB_0051625e
    XOR EAX,EAX                         ; 0051625b
    RET                                 ; 0051625d
    PUSH EBX                            ; 0051625e
        ;   Label: LAB_0051625e
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0051625f
    LEA EAX,[ECX + 0x1]                 ; 00516262
    MOV EBX,dword ptr [EDX + ECX*0x4]   ; 00516265
    SHL EAX,0x2                         ; 00516268
    ADD EAX,EBX                         ; 0051626b
    POP EBX                             ; 0051626d
    RET                                 ; 0051626e

