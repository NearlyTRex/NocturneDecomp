; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044db70(int param_1,int param_2)
;
; Local Variables:
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
;   FUN_00535da0 at 00535e6e
;
; Referenced Globals:
;   undefined4 DAT_01547204
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044db70
        ;   Label: FUN_0044db70
    PUSH ESI                            ; 0044db71
    PUSH EDI                            ; 0044db72
    PUSH EBP                            ; 0044db73
    MOV EBP,ESP                         ; 0044db74
    SUB ESP,0x24                        ; 0044db76
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044db79
    XOR EDX,EDX                         ; 0044db7c
    MOV ECX,dword ptr [EAX + 0x154]     ; 0044db7e
    MOV dword ptr [EBP + -0xc],EDX      ; 0044db84
    TEST ECX,ECX                        ; 0044db87
    JLE 0x0044dbef                      ; 0044db89
        ;   XREF to: 0044dbef (CONDITIONAL_JUMP)  ; LAB_0044dbef
    MOV EBX,0xb2cfc8                    ; 0044db8b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044db90
    MOV dword ptr [EBP + -0x8],EDX      ; 0044db93
    MOV dword ptr [EBP + -0x10],EBX     ; 0044db96
    MOV dword ptr [EBP + -0x4],EAX      ; 0044db99
    MOV EDX,dword ptr [EBP + -0x4]      ; 0044db9c
        ;   Label: LAB_0044db9c
    MOV EAX,dword ptr [EBP + -0x4]      ; 0044db9f
    MOV EDI,dword ptr [EDX + 0x14c8]    ; 0044dba2
    MOV EAX,dword ptr [EAX + 0x1888]    ; 0044dba8
    SUB EAX,EDI                         ; 0044dbae
    INC EAX                             ; 0044dbb0
    MOV dword ptr [EBP + -0x14],EAX     ; 0044dbb1
    CMP dword ptr [EBP + -0x14],0x0     ; 0044dbb4
    JG 0x0044dbf6                       ; 0044dbb8
        ;   XREF to: 0044dbf6 (CONDITIONAL_JUMP)  ; LAB_0044dbf6
    MOV EBX,dword ptr [EBP + -0x4]      ; 0044dbba
        ;   Label: LAB_0044dbba
    MOV ESI,dword ptr [EBP + -0x10]     ; 0044dbbd
    MOV EDI,dword ptr [EBP + -0x8]      ; 0044dbc0
    MOV EAX,dword ptr [EBP + -0xc]      ; 0044dbc3
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044dbc6
    ADD EBX,0x4                         ; 0044dbc9
    ADD ESI,0x140                       ; 0044dbcc
    ADD EDI,0x500                       ; 0044dbd2
    INC EAX                             ; 0044dbd8
    MOV ECX,dword ptr [EDX + 0x154]     ; 0044dbd9
    MOV dword ptr [EBP + -0x4],EBX      ; 0044dbdf
    MOV dword ptr [EBP + -0x10],ESI     ; 0044dbe2
    MOV dword ptr [EBP + -0x8],EDI      ; 0044dbe5
    MOV dword ptr [EBP + -0xc],EAX      ; 0044dbe8
    CMP EAX,ECX                         ; 0044dbeb
    JL 0x0044db9c                       ; 0044dbed
        ;   XREF to: 0044db9c (CONDITIONAL_JUMP)  ; LAB_0044db9c
    MOV ESP,EBP                         ; 0044dbef
        ;   Label: LAB_0044dbef
    POP EBP                             ; 0044dbf1
    POP EDI                             ; 0044dbf2
    POP ESI                             ; 0044dbf3
    POP EBX                             ; 0044dbf4
    RET                                 ; 0044dbf5
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044dbf6
        ;   Label: LAB_0044dbf6
    MOV ECX,dword ptr [EBP + -0x8]      ; 0044dbf9
    MOV EAX,dword ptr [EAX + 0x1c48]    ; 0044dbfc
    LEA EDX,[EDI*0x4 + 0x0]             ; 0044dc02
    ADD EAX,ECX                         ; 0044dc09
    ADD EAX,EDX                         ; 0044dc0b
    MOV dword ptr [EBP + -0x24],EAX     ; 0044dc0d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0044dc10
    MOV EDX,dword ptr [EBP + 0x18]      ; 0044dc13
    MOV EAX,dword ptr [EAX + 0x14c8]    ; 0044dc16
    MOV EDX,dword ptr [EDX + 0x1c4c]    ; 0044dc1c
    SHL EAX,0x2                         ; 0044dc22
    ADD EDX,ECX                         ; 0044dc25
    ADD EDX,EAX                         ; 0044dc27
    MOV dword ptr [EBP + -0x20],EDX     ; 0044dc29
    MOV EDX,dword ptr [EBP + -0x4]      ; 0044dc2c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044dc2f
    MOV EDX,dword ptr [EDX + 0x14c8]    ; 0044dc32
    MOV EAX,dword ptr [EAX + 0x1c50]    ; 0044dc38
    SHL EDX,0x2                         ; 0044dc3e
    ADD EAX,ECX                         ; 0044dc41
    ADD EAX,EDX                         ; 0044dc43
    MOV dword ptr [EBP + -0x1c],EAX     ; 0044dc45
    MOV EDX,dword ptr [EBP + -0x4]      ; 0044dc48
    MOV EAX,dword ptr [EBP + -0x10]     ; 0044dc4b
    MOV EDI,dword ptr [EDX + 0x14c8]    ; 0044dc4e
    ADD EAX,EDI                         ; 0044dc54
    MOV dword ptr [EBP + -0x18],EAX     ; 0044dc56
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044dc59
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 0044dc5c
    MOV [0x01547204],EAX                ; 0044dc62 | DAT_01547204
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 0044dc67
    MOV EBX,dword ptr [EBP + 0xffffffdc] ; 0044dc6d
    MOV EAX,dword ptr [EBX]             ; 0044dc73
        ;   Label: LAB_0044dc73
    ADD EBX,0x20                        ; 0044dc75
    SUB ECX,0x8                         ; 0044dc78
    JG 0x0044dc73                       ; 0044dc7b
        ;   XREF to: 0044dc73 (CONDITIONAL_JUMP)  ; LAB_0044dc73
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 0044dc7d
    MOV EBX,dword ptr [EBP + 0xffffffe0] ; 0044dc83
    MOV EAX,dword ptr [EBX]             ; 0044dc89
        ;   Label: LAB_0044dc89
    ADD EBX,0x20                        ; 0044dc8b
    SUB ECX,0x8                         ; 0044dc8e
    JG 0x0044dc89                       ; 0044dc91
        ;   XREF to: 0044dc89 (CONDITIONAL_JUMP)  ; LAB_0044dc89
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 0044dc93
    MOV EBX,dword ptr [EBP + 0xffffffe4] ; 0044dc99
    MOV EAX,dword ptr [EBX]             ; 0044dc9f
        ;   Label: LAB_0044dc9f
    ADD EBX,0x20                        ; 0044dca1
    SUB ECX,0x8                         ; 0044dca4
    JG 0x0044dc9f                       ; 0044dca7
        ;   XREF to: 0044dc9f (CONDITIONAL_JUMP)  ; LAB_0044dc9f
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 0044dca9
    MOV EBX,dword ptr [EBP + 0xffffffdc] ; 0044dcaf
    MOV ESI,dword ptr [EBP + 0xffffffe0] ; 0044dcb5
    MOV EDX,dword ptr [EBP + 0xffffffe4] ; 0044dcbb
    MOV EDI,dword ptr [EBP + 0xffffffe8] ; 0044dcc1
    PUSH EBP                            ; 0044dcc7
    MOV EAX,dword ptr [EBX]             ; 0044dcc8
        ;   Label: LAB_0044dcc8
    CMP EAX,0x0                         ; 0044dcca
    JBE 0x0044dce6                      ; 0044dccd
        ;   XREF to: 0044dce6 (CONDITIONAL_JUMP)  ; LAB_0044dce6
    MOV EBP,dword ptr [ESI]             ; 0044dccf
    MOVZX EAX,word ptr [EBP]            ; 0044dcd1
    CMP EAX,dword ptr [EBX]             ; 0044dcd5
    JC 0x0044dce6                       ; 0044dcd7
        ;   XREF to: 0044dce6 (CONDITIONAL_JUMP)  ; LAB_0044dce6
    MOV EBP,dword ptr [0x01547204]      ; 0044dcd9 | DAT_01547204
    ADD EBP,dword ptr [EDX]             ; 0044dcdf
    MOV AL,byte ptr [EBP]               ; 0044dce1
    ADD byte ptr [EDI],AL               ; 0044dce4
    ADD EBX,0x4                         ; 0044dce6
        ;   Label: LAB_0044dce6
    ADD ESI,0x4                         ; 0044dce9
    ADD EDX,0x4                         ; 0044dcec
    INC EDI                             ; 0044dcef
    SUB ECX,0x1                         ; 0044dcf0
    JG 0x0044dcc8                       ; 0044dcf3
        ;   XREF to: 0044dcc8 (CONDITIONAL_JUMP)  ; LAB_0044dcc8
    POP EBP                             ; 0044dcf5
    JMP 0x0044dbba                      ; 0044dcf6
        ;   XREF to: 0044dbba (UNCONDITIONAL_JUMP)  ; LAB_0044dbba

