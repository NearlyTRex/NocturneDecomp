; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047bbd0(void)
;
; Local Variables:
; undefined4       Stack[-0x12c8]:4  local_12c8
;
; XREF[1]:
;   FUN_0047e760 at 0047e765
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c37788
;
; Called Functions:
;   FUN_0055f500
;   FUN_0055f550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bbd0
        ;   Label: FUN_0047bbd0
    PUSH EBP                            ; 0047bbd1
    SUB ESP,0x12c0                      ; 0047bbd2
    CMP dword ptr [0x01c37788],0x0      ; 0047bbd8 | DAT_01c37788
    JZ 0x0047bc8d                       ; 0047bbdf
        ;   XREF to: 0047bc8d (CONDITIONAL_JUMP)  ; LAB_0047bc8d
    MOV ECX,dword ptr [0x006141bc]      ; 0047bbe5 | DAT_006141bc
    TEST ECX,ECX                        ; 0047bbeb
    JLE 0x0047bc10                      ; 0047bbed
        ;   XREF to: 0047bc10 (CONDITIONAL_JUMP)  ; LAB_0047bc10
    LEA EBX,[ECX*0x4 + 0x0]             ; 0047bbef
    XOR EAX,EAX                         ; 0047bbf6
    ADD EAX,0x4                         ; 0047bbf8
        ;   Label: LAB_0047bbf8
    MOV EDX,dword ptr [EAX + 0x1c2a388] ; 0047bbfb | DAT_01c2a38c
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 0047bc01
    CMP EAX,EBX                         ; 0047bc05
    JL 0x0047bbf8                       ; 0047bc07
        ;   XREF to: 0047bbf8 (CONDITIONAL_JUMP)  ; LAB_0047bbf8
    LEA EAX,[EAX]                       ; 0047bc09
    NOP                                 ; 0047bc0f
    CALL FUN_0055f500                   ; 0047bc10
        ;   XREF to: 0055f500 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f500()
        ;   Label: LAB_0047bc10
    TEST EAX,EAX                        ; 0047bc15
    JZ 0x0047bc8d                       ; 0047bc17
        ;   XREF to: 0047bc8d (CONDITIONAL_JUMP)  ; LAB_0047bc8d
    PUSH EDI                            ; 0047bc1d
    PUSH ESI                            ; 0047bc1e
    MOV EBX,dword ptr [0x006141c0]      ; 0047bc1f | DAT_006141c0
    MOV EDX,dword ptr [0x006141b8]      ; 0047bc25 | DAT_006141b8
    IMUL EDX,EBX                        ; 0047bc2b
    MOV EAX,EDX                         ; 0047bc2e
    SAR EDX,0x1f                        ; 0047bc30
    SHL EDX,0x3                         ; 0047bc33
    SBB EAX,EDX                         ; 0047bc36
    SAR EAX,0x3                         ; 0047bc38
    MOV ESI,dword ptr [0x006141bc]      ; 0047bc3b | DAT_006141bc
    XOR EBX,EBX                         ; 0047bc41
    MOV EBP,EAX                         ; 0047bc43
    TEST ESI,ESI                        ; 0047bc45
    JLE 0x0047bc81                      ; 0047bc47
        ;   XREF to: 0047bc81 (CONDITIONAL_JUMP)  ; LAB_0047bc81
    XOR EDX,EDX                         ; 0047bc49
    MOV EAX,dword ptr [EDX + 0x1c2a38c] ; 0047bc4b | DAT_01c2a38c
        ;   Label: LAB_0047bc4b
    TEST EAX,EAX                        ; 0047bc51
    JZ 0x0047bc73                       ; 0047bc53
        ;   XREF to: 0047bc73 (CONDITIONAL_JUMP)  ; LAB_0047bc73
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x8] ; 0047bc55
    TEST ECX,ECX                        ; 0047bc59
    JZ 0x0047bc73                       ; 0047bc5b
        ;   XREF to: 0047bc73 (CONDITIONAL_JUMP)  ; LAB_0047bc73
    MOV ESI,ECX                         ; 0047bc5d
    MOV EDI,EAX                         ; 0047bc5f
    MOV ECX,EBP                         ; 0047bc61
    PUSH EDI                            ; 0047bc63
    MOV EAX,ECX                         ; 0047bc64
    SHR ECX,0x2                         ; 0047bc66
    MOVSD.REP ES:EDI,ESI                ; 0047bc69
    MOV CL,AL                           ; 0047bc6b
    AND CL,0x3                          ; 0047bc6d
    MOVSB.REP ES:EDI,ESI                ; 0047bc70
    POP EDI                             ; 0047bc72
    MOV EDI,dword ptr [0x006141bc]      ; 0047bc73 | DAT_006141bc
        ;   Label: LAB_0047bc73
    INC EBX                             ; 0047bc79
    ADD EDX,0x4                         ; 0047bc7a
    CMP EBX,EDI                         ; 0047bc7d
    JL 0x0047bc4b                       ; 0047bc7f
        ;   XREF to: 0047bc4b (CONDITIONAL_JUMP)  ; LAB_0047bc4b
    PUSH 0x1                            ; 0047bc81
        ;   Label: LAB_0047bc81
    CALL FUN_0055f550                   ; 0047bc83
        ;   XREF to: 0055f550 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f550()
    ADD ESP,0x4                         ; 0047bc88
    POP ESI                             ; 0047bc8b
    POP EDI                             ; 0047bc8c
    ADD ESP,0x12c0                      ; 0047bc8d
        ;   Label: LAB_0047bc8d
    POP EBP                             ; 0047bc93
    POP EBX                             ; 0047bc94
    RET                                 ; 0047bc95

