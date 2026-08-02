; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_time_c_determine_dst_status_FUN_0056d034(_tm *timeptr)
;
; Parameters:
; _tm *            Stack[0x4]:4   timeptr
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
;   crt_time.c__mktime_FUN_00565fb0 at 005660e0
;   crt_unknown.c_localtime_r_FUN_00566590 at 005665b8
;
; Referenced Globals:
;   undefined4 g_fstreambaseTypeInfo_005a4a60.class_name+2
;   undefined4 DAT_005a4a78
;   undefined4 DAT_005a4a7a
;   undefined4 DAT_005a4a90
;   undefined4 DAT_005a4a92
;   undefined4 DAT_005c1dc0
;   undefined4 DAT_005c1dcc
;   undefined4 DAT_005c1dd0
;   undefined4 DAT_005c1dd8
;   undefined4 DAT_005c1ddc
;   undefined4 DAT_005c1de0
;   undefined4 DAT_005c1de4
;   undefined4 DAT_005c1df0
;   undefined4 DAT_005c1df4
;   undefined4 DAT_005c1dfc
;   ... and 4 more
;
; Called Functions:
;   crt_time.c_is_leap_year_FUN_0056cea0
;   crt_unknown.c_FUN_0056cfd8
;   crt_unknown.c_FUN_0056d308
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d034
        ;   Label: crt_time.c_determine_dst_status_FUN_0056d034
    PUSH ESI                            ; 0056d035
    PUSH EDI                            ; 0056d036
    PUSH EBP                            ; 0056d037
    SUB ESP,0x1c                        ; 0056d038
    MOV EBX,dword ptr [ESP + 0x30]      ; 0056d03b
    MOV EAX,[0x005c1f10]                ; 0056d03f | PTR_DAT_005c1f10
    MOV DL,byte ptr [EAX]               ; 0056d044 | DAT_005c1e89
    XOR ESI,ESI                         ; 0056d046
    TEST DL,DL                          ; 0056d048
    JZ 0x0056d2fb                       ; 0056d04a
        ;   XREF to: 0056d2fb (CONDITIONAL_JUMP)  ; LAB_0056d2fb
    MOV EDX,dword ptr [EBX + 0x14]      ; 0056d050
    PUSH EDX                            ; 0056d053
    PUSH 0x5c1de4                       ; 0056d054 | DAT_005c1de4
    PUSH 0x5c1dc0                       ; 0056d059 | DAT_005c1dc0
    CALL crt_unknown.c_FUN_0056cfd8     ; 0056d05e
        ;   XREF to: 0056cfd8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056cfd8()
    ADD ESP,0xc                         ; 0056d063
    MOV dword ptr [ESP + 0x10],EAX      ; 0056d066
    TEST EAX,EAX                        ; 0056d06a
    JZ 0x0056d07a                       ; 0056d06c
        ;   XREF to: 0056d07a (CONDITIONAL_JUMP)  ; LAB_0056d07a
    MOV EBP,0x5c1de4                    ; 0056d06e | DAT_005c1de4
    MOV EDI,0x5c1dc0                    ; 0056d073 | DAT_005c1dc0
    JMP 0x0056d084                      ; 0056d078
        ;   XREF to: 0056d084 (UNCONDITIONAL_JUMP)  ; LAB_0056d084
    MOV EBP,0x5c1dc0                    ; 0056d07a | DAT_005c1dc0
        ;   Label: LAB_0056d07a
    MOV EDI,0x5c1de4                    ; 0056d07f | DAT_005c1de4
    MOV EAX,dword ptr [EBX + 0x10]      ; 0056d084
        ;   Label: LAB_0056d084
    MOV dword ptr [ESP + 0x14],EAX      ; 0056d087
    MOV EAX,dword ptr [EBX + 0x14]      ; 0056d08b
    ADD EAX,0x76c                       ; 0056d08e
    PUSH EAX                            ; 0056d093
    CALL crt_time.c_is_leap_year_FUN_0056cea0 ; 0056d094
        ;   XREF to: 0056cea0 (UNCONDITIONAL_CALL)  ; int crt_time.c_is_leap_year_FUN_0056cea0(int year)
    ADD ESP,0x4                         ; 0056d099
    MOV EDX,EAX                         ; 0056d09c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056d09e
    ADD EAX,EAX                         ; 0056d0a2
    TEST EDX,EDX                        ; 0056d0a4
    JZ 0x0056d0b6                       ; 0056d0a6
        ;   XREF to: 0056d0b6 (CONDITIONAL_JUMP)  ; LAB_0056d0b6
    MOV EDX,dword ptr [EAX + 0x5a4a92]  ; 0056d0a8 | DAT_005a4a92
    MOV EAX,dword ptr [EAX + 0x5a4a90]  ; 0056d0ae | DAT_005a4a90
    JMP 0x0056d0c2                      ; 0056d0b4
        ;   XREF to: 0056d0c2 (UNCONDITIONAL_JUMP)  ; LAB_0056d0c2
    MOV EDX,dword ptr [EAX + 0x5a4a78]  ; 0056d0b6 | DAT_005a4a78
        ;   Label: LAB_0056d0b6
    MOV EAX,dword ptr [EAX + 0x5a4a76]  ; 0056d0bc | g_fstreambaseTypeInfo_005a4a60.class_name+2
    SAR EDX,0x10                        ; 0056d0c2
        ;   Label: LAB_0056d0c2
    SAR EAX,0x10                        ; 0056d0c5
    SUB EDX,EAX                         ; 0056d0c8
    MOV dword ptr [ESP + 0xc],EDX       ; 0056d0ca
    XOR ECX,ECX                         ; 0056d0ce
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056d0d0 | DAT_005c1e04
    MOV dword ptr [ESP + 0x4],ECX       ; 0056d0d3
    TEST EAX,EAX                        ; 0056d0d7
    JNZ 0x0056d17d                      ; 0056d0d9
        ;   XREF to: 0056d17d (CONDITIONAL_JUMP)  ; LAB_0056d17d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056d0df
    MOV ECX,dword ptr [EBP + 0x10]      ; 0056d0e3 | DAT_005c1df4
    CMP EAX,ECX                         ; 0056d0e6
    JLE 0x0056d0f4                      ; 0056d0e8
        ;   XREF to: 0056d0f4 (CONDITIONAL_JUMP)  ; LAB_0056d0f4
    MOV ESI,0x1                         ; 0056d0ea
    JMP 0x0056d1ce                      ; 0056d0ef
        ;   XREF to: 0056d1ce (UNCONDITIONAL_JUMP)  ; LAB_0056d1ce
    JNZ 0x0056d1ce                      ; 0056d0f4
        ;   XREF to: 0056d1ce (CONDITIONAL_JUMP)  ; LAB_0056d1ce
        ;   Label: LAB_0056d0f4
    MOV EDX,dword ptr [EBX + 0x18]      ; 0056d0fa
    MOV ECX,dword ptr [EBP + 0x18]      ; 0056d0fd | DAT_005c1dfc
    ADD EDX,0x7                         ; 0056d100
    SUB EDX,ECX                         ; 0056d103
    MOV ECX,0x7                         ; 0056d105
    MOV EAX,EDX                         ; 0056d10a
    SAR EDX,0x1f                        ; 0056d10c
    IDIV ECX                            ; 0056d10f
    MOV EAX,dword ptr [EBX + 0xc]       ; 0056d111
    SUB EAX,EDX                         ; 0056d114
    MOV EDX,dword ptr [EBX + 0x18]      ; 0056d116
    MOV dword ptr [ESP + 0x8],EAX       ; 0056d119
    ADD EDX,0x6                         ; 0056d11d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056d120 | DAT_005c1dfc
    SUB EDX,EAX                         ; 0056d123
    MOV EAX,EDX                         ; 0056d125
    SAR EDX,0x1f                        ; 0056d127
    IDIV ECX                            ; 0056d12a
    MOV ECX,dword ptr [EBX + 0xc]       ; 0056d12c
    DEC ECX                             ; 0056d12f
    SUB ECX,EDX                         ; 0056d130
    MOV EDX,dword ptr [EBP + 0xc]       ; 0056d132 | DAT_005c1df0
    CMP EDX,0x5                         ; 0056d135
    JNZ 0x0056d15f                      ; 0056d138
        ;   XREF to: 0056d15f (CONDITIONAL_JUMP)  ; LAB_0056d15f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056d13a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056d13e
    SUB EAX,0x7                         ; 0056d142
    CMP EAX,EDX                         ; 0056d145
    JGE 0x0056d1ce                      ; 0056d147
        ;   XREF to: 0056d1ce (CONDITIONAL_JUMP)  ; LAB_0056d1ce
    MOV ESI,0x1                         ; 0056d14d
    CMP ECX,EAX                         ; 0056d152
    JG 0x0056d1ce                       ; 0056d154
        ;   XREF to: 0056d1ce (CONDITIONAL_JUMP)  ; LAB_0056d1ce
    JMP 0x0056d1d5                      ; 0056d15a
        ;   XREF to: 0056d1d5 (UNCONDITIONAL_JUMP)  ; LAB_0056d1d5
    DEC EDX                             ; 0056d15f
        ;   Label: LAB_0056d15f
    LEA EAX,[EDX*0x8 + 0x0]             ; 0056d160
    SUB EAX,EDX                         ; 0056d167
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056d169
    INC EAX                             ; 0056d16d
    CMP EAX,EDX                         ; 0056d16e
    JG 0x0056d1ce                       ; 0056d170
        ;   XREF to: 0056d1ce (CONDITIONAL_JUMP)  ; LAB_0056d1ce
    MOV ESI,0x1                         ; 0056d172
    CMP ECX,EAX                         ; 0056d177
    JGE 0x0056d1ce                      ; 0056d179
        ;   XREF to: 0056d1ce (CONDITIONAL_JUMP)  ; LAB_0056d1ce
    JMP 0x0056d1d5                      ; 0056d17b
        ;   XREF to: 0056d1d5 (UNCONDITIONAL_JUMP)  ; LAB_0056d1d5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0056d17d | DAT_005c1e00
        ;   Label: LAB_0056d17d
    MOV EDX,dword ptr [EBP + 0x20]      ; 0056d180 | DAT_005c1e04
    MOV dword ptr [ESP + 0x18],EAX      ; 0056d183
    CMP EDX,0x1                         ; 0056d187
    JNZ 0x0056d1bc                      ; 0056d18a
        ;   XREF to: 0056d1bc (CONDITIONAL_JUMP)  ; LAB_0056d1bc
    MOV EAX,dword ptr [EBX + 0x14]      ; 0056d18c
    ADD EAX,0x76c                       ; 0056d18f
    PUSH EAX                            ; 0056d194
    CALL crt_time.c_is_leap_year_FUN_0056cea0 ; 0056d195
        ;   XREF to: 0056cea0 (UNCONDITIONAL_CALL)  ; int crt_time.c_is_leap_year_FUN_0056cea0(int year)
    ADD ESP,0x4                         ; 0056d19a
    TEST EAX,EAX                        ; 0056d19d
    JZ 0x0056d1b8                       ; 0056d19f
        ;   XREF to: 0056d1b8 (CONDITIONAL_JUMP)  ; LAB_0056d1b8
    MOV EAX,[0x005a4a7a]                ; 0056d1a1 | DAT_005a4a7a
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056d1a6
    SAR EAX,0x10                        ; 0056d1aa
    CMP EAX,ECX                         ; 0056d1ad
    JGE 0x0056d1b8                      ; 0056d1af
        ;   XREF to: 0056d1b8 (CONDITIONAL_JUMP)  ; LAB_0056d1b8
    LEA EAX,[ECX + 0x1]                 ; 0056d1b1
    MOV dword ptr [ESP + 0x18],EAX      ; 0056d1b4
    DEC dword ptr [ESP + 0x18]          ; 0056d1b8
        ;   Label: LAB_0056d1b8
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056d1bc
        ;   Label: LAB_0056d1bc
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0056d1c0
    CMP EAX,ECX                         ; 0056d1c3
    JL 0x0056d1ce                       ; 0056d1c5
        ;   XREF to: 0056d1ce (CONDITIONAL_JUMP)  ; LAB_0056d1ce
    MOV ESI,0x1                         ; 0056d1c7
    JZ 0x0056d1d5                       ; 0056d1cc
        ;   XREF to: 0056d1d5 (CONDITIONAL_JUMP)  ; LAB_0056d1d5
    CMP dword ptr [ESP + 0x4],0x0       ; 0056d1ce
        ;   Label: LAB_0056d1ce
    JZ 0x0056d1ec                       ; 0056d1d3
        ;   XREF to: 0056d1ec (CONDITIONAL_JUMP)  ; LAB_0056d1ec
    PUSH EBP                            ; 0056d1d5 | DAT_005c1de4
        ;   Label: LAB_0056d1d5
    PUSH EBX                            ; 0056d1d6
    CALL crt_unknown.c_FUN_0056d308     ; 0056d1d7
        ;   XREF to: 0056d308 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056d308()
    ADD ESP,0x8                         ; 0056d1dc
    TEST EAX,EAX                        ; 0056d1df
    SETZ AL                             ; 0056d1e1
    MOV ESI,EAX                         ; 0056d1e4
    AND ESI,0xff                        ; 0056d1e6
    TEST ESI,ESI                        ; 0056d1ec
        ;   Label: LAB_0056d1ec
    JNZ 0x0056d203                      ; 0056d1ee
        ;   XREF to: 0056d203 (CONDITIONAL_JUMP)  ; LAB_0056d203
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056d1f0
    TEST EDX,EDX                        ; 0056d1f4
    JZ 0x0056d2fb                       ; 0056d1f6
        ;   XREF to: 0056d2fb (CONDITIONAL_JUMP)  ; LAB_0056d2fb
    MOV ESI,EDX                         ; 0056d1fc
    JMP 0x0056d2fb                      ; 0056d1fe
        ;   XREF to: 0056d2fb (UNCONDITIONAL_JUMP)  ; LAB_0056d2fb
    XOR EBP,EBP                         ; 0056d203
        ;   Label: LAB_0056d203
    MOV EAX,dword ptr [EDI + 0x20]      ; 0056d205 | DAT_005c1de0
    MOV dword ptr [ESP],EBP             ; 0056d208
    TEST EAX,EAX                        ; 0056d20b
    JNZ 0x0056d2a5                      ; 0056d20d
        ;   XREF to: 0056d2a5 (CONDITIONAL_JUMP)  ; LAB_0056d2a5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056d213
    MOV EDX,dword ptr [EDI + 0x10]      ; 0056d217 | DAT_005c1dd0
    CMP EAX,EDX                         ; 0056d21a
    JLE 0x0056d225                      ; 0056d21c
        ;   XREF to: 0056d225 (CONDITIONAL_JUMP)  ; LAB_0056d225
    XOR ESI,ESI                         ; 0056d21e
    JMP 0x0056d2dd                      ; 0056d220
        ;   XREF to: 0056d2dd (UNCONDITIONAL_JUMP)  ; LAB_0056d2dd
    JNZ 0x0056d2dd                      ; 0056d225
        ;   XREF to: 0056d2dd (CONDITIONAL_JUMP)  ; LAB_0056d2dd
        ;   Label: LAB_0056d225
    MOV EDX,dword ptr [EBX + 0x18]      ; 0056d22b
    MOV EBP,dword ptr [EDI + 0x18]      ; 0056d22e | DAT_005c1dd8
    ADD EDX,0x7                         ; 0056d231
    SUB EDX,EBP                         ; 0056d234
    MOV ECX,0x7                         ; 0056d236
    MOV EAX,EDX                         ; 0056d23b
    SAR EDX,0x1f                        ; 0056d23d
    IDIV ECX                            ; 0056d240
    MOV EBP,dword ptr [EBX + 0xc]       ; 0056d242
    SUB EBP,EDX                         ; 0056d245
    MOV EDX,dword ptr [EBX + 0x18]      ; 0056d247
    MOV EAX,dword ptr [EDI + 0x18]      ; 0056d24a | DAT_005c1dd8
    ADD EDX,0x6                         ; 0056d24d
    SUB EDX,EAX                         ; 0056d250
    MOV EAX,EDX                         ; 0056d252
    SAR EDX,0x1f                        ; 0056d254
    IDIV ECX                            ; 0056d257
    MOV EAX,dword ptr [EBX + 0xc]       ; 0056d259
    DEC EAX                             ; 0056d25c
    XOR ESI,ESI                         ; 0056d25d
    SUB EAX,EDX                         ; 0056d25f
    MOV ECX,dword ptr [EDI + 0xc]       ; 0056d261 | DAT_005c1dcc
    MOV EDX,EAX                         ; 0056d264
    CMP ECX,0x5                         ; 0056d266
    JNZ 0x0056d289                      ; 0056d269
        ;   XREF to: 0056d289 (CONDITIONAL_JUMP)  ; LAB_0056d289
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056d26b
    SUB EAX,0x7                         ; 0056d26f
    CMP EBP,EAX                         ; 0056d272
    JG 0x0056d280                       ; 0056d274
        ;   XREF to: 0056d280 (CONDITIONAL_JUMP)  ; LAB_0056d280
    MOV ESI,0x1                         ; 0056d276
    JMP 0x0056d2dd                      ; 0056d27b
        ;   XREF to: 0056d2dd (UNCONDITIONAL_JUMP)  ; LAB_0056d2dd
    CMP EDX,EAX                         ; 0056d280
        ;   Label: LAB_0056d280
    JG 0x0056d2dd                       ; 0056d282
        ;   XREF to: 0056d2dd (CONDITIONAL_JUMP)  ; LAB_0056d2dd
    JMP 0x0056d2e3                      ; 0056d284
        ;   XREF to: 0056d2e3 (UNCONDITIONAL_JUMP)  ; LAB_0056d2e3
    DEC ECX                             ; 0056d289
        ;   Label: LAB_0056d289
    LEA EAX,[ECX*0x8 + 0x0]             ; 0056d28a
    SUB EAX,ECX                         ; 0056d291
    INC EAX                             ; 0056d293
    CMP EBP,EAX                         ; 0056d294
    JGE 0x0056d29f                      ; 0056d296
        ;   XREF to: 0056d29f (CONDITIONAL_JUMP)  ; LAB_0056d29f
    MOV ESI,0x1                         ; 0056d298
    JMP 0x0056d2dd                      ; 0056d29d
        ;   XREF to: 0056d2dd (UNCONDITIONAL_JUMP)  ; LAB_0056d2dd
    CMP EDX,EAX                         ; 0056d29f
        ;   Label: LAB_0056d29f
    JGE 0x0056d2dd                      ; 0056d2a1
        ;   XREF to: 0056d2dd (CONDITIONAL_JUMP)  ; LAB_0056d2dd
    JMP 0x0056d2e3                      ; 0056d2a3
        ;   XREF to: 0056d2e3 (UNCONDITIONAL_JUMP)  ; LAB_0056d2e3
    MOV EBP,dword ptr [EDI + 0x1c]      ; 0056d2a5 | DAT_005c1ddc
        ;   Label: LAB_0056d2a5
    CMP EAX,0x1                         ; 0056d2a8
    JNZ 0x0056d2d0                      ; 0056d2ab
        ;   XREF to: 0056d2d0 (CONDITIONAL_JUMP)  ; LAB_0056d2d0
    MOV EAX,dword ptr [EBX + 0x14]      ; 0056d2ad
    ADD EAX,0x76c                       ; 0056d2b0
    PUSH EAX                            ; 0056d2b5
    CALL crt_time.c_is_leap_year_FUN_0056cea0 ; 0056d2b6
        ;   XREF to: 0056cea0 (UNCONDITIONAL_CALL)  ; int crt_time.c_is_leap_year_FUN_0056cea0(int year)
    ADD ESP,0x4                         ; 0056d2bb
    TEST EAX,EAX                        ; 0056d2be
    JZ 0x0056d2cf                       ; 0056d2c0
        ;   XREF to: 0056d2cf (CONDITIONAL_JUMP)  ; LAB_0056d2cf
    MOV EAX,[0x005a4a7a]                ; 0056d2c2 | DAT_005a4a7a
    SAR EAX,0x10                        ; 0056d2c7
    CMP EBP,EAX                         ; 0056d2ca
    JLE 0x0056d2cf                      ; 0056d2cc
        ;   XREF to: 0056d2cf (CONDITIONAL_JUMP)  ; LAB_0056d2cf
    INC EBP                             ; 0056d2ce
    DEC EBP                             ; 0056d2cf
        ;   Label: LAB_0056d2cf
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0056d2d0
        ;   Label: LAB_0056d2d0
    CMP EBP,ECX                         ; 0056d2d3
    JG 0x0056d2dd                       ; 0056d2d5
        ;   XREF to: 0056d2dd (CONDITIONAL_JUMP)  ; LAB_0056d2dd
    XOR ESI,ESI                         ; 0056d2d7
    CMP EBP,ECX                         ; 0056d2d9
    JZ 0x0056d2e3                       ; 0056d2db
        ;   XREF to: 0056d2e3 (CONDITIONAL_JUMP)  ; LAB_0056d2e3
    CMP dword ptr [ESP],0x0             ; 0056d2dd
        ;   Label: LAB_0056d2dd
    JZ 0x0056d2ef                       ; 0056d2e1
        ;   XREF to: 0056d2ef (CONDITIONAL_JUMP)  ; LAB_0056d2ef
    PUSH EDI                            ; 0056d2e3 | DAT_005c1dc0
        ;   Label: LAB_0056d2e3
    PUSH EBX                            ; 0056d2e4
    CALL crt_unknown.c_FUN_0056d308     ; 0056d2e5
        ;   XREF to: 0056d308 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056d308()
    ADD ESP,0x8                         ; 0056d2ea
    MOV ESI,EAX                         ; 0056d2ed
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056d2ef
        ;   Label: LAB_0056d2ef
    TEST EAX,EAX                        ; 0056d2f3
    JZ 0x0056d2fb                       ; 0056d2f5
        ;   XREF to: 0056d2fb (CONDITIONAL_JUMP)  ; LAB_0056d2fb
    SUB EAX,ESI                         ; 0056d2f7
    MOV ESI,EAX                         ; 0056d2f9
    MOV EAX,ESI                         ; 0056d2fb
        ;   Label: LAB_0056d2fb
    MOV dword ptr [EBX + 0x20],ESI      ; 0056d2fd
    ADD ESP,0x1c                        ; 0056d300
    POP EBP                             ; 0056d303
    POP EDI                             ; 0056d304
    POP ESI                             ; 0056d305
    POP EBX                             ; 0056d306
    RET                                 ; 0056d307

