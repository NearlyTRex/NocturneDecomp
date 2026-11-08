; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055ff40(int param_1)
;
; Local Variables:
; undefined        Stack[-0x12c4]:1  local_12c4
;
; XREF[2]:
;   FUN_004b6170 at 004b6d5f
;   FUN_00589560 at 00589648
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c2a391
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbc0
;   undefined4 DAT_0264bd00
;
; Called Functions:
;   FUN_0055f500
;   FUN_0055f550
;   FUN_005890c0
;   FUN_00589170
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0055ff40
        ;   Label: FUN_0055ff40
    SUB ESP,0x12c0                      ; 0055ff41
    CMP dword ptr [0x01c37788],0x0      ; 0055ff47 | DAT_01c37788
    JZ 0x00560018                       ; 0055ff4e
        ;   XREF to: 00560018 (CONDITIONAL_JUMP)  ; LAB_00560018
    PUSH EBX                            ; 0055ff54
    CMP dword ptr [ESP + 0x12cc],0x0    ; 0055ff55
    JNZ 0x00560001                      ; 0055ff5d
        ;   XREF to: 00560001 (CONDITIONAL_JUMP)  ; LAB_00560001
    MOV EBX,dword ptr [0x0264bd00]      ; 0055ff63 | DAT_0264bd00
    TEST EBX,EBX                        ; 0055ff69
    JNZ 0x00560001                      ; 0055ff6b
        ;   XREF to: 00560001 (CONDITIONAL_JUMP)  ; LAB_00560001
    PUSH EDI                            ; 0055ff71
    PUSH ESI                            ; 0055ff72
    MOV ECX,0x12c0                      ; 0055ff73
    MOV ESI,0x1c2a38c                   ; 0055ff78
    LEA EDI,[ESP + 0xc]                 ; 0055ff7d
    PUSH EDI                            ; 0055ff81
    MOV EAX,ECX                         ; 0055ff82
    SHR ECX,0x2                         ; 0055ff84
    MOVSD.REP ES:EDI,ESI                ; 0055ff87 | DAT_01c2a38c | DAT_01c2a390
    MOV CL,AL                           ; 0055ff89
    AND CL,0x3                          ; 0055ff8b
    MOVSB.REP ES:EDI,ESI                ; 0055ff8e | DAT_01c2a390 | DAT_01c2a391
    POP EDI                             ; 0055ff90
    MOV EDX,dword ptr [0x006141b8]      ; 0055ff91 | DAT_006141b8
    MOV ESI,dword ptr [0x006141c0]      ; 0055ff97 | DAT_006141c0
    IMUL EDX,ESI                        ; 0055ff9d
    MOV EAX,EDX                         ; 0055ffa0
    SAR EDX,0x1f                        ; 0055ffa2
    SHL EDX,0x3                         ; 0055ffa5
    SBB EAX,EDX                         ; 0055ffa8
    SAR EAX,0x3                         ; 0055ffaa
    MOV EBP,EAX                         ; 0055ffad
    CALL FUN_005890c0                   ; 0055ffaf
        ;   XREF to: 005890c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005890c0()
    CALL FUN_0055f500                   ; 0055ffb4
        ;   XREF to: 0055f500 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f500()
    CMP dword ptr [0x006141bc],0x0      ; 0055ffb9 | DAT_006141bc
    JLE 0x0055fff0                      ; 0055ffc0
        ;   XREF to: 0055fff0 (CONDITIONAL_JUMP)  ; LAB_0055fff0
    XOR EDX,EDX                         ; 0055ffc2
    MOV ECX,EBP                         ; 0055ffc4
        ;   Label: LAB_0055ffc4
    MOV ESI,dword ptr [ESP + EDX*0x1 + 0xc] ; 0055ffc6
    MOV EDI,dword ptr [EDX + 0x1c2a38c] ; 0055ffca | DAT_01c2a38c | DAT_01c2a390
    PUSH EDI                            ; 0055ffd0
    MOV EAX,ECX                         ; 0055ffd1
    SHR ECX,0x2                         ; 0055ffd3
    MOVSD.REP ES:EDI,ESI                ; 0055ffd6
    MOV CL,AL                           ; 0055ffd8
    AND CL,0x3                          ; 0055ffda
    MOVSB.REP ES:EDI,ESI                ; 0055ffdd
    POP EDI                             ; 0055ffdf
    INC EBX                             ; 0055ffe0
    MOV EAX,[0x006141bc]                ; 0055ffe1 | DAT_006141bc
    ADD EDX,0x4                         ; 0055ffe6
    CMP EBX,EAX                         ; 0055ffe9
    JL 0x0055ffc4                       ; 0055ffeb
        ;   XREF to: 0055ffc4 (CONDITIONAL_JUMP)  ; LAB_0055ffc4
    LEA EAX,[EAX]                       ; 0055ffed
    PUSH 0x0                            ; 0055fff0
        ;   Label: LAB_0055fff0
    CALL FUN_0055f550                   ; 0055fff2
        ;   XREF to: 0055f550 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f550()
    ADD ESP,0x4                         ; 0055fff7
    CALL FUN_00589170                   ; 0055fffa
        ;   XREF to: 00589170 (UNCONDITIONAL_CALL)  ; undefined FUN_00589170()
    POP ESI                             ; 0055ffff
    POP EDI                             ; 00560000
    XOR EDX,EDX                         ; 00560001
        ;   Label: LAB_00560001
    MOV dword ptr [0x0264bd00],EDX      ; 00560003 | DAT_0264bd00
    CALL dword ptr [0x0264bbc0]         ; 00560009 | DAT_0264bbc0
    POP EBX                             ; 0056000f
    ADD ESP,0x12c0                      ; 00560010
    POP EBP                             ; 00560016
    RET                                 ; 00560017
    XOR EAX,EAX                         ; 00560018
        ;   Label: LAB_00560018
    ADD ESP,0x12c0                      ; 0056001a
    POP EBP                             ; 00560020
    RET                                 ; 00560021

