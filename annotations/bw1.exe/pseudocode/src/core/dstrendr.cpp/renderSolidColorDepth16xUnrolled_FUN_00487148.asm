; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderSolidColorDepth16xUnrolled_FUN_00487148(void)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 at 00481be2
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 at 00481c92
;
; Referenced Globals:
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c4f020
;   undefined4 DAT_01c4f030
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00487148
        ;   Label: core_dstrendr.cpp_renderSolidColorDepth16xUnrolled_FUN_00487148
    PUSH EDI                            ; 00487149
    PUSH EBP                            ; 0048714a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0048714b
    MOV ECX,dword ptr [EDI + 0x8]       ; 0048714e
    CMP EAX,ECX                         ; 00487151
    JBE 0x00487158                      ; 00487153
        ;   XREF to: 00487158 (CONDITIONAL_JUMP)  ; LAB_00487158
    XCHG EAX,ECX                        ; 00487155
    XCHG EDI,ESI                        ; 00487156
    SHR EAX,0x10                        ; 00487158
        ;   Label: LAB_00487158
    SHR ECX,0x10                        ; 0048715b
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4480c] ; 0048715e | DAT_01c4480c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 00487165 | DAT_01c4354c
    SUB ECX,EAX                         ; 0048716c
    JLE 0x00487323                      ; 0048716e
        ;   XREF to: 00487323 (CONDITIONAL_JUMP)  ; LAB_00487323
    SHL EAX,0x2                         ; 00487174
    ADD EBX,EAX                         ; 00487177
    ADD EBP,EAX                         ; 00487179
    INC ECX                             ; 0048717b
    MOV EAX,dword ptr [EDI + 0x28]      ; 0048717c
    SUB EAX,dword ptr [ESI + 0x28]      ; 0048717f
    IMUL dword ptr [ECX*0x4 + 0x1c4f030] ; 00487182 | DAT_01c4f030
    MOV EDI,EBX                         ; 00487189
    MOV EBX,EBP                         ; 0048718b
    DEC ECX                             ; 0048718d
    MOV ESI,dword ptr [ESI + 0x28]      ; 0048718e
    MOV EAX,[0x01c4f020]                ; 00487191 | DAT_01c4f020
    SUB ECX,0x4                         ; 00487196
        ;   Label: LAB_00487196
    JL 0x004872e7                       ; 00487199
        ;   XREF to: 004872e7 (CONDITIONAL_JUMP)  ; LAB_004872e7
    MOV EBP,ESI                         ; 0048719f
    SHR EBP,0x8                         ; 004871a1
    CMP EBP,dword ptr [EBX]             ; 004871a4
    JL 0x004871ac                       ; 004871a6
        ;   XREF to: 004871ac (CONDITIONAL_JUMP)  ; LAB_004871ac
    MOV dword ptr [EBX],EBP             ; 004871a8
    MOV dword ptr [EDI],EAX             ; 004871aa
    ADD ESI,EDX                         ; 004871ac
        ;   Label: LAB_004871ac
    MOV EBP,ESI                         ; 004871ae
    SHR EBP,0x8                         ; 004871b0
    CMP EBP,dword ptr [EBX + 0x4]       ; 004871b3
    JL 0x004871be                       ; 004871b6
        ;   XREF to: 004871be (CONDITIONAL_JUMP)  ; LAB_004871be
    MOV dword ptr [EBX + 0x4],EBP       ; 004871b8
    MOV dword ptr [EDI + 0x4],EAX       ; 004871bb
    ADD ESI,EDX                         ; 004871be
        ;   Label: LAB_004871be
    MOV EBP,ESI                         ; 004871c0
    SHR EBP,0x8                         ; 004871c2
    CMP EBP,dword ptr [EBX + 0x8]       ; 004871c5
    JL 0x004871d0                       ; 004871c8
        ;   XREF to: 004871d0 (CONDITIONAL_JUMP)  ; LAB_004871d0
    MOV dword ptr [EBX + 0x8],EBP       ; 004871ca
    MOV dword ptr [EDI + 0x8],EAX       ; 004871cd
    ADD ESI,EDX                         ; 004871d0
        ;   Label: LAB_004871d0
    MOV EBP,ESI                         ; 004871d2
    SHR EBP,0x8                         ; 004871d4
    CMP EBP,dword ptr [EBX + 0xc]       ; 004871d7
    JL 0x004871e2                       ; 004871da
        ;   XREF to: 004871e2 (CONDITIONAL_JUMP)  ; LAB_004871e2
    MOV dword ptr [EBX + 0xc],EBP       ; 004871dc
    MOV dword ptr [EDI + 0xc],EAX       ; 004871df
    ADD ESI,EDX                         ; 004871e2
        ;   Label: LAB_004871e2
    ADD EBX,0x10                        ; 004871e4
    ADD EDI,0x10                        ; 004871e7
    SUB ECX,0x4                         ; 004871ea
    JL 0x004872e7                       ; 004871ed
        ;   XREF to: 004872e7 (CONDITIONAL_JUMP)  ; LAB_004872e7
    MOV EBP,ESI                         ; 004871f3
    SHR EBP,0x8                         ; 004871f5
    CMP EBP,dword ptr [EBX]             ; 004871f8
    JL 0x00487200                       ; 004871fa
        ;   XREF to: 00487200 (CONDITIONAL_JUMP)  ; LAB_00487200
    MOV dword ptr [EBX],EBP             ; 004871fc
    MOV dword ptr [EDI],EAX             ; 004871fe
    ADD ESI,EDX                         ; 00487200
        ;   Label: LAB_00487200
    MOV EBP,ESI                         ; 00487202
    SHR EBP,0x8                         ; 00487204
    CMP EBP,dword ptr [EBX + 0x4]       ; 00487207
    JL 0x00487212                       ; 0048720a
        ;   XREF to: 00487212 (CONDITIONAL_JUMP)  ; LAB_00487212
    MOV dword ptr [EBX + 0x4],EBP       ; 0048720c
    MOV dword ptr [EDI + 0x4],EAX       ; 0048720f
    ADD ESI,EDX                         ; 00487212
        ;   Label: LAB_00487212
    MOV EBP,ESI                         ; 00487214
    SHR EBP,0x8                         ; 00487216
    CMP EBP,dword ptr [EBX + 0x8]       ; 00487219
    JL 0x00487224                       ; 0048721c
        ;   XREF to: 00487224 (CONDITIONAL_JUMP)  ; LAB_00487224
    MOV dword ptr [EBX + 0x8],EBP       ; 0048721e
    MOV dword ptr [EDI + 0x8],EAX       ; 00487221
    ADD ESI,EDX                         ; 00487224
        ;   Label: LAB_00487224
    MOV EBP,ESI                         ; 00487226
    SHR EBP,0x8                         ; 00487228
    CMP EBP,dword ptr [EBX + 0xc]       ; 0048722b
    JL 0x00487236                       ; 0048722e
        ;   XREF to: 00487236 (CONDITIONAL_JUMP)  ; LAB_00487236
    MOV dword ptr [EBX + 0xc],EBP       ; 00487230
    MOV dword ptr [EDI + 0xc],EAX       ; 00487233
    ADD ESI,EDX                         ; 00487236
        ;   Label: LAB_00487236
    ADD EBX,0x10                        ; 00487238
    ADD EDI,0x10                        ; 0048723b
    SUB ECX,0x4                         ; 0048723e
    JL 0x004872e7                       ; 00487241
        ;   XREF to: 004872e7 (CONDITIONAL_JUMP)  ; LAB_004872e7
    MOV EBP,ESI                         ; 00487247
    SHR EBP,0x8                         ; 00487249
    CMP EBP,dword ptr [EBX]             ; 0048724c
    JL 0x00487254                       ; 0048724e
        ;   XREF to: 00487254 (CONDITIONAL_JUMP)  ; LAB_00487254
    MOV dword ptr [EBX],EBP             ; 00487250
    MOV dword ptr [EDI],EAX             ; 00487252
    ADD ESI,EDX                         ; 00487254
        ;   Label: LAB_00487254
    MOV EBP,ESI                         ; 00487256
    SHR EBP,0x8                         ; 00487258
    CMP EBP,dword ptr [EBX + 0x4]       ; 0048725b
    JL 0x00487266                       ; 0048725e
        ;   XREF to: 00487266 (CONDITIONAL_JUMP)  ; LAB_00487266
    MOV dword ptr [EBX + 0x4],EBP       ; 00487260
    MOV dword ptr [EDI + 0x4],EAX       ; 00487263
    ADD ESI,EDX                         ; 00487266
        ;   Label: LAB_00487266
    MOV EBP,ESI                         ; 00487268
    SHR EBP,0x8                         ; 0048726a
    CMP EBP,dword ptr [EBX + 0x8]       ; 0048726d
    JL 0x00487278                       ; 00487270
        ;   XREF to: 00487278 (CONDITIONAL_JUMP)  ; LAB_00487278
    MOV dword ptr [EBX + 0x8],EBP       ; 00487272
    MOV dword ptr [EDI + 0x8],EAX       ; 00487275
    ADD ESI,EDX                         ; 00487278
        ;   Label: LAB_00487278
    MOV EBP,ESI                         ; 0048727a
    SHR EBP,0x8                         ; 0048727c
    CMP EBP,dword ptr [EBX + 0xc]       ; 0048727f
    JL 0x0048728a                       ; 00487282
        ;   XREF to: 0048728a (CONDITIONAL_JUMP)  ; LAB_0048728a
    MOV dword ptr [EBX + 0xc],EBP       ; 00487284
    MOV dword ptr [EDI + 0xc],EAX       ; 00487287
    ADD ESI,EDX                         ; 0048728a
        ;   Label: LAB_0048728a
    ADD EBX,0x10                        ; 0048728c
    ADD EDI,0x10                        ; 0048728f
    SUB ECX,0x4                         ; 00487292
    JL 0x004872e7                       ; 00487295
        ;   XREF to: 004872e7 (CONDITIONAL_JUMP)  ; LAB_004872e7
    MOV EBP,ESI                         ; 00487297
    SHR EBP,0x8                         ; 00487299
    CMP EBP,dword ptr [EBX]             ; 0048729c
    JL 0x004872a4                       ; 0048729e
        ;   XREF to: 004872a4 (CONDITIONAL_JUMP)  ; LAB_004872a4
    MOV dword ptr [EBX],EBP             ; 004872a0
    MOV dword ptr [EDI],EAX             ; 004872a2
    ADD ESI,EDX                         ; 004872a4
        ;   Label: LAB_004872a4
    MOV EBP,ESI                         ; 004872a6
    SHR EBP,0x8                         ; 004872a8
    CMP EBP,dword ptr [EBX + 0x4]       ; 004872ab
    JL 0x004872b6                       ; 004872ae
        ;   XREF to: 004872b6 (CONDITIONAL_JUMP)  ; LAB_004872b6
    MOV dword ptr [EBX + 0x4],EBP       ; 004872b0
    MOV dword ptr [EDI + 0x4],EAX       ; 004872b3
    ADD ESI,EDX                         ; 004872b6
        ;   Label: LAB_004872b6
    MOV EBP,ESI                         ; 004872b8
    SHR EBP,0x8                         ; 004872ba
    CMP EBP,dword ptr [EBX + 0x8]       ; 004872bd
    JL 0x004872c8                       ; 004872c0
        ;   XREF to: 004872c8 (CONDITIONAL_JUMP)  ; LAB_004872c8
    MOV dword ptr [EBX + 0x8],EBP       ; 004872c2
    MOV dword ptr [EDI + 0x8],EAX       ; 004872c5
    ADD ESI,EDX                         ; 004872c8
        ;   Label: LAB_004872c8
    MOV EBP,ESI                         ; 004872ca
    SHR EBP,0x8                         ; 004872cc
    CMP EBP,dword ptr [EBX + 0xc]       ; 004872cf
    JL 0x004872da                       ; 004872d2
        ;   XREF to: 004872da (CONDITIONAL_JUMP)  ; LAB_004872da
    MOV dword ptr [EBX + 0xc],EBP       ; 004872d4
    MOV dword ptr [EDI + 0xc],EAX       ; 004872d7
    ADD ESI,EDX                         ; 004872da
        ;   Label: LAB_004872da
    ADD EBX,0x10                        ; 004872dc
    ADD EDI,0x10                        ; 004872df
    JMP 0x00487196                      ; 004872e2
        ;   XREF to: 00487196 (UNCONDITIONAL_JUMP)  ; LAB_00487196
    ADD ECX,0x4                         ; 004872e7
        ;   Label: LAB_004872e7
    JLE 0x00487323                      ; 004872ea
        ;   XREF to: 00487323 (CONDITIONAL_JUMP)  ; LAB_00487323
    MOV EBP,ESI                         ; 004872ec
    SHR EBP,0x8                         ; 004872ee
    CMP EBP,dword ptr [EBX]             ; 004872f1
    JL 0x004872f9                       ; 004872f3
        ;   XREF to: 004872f9 (CONDITIONAL_JUMP)  ; LAB_004872f9
    MOV dword ptr [EBX],EBP             ; 004872f5
    MOV dword ptr [EDI],EAX             ; 004872f7
    ADD ESI,EDX                         ; 004872f9
        ;   Label: LAB_004872f9
    DEC ECX                             ; 004872fb
    JLE 0x00487323                      ; 004872fc
        ;   XREF to: 00487323 (CONDITIONAL_JUMP)  ; LAB_00487323
    MOV EBP,ESI                         ; 004872fe
    SHR EBP,0x8                         ; 00487300
    CMP EBP,dword ptr [EBX + 0x4]       ; 00487303
    JL 0x0048730e                       ; 00487306
        ;   XREF to: 0048730e (CONDITIONAL_JUMP)  ; LAB_0048730e
    MOV dword ptr [EBX + 0x4],EBP       ; 00487308
    MOV dword ptr [EDI + 0x4],EAX       ; 0048730b
    ADD ESI,EDX                         ; 0048730e
        ;   Label: LAB_0048730e
    DEC ECX                             ; 00487310
    JLE 0x00487323                      ; 00487311
        ;   XREF to: 00487323 (CONDITIONAL_JUMP)  ; LAB_00487323
    MOV EBP,ESI                         ; 00487313
    SHR EBP,0x8                         ; 00487315
    CMP EBP,dword ptr [EBX + 0x8]       ; 00487318
    JL 0x00487323                       ; 0048731b
        ;   XREF to: 00487323 (CONDITIONAL_JUMP)  ; LAB_00487323
    MOV dword ptr [EBX + 0x8],EBP       ; 0048731d
    MOV dword ptr [EDI + 0x8],EAX       ; 00487320
    POP EBP                             ; 00487323
        ;   Label: LAB_00487323
    POP EDI                             ; 00487324
    POP ESI                             ; 00487325
    RET                                 ; 00487326

