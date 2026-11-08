; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a1a40(undefined4 *param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004d8060 at 004d83ac
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf624
;
; Called Functions:
;   FUN_004aa400
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1a40
        ;   Label: FUN_004a1a40
    PUSH ESI                            ; 004a1a41
    PUSH EDI                            ; 004a1a42
    PUSH EBP                            ; 004a1a43
    MOV EBP,ESP                         ; 004a1a44
    SUB ESP,0x10                        ; 004a1a46
    AND ESP,0xfffffff8                  ; 004a1a49
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a1a4c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a1a4f
    MOV ECX,0xc80                       ; 004a1a52
    LEA ESI,[EBX + 0x4]                 ; 004a1a57
    MOV EAX,dword ptr [EAX]             ; 004a1a5a
    LEA EDI,[EBX + 0xc88]               ; 004a1a5c
    MOV dword ptr [EBX + 0xc84],EAX     ; 004a1a62
    PUSH EDI                            ; 004a1a68
    MOV EAX,ECX                         ; 004a1a69
    SHR ECX,0x2                         ; 004a1a6b
    MOVSD.REP ES:EDI,ESI                ; 004a1a6e
    MOV CL,AL                           ; 004a1a70
    AND CL,0x3                          ; 004a1a72
    MOVSB.REP ES:EDI,ESI                ; 004a1a75
    POP EDI                             ; 004a1a77
    MOV EAX,[0x0061d95c]                ; 004a1a78 | DAT_0061d95c
    MOV dword ptr [EBX],0x0             ; 004a1a7d
    FLD float ptr [EAX + 0x294]         ; 004a1a83 | DAT_01ccf624
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a1a89
    FSTP float ptr [ESP]                ; 004a1a8c
    MOV EDX,dword ptr [EAX + 0x3210]    ; 004a1a8f
    XOR EBX,EBX                         ; 004a1a95
    TEST EDX,EDX                        ; 004a1a97
    JLE 0x004a1b42                      ; 004a1a99
        ;   XREF to: 004a1b42 (CONDITIONAL_JUMP)  ; LAB_004a1b42
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a1a9f
    ADD EAX,0x3214                      ; 004a1aa2
    ADD ESI,0x3354                      ; 004a1aa7
    MOV EDI,EAX                         ; 004a1aad
    MOV dword ptr [ESP + 0x4],ESI       ; 004a1aaf
    ADD EAX,0x20                        ; 004a1ab3
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a1ab6
    MOV dword ptr [ESP + 0xc],EAX       ; 004a1ab9
    FLD float ptr [ESI + 0x3354]        ; 004a1abd
        ;   Label: LAB_004a1abd
    LEA EAX,[EBX*0x4 + 0x0]             ; 004a1ac3
    FSUB float ptr [ESP]                ; 004a1aca
    MOV dword ptr [ESP + 0x8],EAX       ; 004a1acd
    FST float ptr [ESI + 0x3354]        ; 004a1ad1
    FLDZ                                ; 004a1ad7
    FCOMPP                              ; 004a1ad9
    FNSTSW AX                           ; 004a1adb
    SAHF                                ; 004a1add
    JC 0x004a1b55                       ; 004a1ade
        ;   XREF to: 004a1b55 (CONDITIONAL_JUMP)  ; LAB_004a1b55
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a1ae0
    MOV EDX,dword ptr [EAX + 0x3210]    ; 004a1ae3
    DEC EDX                             ; 004a1ae9
    MOV dword ptr [EAX + 0x3210],EDX    ; 004a1aea
    MOV EAX,EDX                         ; 004a1af0
    SUB EAX,EBX                         ; 004a1af2
    SHL EAX,0x5                         ; 004a1af4
    PUSH EAX                            ; 004a1af7
    MOV ECX,dword ptr [ESP + 0x10]      ; 004a1af8
    PUSH ECX                            ; 004a1afc
    PUSH EDI                            ; 004a1afd
    CALL FUN_005c25d0                   ; 004a1afe
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 004a1b03
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a1b06
    MOV EAX,dword ptr [EAX + 0x3210]    ; 004a1b09
    SUB EAX,EBX                         ; 004a1b0f
    SHL EAX,0x2                         ; 004a1b11
    PUSH EAX                            ; 004a1b14
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a1b15
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a1b19
    ADD EAX,0x4                         ; 004a1b1d
    ADD EAX,EDX                         ; 004a1b20
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a1b22
    PUSH EAX                            ; 004a1b26
    LEA EAX,[EDX + ECX*0x1]             ; 004a1b27
    PUSH EAX                            ; 004a1b2a
    CALL FUN_005c25d0                   ; 004a1b2b
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 004a1b30
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a1b33
        ;   Label: LAB_004a1b33
    CMP EBX,dword ptr [EAX + 0x3210]    ; 004a1b36
    JL 0x004a1abd                       ; 004a1b3c
        ;   XREF to: 004a1abd (CONDITIONAL_JUMP)  ; LAB_004a1abd
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a1b42
        ;   Label: LAB_004a1b42
    PUSH EBX                            ; 004a1b45
    CALL FUN_004aa400                   ; 004a1b46
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; undefined FUN_004aa400()
    ADD ESP,0x4                         ; 004a1b4b
    MOV ESP,EBP                         ; 004a1b4e
    POP EBP                             ; 004a1b50
    POP EDI                             ; 004a1b51
    POP ESI                             ; 004a1b52
    POP EBX                             ; 004a1b53
    RET                                 ; 004a1b54
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a1b55
        ;   Label: LAB_004a1b55
    ADD EDI,0x20                        ; 004a1b59
    INC EBX                             ; 004a1b5c
    ADD EAX,0x20                        ; 004a1b5d
    ADD ESI,0x4                         ; 004a1b60
    MOV dword ptr [ESP + 0xc],EAX       ; 004a1b63
    JMP 0x004a1b33                      ; 004a1b67
        ;   XREF to: 004a1b33 (UNCONDITIONAL_JUMP)  ; LAB_004a1b33

