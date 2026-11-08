; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042ea10(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
;
; XREF[1]:
;   FUN_0042e960 at 0042e9fd
;
; Referenced Globals:
;   undefined4 s_s_7headlite_raw_005d5992+1
;   undefined4 s_s_7headlite_raw_005d5992+2
;   undefined4 s_s_7headlite_raw_005d5992+3
;   undefined4 s_s_7headlite_raw_005d5992+4
;   undefined4 DAT_005d59a7
;   undefined4 DAT_005d59af
;   undefined4 DAT_005d59b3
;   undefined4 DAT_005fd5f0
;   undefined4 DAT_00612560
;   undefined4 DAT_007c6160
;   undefined1 DAT_007c6168
;   undefined1 DAT_007c6169
;   undefined1 DAT_007c616a
;   undefined1 DAT_007c616b
;   undefined4 DAT_00800000
;   ... and 4 more
;
; Called Functions:
;   FUN_00408bb0
;   FUN_00482170
;   FUN_00483de0
;   FUN_00483e60
;   FUN_00484f00
;   FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ea10
        ;   Label: FUN_0042ea10
    PUSH ESI                            ; 0042ea11
    PUSH EDI                            ; 0042ea12
    PUSH EBP                            ; 0042ea13
    MOV EBP,ESP                         ; 0042ea14
    SUB ESP,0x10c                       ; 0042ea16
    AND ESP,0xfffffff8                  ; 0042ea1c
    MOV EDX,dword ptr [0x00612560]      ; 0042ea1f | DAT_00612560
    PUSH EDX                            ; 0042ea25 | DAT_01bc120c
    CALL FUN_00483e60                   ; 0042ea26
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 0042ea2b
    TEST EAX,EAX                        ; 0042ea2e
    JZ 0x0042ea39                       ; 0042ea30
        ;   XREF to: 0042ea39 (CONDITIONAL_JUMP)  ; LAB_0042ea39
    MOV ESP,EBP                         ; 0042ea32
    POP EBP                             ; 0042ea34
    POP EDI                             ; 0042ea35
    POP ESI                             ; 0042ea36
    POP EBX                             ; 0042ea37
    RET                                 ; 0042ea38
    MOV ESI,0x5d5993                    ; 0042ea39 | s_s_7headlite_raw_005d5992+1
        ;   Label: LAB_0042ea39
    MOV EDI,0x7c6168                    ; 0042ea3e | DAT_007c6168
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042ea43
    MOV dword ptr [ESP + 0x18],EAX      ; 0042ea47
    MOV dword ptr [ESP + 0x14],EAX      ; 0042ea4b
    MOV dword ptr [ESP + 0x10],EAX      ; 0042ea4f
    PUSH EDI                            ; 0042ea53 | DAT_007c6168
    MOV AL,byte ptr [ESI]               ; 0042ea54 | s_s_7headlite_raw_005d5992+1 | s_s_7headlite_raw_005d5992+3
        ;   Label: LAB_0042ea54
    MOV byte ptr [EDI],AL               ; 0042ea56 | DAT_007c6168 | DAT_007c616a
    CMP AL,0x0                          ; 0042ea58
    JZ 0x0042ea6c                       ; 0042ea5a
        ;   XREF to: 0042ea6c (CONDITIONAL_JUMP)  ; LAB_0042ea6c
    MOV AL,byte ptr [ESI + 0x1]         ; 0042ea5c | s_s_7headlite_raw_005d5992+2 | s_s_7headlite_raw_005d5992+4
    ADD ESI,0x2                         ; 0042ea5f
    MOV byte ptr [EDI + 0x1],AL         ; 0042ea62 | DAT_007c6169 | DAT_007c616b
    ADD EDI,0x2                         ; 0042ea65
    CMP AL,0x0                          ; 0042ea68
    JNZ 0x0042ea54                      ; 0042ea6a
        ;   XREF to: 0042ea54 (CONDITIONAL_JUMP)  ; LAB_0042ea54
    POP EDI                             ; 0042ea6c
        ;   Label: LAB_0042ea6c
    PUSH 0x7c6160                       ; 0042ea6d | DAT_007c6160
    MOV EAX,[0x00612560]                ; 0042ea72 | DAT_00612560
    PUSH EAX                            ; 0042ea77 | DAT_01bc120c
    CALL FUN_00484f00                   ; 0042ea78
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 0042ea7d
    XOR EAX,EAX                         ; 0042ea80
    MOV ESI,0x800000                    ; 0042ea82 | DAT_00800000
    MOV EDX,dword ptr [0x00612560]      ; 0042ea87 | DAT_00612560
        ;   Label: LAB_0042ea87
    MOV EBX,dword ptr [EDX]             ; 0042ea8d | DAT_01bc120c
    MOV dword ptr [EBX + EAX*0x1 + 0x18],ESI ; 0042ea8f | DAT_00800000
    ADD EAX,0x30                        ; 0042ea93
    MOV EDX,dword ptr [EDX]             ; 0042ea96 | DAT_01bc120c
    MOV dword ptr [EDX + EAX*0x1 + -0x14],ESI ; 0042ea98 | DAT_00800000
    CMP EAX,0x12c0                      ; 0042ea9c
    JNZ 0x0042ea87                      ; 0042eaa1
        ;   XREF to: 0042ea87 (CONDITIONAL_JUMP)  ; LAB_0042ea87
    MOV EDX,0x267                       ; 0042eaa3
    MOV ECX,0x3                         ; 0042eaa8
    MOV ESI,0x1                         ; 0042eaad
    MOV EDI,0x2                         ; 0042eab2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042eab7
    XOR EBX,EBX                         ; 0042eaba
    MOV dword ptr [ESP + 0xe0],EDX      ; 0042eabc
    MOV dword ptr [ESP + 0xc],ECX       ; 0042eac3
    MOV dword ptr [ESP + 0x20],EBX      ; 0042eac7
    MOV dword ptr [ESP + 0x24],ESI      ; 0042eacb
    MOV dword ptr [ESP + 0x28],EDI      ; 0042eacf
    MOV dword ptr [ESP + 0x2c],ECX      ; 0042ead3
    ADD EAX,0x2e68                      ; 0042ead7
    MOV EDX,0x28000                     ; 0042eadc
    MOV dword ptr [ESP + 0xe8],EAX      ; 0042eae1
    ADD EAX,0xb4                        ; 0042eae8
    MOV dword ptr [ESP + 0xe4],EDX      ; 0042eaed
    MOV dword ptr [ESP + 0xc8],EAX      ; 0042eaf4
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0042eafb
        ;   Label: LAB_0042eafb
    MOV EDX,EAX                         ; 0042eb02
    MOV EBX,0x5                         ; 0042eb04
    SAR EDX,0x1f                        ; 0042eb09
    IDIV EBX                            ; 0042eb0c
    PUSH EAX                            ; 0042eb0e
    MOV ECX,dword ptr [0x00612560]      ; 0042eb0f | DAT_00612560
    PUSH ECX                            ; 0042eb15 | DAT_01bc120c
    CALL FUN_00483de0                   ; 0042eb16
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 0042eb1b
    XOR EBX,EBX                         ; 0042eb1e
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0042eb20
    MOV dword ptr [ESP + 0x104],EBX     ; 0042eb27
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042eb2e
    MOV EAX,[0x00612560]                ; 0042eb35 | DAT_00612560
        ;   Label: LAB_0042eb35
    MOV ESI,dword ptr [ESP + 0x104]     ; 0042eb3a
    MOV EBX,dword ptr [EAX]             ; 0042eb41 | DAT_01bc120c
    ADD EBX,ESI                         ; 0042eb43
    MOV dword ptr [EBX + 0x20],0x0      ; 0042eb45
    MOV EBX,dword ptr [EAX]             ; 0042eb4c | DAT_01bc120c
    ADD EBX,ESI                         ; 0042eb4e
    MOV ECX,dword ptr [ESP + 0xf8]      ; 0042eb50
    LEA EDI,[ESP + 0xa8]                ; 0042eb57
    MOV dword ptr [EBX + 0x24],0xffff   ; 0042eb5e
    PUSH ECX                            ; 0042eb65
    MOV EAX,dword ptr [EAX]             ; 0042eb66 | DAT_01bc120c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042eb68
    ADD EAX,ESI                         ; 0042eb6b
    PUSH EBX                            ; 0042eb6d
    LEA ESI,[ESP + 0x38]                ; 0042eb6e
    MOV dword ptr [EAX + 0x28],0x0      ; 0042eb72
    LEA EBX,[ESP + 0xb0]                ; 0042eb79
    CALL FUN_00408bb0                   ; 0042eb80
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x38]                ; 0042eb85
    ADD ESP,0x8                         ; 0042eb89
    LEA EAX,[ESP + 0x60]                ; 0042eb8c
    MOVSD ES:EDI,ESI                    ; 0042eb90
    MOVSD ES:EDI,ESI                    ; 0042eb91
    MOVSD ES:EDI,ESI                    ; 0042eb92
    CMP EAX,EBX                         ; 0042eb93
    JZ 0x0042ebb8                       ; 0042eb95
        ;   XREF to: 0042ebb8 (CONDITIONAL_JUMP)  ; LAB_0042ebb8
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042eb97
    MOV dword ptr [ESP + 0x60],EAX      ; 0042eb9e
    MOV EAX,dword ptr [ESP + 0xac]      ; 0042eba2
    MOV dword ptr [ESP + 0x64],EAX      ; 0042eba9
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0042ebad
    MOV dword ptr [ESP + 0x68],EAX      ; 0042ebb4
    LEA EBX,[ESP + 0x78]                ; 0042ebb8
        ;   Label: LAB_0042ebb8
    LEA EAX,[ESP + 0x60]                ; 0042ebbc
    MOV ESI,dword ptr [0x00612560]      ; 0042ebc0 | DAT_00612560
    FLD float ptr [EAX]                 ; 0042ebc6
    FMUL float ptr [0x005fd5f0]         ; 0042ebc8 | DAT_005fd5f0
    FISTP dword ptr [EBX]               ; 0042ebce
    FLD float ptr [EAX + 0x4]           ; 0042ebd0
    FMUL float ptr [0x005fd5f0]         ; 0042ebd3 | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x4]         ; 0042ebd9
    FLD float ptr [EAX + 0x8]           ; 0042ebdc
    FMUL float ptr [0x005fd5f0]         ; 0042ebdf | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x8]         ; 0042ebe5
    LEA EAX,[ESP + 0x78]                ; 0042ebe8
    PUSH EAX                            ; 0042ebec
    MOV EAX,dword ptr [ESI]             ; 0042ebed | DAT_01bc120c
    MOV ESI,dword ptr [ESP + 0x108]     ; 0042ebef
    ADD EAX,ESI                         ; 0042ebf6
    PUSH EAX                            ; 0042ebf8
    CALL FUN_00580173                   ; 0042ebf9
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 0042ebfe
    MOV EDI,dword ptr [ESP + 0xf8]      ; 0042ec01
    LEA EAX,[ESI + 0x30]                ; 0042ec08
    ADD EDI,0xc                         ; 0042ec0b
    MOV dword ptr [ESP + 0x104],EAX     ; 0042ec0e
    MOV dword ptr [ESP + 0xf8],EDI      ; 0042ec15
    CMP EAX,0x90                        ; 0042ec1c
    JNZ 0x0042eb35                      ; 0042ec21
        ;   XREF to: 0042eb35 (CONDITIONAL_JUMP)  ; LAB_0042eb35
    PUSH 0x267                          ; 0042ec27
    LEA EAX,[ESP + 0xc]                 ; 0042ec2c
    PUSH EAX                            ; 0042ec30
    MOV ECX,dword ptr [0x00612560]      ; 0042ec31 | DAT_00612560
    PUSH ECX                            ; 0042ec37 | DAT_01bc120c
    CALL FUN_00482170                   ; 0042ec38
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    ADD ESP,0xc                         ; 0042ec3d
    MOV EBX,dword ptr [ESP + 0xe8]      ; 0042ec40
    MOV ESI,dword ptr [ESP + 0xe4]      ; 0042ec47
    MOV EDI,dword ptr [ESP + 0xc8]      ; 0042ec4e
    ADD EBX,0x24                        ; 0042ec55
    ADD ESI,0xffff8000                  ; 0042ec58
    MOV dword ptr [ESP + 0xe8],EBX      ; 0042ec5e
    MOV dword ptr [ESP + 0xe4],ESI      ; 0042ec65
    CMP EBX,EDI                         ; 0042ec6c
    JNZ 0x0042eafb                      ; 0042ec6e
        ;   XREF to: 0042eafb (CONDITIONAL_JUMP)  ; LAB_0042eafb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ec74
    ADD EAX,0x2f1c                      ; 0042ec77
    MOV EDX,0x28000                     ; 0042ec7c
    MOV dword ptr [ESP + 0xec],EAX      ; 0042ec81
    ADD EAX,0xb4                        ; 0042ec88
    MOV dword ptr [ESP + 0xdc],EDX      ; 0042ec8d
    MOV dword ptr [ESP + 0xcc],EAX      ; 0042ec94
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0042ec9b
        ;   Label: LAB_0042ec9b
    MOV EDX,EAX                         ; 0042eca2
    MOV EBX,0x5                         ; 0042eca4
    SAR EDX,0x1f                        ; 0042eca9
    IDIV EBX                            ; 0042ecac
    PUSH EAX                            ; 0042ecae
    MOV ECX,dword ptr [0x00612560]      ; 0042ecaf | DAT_00612560
    PUSH ECX                            ; 0042ecb5 | DAT_01bc120c
    CALL FUN_00483de0                   ; 0042ecb6
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 0042ecbb
    XOR EBX,EBX                         ; 0042ecbe
    MOV EAX,dword ptr [ESP + 0xec]      ; 0042ecc0
    MOV dword ptr [ESP + 0x100],EBX     ; 0042ecc7
    MOV dword ptr [ESP + 0xfc],EAX      ; 0042ecce
    MOV EAX,[0x00612560]                ; 0042ecd5 | DAT_00612560
        ;   Label: LAB_0042ecd5
    MOV ESI,dword ptr [ESP + 0x100]     ; 0042ecda
    MOV EBX,dword ptr [EAX]             ; 0042ece1 | DAT_01bc120c
    ADD EBX,ESI                         ; 0042ece3
    MOV dword ptr [EBX + 0x20],0x0      ; 0042ece5
    MOV EBX,dword ptr [EAX]             ; 0042ecec | DAT_01bc120c
    ADD EBX,ESI                         ; 0042ecee
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0042ecf0
    LEA EDI,[ESP + 0x3c]                ; 0042ecf7
    MOV dword ptr [EBX + 0x24],0x0      ; 0042ecfb
    PUSH ECX                            ; 0042ed02
    MOV EAX,dword ptr [EAX]             ; 0042ed03 | DAT_01bc120c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042ed05
    ADD EAX,ESI                         ; 0042ed08
    PUSH EBX                            ; 0042ed0a
    LEA ESI,[ESP + 0xa4]                ; 0042ed0b
    MOV dword ptr [EAX + 0x28],0xffff   ; 0042ed12
    LEA EBX,[ESP + 0x68]                ; 0042ed19
    CALL FUN_00408bb0                   ; 0042ed1d
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0xa4]                ; 0042ed22
    ADD ESP,0x8                         ; 0042ed29
    LEA EAX,[ESP + 0x3c]                ; 0042ed2c
    MOVSD ES:EDI,ESI                    ; 0042ed30
    MOVSD ES:EDI,ESI                    ; 0042ed31
    MOVSD ES:EDI,ESI                    ; 0042ed32
    CMP EBX,EAX                         ; 0042ed33
    JZ 0x0042ed4f                       ; 0042ed35
        ;   XREF to: 0042ed4f (CONDITIONAL_JUMP)  ; LAB_0042ed4f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042ed37
    MOV dword ptr [ESP + 0x60],EAX      ; 0042ed3b
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042ed3f
    MOV dword ptr [ESP + 0x64],EAX      ; 0042ed43
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042ed47
    MOV dword ptr [ESP + 0x68],EAX      ; 0042ed4b
    LEA EBX,[ESP + 0x54]                ; 0042ed4f
        ;   Label: LAB_0042ed4f
    LEA EAX,[ESP + 0x60]                ; 0042ed53
    MOV ESI,dword ptr [0x00612560]      ; 0042ed57 | DAT_00612560
    FLD float ptr [EAX]                 ; 0042ed5d
    FMUL float ptr [0x005fd5f0]         ; 0042ed5f | DAT_005fd5f0
    FISTP dword ptr [EBX]               ; 0042ed65
    FLD float ptr [EAX + 0x4]           ; 0042ed67
    FMUL float ptr [0x005fd5f0]         ; 0042ed6a | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x4]         ; 0042ed70
    FLD float ptr [EAX + 0x8]           ; 0042ed73
    FMUL float ptr [0x005fd5f0]         ; 0042ed76 | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x8]         ; 0042ed7c
    LEA EAX,[ESP + 0x54]                ; 0042ed7f
    PUSH EAX                            ; 0042ed83
    MOV EAX,dword ptr [ESI]             ; 0042ed84 | DAT_01bc120c
    MOV ESI,dword ptr [ESP + 0x104]     ; 0042ed86
    ADD EAX,ESI                         ; 0042ed8d
    PUSH EAX                            ; 0042ed8f
    CALL FUN_00580173                   ; 0042ed90
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    ADD ESP,0x8                         ; 0042ed95
    MOV EDI,dword ptr [ESP + 0xfc]      ; 0042ed98
    LEA EAX,[ESI + 0x30]                ; 0042ed9f
    ADD EDI,0xc                         ; 0042eda2
    MOV dword ptr [ESP + 0x100],EAX     ; 0042eda5
    MOV dword ptr [ESP + 0xfc],EDI      ; 0042edac
    CMP EAX,0x90                        ; 0042edb3
    JNZ 0x0042ecd5                      ; 0042edb8
        ;   XREF to: 0042ecd5 (CONDITIONAL_JUMP)  ; LAB_0042ecd5
    MOV ECX,dword ptr [ESP + 0xe0]      ; 0042edbe
    PUSH ECX                            ; 0042edc5
    LEA EAX,[ESP + 0xc]                 ; 0042edc6
    PUSH EAX                            ; 0042edca
    MOV EBX,dword ptr [0x00612560]      ; 0042edcb | DAT_00612560
    PUSH EBX                            ; 0042edd1 | DAT_01bc120c
    CALL FUN_00482170                   ; 0042edd2
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    ADD ESP,0xc                         ; 0042edd7
    MOV ESI,dword ptr [ESP + 0xec]      ; 0042edda
    MOV EDI,dword ptr [ESP + 0xdc]      ; 0042ede1
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0042ede8
    ADD ESI,0x24                        ; 0042edef
    ADD EDI,0xffff8000                  ; 0042edf2
    MOV dword ptr [ESP + 0xec],ESI      ; 0042edf8
    MOV dword ptr [ESP + 0xdc],EDI      ; 0042edff
    CMP ESI,EDX                         ; 0042ee06
    JNZ 0x0042ec9b                      ; 0042ee08
        ;   XREF to: 0042ec9b (CONDITIONAL_JUMP)  ; LAB_0042ec9b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ee0e
    FLD float ptr [EAX + 0x3000]        ; 0042ee11
    FMUL float ptr [EAX + 0x27b8]       ; 0042ee17
    FLD float ptr [EAX + 0x2ffc]        ; 0042ee1d
    FMUL float ptr [EAX + 0x27b8]       ; 0042ee23
    FXCH                                ; 0042ee29
    FSTP float ptr [ESP + 0xd0]         ; 0042ee2b
    FCOMP float ptr [ESP + 0xd0]        ; 0042ee32
    FNSTSW AX                           ; 0042ee39
    SAHF                                ; 0042ee3b
    JBE 0x0042ee4e                      ; 0042ee3c
        ;   XREF to: 0042ee4e (CONDITIONAL_JUMP)  ; LAB_0042ee4e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ee3e
    MOV EAX,dword ptr [EAX + 0x2490]    ; 0042ee41
    MOV dword ptr [ESP + 0xd0],EAX      ; 0042ee47
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ee4e
        ;   Label: LAB_0042ee4e
    FLD float ptr [EAX + 0x2ffc]        ; 0042ee51
    FMUL float ptr [EAX + 0x27b8]       ; 0042ee57
    FLD float ptr [ESP + 0xd0]          ; 0042ee5d
    FXCH                                ; 0042ee64
    FSTP float ptr [ESP + 0x4]          ; 0042ee66
    FCOMP float ptr [ESP + 0x4]         ; 0042ee6a
    FNSTSW AX                           ; 0042ee6e
    SAHF                                ; 0042ee70
    JC 0x0042f21e                       ; 0042ee71
        ;   XREF to: 0042f21e (CONDITIONAL_JUMP)  ; LAB_0042f21e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ee77
        ;   Label: LAB_0042ee77
    FLD float ptr [EAX + 0x2ffc]        ; 0042ee7a
    FMUL float ptr [EAX + 0x27b8]       ; 0042ee80
    FLD float ptr [EAX + 0x2ff0]        ; 0042ee86
    FMUL float ptr [EAX + 0x27b8]       ; 0042ee8c
    MOV EDI,0x30                        ; 0042ee92
    XOR ECX,ECX                         ; 0042ee97
    XOR ESI,ESI                         ; 0042ee99
    MOV dword ptr [ESP + 0xf0],ECX      ; 0042ee9b
    FSTP float ptr [ESP]                ; 0042eea2
    FSTP float ptr [ESP + 0xc4]         ; 0042eea5
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0042eeac
        ;   Label: LAB_0042eeac
    ADD EAX,EAX                         ; 0042eeb3
    MOV dword ptr [ESP + 0x108],EAX     ; 0042eeb5
    FILD dword ptr [ESP + 0x108]        ; 0042eebc
    FMUL float ptr [0x005d59af]         ; 0042eec3 | DAT_005d59af
    FMUL float ptr [0x005d59b3]         ; 0042eec9 | DAT_005d59b3
    MOV dword ptr [ESP + 0xf4],EAX      ; 0042eecf
    FLD ST0                             ; 0042eed6
    FSIN                                ; 0042eed8
    FXCH                                ; 0042eeda
    FCOS                                ; 0042eedc
    FLD float ptr [ESP]                 ; 0042eede
    FXCH ST2                            ; 0042eee1
    FMUL ST2                            ; 0042eee3
    FXCH                                ; 0042eee5
    FMULP ST2                           ; 0042eee7
    LEA EBX,[ESP + 0x6c]                ; 0042eee9
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0042eeed
    MOV EDX,dword ptr [0x00612560]      ; 0042eef4 | DAT_00612560
    MOV dword ptr [ESP + 0x64],EAX      ; 0042eefa
    LEA EAX,[ESP + 0x60]                ; 0042eefe
    FSTP float ptr [ESP + 0x60]         ; 0042ef02
    FSTP float ptr [ESP + 0x68]         ; 0042ef06
    FLD float ptr [EAX]                 ; 0042ef0a
    FMUL float ptr [0x005fd5f0]         ; 0042ef0c | DAT_005fd5f0
    FISTP dword ptr [EBX]               ; 0042ef12
    FLD float ptr [EAX + 0x4]           ; 0042ef14
    FMUL float ptr [0x005fd5f0]         ; 0042ef17 | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x4]         ; 0042ef1d
    FLD float ptr [EAX + 0x8]           ; 0042ef20
    FMUL float ptr [0x005fd5f0]         ; 0042ef23 | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x8]         ; 0042ef29
    LEA EAX,[ESP + 0x6c]                ; 0042ef2c
    PUSH EAX                            ; 0042ef30
    MOV EAX,dword ptr [EDX]             ; 0042ef31 | DAT_01bc120c
    ADD EAX,ESI                         ; 0042ef33
    PUSH EAX                            ; 0042ef35
    CALL FUN_00580173                   ; 0042ef36
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    MOV EDX,dword ptr [0x00612560]      ; 0042ef3b | DAT_00612560
    MOV EAX,dword ptr [EDX]             ; 0042ef41 | DAT_01bc120c
    MOV dword ptr [ESI + EAX*0x1 + 0x20],0xffff ; 0042ef43
    MOV EAX,dword ptr [EDX]             ; 0042ef4b | DAT_01bc120c
    MOV dword ptr [ESI + EAX*0x1 + 0x24],0x0 ; 0042ef4d
    MOV EAX,dword ptr [EDX]             ; 0042ef55 | DAT_01bc120c
    ADD ESP,0x8                         ; 0042ef57
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0x0 ; 0042ef5a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0042ef62
    MOV dword ptr [ESP + 0x64],EAX      ; 0042ef69
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0042ef6d
    INC EAX                             ; 0042ef74
    LEA EBX,[ESP + 0x84]                ; 0042ef75
    MOV dword ptr [ESP + 0xd4],EAX      ; 0042ef7c
    LEA EAX,[ESP + 0x60]                ; 0042ef83
    FLD float ptr [EAX]                 ; 0042ef87
    FMUL float ptr [0x005fd5f0]         ; 0042ef89 | DAT_005fd5f0
    FISTP dword ptr [EBX]               ; 0042ef8f
    FLD float ptr [EAX + 0x4]           ; 0042ef91
    FMUL float ptr [0x005fd5f0]         ; 0042ef94 | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x4]         ; 0042ef9a
    FLD float ptr [EAX + 0x8]           ; 0042ef9d
    FMUL float ptr [0x005fd5f0]         ; 0042efa0 | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x8]         ; 0042efa6
    LEA EAX,[ESP + 0x84]                ; 0042efa9
    PUSH EAX                            ; 0042efb0
    MOV EAX,dword ptr [EDX]             ; 0042efb1 | DAT_01bc120c
    ADD EAX,EDI                         ; 0042efb3
    PUSH EAX                            ; 0042efb5
    CALL FUN_00580173                   ; 0042efb6
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    MOV EAX,[0x00612560]                ; 0042efbb | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 0042efc0 | DAT_01bc120c
    MOV dword ptr [EDX + EDI*0x1 + 0x20],0xffff ; 0042efc2
    MOV EDX,dword ptr [EAX]             ; 0042efca | DAT_01bc120c
    MOV dword ptr [EDX + EDI*0x1 + 0x24],0x0 ; 0042efcc
    ADD ESP,0x8                         ; 0042efd4
    MOV EDX,dword ptr [EAX]             ; 0042efd7 | DAT_01bc120c
    MOV EBX,dword ptr [ESP + 0xf0]      ; 0042efd9
    MOV dword ptr [EDX + EDI*0x1 + 0x28],0x0 ; 0042efe0
    TEST EBX,EBX                        ; 0042efe8
    JLE 0x0042f04e                      ; 0042efea
        ;   XREF to: 0042f04e (CONDITIONAL_JUMP)  ; LAB_0042f04e
    MOV dword ptr [ESP + 0xc],0x4       ; 0042efec
    MOV EDX,dword ptr [ESP + 0xf4]      ; 0042eff4
    SUB EDX,0x2                         ; 0042effb
    MOV dword ptr [ESP + 0x20],EDX      ; 0042effe
    MOV EDX,dword ptr [ESP + 0xf4]      ; 0042f002
    DEC EDX                             ; 0042f009
    MOV dword ptr [ESP + 0x24],EDX      ; 0042f00a
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0042f00e
    PUSH 0x4000                         ; 0042f015
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042f01a
    MOV EDX,dword ptr [ESP + 0xf8]      ; 0042f01e
    PUSH EAX                            ; 0042f025 | DAT_01bc120c
    MOV dword ptr [ESP + 0x34],EDX      ; 0042f026
    CALL FUN_00483de0                   ; 0042f02a
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 0042f02f
    MOV ECX,dword ptr [ESP + 0xe0]      ; 0042f032
    PUSH ECX                            ; 0042f039
    LEA EAX,[ESP + 0xc]                 ; 0042f03a
    PUSH EAX                            ; 0042f03e
    MOV EBX,dword ptr [0x00612560]      ; 0042f03f | DAT_00612560
    PUSH EBX                            ; 0042f045 | DAT_01bc120c
    CALL FUN_00482170                   ; 0042f046
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    ADD ESP,0xc                         ; 0042f04b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0042f04e
        ;   Label: LAB_0042f04e
    ADD ESI,0x60                        ; 0042f055
    INC EAX                             ; 0042f058
    ADD EDI,0x60                        ; 0042f059
    MOV dword ptr [ESP + 0xf0],EAX      ; 0042f05c
    CMP EAX,0x18                        ; 0042f063
    JLE 0x0042eeac                      ; 0042f066
        ;   XREF to: 0042eeac (CONDITIONAL_JUMP)  ; LAB_0042eeac
    LEA EBX,[ESP + 0x90]                ; 0042f06c
    MOV EAX,0x2c8af28                   ; 0042f073
    MOV EDX,dword ptr [0x00612560]      ; 0042f078 | DAT_00612560
    FLD float ptr [EAX]                 ; 0042f07e | DAT_02c8af28
    FMUL float ptr [0x005fd5f0]         ; 0042f080 | DAT_005fd5f0
    FISTP dword ptr [EBX]               ; 0042f086
    FLD float ptr [EAX + 0x4]           ; 0042f088 | DAT_02c8af2c
    FMUL float ptr [0x005fd5f0]         ; 0042f08b | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x4]         ; 0042f091
    FLD float ptr [EAX + 0x8]           ; 0042f094 | DAT_02c8af30
    FMUL float ptr [0x005fd5f0]         ; 0042f097 | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x8]         ; 0042f09d
    LEA EAX,[ESP + 0x90]                ; 0042f0a0
    PUSH EAX                            ; 0042f0a7
    MOV EAX,dword ptr [EDX]             ; 0042f0a8 | DAT_01bc120c
    PUSH EAX                            ; 0042f0aa
    CALL FUN_00580173                   ; 0042f0ab
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    MOV EAX,[0x00612560]                ; 0042f0b0 | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 0042f0b5 | DAT_01bc120c
    MOV dword ptr [EDX + 0x20],0xffff   ; 0042f0b7
    MOV EDX,dword ptr [EAX]             ; 0042f0be | DAT_01bc120c
    XOR ESI,ESI                         ; 0042f0c0
    MOV dword ptr [EDX + 0x24],0x0      ; 0042f0c2
    ADD ESP,0x8                         ; 0042f0c9
    MOV EAX,dword ptr [EAX]             ; 0042f0cc | DAT_01bc120c
    MOV EDI,0x30                        ; 0042f0ce
    MOV dword ptr [ESP + 0xd8],ESI      ; 0042f0d3
    MOV dword ptr [EAX + 0x28],0x0      ; 0042f0da
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0042f0e1
        ;   Label: LAB_0042f0e1
    MOV dword ptr [ESP + 0x108],EAX     ; 0042f0e8
    FILD dword ptr [ESP + 0x108]        ; 0042f0ef
    FMUL float ptr [0x005d59af]         ; 0042f0f6 | DAT_005d59af
    FMUL float ptr [0x005d59b3]         ; 0042f0fc | DAT_005d59b3
    FLD ST0                             ; 0042f102
    FSIN                                ; 0042f104
    FXCH                                ; 0042f106
    FCOS                                ; 0042f108
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042f10a
    FLD float ptr [EAX + 0x2fec]        ; 0042f10d
    FMULP ST2                           ; 0042f113
    FLD float ptr [EAX + 0x27b8]        ; 0042f115
    FMULP ST2                           ; 0042f11b
    FXCH                                ; 0042f11d
    FSTP float ptr [ESP + 0x60]         ; 0042f11f
    FMUL float ptr [EAX + 0x2fec]       ; 0042f123
    FMUL float ptr [EAX + 0x27b8]       ; 0042f129
    MOV EDX,dword ptr [0x00612560]      ; 0042f12f | DAT_00612560
    XOR EBX,EBX                         ; 0042f135
    LEA EAX,[ESP + 0x60]                ; 0042f137
    MOV dword ptr [ESP + 0x64],EBX      ; 0042f13b
    LEA EBX,[ESP + 0x48]                ; 0042f13f
    FSTP float ptr [ESP + 0x68]         ; 0042f143
    FLD float ptr [EAX]                 ; 0042f147
    FMUL float ptr [0x005fd5f0]         ; 0042f149 | DAT_005fd5f0
    FISTP dword ptr [EBX]               ; 0042f14f
    FLD float ptr [EAX + 0x4]           ; 0042f151
    FMUL float ptr [0x005fd5f0]         ; 0042f154 | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x4]         ; 0042f15a
    FLD float ptr [EAX + 0x8]           ; 0042f15d
    FMUL float ptr [0x005fd5f0]         ; 0042f160 | DAT_005fd5f0
    FISTP dword ptr [EBX + 0x8]         ; 0042f166
    LEA EAX,[ESP + 0x48]                ; 0042f169
    PUSH EAX                            ; 0042f16d
    MOV EAX,dword ptr [EDX]             ; 0042f16e | DAT_01bc120c
    ADD EAX,EDI                         ; 0042f170
    PUSH EAX                            ; 0042f172
    CALL FUN_00580173                   ; 0042f173
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; undefined FUN_00580173()
    MOV EAX,[0x00612560]                ; 0042f178 | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 0042f17d | DAT_01bc120c
    MOV dword ptr [EDX + EDI*0x1 + 0x20],0xffff ; 0042f17f
    MOV EDX,dword ptr [EAX]             ; 0042f187 | DAT_01bc120c
    MOV dword ptr [EDX + EDI*0x1 + 0x24],0x0 ; 0042f189
    MOV EDX,dword ptr [EAX]             ; 0042f191 | DAT_01bc120c
    ADD ESP,0x8                         ; 0042f193
    MOV dword ptr [EDX + EDI*0x1 + 0x28],0x0 ; 0042f196
    TEST ESI,ESI                        ; 0042f19e
    JLE 0x0042f1e5                      ; 0042f1a0
        ;   XREF to: 0042f1e5 (CONDITIONAL_JUMP)  ; LAB_0042f1e5
    MOV EDX,0x3                         ; 0042f1a2
    PUSH 0x4000                         ; 0042f1a7
    XOR ECX,ECX                         ; 0042f1ac
    MOV dword ptr [ESP + 0x10],EDX      ; 0042f1ae
    MOV dword ptr [ESP + 0x24],ECX      ; 0042f1b2
    LEA EDX,[ESI + -0x1]                ; 0042f1b6
    PUSH EAX                            ; 0042f1b9 | DAT_01bc120c
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042f1ba
    MOV dword ptr [ESP + 0x30],ESI      ; 0042f1be
    CALL FUN_00483de0                   ; 0042f1c2
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 0042f1c7
    MOV EBX,dword ptr [ESP + 0xe0]      ; 0042f1ca
    PUSH EBX                            ; 0042f1d1
    LEA EAX,[ESP + 0xc]                 ; 0042f1d2
    PUSH EAX                            ; 0042f1d6
    MOV EAX,[0x00612560]                ; 0042f1d7 | DAT_00612560
    PUSH EAX                            ; 0042f1dc | DAT_01bc120c
    CALL FUN_00482170                   ; 0042f1dd
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    ADD ESP,0xc                         ; 0042f1e2
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0042f1e5
        ;   Label: LAB_0042f1e5
    INC ESI                             ; 0042f1ec
    ADD EDX,0x2                         ; 0042f1ed
    ADD EDI,0x30                        ; 0042f1f0
    MOV dword ptr [ESP + 0xd8],EDX      ; 0042f1f3
    CMP ESI,0x18                        ; 0042f1fa
    JLE 0x0042f0e1                      ; 0042f1fd
        ;   XREF to: 0042f0e1 (CONDITIONAL_JUMP)  ; LAB_0042f0e1
    PUSH 0xffff                         ; 0042f203
    MOV ECX,dword ptr [0x00612560]      ; 0042f208 | DAT_00612560
    PUSH ECX                            ; 0042f20e | DAT_01bc120c
    CALL FUN_00483de0                   ; 0042f20f
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 0042f214
    MOV ESP,EBP                         ; 0042f217
    POP EBP                             ; 0042f219
    POP EDI                             ; 0042f21a
    POP ESI                             ; 0042f21b
    POP EBX                             ; 0042f21c
    RET                                 ; 0042f21d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042f21e
        ;   Label: LAB_0042f21e
    FLD float ptr [ESP + 0x4]           ; 0042f221
    FLD float ptr [EAX + 0x27b8]        ; 0042f225
    FMUL double ptr [0x005d59a7]        ; 0042f22b | DAT_005d59a7
    FADDP                               ; 0042f231
    FSTP float ptr [ESP + 0xd0]         ; 0042f233
    JMP 0x0042ee77                      ; 0042f23a
        ;   XREF to: 0042ee77 (UNCONDITIONAL_JUMP)  ; LAB_0042ee77

