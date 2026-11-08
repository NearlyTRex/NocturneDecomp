; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045c9e0(int param_1)
;
;
; XREF[1]:
;   FUN_00534890 at 005351a8
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01b49be0
;   undefined4 DAT_01b49be4
;   undefined4 DAT_01b49be8
;   undefined4 DAT_01b49be9
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c5faf1
;
; Called Functions:
;   FUN_0046d520
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01b49be0]      ; 0045c9e0 | DAT_01b49be0
        ;   Label: FUN_0045c9e0
    DEC EDX                             ; 0045c9e6
    MOV dword ptr [0x01b49be0],EDX      ; 0045c9e7 | DAT_01b49be0
    JZ 0x0045c9f0                       ; 0045c9ed
        ;   XREF to: 0045c9f0 (CONDITIONAL_JUMP)  ; LAB_0045c9f0
    RET                                 ; 0045c9ef
    PUSH EDI                            ; 0045c9f0
        ;   Label: LAB_0045c9f0
    PUSH ESI                            ; 0045c9f1
    PUSH EBX                            ; 0045c9f2
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045c9f3
    MOV ESI,0x1b49be4                   ; 0045c9f7
    MOV ECX,dword ptr [ECX + 0x1cc4]    ; 0045c9fc
    MOV EDI,0x1c5faec                   ; 0045ca02
    SHL ECX,0x2                         ; 0045ca07
    PUSH EDI                            ; 0045ca0a | DAT_01c5faec
    MOV EAX,ECX                         ; 0045ca0b
    SHR ECX,0x2                         ; 0045ca0d
    MOVSD.REP ES:EDI,ESI                ; 0045ca10 | DAT_01b49be4 | DAT_01c5faec | DAT_01b49be8
    MOV CL,AL                           ; 0045ca12
    AND CL,0x3                          ; 0045ca14
    MOVSB.REP ES:EDI,ESI                ; 0045ca17 | DAT_01b49be8 | DAT_01c5faf0 | DAT_01b49be9
    POP EDI                             ; 0045ca19
    PUSH EDX                            ; 0045ca1a
    MOV EBX,dword ptr [0x005f2afc]      ; 0045ca1b | DAT_005f2afc
    PUSH EBX                            ; 0045ca21 | DAT_01bdd7e4
    CALL FUN_0046d520                   ; 0045ca22
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d520()
    ADD ESP,0x8                         ; 0045ca27
    POP EBX                             ; 0045ca2a
    POP ESI                             ; 0045ca2b
    POP EDI                             ; 0045ca2c
    RET                                 ; 0045ca2d

