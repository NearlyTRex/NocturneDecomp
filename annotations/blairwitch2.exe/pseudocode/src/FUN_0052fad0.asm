; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052fad0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x54]:1  local_54
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004b5190 at 004b5d43
;
; Referenced Globals:
;   undefined4 s_Bip01_Head_005e58f9+1
;   undefined4 DAT_005e590a
;   undefined4 DAT_005fb210
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_00614d30
;   undefined4 DAT_00616494
;   undefined4 DAT_006167e0
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_0061b5b8
;   undefined4 DAT_0061e8f4
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c37788
;   undefined4 DAT_01cb3954
;   ... and 14 more
;
; Called Functions:
;   FUN_00408d70
;   FUN_00449280
;   FUN_0044a020
;   FUN_0044a2d0
;   FUN_0044ab60
;   FUN_0044d570
;   FUN_0044d600
;   FUN_0046afb0
;   FUN_0046b030
;   FUN_0046b4b0
;   FUN_0046b920
;   FUN_0049c780
;   FUN_0049eb50
;   FUN_004c9440
;   FUN_0052d0e0
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052fad0
        ;   Label: FUN_0052fad0
    PUSH ESI                            ; 0052fad1
    PUSH EDI                            ; 0052fad2
    PUSH EBP                            ; 0052fad3
    MOV EBP,ESP                         ; 0052fad4
    SUB ESP,0x74                        ; 0052fad6
    MOV EBX,dword ptr [0x01cedef4]      ; 0052fad9 | DAT_01cedef4
    MOV EBX,dword ptr [EBX*0x4 + 0x1cedee4] ; 0052fadf
    LEA ESI,[EBX + 0x2b4]               ; 0052fae6
    MOV EDX,0x1cb3950                   ; 0052faec
    PUSH ESI                            ; 0052faf1
    MOV dword ptr [EBP + -0x4],EDX      ; 0052faf2
    CALL FUN_00547890                   ; 0052faf5
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 0052fafa
    PUSH 0x0                            ; 0052fafd
    PUSH 0x5e58fa                       ; 0052faff | s_Bip01_Head_005e58f9+1
    PUSH EAX                            ; 0052fb04
    MOV EDI,0x3ead0e56                  ; 0052fb05
    CALL FUN_00540e80                   ; 0052fb0a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    MOV EDX,EAX                         ; 0052fb0f
    SHL EAX,0x2                         ; 0052fb11
    ADD ESI,0xe80                       ; 0052fb14
    SUB EAX,EDX                         ; 0052fb1a
    ADD ESP,0xc                         ; 0052fb1c
    SHL EAX,0x4                         ; 0052fb1f
    MOV dword ptr [EBP + -0x70],EDI     ; 0052fb22
    ADD ESI,EAX                         ; 0052fb25
    MOV EAX,0x3f400000                  ; 0052fb27
    MOV dword ptr [EBP + -0x8],ESI      ; 0052fb2c
    PUSH ESI                            ; 0052fb2f
    MOV dword ptr [EBP + -0x6c],EAX     ; 0052fb30
    XOR ESI,ESI                         ; 0052fb33
    LEA EAX,[EBP + -0x74]               ; 0052fb35
    MOV dword ptr [EBP + -0x74],ESI     ; 0052fb38
    PUSH EAX                            ; 0052fb3b
    LEA ESI,[EBP + -0x5c]               ; 0052fb3c
    LEA EDI,[EBP + -0x68]               ; 0052fb3f
    CALL FUN_00591530                   ; 0052fb42
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 0052fb47
    LEA EAX,[EBP + -0x68]               ; 0052fb4a
    LEA ESI,[EBP + -0x5c]               ; 0052fb4d
    PUSH EAX                            ; 0052fb50
    MOVSD ES:EDI,ESI                    ; 0052fb51
    MOVSD ES:EDI,ESI                    ; 0052fb52
    MOVSD ES:EDI,ESI                    ; 0052fb53
    PUSH EBX                            ; 0052fb54
    LEA ESI,[EBP + -0x44]               ; 0052fb55
    LEA EDI,[EBP + -0x14]               ; 0052fb58
    CALL FUN_00408d70                   ; 0052fb5b
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[EBP + -0x44]               ; 0052fb60
    MOV EDX,dword ptr [EBP + -0x8]      ; 0052fb63
    ADD ESP,0x8                         ; 0052fb66
    MOVSD ES:EDI,ESI                    ; 0052fb69
    MOVSD ES:EDI,ESI                    ; 0052fb6a
    MOVSD ES:EDI,ESI                    ; 0052fb6b
    PUSH EDX                            ; 0052fb6c
    LEA ESI,[EBP + -0x38]               ; 0052fb6d
    LEA EDI,[EBP + -0x50]               ; 0052fb70
    CALL FUN_00591de0                   ; 0052fb73
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591de0()
    LEA ESI,[EBP + -0x38]               ; 0052fb78
    MOV EDX,0x1cb3950                   ; 0052fb7b
    LEA EAX,[EBP + -0x14]               ; 0052fb80
    XOR ECX,ECX                         ; 0052fb83
    ADD ESP,0x4                         ; 0052fb85
    MOV dword ptr [EBP + -0x1c],ECX     ; 0052fb88
    MOV dword ptr [EBP + -0x18],ECX     ; 0052fb8b
    MOVSD ES:EDI,ESI                    ; 0052fb8e
    MOVSD ES:EDI,ESI                    ; 0052fb8f
    MOVSD ES:EDI,ESI                    ; 0052fb90
    MOV dword ptr [0x01cb560c],ECX      ; 0052fb91 | DAT_01cb560c
    FLD float ptr [EBP + -0x50]         ; 0052fb97
    FADD double ptr [0x005e590a]        ; 0052fb9a | DAT_005e590a
    FLD float ptr [EBP + -0x4c]         ; 0052fba0
    FXCH                                ; 0052fba3
    FSTP float ptr [EBP + -0x20]        ; 0052fba5
    FADD float ptr [EBX + 0x34]         ; 0052fba8
    ADD EDX,0x4                         ; 0052fbab
    FSTP float ptr [EBP + -0x1c]        ; 0052fbae
    CMP EDX,EAX                         ; 0052fbb1
    JZ 0x0052fbc6                       ; 0052fbb3
        ;   XREF to: 0052fbc6 (CONDITIONAL_JUMP)  ; LAB_0052fbc6
    MOV EAX,dword ptr [EBP + -0x14]     ; 0052fbb5
    MOV dword ptr [EDX],EAX             ; 0052fbb8 | DAT_01cb3954
    MOV EAX,dword ptr [EBP + -0x10]     ; 0052fbba
    MOV dword ptr [EDX + 0x4],EAX       ; 0052fbbd | DAT_01cb3958
    MOV EAX,dword ptr [EBP + -0xc]      ; 0052fbc0
    MOV dword ptr [EDX + 0x8],EAX       ; 0052fbc3 | DAT_01cb395c
    LEA EAX,[EBP + -0x20]               ; 0052fbc6
        ;   Label: LAB_0052fbc6
    PUSH EAX                            ; 0052fbc9
    MOV EAX,dword ptr [EBP + -0x4]      ; 0052fbca
    ADD EAX,0x10                        ; 0052fbcd
    PUSH EAX                            ; 0052fbd0
    CALL FUN_00449280                   ; 0052fbd1
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 0052fbd6
    MOV EAX,dword ptr [EBP + -0x4]      ; 0052fbd9
    PUSH 0x3f800000                     ; 0052fbdc
    MOV dword ptr [EAX + 0x140],0x42000000 ; 0052fbe1 | DAT_01cb3a90
    PUSH EAX                            ; 0052fbeb
    MOV dword ptr [EAX + 0x38],0x41800000 ; 0052fbec | DAT_01cb3988
    CALL FUN_0044d570                   ; 0052fbf3
        ;   XREF to: 0044d570 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d570()
    LEA EAX,[EBP + -0x14]               ; 0052fbf8
    ADD ESP,0x8                         ; 0052fbfb
    CMP EAX,0x1fc783c                   ; 0052fbfe
    JZ 0x0052fc1d                       ; 0052fc03
        ;   XREF to: 0052fc1d (CONDITIONAL_JUMP)  ; LAB_0052fc1d
    MOV EAX,dword ptr [EBP + -0x14]     ; 0052fc05
    MOV [0x01fc783c],EAX                ; 0052fc08 | DAT_01fc783c
    MOV EAX,dword ptr [EBP + -0x10]     ; 0052fc0d
    MOV [0x01fc7840],EAX                ; 0052fc10 | DAT_01fc7840
    MOV EAX,dword ptr [EBP + -0xc]      ; 0052fc15
    MOV [0x01fc7844],EAX                ; 0052fc18 | DAT_01fc7844
    MOV EAX,[0x00616494]                ; 0052fc1d | DAT_00616494
        ;   Label: LAB_0052fc1d
    MOV EDX,dword ptr [EAX + 0x234]     ; 0052fc22 | DAT_01cb6b34
    TEST EDX,EDX                        ; 0052fc28
    JNZ 0x0052fde6                      ; 0052fc2a
        ;   XREF to: 0052fde6 (CONDITIONAL_JUMP)  ; LAB_0052fde6
    PUSH EDX                            ; 0052fc30
    MOV ECX,dword ptr [EBP + -0x4]      ; 0052fc31
    PUSH ECX                            ; 0052fc34
    CALL FUN_0044a020                   ; 0052fc35
        ;   XREF to: 0044a020 (UNCONDITIONAL_CALL)  ; undefined FUN_0044a020()
    ADD ESP,0x8                         ; 0052fc3a
    MOV EBX,dword ptr [EBP + -0x4]      ; 0052fc3d
    PUSH EBX                            ; 0052fc40
    CALL FUN_0044ab60                   ; 0052fc41
        ;   XREF to: 0044ab60 (UNCONDITIONAL_CALL)  ; undefined FUN_0044ab60()
    ADD ESP,0x4                         ; 0052fc46
    XOR ESI,ESI                         ; 0052fc49
    PUSH ESI                            ; 0052fc4b
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052fc4c
    PUSH dword ptr [EBX + 0x140]        ; 0052fc4f | DAT_01cb3a90
    PUSH EDI                            ; 0052fc55
    MOV dword ptr [0x0061b5b8],ESI      ; 0052fc56 | DAT_0061b5b8
    CALL FUN_0052d0e0                   ; 0052fc5c
        ;   XREF to: 0052d0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d0e0()
    ADD ESP,0xc                         ; 0052fc61
    PUSH -0x1                           ; 0052fc64
    MOV EAX,0x1                         ; 0052fc66
    PUSH EDI                            ; 0052fc6b
    MOV [0x0061b5b8],EAX                ; 0052fc6c | DAT_0061b5b8
    CALL FUN_005332f0                   ; 0052fc71
        ;   XREF to: 005332f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005332f0()
    ADD ESP,0x8                         ; 0052fc76
    PUSH 0x1                            ; 0052fc79
    PUSH EDI                            ; 0052fc7b
    CALL FUN_0052dc10                   ; 0052fc7c
        ;   XREF to: 0052dc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0052dc10()
    ADD ESP,0x8                         ; 0052fc81
    PUSH 0x1                            ; 0052fc84
    PUSH EDI                            ; 0052fc86
    CALL FUN_005332f0                   ; 0052fc87
        ;   XREF to: 005332f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005332f0()
    MOV EDI,dword ptr [EDI + 0x15f6f8]  ; 0052fc8c
    ADD ESP,0x8                         ; 0052fc92
    TEST EDI,EDI                        ; 0052fc95
    JLE 0x0052fce0                      ; 0052fc97
        ;   XREF to: 0052fce0 (CONDITIONAL_JUMP)  ; LAB_0052fce0
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052fc99
    MOV EAX,dword ptr [EBX + 0x15f6fc]  ; 0052fc9c
        ;   Label: LAB_0052fc9c
    PUSH EAX                            ; 0052fca2
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0052fca3
    CALL dword ptr [EDX + 0x18]         ; 0052fca9
    ADD ESP,0x4                         ; 0052fcac
    PUSH 0x1                            ; 0052fcaf
    MOV ECX,dword ptr [0x0060b280]      ; 0052fcb1 | DAT_0060b280
    PUSH ECX                            ; 0052fcb7 | DAT_01ba5c50
    CALL FUN_0046b920                   ; 0052fcb8
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b920()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052fcbd
    ADD EBX,0x4                         ; 0052fcc0
    INC ESI                             ; 0052fcc3
    MOV EDI,dword ptr [EAX + 0x15f6f8]  ; 0052fcc4
    ADD ESP,0x8                         ; 0052fcca
    CMP ESI,EDI                         ; 0052fccd
    JL 0x0052fc9c                       ; 0052fccf
        ;   XREF to: 0052fc9c (CONDITIONAL_JUMP)  ; LAB_0052fc9c
    LEA EAX,[EAX]                       ; 0052fcd1
    LEA EDX,[EDX]                       ; 0052fcd7
    LEA EAX,[EAX]                       ; 0052fcdd
    MOV EAX,[0x006167e0]                ; 0052fce0 | DAT_006167e0
        ;   Label: LAB_0052fce0
    PUSH EAX                            ; 0052fce5
    CALL FUN_004c9440                   ; 0052fce6
        ;   XREF to: 004c9440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9440()
    ADD ESP,0x4                         ; 0052fceb
    MOV EDX,dword ptr [0x00614d30]      ; 0052fcee | DAT_00614d30
    PUSH EDX                            ; 0052fcf4
    CALL FUN_0049c780                   ; 0052fcf5
        ;   XREF to: 0049c780 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c780()
    ADD ESP,0x4                         ; 0052fcfa
    PUSH 0x1                            ; 0052fcfd
    MOV ECX,dword ptr [EBP + -0x4]      ; 0052fcff
    PUSH ECX                            ; 0052fd02
    CALL FUN_0044a2d0                   ; 0052fd03
        ;   XREF to: 0044a2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044a2d0()
    ADD ESP,0x8                         ; 0052fd08
    LEA EBX,[EBP + -0x2c]               ; 0052fd0b
    LEA EAX,[EBP + -0x14]               ; 0052fd0e
    FLD float ptr [EAX]                 ; 0052fd11
    FMUL float ptr [0x005fb210]         ; 0052fd13 | DAT_005fb210
    FISTP dword ptr [EBX]               ; 0052fd19
    FLD float ptr [EAX + 0x4]           ; 0052fd1b
    FMUL float ptr [0x005fb210]         ; 0052fd1e | DAT_005fb210
    FISTP dword ptr [EBX + 0x4]         ; 0052fd24
    FLD float ptr [EAX + 0x8]           ; 0052fd27
    FMUL float ptr [0x005fb210]         ; 0052fd2a | DAT_005fb210
    FISTP dword ptr [EBX + 0x8]         ; 0052fd30
    PUSH 0x0                            ; 0052fd33
    PUSH 0x0                            ; 0052fd35
    PUSH 0x0                            ; 0052fd37
    PUSH 0x0                            ; 0052fd39
    PUSH 0x0                            ; 0052fd3b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052fd3d
    PUSH EBX                            ; 0052fd40
    CALL FUN_00530980                   ; 0052fd41
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; undefined FUN_00530980()
    ADD ESP,0x18                        ; 0052fd46
    PUSH 0x0                            ; 0052fd49
    LEA EAX,[EBP + -0x2c]               ; 0052fd4b
    PUSH EAX                            ; 0052fd4e
    PUSH EBX                            ; 0052fd4f
    CALL FUN_005311e0                   ; 0052fd50
        ;   XREF to: 005311e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005311e0()
    MOV EDX,EAX                         ; 0052fd55
    SAR EDX,0x1f                        ; 0052fd57
    SHL EDX,0x7                         ; 0052fd5a
    SBB EAX,EDX                         ; 0052fd5d
    SAR EAX,0x7                         ; 0052fd5f
    ADD ESP,0xc                         ; 0052fd62
    MOV EDI,dword ptr [0x00614d30]      ; 0052fd65 | DAT_00614d30
    PUSH EDI                            ; 0052fd6b
    MOV ESI,EAX                         ; 0052fd6c
    CALL FUN_0049eb50                   ; 0052fd6e
        ;   XREF to: 0049eb50 (UNCONDITIONAL_CALL)  ; undefined FUN_0049eb50()
    SHL EAX,0x7                         ; 0052fd73
    ADD ESI,EAX                         ; 0052fd76
    MOV EAX,[0x0061e8f4]                ; 0052fd78 | DAT_0061e8f4
    MOV EAX,dword ptr [EAX + 0x24]      ; 0052fd7d | DAT_02661fa4
    SHL EAX,0xf                         ; 0052fd80
    ADD ESI,EAX                         ; 0052fd83
    MOV EAX,[0x006141bc]                ; 0052fd85 | DAT_006141bc
    ADD ESP,0x4                         ; 0052fd8a
    CMP EAX,0xf0                        ; 0052fd8d
    JLE 0x0052fe67                      ; 0052fd92
        ;   XREF to: 0052fe67 (CONDITIONAL_JUMP)  ; LAB_0052fe67
    MOV EDX,dword ptr [EBP + -0x4]      ; 0052fd98
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0052fd9b | DAT_01cb5610
    MOV EAX,[0x006141b8]                ; 0052fda1 | DAT_006141b8
    ADD EDX,EDX                         ; 0052fda6
    SUB EAX,EDX                         ; 0052fda8
    MOV EDX,EAX                         ; 0052fdaa
    SAR EDX,0x1f                        ; 0052fdac
    SUB EAX,EDX                         ; 0052fdaf
    SAR EAX,0x1                         ; 0052fdb1
    MOV EDX,dword ptr [EBP + -0x4]      ; 0052fdb3
    MOV EBX,EAX                         ; 0052fdb6
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 0052fdb8 | DAT_01cb5614
    MOV EAX,[0x006141bc]                ; 0052fdbe | DAT_006141bc
    ADD EDX,EDX                         ; 0052fdc3
    SUB EAX,EDX                         ; 0052fdc5
    MOV EDX,EAX                         ; 0052fdc7
    SAR EDX,0x1f                        ; 0052fdc9
        ;   Label: LAB_0052fdc9
    SUB EAX,EDX                         ; 0052fdcc
    SAR EAX,0x1                         ; 0052fdce
    PUSH ESI                            ; 0052fdd0
    PUSH EAX                            ; 0052fdd1
    PUSH EBX                            ; 0052fdd2
    MOV EAX,dword ptr [EBP + -0x4]      ; 0052fdd3
    PUSH EAX                            ; 0052fdd6
    CALL FUN_0044d600                   ; 0052fdd7
        ;   XREF to: 0044d600 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d600()
    ADD ESP,0x10                        ; 0052fddc
    MOV ESP,EBP                         ; 0052fddf
    POP EBP                             ; 0052fde1
    POP EDI                             ; 0052fde2
    POP ESI                             ; 0052fde3
    POP EBX                             ; 0052fde4
    RET                                 ; 0052fde5
    XOR EAX,EAX                         ; 0052fde6
        ;   Label: LAB_0052fde6
    MOV ESI,dword ptr [0x01c37788]      ; 0052fde8 | DAT_01c37788
    MOV [0x01c37788],EAX                ; 0052fdee | DAT_01c37788
    LEA EAX,[EBP + -0x14]               ; 0052fdf3
    PUSH EAX                            ; 0052fdf6
    MOV EDX,dword ptr [0x0060b280]      ; 0052fdf7 | DAT_0060b280
    PUSH EDX                            ; 0052fdfd | DAT_01ba5c50
    CALL FUN_0046afb0                   ; 0052fdfe
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046afb0()
    ADD ESP,0x8                         ; 0052fe03
    MOV ECX,dword ptr [0x0060b280]      ; 0052fe06 | DAT_0060b280
    PUSH 0x42000000                     ; 0052fe0c
    PUSH ECX                            ; 0052fe11 | DAT_01ba5c50
    CALL FUN_0046b4b0                   ; 0052fe12
        ;   XREF to: 0046b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b4b0()
    ADD ESP,0x8                         ; 0052fe17
    LEA EAX,[EBP + -0x20]               ; 0052fe1a
    PUSH EAX                            ; 0052fe1d
    MOV EBX,dword ptr [0x0060b280]      ; 0052fe1e | DAT_0060b280
    PUSH EBX                            ; 0052fe24 | DAT_01ba5c50
    MOV EDI,0x1                         ; 0052fe25
    CALL FUN_0046b030                   ; 0052fe2a
        ;   XREF to: 0046b030 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b030()
    ADD ESP,0x8                         ; 0052fe2f
    MOV dword ptr [0x01fc9c68],EDI      ; 0052fe32 | DAT_01fc9c68
    CALL FUN_0055b254                   ; 0052fe38
        ;   XREF to: 0055b254 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b254()
    PUSH 0x0                            ; 0052fe3d
    MOV EAX,[0x0061b5a8]                ; 0052fe3f | DAT_0061b5a8
    PUSH 0x461c3f9a                     ; 0052fe44
    PUSH EAX                            ; 0052fe49
    CALL FUN_0052d0e0                   ; 0052fe4a
        ;   XREF to: 0052d0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d0e0()
    ADD ESP,0xc                         ; 0052fe4f
    XOR EDX,EDX                         ; 0052fe52
    MOV dword ptr [0x01c37788],ESI      ; 0052fe54 | DAT_01c37788
    MOV dword ptr [0x01fc9c68],EDX      ; 0052fe5a | DAT_01fc9c68
    MOV ESP,EBP                         ; 0052fe60
    POP EBP                             ; 0052fe62
    POP EDI                             ; 0052fe63
    POP ESI                             ; 0052fe64
    POP EBX                             ; 0052fe65
    RET                                 ; 0052fe66
    MOV EAX,dword ptr [EBP + -0x4]      ; 0052fe67
        ;   Label: LAB_0052fe67
    MOV EDX,dword ptr [0x006141b8]      ; 0052fe6a | DAT_006141b8
    MOV ECX,dword ptr [EAX + 0x1cc0]    ; 0052fe70 | DAT_01cb5610
    SUB EDX,ECX                         ; 0052fe76
    MOV EAX,EDX                         ; 0052fe78
    SAR EDX,0x1f                        ; 0052fe7a
    SUB EAX,EDX                         ; 0052fe7d
    SAR EAX,0x1                         ; 0052fe7f
    MOV EBX,EAX                         ; 0052fe81
    MOV EAX,dword ptr [EBP + -0x4]      ; 0052fe83
    MOV EDX,dword ptr [0x006141bc]      ; 0052fe86 | DAT_006141bc
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 0052fe8c | DAT_01cb5614
    SUB EDX,EDI                         ; 0052fe92
    MOV EAX,EDX                         ; 0052fe94
    JMP 0x0052fdc9                      ; 0052fe96
        ;   XREF to: 0052fdc9 (UNCONDITIONAL_JUMP)  ; LAB_0052fdc9

