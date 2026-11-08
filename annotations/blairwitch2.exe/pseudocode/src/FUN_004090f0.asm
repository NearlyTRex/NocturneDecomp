; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_004090f0(int param_1,int param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   FUN_004093a0 at 004093df
;   FUN_00534ea0 at 005351d7
;   FUN_00537030 at 00537363
;
; Called Functions:
;   FUN_00408cf0
;   FUN_0041a590
;   FUN_0041a600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004090f0
        ;   Label: FUN_004090f0
    PUSH EDI                            ; 004090f1
    PUSH EBP                            ; 004090f2
    SUB ESP,0xac                        ; 004090f3
    MOV EBP,dword ptr [ESP + 0xbc]      ; 004090f9
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00409100
    MOV EBX,dword ptr [ESP + 0xc4]      ; 00409107
    MOV dword ptr [ESP + 0xa8],ESI      ; 0040910e
    CMP EBX,0x2                         ; 00409115
    JNC 0x004092e1                      ; 00409118
        ;   XREF to: 004092e1 (CONDITIONAL_JUMP)  ; LAB_004092e1
    CMP EBX,0x1                         ; 0040911e
    JNZ 0x004092ec                      ; 00409121
        ;   XREF to: 004092ec (CONDITIONAL_JUMP)  ; LAB_004092ec
    PUSH EBP                            ; 00409127
        ;   Label: LAB_00409127
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 00409128
    LEA ESI,[ESP + 0x1c]                ; 0040912e
    LEA EDI,[ESP + 0x34]                ; 00409132
    CALL dword ptr [EAX + 0x24]         ; 00409136
    MOV ECX,0x6                         ; 00409139
    ADD ESP,0x4                         ; 0040913e
    LEA ESI,[ESP + 0x18]                ; 00409141
    LEA EAX,[ESP + 0x30]                ; 00409145
    PUSH 0x0                            ; 00409149
    MOVSD.REP ES:EDI,ESI                ; 0040914b
    PUSH EAX                            ; 0040914d
    LEA ESI,[ESP + 0x50]                ; 0040914e
    LEA EDI,[ESP + 0x8c]                ; 00409152
    CALL FUN_0041a600                   ; 00409159
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a600()
    LEA ESI,[ESP + 0x50]                ; 0040915e
    ADD ESP,0x8                         ; 00409162
    LEA EAX,[ESP + 0x84]                ; 00409165
    LEA EBX,[ESP + 0x90]                ; 0040916c
    PUSH EAX                            ; 00409173
    MOVSD ES:EDI,ESI                    ; 00409174
    MOVSD ES:EDI,ESI                    ; 00409175
    MOVSD ES:EDI,ESI                    ; 00409176
    PUSH EBP                            ; 00409177
    LEA ESI,[ESP + 0xa4]                ; 00409178
    LEA EDI,[ESP + 0x98]                ; 0040917f
    CALL FUN_00408cf0                   ; 00409186
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    LEA ESI,[ESP + 0xa4]                ; 0040918b
    ADD ESP,0x8                         ; 00409192
    MOV EAX,ESP                         ; 00409195
    MOVSD ES:EDI,ESI                    ; 00409197
    MOVSD ES:EDI,ESI                    ; 00409198
    MOVSD ES:EDI,ESI                    ; 00409199
    CMP EAX,EBX                         ; 0040919a
    JZ 0x004091be                       ; 0040919c
        ;   XREF to: 004091be (CONDITIONAL_JUMP)  ; LAB_004091be
    MOV EAX,dword ptr [ESP + 0x90]      ; 0040919e
    MOV dword ptr [ESP],EAX             ; 004091a5
    MOV EAX,dword ptr [ESP + 0x94]      ; 004091a8
    MOV dword ptr [ESP + 0x4],EAX       ; 004091af
    MOV EAX,dword ptr [ESP + 0x98]      ; 004091b3
    MOV dword ptr [ESP + 0x8],EAX       ; 004091ba
    LEA EAX,[ESP + 0xc]                 ; 004091be
        ;   Label: LAB_004091be
    CMP EAX,EBX                         ; 004091c2
    JNZ 0x0040928f                      ; 004091c4
        ;   XREF to: 0040928f (CONDITIONAL_JUMP)  ; LAB_0040928f
    MOV EBX,0x1                         ; 004091ca
        ;   Label: LAB_004091ca
    PUSH EBX                            ; 004091cf
        ;   Label: LAB_004091cf
    LEA EAX,[ESP + 0x34]                ; 004091d0
    PUSH EAX                            ; 004091d4
    LEA ESI,[ESP + 0x74]                ; 004091d5
    LEA EDI,[ESP + 0x5c]                ; 004091d9
    CALL FUN_0041a600                   ; 004091dd
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a600()
    ADD ESP,0x8                         ; 004091e2
    LEA EAX,[ESP + 0x54]                ; 004091e5
    LEA ESI,[ESP + 0x6c]                ; 004091e9
    PUSH EAX                            ; 004091ed
    MOVSD ES:EDI,ESI                    ; 004091ee
    MOVSD ES:EDI,ESI                    ; 004091ef
    MOVSD ES:EDI,ESI                    ; 004091f0
    PUSH EBP                            ; 004091f1
    LEA ESI,[ESP + 0x80]                ; 004091f2
    LEA EDI,[ESP + 0x68]                ; 004091f9
    CALL FUN_00408cf0                   ; 004091fd
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    ADD ESP,0x8                         ; 00409202
    LEA EAX,[ESP + 0x60]                ; 00409205
    LEA ESI,[ESP + 0x78]                ; 00409209
    PUSH EAX                            ; 0040920d
    LEA EAX,[ESP + 0x4]                 ; 0040920e
    INC EBX                             ; 00409212
    PUSH EAX                            ; 00409213
    MOVSD ES:EDI,ESI                    ; 00409214
    MOVSD ES:EDI,ESI                    ; 00409215
    MOVSD ES:EDI,ESI                    ; 00409216
    CALL FUN_0041a590                   ; 00409217
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a590()
    ADD ESP,0x8                         ; 0040921c
    CMP EBX,0x8                         ; 0040921f
    JL 0x004091cf                       ; 00409222
        ;   XREF to: 004091cf (CONDITIONAL_JUMP)  ; LAB_004091cf
    FLD float ptr [ESP]                 ; 00409224
    FADD float ptr [EBP + 0x20]         ; 00409227
    FLD float ptr [ESP + 0x4]           ; 0040922a
    FXCH                                ; 0040922e
    FSTP float ptr [ESP]                ; 00409230
    FADD float ptr [EBP + 0x24]         ; 00409233
    FLD float ptr [ESP + 0x8]           ; 00409236
    FXCH                                ; 0040923a
    FSTP float ptr [ESP + 0x4]          ; 0040923c
    FADD float ptr [EBP + 0x28]         ; 00409240
    FLD float ptr [ESP + 0xc]           ; 00409243
    FXCH                                ; 00409247
    FSTP float ptr [ESP + 0x8]          ; 00409249
    FADD float ptr [EBP + 0x20]         ; 0040924d
    FLD float ptr [ESP + 0x10]          ; 00409250
    FXCH                                ; 00409254
    FSTP float ptr [ESP + 0xc]          ; 00409256
    FADD float ptr [EBP + 0x24]         ; 0040925a
    FLD float ptr [ESP + 0x14]          ; 0040925d
    FXCH                                ; 00409261
    FSTP float ptr [ESP + 0x10]         ; 00409263
    FADD float ptr [EBP + 0x28]         ; 00409267
    FSTP float ptr [ESP + 0x14]         ; 0040926a
        ;   Label: LAB_0040926a
    MOV ECX,0x6                         ; 0040926e
        ;   Label: LAB_0040926e
    MOV EDI,dword ptr [ESP + 0xa8]      ; 00409273
    MOV ESI,ESP                         ; 0040927a
    MOVSD.REP ES:EDI,ESI                ; 0040927c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0040927e
    ADD ESP,0xac                        ; 00409285
    POP EBP                             ; 0040928b
    POP EDI                             ; 0040928c
    POP EBX                             ; 0040928d
    RET                                 ; 0040928e
    MOV EAX,dword ptr [EBX]             ; 0040928f
        ;   Label: LAB_0040928f
    MOV dword ptr [ESP + 0xc],EAX       ; 00409291
    MOV EAX,dword ptr [EBX + 0x4]       ; 00409295
    MOV dword ptr [ESP + 0x10],EAX      ; 00409298
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040929c
    MOV dword ptr [ESP + 0x14],EAX      ; 0040929f
    JMP 0x004091ca                      ; 004092a3
        ;   XREF to: 004091ca (UNCONDITIONAL_JUMP)  ; LAB_004091ca
    FLD float ptr [EBP + 0x20]          ; 004092a8
        ;   Label: LAB_004092a8
    FSUB float ptr [EAX + 0x1c]         ; 004092ab
    FSTP float ptr [ESP]                ; 004092ae
    FLD float ptr [EBP + 0x24]          ; 004092b1
    FADD float ptr [EAX + 0x14]         ; 004092b4
    FSTP float ptr [ESP + 0x4]          ; 004092b7
    FLD float ptr [EBP + 0x28]          ; 004092bb
    FSUB float ptr [EAX + 0x1c]         ; 004092be
    FSTP float ptr [ESP + 0x8]          ; 004092c1
    FLD float ptr [EBP + 0x20]          ; 004092c5
    FADD float ptr [EAX + 0x1c]         ; 004092c8
    FSTP float ptr [ESP + 0xc]          ; 004092cb
    FLD float ptr [EBP + 0x24]          ; 004092cf
    FADD float ptr [EAX + 0x18]         ; 004092d2
    FSTP float ptr [ESP + 0x10]         ; 004092d5
    FLD float ptr [EBP + 0x28]          ; 004092d9
    FADD float ptr [EAX + 0x1c]         ; 004092dc
    JMP 0x0040926a                      ; 004092df
        ;   XREF to: 0040926a (UNCONDITIONAL_JUMP)  ; LAB_0040926a
    JBE 0x004092a8                      ; 004092e1
        ;   XREF to: 004092a8 (CONDITIONAL_JUMP)  ; LAB_004092a8
        ;   Label: LAB_004092e1
    CMP EBX,0x3                         ; 004092e3
    JZ 0x00409127                       ; 004092e6
        ;   XREF to: 00409127 (CONDITIONAL_JUMP)  ; LAB_00409127
    MOV EDX,0x4cbebc20                  ; 004092ec
        ;   Label: LAB_004092ec
    MOV EBX,ESP                         ; 004092f1
    LEA EAX,[ESP + 0xc]                 ; 004092f3
    MOV dword ptr [ESP + 0x4],EDX       ; 004092f7
    MOV dword ptr [ESP],EDX             ; 004092fb
    MOV dword ptr [ESP + 0x8],EDX       ; 004092fe
    CMP EAX,EBX                         ; 00409302
    JZ 0x0040926e                       ; 00409304
        ;   XREF to: 0040926e (CONDITIONAL_JUMP)  ; LAB_0040926e
    MOV dword ptr [ESP + 0x10],EDX      ; 0040930a
    MOV dword ptr [ESP + 0x14],EDX      ; 0040930e
    MOV dword ptr [ESP + 0xc],EDX       ; 00409312
    JMP 0x0040926e                      ; 00409316
        ;   XREF to: 0040926e (UNCONDITIONAL_JUMP)  ; LAB_0040926e

