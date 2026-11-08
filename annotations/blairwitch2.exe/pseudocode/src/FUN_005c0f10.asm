; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005c0f10(undefined4 *param_1,uint param_2)
;
;
; XREF[3]:
;   FUN_005ba120 at 005ba169
;   FUN_005be9ac at 005bea18
;   FUN_005bfdd4 at 005bfe27
;
; Referenced Globals:
;   void* PTR_GetCurrentDirectoryA_005c8574 = 001c8e00
;
; Called Functions:
;   FUN_005b8580
;   FUN_005be180
;   FUN_005c036c
;   GetCurrentDirectoryA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0f10
        ;   Label: FUN_005c0f10
    PUSH ESI                            ; 005c0f11
    PUSH EDI                            ; 005c0f12
    SUB ESP,0x104                       ; 005c0f13
    MOV EBX,dword ptr [ESP + 0x114]     ; 005c0f19
    MOV ESI,dword ptr [ESP + 0x118]     ; 005c0f20
    MOV EAX,ESP                         ; 005c0f27
    PUSH EAX                            ; 005c0f29
    PUSH 0x104                          ; 005c0f2a
    CALL dword ptr CS:[0x5c8574]        ; 005c0f2f | PTR_GetCurrentDirectoryA_005c8574
    MOV EDI,EAX                         ; 005c0f36
    TEST EAX,EAX                        ; 005c0f38
    JNZ 0x005c0f45                      ; 005c0f3a
        ;   XREF to: 005c0f45 (CONDITIONAL_JUMP)  ; LAB_005c0f45
    CALL FUN_005c036c                   ; 005c0f3c
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined FUN_005c036c()
    XOR EAX,EAX                         ; 005c0f41
    JMP 0x005c0fae                      ; 005c0f43
        ;   XREF to: 005c0fae (UNCONDITIONAL_JUMP)  ; LAB_005c0fae
    TEST EBX,EBX                        ; 005c0f45
        ;   Label: LAB_005c0f45
    JNZ 0x005c0f75                      ; 005c0f47
        ;   XREF to: 005c0f75 (CONDITIONAL_JUMP)  ; LAB_005c0f75
    INC EAX                             ; 005c0f49
    CMP ESI,EAX                         ; 005c0f4a
    JBE 0x005c0f50                      ; 005c0f4c
        ;   XREF to: 005c0f50 (CONDITIONAL_JUMP)  ; LAB_005c0f50
    MOV EAX,ESI                         ; 005c0f4e
    PUSH EAX                            ; 005c0f50
        ;   Label: LAB_005c0f50
    CALL FUN_005b8580                   ; 005c0f51
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 005c0f56
    MOV EBX,EAX                         ; 005c0f59
    TEST EAX,EAX                        ; 005c0f5b
    JNZ 0x005c0f8f                      ; 005c0f5d
        ;   XREF to: 005c0f8f (CONDITIONAL_JUMP)  ; LAB_005c0f8f
    PUSH 0x5                            ; 005c0f5f
    CALL FUN_005be180                   ; 005c0f61
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    ADD ESP,0x4                         ; 005c0f66
    XOR EAX,EAX                         ; 005c0f69
    ADD ESP,0x104                       ; 005c0f6b
    POP EDI                             ; 005c0f71
    POP ESI                             ; 005c0f72
    POP EBX                             ; 005c0f73
    RET                                 ; 005c0f74
    CMP EAX,ESI                         ; 005c0f75
        ;   Label: LAB_005c0f75
    JBE 0x005c0f8f                      ; 005c0f77
        ;   XREF to: 005c0f8f (CONDITIONAL_JUMP)  ; LAB_005c0f8f
    PUSH 0xe                            ; 005c0f79
    CALL FUN_005be180                   ; 005c0f7b
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    ADD ESP,0x4                         ; 005c0f80
    XOR EAX,EAX                         ; 005c0f83
    ADD ESP,0x104                       ; 005c0f85
    POP EDI                             ; 005c0f8b
    POP ESI                             ; 005c0f8c
    POP EBX                             ; 005c0f8d
    RET                                 ; 005c0f8e
    LEA ECX,[EDI + 0x1]                 ; 005c0f8f
        ;   Label: LAB_005c0f8f
    MOV ESI,ESP                         ; 005c0f92
    MOV EDI,EBX                         ; 005c0f94
    PUSH ES                             ; 005c0f96
    MOV AX,DS                           ; 005c0f97
    MOV ES,AX                           ; 005c0f99
    PUSH EDI                            ; 005c0f9b
    MOV EAX,ECX                         ; 005c0f9c
    SHR ECX,0x2                         ; 005c0f9e
    MOVSD.REP ES:EDI,ESI                ; 005c0fa1
    MOV CL,AL                           ; 005c0fa3
    AND CL,0x3                          ; 005c0fa5
    MOVSB.REP ES:EDI,ESI                ; 005c0fa8
    POP EDI                             ; 005c0faa
    POP ES                              ; 005c0fab
    MOV EAX,EBX                         ; 005c0fac
    ADD ESP,0x104                       ; 005c0fae
        ;   Label: LAB_005c0fae
    POP EDI                             ; 005c0fb4
    POP ESI                             ; 005c0fb5
    POP EBX                             ; 005c0fb6
    RET                                 ; 005c0fb7

