; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00528c80(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined1       Stack[-0x29c]:1  local_29c
; undefined1       Stack[-0x29b]:1  local_29b
; undefined        Stack[-0x184]:1  local_184
; undefined1       Stack[-0x183]:1  local_183
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004be2d0 at 004be498
;
; Referenced Globals:
;   string s_DeviceName_00593a80
;   undefined4 DAT_00593a8b
;   string s_Channels_00593a90
;   undefined4 DAT_00593a99
;   string s_HwMixingEnabled_00593a9c
;   string s_MaxSwLatency_00593aac
;   undefined4 DAT_00593ab9
;   string s_SfxChannel%dEnabled_00593abe
;   string s_SfxChannel%dVol_00593ad2
;   undefined4 DAT_005bea60
;   undefined4 DAT_005bea74
;   undefined4 DAT_005beba0
;   undefined4 DAT_005beba4
;
; Called Functions:
;   FUN_004bd9a0
;   FUN_004bda80
;   FUN_004bdb20
;   FUN_00526ca0
;   FUN_00527380
;   FUN_00527490
;   FUN_00528160
;   FUN_00528230
;   FUN_005282c0
;   FUN_005284e0
;   FUN_00528970
;   FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528c80
        ;   Label: FUN_00528c80
    PUSH ESI                            ; 00528c81
    PUSH EDI                            ; 00528c82
    PUSH EBP                            ; 00528c83
    SUB ESP,0x28c                       ; 00528c84
    MOV EBP,dword ptr [ESP + 0x2a0]     ; 00528c8a
    MOV ECX,0x40                        ; 00528c91
    LEA EDI,[ESP + 0x118]               ; 00528c96
    MOV ESI,0x5beba0                    ; 00528c9d | DAT_005beba0
    MOV EDX,dword ptr [0x005bea74]      ; 00528ca2 | DAT_005bea74
    MOVSD.REP ES:EDI,ESI                ; 00528ca8 | DAT_005beba0 | DAT_005beba4
    TEST EDX,EDX                        ; 00528caa
    JL 0x00528cec                       ; 00528cac
        ;   XREF to: 00528cec (CONDITIONAL_JUMP)  ; LAB_00528cec
    CALL FUN_00528230                   ; 00528cae
        ;   XREF to: 00528230 (UNCONDITIONAL_CALL)  ; undefined FUN_00528230()
    MOV ECX,dword ptr [0x005bea74]      ; 00528cb3 | DAT_005bea74
    CMP EAX,ECX                         ; 00528cb9
    JLE 0x00528cec                      ; 00528cbb
        ;   XREF to: 00528cec (CONDITIONAL_JUMP)  ; LAB_00528cec
    MOV EAX,ESP                         ; 00528cbd
    PUSH EAX                            ; 00528cbf
    PUSH ECX                            ; 00528cc0
    CALL FUN_005282c0                   ; 00528cc1
        ;   XREF to: 005282c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005282c0()
    ADD ESP,0x8                         ; 00528cc6
    MOV ESI,ESP                         ; 00528cc9
    LEA EDI,[ESP + 0x118]               ; 00528ccb
    PUSH EDI                            ; 00528cd2
    MOV AL,byte ptr [ESI]               ; 00528cd3
        ;   Label: LAB_00528cd3
    MOV byte ptr [EDI],AL               ; 00528cd5
    CMP AL,0x0                          ; 00528cd7
    JZ 0x00528ceb                       ; 00528cd9
        ;   XREF to: 00528ceb (CONDITIONAL_JUMP)  ; LAB_00528ceb
    MOV AL,byte ptr [ESI + 0x1]         ; 00528cdb
    ADD ESI,0x2                         ; 00528cde
    MOV byte ptr [EDI + 0x1],AL         ; 00528ce1
    ADD EDI,0x2                         ; 00528ce4
    CMP AL,0x0                          ; 00528ce7
    JNZ 0x00528cd3                      ; 00528ce9
        ;   XREF to: 00528cd3 (CONDITIONAL_JUMP)  ; LAB_00528cd3
    POP EDI                             ; 00528ceb
        ;   Label: LAB_00528ceb
    LEA EAX,[ESP + 0x118]               ; 00528cec
        ;   Label: LAB_00528cec
    PUSH EAX                            ; 00528cf3
    PUSH 0x593a80                       ; 00528cf4 | = "DeviceName"
    PUSH EBP                            ; 00528cf9
    CALL FUN_004bd9a0                   ; 00528cfa
        ;   XREF to: 004bd9a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bd9a0()
    ADD ESP,0xc                         ; 00528cff
    LEA EAX,[ESP + 0x280]               ; 00528d02
    PUSH EAX                            ; 00528d09
    LEA EAX,[ESP + 0x280]               ; 00528d0a
    PUSH EAX                            ; 00528d11
    LEA EAX,[ESP + 0x28c]               ; 00528d12
    PUSH EAX                            ; 00528d19
    CALL FUN_00528160                   ; 00528d1a
        ;   XREF to: 00528160 (UNCONDITIONAL_CALL)  ; undefined FUN_00528160()
    ADD ESP,0xc                         ; 00528d1f
    MOV ESI,dword ptr [ESP + 0x284]     ; 00528d22
    PUSH ESI                            ; 00528d29
    PUSH 0x593a8b                       ; 00528d2a | DAT_00593a8b
    PUSH EBP                            ; 00528d2f
    CALL FUN_004bda80                   ; 00528d30
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined FUN_004bda80()
    ADD ESP,0xc                         ; 00528d35
    MOV EDI,dword ptr [ESP + 0x27c]     ; 00528d38
    PUSH EDI                            ; 00528d3f
    PUSH 0x593a90                       ; 00528d40 | = "Channels"
    PUSH EBP                            ; 00528d45
    CALL FUN_004bda80                   ; 00528d46
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined FUN_004bda80()
    ADD ESP,0xc                         ; 00528d4b
    MOV EAX,dword ptr [ESP + 0x280]     ; 00528d4e
    PUSH EAX                            ; 00528d55
    PUSH 0x593a99                       ; 00528d56 | DAT_00593a99
    PUSH EBP                            ; 00528d5b
    CALL FUN_004bda80                   ; 00528d5c
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined FUN_004bda80()
    ADD ESP,0xc                         ; 00528d61
    CALL FUN_005284e0                   ; 00528d64
        ;   XREF to: 005284e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005284e0()
    PUSH EAX                            ; 00528d69
    PUSH 0x593a9c                       ; 00528d6a | = "HwMixingEnabled"
    PUSH EBP                            ; 00528d6f
    CALL FUN_004bda80                   ; 00528d70
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined FUN_004bda80()
    ADD ESP,0xc                         ; 00528d75
    CALL FUN_00528970                   ; 00528d78
        ;   XREF to: 00528970 (UNCONDITIONAL_CALL)  ; undefined FUN_00528970()
    MOV dword ptr [ESP + 0x288],EAX     ; 00528d7d
    FLD float ptr [ESP + 0x288]         ; 00528d84
    SUB ESP,0x4                         ; 00528d8b
    FSTP float ptr [ESP]                ; 00528d8e
    PUSH 0x593aac                       ; 00528d91 | = "MaxSwLatency"
    PUSH EBP                            ; 00528d96
    CALL FUN_004bdb20                   ; 00528d97
        ;   XREF to: 004bdb20 (UNCONDITIONAL_CALL)  ; undefined FUN_004bdb20()
    ADD ESP,0xc                         ; 00528d9c
    CALL FUN_00526ca0                   ; 00528d9f
        ;   XREF to: 00526ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00526ca0()
    PUSH EAX                            ; 00528da4
    PUSH 0x593ab9                       ; 00528da5 | DAT_00593ab9
    PUSH EBP                            ; 00528daa
    XOR EBX,EBX                         ; 00528dab
    CALL FUN_004bda80                   ; 00528dad
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined FUN_004bda80()
    MOV EDX,dword ptr [0x005bea60]      ; 00528db2 | DAT_005bea60
    ADD ESP,0xc                         ; 00528db8
    TEST EDX,EDX                        ; 00528dbb
    JLE 0x00528e50                      ; 00528dbd
        ;   XREF to: 00528e50 (CONDITIONAL_JUMP)  ; LAB_00528e50
    PUSH EBX                            ; 00528dc3
        ;   Label: LAB_00528dc3
    PUSH 0x593abe                       ; 00528dc4 | = "SfxChannel%dEnabled"
    LEA EAX,[ESP + 0x220]               ; 00528dc9
    PUSH EAX                            ; 00528dd0
    CALL FUN_00563c90                   ; 00528dd1
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 00528dd6
    PUSH EBX                            ; 00528dd9
    CALL FUN_00527490                   ; 00528dda
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined FUN_00527490()
    ADD ESP,0x4                         ; 00528ddf
    PUSH EAX                            ; 00528de2
    LEA EAX,[ESP + 0x21c]               ; 00528de3
    PUSH EAX                            ; 00528dea
    PUSH EBP                            ; 00528deb
    CALL FUN_004bda80                   ; 00528dec
        ;   XREF to: 004bda80 (UNCONDITIONAL_CALL)  ; undefined FUN_004bda80()
    ADD ESP,0xc                         ; 00528df1
    PUSH EBX                            ; 00528df4
    PUSH 0x593ad2                       ; 00528df5 | = "SfxChannel%dVol"
    LEA EAX,[ESP + 0x220]               ; 00528dfa
    PUSH EAX                            ; 00528e01
    CALL FUN_00563c90                   ; 00528e02
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 00528e07
    PUSH EBX                            ; 00528e0a
    CALL FUN_00527380                   ; 00528e0b
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined FUN_00527380()
    MOV dword ptr [ESP + 0x28c],EAX     ; 00528e10
    FLD float ptr [ESP + 0x28c]         ; 00528e17
    ADD ESP,0x4                         ; 00528e1e
    SUB ESP,0x4                         ; 00528e21
    LEA EAX,[ESP + 0x21c]               ; 00528e24
    FSTP float ptr [ESP]                ; 00528e2b
    PUSH EAX                            ; 00528e2e
    PUSH EBP                            ; 00528e2f
    INC EBX                             ; 00528e30
    CALL FUN_004bdb20                   ; 00528e31
        ;   XREF to: 004bdb20 (UNCONDITIONAL_CALL)  ; undefined FUN_004bdb20()
    MOV ECX,dword ptr [0x005bea60]      ; 00528e36 | DAT_005bea60
    ADD ESP,0xc                         ; 00528e3c
    CMP EBX,ECX                         ; 00528e3f
    JL 0x00528dc3                       ; 00528e41
        ;   XREF to: 00528dc3 (CONDITIONAL_JUMP)  ; LAB_00528dc3
    LEA EAX,[EAX]                       ; 00528e43
    LEA EDX,[EDX]                       ; 00528e49
    NOP                                 ; 00528e4f
    ADD ESP,0x28c                       ; 00528e50
        ;   Label: LAB_00528e50
    POP EBP                             ; 00528e56
    POP EDI                             ; 00528e57
    POP ESI                             ; 00528e58
    POP EBX                             ; 00528e59
    RET                                 ; 00528e5a

