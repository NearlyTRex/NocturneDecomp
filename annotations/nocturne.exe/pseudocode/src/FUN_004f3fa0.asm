; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f3fa0(int param_1)
;
;
; XREF[1]:
;   FUN_004f5bf0 at 004f5c16
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3fa0
        ;   Label: FUN_004f3fa0
    MOV EDX,dword ptr [EAX + 0x20]      ; 004f3fa4
    TEST EDX,EDX                        ; 004f3fa7
    JNZ 0x004f3fae                      ; 004f3fa9
        ;   XREF to: 004f3fae (CONDITIONAL_JUMP)  ; LAB_004f3fae
    XOR EAX,EAX                         ; 004f3fab
    RET                                 ; 004f3fad
    PUSH EBX                            ; 004f3fae
        ;   Label: LAB_004f3fae
    MOV ECX,dword ptr [EAX + 0x1c]      ; 004f3faf
    LEA EAX,[ECX + 0x1]                 ; 004f3fb2
    MOV EBX,dword ptr [EDX + ECX*0x4]   ; 004f3fb5
    SHL EAX,0x2                         ; 004f3fb8
    ADD EAX,EBX                         ; 004f3fbb
    POP EBX                             ; 004f3fbd
    RET                                 ; 004f3fbe

