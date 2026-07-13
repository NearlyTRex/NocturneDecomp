; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fdd00(int param_1)
;
; Local Variables:
; undefined        Stack[-0x160]:1  local_160
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   FUN_004fbf20 at 004fc2db
;
; Referenced Globals:
;   undefined4 DAT_01e533c0
;
; Called Functions:
;   FUN_0055aa00
;   FUN_0055afb0
;   FUN_0055b180
;   FUN_0055bc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fdd00
        ;   Label: FUN_004fdd00
    PUSH ESI                            ; 004fdd01
    PUSH EDI                            ; 004fdd02
    PUSH EBP                            ; 004fdd03
    MOV EBP,ESP                         ; 004fdd04
    SUB ESP,0x150                       ; 004fdd06
    SUB EBP,0x7e                        ; 004fdd0c
    MOV EBX,dword ptr [EBP + 0x92]      ; 004fdd0f
    MOV EDX,dword ptr [EBX + 0x1fa50]   ; 004fdd15
    TEST EDX,EDX                        ; 004fdd1b
    JZ 0x004fdd28                       ; 004fdd1d
        ;   XREF to: 004fdd28 (CONDITIONAL_JUMP)  ; LAB_004fdd28
    CMP dword ptr [EDX + 0x2d8],0x8     ; 004fdd1f
    JNZ 0x004fdd30                      ; 004fdd26
        ;   XREF to: 004fdd30 (CONDITIONAL_JUMP)  ; LAB_004fdd30
    LEA ESP,[EBP + 0x7e]                ; 004fdd28
        ;   Label: LAB_004fdd28
    POP EBP                             ; 004fdd2b
    POP EDI                             ; 004fdd2c
    POP ESI                             ; 004fdd2d
    POP EBX                             ; 004fdd2e
    RET                                 ; 004fdd2f
    MOV EDI,0x3fc90fdb                  ; 004fdd30
        ;   Label: LAB_004fdd30
    LEA EAX,[EBP + 0x4e]                ; 004fdd35
    MOV EDX,0x3ec817db                  ; 004fdd38
    XOR ESI,ESI                         ; 004fdd3d
    MOV ECX,0xbdd340d5                  ; 004fdd3f
    MOV dword ptr [EBP + 0x4e],ESI      ; 004fdd44
    MOV dword ptr [EBP + 0x56],EDI      ; 004fdd47
    MOV dword ptr [EBP + 0x52],EDI      ; 004fdd4a
    PUSH EAX                            ; 004fdd4d
    LEA EAX,[EBP + 0x66]                ; 004fdd4e
    MOV dword ptr [EBP + 0x66],EDX      ; 004fdd51
    PUSH EAX                            ; 004fdd54
    LEA EAX,[EBP + 0xffffff5e]          ; 004fdd55
    MOV ESI,0x3ddfa765                  ; 004fdd5b
    PUSH EAX                            ; 004fdd60
    MOV dword ptr [EBP + 0x6a],ECX      ; 004fdd61
    MOV dword ptr [EBP + 0x6e],ESI      ; 004fdd64
    CALL FUN_0055afb0                   ; 004fdd67
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055afb0()
    MOV ESI,dword ptr [0x01e533c0]      ; 004fdd6c | DAT_01e533c0
    LEA EAX,[ESI*0x4 + 0x0]             ; 004fdd72
    SUB EAX,ESI                         ; 004fdd79
    MOV ESI,EAX                         ; 004fdd7b
    SHL ESI,0x4                         ; 004fdd7d
    LEA EAX,[EBX + 0xfd0]               ; 004fdd80
    ADD ESP,0xc                         ; 004fdd86
    ADD EAX,ESI                         ; 004fdd89
    PUSH EAX                            ; 004fdd8b
    LEA EAX,[EBP + 0xffffff5e]          ; 004fdd8c
    PUSH EAX                            ; 004fdd92
    LEA ESI,[EBP + -0x42]               ; 004fdd93
    CALL FUN_0055aa00                   ; 004fdd96
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    ADD ESP,0x8                         ; 004fdd9b
    LEA EAX,[EBX + 0x30]                ; 004fdd9e
    LEA EDI,[EBP + 0x1e]                ; 004fdda1
    PUSH EAX                            ; 004fdda4
    LEA EAX,[EBX + 0x20]                ; 004fdda5
    MOV ECX,0xc                         ; 004fdda8
    PUSH EAX                            ; 004fddad
    LEA EAX,[EBP + 0xffffff2e]          ; 004fddae
    LEA ESI,[EBP + -0x42]               ; 004fddb4
    PUSH EAX                            ; 004fddb7
    MOVSD.REP ES:EDI,ESI                ; 004fddb8
    CALL FUN_0055afb0                   ; 004fddba
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055afb0()
    ADD ESP,0xc                         ; 004fddbf
    LEA EAX,[EBP + 0xffffff2e]          ; 004fddc2
    PUSH EAX                            ; 004fddc8
    LEA EAX,[EBP + 0x1e]                ; 004fddc9
    PUSH EAX                            ; 004fddcc
    LEA ESI,[EBP + -0x72]               ; 004fddcd
    LEA EDI,[EBP + -0x12]               ; 004fddd0
    CALL FUN_0055aa00                   ; 004fddd3
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    MOV ECX,0xc                         ; 004fddd8
    ADD ESP,0x8                         ; 004fdddd
    LEA EAX,[EBP + 0x5a]                ; 004fdde0
    LEA ESI,[EBP + -0x72]               ; 004fdde3
    PUSH EAX                            ; 004fdde6
    MOVSD.REP ES:EDI,ESI                ; 004fdde7
    LEA EAX,[EBP + -0x12]               ; 004fdde9
    MOV EBX,dword ptr [EBX + 0x1fa50]   ; 004fddec
    PUSH EAX                            ; 004fddf2
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004fddf3
    CALL FUN_0055b180                   ; 004fddf9
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b180()
    ADD ESP,0x8                         ; 004fddfe
    PUSH EAX                            ; 004fde01
    LEA EAX,[EBP + 0x72]                ; 004fde02
    PUSH EAX                            ; 004fde05
    LEA EAX,[EBP + -0x12]               ; 004fde06
    PUSH EAX                            ; 004fde09
    CALL FUN_0055bc00                   ; 004fde0a
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055bc00()
    ADD ESP,0x8                         ; 004fde0f
    PUSH EAX                            ; 004fde12
    PUSH EBX                            ; 004fde13
    CALL dword ptr [ESI + 0x60]         ; 004fde14
    ADD ESP,0xc                         ; 004fde17
    LEA ESP,[EBP + 0x7e]                ; 004fde1a
    POP EBP                             ; 004fde1d
    POP EDI                             ; 004fde1e
    POP ESI                             ; 004fde1f
    POP EBX                             ; 004fde20
    RET                                 ; 004fde21

