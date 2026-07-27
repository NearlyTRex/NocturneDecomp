; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrender_cpp_FUN_00464075(void)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090 at 0045f169
;
; Referenced Globals:
;   undefined4 DAT_01b4d764
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c00c80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00464075
        ;   Label: core_dstrender.cpp_FUN_00464075
    PUSH EDI                            ; 00464076
    PUSH EBP                            ; 00464077
    MOV EAX,dword ptr [ESI + 0x8]       ; 00464078
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046407b
    CMP EAX,ECX                         ; 0046407e
    JBE 0x00464085                      ; 00464080
        ;   XREF to: 00464085 (CONDITIONAL_JUMP)  ; LAB_00464085
    XCHG EAX,ECX                        ; 00464082
    XCHG EDI,ESI                        ; 00464083
    SHR EAX,0x10                        ; 00464085
        ;   Label: LAB_00464085
    SHR ECX,0x10                        ; 00464088
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd4260] ; 0046408b | DAT_01bd4260
    MOV EBX,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 00464092 | DAT_01bd2fa0
    SUB ECX,EAX                         ; 00464099
    JLE 0x004641fc                      ; 0046409b
        ;   XREF to: 004641fc (CONDITIONAL_JUMP)  ; LAB_004641fc
    ADD EBX,EAX                         ; 004640a1
    SHL EAX,0x2                         ; 004640a3
    ADD EBP,EAX                         ; 004640a6
    INC ECX                             ; 004640a8
    MOV EAX,dword ptr [EDI + 0x28]      ; 004640a9
    SUB EAX,dword ptr [ESI + 0x28]      ; 004640ac
    IMUL dword ptr [ECX*0x4 + 0x1c00c80] ; 004640af | DAT_01c00c80
    MOV EDI,EBX                         ; 004640b6
    MOV EBX,EBP                         ; 004640b8
    DEC ECX                             ; 004640ba
    MOV ESI,dword ptr [ESI + 0x28]      ; 004640bb
    MOV EAX,[0x01b4d764]                ; 004640be | DAT_01b4d764
    SUB ECX,0x4                         ; 004640c3
        ;   Label: LAB_004640c3
    JL 0x004641c8                       ; 004640c6
        ;   XREF to: 004641c8 (CONDITIONAL_JUMP)  ; LAB_004641c8
    MOV EBP,ESI                         ; 004640cc
    SHR EBP,0x8                         ; 004640ce
    CMP EBP,dword ptr [EBX]             ; 004640d1
    SBB EAX,-0x1                        ; 004640d3
    ADD ESI,EDX                         ; 004640d6
    MOV EBP,ESI                         ; 004640d8
    SHR EBP,0x8                         ; 004640da
    CMP EBP,dword ptr [EBX + 0x4]       ; 004640dd
    SBB EAX,-0x1                        ; 004640e0
    ADD ESI,EDX                         ; 004640e3
    MOV EBP,ESI                         ; 004640e5
    SHR EBP,0x8                         ; 004640e7
    CMP EBP,dword ptr [EBX + 0x8]       ; 004640ea
    SBB EAX,-0x1                        ; 004640ed
    ADD ESI,EDX                         ; 004640f0
    MOV EBP,ESI                         ; 004640f2
    SHR EBP,0x8                         ; 004640f4
    CMP EBP,dword ptr [EBX + 0xc]       ; 004640f7
    SBB EAX,-0x1                        ; 004640fa
    ADD ESI,EDX                         ; 004640fd
    ADD EBX,0x10                        ; 004640ff
    ADD EDI,0x4                         ; 00464102
    SUB ECX,0x4                         ; 00464105
    JL 0x004641c8                       ; 00464108
        ;   XREF to: 004641c8 (CONDITIONAL_JUMP)  ; LAB_004641c8
    MOV EBP,ESI                         ; 0046410e
    SHR EBP,0x8                         ; 00464110
    CMP EBP,dword ptr [EBX]             ; 00464113
    SBB EAX,-0x1                        ; 00464115
    ADD ESI,EDX                         ; 00464118
    MOV EBP,ESI                         ; 0046411a
    SHR EBP,0x8                         ; 0046411c
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046411f
    SBB EAX,-0x1                        ; 00464122
    ADD ESI,EDX                         ; 00464125
    MOV EBP,ESI                         ; 00464127
    SHR EBP,0x8                         ; 00464129
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046412c
    SBB EAX,-0x1                        ; 0046412f
    ADD ESI,EDX                         ; 00464132
    MOV EBP,ESI                         ; 00464134
    SHR EBP,0x8                         ; 00464136
    CMP EBP,dword ptr [EBX + 0xc]       ; 00464139
    SBB EAX,-0x1                        ; 0046413c
    ADD ESI,EDX                         ; 0046413f
    ADD EBX,0x10                        ; 00464141
    ADD EDI,0x4                         ; 00464144
    SUB ECX,0x4                         ; 00464147
    JL 0x004641c8                       ; 0046414a
        ;   XREF to: 004641c8 (CONDITIONAL_JUMP)  ; LAB_004641c8
    MOV EBP,ESI                         ; 0046414c
    SHR EBP,0x8                         ; 0046414e
    CMP EBP,dword ptr [EBX]             ; 00464151
    SBB EAX,-0x1                        ; 00464153
    ADD ESI,EDX                         ; 00464156
    MOV EBP,ESI                         ; 00464158
    SHR EBP,0x8                         ; 0046415a
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046415d
    SBB EAX,-0x1                        ; 00464160
    ADD ESI,EDX                         ; 00464163
    MOV EBP,ESI                         ; 00464165
    SHR EBP,0x8                         ; 00464167
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046416a
    SBB EAX,-0x1                        ; 0046416d
    ADD ESI,EDX                         ; 00464170
    MOV EBP,ESI                         ; 00464172
    SHR EBP,0x8                         ; 00464174
    CMP EBP,dword ptr [EBX + 0xc]       ; 00464177
    SBB EAX,-0x1                        ; 0046417a
    ADD ESI,EDX                         ; 0046417d
    ADD EBX,0x10                        ; 0046417f
    ADD EDI,0x4                         ; 00464182
    SUB ECX,0x4                         ; 00464185
    JL 0x004641c8                       ; 00464188
        ;   XREF to: 004641c8 (CONDITIONAL_JUMP)  ; LAB_004641c8
    MOV EBP,ESI                         ; 0046418a
    SHR EBP,0x8                         ; 0046418c
    CMP EBP,dword ptr [EBX]             ; 0046418f
    SBB EAX,-0x1                        ; 00464191
    ADD ESI,EDX                         ; 00464194
    MOV EBP,ESI                         ; 00464196
    SHR EBP,0x8                         ; 00464198
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046419b
    SBB EAX,-0x1                        ; 0046419e
    ADD ESI,EDX                         ; 004641a1
    MOV EBP,ESI                         ; 004641a3
    SHR EBP,0x8                         ; 004641a5
    CMP EBP,dword ptr [EBX + 0x8]       ; 004641a8
    SBB EAX,-0x1                        ; 004641ab
    ADD ESI,EDX                         ; 004641ae
    MOV EBP,ESI                         ; 004641b0
    SHR EBP,0x8                         ; 004641b2
    CMP EBP,dword ptr [EBX + 0xc]       ; 004641b5
    SBB EAX,-0x1                        ; 004641b8
    ADD ESI,EDX                         ; 004641bb
    ADD EBX,0x10                        ; 004641bd
    ADD EDI,0x4                         ; 004641c0
    JMP 0x004640c3                      ; 004641c3
        ;   XREF to: 004640c3 (UNCONDITIONAL_JUMP)  ; LAB_004640c3
    ADD ECX,0x4                         ; 004641c8
        ;   Label: LAB_004641c8
    JLE 0x004641f7                      ; 004641cb
        ;   XREF to: 004641f7 (CONDITIONAL_JUMP)  ; LAB_004641f7
    MOV EBP,ESI                         ; 004641cd
    SHR EBP,0x8                         ; 004641cf
    CMP EBP,dword ptr [EBX]             ; 004641d2
    SBB EAX,-0x1                        ; 004641d4
    ADD ESI,EDX                         ; 004641d7
    DEC ECX                             ; 004641d9
    JLE 0x004641f7                      ; 004641da
        ;   XREF to: 004641f7 (CONDITIONAL_JUMP)  ; LAB_004641f7
    MOV EBP,ESI                         ; 004641dc
    SHR EBP,0x8                         ; 004641de
    CMP EBP,dword ptr [EBX + 0x4]       ; 004641e1
    SBB EAX,-0x1                        ; 004641e4
    ADD ESI,EDX                         ; 004641e7
    DEC ECX                             ; 004641e9
    JLE 0x004641f7                      ; 004641ea
        ;   XREF to: 004641f7 (CONDITIONAL_JUMP)  ; LAB_004641f7
    MOV EBP,ESI                         ; 004641ec
    SHR EBP,0x8                         ; 004641ee
    CMP EBP,dword ptr [EBX + 0x8]       ; 004641f1
    SBB EAX,-0x1                        ; 004641f4
    MOV [0x01b4d764],EAX                ; 004641f7 | DAT_01b4d764
        ;   Label: LAB_004641f7
    POP EBP                             ; 004641fc
        ;   Label: LAB_004641fc
    POP EDI                             ; 004641fd
    POP ESI                             ; 004641fe
    RET                                 ; 004641ff

