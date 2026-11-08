; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044dd00(int param_1)
;
;
; XREF[1]:
;   FUN_00535da0 at 00536030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044dd00
        ;   Label: FUN_0044dd00
    PUSH ESI                            ; 0044dd01
    PUSH EDI                            ; 0044dd02
    PUSH EBP                            ; 0044dd03
    MOV EBP,dword ptr [ESP + 0x14]      ; 0044dd04
    MOV EDX,dword ptr [EBP + 0x154]     ; 0044dd08
    XOR EDI,EDI                         ; 0044dd0e
    TEST EDX,EDX                        ; 0044dd10
    JLE 0x0044dd4f                      ; 0044dd12
        ;   XREF to: 0044dd4f (CONDITIONAL_JUMP)  ; LAB_0044dd4f
    XOR ESI,ESI                         ; 0044dd14
    MOV ECX,0xb1a288                    ; 0044dd16
        ;   Label: LAB_0044dd16
    MOV EAX,0xb2cfc8                    ; 0044dd1b
    MOV EDX,dword ptr [EBP + 0x150]     ; 0044dd20
    ADD ECX,ESI                         ; 0044dd26
    ADD EAX,ESI                         ; 0044dd28
    TEST EDX,EDX                        ; 0044dd2a
    JLE 0x0044dd3e                      ; 0044dd2c
        ;   XREF to: 0044dd3e (CONDITIONAL_JUMP)  ; LAB_0044dd3e
    MOV BL,byte ptr [ECX]               ; 0044dd2e
        ;   Label: LAB_0044dd2e
    INC ECX                             ; 0044dd30
    MOV BH,byte ptr [EAX]               ; 0044dd31
    INC EAX                             ; 0044dd33
    ADD BH,BL                           ; 0044dd34
    DEC EDX                             ; 0044dd36
    MOV byte ptr [EAX + -0x1],BH        ; 0044dd37
    TEST EDX,EDX                        ; 0044dd3a
    JG 0x0044dd2e                       ; 0044dd3c
        ;   XREF to: 0044dd2e (CONDITIONAL_JUMP)  ; LAB_0044dd2e
    INC EDI                             ; 0044dd3e
        ;   Label: LAB_0044dd3e
    MOV ECX,dword ptr [EBP + 0x154]     ; 0044dd3f
    ADD ESI,0x140                       ; 0044dd45
    CMP EDI,ECX                         ; 0044dd4b
    JL 0x0044dd16                       ; 0044dd4d
        ;   XREF to: 0044dd16 (CONDITIONAL_JUMP)  ; LAB_0044dd16
    POP EBP                             ; 0044dd4f
        ;   Label: LAB_0044dd4f
    POP EDI                             ; 0044dd50
    POP ESI                             ; 0044dd51
    POP EBX                             ; 0044dd52
    RET                                 ; 0044dd53

