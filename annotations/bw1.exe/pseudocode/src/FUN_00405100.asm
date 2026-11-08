; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00405100(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405100
        ;   Label: FUN_00405100
    PUSH ESI                            ; 00405101
    PUSH EBP                            ; 00405102
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405103
    LEA ESI,[EBX + 0x18]                ; 00405107
    LEA EAX,[EBX + 0x8]                 ; 0040510a
    PUSH EAX                            ; 0040510d
    CALL FUN_00403920                   ; 0040510e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00405113
    TEST EAX,EAX                        ; 00405116
    JZ 0x00405158                       ; 00405118
        ;   XREF to: 00405158 (CONDITIONAL_JUMP)  ; LAB_00405158
    CMP dword ptr [0x01c51d00],0x0      ; 0040511a | DAT_01c51d00
    JNZ 0x00405173                      ; 00405121
        ;   XREF to: 00405173 (CONDITIONAL_JUMP)  ; LAB_00405173
    CMP dword ptr [0x0061b4a0],0x20     ; 00405123 | DAT_0061b4a0
    JNZ 0x00405167                      ; 0040512a
        ;   XREF to: 00405167 (CONDITIONAL_JUMP)  ; LAB_00405167
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 0040512c | DAT_01c4f02c
    PUSH EDI                            ; 00405136
        ;   Label: LAB_00405136
    MOV EDI,0x23                        ; 00405137
    PUSH ESI                            ; 0040513c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040513d
    XOR EBP,EBP                         ; 00405140
    PUSH EAX                            ; 00405142
    MOV dword ptr [0x01c51d14],EDI      ; 00405143 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00405149 | DAT_01c51d18
    CALL FUN_0043cbf0                   ; 0040514f
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
    ADD ESP,0x8                         ; 00405154
    POP EDI                             ; 00405157
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405158
        ;   Label: LAB_00405158
    ADD EBX,0x18                        ; 0040515b
    SHL EAX,0x2                         ; 0040515e
    ADD EAX,EBX                         ; 00405161
    POP EBP                             ; 00405163
    POP ESI                             ; 00405164
    POP EBX                             ; 00405165
    RET                                 ; 00405166
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405167 | DAT_01c4f02c
        ;   Label: LAB_00405167
    JMP 0x00405136                      ; 00405171
        ;   XREF to: 00405136 (UNCONDITIONAL_JUMP)  ; LAB_00405136
    CMP dword ptr [0x0061b4a0],0x20     ; 00405173 | DAT_0061b4a0
        ;   Label: LAB_00405173
    JNZ 0x00405188                      ; 0040517a
        ;   XREF to: 00405188 (CONDITIONAL_JUMP)  ; LAB_00405188
    MOV dword ptr [0x01c4f02c],0x57de01 ; 0040517c | DAT_01c4f02c | LAB_0057de01
    JMP 0x00405136                      ; 00405186
        ;   XREF to: 00405136 (UNCONDITIONAL_JUMP)  ; LAB_00405136
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00405188 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_00405188
    JMP 0x00405136                      ; 00405192
        ;   XREF to: 00405136 (UNCONDITIONAL_JUMP)  ; LAB_00405136

