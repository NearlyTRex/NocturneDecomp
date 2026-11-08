; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a0c10(int param_1,undefined4 *param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   FUN_00401010 at 004010ef
;   FUN_00401590 at 004015ca
;   FUN_00402940 at 00402aa6
;   FUN_00437490 at 00437564
;   FUN_0043b2e0 at 0043b364
;   FUN_0053b250 at 0053b3fc
;   FUN_0056e830 at 0056eb89
;   FUN_00570460 at 00570994
;   FUN_005967a0 at 00596ab3
;
; Called Functions:
;   FUN_005a0ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0c10
        ;   Label: FUN_005a0c10
    PUSH ESI                            ; 005a0c11
    PUSH EDI                            ; 005a0c12
    PUSH EBP                            ; 005a0c13
    SUB ESP,0x8                         ; 005a0c14
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005a0c17
    MOV EBP,dword ptr [ESP + 0x24]      ; 005a0c1b
    CMP dword ptr [EBX + 0x4],0x0       ; 005a0c1f
    JZ 0x005a0cd9                       ; 005a0c23
        ;   XREF to: 005a0cd9 (CONDITIONAL_JUMP)  ; LAB_005a0cd9
    MOV ECX,dword ptr [EBX + 0x8]       ; 005a0c29
    CMP ECX,dword ptr [EBX + 0x10]      ; 005a0c2c
    JLE 0x005a0ce6                      ; 005a0c2f
        ;   XREF to: 005a0ce6 (CONDITIONAL_JUMP)  ; LAB_005a0ce6
    MOV EAX,ECX                         ; 005a0c35
    SUB EAX,dword ptr [EBX + 0x10]      ; 005a0c37
    CMP EBP,EAX                         ; 005a0c3a
    JLE 0x005a0c40                      ; 005a0c3c
        ;   XREF to: 005a0c40 (CONDITIONAL_JUMP)  ; LAB_005a0c40
    MOV EBP,EAX                         ; 005a0c3e
    XOR EDI,EDI                         ; 005a0c40
        ;   Label: LAB_005a0c40
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a0c42
    MOV dword ptr [ESP],EDI             ; 005a0c46
    MOV dword ptr [ESP + 0x4],EAX       ; 005a0c49
    TEST EBP,EBP                        ; 005a0c4d
    JLE 0x005a0cce                      ; 005a0c4f
        ;   XREF to: 005a0cce (CONDITIONAL_JUMP)  ; LAB_005a0cce
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a0c55
        ;   Label: LAB_005a0c55
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005a0c58
    CMP EAX,ESI                         ; 005a0c5b
    JG 0x005a0c69                       ; 005a0c5d
        ;   XREF to: 005a0c69 (CONDITIONAL_JUMP)  ; LAB_005a0c69
    MOV EDI,dword ptr [EBX + 0x24]      ; 005a0c5f
    LEA EDX,[EAX + EDI*0x1]             ; 005a0c62
    CMP EDX,ESI                         ; 005a0c65
    JG 0x005a0c7a                       ; 005a0c67
        ;   XREF to: 005a0c7a (CONDITIONAL_JUMP)  ; LAB_005a0c7a
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a0c69
        ;   Label: LAB_005a0c69
    PUSH EDX                            ; 005a0c6c
    PUSH EBX                            ; 005a0c6d
    CALL FUN_005a0ec0                   ; 005a0c6e
        ;   XREF to: 005a0ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0ec0()
    ADD ESP,0x8                         ; 005a0c73
    TEST EAX,EAX                        ; 005a0c76
    JZ 0x005a0cd9                       ; 005a0c78
        ;   XREF to: 005a0cd9 (CONDITIONAL_JUMP)  ; LAB_005a0cd9
    MOV ECX,dword ptr [EBX + 0x24]      ; 005a0c7a
        ;   Label: LAB_005a0c7a
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005a0c7d
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a0c80
    ADD EDX,ECX                         ; 005a0c83
    SUB EDX,ESI                         ; 005a0c85
    CMP EDX,EBP                         ; 005a0c87
    JLE 0x005a0c8d                      ; 005a0c89
        ;   XREF to: 005a0c8d (CONDITIONAL_JUMP)  ; LAB_005a0c8d
    MOV EDX,EBP                         ; 005a0c8b
    MOV EAX,dword ptr [EBX + 0x18]      ; 005a0c8d
        ;   Label: LAB_005a0c8d
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a0c90
    MOV ESI,dword ptr [EBX + 0x1c]      ; 005a0c93
    ADD EAX,ECX                         ; 005a0c96
    MOV EDI,dword ptr [ESP + 0x4]       ; 005a0c98
    SUB EAX,ESI                         ; 005a0c9c
    MOV ECX,EDX                         ; 005a0c9e
    MOV ESI,EAX                         ; 005a0ca0
    SUB EBP,EDX                         ; 005a0ca2
    PUSH EDI                            ; 005a0ca4
    MOV EAX,ECX                         ; 005a0ca5
    SHR ECX,0x2                         ; 005a0ca7
    MOVSD.REP ES:EDI,ESI                ; 005a0caa
    MOV CL,AL                           ; 005a0cac
    AND CL,0x3                          ; 005a0cae
    MOVSB.REP ES:EDI,ESI                ; 005a0cb1
    POP EDI                             ; 005a0cb3
    MOV ECX,dword ptr [ESP]             ; 005a0cb4
    ADD EDI,EDX                         ; 005a0cb7
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a0cb9
    MOV dword ptr [ESP + 0x4],EDI       ; 005a0cbc
    ADD ECX,EDX                         ; 005a0cc0
    ADD EAX,EDX                         ; 005a0cc2
    MOV dword ptr [ESP],ECX             ; 005a0cc4
    MOV dword ptr [EBX + 0x10],EAX      ; 005a0cc7
    TEST EBP,EBP                        ; 005a0cca
    JG 0x005a0c55                       ; 005a0ccc
        ;   XREF to: 005a0c55 (CONDITIONAL_JUMP)  ; LAB_005a0c55
    MOV EAX,dword ptr [ESP]             ; 005a0cce
        ;   Label: LAB_005a0cce
    ADD ESP,0x8                         ; 005a0cd1
    POP EBP                             ; 005a0cd4
    POP EDI                             ; 005a0cd5
    POP ESI                             ; 005a0cd6
    POP EBX                             ; 005a0cd7
    RET                                 ; 005a0cd8
    MOV EAX,0xfffffffe                  ; 005a0cd9
        ;   Label: LAB_005a0cd9
    ADD ESP,0x8                         ; 005a0cde
    POP EBP                             ; 005a0ce1
    POP EDI                             ; 005a0ce2
    POP ESI                             ; 005a0ce3
    POP EBX                             ; 005a0ce4
    RET                                 ; 005a0ce5
    MOV EAX,0xffffffff                  ; 005a0ce6
        ;   Label: LAB_005a0ce6
    ADD ESP,0x8                         ; 005a0ceb
    POP EBP                             ; 005a0cee
    POP EDI                             ; 005a0cef
    POP ESI                             ; 005a0cf0
    POP EBX                             ; 005a0cf1
    RET                                 ; 005a0cf2

