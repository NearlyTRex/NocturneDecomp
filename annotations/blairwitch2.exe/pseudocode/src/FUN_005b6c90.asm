; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b6c90(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005b6a10 at 005b6a40
;
; Referenced Globals:
;   undefined4 DAT_005f17bf
;   undefined4 DAT_005f17c7
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c38aec
;
; Called Functions:
;   FUN_00469d00
;   FUN_0046b880
;   FUN_0046b8e0
;   FUN_0046b920
;   FUN_0046c540
;   FUN_0046c900
;   FUN_0046ca00
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6c90
        ;   Label: FUN_005b6c90
    PUSH ESI                            ; 005b6c91
    PUSH EDI                            ; 005b6c92
    PUSH EBP                            ; 005b6c93
    SUB ESP,0xc                         ; 005b6c94
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b6c97
    PUSH 0x0                            ; 005b6c9b
    MOV EDX,dword ptr [0x0060b280]      ; 005b6c9d | DAT_0060b280
    PUSH EDX                            ; 005b6ca3 | DAT_01ba5c50
    CALL FUN_0046c540                   ; 005b6ca4
        ;   XREF to: 0046c540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c540()
    ADD ESP,0x8                         ; 005b6ca9
    PUSH 0x1                            ; 005b6cac
    MOV ECX,dword ptr [0x0060b280]      ; 005b6cae | DAT_0060b280
    PUSH ECX                            ; 005b6cb4 | DAT_01ba5c50
    CALL FUN_0046b880                   ; 005b6cb5
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    ADD ESP,0x8                         ; 005b6cba
    FLD float ptr [ESP + 0x24]          ; 005b6cbd
    FLD ST0                             ; 005b6cc1
    FMUL double ptr [0x005f17bf]        ; 005b6cc3 | DAT_005f17bf
    MOV EAX,0xffff                      ; 005b6cc9
    FLD float ptr [0x005f17c7]          ; 005b6cce | DAT_005f17c7
    FSUBRP ST2,ST0                      ; 005b6cd4
    MOV EBX,dword ptr [0x01c38aec]      ; 005b6cd6 | DAT_01c38aec
    FMULP                               ; 005b6cdc
    SUB EAX,EBX                         ; 005b6cde
    CALL FUN_005b7ff0                   ; 005b6ce0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 005b6ce5
    MOV EDX,dword ptr [ESP]             ; 005b6ce8
    IMUL EDX                            ; 005b6ceb
    SHRD EAX,EDX,0x10                   ; 005b6ced
    PUSH EAX                            ; 005b6cf1
    MOV ESI,dword ptr [0x0060b280]      ; 005b6cf2 | DAT_0060b280
    PUSH ESI                            ; 005b6cf8 | DAT_01ba5c50
    MOV EBP,0xffffffff                  ; 005b6cf9
    CALL FUN_0046b8e0                   ; 005b6cfe
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8e0()
    ADD ESP,0x8                         ; 005b6d03
    MOV EAX,dword ptr [EDI + 0x5c]      ; 005b6d06
    MOV dword ptr [ESP + 0x8],EBP       ; 005b6d09
    XOR EBP,EBP                         ; 005b6d0d
    TEST EAX,EAX                        ; 005b6d0f
    JLE 0x005b6d68                      ; 005b6d11
        ;   XREF to: 005b6d68 (CONDITIONAL_JUMP)  ; LAB_005b6d68
    LEA EAX,[EDI + 0x68]                ; 005b6d13
    XOR EBX,EBX                         ; 005b6d16
    MOV dword ptr [ESP + 0x4],EAX       ; 005b6d18
    MOV EAX,dword ptr [EDI + 0x60]      ; 005b6d1c
        ;   Label: LAB_005b6d1c
    MOV ESI,dword ptr [EBX + EAX*0x1]   ; 005b6d1f
    CMP ESI,dword ptr [ESP + 0x8]       ; 005b6d22
    JZ 0x005b6d43                       ; 005b6d26
        ;   XREF to: 005b6d43 (CONDITIONAL_JUMP)  ; LAB_005b6d43
    IMUL EAX,ESI,0x48                   ; 005b6d28
    ADD EAX,dword ptr [ESP + 0x4]       ; 005b6d2b
    PUSH EAX                            ; 005b6d2f
    MOV ECX,dword ptr [0x0060b280]      ; 005b6d30 | DAT_0060b280
    PUSH ECX                            ; 005b6d36 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 005b6d37
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 005b6d3c
    MOV dword ptr [ESP + 0x8],ESI       ; 005b6d3f
    MOV ESI,dword ptr [EDI + 0x60]      ; 005b6d43
        ;   Label: LAB_005b6d43
    PUSH 0x267                          ; 005b6d46
    ADD ESI,EBX                         ; 005b6d4b
    PUSH ESI                            ; 005b6d4d
    MOV EDX,dword ptr [0x0060b280]      ; 005b6d4e | DAT_0060b280
    PUSH EDX                            ; 005b6d54 | DAT_01ba5c50
    INC EBP                             ; 005b6d55
    ADD EBX,0x3c                        ; 005b6d56
    CALL FUN_00469d00                   ; 005b6d59
        ;   XREF to: 00469d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00469d00()
    MOV ECX,dword ptr [EDI + 0x5c]      ; 005b6d5e
    ADD ESP,0xc                         ; 005b6d61
    CMP EBP,ECX                         ; 005b6d64
    JL 0x005b6d1c                       ; 005b6d66
        ;   XREF to: 005b6d1c (CONDITIONAL_JUMP)  ; LAB_005b6d1c
    MOV EBX,dword ptr [0x0060b280]      ; 005b6d68 | DAT_0060b280
        ;   Label: LAB_005b6d68
    PUSH EBX                            ; 005b6d6e | DAT_01ba5c50
    CALL FUN_0046c900                   ; 005b6d6f
        ;   XREF to: 0046c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c900()
    ADD ESP,0x4                         ; 005b6d74
    PUSH 0x0                            ; 005b6d77
    MOV ESI,dword ptr [0x0060b280]      ; 005b6d79 | DAT_0060b280
    PUSH ESI                            ; 005b6d7f | DAT_01ba5c50
    CALL FUN_0046b880                   ; 005b6d80
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    ADD ESP,0x8                         ; 005b6d85
    PUSH 0x1                            ; 005b6d88
    MOV EDI,dword ptr [0x0060b280]      ; 005b6d8a | DAT_0060b280
    PUSH EDI                            ; 005b6d90 | DAT_01ba5c50
    CALL FUN_0046b920                   ; 005b6d91
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b920()
    ADD ESP,0x8                         ; 005b6d96
    ADD ESP,0xc                         ; 005b6d99
    POP EBP                             ; 005b6d9c
    POP EDI                             ; 005b6d9d
    POP ESI                             ; 005b6d9e
    POP EBX                             ; 005b6d9f
    RET                                 ; 005b6da0

