; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052a0e0(float *param_1,float *param_2,int param_3)
;
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052b450 at 0052bd64
;
; Referenced Globals:
;   undefined4 DAT_0062029c
;   undefined8 DAT_006202a0
;   undefined8 DAT_006202a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a0e0
        ;   Label: FUN_0052a0e0
    PUSH ESI                            ; 0052a0e1
    PUSH EDI                            ; 0052a0e2
    PUSH EBP                            ; 0052a0e3
    MOV EBP,ESP                         ; 0052a0e4
    SUB ESP,0x38                        ; 0052a0e6
    AND ESP,0xfffffff8                  ; 0052a0e9
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0052a0ec
    CMP dword ptr [0x0062029c],0x0      ; 0052a0ef | DAT_0062029c
    JZ 0x0052a143                       ; 0052a0f6
        ;   XREF to: 0052a143 (CONDITIONAL_JUMP)  ; LAB_0052a143
    XOR EDX,EDX                         ; 0052a0f8
    FLD double ptr [EDX + 0x6202a0]     ; 0052a0fa | DAT_006202a0 | DAT_006202a8
        ;   Label: LAB_0052a0fa
    FMUL ST0                            ; 0052a100
    FLD1                                ; 0052a102
    FADDP                               ; 0052a104
    FSQRT                               ; 0052a106
    FLD1                                ; 0052a108
    FDIVRP                              ; 0052a10a
    FLD double ptr [EDX + 0x6202a0]     ; 0052a10c | DAT_006202a0 | DAT_006202a8
    ADD EDX,0x8                         ; 0052a112
    FXCH                                ; 0052a115
    FSTP double ptr [ESP]               ; 0052a117
    MOV EAX,dword ptr [ESP]             ; 0052a11a
    FMUL double ptr [ESP]               ; 0052a11d
    MOV dword ptr [EDX + 0x1d3e980],EAX ; 0052a120
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052a126
    FSTP double ptr [EDX + 0x1d3e940]   ; 0052a12a
    MOV dword ptr [EDX + 0x1d3e984],EAX ; 0052a130
    CMP EDX,0x40                        ; 0052a136
    JNZ 0x0052a0fa                      ; 0052a139
        ;   XREF to: 0052a0fa (CONDITIONAL_JUMP)  ; LAB_0052a0fa
    XOR ECX,ECX                         ; 0052a13b
    MOV dword ptr [0x0062029c],ECX      ; 0052a13d | DAT_0062029c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052a143
        ;   Label: LAB_0052a143
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052a146
    XOR EBX,EBX                         ; 0052a149
    ADD ESI,0x48                        ; 0052a14b
    MOV dword ptr [ESP + 0x24],EAX      ; 0052a14e
    IMUL EAX,EBX,0x48                   ; 0052a152
        ;   Label: LAB_0052a152
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052a155
    MOV ECX,ESI                         ; 0052a158
    ADD EAX,EDX                         ; 0052a15a
    MOV EDX,dword ptr [ESP + 0x24]      ; 0052a15c
    ADD EDX,0x4                         ; 0052a160
        ;   Label: LAB_0052a160
    FLD float ptr [EAX]                 ; 0052a163
    ADD EAX,0x4                         ; 0052a165
    FSTP float ptr [EDX + -0x4]         ; 0052a168
    CMP EAX,ECX                         ; 0052a16b
    JNZ 0x0052a160                      ; 0052a16d
        ;   XREF to: 0052a160 (CONDITIONAL_JUMP)  ; LAB_0052a160
    MOV ECX,dword ptr [ESP + 0x24]      ; 0052a16f
    INC EBX                             ; 0052a173
    ADD ECX,0x48                        ; 0052a174
    ADD ESI,0x48                        ; 0052a177
    MOV dword ptr [ESP + 0x24],ECX      ; 0052a17a
    CMP EBX,0x20                        ; 0052a17e
    JL 0x0052a152                       ; 0052a181
        ;   XREF to: 0052a152 (CONDITIONAL_JUMP)  ; LAB_0052a152
    CMP dword ptr [EDI + 0x10],0x0      ; 0052a183
    JZ 0x0052a199                       ; 0052a187
        ;   XREF to: 0052a199 (CONDITIONAL_JUMP)  ; LAB_0052a199
    CMP dword ptr [EDI + 0x14],0x2      ; 0052a189
    JNZ 0x0052a199                      ; 0052a18d
        ;   XREF to: 0052a199 (CONDITIONAL_JUMP)  ; LAB_0052a199
    CMP dword ptr [EDI + 0x18],0x0      ; 0052a18f
    JZ 0x0052a2a1                       ; 0052a193
        ;   XREF to: 0052a2a1 (CONDITIONAL_JUMP)  ; LAB_0052a2a1
    CMP dword ptr [EDI + 0x10],0x0      ; 0052a199
        ;   Label: LAB_0052a199
    JZ 0x0052a2a8                       ; 0052a19d
        ;   XREF to: 0052a2a8 (CONDITIONAL_JUMP)  ; LAB_0052a2a8
    CMP dword ptr [EDI + 0x18],0x0      ; 0052a1a3
    JZ 0x0052a2a8                       ; 0052a1a7
        ;   XREF to: 0052a2a8 (CONDITIONAL_JUMP)  ; LAB_0052a2a8
    CMP dword ptr [EDI + 0x14],0x2      ; 0052a1ad
    JNZ 0x0052a2a8                      ; 0052a1b1
        ;   XREF to: 0052a2a8 (CONDITIONAL_JUMP)  ; LAB_0052a2a8
    MOV dword ptr [ESP + 0x34],0x1      ; 0052a1b7
    XOR EDX,EDX                         ; 0052a1bf
        ;   Label: LAB_0052a1bf
    MOV ECX,dword ptr [ESP + 0x34]      ; 0052a1c1
    MOV dword ptr [ESP + 0x2c],EDX      ; 0052a1c5
    TEST ECX,ECX                        ; 0052a1c9
    JLE 0x0052a2a1                      ; 0052a1cb
        ;   XREF to: 0052a2a1 (CONDITIONAL_JUMP)  ; LAB_0052a2a1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052a1d1
    ADD EAX,0x68                        ; 0052a1d4
    MOV dword ptr [ESP + 0x1c],EAX      ; 0052a1d7
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052a1db
    MOV dword ptr [ESP + 0x20],EAX      ; 0052a1de
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052a1e2
    ADD EAX,0x48                        ; 0052a1e5
    MOV dword ptr [ESP + 0x28],EAX      ; 0052a1e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052a1ec
    MOV dword ptr [ESP + 0x18],EAX      ; 0052a1ef
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0052a1f3
        ;   Label: LAB_0052a1f3
    INC EAX                             ; 0052a1f7
    IMUL EAX,EAX,0x48                   ; 0052a1f8
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052a1fb
    MOV EBX,dword ptr [ESP + 0x20]      ; 0052a1fe
    MOV ESI,dword ptr [ESP + 0x28]      ; 0052a202
    MOV ECX,dword ptr [ESP + 0x18]      ; 0052a206
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0052a20a
    ADD EBX,0x44                        ; 0052a20e
    MOV dword ptr [ESP + 0x30],EDI      ; 0052a211
    ADD ECX,0x44                        ; 0052a215
    MOV EDI,dword ptr [ESP + 0x30]      ; 0052a218
    ADD EDX,EAX                         ; 0052a21c
    XOR EAX,EAX                         ; 0052a21e
    FLD float ptr [ECX]                 ; 0052a220
        ;   Label: LAB_0052a220
    FLD ST0                             ; 0052a222
    FMUL double ptr [EAX + 0x1d3e988]   ; 0052a224
    FLD float ptr [ESI]                 ; 0052a22a
    FLD ST0                             ; 0052a22c
    FMUL double ptr [EAX + 0x1d3e948]   ; 0052a22e
    FSUBP ST2,ST0                       ; 0052a234
    FXCH                                ; 0052a236
    FSTP float ptr [EBX]                ; 0052a238
    FMUL double ptr [EAX + 0x1d3e988]   ; 0052a23a
    FXCH                                ; 0052a240
    FMUL double ptr [EAX + 0x1d3e948]   ; 0052a242
    ADD EDX,0x4                         ; 0052a248
    SUB EBX,0x4                         ; 0052a24b
    ADD EAX,0x8                         ; 0052a24e
    ADD ESI,0x4                         ; 0052a251
    FADDP                               ; 0052a254
    SUB ECX,0x4                         ; 0052a256
    FSTP float ptr [EDX + -0x4]         ; 0052a259
    CMP EDX,EDI                         ; 0052a25c
    JNZ 0x0052a220                      ; 0052a25e
        ;   XREF to: 0052a220 (CONDITIONAL_JUMP)  ; LAB_0052a220
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052a260
    MOV ESI,dword ptr [ESP + 0x20]      ; 0052a264
    MOV EDI,dword ptr [ESP + 0x28]      ; 0052a268
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052a26c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0052a270
    MOV ECX,dword ptr [ESP + 0x34]      ; 0052a274
    ADD EBX,0x48                        ; 0052a278
    ADD ESI,0x48                        ; 0052a27b
    ADD EDI,0x48                        ; 0052a27e
    ADD EAX,0x48                        ; 0052a281
    INC EDX                             ; 0052a284
    MOV dword ptr [ESP + 0x1c],EBX      ; 0052a285
    MOV dword ptr [ESP + 0x20],ESI      ; 0052a289
    MOV dword ptr [ESP + 0x28],EDI      ; 0052a28d
    MOV dword ptr [ESP + 0x18],EAX      ; 0052a291
    MOV dword ptr [ESP + 0x2c],EDX      ; 0052a295
    CMP EDX,ECX                         ; 0052a299
    JL 0x0052a1f3                       ; 0052a29b
        ;   XREF to: 0052a1f3 (CONDITIONAL_JUMP)  ; LAB_0052a1f3
    MOV ESP,EBP                         ; 0052a2a1
        ;   Label: LAB_0052a2a1
    POP EBP                             ; 0052a2a3
    POP EDI                             ; 0052a2a4
    POP ESI                             ; 0052a2a5
    POP EBX                             ; 0052a2a6
    RET                                 ; 0052a2a7
    MOV dword ptr [ESP + 0x34],0x1f     ; 0052a2a8
        ;   Label: LAB_0052a2a8
    JMP 0x0052a1bf                      ; 0052a2b0
        ;   XREF to: 0052a1bf (UNCONDITIONAL_JUMP)  ; LAB_0052a1bf

