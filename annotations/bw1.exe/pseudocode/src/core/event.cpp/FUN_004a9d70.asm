; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a9d70(int param_1,char *param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004a1d00 at 004a3fc3
;   FUN_00544460 at 005475eb
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005dec4d
;   TerminatedCString s_CEventList_setCounter_to_005dec5f
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_004a9fa0
;   FUN_005030e0
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9d70
        ;   Label: FUN_004a9d70
    PUSH ESI                            ; 004a9d71
    PUSH EDI                            ; 004a9d72
    PUSH EBP                            ; 004a9d73
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a9d74
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004a9d78
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a9d7c
    PUSH EDX                            ; 004a9d80
    PUSH EBX                            ; 004a9d81
    CALL FUN_004a9fa0                   ; 004a9d82
        ;   XREF to: 004a9fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9fa0()
    MOV ESI,EAX                         ; 004a9d87
    ADD ESP,0x8                         ; 004a9d89
    TEST EAX,EAX                        ; 004a9d8c
    JL 0x004a9dfe                       ; 004a9d8e
        ;   XREF to: 004a9dfe (CONDITIONAL_JUMP)  ; LAB_004a9dfe
    LEA EDI,[EAX*0x4 + 0x0]             ; 004a9d90
    TEST EBP,EBP                        ; 004a9d97
    JZ 0x004a9da7                       ; 004a9d99
        ;   XREF to: 004a9da7 (CONDITIONAL_JUMP)  ; LAB_004a9da7
    MOV dword ptr [EDI + EBX*0x1 + 0x34c0],EBP ; 004a9d9b
    POP EBP                             ; 004a9da2
        ;   Label: LAB_004a9da2
    POP EDI                             ; 004a9da3
    POP ESI                             ; 004a9da4
    POP EBX                             ; 004a9da5
    RET                                 ; 004a9da6
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004a9da7
        ;   Label: LAB_004a9da7
    DEC EAX                             ; 004a9dad
    MOV dword ptr [EBX + 0x337c],EAX    ; 004a9dae
    SUB EAX,ESI                         ; 004a9db4
    SHL EAX,0x5                         ; 004a9db6
    PUSH EAX                            ; 004a9db9
    MOV EAX,ESI                         ; 004a9dba
    SHL EAX,0x5                         ; 004a9dbc
    LEA EBP,[EBX + 0x3380]              ; 004a9dbf
    LEA EDX,[EAX + 0x20]                ; 004a9dc5
    ADD EDX,EBP                         ; 004a9dc8
    PUSH EDX                            ; 004a9dca
    ADD EAX,EBP                         ; 004a9dcb
    PUSH EAX                            ; 004a9dcd
    CALL FUN_005c25d0                   ; 004a9dce
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004a9dd3
    SUB EAX,ESI                         ; 004a9dd9
    ADD ESP,0xc                         ; 004a9ddb
    SHL EAX,0x2                         ; 004a9dde
    ADD EBX,0x34c0                      ; 004a9de1
    PUSH EAX                            ; 004a9de7
    LEA EAX,[EDI + 0x4]                 ; 004a9de8
    ADD EAX,EBX                         ; 004a9deb
    PUSH EAX                            ; 004a9ded
    ADD EBX,EDI                         ; 004a9dee
    PUSH EBX                            ; 004a9df0
    CALL FUN_005c25d0                   ; 004a9df1
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 004a9df6
    POP EBP                             ; 004a9df9
    POP EDI                             ; 004a9dfa
    POP ESI                             ; 004a9dfb
    POP EBX                             ; 004a9dfc
    RET                                 ; 004a9dfd
    TEST EBP,EBP                        ; 004a9dfe
        ;   Label: LAB_004a9dfe
    JZ 0x004a9da2                       ; 004a9e00
        ;   XREF to: 004a9da2 (CONDITIONAL_JUMP)  ; LAB_004a9da2
    CMP dword ptr [EBX + 0x337c],0xa    ; 004a9e02
    JL 0x004a9e2e                       ; 004a9e09
        ;   XREF to: 004a9e2e (CONDITIONAL_JUMP)  ; LAB_004a9e2e
    MOV ESI,0x5dec4d                    ; 004a9e0b | = "..\\core\\event.cpp"
    MOV EDI,0xe09                       ; 004a9e10
    PUSH 0x5dec5f                       ; 004a9e15 | = "CEventList::setCounter - too many cou..."
    MOV dword ptr [0x01d1d400],ESI      ; 004a9e1a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004a9e20 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004a9e26
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004a9e2b
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004a9e2e
        ;   Label: LAB_004a9e2e
    LEA EDI,[EBX + 0x3380]              ; 004a9e34
    SHL EAX,0x5                         ; 004a9e3a
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a9e3d
    ADD EDI,EAX                         ; 004a9e41
    PUSH EDI                            ; 004a9e43
    MOV AL,byte ptr [ESI]               ; 004a9e44
        ;   Label: LAB_004a9e44
    MOV byte ptr [EDI],AL               ; 004a9e46
    CMP AL,0x0                          ; 004a9e48
    JZ 0x004a9e5c                       ; 004a9e4a
        ;   XREF to: 004a9e5c (CONDITIONAL_JUMP)  ; LAB_004a9e5c
    MOV AL,byte ptr [ESI + 0x1]         ; 004a9e4c
    ADD ESI,0x2                         ; 004a9e4f
    MOV byte ptr [EDI + 0x1],AL         ; 004a9e52
    ADD EDI,0x2                         ; 004a9e55
    CMP AL,0x0                          ; 004a9e58
    JNZ 0x004a9e44                      ; 004a9e5a
        ;   XREF to: 004a9e44 (CONDITIONAL_JUMP)  ; LAB_004a9e44
    POP EDI                             ; 004a9e5c
        ;   Label: LAB_004a9e5c
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004a9e5d
    MOV dword ptr [EBX + EAX*0x4 + 0x34c0],EBP ; 004a9e63
    INC dword ptr [EBX + 0x337c]        ; 004a9e6a
    POP EBP                             ; 004a9e70
    POP EDI                             ; 004a9e71
    POP ESI                             ; 004a9e72
    POP EBX                             ; 004a9e73
    RET                                 ; 004a9e74

