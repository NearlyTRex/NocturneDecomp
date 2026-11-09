; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005abf84(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_time.c__mktime_FUN_005a4f20 at 005a5050
;   crt_unknown.c_FUN_005a55d0 at 005a55f8
;
; Referenced Globals:
;   undefined4 DAT_005e8802
;   undefined4 DAT_005e8804
;   undefined4 DAT_005e8806
;   undefined4 DAT_005e881c
;   undefined4 DAT_005e881e
;   undefined4 DAT_00607be8
;   undefined4 DAT_00607bf4
;   undefined4 DAT_00607bf8
;   undefined4 DAT_00607c00
;   undefined4 DAT_00607c04
;   undefined4 DAT_00607c08
;   undefined4 DAT_00607c0c
;   undefined4 DAT_00607c18
;   undefined4 DAT_00607c1c
;   undefined4 DAT_00607c24
;   ... and 4 more
;
; Called Functions:
;   crt_unknown.c_FUN_005abdf0
;   crt_unknown.c_FUN_005abf28
;   crt_unknown.c_FUN_005ac258
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abf84
        ;   Label: crt_unknown.c_FUN_005abf84
    PUSH ESI                            ; 005abf85
    PUSH EDI                            ; 005abf86
    PUSH EBP                            ; 005abf87
    SUB ESP,0x1c                        ; 005abf88
    MOV EBX,dword ptr [ESP + 0x30]      ; 005abf8b
    MOV EAX,[0x00607d38]                ; 005abf8f | PTR_DAT_00607d38
    MOV DL,byte ptr [EAX]               ; 005abf94 | DAT_00607cb1
    XOR ESI,ESI                         ; 005abf96
    TEST DL,DL                          ; 005abf98
    JZ 0x005ac24b                       ; 005abf9a
        ;   XREF to: 005ac24b (CONDITIONAL_JUMP)  ; LAB_005ac24b
    MOV EDX,dword ptr [EBX + 0x14]      ; 005abfa0
    PUSH EDX                            ; 005abfa3
    PUSH 0x607c0c                       ; 005abfa4 | DAT_00607c0c
    PUSH 0x607be8                       ; 005abfa9 | DAT_00607be8
    CALL crt_unknown.c_FUN_005abf28     ; 005abfae
        ;   XREF to: 005abf28 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abf28()
    ADD ESP,0xc                         ; 005abfb3
    MOV dword ptr [ESP + 0x10],EAX      ; 005abfb6
    TEST EAX,EAX                        ; 005abfba
    JZ 0x005abfca                       ; 005abfbc
        ;   XREF to: 005abfca (CONDITIONAL_JUMP)  ; LAB_005abfca
    MOV EBP,0x607c0c                    ; 005abfbe | DAT_00607c0c
    MOV EDI,0x607be8                    ; 005abfc3 | DAT_00607be8
    JMP 0x005abfd4                      ; 005abfc8
        ;   XREF to: 005abfd4 (UNCONDITIONAL_JUMP)  ; LAB_005abfd4
    MOV EBP,0x607be8                    ; 005abfca | DAT_00607be8
        ;   Label: LAB_005abfca
    MOV EDI,0x607c0c                    ; 005abfcf | DAT_00607c0c
    MOV EAX,dword ptr [EBX + 0x10]      ; 005abfd4
        ;   Label: LAB_005abfd4
    MOV dword ptr [ESP + 0x14],EAX      ; 005abfd7
    MOV EAX,dword ptr [EBX + 0x14]      ; 005abfdb
    ADD EAX,0x76c                       ; 005abfde
    PUSH EAX                            ; 005abfe3
    CALL crt_unknown.c_FUN_005abdf0     ; 005abfe4
        ;   XREF to: 005abdf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abdf0()
    ADD ESP,0x4                         ; 005abfe9
    MOV EDX,EAX                         ; 005abfec
    MOV EAX,dword ptr [ESP + 0x14]      ; 005abfee
    ADD EAX,EAX                         ; 005abff2
    TEST EDX,EDX                        ; 005abff4
    JZ 0x005ac006                       ; 005abff6
        ;   XREF to: 005ac006 (CONDITIONAL_JUMP)  ; LAB_005ac006
    MOV EDX,dword ptr [EAX + 0x5e881e]  ; 005abff8 | DAT_005e881e
    MOV EAX,dword ptr [EAX + 0x5e881c]  ; 005abffe | DAT_005e881c
    JMP 0x005ac012                      ; 005ac004
        ;   XREF to: 005ac012 (UNCONDITIONAL_JUMP)  ; LAB_005ac012
    MOV EDX,dword ptr [EAX + 0x5e8804]  ; 005ac006 | DAT_005e8804
        ;   Label: LAB_005ac006
    MOV EAX,dword ptr [EAX + 0x5e8802]  ; 005ac00c | DAT_005e8802
    SAR EDX,0x10                        ; 005ac012
        ;   Label: LAB_005ac012
    SAR EAX,0x10                        ; 005ac015
    SUB EDX,EAX                         ; 005ac018
    MOV dword ptr [ESP + 0xc],EDX       ; 005ac01a
    XOR ECX,ECX                         ; 005ac01e
    MOV EAX,dword ptr [EBP + 0x20]      ; 005ac020 | DAT_00607c2c
    MOV dword ptr [ESP + 0x4],ECX       ; 005ac023
    TEST EAX,EAX                        ; 005ac027
    JNZ 0x005ac0cd                      ; 005ac029
        ;   XREF to: 005ac0cd (CONDITIONAL_JUMP)  ; LAB_005ac0cd
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ac02f
    MOV ECX,dword ptr [EBP + 0x10]      ; 005ac033 | DAT_00607c1c
    CMP EAX,ECX                         ; 005ac036
    JLE 0x005ac044                      ; 005ac038
        ;   XREF to: 005ac044 (CONDITIONAL_JUMP)  ; LAB_005ac044
    MOV ESI,0x1                         ; 005ac03a
    JMP 0x005ac11e                      ; 005ac03f
        ;   XREF to: 005ac11e (UNCONDITIONAL_JUMP)  ; LAB_005ac11e
    JNZ 0x005ac11e                      ; 005ac044
        ;   XREF to: 005ac11e (CONDITIONAL_JUMP)  ; LAB_005ac11e
        ;   Label: LAB_005ac044
    MOV EDX,dword ptr [EBX + 0x18]      ; 005ac04a
    MOV ECX,dword ptr [EBP + 0x18]      ; 005ac04d | DAT_00607c24
    ADD EDX,0x7                         ; 005ac050
    SUB EDX,ECX                         ; 005ac053
    MOV ECX,0x7                         ; 005ac055
    MOV EAX,EDX                         ; 005ac05a
    SAR EDX,0x1f                        ; 005ac05c
    IDIV ECX                            ; 005ac05f
    MOV EAX,dword ptr [EBX + 0xc]       ; 005ac061
    SUB EAX,EDX                         ; 005ac064
    MOV EDX,dword ptr [EBX + 0x18]      ; 005ac066
    MOV dword ptr [ESP + 0x8],EAX       ; 005ac069
    ADD EDX,0x6                         ; 005ac06d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ac070 | DAT_00607c24
    SUB EDX,EAX                         ; 005ac073
    MOV EAX,EDX                         ; 005ac075
    SAR EDX,0x1f                        ; 005ac077
    IDIV ECX                            ; 005ac07a
    MOV ECX,dword ptr [EBX + 0xc]       ; 005ac07c
    DEC ECX                             ; 005ac07f
    SUB ECX,EDX                         ; 005ac080
    MOV EDX,dword ptr [EBP + 0xc]       ; 005ac082 | DAT_00607c18
    CMP EDX,0x5                         ; 005ac085
    JNZ 0x005ac0af                      ; 005ac088
        ;   XREF to: 005ac0af (CONDITIONAL_JUMP)  ; LAB_005ac0af
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ac08a
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ac08e
    SUB EAX,0x7                         ; 005ac092
    CMP EAX,EDX                         ; 005ac095
    JGE 0x005ac11e                      ; 005ac097
        ;   XREF to: 005ac11e (CONDITIONAL_JUMP)  ; LAB_005ac11e
    MOV ESI,0x1                         ; 005ac09d
    CMP ECX,EAX                         ; 005ac0a2
    JG 0x005ac11e                       ; 005ac0a4
        ;   XREF to: 005ac11e (CONDITIONAL_JUMP)  ; LAB_005ac11e
    JMP 0x005ac125                      ; 005ac0aa
        ;   XREF to: 005ac125 (UNCONDITIONAL_JUMP)  ; LAB_005ac125
    DEC EDX                             ; 005ac0af
        ;   Label: LAB_005ac0af
    LEA EAX,[EDX*0x8 + 0x0]             ; 005ac0b0
    SUB EAX,EDX                         ; 005ac0b7
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ac0b9
    INC EAX                             ; 005ac0bd
    CMP EAX,EDX                         ; 005ac0be
    JG 0x005ac11e                       ; 005ac0c0
        ;   XREF to: 005ac11e (CONDITIONAL_JUMP)  ; LAB_005ac11e
    MOV ESI,0x1                         ; 005ac0c2
    CMP ECX,EAX                         ; 005ac0c7
    JGE 0x005ac11e                      ; 005ac0c9
        ;   XREF to: 005ac11e (CONDITIONAL_JUMP)  ; LAB_005ac11e
    JMP 0x005ac125                      ; 005ac0cb
        ;   XREF to: 005ac125 (UNCONDITIONAL_JUMP)  ; LAB_005ac125
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005ac0cd | DAT_00607c28
        ;   Label: LAB_005ac0cd
    MOV EDX,dword ptr [EBP + 0x20]      ; 005ac0d0 | DAT_00607c2c
    MOV dword ptr [ESP + 0x18],EAX      ; 005ac0d3
    CMP EDX,0x1                         ; 005ac0d7
    JNZ 0x005ac10c                      ; 005ac0da
        ;   XREF to: 005ac10c (CONDITIONAL_JUMP)  ; LAB_005ac10c
    MOV EAX,dword ptr [EBX + 0x14]      ; 005ac0dc
    ADD EAX,0x76c                       ; 005ac0df
    PUSH EAX                            ; 005ac0e4
    CALL crt_unknown.c_FUN_005abdf0     ; 005ac0e5
        ;   XREF to: 005abdf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abdf0()
    ADD ESP,0x4                         ; 005ac0ea
    TEST EAX,EAX                        ; 005ac0ed
    JZ 0x005ac108                       ; 005ac0ef
        ;   XREF to: 005ac108 (CONDITIONAL_JUMP)  ; LAB_005ac108
    MOV EAX,[0x005e8806]                ; 005ac0f1 | DAT_005e8806
    MOV ECX,dword ptr [ESP + 0x18]      ; 005ac0f6
    SAR EAX,0x10                        ; 005ac0fa
    CMP EAX,ECX                         ; 005ac0fd
    JGE 0x005ac108                      ; 005ac0ff
        ;   XREF to: 005ac108 (CONDITIONAL_JUMP)  ; LAB_005ac108
    LEA EAX,[ECX + 0x1]                 ; 005ac101
    MOV dword ptr [ESP + 0x18],EAX      ; 005ac104
    DEC dword ptr [ESP + 0x18]          ; 005ac108
        ;   Label: LAB_005ac108
    MOV ECX,dword ptr [ESP + 0x18]      ; 005ac10c
        ;   Label: LAB_005ac10c
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005ac110
    CMP EAX,ECX                         ; 005ac113
    JL 0x005ac11e                       ; 005ac115
        ;   XREF to: 005ac11e (CONDITIONAL_JUMP)  ; LAB_005ac11e
    MOV ESI,0x1                         ; 005ac117
    JZ 0x005ac125                       ; 005ac11c
        ;   XREF to: 005ac125 (CONDITIONAL_JUMP)  ; LAB_005ac125
    CMP dword ptr [ESP + 0x4],0x0       ; 005ac11e
        ;   Label: LAB_005ac11e
    JZ 0x005ac13c                       ; 005ac123
        ;   XREF to: 005ac13c (CONDITIONAL_JUMP)  ; LAB_005ac13c
    PUSH EBP                            ; 005ac125 | DAT_00607c0c
        ;   Label: LAB_005ac125
    PUSH EBX                            ; 005ac126
    CALL crt_unknown.c_FUN_005ac258     ; 005ac127
        ;   XREF to: 005ac258 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac258()
    ADD ESP,0x8                         ; 005ac12c
    TEST EAX,EAX                        ; 005ac12f
    SETZ AL                             ; 005ac131
    MOV ESI,EAX                         ; 005ac134
    AND ESI,0xff                        ; 005ac136
    TEST ESI,ESI                        ; 005ac13c
        ;   Label: LAB_005ac13c
    JNZ 0x005ac153                      ; 005ac13e
        ;   XREF to: 005ac153 (CONDITIONAL_JUMP)  ; LAB_005ac153
    MOV EDX,dword ptr [ESP + 0x10]      ; 005ac140
    TEST EDX,EDX                        ; 005ac144
    JZ 0x005ac24b                       ; 005ac146
        ;   XREF to: 005ac24b (CONDITIONAL_JUMP)  ; LAB_005ac24b
    MOV ESI,EDX                         ; 005ac14c
    JMP 0x005ac24b                      ; 005ac14e
        ;   XREF to: 005ac24b (UNCONDITIONAL_JUMP)  ; LAB_005ac24b
    XOR EBP,EBP                         ; 005ac153
        ;   Label: LAB_005ac153
    MOV EAX,dword ptr [EDI + 0x20]      ; 005ac155 | DAT_00607c08
    MOV dword ptr [ESP],EBP             ; 005ac158
    TEST EAX,EAX                        ; 005ac15b
    JNZ 0x005ac1f5                      ; 005ac15d
        ;   XREF to: 005ac1f5 (CONDITIONAL_JUMP)  ; LAB_005ac1f5
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ac163
    MOV EDX,dword ptr [EDI + 0x10]      ; 005ac167 | DAT_00607bf8
    CMP EAX,EDX                         ; 005ac16a
    JLE 0x005ac175                      ; 005ac16c
        ;   XREF to: 005ac175 (CONDITIONAL_JUMP)  ; LAB_005ac175
    XOR ESI,ESI                         ; 005ac16e
    JMP 0x005ac22d                      ; 005ac170
        ;   XREF to: 005ac22d (UNCONDITIONAL_JUMP)  ; LAB_005ac22d
    JNZ 0x005ac22d                      ; 005ac175
        ;   XREF to: 005ac22d (CONDITIONAL_JUMP)  ; LAB_005ac22d
        ;   Label: LAB_005ac175
    MOV EDX,dword ptr [EBX + 0x18]      ; 005ac17b
    MOV EBP,dword ptr [EDI + 0x18]      ; 005ac17e | DAT_00607c00
    ADD EDX,0x7                         ; 005ac181
    SUB EDX,EBP                         ; 005ac184
    MOV ECX,0x7                         ; 005ac186
    MOV EAX,EDX                         ; 005ac18b
    SAR EDX,0x1f                        ; 005ac18d
    IDIV ECX                            ; 005ac190
    MOV EBP,dword ptr [EBX + 0xc]       ; 005ac192
    SUB EBP,EDX                         ; 005ac195
    MOV EDX,dword ptr [EBX + 0x18]      ; 005ac197
    MOV EAX,dword ptr [EDI + 0x18]      ; 005ac19a | DAT_00607c00
    ADD EDX,0x6                         ; 005ac19d
    SUB EDX,EAX                         ; 005ac1a0
    MOV EAX,EDX                         ; 005ac1a2
    SAR EDX,0x1f                        ; 005ac1a4
    IDIV ECX                            ; 005ac1a7
    MOV EAX,dword ptr [EBX + 0xc]       ; 005ac1a9
    DEC EAX                             ; 005ac1ac
    XOR ESI,ESI                         ; 005ac1ad
    SUB EAX,EDX                         ; 005ac1af
    MOV ECX,dword ptr [EDI + 0xc]       ; 005ac1b1 | DAT_00607bf4
    MOV EDX,EAX                         ; 005ac1b4
    CMP ECX,0x5                         ; 005ac1b6
    JNZ 0x005ac1d9                      ; 005ac1b9
        ;   XREF to: 005ac1d9 (CONDITIONAL_JUMP)  ; LAB_005ac1d9
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ac1bb
    SUB EAX,0x7                         ; 005ac1bf
    CMP EBP,EAX                         ; 005ac1c2
    JG 0x005ac1d0                       ; 005ac1c4
        ;   XREF to: 005ac1d0 (CONDITIONAL_JUMP)  ; LAB_005ac1d0
    MOV ESI,0x1                         ; 005ac1c6
    JMP 0x005ac22d                      ; 005ac1cb
        ;   XREF to: 005ac22d (UNCONDITIONAL_JUMP)  ; LAB_005ac22d
    CMP EDX,EAX                         ; 005ac1d0
        ;   Label: LAB_005ac1d0
    JG 0x005ac22d                       ; 005ac1d2
        ;   XREF to: 005ac22d (CONDITIONAL_JUMP)  ; LAB_005ac22d
    JMP 0x005ac233                      ; 005ac1d4
        ;   XREF to: 005ac233 (UNCONDITIONAL_JUMP)  ; LAB_005ac233
    DEC ECX                             ; 005ac1d9
        ;   Label: LAB_005ac1d9
    LEA EAX,[ECX*0x8 + 0x0]             ; 005ac1da
    SUB EAX,ECX                         ; 005ac1e1
    INC EAX                             ; 005ac1e3
    CMP EBP,EAX                         ; 005ac1e4
    JGE 0x005ac1ef                      ; 005ac1e6
        ;   XREF to: 005ac1ef (CONDITIONAL_JUMP)  ; LAB_005ac1ef
    MOV ESI,0x1                         ; 005ac1e8
    JMP 0x005ac22d                      ; 005ac1ed
        ;   XREF to: 005ac22d (UNCONDITIONAL_JUMP)  ; LAB_005ac22d
    CMP EDX,EAX                         ; 005ac1ef
        ;   Label: LAB_005ac1ef
    JGE 0x005ac22d                      ; 005ac1f1
        ;   XREF to: 005ac22d (CONDITIONAL_JUMP)  ; LAB_005ac22d
    JMP 0x005ac233                      ; 005ac1f3
        ;   XREF to: 005ac233 (UNCONDITIONAL_JUMP)  ; LAB_005ac233
    MOV EBP,dword ptr [EDI + 0x1c]      ; 005ac1f5 | DAT_00607c04
        ;   Label: LAB_005ac1f5
    CMP EAX,0x1                         ; 005ac1f8
    JNZ 0x005ac220                      ; 005ac1fb
        ;   XREF to: 005ac220 (CONDITIONAL_JUMP)  ; LAB_005ac220
    MOV EAX,dword ptr [EBX + 0x14]      ; 005ac1fd
    ADD EAX,0x76c                       ; 005ac200
    PUSH EAX                            ; 005ac205
    CALL crt_unknown.c_FUN_005abdf0     ; 005ac206
        ;   XREF to: 005abdf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abdf0()
    ADD ESP,0x4                         ; 005ac20b
    TEST EAX,EAX                        ; 005ac20e
    JZ 0x005ac21f                       ; 005ac210
        ;   XREF to: 005ac21f (CONDITIONAL_JUMP)  ; LAB_005ac21f
    MOV EAX,[0x005e8806]                ; 005ac212 | DAT_005e8806
    SAR EAX,0x10                        ; 005ac217
    CMP EBP,EAX                         ; 005ac21a
    JLE 0x005ac21f                      ; 005ac21c
        ;   XREF to: 005ac21f (CONDITIONAL_JUMP)  ; LAB_005ac21f
    INC EBP                             ; 005ac21e
    DEC EBP                             ; 005ac21f
        ;   Label: LAB_005ac21f
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005ac220
        ;   Label: LAB_005ac220
    CMP EBP,ECX                         ; 005ac223
    JG 0x005ac22d                       ; 005ac225
        ;   XREF to: 005ac22d (CONDITIONAL_JUMP)  ; LAB_005ac22d
    XOR ESI,ESI                         ; 005ac227
    CMP EBP,ECX                         ; 005ac229
    JZ 0x005ac233                       ; 005ac22b
        ;   XREF to: 005ac233 (CONDITIONAL_JUMP)  ; LAB_005ac233
    CMP dword ptr [ESP],0x0             ; 005ac22d
        ;   Label: LAB_005ac22d
    JZ 0x005ac23f                       ; 005ac231
        ;   XREF to: 005ac23f (CONDITIONAL_JUMP)  ; LAB_005ac23f
    PUSH EDI                            ; 005ac233 | DAT_00607be8
        ;   Label: LAB_005ac233
    PUSH EBX                            ; 005ac234
    CALL crt_unknown.c_FUN_005ac258     ; 005ac235
        ;   XREF to: 005ac258 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac258()
    ADD ESP,0x8                         ; 005ac23a
    MOV ESI,EAX                         ; 005ac23d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ac23f
        ;   Label: LAB_005ac23f
    TEST EAX,EAX                        ; 005ac243
    JZ 0x005ac24b                       ; 005ac245
        ;   XREF to: 005ac24b (CONDITIONAL_JUMP)  ; LAB_005ac24b
    SUB EAX,ESI                         ; 005ac247
    MOV ESI,EAX                         ; 005ac249
    MOV EAX,ESI                         ; 005ac24b
        ;   Label: LAB_005ac24b
    MOV dword ptr [EBX + 0x20],ESI      ; 005ac24d
    ADD ESP,0x1c                        ; 005ac250
    POP EBP                             ; 005ac253
    POP EDI                             ; 005ac254
    POP ESI                             ; 005ac255
    POP EBX                             ; 005ac256
    RET                                 ; 005ac257

