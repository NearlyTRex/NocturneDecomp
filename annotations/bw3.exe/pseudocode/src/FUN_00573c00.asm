; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00573c00(int param_1,undefined4 *param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   FUN_00401010 at 004010ef
;   FUN_00401590 at 004015ca
;   FUN_00402940 at 00402aa6
;   FUN_004350a0 at 00435174
;   FUN_00438ef0 at 00438f74
;   FUN_00512fb0 at 0051315c
;   FUN_00551d20 at 00552079
;   FUN_00553960 at 00553e94
;   FUN_00569790 at 00569aa3
;
; Called Functions:
;   FUN_00573eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573c00
        ;   Label: FUN_00573c00
    PUSH ESI                            ; 00573c01
    PUSH EDI                            ; 00573c02
    PUSH EBP                            ; 00573c03
    SUB ESP,0x8                         ; 00573c04
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00573c07
    MOV EBP,dword ptr [ESP + 0x24]      ; 00573c0b
    CMP dword ptr [EBX + 0x4],0x0       ; 00573c0f
    JZ 0x00573cc9                       ; 00573c13
        ;   XREF to: 00573cc9 (CONDITIONAL_JUMP)  ; LAB_00573cc9
    MOV ECX,dword ptr [EBX + 0x8]       ; 00573c19
    CMP ECX,dword ptr [EBX + 0x10]      ; 00573c1c
    JLE 0x00573cd6                      ; 00573c1f
        ;   XREF to: 00573cd6 (CONDITIONAL_JUMP)  ; LAB_00573cd6
    MOV EAX,ECX                         ; 00573c25
    SUB EAX,dword ptr [EBX + 0x10]      ; 00573c27
    CMP EBP,EAX                         ; 00573c2a
    JLE 0x00573c30                      ; 00573c2c
        ;   XREF to: 00573c30 (CONDITIONAL_JUMP)  ; LAB_00573c30
    MOV EBP,EAX                         ; 00573c2e
    XOR EDI,EDI                         ; 00573c30
        ;   Label: LAB_00573c30
    MOV EAX,dword ptr [ESP + 0x20]      ; 00573c32
    MOV dword ptr [ESP],EDI             ; 00573c36
    MOV dword ptr [ESP + 0x4],EAX       ; 00573c39
    TEST EBP,EBP                        ; 00573c3d
    JLE 0x00573cbe                      ; 00573c3f
        ;   XREF to: 00573cbe (CONDITIONAL_JUMP)  ; LAB_00573cbe
    MOV ESI,dword ptr [EBX + 0x10]      ; 00573c45
        ;   Label: LAB_00573c45
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00573c48
    CMP EAX,ESI                         ; 00573c4b
    JG 0x00573c59                       ; 00573c4d
        ;   XREF to: 00573c59 (CONDITIONAL_JUMP)  ; LAB_00573c59
    MOV EDI,dword ptr [EBX + 0x24]      ; 00573c4f
    LEA EDX,[EAX + EDI*0x1]             ; 00573c52
    CMP EDX,ESI                         ; 00573c55
    JG 0x00573c6a                       ; 00573c57
        ;   XREF to: 00573c6a (CONDITIONAL_JUMP)  ; LAB_00573c6a
    MOV EDX,dword ptr [EBX + 0x10]      ; 00573c59
        ;   Label: LAB_00573c59
    PUSH EDX                            ; 00573c5c
    PUSH EBX                            ; 00573c5d
    CALL FUN_00573eb0                   ; 00573c5e
        ;   XREF to: 00573eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573eb0()
    ADD ESP,0x8                         ; 00573c63
    TEST EAX,EAX                        ; 00573c66
    JZ 0x00573cc9                       ; 00573c68
        ;   XREF to: 00573cc9 (CONDITIONAL_JUMP)  ; LAB_00573cc9
    MOV ECX,dword ptr [EBX + 0x24]      ; 00573c6a
        ;   Label: LAB_00573c6a
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00573c6d
    MOV ESI,dword ptr [EBX + 0x10]      ; 00573c70
    ADD EDX,ECX                         ; 00573c73
    SUB EDX,ESI                         ; 00573c75
    CMP EDX,EBP                         ; 00573c77
    JLE 0x00573c7d                      ; 00573c79
        ;   XREF to: 00573c7d (CONDITIONAL_JUMP)  ; LAB_00573c7d
    MOV EDX,EBP                         ; 00573c7b
    MOV EAX,dword ptr [EBX + 0x18]      ; 00573c7d
        ;   Label: LAB_00573c7d
    MOV ECX,dword ptr [EBX + 0x10]      ; 00573c80
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00573c83
    ADD EAX,ECX                         ; 00573c86
    MOV EDI,dword ptr [ESP + 0x4]       ; 00573c88
    SUB EAX,ESI                         ; 00573c8c
    MOV ECX,EDX                         ; 00573c8e
    MOV ESI,EAX                         ; 00573c90
    SUB EBP,EDX                         ; 00573c92
    PUSH EDI                            ; 00573c94
    MOV EAX,ECX                         ; 00573c95
    SHR ECX,0x2                         ; 00573c97
    MOVSD.REP ES:EDI,ESI                ; 00573c9a
    MOV CL,AL                           ; 00573c9c
    AND CL,0x3                          ; 00573c9e
    MOVSB.REP ES:EDI,ESI                ; 00573ca1
    POP EDI                             ; 00573ca3
    MOV ECX,dword ptr [ESP]             ; 00573ca4
    ADD EDI,EDX                         ; 00573ca7
    MOV EAX,dword ptr [EBX + 0x10]      ; 00573ca9
    MOV dword ptr [ESP + 0x4],EDI       ; 00573cac
    ADD ECX,EDX                         ; 00573cb0
    ADD EAX,EDX                         ; 00573cb2
    MOV dword ptr [ESP],ECX             ; 00573cb4
    MOV dword ptr [EBX + 0x10],EAX      ; 00573cb7
    TEST EBP,EBP                        ; 00573cba
    JG 0x00573c45                       ; 00573cbc
        ;   XREF to: 00573c45 (CONDITIONAL_JUMP)  ; LAB_00573c45
    MOV EAX,dword ptr [ESP]             ; 00573cbe
        ;   Label: LAB_00573cbe
    ADD ESP,0x8                         ; 00573cc1
    POP EBP                             ; 00573cc4
    POP EDI                             ; 00573cc5
    POP ESI                             ; 00573cc6
    POP EBX                             ; 00573cc7
    RET                                 ; 00573cc8
    MOV EAX,0xfffffffe                  ; 00573cc9
        ;   Label: LAB_00573cc9
    ADD ESP,0x8                         ; 00573cce
    POP EBP                             ; 00573cd1
    POP EDI                             ; 00573cd2
    POP ESI                             ; 00573cd3
    POP EBX                             ; 00573cd4
    RET                                 ; 00573cd5
    MOV EAX,0xffffffff                  ; 00573cd6
        ;   Label: LAB_00573cd6
    ADD ESP,0x8                         ; 00573cdb
    POP EBP                             ; 00573cde
    POP EDI                             ; 00573cdf
    POP ESI                             ; 00573ce0
    POP EBX                             ; 00573ce1
    RET                                 ; 00573ce2

