; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004670b0(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00467350 at 0046738c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005d1353
;   TerminatedCString s_Invalid_bitsPerPixel_005d136b
;   TerminatedCString s_cockpit_drawsurf_cpp_005d1381
;   TerminatedCString s_Invalid_bitsPerPixel_005d1399
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c28
;   undefined4 DAT_01ba5c34
;   undefined4 DAT_01ba5c38
;   undefined4 DAT_01ba5c48
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004670b0
        ;   Label: FUN_004670b0
    PUSH ESI                            ; 004670b1
    PUSH EDI                            ; 004670b2
    PUSH EBP                            ; 004670b3
    SUB ESP,0x8                         ; 004670b4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004670b7
    MOV ESI,dword ptr [ESP + 0x20]      ; 004670bb
    MOV EAX,dword ptr [ESP + 0x24]      ; 004670bf
    MOV EBX,dword ptr [ESP + 0x28]      ; 004670c3
    MOV ECX,dword ptr [EDX + 0x8]       ; 004670c7
    MOV EDI,dword ptr [EDX + 0xc]       ; 004670ca
    ADD ESI,ECX                         ; 004670cd
    ADD EAX,EDI                         ; 004670cf
    MOV ECX,dword ptr [EDX + 0x10]      ; 004670d1
    ADD EBX,EDI                         ; 004670d4
    CMP ESI,ECX                         ; 004670d6
    JL 0x00467150                       ; 004670d8
        ;   XREF to: 00467150 (CONDITIONAL_JUMP)  ; LAB_00467150
    CMP ESI,dword ptr [EDX + 0x18]      ; 004670de
    JG 0x00467150                       ; 004670e1
        ;   XREF to: 00467150 (CONDITIONAL_JUMP)  ; LAB_00467150
    MOV EBP,dword ptr [EDX + 0x14]      ; 004670e7
    CMP EAX,EBP                         ; 004670ea
    JGE 0x004670f0                      ; 004670ec
        ;   XREF to: 004670f0 (CONDITIONAL_JUMP)  ; LAB_004670f0
    MOV EAX,EBP                         ; 004670ee
    MOV ECX,dword ptr [EDX + 0x1c]      ; 004670f0
        ;   Label: LAB_004670f0
    CMP EBX,ECX                         ; 004670f3
    JLE 0x004670f9                      ; 004670f5
        ;   XREF to: 004670f9 (CONDITIONAL_JUMP)  ; LAB_004670f9
    MOV EBX,ECX                         ; 004670f7
    CMP EAX,EBX                         ; 004670f9
        ;   Label: LAB_004670f9
    JG 0x00467150                       ; 004670fb
        ;   XREF to: 00467150 (CONDITIONAL_JUMP)  ; LAB_00467150
    LEA EDI,[ESI + ESI*0x1]             ; 004670fd
    MOV EBP,dword ptr [0x01ba5c34]      ; 00467100 | DAT_01ba5c34
    LEA EDX,[ESI*0x4 + 0x0]             ; 00467106
    SHL EBX,0x2                         ; 0046710d
    MOV dword ptr [ESP],EDX             ; 00467110
    LEA EDX,[EAX*0x4 + 0x0]             ; 00467113
    TEST EBP,EBP                        ; 0046711a
    JNZ 0x00467236                      ; 0046711c
        ;   XREF to: 00467236 (CONDITIONAL_JUMP)  ; LAB_00467236
    MOV ECX,dword ptr [0x006141c0]      ; 00467122 | DAT_006141c0
    CMP ECX,0x10                        ; 00467128
    JNC 0x004671be                      ; 0046712b
        ;   XREF to: 004671be (CONDITIONAL_JUMP)  ; LAB_004671be
    CMP ECX,0x8                         ; 00467131
    JNZ 0x00467193                      ; 00467134
        ;   XREF to: 00467193 (CONDITIONAL_JUMP)  ; LAB_00467193
    MOV EDI,EBX                         ; 00467136
    MOV CL,byte ptr [0x01ba5c28]        ; 00467138 | DAT_01ba5c28
        ;   Label: LAB_00467138
    MOV EBX,dword ptr [EDX + 0x1c2a38c] ; 0046713e | DAT_01c2a38c | DAT_01c2a390
    ADD EDX,0x4                         ; 00467144
    INC EAX                             ; 00467147
    MOV byte ptr [ESI + EBX*0x1],CL     ; 00467148
    CMP EDX,EDI                         ; 0046714b
    JLE 0x00467138                      ; 0046714d
        ;   XREF to: 00467138 (CONDITIONAL_JUMP)  ; LAB_00467138
    NOP                                 ; 0046714f
    ADD ESP,0x8                         ; 00467150
        ;   Label: LAB_00467150
    POP EBP                             ; 00467153
    POP EDI                             ; 00467154
    POP ESI                             ; 00467155
    POP EBX                             ; 00467156
    RET                                 ; 00467157
    MOV ESI,EBX                         ; 00467158
        ;   Label: LAB_00467158
    MOV BX,word ptr [0x01ba5c28]        ; 0046715a | DAT_01ba5c28
        ;   Label: LAB_0046715a
    MOV ECX,dword ptr [EDX + 0x1c2a38c] ; 00467161 | DAT_01c2a38c | DAT_01c2a390
    ADD EDX,0x4                         ; 00467167
    INC EAX                             ; 0046716a
    MOV word ptr [ECX + EDI*0x1],BX     ; 0046716b
    CMP EDX,ESI                         ; 0046716f
    JLE 0x0046715a                      ; 00467171
        ;   XREF to: 0046715a (CONDITIONAL_JUMP)  ; LAB_0046715a
    JMP 0x00467150                      ; 00467173
        ;   XREF to: 00467150 (UNCONDITIONAL_JUMP)  ; LAB_00467150
    MOV EDI,dword ptr [ESP]             ; 00467175
        ;   Label: LAB_00467175
    MOV ESI,EBX                         ; 00467178
    MOV EBX,dword ptr [0x01ba5c28]      ; 0046717a | DAT_01ba5c28
        ;   Label: LAB_0046717a
    MOV ECX,dword ptr [EDX + 0x1c2a38c] ; 00467180 | DAT_01c2a38c | DAT_01c2a390
    ADD EDX,0x4                         ; 00467186
    INC EAX                             ; 00467189
    MOV dword ptr [ECX + EDI*0x1],EBX   ; 0046718a
    CMP EDX,ESI                         ; 0046718d
    JLE 0x0046717a                      ; 0046718f
        ;   XREF to: 0046717a (CONDITIONAL_JUMP)  ; LAB_0046717a
    JMP 0x00467150                      ; 00467191
        ;   XREF to: 00467150 (UNCONDITIONAL_JUMP)  ; LAB_00467150
    MOV ECX,0x5d1353                    ; 00467193 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00467193
    MOV EBX,0x3db                       ; 00467198
    PUSH 0x5d136b                       ; 0046719d | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01d046a0],ECX      ; 004671a2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004671a8 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004671ae
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004671b3
    ADD ESP,0x8                         ; 004671b6
    POP EBP                             ; 004671b9
    POP EDI                             ; 004671ba
    POP ESI                             ; 004671bb
    POP EBX                             ; 004671bc
    RET                                 ; 004671bd
    JBE 0x00467158                      ; 004671be
        ;   XREF to: 00467158 (CONDITIONAL_JUMP)  ; LAB_00467158
        ;   Label: LAB_004671be
    CMP ECX,0x20                        ; 004671c0
    JZ 0x00467175                       ; 004671c3
        ;   XREF to: 00467175 (CONDITIONAL_JUMP)  ; LAB_00467175
    JMP 0x00467193                      ; 004671c5
        ;   XREF to: 00467193 (UNCONDITIONAL_JUMP)  ; LAB_00467193
    MOV EBP,EDI                         ; 004671c7
        ;   Label: LAB_004671c7
    MOV EDI,EBX                         ; 004671c9
    MOV EBX,dword ptr [EDX + 0x1c2a38c] ; 004671cb | DAT_01c2a38c | DAT_01c2a390
        ;   Label: LAB_004671cb
    XOR ESI,ESI                         ; 004671d1
    MOV CL,byte ptr [0x01ba5c38]        ; 004671d3 | DAT_01ba5c38
    MOV SI,word ptr [EBX + EBP*0x1]     ; 004671d9
    SHR ESI,CL                          ; 004671dd
    MOV ECX,dword ptr [0x01ba5c48]      ; 004671df | DAT_01ba5c48
    ADD EDX,0x4                         ; 004671e5
    AND ESI,ECX                         ; 004671e8
    INC EAX                             ; 004671ea
    MOV word ptr [EBX + EBP*0x1],SI     ; 004671eb
    CMP EDX,EDI                         ; 004671ef
    JLE 0x004671cb                      ; 004671f1
        ;   XREF to: 004671cb (CONDITIONAL_JUMP)  ; LAB_004671cb
    ADD ESP,0x8                         ; 004671f3
    POP EBP                             ; 004671f6
    POP EDI                             ; 004671f7
    POP ESI                             ; 004671f8
    POP EBX                             ; 004671f9
    RET                                 ; 004671fa
    MOV ECX,dword ptr [ESP]             ; 004671fb
        ;   Label: LAB_004671fb
    MOV dword ptr [ESP + 0x4],ECX       ; 004671fe
    MOV EDI,EBX                         ; 00467202
    MOV EBP,dword ptr [ESP + 0x4]       ; 00467204
    MOV ESI,dword ptr [EDX + 0x1c2a38c] ; 00467208 | DAT_01c2a38c | DAT_01c2a390
        ;   Label: LAB_00467208
    ADD ESI,EBP                         ; 0046720e
    MOV CL,byte ptr [0x01ba5c38]        ; 00467210 | DAT_01ba5c38
    MOV EBX,dword ptr [ESI]             ; 00467216
    SHR EBX,CL                          ; 00467218
    MOV ECX,EBX                         ; 0046721a
    MOV EBX,dword ptr [0x01ba5c48]      ; 0046721c | DAT_01ba5c48
    ADD EDX,0x4                         ; 00467222
    AND ECX,EBX                         ; 00467225
    INC EAX                             ; 00467227
    MOV dword ptr [ESI],ECX             ; 00467228
    CMP EDX,EDI                         ; 0046722a
    JLE 0x00467208                      ; 0046722c
        ;   XREF to: 00467208 (CONDITIONAL_JUMP)  ; LAB_00467208
    ADD ESP,0x8                         ; 0046722e
    POP EBP                             ; 00467231
    POP EDI                             ; 00467232
    POP ESI                             ; 00467233
    POP EBX                             ; 00467234
    RET                                 ; 00467235
    MOV ECX,dword ptr [0x006141c0]      ; 00467236 | DAT_006141c0
        ;   Label: LAB_00467236
    CMP ECX,0x10                        ; 0046723c
    JNC 0x0046724c                      ; 0046723f
        ;   XREF to: 0046724c (CONDITIONAL_JUMP)  ; LAB_0046724c
    CMP ECX,0x8                         ; 00467241
    JZ 0x00467150                       ; 00467244
        ;   XREF to: 00467150 (CONDITIONAL_JUMP)  ; LAB_00467150
    JMP 0x00467257                      ; 0046724a
        ;   XREF to: 00467257 (UNCONDITIONAL_JUMP)  ; LAB_00467257
    JBE 0x004671c7                      ; 0046724c
        ;   XREF to: 004671c7 (CONDITIONAL_JUMP)  ; LAB_004671c7
        ;   Label: LAB_0046724c
    CMP ECX,0x20                        ; 00467252
    JZ 0x004671fb                       ; 00467255
        ;   XREF to: 004671fb (CONDITIONAL_JUMP)  ; LAB_004671fb
    MOV EAX,0x5d1381                    ; 00467257 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00467257
    MOV EDX,0x3fb                       ; 0046725c
    PUSH 0x5d1399                       ; 00467261 | = "Invalid bitsPerPixel!"
    MOV [0x01d046a0],EAX                ; 00467266 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0046726b | DAT_01d046a4
    CALL FUN_004e4500                   ; 00467271
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00467276
    ADD ESP,0x8                         ; 00467279
    POP EBP                             ; 0046727c
    POP EDI                             ; 0046727d
    POP ESI                             ; 0046727e
    POP EBX                             ; 0046727f
    RET                                 ; 00467280

