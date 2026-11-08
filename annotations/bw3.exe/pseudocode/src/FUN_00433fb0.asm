; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433fb0(int param_1,uint param_2)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[34]:
;   FUN_0040fb40 at 0040fbb5
;   FUN_004179b0 at 00417dda
;   FUN_00419b40 at 00419f48
;   FUN_00425da0 at 00425e7d
;   FUN_00442a20 at 0044335f
;   FUN_00445130 at 004453ab
;   FUN_00455080 at 0045515d
;   FUN_004628b0 at 0046294f
;   FUN_004c5350 at 004c53cd
;   FUN_004c6eb0 at 004c7933
;   ... and 24 more
;
; Referenced Globals:
;   undefined4 s_L_Bip01_L_Foot_005b8870+2
;   TerminatedCString s_Bip01_R_Foot_005b887f
;   TerminatedCString s_Bip01_L_Foot_005b888c
;   TerminatedCString s_Bip01_R_Foot_005b8899
;
; Called Functions:
;   FUN_00548090
;   FUN_0054dbd0
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433fb0
        ;   Label: FUN_00433fb0
    PUSH ESI                            ; 00433fb1
    PUSH EDI                            ; 00433fb2
    PUSH EBP                            ; 00433fb3
    SUB ESP,0x60                        ; 00433fb4
    MOV EBX,dword ptr [ESP + 0x74]      ; 00433fb7
    MOV EAX,dword ptr [ESP + 0x78]      ; 00433fbb
    LEA ESI,[EBX + 0x158]               ; 00433fbf
    CMP EAX,0x7                         ; 00433fc5
    JNC 0x00434167                      ; 00433fc8
        ;   XREF to: 00434167 (CONDITIONAL_JUMP)  ; LAB_00434167
    CMP EAX,0x1                         ; 00433fce
    JNZ 0x00433fdc                      ; 00433fd1
        ;   XREF to: 00433fdc (CONDITIONAL_JUMP)  ; LAB_00433fdc
    CMP dword ptr [EBX + 0x2500],0x0    ; 00433fd3
    JNZ 0x00433fe4                      ; 00433fda
        ;   XREF to: 00433fe4 (CONDITIONAL_JUMP)  ; LAB_00433fe4
    ADD ESP,0x60                        ; 00433fdc
        ;   Label: LAB_00433fdc
    POP EBP                             ; 00433fdf
    POP EDI                             ; 00433fe0
    POP ESI                             ; 00433fe1
    POP EBX                             ; 00433fe2
    RET                                 ; 00433fe3
    PUSH 0x0                            ; 00433fe4
        ;   Label: LAB_00433fe4
    PUSH 0x5b8872                       ; 00433fe6 | s_L_Bip01_L_Foot_005b8870+2
    PUSH ESI                            ; 00433feb
    CALL FUN_0054eac0                   ; 00433fec
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 00433ff1
    PUSH EAX                            ; 00433ff4
    CALL FUN_00548090                   ; 00433ff5
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00433ffa
    TEST EAX,EAX                        ; 00433ffd
    JL 0x00433fdc                       ; 00433fff
        ;   XREF to: 00433fdc (CONDITIONAL_JUMP)  ; LAB_00433fdc
    PUSH 0x3f800000                     ; 00434001
    PUSH EAX                            ; 00434006
    PUSH ESI                            ; 00434007
    LEA ESI,[ESP + 0x48]                ; 00434008
    MOV EBP,dword ptr [EBX + 0x154]     ; 0043400c
    CALL FUN_0054dbd0                   ; 00434012
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbd0()
    ADD ESP,0x8                         ; 00434017
    LEA EAX,[ESP + 0x28]                ; 0043401a
    PUSH EAX                            ; 0043401e
    LEA EDI,[ESP + 0x2c]                ; 0043401f
    LEA ESI,[ESP + 0x44]                ; 00434023
    PUSH EBX                            ; 00434027
    MOVSD ES:EDI,ESI                    ; 00434028
    MOVSD ES:EDI,ESI                    ; 00434029
    MOVSD ES:EDI,ESI                    ; 0043402a
    CALL dword ptr [EBP + 0x24]         ; 0043402b
    ADD ESP,0xc                         ; 0043402e
    ADD ESP,0x60                        ; 00434031
    POP EBP                             ; 00434034
    POP EDI                             ; 00434035
    POP ESI                             ; 00434036
    POP EBX                             ; 00434037
    RET                                 ; 00434038
    CMP dword ptr [EBX + 0x2500],0x0    ; 00434039
        ;   Label: LAB_00434039
    JZ 0x00433fdc                       ; 00434040
        ;   XREF to: 00433fdc (CONDITIONAL_JUMP)  ; LAB_00433fdc
    PUSH 0x0                            ; 00434042
    PUSH 0x5b887f                       ; 00434044 | = "Bip01 R Foot"
    PUSH ESI                            ; 00434049
    CALL FUN_0054eac0                   ; 0043404a
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0043404f
    PUSH EAX                            ; 00434052
    CALL FUN_00548090                   ; 00434053
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00434058
    TEST EAX,EAX                        ; 0043405b
    JL 0x00433fdc                       ; 0043405d
        ;   XREF to: 00433fdc (CONDITIONAL_JUMP)  ; LAB_00433fdc
    PUSH 0x3f800000                     ; 00434063
    PUSH EAX                            ; 00434068
    PUSH ESI                            ; 00434069
    LEA ESI,[ESP + 0xc]                 ; 0043406a
    MOV EBP,dword ptr [EBX + 0x154]     ; 0043406e
    CALL FUN_0054dbd0                   ; 00434074
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbd0()
    ADD ESP,0x8                         ; 00434079
    LEA EAX,[ESP + 0x58]                ; 0043407c
    PUSH EAX                            ; 00434080
    LEA EDI,[ESP + 0x5c]                ; 00434081
    LEA ESI,[ESP + 0x8]                 ; 00434085
    PUSH EBX                            ; 00434089
    MOVSD ES:EDI,ESI                    ; 0043408a
    MOVSD ES:EDI,ESI                    ; 0043408b
    MOVSD ES:EDI,ESI                    ; 0043408c
    CALL dword ptr [EBP + 0x24]         ; 0043408d
    ADD ESP,0xc                         ; 00434090
    ADD ESP,0x60                        ; 00434093
    POP EBP                             ; 00434096
    POP EDI                             ; 00434097
    POP ESI                             ; 00434098
    POP EBX                             ; 00434099
    RET                                 ; 0043409a
    CMP dword ptr [EBX + 0x2500],0x0    ; 0043409b
        ;   Label: LAB_0043409b
    JZ 0x00433fdc                       ; 004340a2
        ;   XREF to: 00433fdc (CONDITIONAL_JUMP)  ; LAB_00433fdc
    PUSH 0x0                            ; 004340a8
    PUSH 0x5b888c                       ; 004340aa | = "Bip01 L Foot"
    PUSH ESI                            ; 004340af
    CALL FUN_0054eac0                   ; 004340b0
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 004340b5
    PUSH EAX                            ; 004340b8
    CALL FUN_00548090                   ; 004340b9
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 004340be
    TEST EAX,EAX                        ; 004340c1
    JL 0x00433fdc                       ; 004340c3
        ;   XREF to: 00433fdc (CONDITIONAL_JUMP)  ; LAB_00433fdc
    PUSH 0x3fd9999a                     ; 004340c9
    PUSH EAX                            ; 004340ce
    PUSH ESI                            ; 004340cf
    LEA ESI,[ESP + 0x3c]                ; 004340d0
    MOV EBP,dword ptr [EBX + 0x154]     ; 004340d4
    CALL FUN_0054dbd0                   ; 004340da
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbd0()
    ADD ESP,0x8                         ; 004340df
    LEA EAX,[ESP + 0x1c]                ; 004340e2
    PUSH EAX                            ; 004340e6
    LEA EDI,[ESP + 0x20]                ; 004340e7
    LEA ESI,[ESP + 0x38]                ; 004340eb
    PUSH EBX                            ; 004340ef
    MOVSD ES:EDI,ESI                    ; 004340f0
    MOVSD ES:EDI,ESI                    ; 004340f1
    MOVSD ES:EDI,ESI                    ; 004340f2
    CALL dword ptr [EBP + 0x24]         ; 004340f3
    ADD ESP,0xc                         ; 004340f6
    ADD ESP,0x60                        ; 004340f9
    POP EBP                             ; 004340fc
    POP EDI                             ; 004340fd
    POP ESI                             ; 004340fe
    POP EBX                             ; 004340ff
    RET                                 ; 00434100
    CMP dword ptr [EBX + 0x2500],0x0    ; 00434101
        ;   Label: LAB_00434101
    JZ 0x00433fdc                       ; 00434108
        ;   XREF to: 00433fdc (CONDITIONAL_JUMP)  ; LAB_00433fdc
    PUSH 0x0                            ; 0043410e
    PUSH 0x5b8899                       ; 00434110 | = "Bip01 R Foot"
    PUSH ESI                            ; 00434115
    CALL FUN_0054eac0                   ; 00434116
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0043411b
    PUSH EAX                            ; 0043411e
    CALL FUN_00548090                   ; 0043411f
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00434124
    TEST EAX,EAX                        ; 00434127
    JL 0x00433fdc                       ; 00434129
        ;   XREF to: 00433fdc (CONDITIONAL_JUMP)  ; LAB_00433fdc
    PUSH 0x3fd9999a                     ; 0043412f
    PUSH EAX                            ; 00434134
    PUSH ESI                            ; 00434135
    LEA ESI,[ESP + 0x18]                ; 00434136
    MOV EBP,dword ptr [EBX + 0x154]     ; 0043413a
    CALL FUN_0054dbd0                   ; 00434140
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbd0()
    ADD ESP,0x8                         ; 00434145
    LEA EAX,[ESP + 0x4c]                ; 00434148
    PUSH EAX                            ; 0043414c
    LEA EDI,[ESP + 0x50]                ; 0043414d
    LEA ESI,[ESP + 0x14]                ; 00434151
    PUSH EBX                            ; 00434155
    MOVSD ES:EDI,ESI                    ; 00434156
    MOVSD ES:EDI,ESI                    ; 00434157
    MOVSD ES:EDI,ESI                    ; 00434158
    CALL dword ptr [EBP + 0x24]         ; 00434159
    ADD ESP,0xc                         ; 0043415c
    ADD ESP,0x60                        ; 0043415f
    POP EBP                             ; 00434162
    POP EDI                             ; 00434163
    POP ESI                             ; 00434164
    POP EBX                             ; 00434165
    RET                                 ; 00434166
    JBE 0x00434039                      ; 00434167
        ;   XREF to: 00434039 (CONDITIONAL_JUMP)  ; LAB_00434039
        ;   Label: LAB_00434167
    CMP EAX,0x1f                        ; 0043416d
    JC 0x00433fdc                       ; 00434170
        ;   XREF to: 00433fdc (CONDITIONAL_JUMP)  ; LAB_00433fdc
    JBE 0x0043409b                      ; 00434176
        ;   XREF to: 0043409b (CONDITIONAL_JUMP)  ; LAB_0043409b
    CMP EAX,0x25                        ; 0043417c
    JZ 0x00434101                       ; 0043417f
        ;   XREF to: 00434101 (CONDITIONAL_JUMP)  ; LAB_00434101
    ADD ESP,0x60                        ; 00434181
    POP EBP                             ; 00434184
    POP EDI                             ; 00434185
    POP ESI                             ; 00434186
    POP EBX                             ; 00434187
    RET                                 ; 00434188

