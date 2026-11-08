; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460cb0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00460230 at 004603dc
;
; Referenced Globals:
;   undefined4 s_djien_die_wav_5_005d8d8f+1
;
; Called Functions:
;   FUN_0040cc00
;   FUN_00418940
;   FUN_00419b90
;   FUN_00431210
;   FUN_00569eb0
;   FUN_005b7ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460cb0
        ;   Label: FUN_00460cb0
    PUSH ESI                            ; 00460cb1
    PUSH EDI                            ; 00460cb2
    PUSH EBP                            ; 00460cb3
    SUB ESP,0x38                        ; 00460cb4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00460cb7
    ADD EAX,0x158                       ; 00460cbb
    MOV dword ptr [EAX + 0xc864],0x1    ; 00460cc0
    PUSH EAX                            ; 00460cca
    MOV dword ptr [EAX + 0xc870],0x0    ; 00460ccb
    CALL FUN_00569eb0                   ; 00460cd5
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00460cda
    MOV EBX,dword ptr [EAX + 0xc00]     ; 00460cdd
    XOR EDX,EDX                         ; 00460ce3
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00460ce5
    MOV dword ptr [ESP + 0x20],EAX      ; 00460ce9
    MOV dword ptr [ESP + 0x30],EDX      ; 00460ced
    MOV dword ptr [ESI + 0xc2f8],EBX    ; 00460cf1
    TEST EBX,EBX                        ; 00460cf7
    JLE 0x00460e52                      ; 00460cf9
        ;   XREF to: 00460e52 (CONDITIONAL_JUMP)  ; LAB_00460e52
    LEA EAX,[ESI + 0xc2fc]              ; 00460cff
    MOV dword ptr [ESP + 0x28],EAX      ; 00460d05
    LEA EAX,[ESI + 0x30]                ; 00460d09
    MOV EBP,dword ptr [ESP + 0x28]      ; 00460d0c
    MOV dword ptr [ESP + 0x1c],EAX      ; 00460d10
    LEA EAX,[ESI + 0x20]                ; 00460d14
    ADD EBP,0xc                         ; 00460d17
    MOV dword ptr [ESP + 0x24],EAX      ; 00460d1a
    MOV dword ptr [ESP + 0x2c],ESI      ; 00460d1e
    PUSH 0x40a00000                     ; 00460d22
        ;   Label: LAB_00460d22
    PUSH 0xc0a00000                     ; 00460d27
    CALL FUN_0040cc00                   ; 00460d2c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x3c],EAX      ; 00460d31
    FLD float ptr [ESP + 0x3c]          ; 00460d35
    ADD ESP,0x8                         ; 00460d39
    PUSH 0x41200000                     ; 00460d3c
    PUSH 0x0                            ; 00460d41
    FSTP float ptr [ESP + 0x18]         ; 00460d43
    CALL FUN_0040cc00                   ; 00460d47
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x3c],EAX      ; 00460d4c
    FLD float ptr [ESP + 0x3c]          ; 00460d50
    ADD ESP,0x8                         ; 00460d54
    PUSH 0x40a00000                     ; 00460d57
    PUSH 0xc0a00000                     ; 00460d5c
    FSTP float ptr [ESP + 0x1c]         ; 00460d61
    CALL FUN_0040cc00                   ; 00460d65
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x3c],EAX      ; 00460d6a
    FLD float ptr [ESP + 0x3c]          ; 00460d6e
    ADD ESP,0x8                         ; 00460d72
    PUSH 0x2                            ; 00460d75
    PUSH 0x1                            ; 00460d77
    PUSH 0x1                            ; 00460d79
    MOV EAX,dword ptr [ESP + 0x58]      ; 00460d7b
    PUSH EAX                            ; 00460d7f
    LEA EAX,[ESP + 0x20]                ; 00460d80
    PUSH EAX                            ; 00460d84
    MOV EDX,dword ptr [ESP + 0x30]      ; 00460d85
    PUSH EDX                            ; 00460d89
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00460d8a
    PUSH ECX                            ; 00460d8e
    FSTP float ptr [ESP + 0x34]         ; 00460d8f
    CALL FUN_00418940                   ; 00460d93
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; undefined FUN_00418940()
    ADD ESP,0x1c                        ; 00460d98
    PUSH 0x0                            ; 00460d9b
    MOV EDI,dword ptr [ESP + 0x34]      ; 00460d9d
    PUSH EDI                            ; 00460da1
    MOV EBX,EAX                         ; 00460da2
    PUSH EAX                            ; 00460da4
    MOV ESI,EAX                         ; 00460da5
    MOV EAX,dword ptr [ESP + 0x58]      ; 00460da7
    PUSH EAX                            ; 00460dab
    CALL FUN_00431210                   ; 00460dac
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; undefined FUN_00431210()
    ADD ESP,0x10                        ; 00460db1
    PUSH EBX                            ; 00460db4
    MOV dword ptr [EBX + 0xcc4],0x1     ; 00460db5
    CALL FUN_00419b90                   ; 00460dbf
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00419b90()
    IMUL EAX,EDI,0x48                   ; 00460dc4
    ADD ESP,0x4                         ; 00460dc7
    MOV ECX,dword ptr [ESP + 0x28]      ; 00460dca
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00460dce
    ADD EAX,ECX                         ; 00460dd2
    MOV dword ptr [EDI + 0xc340],EBX    ; 00460dd4
    ADD EBX,0x20                        ; 00460dda
    CMP EAX,EBX                         ; 00460ddd
    JZ 0x00460df1                       ; 00460ddf
        ;   XREF to: 00460df1 (CONDITIONAL_JUMP)  ; LAB_00460df1
    MOV EDX,dword ptr [EBX]             ; 00460de1
    MOV dword ptr [EAX],EDX             ; 00460de3
    MOV EDX,dword ptr [EBX + 0x4]       ; 00460de5
    MOV dword ptr [EAX + 0x4],EDX       ; 00460de8
    MOV EDX,dword ptr [EBX + 0x8]       ; 00460deb
    MOV dword ptr [EAX + 0x8],EDX       ; 00460dee
    LEA EAX,[ESI + 0x30]                ; 00460df1
        ;   Label: LAB_00460df1
    CMP EBP,EAX                         ; 00460df4
    JZ 0x00460e09                       ; 00460df6
        ;   XREF to: 00460e09 (CONDITIONAL_JUMP)  ; LAB_00460e09
    MOV EDX,dword ptr [EAX]             ; 00460df8
    MOV dword ptr [EBP],EDX             ; 00460dfa
    MOV EDX,dword ptr [EAX + 0x4]       ; 00460dfd
    MOV dword ptr [EBP + 0x4],EDX       ; 00460e00
    MOV EDX,dword ptr [EAX + 0x8]       ; 00460e03
    MOV dword ptr [EBP + 0x8],EDX       ; 00460e06
    ADD ESI,0x30                        ; 00460e09
        ;   Label: LAB_00460e09
    PUSH ESI                            ; 00460e0c
    LEA ESI,[ESP + 0x4]                 ; 00460e0d
    CALL FUN_005b7ed0                   ; 00460e11
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ed0()
    ADD ESP,0x4                         ; 00460e16
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00460e19
    MOV ESI,ESP                         ; 00460e1d
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00460e1f
    LEA EDI,[EDI + 0xc324]              ; 00460e23
    ADD EBX,0x48                        ; 00460e29
    MOVSD ES:EDI,ESI                    ; 00460e2c
    MOVSD ES:EDI,ESI                    ; 00460e2d
    MOVSD ES:EDI,ESI                    ; 00460e2e
    MOVSD ES:EDI,ESI                    ; 00460e2f
    MOV dword ptr [ESP + 0x2c],EBX      ; 00460e30
    MOV ESI,dword ptr [ESP + 0x30]      ; 00460e34
    MOV EBX,dword ptr [ESP + 0x20]      ; 00460e38
    ADD EBP,0x48                        ; 00460e3c
    INC ESI                             ; 00460e3f
    MOV EDI,dword ptr [EBX + 0xc00]     ; 00460e40
    MOV dword ptr [ESP + 0x30],ESI      ; 00460e46
    CMP ESI,EDI                         ; 00460e4a
    JL 0x00460d22                       ; 00460e4c
        ;   XREF to: 00460d22 (CONDITIONAL_JUMP)  ; LAB_00460d22
    PUSH 0x5d8d90                       ; 00460e52 | s_djien_die_wav_5_005d8d8f+1
        ;   Label: LAB_00460e52
    MOV EBX,dword ptr [ESP + 0x50]      ; 00460e57
    MOV EAX,dword ptr [ESP + 0x50]      ; 00460e5b
    PUSH EBX                            ; 00460e5f
    MOV EAX,dword ptr [EAX + 0x154]     ; 00460e60
    CALL dword ptr [EAX + 0x2c]         ; 00460e66
    ADD ESP,0x8                         ; 00460e69
    ADD ESP,0x38                        ; 00460e6c
    POP EBP                             ; 00460e6f
    POP EDI                             ; 00460e70
    POP ESI                             ; 00460e71
    POP EBX                             ; 00460e72
    RET                                 ; 00460e73

