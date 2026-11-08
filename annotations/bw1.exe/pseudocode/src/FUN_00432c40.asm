; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00432c40(int param_1)
;
;
; XREF[2]:
;   FUN_004eb890 at 004eb8a3
;   FUN_004ec950 at 004ec9a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432c40
        ;   Label: FUN_00432c40
    MOV ECX,dword ptr [ESP + 0x8]       ; 00432c41
    MOV EDX,ECX                         ; 00432c45
    MOV EBX,dword ptr [ECX + 0x25b0]    ; 00432c47
    XOR EAX,EAX                         ; 00432c4d
    TEST EBX,EBX                        ; 00432c4f
    JNZ 0x00432c65                      ; 00432c51
        ;   XREF to: 00432c65 (CONDITIONAL_JUMP)  ; LAB_00432c65
    INC EAX                             ; 00432c53
        ;   Label: LAB_00432c53
    ADD EDX,0x78                        ; 00432c54
    CMP EAX,0x2                         ; 00432c57
    JGE 0x00432c6c                      ; 00432c5a
        ;   XREF to: 00432c6c (CONDITIONAL_JUMP)  ; LAB_00432c6c
    CMP dword ptr [EDX + 0x25b0],0x0    ; 00432c5c
    JZ 0x00432c53                       ; 00432c63
        ;   XREF to: 00432c53 (CONDITIONAL_JUMP)  ; LAB_00432c53
    MOV EAX,0x1                         ; 00432c65
        ;   Label: LAB_00432c65
    POP EBX                             ; 00432c6a
    RET                                 ; 00432c6b
    XOR EAX,EAX                         ; 00432c6c
        ;   Label: LAB_00432c6c
    POP EBX                             ; 00432c6e
    RET                                 ; 00432c6f

