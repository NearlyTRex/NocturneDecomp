; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00550da0(int param_1)
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
;   FUN_004ce580 at 004cf11d
;
; Referenced Globals:
;   undefined4 s_Bip01_Head_005f091d+1
;   undefined4 DAT_005f092e
;   undefined4 DAT_00605000
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061c010
;   undefined4 DAT_0061d95c
;   undefined4 DAT_0061dca4
;   undefined4 DAT_00622c18
;   undefined4 DAT_00622c28
;   undefined4 DAT_0062604c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01ccc3e8
;   ... and 15 more
;
; Called Functions:
;   FUN_00408b40
;   FUN_0045f3e0
;   FUN_00462820
;   FUN_00462ad0
;   FUN_00463360
;   FUN_00465da0
;   FUN_00465e30
;   FUN_004834b0
;   FUN_00483530
;   FUN_004839b0
;   FUN_00483e20
;   FUN_004b5100
;   FUN_004b7440
;   FUN_004e5c50
;   FUN_0054e3c0
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550da0
        ;   Label: FUN_00550da0
    PUSH ESI                            ; 00550da1
    PUSH EDI                            ; 00550da2
    PUSH EBP                            ; 00550da3
    MOV EBP,ESP                         ; 00550da4
    SUB ESP,0x74                        ; 00550da6
    MOV EBX,dword ptr [0x01d06ab4]      ; 00550da9 | DAT_01d06ab4
    MOV EBX,dword ptr [EBX*0x4 + 0x1d06aa4] ; 00550daf
    LEA ESI,[EBX + 0x158]               ; 00550db6
    MOV EDX,0x1ccc3e4                   ; 00550dbc
    PUSH ESI                            ; 00550dc1
    MOV dword ptr [EBP + -0x4],EDX      ; 00550dc2
    CALL FUN_00569f30                   ; 00550dc5
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 00550dca
    PUSH 0x0                            ; 00550dcd
    PUSH 0x5f091e                       ; 00550dcf | s_Bip01_Head_005f091d+1
    PUSH EAX                            ; 00550dd4
    MOV EDI,0x3ead0e56                  ; 00550dd5
    CALL FUN_005634f0                   ; 00550dda
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    MOV EDX,EAX                         ; 00550ddf
    SHL EAX,0x2                         ; 00550de1
    ADD ESI,0xe80                       ; 00550de4
    SUB EAX,EDX                         ; 00550dea
    ADD ESP,0xc                         ; 00550dec
    SHL EAX,0x4                         ; 00550def
    MOV dword ptr [EBP + -0x70],EDI     ; 00550df2
    ADD ESI,EAX                         ; 00550df5
    MOV EAX,0x3f400000                  ; 00550df7
    MOV dword ptr [EBP + -0x8],ESI      ; 00550dfc
    PUSH ESI                            ; 00550dff
    MOV dword ptr [EBP + -0x6c],EAX     ; 00550e00
    XOR ESI,ESI                         ; 00550e03
    LEA EAX,[EBP + -0x74]               ; 00550e05
    MOV dword ptr [EBP + -0x74],ESI     ; 00550e08
    PUSH EAX                            ; 00550e0b
    LEA ESI,[EBP + -0x5c]               ; 00550e0c
    LEA EDI,[EBP + -0x68]               ; 00550e0f
    CALL FUN_005b5080                   ; 00550e12
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 00550e17
    LEA EAX,[EBP + -0x68]               ; 00550e1a
    LEA ESI,[EBP + -0x5c]               ; 00550e1d
    PUSH EAX                            ; 00550e20
    MOVSD ES:EDI,ESI                    ; 00550e21
    MOVSD ES:EDI,ESI                    ; 00550e22
    MOVSD ES:EDI,ESI                    ; 00550e23
    PUSH EBX                            ; 00550e24
    LEA ESI,[EBP + -0x44]               ; 00550e25
    LEA EDI,[EBP + -0x14]               ; 00550e28
    CALL FUN_00408b40                   ; 00550e2b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[EBP + -0x44]               ; 00550e30
    MOV EDX,dword ptr [EBP + -0x8]      ; 00550e33
    ADD ESP,0x8                         ; 00550e36
    MOVSD ES:EDI,ESI                    ; 00550e39
    MOVSD ES:EDI,ESI                    ; 00550e3a
    MOVSD ES:EDI,ESI                    ; 00550e3b
    PUSH EDX                            ; 00550e3c
    LEA ESI,[EBP + -0x38]               ; 00550e3d
    LEA EDI,[EBP + -0x50]               ; 00550e40
    CALL FUN_005b5930                   ; 00550e43
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5930()
    LEA ESI,[EBP + -0x38]               ; 00550e48
    MOV EDX,0x1ccc3e4                   ; 00550e4b
    LEA EAX,[EBP + -0x14]               ; 00550e50
    XOR ECX,ECX                         ; 00550e53
    ADD ESP,0x4                         ; 00550e55
    MOV dword ptr [EBP + -0x1c],ECX     ; 00550e58
    MOV dword ptr [EBP + -0x18],ECX     ; 00550e5b
    MOVSD ES:EDI,ESI                    ; 00550e5e
    MOVSD ES:EDI,ESI                    ; 00550e5f
    MOVSD ES:EDI,ESI                    ; 00550e60
    MOV dword ptr [0x01cce0a0],ECX      ; 00550e61 | DAT_01cce0a0
    FLD float ptr [EBP + -0x50]         ; 00550e67
    FADD double ptr [0x005f092e]        ; 00550e6a | DAT_005f092e
    FLD float ptr [EBP + -0x4c]         ; 00550e70
    FXCH                                ; 00550e73
    FSTP float ptr [EBP + -0x20]        ; 00550e75
    FADD float ptr [EBX + 0x34]         ; 00550e78
    ADD EDX,0x4                         ; 00550e7b
    FSTP float ptr [EBP + -0x1c]        ; 00550e7e
    CMP EDX,EAX                         ; 00550e81
    JZ 0x00550e96                       ; 00550e83
        ;   XREF to: 00550e96 (CONDITIONAL_JUMP)  ; LAB_00550e96
    MOV EAX,dword ptr [EBP + -0x14]     ; 00550e85
    MOV dword ptr [EDX],EAX             ; 00550e88 | DAT_01ccc3e8
    MOV EAX,dword ptr [EBP + -0x10]     ; 00550e8a
    MOV dword ptr [EDX + 0x4],EAX       ; 00550e8d | DAT_01ccc3ec
    MOV EAX,dword ptr [EBP + -0xc]      ; 00550e90
    MOV dword ptr [EDX + 0x8],EAX       ; 00550e93 | DAT_01ccc3f0
    LEA EAX,[EBP + -0x20]               ; 00550e96
        ;   Label: LAB_00550e96
    PUSH EAX                            ; 00550e99
    MOV EAX,dword ptr [EBP + -0x4]      ; 00550e9a
    ADD EAX,0x10                        ; 00550e9d
    PUSH EAX                            ; 00550ea0
    CALL FUN_0045f3e0                   ; 00550ea1
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 00550ea6
    MOV EAX,dword ptr [EBP + -0x4]      ; 00550ea9
    PUSH 0x3f800000                     ; 00550eac
    MOV dword ptr [EAX + 0x140],0x42000000 ; 00550eb1 | DAT_01ccc524
    PUSH EAX                            ; 00550ebb
    MOV dword ptr [EAX + 0x38],0x41800000 ; 00550ebc | DAT_01ccc41c
    CALL FUN_00465da0                   ; 00550ec3
        ;   XREF to: 00465da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465da0()
    LEA EAX,[EBP + -0x14]               ; 00550ec8
    ADD ESP,0x8                         ; 00550ecb
    CMP EAX,0x1fe37f0                   ; 00550ece
    JZ 0x00550eed                       ; 00550ed3
        ;   XREF to: 00550eed (CONDITIONAL_JUMP)  ; LAB_00550eed
    MOV EAX,dword ptr [EBP + -0x14]     ; 00550ed5
    MOV [0x01fe37f0],EAX                ; 00550ed8 | DAT_01fe37f0
    MOV EAX,dword ptr [EBP + -0x10]     ; 00550edd
    MOV [0x01fe37f4],EAX                ; 00550ee0 | DAT_01fe37f4
    MOV EAX,dword ptr [EBP + -0xc]      ; 00550ee5
    MOV [0x01fe37f8],EAX                ; 00550ee8 | DAT_01fe37f8
    MOV EAX,[0x0061d95c]                ; 00550eed | DAT_0061d95c
        ;   Label: LAB_00550eed
    MOV EDX,dword ptr [EAX + 0x234]     ; 00550ef2 | DAT_01ccf5c4
    TEST EDX,EDX                        ; 00550ef8
    JNZ 0x005510b6                      ; 00550efa
        ;   XREF to: 005510b6 (CONDITIONAL_JUMP)  ; LAB_005510b6
    PUSH EDX                            ; 00550f00
    MOV ECX,dword ptr [EBP + -0x4]      ; 00550f01
    PUSH ECX                            ; 00550f04
    CALL FUN_00462820                   ; 00550f05
        ;   XREF to: 00462820 (UNCONDITIONAL_CALL)  ; undefined FUN_00462820()
    ADD ESP,0x8                         ; 00550f0a
    MOV EBX,dword ptr [EBP + -0x4]      ; 00550f0d
    PUSH EBX                            ; 00550f10
    CALL FUN_00463360                   ; 00550f11
        ;   XREF to: 00463360 (UNCONDITIONAL_CALL)  ; undefined FUN_00463360()
    ADD ESP,0x4                         ; 00550f16
    XOR ESI,ESI                         ; 00550f19
    PUSH ESI                            ; 00550f1b
    MOV EDI,dword ptr [EBP + 0x14]      ; 00550f1c
    PUSH dword ptr [EBX + 0x140]        ; 00550f1f | DAT_01ccc524
    PUSH EDI                            ; 00550f25
    MOV dword ptr [0x00622c28],ESI      ; 00550f26 | DAT_00622c28
    CALL FUN_0054e3c0                   ; 00550f2c
        ;   XREF to: 0054e3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e3c0()
    ADD ESP,0xc                         ; 00550f31
    PUSH -0x1                           ; 00550f34
    MOV EAX,0x1                         ; 00550f36
    PUSH EDI                            ; 00550f3b
    MOV [0x00622c28],EAX                ; 00550f3c | DAT_00622c28
    CALL FUN_005545a0                   ; 00550f41
        ;   XREF to: 005545a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005545a0()
    ADD ESP,0x8                         ; 00550f46
    PUSH 0x1                            ; 00550f49
    PUSH EDI                            ; 00550f4b
    CALL FUN_0054eef0                   ; 00550f4c
        ;   XREF to: 0054eef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eef0()
    ADD ESP,0x8                         ; 00550f51
    PUSH 0x1                            ; 00550f54
    PUSH EDI                            ; 00550f56
    CALL FUN_005545a0                   ; 00550f57
        ;   XREF to: 005545a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005545a0()
    MOV EDI,dword ptr [EDI + 0x15f6fc]  ; 00550f5c
    ADD ESP,0x8                         ; 00550f62
    TEST EDI,EDI                        ; 00550f65
    JLE 0x00550fb0                      ; 00550f67
        ;   XREF to: 00550fb0 (CONDITIONAL_JUMP)  ; LAB_00550fb0
    MOV EBX,dword ptr [EBP + 0x14]      ; 00550f69
    MOV EAX,dword ptr [EBX + 0x15f700]  ; 00550f6c
        ;   Label: LAB_00550f6c
    PUSH EAX                            ; 00550f72
    MOV EDX,dword ptr [EAX + 0x154]     ; 00550f73
    CALL dword ptr [EDX + 0x10]         ; 00550f79
    ADD ESP,0x4                         ; 00550f7c
    PUSH 0x1                            ; 00550f7f
    MOV ECX,dword ptr [0x00612560]      ; 00550f81 | DAT_00612560
    PUSH ECX                            ; 00550f87 | DAT_01bc120c
    CALL FUN_00483e20                   ; 00550f88
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e20()
    MOV EAX,dword ptr [EBP + 0x14]      ; 00550f8d
    ADD EBX,0x4                         ; 00550f90
    INC ESI                             ; 00550f93
    MOV EDI,dword ptr [EAX + 0x15f6fc]  ; 00550f94
    ADD ESP,0x8                         ; 00550f9a
    CMP ESI,EDI                         ; 00550f9d
    JL 0x00550f6c                       ; 00550f9f
        ;   XREF to: 00550f6c (CONDITIONAL_JUMP)  ; LAB_00550f6c
    LEA EAX,[EAX]                       ; 00550fa1
    LEA EDX,[EDX]                       ; 00550fa7
    LEA EAX,[EAX]                       ; 00550fad
    MOV EAX,[0x0061dca4]                ; 00550fb0 | DAT_0061dca4
        ;   Label: LAB_00550fb0
    PUSH EAX                            ; 00550fb5
    CALL FUN_004e5c50                   ; 00550fb6
        ;   XREF to: 004e5c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5c50()
    ADD ESP,0x4                         ; 00550fbb
    MOV EDX,dword ptr [0x0061c010]      ; 00550fbe | DAT_0061c010
    PUSH EDX                            ; 00550fc4
    CALL FUN_004b5100                   ; 00550fc5
        ;   XREF to: 004b5100 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5100()
    ADD ESP,0x4                         ; 00550fca
    PUSH 0x1                            ; 00550fcd
    MOV ECX,dword ptr [EBP + -0x4]      ; 00550fcf
    PUSH ECX                            ; 00550fd2
    CALL FUN_00462ad0                   ; 00550fd3
        ;   XREF to: 00462ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00462ad0()
    ADD ESP,0x8                         ; 00550fd8
    LEA EBX,[EBP + -0x2c]               ; 00550fdb
    LEA EAX,[EBP + -0x14]               ; 00550fde
    FLD float ptr [EAX]                 ; 00550fe1
    FMUL float ptr [0x00605000]         ; 00550fe3 | DAT_00605000
    FISTP dword ptr [EBX]               ; 00550fe9
    FLD float ptr [EAX + 0x4]           ; 00550feb
    FMUL float ptr [0x00605000]         ; 00550fee | DAT_00605000
    FISTP dword ptr [EBX + 0x4]         ; 00550ff4
    FLD float ptr [EAX + 0x8]           ; 00550ff7
    FMUL float ptr [0x00605000]         ; 00550ffa | DAT_00605000
    FISTP dword ptr [EBX + 0x8]         ; 00551000
    PUSH 0x0                            ; 00551003
    PUSH 0x0                            ; 00551005
    PUSH 0x0                            ; 00551007
    PUSH 0x0                            ; 00551009
    PUSH 0x0                            ; 0055100b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055100d
    PUSH EBX                            ; 00551010
    CALL FUN_00551c30                   ; 00551011
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00551c30()
    ADD ESP,0x18                        ; 00551016
    PUSH 0x0                            ; 00551019
    LEA EAX,[EBP + -0x2c]               ; 0055101b
    PUSH EAX                            ; 0055101e
    PUSH EBX                            ; 0055101f
    CALL FUN_00552490                   ; 00551020
        ;   XREF to: 00552490 (UNCONDITIONAL_CALL)  ; undefined FUN_00552490()
    MOV EDX,EAX                         ; 00551025
    SAR EDX,0x1f                        ; 00551027
    SHL EDX,0x7                         ; 0055102a
    SBB EAX,EDX                         ; 0055102d
    SAR EAX,0x7                         ; 0055102f
    ADD ESP,0xc                         ; 00551032
    MOV EDI,dword ptr [0x0061c010]      ; 00551035 | DAT_0061c010
    PUSH EDI                            ; 0055103b
    MOV ESI,EAX                         ; 0055103c
    CALL FUN_004b7440                   ; 0055103e
        ;   XREF to: 004b7440 (UNCONDITIONAL_CALL)  ; undefined FUN_004b7440()
    SHL EAX,0x7                         ; 00551043
    ADD ESI,EAX                         ; 00551046
    MOV EAX,[0x0062604c]                ; 00551048 | DAT_0062604c
    MOV EAX,dword ptr [EAX + 0x24]      ; 0055104d | DAT_02c997e4
    SHL EAX,0xf                         ; 00551050
    ADD ESI,EAX                         ; 00551053
    MOV EAX,[0x0061b49c]                ; 00551055 | DAT_0061b49c
    ADD ESP,0x4                         ; 0055105a
    CMP EAX,0xf0                        ; 0055105d
    JLE 0x00551137                      ; 00551062
        ;   XREF to: 00551137 (CONDITIONAL_JUMP)  ; LAB_00551137
    MOV EDX,dword ptr [EBP + -0x4]      ; 00551068
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0055106b | DAT_01cce0a4
    MOV EAX,[0x0061b498]                ; 00551071 | DAT_0061b498
    ADD EDX,EDX                         ; 00551076
    SUB EAX,EDX                         ; 00551078
    MOV EDX,EAX                         ; 0055107a
    SAR EDX,0x1f                        ; 0055107c
    SUB EAX,EDX                         ; 0055107f
    SAR EAX,0x1                         ; 00551081
    MOV EDX,dword ptr [EBP + -0x4]      ; 00551083
    MOV EBX,EAX                         ; 00551086
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 00551088 | DAT_01cce0a8
    MOV EAX,[0x0061b49c]                ; 0055108e | DAT_0061b49c
    ADD EDX,EDX                         ; 00551093
    SUB EAX,EDX                         ; 00551095
    MOV EDX,EAX                         ; 00551097
    SAR EDX,0x1f                        ; 00551099
        ;   Label: LAB_00551099
    SUB EAX,EDX                         ; 0055109c
    SAR EAX,0x1                         ; 0055109e
    PUSH ESI                            ; 005510a0
    PUSH EAX                            ; 005510a1
    PUSH EBX                            ; 005510a2
    MOV EAX,dword ptr [EBP + -0x4]      ; 005510a3
    PUSH EAX                            ; 005510a6
    CALL FUN_00465e30                   ; 005510a7
        ;   XREF to: 00465e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e30()
    ADD ESP,0x10                        ; 005510ac
    MOV ESP,EBP                         ; 005510af
    POP EBP                             ; 005510b1
    POP EDI                             ; 005510b2
    POP ESI                             ; 005510b3
    POP EBX                             ; 005510b4
    RET                                 ; 005510b5
    XOR EAX,EAX                         ; 005510b6
        ;   Label: LAB_005510b6
    MOV ESI,dword ptr [0x01c50948]      ; 005510b8 | DAT_01c50948
    MOV [0x01c50948],EAX                ; 005510be | DAT_01c50948
    LEA EAX,[EBP + -0x14]               ; 005510c3
    PUSH EAX                            ; 005510c6
    MOV EDX,dword ptr [0x00612560]      ; 005510c7 | DAT_00612560
    PUSH EDX                            ; 005510cd | DAT_01bc120c
    CALL FUN_004834b0                   ; 005510ce
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004834b0()
    ADD ESP,0x8                         ; 005510d3
    MOV ECX,dword ptr [0x00612560]      ; 005510d6 | DAT_00612560
    PUSH 0x42000000                     ; 005510dc
    PUSH ECX                            ; 005510e1 | DAT_01bc120c
    CALL FUN_004839b0                   ; 005510e2
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004839b0()
    ADD ESP,0x8                         ; 005510e7
    LEA EAX,[EBP + -0x20]               ; 005510ea
    PUSH EAX                            ; 005510ed
    MOV EBX,dword ptr [0x00612560]      ; 005510ee | DAT_00612560
    PUSH EBX                            ; 005510f4 | DAT_01bc120c
    MOV EDI,0x1                         ; 005510f5
    CALL FUN_00483530                   ; 005510fa
        ;   XREF to: 00483530 (UNCONDITIONAL_CALL)  ; undefined FUN_00483530()
    ADD ESP,0x8                         ; 005510ff
    MOV dword ptr [0x01fe5c1c],EDI      ; 00551102 | DAT_01fe5c1c
    CALL FUN_0057dca4                   ; 00551108
        ;   XREF to: 0057dca4 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dca4()
    PUSH 0x0                            ; 0055110d
    MOV EAX,[0x00622c18]                ; 0055110f | DAT_00622c18
    PUSH 0x461c3f9a                     ; 00551114
    PUSH EAX                            ; 00551119 | DAT_01e82168
    CALL FUN_0054e3c0                   ; 0055111a
        ;   XREF to: 0054e3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e3c0()
    ADD ESP,0xc                         ; 0055111f
    XOR EDX,EDX                         ; 00551122
    MOV dword ptr [0x01c50948],ESI      ; 00551124 | DAT_01c50948
    MOV dword ptr [0x01fe5c1c],EDX      ; 0055112a | DAT_01fe5c1c
    MOV ESP,EBP                         ; 00551130
    POP EBP                             ; 00551132
    POP EDI                             ; 00551133
    POP ESI                             ; 00551134
    POP EBX                             ; 00551135
    RET                                 ; 00551136
    MOV EAX,dword ptr [EBP + -0x4]      ; 00551137
        ;   Label: LAB_00551137
    MOV EDX,dword ptr [0x0061b498]      ; 0055113a | DAT_0061b498
    MOV ECX,dword ptr [EAX + 0x1cc0]    ; 00551140 | DAT_01cce0a4
    SUB EDX,ECX                         ; 00551146
    MOV EAX,EDX                         ; 00551148
    SAR EDX,0x1f                        ; 0055114a
    SUB EAX,EDX                         ; 0055114d
    SAR EAX,0x1                         ; 0055114f
    MOV EBX,EAX                         ; 00551151
    MOV EAX,dword ptr [EBP + -0x4]      ; 00551153
    MOV EDX,dword ptr [0x0061b49c]      ; 00551156 | DAT_0061b49c
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 0055115c | DAT_01cce0a8
    SUB EDX,EDI                         ; 00551162
    MOV EAX,EDX                         ; 00551164
    JMP 0x00551099                      ; 00551166
        ;   XREF to: 00551099 (UNCONDITIONAL_JUMP)  ; LAB_00551099

