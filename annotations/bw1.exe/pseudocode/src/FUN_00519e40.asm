; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00519e40(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
;   FUN_0054e3c0 at 0054e525
;
; Referenced Globals:
;   undefined4 DAT_00603ce0
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00481cb0
;   FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519e40
        ;   Label: FUN_00519e40
    PUSH ESI                            ; 00519e41
    PUSH EDI                            ; 00519e42
    PUSH EBP                            ; 00519e43
    SUB ESP,0x78                        ; 00519e44
    MOV ESI,dword ptr [0x00612560]      ; 00519e47 | DAT_00612560
    MOV EDI,dword ptr [ESP + 0x8c]      ; 00519e4d
    LEA EBX,[ESP + 0x54]                ; 00519e54
    MOV EAX,EDI                         ; 00519e58
    MOV EDX,dword ptr [ESI]             ; 00519e5a | DAT_01bc120c
    FLD float ptr [EAX]                 ; 00519e5c
    FMUL float ptr [0x00603ce0]         ; 00519e5e | DAT_00603ce0
    FISTP dword ptr [EBX]               ; 00519e64
    FLD float ptr [EAX + 0x4]           ; 00519e66
    FMUL float ptr [0x00603ce0]         ; 00519e69 | DAT_00603ce0
    FISTP dword ptr [EBX + 0x4]         ; 00519e6f
    FLD float ptr [EAX + 0x8]           ; 00519e72
    FMUL float ptr [0x00603ce0]         ; 00519e75 | DAT_00603ce0
    FISTP dword ptr [EBX + 0x8]         ; 00519e7b
    LEA EAX,[ESP + 0x54]                ; 00519e7e
    PUSH EAX                            ; 00519e82
    PUSH EDX                            ; 00519e83
    CALL FUN_0058043c                   ; 00519e84
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; undefined FUN_0058043c()
    MOV ESI,dword ptr [0x00612560]      ; 00519e89 | DAT_00612560
    MOV EAX,dword ptr [ESI]             ; 00519e8f | DAT_01bc120c
    ADD ESP,0x8                         ; 00519e91
    LEA EDX,[EAX + 0x30]                ; 00519e94
    LEA EBX,[ESP + 0x48]                ; 00519e97
    LEA EAX,[EDI + 0xc]                 ; 00519e9b
    FLD float ptr [EAX]                 ; 00519e9e
    FMUL float ptr [0x00603ce0]         ; 00519ea0 | DAT_00603ce0
    FISTP dword ptr [EBX]               ; 00519ea6
    FLD float ptr [EAX + 0x4]           ; 00519ea8
    FMUL float ptr [0x00603ce0]         ; 00519eab | DAT_00603ce0
    FISTP dword ptr [EBX + 0x4]         ; 00519eb1
    FLD float ptr [EAX + 0x8]           ; 00519eb4
    FMUL float ptr [0x00603ce0]         ; 00519eb7 | DAT_00603ce0
    FISTP dword ptr [EBX + 0x8]         ; 00519ebd
    LEA EAX,[ESP + 0x48]                ; 00519ec0
    PUSH EAX                            ; 00519ec4
    PUSH EDX                            ; 00519ec5
    CALL FUN_0058043c                   ; 00519ec6
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; undefined FUN_0058043c()
    MOV ESI,dword ptr [0x00612560]      ; 00519ecb | DAT_00612560
    MOV EAX,dword ptr [ESI]             ; 00519ed1 | DAT_01bc120c
    ADD ESP,0x8                         ; 00519ed3
    LEA EDX,[EAX + 0x60]                ; 00519ed6
    LEA EBX,[ESP + 0x6c]                ; 00519ed9
    LEA EAX,[EDI + 0x18]                ; 00519edd
    FLD float ptr [EAX]                 ; 00519ee0
    FMUL float ptr [0x00603ce0]         ; 00519ee2 | DAT_00603ce0
    FISTP dword ptr [EBX]               ; 00519ee8
    FLD float ptr [EAX + 0x4]           ; 00519eea
    FMUL float ptr [0x00603ce0]         ; 00519eed | DAT_00603ce0
    FISTP dword ptr [EBX + 0x4]         ; 00519ef3
    FLD float ptr [EAX + 0x8]           ; 00519ef6
    FMUL float ptr [0x00603ce0]         ; 00519ef9 | DAT_00603ce0
    FISTP dword ptr [EBX + 0x8]         ; 00519eff
    LEA EAX,[ESP + 0x6c]                ; 00519f02
    PUSH EAX                            ; 00519f06
    PUSH EDX                            ; 00519f07
    CALL FUN_0058043c                   ; 00519f08
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; undefined FUN_0058043c()
    MOV ESI,dword ptr [0x00612560]      ; 00519f0d | DAT_00612560
    MOV EAX,dword ptr [ESI]             ; 00519f13 | DAT_01bc120c
    ADD ESP,0x8                         ; 00519f15
    LEA EDX,[EAX + 0x90]                ; 00519f18
    LEA EBX,[ESP + 0x60]                ; 00519f1e
    LEA EAX,[EDI + 0x24]                ; 00519f22
    FLD float ptr [EAX]                 ; 00519f25
    FMUL float ptr [0x00603ce0]         ; 00519f27 | DAT_00603ce0
    FISTP dword ptr [EBX]               ; 00519f2d
    FLD float ptr [EAX + 0x4]           ; 00519f2f
    FMUL float ptr [0x00603ce0]         ; 00519f32 | DAT_00603ce0
    FISTP dword ptr [EBX + 0x4]         ; 00519f38
    FLD float ptr [EAX + 0x8]           ; 00519f3b
    FMUL float ptr [0x00603ce0]         ; 00519f3e | DAT_00603ce0
    FISTP dword ptr [EBX + 0x8]         ; 00519f44
    LEA EAX,[ESP + 0x60]                ; 00519f47
    PUSH EAX                            ; 00519f4b
    PUSH EDX                            ; 00519f4c
    CALL FUN_0058043c                   ; 00519f4d
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; undefined FUN_0058043c()
    MOV ESI,dword ptr [0x00612560]      ; 00519f52 | DAT_00612560
    ADD ESP,0x8                         ; 00519f58
    XOR EAX,EAX                         ; 00519f5b
    MOV EDX,ESI                         ; 00519f5d
    MOV ECX,dword ptr [ESI]             ; 00519f5f | DAT_01bc120c
        ;   Label: LAB_00519f5f
    SHL dword ptr [ECX + EAX*0x1],0x4   ; 00519f61
    MOV ECX,dword ptr [ESI]             ; 00519f65 | DAT_01bc120c
    SHL dword ptr [ECX + EAX*0x1 + 0x4],0x4 ; 00519f67
    MOV ECX,dword ptr [ESI]             ; 00519f6c | DAT_01bc120c
    SHL dword ptr [ECX + EAX*0x1 + 0x8],0x4 ; 00519f6e
    MOV ECX,dword ptr [ESI]             ; 00519f73 | DAT_01bc120c
    MOV EBX,dword ptr [ECX + EAX*0x1 + 0xc] ; 00519f75
    ADD EAX,0x30                        ; 00519f79
    SHR EBX,0x4                         ; 00519f7c
    MOV dword ptr [ECX + EAX*0x1 + -0x24],EBX ; 00519f7f
    CMP EAX,0xc0                        ; 00519f83
    JNZ 0x00519f5f                      ; 00519f88
        ;   XREF to: 00519f5f (CONDITIONAL_JUMP)  ; LAB_00519f5f
    MOV EDI,0x4                         ; 00519f8a
    MOV EAX,0x2                         ; 00519f8f
    MOV ECX,0x3                         ; 00519f94
    MOV dword ptr [0x00612560],ESI      ; 00519f99 | DAT_00612560
    XOR EBP,EBP                         ; 00519f9f
    MOV dword ptr [ESP + 0x4],EDI       ; 00519fa1
    MOV dword ptr [ESP + 0x14],EBP      ; 00519fa5
    MOV dword ptr [ESP + 0x10],EBP      ; 00519fa9
    MOV dword ptr [ESP + 0xc],EBP       ; 00519fad
    MOV dword ptr [ESP + 0x30],EAX      ; 00519fb1
    MOV EAX,ESP                         ; 00519fb5
    MOV dword ptr [ESP + 0x8],EBP       ; 00519fb7
    PUSH EAX                            ; 00519fbb
    MOV dword ptr [ESP + 0x1c],EBP      ; 00519fbc
    MOV EBP,0x1                         ; 00519fc0
    PUSH ESI                            ; 00519fc5 | DAT_01bc120c
    MOV dword ptr [ESP + 0x44],ECX      ; 00519fc6
    MOV dword ptr [ESP + 0x2c],EBP      ; 00519fca
    CALL FUN_00481cb0                   ; 00519fce
        ;   XREF to: 00481cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481cb0()
    MOV ESI,dword ptr [0x00612560]      ; 00519fd3 | DAT_00612560
    ADD ESP,0x8                         ; 00519fd9
    ADD ESP,0x78                        ; 00519fdc
    POP EBP                             ; 00519fdf
    POP EDI                             ; 00519fe0
    POP ESI                             ; 00519fe1
    POP EBX                             ; 00519fe2
    RET                                 ; 00519fe3

