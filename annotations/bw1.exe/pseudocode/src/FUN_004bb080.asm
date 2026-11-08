; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb080(int *param_1)
;
;
; XREF[1]:
;   FUN_004bb1c0 at 004bb1e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb080
        ;   Label: FUN_004bb080
    PUSH ESI                            ; 004bb081
    PUSH EDI                            ; 004bb082
    MOV EDI,dword ptr [ESP + 0x10]      ; 004bb083
    MOV EDX,dword ptr [EDI]             ; 004bb087
    XOR EBX,EBX                         ; 004bb089
    TEST EDX,EDX                        ; 004bb08b
    JLE 0x004bb0a2                      ; 004bb08d
        ;   XREF to: 004bb0a2 (CONDITIONAL_JUMP)  ; LAB_004bb0a2
    MOV ESI,EDI                         ; 004bb08f
    MOV EAX,dword ptr [ESI + 0x4]       ; 004bb091
        ;   Label: LAB_004bb091
    TEST EAX,EAX                        ; 004bb094
    JNZ 0x004bb0ac                      ; 004bb096
        ;   XREF to: 004bb0ac (CONDITIONAL_JUMP)  ; LAB_004bb0ac
    INC EBX                             ; 004bb098
        ;   Label: LAB_004bb098
    MOV ECX,dword ptr [EDI]             ; 004bb099
    ADD ESI,0x4                         ; 004bb09b
    CMP EBX,ECX                         ; 004bb09e
    JL 0x004bb091                       ; 004bb0a0
        ;   XREF to: 004bb091 (CONDITIONAL_JUMP)  ; LAB_004bb091
    MOV dword ptr [EDI],0x0             ; 004bb0a2
        ;   Label: LAB_004bb0a2
    POP EDI                             ; 004bb0a8
    POP ESI                             ; 004bb0a9
    POP EBX                             ; 004bb0aa
    RET                                 ; 004bb0ab
    PUSH 0x2                            ; 004bb0ac
        ;   Label: LAB_004bb0ac
    MOV EDX,dword ptr [EAX + 0x14]      ; 004bb0ae
    PUSH EAX                            ; 004bb0b1
    CALL dword ptr [EDX]                ; 004bb0b2
    ADD ESP,0x8                         ; 004bb0b4
    JMP 0x004bb098                      ; 004bb0b7
        ;   XREF to: 004bb098 (UNCONDITIONAL_JUMP)  ; LAB_004bb098

