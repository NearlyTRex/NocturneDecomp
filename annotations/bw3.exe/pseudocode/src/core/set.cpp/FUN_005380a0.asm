; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005380a0(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00538400 at 0053841d
;   FUN_00538dd0 at 00538ec7
;   FUN_0053b130 at 0053b17e
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005d064f
;   TerminatedCString s_CDemonSet_lightVertexCol_005d065f
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b040
;   undefined4 DAT_01c6e24c
;   undefined4 DAT_01c6e2d8
;   undefined4 DAT_01c6e2e0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_0203a134
;   undefined4 DAT_0207baa0
;   undefined4 DAT_0207fc84
;   ... and 3 more
;
; Called Functions:
;   FUN_004e4330
;   FUN_00537e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005380a0
        ;   Label: FUN_005380a0
    PUSH ESI                            ; 005380a1
    PUSH EDI                            ; 005380a2
    PUSH EBP                            ; 005380a3
    SUB ESP,0xc                         ; 005380a4
    MOV EBX,dword ptr [ESP + 0x20]      ; 005380a7
    MOV EDI,dword ptr [ESP + 0x28]      ; 005380ab
    MOV EDX,dword ptr [EBX + 0x15ae84]  ; 005380af
    TEST EDX,EDX                        ; 005380b5
    JZ 0x0053818c                       ; 005380b7
        ;   XREF to: 0053818c (CONDITIONAL_JUMP)  ; LAB_0053818c
    TEST EDI,EDI                        ; 005380bd
    JNZ 0x005380e4                      ; 005380bf
        ;   XREF to: 005380e4 (CONDITIONAL_JUMP)  ; LAB_005380e4
    MOV ESI,0x5d064f                    ; 005380c1 | = "..\\core\\set.cpp"
    MOV EBP,0xcb8                       ; 005380c6
    PUSH 0x5d065f                       ; 005380cb | = "CDemonSet::lightVertexColor - Quick l..."
    MOV dword ptr [0x01d71de0],ESI      ; 005380d0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 005380d6 | DAT_01d71de4
    CALL FUN_004e4330                   ; 005380dc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005380e1
    MOV EAX,dword ptr [EBX + 0x15ae88]  ; 005380e4
        ;   Label: LAB_005380e4
    MOV EDX,dword ptr [EDI]             ; 005380ea
    IMUL EDX                            ; 005380ec
    SHRD EAX,EDX,0x10                   ; 005380ee
    MOV ECX,EAX                         ; 005380f2
    MOV EDX,dword ptr [EDI + 0x4]       ; 005380f4
    MOV EAX,dword ptr [EBX + 0x15ae8c]  ; 005380f7
    IMUL EDX                            ; 005380fd
    SHRD EAX,EDX,0x10                   ; 005380ff
    MOV EDX,dword ptr [EDI + 0x8]       ; 00538103
    ADD ECX,EAX                         ; 00538106
    MOV EAX,dword ptr [EBX + 0x15ae90]  ; 00538108
    IMUL EDX                            ; 0053810e
    SHRD EAX,EDX,0x10                   ; 00538110
    ADD ECX,EAX                         ; 00538114
    NEG ECX                             ; 00538116
    TEST ECX,ECX                        ; 00538118
    JL 0x00538188                       ; 0053811a
        ;   XREF to: 00538188 (CONDITIONAL_JUMP)  ; LAB_00538188
    ADD ECX,dword ptr [EBX + 0x15ae94]  ; 0053811c
        ;   Label: LAB_0053811c
    CMP ECX,0xffff                      ; 00538122
    JLE 0x0053812f                      ; 00538128
        ;   XREF to: 0053812f (CONDITIONAL_JUMP)  ; LAB_0053812f
    MOV ECX,0xffff                      ; 0053812a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0053812f
        ;   Label: LAB_0053812f
    LEA ESI,[EAX*0x4 + 0x0]             ; 00538133
    SUB ESI,EAX                         ; 0053813a
    MOV EDX,ECX                         ; 0053813c
    SHL ESI,0x4                         ; 0053813e
    MOV EAX,dword ptr [EBX + 0x15ae9c]  ; 00538141
    ADD ESI,0x60b014                    ; 00538147 | DAT_0060b014
    IMUL EDX                            ; 0053814d
    SHRD EAX,EDX,0x10                   ; 0053814f
    MOV dword ptr [ESI + 0x20],EAX      ; 00538153 | DAT_0060b034
    MOV EDX,ECX                         ; 00538156
    MOV EAX,dword ptr [EBX + 0x15aea0]  ; 00538158
    IMUL EDX                            ; 0053815e
    SHRD EAX,EDX,0x10                   ; 00538160
    MOV dword ptr [ESI + 0x24],EAX      ; 00538164 | DAT_0060b038
    MOV EDX,ECX                         ; 00538167
    MOV EAX,dword ptr [EBX + 0x15aea4]  ; 00538169
    IMUL EDX                            ; 0053816f
    SHRD EAX,EDX,0x10                   ; 00538171
    MOV dword ptr [ESI + 0x28],EAX      ; 00538175 | DAT_0060b03c
    MOV EAX,[0x01c6e24c]                ; 00538178 | DAT_01c6e24c
    MOV dword ptr [ESI + 0x2c],EAX      ; 0053817d | DAT_0060b040
    ADD ESP,0xc                         ; 00538180
    POP EBP                             ; 00538183
    POP EDI                             ; 00538184
    POP ESI                             ; 00538185
    POP EBX                             ; 00538186
    RET                                 ; 00538187
    XOR ECX,ECX                         ; 00538188
        ;   Label: LAB_00538188
    JMP 0x0053811c                      ; 0053818a
        ;   XREF to: 0053811c (UNCONDITIONAL_JUMP)  ; LAB_0053811c
    CMP dword ptr [ESP + 0x30],0x0      ; 0053818c
        ;   Label: LAB_0053818c
    JZ 0x0053832c                       ; 00538191
        ;   XREF to: 0053832c (CONDITIONAL_JUMP)  ; LAB_0053832c
    MOV ECX,0xffff                      ; 00538197
    MOV dword ptr [ESP + 0x4],EDX       ; 0053819c
    CMP dword ptr [0x0207fc84],0x0      ; 005381a0 | DAT_0207fc84
        ;   Label: LAB_005381a0
    JLE 0x005383ca                      ; 005381a7
        ;   XREF to: 005383ca (CONDITIONAL_JUMP)  ; LAB_005383ca
    MOV EDX,dword ptr [0x02080004]      ; 005381ad | DAT_02080004
    MOV EAX,ECX                         ; 005381b3
    MOV EBP,dword ptr [ESP + 0x4]       ; 005381b5
    IMUL EDX                            ; 005381b9
    SHRD EAX,EDX,0x10                   ; 005381bb
    MOV EDX,dword ptr [EBX + 0x15ae9c]  ; 005381bf
    ADD EAX,EBP                         ; 005381c5
    IMUL EDX                            ; 005381c7
    SHRD EAX,EDX,0x10                   ; 005381c9
    MOV EDX,dword ptr [0x02080008]      ; 005381cd | DAT_02080008
    MOV dword ptr [ESP + 0x8],EAX       ; 005381d3
    MOV EAX,ECX                         ; 005381d7
    IMUL EDX                            ; 005381d9
    SHRD EAX,EDX,0x10                   ; 005381db
    MOV EDX,dword ptr [EBX + 0x15aea0]  ; 005381df
    ADD EAX,EBP                         ; 005381e5
    IMUL EDX                            ; 005381e7
    SHRD EAX,EDX,0x10                   ; 005381e9
    MOV EDX,dword ptr [0x0208000c]      ; 005381ed | DAT_0208000c
    MOV EDI,EAX                         ; 005381f3
    MOV EAX,ECX                         ; 005381f5
    IMUL EDX                            ; 005381f7
    SHRD EAX,EDX,0x10                   ; 005381f9
    MOV EDX,dword ptr [EBX + 0x15aea4]  ; 005381fd
    ADD EAX,EBP                         ; 00538203
    IMUL EDX                            ; 00538205
        ;   Label: LAB_00538205
    SHRD EAX,EDX,0x10                   ; 00538207
    MOV EBP,EAX                         ; 0053820b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0053820d
    LEA ECX,[EAX*0x4 + 0x0]             ; 00538211
    SUB ECX,EAX                         ; 00538218
    MOV EAX,0x60b014                    ; 0053821a | DAT_0060b014
    SHL ECX,0x4                         ; 0053821f
    ADD EAX,ECX                         ; 00538222
    MOV ESI,dword ptr [EBX + 0x15f6f8]  ; 00538224
    MOV dword ptr [ESP],EAX             ; 0053822a
    TEST ESI,ESI                        ; 0053822d
    JZ 0x005382d3                       ; 0053822f
        ;   XREF to: 005382d3 (CONDITIONAL_JUMP)  ; LAB_005382d3
    MOV EAX,dword ptr [ESP + 0x30]      ; 00538235
    TEST EAX,EAX                        ; 00538239
    JNZ 0x005382d3                      ; 0053823b
        ;   XREF to: 005382d3 (CONDITIONAL_JUMP)  ; LAB_005382d3
    PUSH EAX                            ; 00538241
    MOV EDX,dword ptr [ESP + 0x28]      ; 00538242
    PUSH EDX                            ; 00538246
    PUSH EBX                            ; 00538247
    CALL FUN_00537e20                   ; 00538248
        ;   XREF to: 00537e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e20()
    ADD ESP,0xc                         ; 0053824d
    MOV ESI,dword ptr [ESP + 0x4]       ; 00538250
    ADD ESI,EAX                         ; 00538254
    TEST ESI,ESI                        ; 00538256
    JLE 0x005382d3                      ; 00538258
        ;   XREF to: 005382d3 (CONDITIONAL_JUMP)  ; LAB_005382d3
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053825a
    MOV EBX,ESI                         ; 0053825e
    CDQ                                 ; 00538260
    MOV ECX,EDX                         ; 00538261
    XOR EAX,EDX                         ; 00538263
    XOR EDX,EDX                         ; 00538265
    DIV EBX                             ; 00538267
    CMP EAX,0x7fff                      ; 00538269
    JC 0x00538275                       ; 0053826e
        ;   XREF to: 00538275 (CONDITIONAL_JUMP)  ; LAB_00538275
    MOV EAX,0x7fff                      ; 00538270
    PUSH EAX                            ; 00538275
        ;   Label: LAB_00538275
    XOR EAX,EAX                         ; 00538276
    DIV EBX                             ; 00538278
    POP EDX                             ; 0053827a
    SHRD EAX,EDX,0x10                   ; 0053827b
    XOR EAX,ECX                         ; 0053827f
    MOV dword ptr [ESP + 0x8],EAX       ; 00538281
    MOV EBX,ESI                         ; 00538285
    MOV EAX,EDI                         ; 00538287
    CDQ                                 ; 00538289
    MOV ECX,EDX                         ; 0053828a
    XOR EAX,EDX                         ; 0053828c
    XOR EDX,EDX                         ; 0053828e
    DIV EBX                             ; 00538290
    CMP EAX,0x7fff                      ; 00538292
    JC 0x0053829e                       ; 00538297
        ;   XREF to: 0053829e (CONDITIONAL_JUMP)  ; LAB_0053829e
    MOV EAX,0x7fff                      ; 00538299
    PUSH EAX                            ; 0053829e
        ;   Label: LAB_0053829e
    XOR EAX,EAX                         ; 0053829f
    DIV EBX                             ; 005382a1
    POP EDX                             ; 005382a3
    SHRD EAX,EDX,0x10                   ; 005382a4
    XOR EAX,ECX                         ; 005382a8
    MOV EDI,EAX                         ; 005382aa
    MOV EBX,ESI                         ; 005382ac
    MOV EAX,EBP                         ; 005382ae
    CDQ                                 ; 005382b0
    MOV ECX,EDX                         ; 005382b1
    XOR EAX,EDX                         ; 005382b3
    XOR EDX,EDX                         ; 005382b5
    DIV EBX                             ; 005382b7
    CMP EAX,0x7fff                      ; 005382b9
    JC 0x005382c5                       ; 005382be
        ;   XREF to: 005382c5 (CONDITIONAL_JUMP)  ; LAB_005382c5
    MOV EAX,0x7fff                      ; 005382c0
    PUSH EAX                            ; 005382c5
        ;   Label: LAB_005382c5
    XOR EAX,EAX                         ; 005382c6
    DIV EBX                             ; 005382c8
    POP EDX                             ; 005382ca
    SHRD EAX,EDX,0x10                   ; 005382cb
    XOR EAX,ECX                         ; 005382cf
    MOV EBP,EAX                         ; 005382d1
    CMP dword ptr [ESP + 0x8],0xffff    ; 005382d3
        ;   Label: LAB_005382d3
    JLE 0x005382e5                      ; 005382db
        ;   XREF to: 005382e5 (CONDITIONAL_JUMP)  ; LAB_005382e5
    MOV dword ptr [ESP + 0x8],0xffff    ; 005382dd
    CMP EDI,0xffff                      ; 005382e5
        ;   Label: LAB_005382e5
    JLE 0x005382f2                      ; 005382eb
        ;   XREF to: 005382f2 (CONDITIONAL_JUMP)  ; LAB_005382f2
    MOV EDI,0xffff                      ; 005382ed
    CMP EBP,0xffff                      ; 005382f2
        ;   Label: LAB_005382f2
    JLE 0x005382ff                      ; 005382f8
        ;   XREF to: 005382ff (CONDITIONAL_JUMP)  ; LAB_005382ff
    MOV EBP,0xffff                      ; 005382fa
    MOV EAX,dword ptr [ESP + 0x8]       ; 005382ff
        ;   Label: LAB_005382ff
    MOV EDX,dword ptr [ESP]             ; 00538303
    MOV EAX,dword ptr [EAX*0x4 + 0x203baa4] ; 00538306 | DAT_0207baa0
    MOV dword ptr [EDX + 0x20],EAX      ; 0053830d | DAT_0060b034
    MOV EAX,dword ptr [EDI*0x4 + 0x203baa4] ; 00538310 | DAT_0207baa0
    MOV dword ptr [EDX + 0x24],EAX      ; 00538317 | DAT_0060b038
    MOV EAX,dword ptr [EBP*0x4 + 0x203baa4] ; 0053831a | DAT_0207baa0
    MOV dword ptr [EDX + 0x28],EAX      ; 00538321 | DAT_0060b03c
    ADD ESP,0xc                         ; 00538324
    POP EBP                             ; 00538327
    POP EDI                             ; 00538328
    POP ESI                             ; 00538329
    POP EBX                             ; 0053832a
    RET                                 ; 0053832b
    PUSH EDI                            ; 0053832c
        ;   Label: LAB_0053832c
    MOV ESI,dword ptr [ESP + 0x28]      ; 0053832d
    PUSH ESI                            ; 00538331
    PUSH EBX                            ; 00538332
    CALL FUN_00537e20                   ; 00538333
        ;   XREF to: 00537e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e20()
    MOV EBP,dword ptr [0x0203a134]      ; 00538338 | DAT_0203a134
    ADD ESP,0xc                         ; 0053833e
    MOV ECX,EAX                         ; 00538341
    MOV dword ptr [ESP + 0x4],EBP       ; 00538343
    TEST EBP,EBP                        ; 00538347
    JLE 0x005381a0                      ; 00538349
        ;   XREF to: 005381a0 (CONDITIONAL_JUMP)  ; LAB_005381a0
    TEST EDI,EDI                        ; 0053834f
    JZ 0x005381a0                       ; 00538351
        ;   XREF to: 005381a0 (CONDITIONAL_JUMP)  ; LAB_005381a0
    MOV ESI,EBP                         ; 00538357
    CMP EBP,0x1000                      ; 00538359
    JLE 0x00538366                      ; 0053835f
        ;   XREF to: 00538366 (CONDITIONAL_JUMP)  ; LAB_00538366
    MOV ESI,0x1000                      ; 00538361
    CMP dword ptr [0x01c6e2d8],0x0      ; 00538366 | DAT_01c6e2d8
        ;   Label: LAB_00538366
    JL 0x005383a0                       ; 0053836d
        ;   XREF to: 005383a0 (CONDITIONAL_JUMP)  ; LAB_005383a0
    MOV EAX,ESI                         ; 0053836f
    MOV EDX,dword ptr [EDI]             ; 00538371
    IMUL EDX                            ; 00538373
    SHRD EAX,EDX,0x10                   ; 00538375
    ADD ECX,EAX                         ; 00538379
    CMP dword ptr [0x01c6e2e0],0x0      ; 0053837b | DAT_01c6e2e0
        ;   Label: LAB_0053837b
    JL 0x005383ae                       ; 00538382
        ;   XREF to: 005383ae (CONDITIONAL_JUMP)  ; LAB_005383ae
    MOV EAX,ESI                         ; 00538384
    MOV EDX,dword ptr [EDI + 0x8]       ; 00538386
    IMUL EDX                            ; 00538389
    SHRD EAX,EDX,0x10                   ; 0053838b
    ADD ECX,EAX                         ; 0053838f
    TEST ECX,ECX                        ; 00538391
    JGE 0x005381a0                      ; 00538393
        ;   XREF to: 005381a0 (CONDITIONAL_JUMP)  ; LAB_005381a0
    XOR ECX,ECX                         ; 00538399
    JMP 0x005381a0                      ; 0053839b
        ;   XREF to: 005381a0 (UNCONDITIONAL_JUMP)  ; LAB_005381a0
    MOV EAX,ESI                         ; 005383a0
        ;   Label: LAB_005383a0
    MOV EDX,dword ptr [EDI]             ; 005383a2
    IMUL EDX                            ; 005383a4
    SHRD EAX,EDX,0x10                   ; 005383a6
    SUB ECX,EAX                         ; 005383aa
    JMP 0x0053837b                      ; 005383ac
        ;   XREF to: 0053837b (UNCONDITIONAL_JUMP)  ; LAB_0053837b
    MOV EAX,ESI                         ; 005383ae
        ;   Label: LAB_005383ae
    MOV EDX,dword ptr [EDI + 0x8]       ; 005383b0
    IMUL EDX                            ; 005383b3
    SHRD EAX,EDX,0x10                   ; 005383b5
    SUB ECX,EAX                         ; 005383b9
    TEST ECX,ECX                        ; 005383bb
    JGE 0x005381a0                      ; 005383bd
        ;   XREF to: 005381a0 (CONDITIONAL_JUMP)  ; LAB_005381a0
    XOR ECX,ECX                         ; 005383c3
    JMP 0x005381a0                      ; 005383c5
        ;   XREF to: 005381a0 (UNCONDITIONAL_JUMP)  ; LAB_005381a0
    ADD ECX,dword ptr [ESP + 0x4]       ; 005383ca
        ;   Label: LAB_005383ca
    MOV EDX,dword ptr [EBX + 0x15ae9c]  ; 005383ce
    MOV EAX,ECX                         ; 005383d4
    IMUL EDX                            ; 005383d6
    SHRD EAX,EDX,0x10                   ; 005383d8
    MOV dword ptr [ESP + 0x8],EAX       ; 005383dc
    MOV EDX,dword ptr [EBX + 0x15aea0]  ; 005383e0
    MOV EAX,ECX                         ; 005383e6
    IMUL EDX                            ; 005383e8
    SHRD EAX,EDX,0x10                   ; 005383ea
    MOV EDI,EAX                         ; 005383ee
    MOV EDX,dword ptr [EBX + 0x15aea4]  ; 005383f0
    MOV EAX,ECX                         ; 005383f6
    JMP 0x00538205                      ; 005383f8
        ;   XREF to: 00538205 (UNCONDITIONAL_JUMP)  ; LAB_00538205

