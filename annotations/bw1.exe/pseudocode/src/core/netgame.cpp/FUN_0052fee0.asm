; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052fee0(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined1       Stack[-0x94]:1  local_94
; undefined4       Stack[-0x93]:4  local_93
; undefined4       Stack[-0x8f]:4  local_8f
; undefined4       Stack[-0x8b]:4  local_8b
; undefined        Stack[-0x87]:1  local_87
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004ce580 at 004ce615
;   FUN_004cf5e0 at 004cf99a
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005eb62a
;   TerminatedCString s_allocSimFrame_sim_histor_005eb63e
;   TerminatedCString s_core_netgame_cpp_005ec159
;   TerminatedCString s_CNetGame_processServerFr_005ec16d
;   TerminatedCString s_core_netgame_cpp_005ec1a4
;   TerminatedCString s_CNetGame_processServerFr_005ec1b8
;   TerminatedCString s_core_netgame_cpp_005ec1fe
;   TerminatedCString s_CNetGame_processServerFr_005ec212
;   TerminatedCString s_core_netgame_cpp_005ec253
;   TerminatedCString s_CNetGame_processServerFr_005ec267
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf624
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d51d9c
;   ... and 8 more
;
; Called Functions:
;   FUN_0040cb80
;   FUN_005030e0
;   FUN_0052d360
;   FUN_0052df50
;   FUN_0052ea10
;   FUN_005305a0
;   FUN_005b2420
;   FUN_005bfb70
;   FUN_005c084c
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052fee0
        ;   Label: FUN_0052fee0
    PUSH ESI                            ; 0052fee1
    PUSH EDI                            ; 0052fee2
    PUSH EBP                            ; 0052fee3
    SUB ESP,0x88                        ; 0052fee4
    MOV EBX,dword ptr [ESP + 0x9c]      ; 0052feea
    CALL FUN_005b2420                   ; 0052fef1
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV EDX,EAX                         ; 0052fef6
    MOV ECX,0x12                        ; 0052fef8
    SAR EDX,0x1f                        ; 0052fefd
    IDIV ECX                            ; 0052ff00
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052ff02 | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052ff08
    SUB EAX,ECX                         ; 0052ff0a
    MOV dword ptr [0x01d51d9c],EDX      ; 0052ff0c | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052ff12
    JL 0x00530133                       ; 0052ff14
        ;   XREF to: 00530133 (CONDITIONAL_JUMP)  ; LAB_00530133
    CMP EAX,0x20000                     ; 0052ff1a
    JLE 0x0052ff26                      ; 0052ff1f
        ;   XREF to: 0052ff26 (CONDITIONAL_JUMP)  ; LAB_0052ff26
    MOV EAX,0x20000                     ; 0052ff21
    MOV ESI,dword ptr [0x01d51da0]      ; 0052ff26 | DAT_01d51da0
        ;   Label: LAB_0052ff26
    ADD ESI,EAX                         ; 0052ff2c
    MOV EDI,dword ptr [EBX]             ; 0052ff2e
    MOV dword ptr [0x01d51da0],ESI      ; 0052ff30 | DAT_01d51da0
    TEST EDI,EDI                        ; 0052ff36
    JZ 0x0053013a                       ; 0052ff38
        ;   XREF to: 0053013a (CONDITIONAL_JUMP)  ; LAB_0053013a
    CMP EDI,0x1                         ; 0052ff3e
    JNZ 0x00530128                      ; 0052ff41
        ;   XREF to: 00530128 (CONDITIONAL_JUMP)  ; LAB_00530128
    CMP dword ptr [EBX + 0x4],0x3       ; 0052ff47
    JNZ 0x00530128                      ; 0052ff4b
        ;   XREF to: 00530128 (CONDITIONAL_JUMP)  ; LAB_00530128
    CMP dword ptr [EBX + 0x11c],0x0     ; 0052ff51
    JL 0x00530159                       ; 0052ff58
        ;   XREF to: 00530159 (CONDITIONAL_JUMP)  ; LAB_00530159
    MOV EDI,dword ptr [EBX + 0x11c]     ; 0052ff5e
        ;   Label: LAB_0052ff5e
    CMP EDI,dword ptr [EBX + 0x118]     ; 0052ff64
    JZ 0x0052ff8e                       ; 0052ff6a
        ;   XREF to: 0052ff8e (CONDITIONAL_JUMP)  ; LAB_0052ff8e
    MOV EBP,0x5ec1a4                    ; 0052ff6c | = "..\\core\\netgame.cpp"
    MOV EAX,0x8f7                       ; 0052ff71
    PUSH 0x5ec1b8                       ; 0052ff76 | = "CNetGame::processServerFrame - I'm no..."
    MOV dword ptr [0x01d1d400],EBP      ; 0052ff7b | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0052ff81 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052ff86
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0052ff8b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0052ff8e
        ;   Label: LAB_0052ff8e
    XOR ESI,ESI                         ; 0052ff91
    TEST EDX,EDX                        ; 0052ff93
    JLE 0x0052ffb0                      ; 0052ff95
        ;   XREF to: 0052ffb0 (CONDITIONAL_JUMP)  ; LAB_0052ffb0
    PUSH 0x41200000                     ; 0052ff97
        ;   Label: LAB_0052ff97
    PUSH ESI                            ; 0052ff9c
    PUSH EBX                            ; 0052ff9d
    CALL FUN_0052ea10                   ; 0052ff9e
        ;   XREF to: 0052ea10 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ea10()
    INC ESI                             ; 0052ffa3
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0052ffa4
    ADD ESP,0xc                         ; 0052ffa7
    CMP ESI,EDI                         ; 0052ffaa
    JL 0x0052ff97                       ; 0052ffac
        ;   XREF to: 0052ff97 (CONDITIONAL_JUMP)  ; LAB_0052ff97
    MOV EAX,EAX                         ; 0052ffae
    PUSH EBX                            ; 0052ffb0
        ;   Label: LAB_0052ffb0
    CALL FUN_0052d360                   ; 0052ffb1
        ;   XREF to: 0052d360 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d360()
    MOV EDX,0x7fffffff                  ; 0052ffb6
    ADD ESP,0x4                         ; 0052ffbb
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0052ffbe
    XOR EAX,EAX                         ; 0052ffc1
    TEST EBP,EBP                        ; 0052ffc3
    JLE 0x0052ffdd                      ; 0052ffc5
        ;   XREF to: 0052ffdd (CONDITIONAL_JUMP)  ; LAB_0052ffdd
    MOV ESI,EBX                         ; 0052ffc7
    MOV EBP,dword ptr [ESI + 0x68]      ; 0052ffc9
        ;   Label: LAB_0052ffc9
    CMP EDX,EBP                         ; 0052ffcc
    JLE 0x0052ffd2                      ; 0052ffce
        ;   XREF to: 0052ffd2 (CONDITIONAL_JUMP)  ; LAB_0052ffd2
    MOV EDX,EBP                         ; 0052ffd0
    INC EAX                             ; 0052ffd2
        ;   Label: LAB_0052ffd2
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0052ffd3
    ADD ESI,0x7c                        ; 0052ffd6
    CMP EAX,ECX                         ; 0052ffd9
    JL 0x0052ffc9                       ; 0052ffdb
        ;   XREF to: 0052ffc9 (CONDITIONAL_JUMP)  ; LAB_0052ffc9
    MOV EDI,dword ptr [0x01d715a8]      ; 0052ffdd | DAT_01d715a8
        ;   Label: LAB_0052ffdd
    MOV dword ptr [ESP + 0x80],EDX      ; 0052ffe3
    XOR ESI,ESI                         ; 0052ffea
    TEST EDI,EDI                        ; 0052ffec
    JLE 0x00530037                      ; 0052ffee
        ;   XREF to: 00530037 (CONDITIONAL_JUMP)  ; LAB_00530037
    MOV EDI,0x1d715ac                   ; 0052fff0
    XOR EBP,EBP                         ; 0052fff5
    ADD EDI,0x6c                        ; 0052fff7
    MOV ECX,dword ptr [ESP + 0x80]      ; 0052fffa
        ;   Label: LAB_0052fffa
    CMP ECX,dword ptr [EBP + 0x1d715ac] ; 00530001
    JLE 0x00530181                      ; 00530007
        ;   XREF to: 00530181 (CONDITIONAL_JUMP)  ; LAB_00530181
    MOV EAX,[0x01d715a8]                ; 0053000d | DAT_01d715a8
    DEC EAX                             ; 00530012
    MOV [0x01d715a8],EAX                ; 00530013 | DAT_01d715a8
    SUB EAX,ESI                         ; 00530018
    IMUL EAX,EAX,0x6c                   ; 0053001a
    PUSH EAX                            ; 0053001d
    MOV EAX,0x1d715ac                   ; 0053001e
    PUSH EDI                            ; 00530023 | DAT_01d71618
    ADD EAX,EBP                         ; 00530024
    PUSH EAX                            ; 00530026
    CALL FUN_005c25d0                   ; 00530027
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 0053002c
    CMP ESI,dword ptr [0x01d715a8]      ; 0053002f | DAT_01d715a8
        ;   Label: LAB_0053002f
    JL 0x0052fffa                       ; 00530035
        ;   XREF to: 0052fffa (CONDITIONAL_JUMP)  ; LAB_0052fffa
    MOV EAX,dword ptr [EBX + 0x11c]     ; 00530037
        ;   Label: LAB_00530037
    SHL EAX,0x2                         ; 0053003d
    MOV EDX,EAX                         ; 00530040
    SHL EAX,0x5                         ; 00530042
    SUB EAX,EDX                         ; 00530045
    LEA ESI,[EBX + EAX*0x1]             ; 00530047
    XOR EDI,EDI                         ; 0053004a
    MOV ESI,dword ptr [ESI + 0x68]      ; 0053004c
    MOV EDX,dword ptr [0x01d715a8]      ; 0053004f | DAT_01d715a8
    MOV EBP,ESI                         ; 00530055
    TEST EDX,EDX                        ; 00530057
    JLE 0x00530199                      ; 00530059
        ;   XREF to: 00530199 (CONDITIONAL_JUMP)  ; LAB_00530199
    MOV ECX,EDX                         ; 0053005f
    SHL EDX,0x2                         ; 00530061
    SUB EDX,ECX                         ; 00530064
    SHL EDX,0x2                         ; 00530066
    MOV ECX,EDX                         ; 00530069
    SHL EDX,0x3                         ; 0053006b
    XOR EAX,EAX                         ; 0053006e
    ADD EDX,ECX                         ; 00530070
    CMP EBP,dword ptr [EAX + 0x1d715ac] ; 00530072 | DAT_01d71618
        ;   Label: LAB_00530072
    JNZ 0x0053018d                      ; 00530078
        ;   XREF to: 0053018d (CONDITIONAL_JUMP)  ; LAB_0053018d
    TEST EDI,EDI                        ; 0053007e
    JL 0x00530199                       ; 00530080
        ;   XREF to: 00530199 (CONDITIONAL_JUMP)  ; LAB_00530199
    MOV EBP,0x1d715ac                   ; 00530086
    ADD EBP,EAX                         ; 0053008b
    CALL FUN_005c084c                   ; 0053008d
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; undefined FUN_005c084c()
        ;   Label: LAB_0053008d
    MOV dword ptr [EBP + 0x4],EAX       ; 00530092
    MOV EAX,[0x0061d95c]                ; 00530095 | DAT_0061d95c
    MOV dword ptr [ESP + 0x7c],EBP      ; 0053009a
    MOV EDX,dword ptr [EAX + 0x294]     ; 0053009e | DAT_01ccf624
    MOV dword ptr [EBP + 0x8],EDX       ; 005300a4
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005300a7
    XOR EAX,EAX                         ; 005300aa
    TEST ECX,ECX                        ; 005300ac
    JLE 0x005300d0                      ; 005300ae
        ;   XREF to: 005300d0 (CONDITIONAL_JUMP)  ; LAB_005300d0
    MOV EDX,EBX                         ; 005300b0
    MOV ECX,0xc                         ; 005300b2
        ;   Label: LAB_005300b2
    LEA EDI,[EBP + 0xc]                 ; 005300b7
    LEA ESI,[EDX + 0x6c]                ; 005300ba
    ADD EBP,0x30                        ; 005300bd
    MOVSD.REP ES:EDI,ESI                ; 005300c0
    INC EAX                             ; 005300c2
    MOV ESI,dword ptr [EBX + 0x1c]      ; 005300c3
    ADD EDX,0x7c                        ; 005300c6
    CMP EAX,ESI                         ; 005300c9
    JL 0x005300b2                       ; 005300cb
        ;   XREF to: 005300b2 (CONDITIONAL_JUMP)  ; LAB_005300b2
    LEA EAX,[EAX]                       ; 005300cd
    MOV EDI,dword ptr [ESP + 0x7c]      ; 005300d0
        ;   Label: LAB_005300d0
    PUSH EDI                            ; 005300d4
    PUSH EBX                            ; 005300d5
    XOR EBP,EBP                         ; 005300d6
    CALL FUN_005305a0                   ; 005300d8
        ;   XREF to: 005305a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005305a0()
    ADD ESP,0x8                         ; 005300dd
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005300e0
    MOV dword ptr [ESP + 0x74],EBP      ; 005300e3
    TEST EAX,EAX                        ; 005300e7
    JLE 0x00530128                      ; 005300e9
        ;   XREF to: 00530128 (CONDITIONAL_JUMP)  ; LAB_00530128
    LEA EAX,[EBX + 0x20]                ; 005300eb
    MOV dword ptr [ESP + 0x84],EAX      ; 005300ee
    MOV EAX,dword ptr [ESP + 0x74]      ; 005300f5
        ;   Label: LAB_005300f5
    MOV EDI,dword ptr [EBX + 0x11c]     ; 005300f9
    CMP EAX,EDI                         ; 005300ff
    JNZ 0x00530209                      ; 00530101
        ;   XREF to: 00530209 (CONDITIONAL_JUMP)  ; LAB_00530209
    MOV EDX,dword ptr [ESP + 0x84]      ; 00530107
        ;   Label: LAB_00530107
    MOV ECX,dword ptr [ESP + 0x74]      ; 0053010e
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00530112
    ADD EDX,0x7c                        ; 00530115
    INC ECX                             ; 00530118
    MOV dword ptr [ESP + 0x84],EDX      ; 00530119
    MOV dword ptr [ESP + 0x74],ECX      ; 00530120
    CMP ECX,ESI                         ; 00530124
    JL 0x005300f5                       ; 00530126
        ;   XREF to: 005300f5 (CONDITIONAL_JUMP)  ; LAB_005300f5
    ADD ESP,0x88                        ; 00530128
        ;   Label: LAB_00530128
    POP EBP                             ; 0053012e
    POP EDI                             ; 0053012f
    POP ESI                             ; 00530130
    POP EBX                             ; 00530131
    RET                                 ; 00530132
    XOR EAX,EAX                         ; 00530133
        ;   Label: LAB_00530133
    JMP 0x0052ff26                      ; 00530135
        ;   XREF to: 0052ff26 (UNCONDITIONAL_JUMP)  ; LAB_0052ff26
    CALL FUN_005c084c                   ; 0053013a
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; undefined FUN_005c084c()
        ;   Label: LAB_0053013a
    PUSH EAX                            ; 0053013f
    MOV dword ptr [EBX + 0x174],EAX     ; 00530140
    CALL FUN_0040cb80                   ; 00530146
        ;   XREF to: 0040cb80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb80()
    ADD ESP,0x4                         ; 0053014b
    ADD ESP,0x88                        ; 0053014e
    POP EBP                             ; 00530154
    POP EDI                             ; 00530155
    POP ESI                             ; 00530156
    POP EBX                             ; 00530157
    RET                                 ; 00530158
    MOV ECX,0x5ec159                    ; 00530159 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00530159
    MOV ESI,0x8f6                       ; 0053015e
    PUSH 0x5ec16d                       ; 00530163 | = "CNetGame::processServerFrame - I'm no..."
    MOV dword ptr [0x01d1d400],ECX      ; 00530168 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0053016e | DAT_01d1d404
    CALL FUN_005030e0                   ; 00530174
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00530179
    JMP 0x0052ff5e                      ; 0053017c
        ;   XREF to: 0052ff5e (UNCONDITIONAL_JUMP)  ; LAB_0052ff5e
    ADD EDI,0x6c                        ; 00530181
        ;   Label: LAB_00530181
    INC ESI                             ; 00530184
    ADD EBP,0x6c                        ; 00530185
    JMP 0x0053002f                      ; 00530188
        ;   XREF to: 0053002f (UNCONDITIONAL_JUMP)  ; LAB_0053002f
    ADD EAX,0x6c                        ; 0053018d
        ;   Label: LAB_0053018d
    INC EDI                             ; 00530190
    CMP EAX,EDX                         ; 00530191
    JL 0x00530072                       ; 00530193
        ;   XREF to: 00530072 (CONDITIONAL_JUMP)  ; LAB_00530072
    CMP dword ptr [0x01d715a8],0x200    ; 00530199 | DAT_01d715a8
        ;   Label: LAB_00530199
    JL 0x005301c7                       ; 005301a3
        ;   XREF to: 005301c7 (CONDITIONAL_JUMP)  ; LAB_005301c7
    MOV EBP,0x5eb62a                    ; 005301a5 | = "..\\core\\netgame.cpp"
    MOV EAX,0x12b                       ; 005301aa
    PUSH 0x5eb63e                       ; 005301af | = "allocSimFrame - sim history list full"
    MOV dword ptr [0x01d1d400],EBP      ; 005301b4 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005301ba | DAT_01d1d404
    CALL FUN_005030e0                   ; 005301bf
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005301c4
    MOV EDX,dword ptr [0x01d715a8]      ; 005301c7 | DAT_01d715a8
        ;   Label: LAB_005301c7
    LEA EAX,[EDX*0x4 + 0x0]             ; 005301cd
    SUB EAX,EDX                         ; 005301d4
    MOV EBP,0x1d715ac                   ; 005301d6
    SHL EAX,0x2                         ; 005301db
    PUSH 0x6c                           ; 005301de
    MOV EDX,EAX                         ; 005301e0
    SHL EAX,0x3                         ; 005301e2
    PUSH 0x0                            ; 005301e5
    ADD EAX,EDX                         ; 005301e7
    MOV EDX,dword ptr [0x01d715a8]      ; 005301e9 | DAT_01d715a8
    ADD EBP,EAX                         ; 005301ef
    INC EDX                             ; 005301f1
    PUSH EBP                            ; 005301f2
    MOV dword ptr [0x01d715a8],EDX      ; 005301f3 | DAT_01d715a8
    CALL FUN_005bfb70                   ; 005301f9
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 005301fe
    MOV dword ptr [EBP],ESI             ; 00530201
    JMP 0x0053008d                      ; 00530204
        ;   XREF to: 0053008d (UNCONDITIONAL_JUMP)  ; LAB_0053008d
    IMUL EBP,EDI,0x7c                   ; 00530209
        ;   Label: LAB_00530209
    MOV ESI,dword ptr [ESP + 0x84]      ; 0053020c
    MOV EDX,dword ptr [ESI + 0x48]      ; 00530213
    MOV EBP,dword ptr [EBX + EBP*0x1 + 0x68] ; 00530216
    SUB EBP,EDX                         ; 0053021a
    CMP EBP,0x1                         ; 0053021c
    JGE 0x00530244                      ; 0053021f
        ;   XREF to: 00530244 (CONDITIONAL_JUMP)  ; LAB_00530244
    MOV ECX,0x5ec1fe                    ; 00530221 | = "..\\core\\netgame.cpp"
    MOV EDI,0x93b                       ; 00530226
    PUSH 0x5ec212                       ; 0053022b | = "CNetGame::processServerFrame - player..."
    MOV dword ptr [0x01d1d400],ECX      ; 00530230 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00530236 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0053023c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00530241
    CMP EBP,0x5                         ; 00530244
        ;   Label: LAB_00530244
    JLE 0x0053024e                      ; 00530247
        ;   XREF to: 0053024e (CONDITIONAL_JUMP)  ; LAB_0053024e
    MOV EBP,0x5                         ; 00530249
    MOV EAX,dword ptr [ESI + 0x48]      ; 0053024e
        ;   Label: LAB_0053024e
    MOV dword ptr [ESP + 0x78],EAX      ; 00530251
    TEST EBP,EBP                        ; 00530255
        ;   Label: LAB_00530255
    JLE 0x00530107                      ; 00530257
        ;   XREF to: 00530107 (CONDITIONAL_JUMP)  ; LAB_00530107
    MOV ECX,dword ptr [ESP + 0x78]      ; 0053025d
    MOV ESI,dword ptr [0x01d715a8]      ; 00530261 | DAT_01d715a8
    XOR EDX,EDX                         ; 00530267
    TEST ESI,ESI                        ; 00530269
    JLE 0x00530308                      ; 0053026b
        ;   XREF to: 00530308 (CONDITIONAL_JUMP)  ; LAB_00530308
    XOR EAX,EAX                         ; 00530271
    IMUL ESI,ESI,0x6c                   ; 00530273
    CMP ECX,dword ptr [EAX + 0x1d715ac] ; 00530276
        ;   Label: LAB_00530276
    JNZ 0x005302fc                      ; 0053027c
        ;   XREF to: 005302fc (CONDITIONAL_JUMP)  ; LAB_005302fc
    MOV ESI,EDX                         ; 00530282
        ;   Label: LAB_00530282
    TEST EDX,EDX                        ; 00530284
    JL 0x00530312                       ; 00530286
        ;   XREF to: 00530312 (CONDITIONAL_JUMP)  ; LAB_00530312
    IMUL EDX,ESI,0x6c                   ; 0053028c
        ;   Label: LAB_0053028c
    MOV ECX,0x71                        ; 0053028f
    MOV AH,0xf                          ; 00530294
    ADD EDX,0x1d715ac                   ; 00530296
    MOV dword ptr [ESP],ECX             ; 0053029c
    MOV byte ptr [ESP + 0x4],AH         ; 0053029f
    MOV EAX,dword ptr [EDX]             ; 005302a3 | DAT_01d71540 | DAT_01d71618
    MOV dword ptr [ESP + 0x5],EAX       ; 005302a5
    MOV EAX,dword ptr [EDX + 0x4]       ; 005302a9 | DAT_01d71544 | DAT_01d7161c
    MOV dword ptr [ESP + 0x9],EAX       ; 005302ac
    MOV EAX,dword ptr [EDX + 0x8]       ; 005302b0 | DAT_01d71548 | DAT_01d71620
    MOV dword ptr [ESP + 0xd],EAX       ; 005302b3
    MOV ESI,dword ptr [EBX + 0x1c]      ; 005302b7
    XOR EAX,EAX                         ; 005302ba
    TEST ESI,ESI                        ; 005302bc
    JLE 0x005302dc                      ; 005302be
        ;   XREF to: 005302dc (CONDITIONAL_JUMP)  ; LAB_005302dc
    IMUL ESI,EAX,0x30                   ; 005302c0
        ;   Label: LAB_005302c0
    MOV ECX,0xc                         ; 005302c3
    LEA EDI,[ESP + ESI*0x1 + 0x11]      ; 005302c8
    LEA ESI,[EDX + 0xc]                 ; 005302cc
    MOVSD.REP ES:EDI,ESI                ; 005302cf
    INC EAX                             ; 005302d1
    MOV EDI,dword ptr [EBX + 0x1c]      ; 005302d2
    ADD EDX,0x30                        ; 005302d5
    CMP EAX,EDI                         ; 005302d8
    JL 0x005302c0                       ; 005302da
        ;   XREF to: 005302c0 (CONDITIONAL_JUMP)  ; LAB_005302c0
    MOV EAX,ESP                         ; 005302dc
        ;   Label: LAB_005302dc
    PUSH EAX                            ; 005302de
    MOV EAX,dword ptr [ESP + 0x78]      ; 005302df
    PUSH EAX                            ; 005302e3
    PUSH EBX                            ; 005302e4
    CALL FUN_0052df50                   ; 005302e5
        ;   XREF to: 0052df50 (UNCONDITIONAL_CALL)  ; undefined FUN_0052df50()
    ADD ESP,0xc                         ; 005302ea
    MOV EDX,dword ptr [ESP + 0x78]      ; 005302ed
    INC EDX                             ; 005302f1
    DEC EBP                             ; 005302f2
    MOV dword ptr [ESP + 0x78],EDX      ; 005302f3
    JMP 0x00530255                      ; 005302f7
        ;   XREF to: 00530255 (UNCONDITIONAL_JUMP)  ; LAB_00530255
    ADD EAX,0x6c                        ; 005302fc
        ;   Label: LAB_005302fc
    INC EDX                             ; 005302ff
    CMP EAX,ESI                         ; 00530300
    JL 0x00530276                       ; 00530302
        ;   XREF to: 00530276 (CONDITIONAL_JUMP)  ; LAB_00530276
    MOV EDX,0xffffffff                  ; 00530308
        ;   Label: LAB_00530308
    JMP 0x00530282                      ; 0053030d
        ;   XREF to: 00530282 (UNCONDITIONAL_JUMP)  ; LAB_00530282
    MOV EAX,0x5ec253                    ; 00530312 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00530312
    MOV EDX,0x94d                       ; 00530317
    PUSH 0x5ec267                       ; 0053031c | = "CNetGame::processServerFrame - client..."
    MOV [0x01d1d400],EAX                ; 00530321 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00530326 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0053032c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00530331
    JMP 0x0053028c                      ; 00530334
        ;   XREF to: 0053028c (UNCONDITIONAL_JUMP)  ; LAB_0053028c

