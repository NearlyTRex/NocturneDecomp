; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00429180(int param_1)
;
;
; XREF[2]:
;   FUN_004cf4e0 at 004cf4f3
;   FUN_004d06c0 at 004d0718
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429180
        ;   Label: FUN_00429180
    MOV ECX,dword ptr [ESP + 0x8]       ; 00429181
    MOV EDX,ECX                         ; 00429185
    MOV EBX,dword ptr [ECX + 0x2620]    ; 00429187
    XOR EAX,EAX                         ; 0042918d
    TEST EBX,EBX                        ; 0042918f
    JNZ 0x004291a5                      ; 00429191
        ;   XREF to: 004291a5 (CONDITIONAL_JUMP)  ; LAB_004291a5
    INC EAX                             ; 00429193
        ;   Label: LAB_00429193
    ADD EDX,0x78                        ; 00429194
    CMP EAX,0x2                         ; 00429197
    JGE 0x004291ac                      ; 0042919a
        ;   XREF to: 004291ac (CONDITIONAL_JUMP)  ; LAB_004291ac
    CMP dword ptr [EDX + 0x2620],0x0    ; 0042919c
    JZ 0x00429193                       ; 004291a3
        ;   XREF to: 00429193 (CONDITIONAL_JUMP)  ; LAB_00429193
    MOV EAX,0x1                         ; 004291a5
        ;   Label: LAB_004291a5
    POP EBX                             ; 004291aa
    RET                                 ; 004291ab
    XOR EAX,EAX                         ; 004291ac
        ;   Label: LAB_004291ac
    POP EBX                             ; 004291ae
    RET                                 ; 004291af

