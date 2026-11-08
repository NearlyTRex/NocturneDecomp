; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00574c20(int param_1,undefined4 *param_2,uint param_3)
;
;
; Called Functions:
;   FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574c20
        ;   Label: FUN_00574c20
    PUSH ESI                            ; 00574c21
    PUSH EDI                            ; 00574c22
    PUSH EBP                            ; 00574c23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00574c24
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00574c28
    MOV EDX,dword ptr [EBX + 0xc]       ; 00574c2c
    MOV EAX,dword ptr [EBX + 0x8]       ; 00574c2f
    SUB EAX,EDX                         ; 00574c32
    CMP EBP,EAX                         ; 00574c34
    JLE 0x00574c44                      ; 00574c36
        ;   XREF to: 00574c44 (CONDITIONAL_JUMP)  ; LAB_00574c44
    CMP dword ptr [EBX + 0x14],0x0      ; 00574c38
    JNZ 0x00574c7b                      ; 00574c3c
        ;   XREF to: 00574c7b (CONDITIONAL_JUMP)  ; LAB_00574c7b
    TEST EAX,EAX                        ; 00574c3e
    JZ 0x00574ca5                       ; 00574c40
        ;   XREF to: 00574ca5 (CONDITIONAL_JUMP)  ; LAB_00574ca5
    MOV EBP,EAX                         ; 00574c42
    MOV ESI,dword ptr [ESP + 0x18]      ; 00574c44
        ;   Label: LAB_00574c44
    MOV EDI,dword ptr [EBX + 0x4]       ; 00574c48
    MOV EAX,dword ptr [EBX + 0xc]       ; 00574c4b
    MOV ECX,EBP                         ; 00574c4e
    ADD EDI,EAX                         ; 00574c50
    PUSH EDI                            ; 00574c52
    MOV EAX,ECX                         ; 00574c53
    SHR ECX,0x2                         ; 00574c55
    MOVSD.REP ES:EDI,ESI                ; 00574c58
    MOV CL,AL                           ; 00574c5a
    AND CL,0x3                          ; 00574c5c
    MOVSB.REP ES:EDI,ESI                ; 00574c5f
    POP EDI                             ; 00574c61
    MOV EDX,dword ptr [EBX + 0xc]       ; 00574c62
    ADD EDX,EBP                         ; 00574c65
    MOV ECX,dword ptr [EBX + 0x10]      ; 00574c67
    MOV dword ptr [EBX + 0xc],EDX       ; 00574c6a
    CMP EDX,ECX                         ; 00574c6d
    JL 0x00574c74                       ; 00574c6f
        ;   XREF to: 00574c74 (CONDITIONAL_JUMP)  ; LAB_00574c74
    MOV dword ptr [EBX + 0x10],EDX      ; 00574c71
    MOV EAX,EBP                         ; 00574c74
        ;   Label: LAB_00574c74
    POP EBP                             ; 00574c76
    POP EDI                             ; 00574c77
    POP ESI                             ; 00574c78
    POP EBX                             ; 00574c79
    RET                                 ; 00574c7a
    LEA EDI,[EDX + EBP*0x1 + 0x4000]    ; 00574c7b
        ;   Label: LAB_00574c7b
    PUSH EDI                            ; 00574c82
    MOV ESI,dword ptr [EBX + 0x4]       ; 00574c83
    PUSH ESI                            ; 00574c86
    CALL FUN_005a3e50                   ; 00574c87
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e50()
    ADD ESP,0x8                         ; 00574c8c
    TEST EAX,EAX                        ; 00574c8f
    JZ 0x00574c9b                       ; 00574c91
        ;   XREF to: 00574c9b (CONDITIONAL_JUMP)  ; LAB_00574c9b
    MOV dword ptr [EBX + 0x4],EAX       ; 00574c93
    MOV dword ptr [EBX + 0x8],EDI       ; 00574c96
    JMP 0x00574c44                      ; 00574c99
        ;   XREF to: 00574c44 (UNCONDITIONAL_JUMP)  ; LAB_00574c44
    MOV EAX,0xfffffffe                  ; 00574c9b
        ;   Label: LAB_00574c9b
    POP EBP                             ; 00574ca0
    POP EDI                             ; 00574ca1
    POP ESI                             ; 00574ca2
    POP EBX                             ; 00574ca3
    RET                                 ; 00574ca4
    MOV EAX,0xffffffff                  ; 00574ca5
        ;   Label: LAB_00574ca5
    POP EBP                             ; 00574caa
    POP EDI                             ; 00574cab
    POP ESI                             ; 00574cac
    POP EBX                             ; 00574cad
    RET                                 ; 00574cae

