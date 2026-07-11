; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00493140(int param_1,undefined4 param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   FUN_0044c560 at 0044c5cb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493140
        ;   Label: FUN_00493140
    MOV EBX,dword ptr [ESP + 0xc]       ; 00493141
    MOV EAX,dword ptr [ESP + 0x10]      ; 00493145
    MOV ECX,dword ptr [ESP + 0x14]      ; 00493149
    CMP ECX,0xffffff7f                  ; 0049314d
    JNZ 0x00493157                      ; 00493153
        ;   XREF to: 00493157 (CONDITIONAL_JUMP)  ; LAB_00493157
    MOV ECX,EAX                         ; 00493155
    TEST EAX,EAX                        ; 00493157
        ;   Label: LAB_00493157
    JL 0x00493192                       ; 00493159
        ;   XREF to: 00493192 (CONDITIONAL_JUMP)  ; LAB_00493192
    CMP ECX,0x100                       ; 0049315b
        ;   Label: LAB_0049315b
    JL 0x00493168                       ; 00493161
        ;   XREF to: 00493168 (CONDITIONAL_JUMP)  ; LAB_00493168
    MOV ECX,0xff                        ; 00493163
    MOV EDX,EAX                         ; 00493168
        ;   Label: LAB_00493168
    CMP EAX,ECX                         ; 0049316a
    JG 0x00493190                       ; 0049316c
        ;   XREF to: 00493190 (CONDITIONAL_JUMP)  ; LAB_00493190
    PUSH ESI                            ; 0049316e
    MOV ESI,dword ptr [ESP + 0xc]       ; 0049316f
    SHL EAX,0x2                         ; 00493173
    ADD EAX,ESI                         ; 00493176
    POP ESI                             ; 00493178
    ADD EAX,0x4                         ; 00493179
        ;   Label: LAB_00493179
    INC EDX                             ; 0049317c
    MOV dword ptr [EAX + 0x2d64],EBX    ; 0049317d
    CMP EDX,ECX                         ; 00493183
    JLE 0x00493179                      ; 00493185
        ;   XREF to: 00493179 (CONDITIONAL_JUMP)  ; LAB_00493179
    LEA EAX,[EAX]                       ; 00493187
    LEA EDX,[EDX]                       ; 0049318d
    POP EBX                             ; 00493190
        ;   Label: LAB_00493190
    RET                                 ; 00493191
    XOR EAX,EAX                         ; 00493192
        ;   Label: LAB_00493192
    JMP 0x0049315b                      ; 00493194
        ;   XREF to: 0049315b (UNCONDITIONAL_JUMP)  ; LAB_0049315b

