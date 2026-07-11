; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043ae40(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0043ad30 at 0043adcc
;
; Called Functions:
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ae40
        ;   Label: FUN_0043ae40
    PUSH ESI                            ; 0043ae41
    PUSH EDI                            ; 0043ae42
    PUSH EBP                            ; 0043ae43
    SUB ESP,0x4                         ; 0043ae44
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043ae47
    ADD EDX,0x4                         ; 0043ae4b
    XOR EBP,EBP                         ; 0043ae4e
    MOV dword ptr [ESP],EDX             ; 0043ae50
    LEA EBX,[EDX + 0x50]                ; 0043ae53
    MOV ECX,dword ptr [ESP + 0x18]      ; 0043ae56
        ;   Label: LAB_0043ae56
    MOV ECX,dword ptr [ECX + 0xfb0]     ; 0043ae5a
    DEC ECX                             ; 0043ae60
    CMP EBP,ECX                         ; 0043ae61
    JL 0x0043ae94                       ; 0043ae63
        ;   XREF to: 0043ae94 (CONDITIONAL_JUMP)  ; LAB_0043ae94
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043ae65
    MOV EBX,dword ptr [EDX + 0xfac]     ; 0043ae69
    LEA EDX,[ECX*0x4 + 0x0]             ; 0043ae6f
    MOV ESI,dword ptr [ESP]             ; 0043ae76
    ADD EDX,ECX                         ; 0043ae79
    PUSH EBX                            ; 0043ae7b
    SHL EDX,0x4                         ; 0043ae7c
    PUSH 0x0                            ; 0043ae7f
    ADD EDX,ESI                         ; 0043ae81
    PUSH EDX                            ; 0043ae83
    CALL FUN_00563cc0                   ; 0043ae84
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 0043ae89
    ADD ESP,0x4                         ; 0043ae8c
    POP EBP                             ; 0043ae8f
    POP EDI                             ; 0043ae90
    POP ESI                             ; 0043ae91
    POP EBX                             ; 0043ae92
    RET                                 ; 0043ae93
    MOV ECX,dword ptr [ESP + 0x18]      ; 0043ae94
        ;   Label: LAB_0043ae94
    MOV ESI,EBX                         ; 0043ae98
    MOV EDI,EDX                         ; 0043ae9a
    MOV ECX,dword ptr [ECX + 0xfac]     ; 0043ae9c
    INC EBP                             ; 0043aea2
    PUSH EDI                            ; 0043aea3
    MOV EAX,ECX                         ; 0043aea4
    SHR ECX,0x2                         ; 0043aea6
    MOVSD.REP ES:EDI,ESI                ; 0043aea9
    MOV CL,AL                           ; 0043aeab
    AND CL,0x3                          ; 0043aead
    MOVSB.REP ES:EDI,ESI                ; 0043aeb0
    POP EDI                             ; 0043aeb2
    ADD EDX,0x50                        ; 0043aeb3
    ADD EBX,0x50                        ; 0043aeb6
    JMP 0x0043ae56                      ; 0043aeb9
        ;   XREF to: 0043ae56 (UNCONDITIONAL_JUMP)  ; LAB_0043ae56

