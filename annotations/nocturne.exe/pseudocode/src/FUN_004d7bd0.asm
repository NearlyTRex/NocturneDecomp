; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d7bd0(undefined4 param_1,int *param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_0050b5c0 at 0050b7c4
;
; Referenced Globals:
;   undefined4 DAT_005a0884
;   undefined4 DAT_005a0888
;   undefined4 DAT_005a088c
;
; Called Functions:
;   FUN_004d7480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7bd0
        ;   Label: FUN_004d7bd0
    PUSH EDI                            ; 004d7bd1
    PUSH EBP                            ; 004d7bd2
    SUB ESP,0x54                        ; 004d7bd3
    MOV EAX,dword ptr [ESP + 0x68]      ; 004d7bd6
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004d7bda
    MOV EBP,ESI                         ; 004d7bde
    MOV ESI,dword ptr [ESP + 0x64]      ; 004d7be0
    LEA EBX,[ESP + 0x3c]                ; 004d7be4
    FILD dword ptr [EAX]                ; 004d7be8
    FMUL float ptr [0x005a0888]         ; 004d7bea | DAT_005a0888
    FSTP float ptr [EBX]                ; 004d7bf0
    FILD dword ptr [EAX + 0x4]          ; 004d7bf2
    FMUL float ptr [0x005a0888]         ; 004d7bf5 | DAT_005a0888
    FSTP float ptr [EBX + 0x4]          ; 004d7bfb
    FILD dword ptr [EAX + 0x8]          ; 004d7bfe
    FMUL float ptr [0x005a0888]         ; 004d7c01 | DAT_005a0888
    FSTP float ptr [EBX + 0x8]          ; 004d7c07
    LEA EBX,[ESP + 0xc]                 ; 004d7c0a
    MOV EAX,EDX                         ; 004d7c0e
    FILD dword ptr [EAX]                ; 004d7c10
    FMUL float ptr [0x005a088c]         ; 004d7c12 | DAT_005a088c
    FSTP float ptr [EBX]                ; 004d7c18
    FILD dword ptr [EAX + 0x4]          ; 004d7c1a
    FMUL float ptr [0x005a088c]         ; 004d7c1d | DAT_005a088c
    FSTP float ptr [EBX + 0x4]          ; 004d7c23
    FILD dword ptr [EAX + 0x8]          ; 004d7c26
    FMUL float ptr [0x005a088c]         ; 004d7c29 | DAT_005a088c
    FSTP float ptr [EBX + 0x8]          ; 004d7c2f
    FLD float ptr [ESP + 0xc]           ; 004d7c32
    FLD float ptr [ESP + 0x10]          ; 004d7c36
    FLD float ptr [ESP + 0x14]          ; 004d7c3a
    MOV EAX,ESP                         ; 004d7c3e
    LEA EDX,[ESP + 0xc]                 ; 004d7c40
    FXCH ST2                            ; 004d7c44
    FADD float ptr [ESP + 0x3c]         ; 004d7c46
    FXCH                                ; 004d7c4a
    FADD float ptr [ESP + 0x40]         ; 004d7c4c
    FXCH ST2                            ; 004d7c50
    FADD float ptr [ESP + 0x44]         ; 004d7c52
    FXCH                                ; 004d7c56
    FSTP float ptr [ESP]                ; 004d7c58
    FXCH                                ; 004d7c5b
    FSTP float ptr [ESP + 0x4]          ; 004d7c5d
    FSTP float ptr [ESP + 0x8]          ; 004d7c61
    CMP EDX,EAX                         ; 004d7c65
    JZ 0x004d7c80                       ; 004d7c67
        ;   XREF to: 004d7c80 (CONDITIONAL_JUMP)  ; LAB_004d7c80
    MOV EAX,dword ptr [ESP]             ; 004d7c69
    MOV dword ptr [ESP + 0xc],EAX       ; 004d7c6c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d7c70
    MOV dword ptr [ESP + 0x10],EAX      ; 004d7c74
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d7c78
    MOV dword ptr [ESP + 0x14],EAX      ; 004d7c7c
    LEA EAX,[ESP + 0x3c]                ; 004d7c80
        ;   Label: LAB_004d7c80
    PUSH EAX                            ; 004d7c84
    LEA EAX,[ESP + 0x1c]                ; 004d7c85
    PUSH EAX                            ; 004d7c89
    PUSH ESI                            ; 004d7c8a
    CALL FUN_004d7480                   ; 004d7c8b
        ;   XREF to: 004d7480 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7480()
    MOV EDX,EAX                         ; 004d7c90
    LEA EAX,[ESP + 0x48]                ; 004d7c92
    ADD ESP,0xc                         ; 004d7c96
    CMP EAX,EDX                         ; 004d7c99
    JZ 0x004d7cb1                       ; 004d7c9b
        ;   XREF to: 004d7cb1 (CONDITIONAL_JUMP)  ; LAB_004d7cb1
    MOV EAX,dword ptr [EDX]             ; 004d7c9d
    MOV dword ptr [ESP + 0x3c],EAX      ; 004d7c9f
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d7ca3
    MOV dword ptr [ESP + 0x40],EAX      ; 004d7ca6
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d7caa
    MOV dword ptr [ESP + 0x44],EAX      ; 004d7cad
    LEA EAX,[ESP + 0xc]                 ; 004d7cb1
        ;   Label: LAB_004d7cb1
    PUSH EAX                            ; 004d7cb5
    LEA EAX,[ESP + 0x4c]                ; 004d7cb6
    PUSH EAX                            ; 004d7cba
    PUSH ESI                            ; 004d7cbb
    CALL FUN_004d7480                   ; 004d7cbc
        ;   XREF to: 004d7480 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7480()
    MOV EDX,EAX                         ; 004d7cc1
    LEA EAX,[ESP + 0x18]                ; 004d7cc3
    ADD ESP,0xc                         ; 004d7cc7
    CMP EAX,EDX                         ; 004d7cca
    JZ 0x004d7ce2                       ; 004d7ccc
        ;   XREF to: 004d7ce2 (CONDITIONAL_JUMP)  ; LAB_004d7ce2
    MOV EAX,dword ptr [EDX]             ; 004d7cce
    MOV dword ptr [ESP + 0xc],EAX       ; 004d7cd0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d7cd4
    MOV dword ptr [ESP + 0x10],EAX      ; 004d7cd7
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d7cdb
    MOV dword ptr [ESP + 0x14],EAX      ; 004d7cde
    FLD float ptr [ESP + 0xc]           ; 004d7ce2
        ;   Label: LAB_004d7ce2
    FLD float ptr [ESP + 0x10]          ; 004d7ce6
    FLD float ptr [ESP + 0x14]          ; 004d7cea
    LEA EAX,[ESP + 0x30]                ; 004d7cee
    LEA EDX,[ESP + 0xc]                 ; 004d7cf2
    FXCH ST2                            ; 004d7cf6
    FSUB float ptr [ESP + 0x3c]         ; 004d7cf8
    FXCH                                ; 004d7cfc
    FSUB float ptr [ESP + 0x40]         ; 004d7cfe
    FXCH ST2                            ; 004d7d02
    FSUB float ptr [ESP + 0x44]         ; 004d7d04
    FXCH ST2                            ; 004d7d08
    FSTP float ptr [ESP + 0x34]         ; 004d7d0a
    FXCH                                ; 004d7d0e
    FSTP float ptr [ESP + 0x38]         ; 004d7d10
    FSTP float ptr [ESP + 0x30]         ; 004d7d14
    CMP EDX,EAX                         ; 004d7d18
    JZ 0x004d7d34                       ; 004d7d1a
        ;   XREF to: 004d7d34 (CONDITIONAL_JUMP)  ; LAB_004d7d34
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d7d1c
    MOV dword ptr [ESP + 0xc],EAX       ; 004d7d20
    MOV EAX,dword ptr [ESP + 0x34]      ; 004d7d24
    MOV dword ptr [ESP + 0x10],EAX      ; 004d7d28
    MOV EAX,dword ptr [ESP + 0x38]      ; 004d7d2c
    MOV dword ptr [ESP + 0x14],EAX      ; 004d7d30
    LEA EBX,[ESP + 0x24]                ; 004d7d34
        ;   Label: LAB_004d7d34
    LEA EAX,[ESP + 0xc]                 ; 004d7d38
    LEA ESI,[ESP + 0x24]                ; 004d7d3c
    MOV EDI,EBP                         ; 004d7d40
    FLD float ptr [EAX]                 ; 004d7d42
    FMUL float ptr [0x005a0884]         ; 004d7d44 | DAT_005a0884
    FISTP dword ptr [EBX]               ; 004d7d4a
    FLD float ptr [EAX + 0x4]           ; 004d7d4c
    FMUL float ptr [0x005a0884]         ; 004d7d4f | DAT_005a0884
    FISTP dword ptr [EBX + 0x4]         ; 004d7d55
    FLD float ptr [EAX + 0x8]           ; 004d7d58
    FMUL float ptr [0x005a0884]         ; 004d7d5b | DAT_005a0884
    FISTP dword ptr [EBX + 0x8]         ; 004d7d61
    MOVSD ES:EDI,ESI                    ; 004d7d64
    MOVSD ES:EDI,ESI                    ; 004d7d65
    MOVSD ES:EDI,ESI                    ; 004d7d66
    MOV EAX,EBP                         ; 004d7d67
    ADD ESP,0x54                        ; 004d7d69
    POP EBP                             ; 004d7d6c
    POP EDI                             ; 004d7d6d
    POP EBX                             ; 004d7d6e
    RET                                 ; 004d7d6f

