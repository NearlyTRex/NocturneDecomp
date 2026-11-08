; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8050(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[9]:
;   FUN_00450620 at 004509c7
;   FUN_005a0a90 at 005a0b0e
;   FUN_005a1d90 at 005a1ded
;   FUN_005a3f40 at 005a3f9d
;   FUN_005a6030 at 005a6099
;   FUN_005a9440 at 005a94a9
;   FUN_005aa8c0 at 005aa929
;   FUN_005ac8d0 at 005ac8f5
;   FUN_005ad4f0 at 005ad515
;
; Called Functions:
;   FUN_005a84c0
;   FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005a8050
        ;   Label: FUN_005a8050
    PUSH EBP                            ; 005a8051
    MOV EDI,dword ptr [ESP + 0xc]       ; 005a8052
    CMP dword ptr [EDI + 0x14],0x0      ; 005a8056
    JZ 0x005a805f                       ; 005a805a
        ;   XREF to: 005a805f (CONDITIONAL_JUMP)  ; LAB_005a805f
    POP EBP                             ; 005a805c
    POP EDI                             ; 005a805d
    RET                                 ; 005a805e
    PUSH EBX                            ; 005a805f
        ;   Label: LAB_005a805f
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a8060
    MOV EBX,dword ptr [EDI + 0x18]      ; 005a8064
    MOV dword ptr [EDI + 0x14],EAX      ; 005a8067
    LEA EAX,[EBX*0x4 + 0x0]             ; 005a806a
    SUB EAX,EBX                         ; 005a8071
    SHL EAX,0x5                         ; 005a8073
    PUSH EAX                            ; 005a8076
    XOR EBX,EBX                         ; 005a8077
    CALL FUN_005b8580                   ; 005a8079
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 005a807e
    MOV ECX,dword ptr [EDI + 0x18]      ; 005a8081
    MOV dword ptr [EDI + 0x3c],EAX      ; 005a8084
    TEST ECX,ECX                        ; 005a8087
    JLE 0x005a80a8                      ; 005a8089
        ;   XREF to: 005a80a8 (CONDITIONAL_JUMP)  ; LAB_005a80a8
    PUSH ESI                            ; 005a808b
    XOR ESI,ESI                         ; 005a808c
    MOV EAX,dword ptr [EDI + 0x3c]      ; 005a808e
        ;   Label: LAB_005a808e
    ADD EAX,ESI                         ; 005a8091
    PUSH EAX                            ; 005a8093
    INC EBX                             ; 005a8094
    CALL FUN_005a84c0                   ; 005a8095
        ;   XREF to: 005a84c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a84c0()
    ADD ESI,0x60                        ; 005a809a
    MOV EBP,dword ptr [EDI + 0x18]      ; 005a809d
    ADD ESP,0x4                         ; 005a80a0
    CMP EBX,EBP                         ; 005a80a3
    JL 0x005a808e                       ; 005a80a5
        ;   XREF to: 005a808e (CONDITIONAL_JUMP)  ; LAB_005a808e
    POP ESI                             ; 005a80a7
    MOV EAX,dword ptr [EDI + 0x14]      ; 005a80a8
        ;   Label: LAB_005a80a8
    ADD EAX,0x20                        ; 005a80ab
    CMP EDI,EAX                         ; 005a80ae
    JZ 0x005a80c2                       ; 005a80b0
        ;   XREF to: 005a80c2 (CONDITIONAL_JUMP)  ; LAB_005a80c2
    MOV EDX,dword ptr [EAX]             ; 005a80b2
    MOV dword ptr [EDI],EDX             ; 005a80b4
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a80b6
    MOV dword ptr [EDI + 0x4],EDX       ; 005a80b9
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a80bc
    MOV dword ptr [EDI + 0x8],EDX       ; 005a80bf
    MOV dword ptr [EDI + 0x10],0x0      ; 005a80c2
        ;   Label: LAB_005a80c2
    POP EBX                             ; 005a80c9
    POP EBP                             ; 005a80ca
    POP EDI                             ; 005a80cb
    RET                                 ; 005a80cc

