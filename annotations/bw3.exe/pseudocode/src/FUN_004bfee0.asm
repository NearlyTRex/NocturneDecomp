; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bfee0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x53c]:1  local_53c
; undefined1       Stack[-0x53b]:1  local_53b
; undefined        Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x13b]:1  local_13b
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_004f72a0 at 004f743e
;
; Referenced Globals:
;   TerminatedCString s_stats_005c3b18
;   TerminatedCString s_Mission_time_005c3b1e
;   undefined1 DAT_005c3b2b
;   undefined1 DAT_005c3b2c
;   undefined1 DAT_005c3b2d
;   TerminatedCString s_s_2d_2d_2d_2d_005c3b2e
;   TerminatedCString s_Total_body_count_005c3b40
;   undefined1 DAT_005c3b51
;   undefined1 DAT_005c3b52
;   undefined1 DAT_005c3b53
;   undefined1 DAT_005c3b54
;   undefined4 DAT_005c3b60
;   undefined4 DAT_005c3b68
;   undefined4 DAT_005c3b70
;   undefined4 DAT_005c3b78
;   ... and 2 more
;
; Called Functions:
;   FUN_004032b0
;   FUN_00406bf0
;   FUN_0040d2e0
;   FUN_0040d300
;   FUN_0040d460
;   FUN_0040d6f0
;   FUN_004b0fa0
;   FUN_004b2e40
;   FUN_004b30f0
;   FUN_004c02a0
;   FUN_00508960
;   FUN_00560d70
;   FUN_0057a8a0
;   FUN_00580790
;   FUN_005a28c0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004bfee0
        ;   Label: FUN_004bfee0
    SUB ESP,0x538                       ; 004bfee1
    MOV EBP,dword ptr [ESP + 0x540]     ; 004bfee7
    CMP dword ptr [EBP + 0x284],0x2     ; 004bfeee
    JZ 0x004c00d1                       ; 004bfef5
        ;   XREF to: 004c00d1 (CONDITIONAL_JUMP)  ; LAB_004c00d1
    PUSH EDI                            ; 004bfefb
    PUSH ESI                            ; 004bfefc
    PUSH EBX                            ; 004bfefd
    MOV EAX,dword ptr [EBP + 0x274]     ; 004bfefe
    MOV ECX,dword ptr [EBP + 0x27c]     ; 004bff04
    FLD float ptr [EBP + 0x278]         ; 004bff0a
    ADD ECX,EAX                         ; 004bff10
    LEA EAX,[ESP + 0x50c]               ; 004bff12
    FADD float ptr [EBP + 0x270]        ; 004bff19
    PUSH EAX                            ; 004bff1f
    FSTP float ptr [EBP + 0x270]        ; 004bff20
    MOV dword ptr [EBP + 0x27c],ECX     ; 004bff26
    CALL FUN_0040d2e0                   ; 004bff2c
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 004bff31
    PUSH 0x1e0                          ; 004bff34
    PUSH 0x280                          ; 004bff39
    PUSH 0x5c3b18                       ; 004bff3e | = "stats"
    LEA EAX,[ESP + 0x518]               ; 004bff43
    PUSH EAX                            ; 004bff4a
    CALL FUN_0040d460                   ; 004bff4b
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004bff50
    CALL FUN_00560d70                   ; 004bff53
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00560d70()
    PUSH 0xffff                         ; 004bff58
    PUSH 0x0                            ; 004bff5d
    PUSH 0x0                            ; 004bff5f
    LEA EAX,[ESP + 0x518]               ; 004bff61
    PUSH EAX                            ; 004bff68
    CALL FUN_0040d6f0                   ; 004bff69
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d6f0()
    ADD ESP,0x10                        ; 004bff6e
    FLD float ptr [EBP + 0x270]         ; 004bff71
    FLD ST0                             ; 004bff77
    FMUL double ptr [0x005c3b60]        ; 004bff79 | DAT_005c3b60
    CALL FUN_005a3120                   ; 004bff7f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x52c]       ; 004bff84
    MOV EAX,dword ptr [ESP + 0x52c]     ; 004bff8b
    MOV dword ptr [ESP + 0x540],EAX     ; 004bff92
    FILD dword ptr [ESP + 0x540]        ; 004bff99
    FMUL double ptr [0x005c3b68]        ; 004bffa0 | DAT_005c3b68
    FSUBP                               ; 004bffa6
    FLD ST0                             ; 004bffa8
    FMUL double ptr [0x005c3b70]        ; 004bffaa | DAT_005c3b70
    CALL FUN_005a3120                   ; 004bffb0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x528]       ; 004bffb5
    MOV EAX,dword ptr [ESP + 0x528]     ; 004bffbc
    MOV dword ptr [ESP + 0x540],EAX     ; 004bffc3
    FILD dword ptr [ESP + 0x540]        ; 004bffca
    FMUL double ptr [0x005c3b78]        ; 004bffd1 | DAT_005c3b78
    FSUBP                               ; 004bffd7
    FST float ptr [EBP + 0x270]         ; 004bffd9
    CALL FUN_005a3120                   ; 004bffdf
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x534]       ; 004bffe4
    MOV EAX,dword ptr [ESP + 0x534]     ; 004bffeb
    MOV dword ptr [ESP + 0x540],EAX     ; 004bfff2
    FILD dword ptr [ESP + 0x540]        ; 004bfff9
    FSUBR float ptr [EBP + 0x270]       ; 004c0000
    FST float ptr [EBP + 0x270]         ; 004c0006
    FMUL double ptr [0x005c3b80]        ; 004c000c | DAT_005c3b80
    PUSH 0x5c3b1e                       ; 004c0012 | = "Mission time"
    CALL FUN_005a3120                   ; 004c0017
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x534]       ; 004c001c
    CALL FUN_00508960                   ; 004c0023
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004c0028
    LEA EDI,[ESP + 0xc]                 ; 004c002b
    MOV ESI,EAX                         ; 004c002f
    PUSH EDI                            ; 004c0031
    MOV AL,byte ptr [ESI]               ; 004c0032
        ;   Label: LAB_004c0032
    MOV byte ptr [EDI],AL               ; 004c0034
    CMP AL,0x0                          ; 004c0036
    JZ 0x004c004a                       ; 004c0038
        ;   XREF to: 004c004a (CONDITIONAL_JUMP)  ; LAB_004c004a
    MOV AL,byte ptr [ESI + 0x1]         ; 004c003a
    ADD ESI,0x2                         ; 004c003d
    MOV byte ptr [EDI + 0x1],AL         ; 004c0040
    ADD EDI,0x2                         ; 004c0043
    CMP AL,0x0                          ; 004c0046
    JNZ 0x004c0032                      ; 004c0048
        ;   XREF to: 004c0032 (CONDITIONAL_JUMP)  ; LAB_004c0032
    POP EDI                             ; 004c004a
        ;   Label: LAB_004c004a
    MOV ESI,0x5c3b2b                    ; 004c004b | DAT_005c3b2b
    LEA EDI,[ESP + 0xc]                 ; 004c0050
    MOV EBX,dword ptr [ESP + 0x530]     ; 004c0054
    PUSH EDI                            ; 004c005b
    SUB ECX,ECX                         ; 004c005c
    DEC ECX                             ; 004c005e
    MOV AL,0x0                          ; 004c005f
    SCASB.REPNE ES:EDI                  ; 004c0061
    DEC EDI                             ; 004c0063
    MOV AL,byte ptr [ESI]               ; 004c0064 | DAT_005c3b2b | DAT_005c3b2d
        ;   Label: LAB_004c0064
    MOV byte ptr [EDI],AL               ; 004c0066
    CMP AL,0x0                          ; 004c0068
    JZ 0x004c007c                       ; 004c006a
        ;   XREF to: 004c007c (CONDITIONAL_JUMP)  ; LAB_004c007c
    MOV AL,byte ptr [ESI + 0x1]         ; 004c006c | DAT_005c3b2c | = "%2d:%2d:%2d.%2d\n\n"
    ADD ESI,0x2                         ; 004c006f
    MOV byte ptr [EDI + 0x1],AL         ; 004c0072
    ADD EDI,0x2                         ; 004c0075
    CMP AL,0x0                          ; 004c0078
    JNZ 0x004c0064                      ; 004c007a
        ;   XREF to: 004c0064 (CONDITIONAL_JUMP)  ; LAB_004c0064
    POP EDI                             ; 004c007c
        ;   Label: LAB_004c007c
    PUSH EBX                            ; 004c007d
    MOV ESI,dword ptr [ESP + 0x538]     ; 004c007e
    PUSH ESI                            ; 004c0085
    MOV EDI,dword ptr [ESP + 0x530]     ; 004c0086
    PUSH EDI                            ; 004c008d
    MOV EAX,dword ptr [ESP + 0x538]     ; 004c008e
    PUSH EAX                            ; 004c0095
    PUSH 0x5c3b2e                       ; 004c0096 | = "%2d:%2d:%2d.%2d\n\n"
    LEA EAX,[ESP + 0x420]               ; 004c009b
    PUSH EAX                            ; 004c00a2
    XOR ESI,ESI                         ; 004c00a3
    CALL FUN_005a28c0                   ; 004c00a5
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    MOV DL,0x30                         ; 004c00aa
    ADD ESP,0x18                        ; 004c00ac
    LEA EDI,[ESP + 0x40c]               ; 004c00af
        ;   Label: LAB_004c00af
    SUB ECX,ECX                         ; 004c00b6
    DEC ECX                             ; 004c00b8
    XOR EAX,EAX                         ; 004c00b9
    SCASB.REPNE ES:EDI                  ; 004c00bb
    NOT ECX                             ; 004c00bd
    DEC ECX                             ; 004c00bf
    CMP ESI,ECX                         ; 004c00c0
    JNC 0x004c00f0                      ; 004c00c2
        ;   XREF to: 004c00f0 (CONDITIONAL_JUMP)  ; LAB_004c00f0
    CMP byte ptr [ESP + ESI*0x1 + 0x40c],0x20 ; 004c00c4
    JZ 0x004c00e7                       ; 004c00cc
        ;   XREF to: 004c00e7 (CONDITIONAL_JUMP)  ; LAB_004c00e7
    INC ESI                             ; 004c00ce
        ;   Label: LAB_004c00ce
    JMP 0x004c00af                      ; 004c00cf
        ;   XREF to: 004c00af (UNCONDITIONAL_JUMP)  ; LAB_004c00af
    CALL FUN_004032b0                   ; 004c00d1
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
        ;   Label: LAB_004c00d1
    PUSH EBP                            ; 004c00d6
    CALL FUN_004c02a0                   ; 004c00d7
        ;   XREF to: 004c02a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c02a0()
    ADD ESP,0x4                         ; 004c00dc
    ADD ESP,0x538                       ; 004c00df
    POP EBP                             ; 004c00e5
    RET                                 ; 004c00e6
    MOV byte ptr [ESP + ESI*0x1 + 0x40c],DL ; 004c00e7
        ;   Label: LAB_004c00e7
    JMP 0x004c00ce                      ; 004c00ee
        ;   XREF to: 004c00ce (UNCONDITIONAL_JUMP)  ; LAB_004c00ce
    LEA ESI,[ESP + 0x40c]               ; 004c00f0
        ;   Label: LAB_004c00f0
    LEA EDI,[ESP + 0xc]                 ; 004c00f7
    PUSH EDI                            ; 004c00fb
    SUB ECX,ECX                         ; 004c00fc
    DEC ECX                             ; 004c00fe
    MOV AL,0x0                          ; 004c00ff
    SCASB.REPNE ES:EDI                  ; 004c0101
    DEC EDI                             ; 004c0103
    MOV AL,byte ptr [ESI]               ; 004c0104
        ;   Label: LAB_004c0104
    MOV byte ptr [EDI],AL               ; 004c0106
    CMP AL,0x0                          ; 004c0108
    JZ 0x004c011c                       ; 004c010a
        ;   XREF to: 004c011c (CONDITIONAL_JUMP)  ; LAB_004c011c
    MOV AL,byte ptr [ESI + 0x1]         ; 004c010c
    ADD ESI,0x2                         ; 004c010f
    MOV byte ptr [EDI + 0x1],AL         ; 004c0112
    ADD EDI,0x2                         ; 004c0115
    CMP AL,0x0                          ; 004c0118
    JNZ 0x004c0104                      ; 004c011a
        ;   XREF to: 004c0104 (CONDITIONAL_JUMP)  ; LAB_004c0104
    POP EDI                             ; 004c011c
        ;   Label: LAB_004c011c
    PUSH 0x5c3b40                       ; 004c011d | = "Total body count"
    CALL FUN_00508960                   ; 004c0122
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004c0127
    LEA EDI,[ESP + 0xc]                 ; 004c012a
    MOV ESI,EAX                         ; 004c012e
    PUSH EDI                            ; 004c0130
    SUB ECX,ECX                         ; 004c0131
    DEC ECX                             ; 004c0133
    MOV AL,0x0                          ; 004c0134
    SCASB.REPNE ES:EDI                  ; 004c0136
    DEC EDI                             ; 004c0138
    MOV AL,byte ptr [ESI]               ; 004c0139
        ;   Label: LAB_004c0139
    MOV byte ptr [EDI],AL               ; 004c013b
    CMP AL,0x0                          ; 004c013d
    JZ 0x004c0151                       ; 004c013f
        ;   XREF to: 004c0151 (CONDITIONAL_JUMP)  ; LAB_004c0151
    MOV AL,byte ptr [ESI + 0x1]         ; 004c0141
    ADD ESI,0x2                         ; 004c0144
    MOV byte ptr [EDI + 0x1],AL         ; 004c0147
    ADD EDI,0x2                         ; 004c014a
    CMP AL,0x0                          ; 004c014d
    JNZ 0x004c0139                      ; 004c014f
        ;   XREF to: 004c0139 (CONDITIONAL_JUMP)  ; LAB_004c0139
    POP EDI                             ; 004c0151
        ;   Label: LAB_004c0151
    MOV ESI,0x5c3b51                    ; 004c0152 | DAT_005c3b51
    LEA EDI,[ESP + 0xc]                 ; 004c0157
    PUSH EDI                            ; 004c015b
    SUB ECX,ECX                         ; 004c015c
    DEC ECX                             ; 004c015e
    MOV AL,0x0                          ; 004c015f
    SCASB.REPNE ES:EDI                  ; 004c0161
    DEC EDI                             ; 004c0163
    MOV AL,byte ptr [ESI]               ; 004c0164 | DAT_005c3b51 | DAT_005c3b53
        ;   Label: LAB_004c0164
    MOV byte ptr [EDI],AL               ; 004c0166
    CMP AL,0x0                          ; 004c0168
    JZ 0x004c017c                       ; 004c016a
        ;   XREF to: 004c017c (CONDITIONAL_JUMP)  ; LAB_004c017c
    MOV AL,byte ptr [ESI + 0x1]         ; 004c016c | DAT_005c3b52 | DAT_005c3b54
    ADD ESI,0x2                         ; 004c016f
    MOV byte ptr [EDI + 0x1],AL         ; 004c0172
    ADD EDI,0x2                         ; 004c0175
    CMP AL,0x0                          ; 004c0178
    JNZ 0x004c0164                      ; 004c017a
        ;   XREF to: 004c0164 (CONDITIONAL_JUMP)  ; LAB_004c0164
    POP EDI                             ; 004c017c
        ;   Label: LAB_004c017c
    MOV EDX,dword ptr [EBP + 0x27c]     ; 004c017d
    PUSH EDX                            ; 004c0183
    PUSH 0x5c3b54                       ; 004c0184 | DAT_005c3b54
    LEA EAX,[ESP + 0x414]               ; 004c0189
    PUSH EAX                            ; 004c0190
    CALL FUN_005a28c0                   ; 004c0191
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 004c0196
    LEA ESI,[ESP + 0x40c]               ; 004c0199
    LEA EDI,[ESP + 0xc]                 ; 004c01a0
    PUSH EDI                            ; 004c01a4
    SUB ECX,ECX                         ; 004c01a5
    DEC ECX                             ; 004c01a7
    MOV AL,0x0                          ; 004c01a8
    SCASB.REPNE ES:EDI                  ; 004c01aa
    DEC EDI                             ; 004c01ac
    MOV AL,byte ptr [ESI]               ; 004c01ad
        ;   Label: LAB_004c01ad
    MOV byte ptr [EDI],AL               ; 004c01af
    CMP AL,0x0                          ; 004c01b1
    JZ 0x004c01c5                       ; 004c01b3
        ;   XREF to: 004c01c5 (CONDITIONAL_JUMP)  ; LAB_004c01c5
    MOV AL,byte ptr [ESI + 0x1]         ; 004c01b5
    ADD ESI,0x2                         ; 004c01b8
    MOV byte ptr [EDI + 0x1],AL         ; 004c01bb
    ADD EDI,0x2                         ; 004c01be
    CMP AL,0x0                          ; 004c01c1
    JNZ 0x004c01ad                      ; 004c01c3
        ;   XREF to: 004c01ad (CONDITIONAL_JUMP)  ; LAB_004c01ad
    POP EDI                             ; 004c01c5
        ;   Label: LAB_004c01c5
    PUSH 0xffff                         ; 004c01c6
    MOV EBP,dword ptr [0x01549aa8]      ; 004c01cb | DAT_01549aa8
    CALL FUN_00406bf0                   ; 004c01d1
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bf0()
    ADD ESP,0x4                         ; 004c01d6
    PUSH 0xc0                           ; 004c01d9
    PUSH 0x100                          ; 004c01de
    PUSH 0x14                           ; 004c01e3
    PUSH 0x1d1cf20                      ; 004c01e5
    LEA EAX,[ESP + 0x1c]                ; 004c01ea
    PUSH EAX                            ; 004c01ee
    PUSH EBP                            ; 004c01ef
    CALL FUN_004b2e40                   ; 004c01f0
        ;   XREF to: 004b2e40 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2e40()
    ADD ESP,0x18                        ; 004c01f5
    PUSH 0x58                           ; 004c01f8
    XOR EBX,EBX                         ; 004c01fa
    PUSH EBP                            ; 004c01fc
    MOV EDI,EAX                         ; 004c01fd
    MOV dword ptr [ESP + 0x544],EAX     ; 004c01ff
    CALL FUN_004b30f0                   ; 004c0206
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b30f0()
    ADD ESP,0x8                         ; 004c020b
    MOV ESI,0xf0                        ; 004c020e
    MOV dword ptr [ESP + 0x538],EAX     ; 004c0213
    TEST EDI,EDI                        ; 004c021a
    JLE 0x004c0260                      ; 004c021c
        ;   XREF to: 004c0260 (CONDITIONAL_JUMP)  ; LAB_004c0260
    MOV EDI,0x1d1cf20                   ; 004c021e
    PUSH EDI                            ; 004c0223
        ;   Label: LAB_004c0223
    PUSH 0x0                            ; 004c0224
    PUSH 0xf8                           ; 004c0226
    PUSH ESI                            ; 004c022b
    PUSH 0x27f                          ; 004c022c
    PUSH 0x1c0                          ; 004c0231
    PUSH EBP                            ; 004c0236
    INC EBX                             ; 004c0237
    CALL FUN_004b0fa0                   ; 004c0238
        ;   XREF to: 004b0fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0fa0()
    ADD ESP,0x1c                        ; 004c023d
    ADD EDI,0x100                       ; 004c0240
    MOV ECX,dword ptr [ESP + 0x538]     ; 004c0246
    MOV EAX,dword ptr [ESP + 0x53c]     ; 004c024d
    ADD ESI,ECX                         ; 004c0254
    CMP EBX,EAX                         ; 004c0256
    JL 0x004c0223                       ; 004c0258
        ;   XREF to: 004c0223 (CONDITIONAL_JUMP)  ; LAB_004c0223
    LEA EAX,[EAX]                       ; 004c025a
    CALL FUN_0057a8a0                   ; 004c0260
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
        ;   Label: LAB_004c0260
    CALL FUN_004032b0                   ; 004c0265
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CALL FUN_00580790                   ; 004c026a
        ;   XREF to: 00580790 (UNCONDITIONAL_CALL)  ; undefined FUN_00580790()
    CALL FUN_004032b0                   ; 004c026f
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    PUSH 0x0                            ; 004c0274
    LEA EAX,[ESP + 0x510]               ; 004c0276
    PUSH EAX                            ; 004c027d
    CALL FUN_0040d300                   ; 004c027e
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d300()
    ADD ESP,0x8                         ; 004c0283
    POP EBX                             ; 004c0286
    POP ESI                             ; 004c0287
    POP EDI                             ; 004c0288
    ADD ESP,0x538                       ; 004c0289
    POP EBP                             ; 004c028f
    RET                                 ; 004c0290

