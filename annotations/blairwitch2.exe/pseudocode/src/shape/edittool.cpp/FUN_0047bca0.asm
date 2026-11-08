; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047bca0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0047e760 at 0047e760
;   FUN_0047e870 at 0047e8ed
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1f6c
;   TerminatedCString s_paintWindowBackground_ca_005d1f82
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2559c
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bca0
        ;   Label: FUN_0047bca0
    PUSH ESI                            ; 0047bca1
    PUSH EDI                            ; 0047bca2
    PUSH EBP                            ; 0047bca3
    SUB ESP,0x8                         ; 0047bca4
    CMP dword ptr [0x01c2559c],0x1      ; 0047bca7 | DAT_01c2559c
    JL 0x0047bd37                       ; 0047bcae
        ;   XREF to: 0047bd37 (CONDITIONAL_JUMP)  ; LAB_0047bd37
    MOV EAX,[0x01c2559c]                ; 0047bcb4 | DAT_01c2559c
        ;   Label: LAB_0047bcb4
    DEC EAX                             ; 0047bcb9
    SHL EAX,0x3                         ; 0047bcba
    MOV EDX,EAX                         ; 0047bcbd
    SHL EAX,0x6                         ; 0047bcbf
    SUB EAX,EDX                         ; 0047bcc2
    MOV EDX,0x1c255a0                   ; 0047bcc4
    ADD EDX,EAX                         ; 0047bcc9
    MOV EBX,dword ptr [EDX + 0x1d8]     ; 0047bccb
    MOV dword ptr [ESP + 0x4],EDX       ; 0047bcd1
    TEST EBX,EBX                        ; 0047bcd5
    JZ 0x0047bd2f                       ; 0047bcd7
        ;   XREF to: 0047bd2f (CONDITIONAL_JUMP)  ; LAB_0047bd2f
    MOV ESI,dword ptr [0x006141c0]      ; 0047bcd9 | DAT_006141c0
    MOV EDX,dword ptr [EDX + 0x1e4]     ; 0047bcdf
    IMUL EDX,ESI                        ; 0047bce5
    MOV EAX,EDX                         ; 0047bce8
    SAR EDX,0x1f                        ; 0047bcea
    SHL EDX,0x3                         ; 0047bced
    SBB EAX,EDX                         ; 0047bcf0
    SAR EAX,0x3                         ; 0047bcf2
    MOV dword ptr [ESP],EAX             ; 0047bcf5
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047bcf8
    MOV EDI,dword ptr [EAX + 0x1e8]     ; 0047bcfc
    XOR EBP,EBP                         ; 0047bd02
    TEST EDI,EDI                        ; 0047bd04
    JLE 0x0047bd2f                      ; 0047bd06
        ;   XREF to: 0047bd2f (CONDITIONAL_JUMP)  ; LAB_0047bd2f
    MOV EDI,dword ptr [ESP + 0x4]       ; 0047bd08
        ;   Label: LAB_0047bd08
    MOV EDI,dword ptr [EDI + 0x1e0]     ; 0047bd0c
    ADD EDI,EBP                         ; 0047bd12
    MOV EDI,dword ptr [EDI*0x4 + 0x1c2a38c] ; 0047bd14 | DAT_01c2a38c
    TEST EDI,EDI                        ; 0047bd1b
    JNZ 0x0047bd5f                      ; 0047bd1d
        ;   XREF to: 0047bd5f (CONDITIONAL_JUMP)  ; LAB_0047bd5f
    ADD EBX,dword ptr [ESP]             ; 0047bd1f
        ;   Label: LAB_0047bd1f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047bd22
    INC EBP                             ; 0047bd26
    CMP EBP,dword ptr [EAX + 0x1e8]     ; 0047bd27
    JL 0x0047bd08                       ; 0047bd2d
        ;   XREF to: 0047bd08 (CONDITIONAL_JUMP)  ; LAB_0047bd08
    ADD ESP,0x8                         ; 0047bd2f
        ;   Label: LAB_0047bd2f
    POP EBP                             ; 0047bd32
    POP EDI                             ; 0047bd33
    POP ESI                             ; 0047bd34
    POP EBX                             ; 0047bd35
    RET                                 ; 0047bd36
    MOV ECX,0x5d1f6c                    ; 0047bd37 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047bd37
    MOV EBX,0x3b8                       ; 0047bd3c
    PUSH 0x5d1f82                       ; 0047bd41 | = "paintWindowBackground called but no w..."
    MOV dword ptr [0x01d046a0],ECX      ; 0047bd46 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047bd4c | DAT_01d046a4
    CALL FUN_004e4500                   ; 0047bd52
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0047bd57
    JMP 0x0047bcb4                      ; 0047bd5a
        ;   XREF to: 0047bcb4 (UNCONDITIONAL_JUMP)  ; LAB_0047bcb4
    MOV EDX,dword ptr [ESP + 0x4]       ; 0047bd5f
        ;   Label: LAB_0047bd5f
    MOV ECX,dword ptr [0x006141c0]      ; 0047bd63 | DAT_006141c0
    MOV EDX,dword ptr [EDX + 0x1dc]     ; 0047bd69
    IMUL EDX,ECX                        ; 0047bd6f
    MOV EAX,EDX                         ; 0047bd72
    SAR EDX,0x1f                        ; 0047bd74
    SHL EDX,0x3                         ; 0047bd77
    SBB EAX,EDX                         ; 0047bd7a
    SAR EAX,0x3                         ; 0047bd7c
    MOV ESI,EBX                         ; 0047bd7f
    MOV ECX,dword ptr [ESP]             ; 0047bd81
    ADD EDI,EAX                         ; 0047bd84
    PUSH EDI                            ; 0047bd86
    MOV EAX,ECX                         ; 0047bd87
    SHR ECX,0x2                         ; 0047bd89
    MOVSD.REP ES:EDI,ESI                ; 0047bd8c
    MOV CL,AL                           ; 0047bd8e
    AND CL,0x3                          ; 0047bd90
    MOVSB.REP ES:EDI,ESI                ; 0047bd93
    POP EDI                             ; 0047bd95
    JMP 0x0047bd1f                      ; 0047bd96
        ;   XREF to: 0047bd1f (UNCONDITIONAL_JUMP)  ; LAB_0047bd1f

