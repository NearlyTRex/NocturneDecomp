; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00439ce0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007e3e88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439ce0
        ;   Label: FUN_00439ce0
    PUSH ESI                            ; 00439ce1
    PUSH EDI                            ; 00439ce2
    PUSH EBP                            ; 00439ce3
    MOV ESI,dword ptr [0x007e3e88]      ; 00439ce4 | DAT_007e3e88
    XOR ECX,ECX                         ; 00439cea
    TEST ESI,ESI                        ; 00439cec
    JLE 0x00439d0d                      ; 00439cee
        ;   XREF to: 00439d0d (CONDITIONAL_JUMP)  ; LAB_00439d0d
    MOV EAX,0x7e3e8c                    ; 00439cf0
    MOV EDX,dword ptr [EAX + 0x8]       ; 00439cf5
        ;   Label: LAB_00439cf5
    TEST EDX,EDX                        ; 00439cf8
    JZ 0x00439d18                       ; 00439cfa
        ;   XREF to: 00439d18 (CONDITIONAL_JUMP)  ; LAB_00439d18
    MOV EBX,dword ptr [EAX + 0x8]       ; 00439cfc
    CMP EBX,dword ptr [EAX]             ; 00439cff
    JGE 0x00439d26                      ; 00439d01
        ;   XREF to: 00439d26 (CONDITIONAL_JUMP)  ; LAB_00439d26
    MOV dword ptr [EAX],EBX             ; 00439d03
    INC ECX                             ; 00439d05
        ;   Label: LAB_00439d05
    ADD EAX,0x30                        ; 00439d06
    CMP ECX,ESI                         ; 00439d09
    JL 0x00439cf5                       ; 00439d0b
        ;   XREF to: 00439cf5 (CONDITIONAL_JUMP)  ; LAB_00439cf5
    MOV dword ptr [0x007e3e88],ESI      ; 00439d0d | DAT_007e3e88
        ;   Label: LAB_00439d0d
    POP EBP                             ; 00439d13
    POP EDI                             ; 00439d14
    POP ESI                             ; 00439d15
    POP EBX                             ; 00439d16
    RET                                 ; 00439d17
    MOV dword ptr [EAX + 0x8],0x1       ; 00439d18
        ;   Label: LAB_00439d18
    MOV dword ptr [EAX],EDX             ; 00439d1f
    MOV dword ptr [EAX + 0x4],EDX       ; 00439d21
    JMP 0x00439d05                      ; 00439d24
        ;   XREF to: 00439d05 (UNCONDITIONAL_JUMP)  ; LAB_00439d05
    MOV EDX,EBX                         ; 00439d26
        ;   Label: LAB_00439d26
    MOV EDI,dword ptr [EAX]             ; 00439d28
    NEG EDX                             ; 00439d2a
    CMP EDX,EDI                         ; 00439d2c
    JLE 0x00439d34                      ; 00439d2e
        ;   XREF to: 00439d34 (CONDITIONAL_JUMP)  ; LAB_00439d34
    MOV dword ptr [EAX],EDX             ; 00439d30
    JMP 0x00439d05                      ; 00439d32
        ;   XREF to: 00439d05 (UNCONDITIONAL_JUMP)  ; LAB_00439d05
    MOV EBP,dword ptr [EAX + 0x8]       ; 00439d34
        ;   Label: LAB_00439d34
    MOV EBX,dword ptr [EAX + 0x4]       ; 00439d37
    CMP EBX,EBP                         ; 00439d3a
    JLE 0x00439d43                      ; 00439d3c
        ;   XREF to: 00439d43 (CONDITIONAL_JUMP)  ; LAB_00439d43
    MOV dword ptr [EAX + 0x4],EBP       ; 00439d3e
    JMP 0x00439d05                      ; 00439d41
        ;   XREF to: 00439d05 (UNCONDITIONAL_JUMP)  ; LAB_00439d05
    CMP EDX,EBX                         ; 00439d43
        ;   Label: LAB_00439d43
    JLE 0x00439d05                      ; 00439d45
        ;   XREF to: 00439d05 (CONDITIONAL_JUMP)  ; LAB_00439d05
    MOV dword ptr [EAX + 0x4],EDX       ; 00439d47
    JMP 0x00439d05                      ; 00439d4a
        ;   XREF to: 00439d05 (UNCONDITIONAL_JUMP)  ; LAB_00439d05

