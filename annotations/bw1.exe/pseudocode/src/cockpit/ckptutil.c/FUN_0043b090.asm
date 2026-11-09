; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0043b090(byte *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,uint param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b090
        ;   Label: cockpit_ckptutil.c_FUN_0043b090
    PUSH ESI                            ; 0043b091
    PUSH EDI                            ; 0043b092
    PUSH EBP                            ; 0043b093
    SUB ESP,0x120                       ; 0043b094
    MOV EDX,dword ptr [ESP + 0x148]     ; 0043b09a
    CMP EDX,0xff                        ; 0043b0a1
    JA 0x0043b289                       ; 0043b0a7
        ;   XREF to: 0043b289 (CONDITIONAL_JUMP)  ; LAB_0043b289
    XOR EDI,EDI                         ; 0043b0ad
        ;   Label: LAB_0043b0ad
    MOV EBP,dword ptr [ESP + 0x144]     ; 0043b0af
    MOV dword ptr [ESP + 0x110],EDI     ; 0043b0b6
    TEST EBP,EBP                        ; 0043b0bd
    JLE 0x0043b27e                      ; 0043b0bf
        ;   XREF to: 0043b27e (CONDITIONAL_JUMP)  ; LAB_0043b27e
    MOV EAX,dword ptr [ESP + 0x140]     ; 0043b0c5
    DEC EAX                             ; 0043b0cc
    MOV dword ptr [ESP + 0x100],EAX     ; 0043b0cd
    MOV EAX,dword ptr [ESP + 0x140]     ; 0043b0d4
    MOV dword ptr [ESP + 0x104],EAX     ; 0043b0db
    IMUL EAX,EDI                        ; 0043b0e2
    MOV EDX,dword ptr [ESP + 0x134]     ; 0043b0e5
    ADD EAX,EDX                         ; 0043b0ec
    MOV dword ptr [ESP + 0x10c],EAX     ; 0043b0ee
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0043b0f5
    MOV dword ptr [ESP + 0x108],EDI     ; 0043b0fc
    MOV dword ptr [ESP + 0x114],EAX     ; 0043b103
    MOV ESI,dword ptr [ESP + 0x140]     ; 0043b10a
        ;   Label: LAB_0043b10a
    XOR EBX,EBX                         ; 0043b111
    XOR EAX,EAX                         ; 0043b113
    MOV dword ptr [ESP + 0x11c],EBX     ; 0043b115
    TEST ESI,ESI                        ; 0043b11c
    JLE 0x0043b18b                      ; 0043b11e
        ;   XREF to: 0043b18b (CONDITIONAL_JUMP)  ; LAB_0043b18b
    MOV EDX,dword ptr [ESP + 0x108]     ; 0043b120
    MOV ESI,0xffffffff                  ; 0043b127
    XOR EDI,EDI                         ; 0043b12c
    MOV dword ptr [ESP + 0x118],EDX     ; 0043b12e
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0043b135
    MOV ECX,dword ptr [ESP + 0x13c]     ; 0043b13c
        ;   Label: LAB_0043b13c
    ADD ECX,dword ptr [ESP + 0x118]     ; 0043b143
    ADD ECX,EDI                         ; 0043b14a
    TEST EBX,EBX                        ; 0043b14c
    JZ 0x0043b2c2                       ; 0043b14e
        ;   XREF to: 0043b2c2 (CONDITIONAL_JUMP)  ; LAB_0043b2c2
    MOVZX EBP,byte ptr [EDX]            ; 0043b154
    CMP EBP,dword ptr [ESP + 0x148]     ; 0043b157
    JNZ 0x0043b17d                      ; 0043b15e
        ;   XREF to: 0043b17d (CONDITIONAL_JUMP)  ; LAB_0043b17d
    MOV EBP,ESI                         ; 0043b160
    SUB EBP,dword ptr [ECX + 0x4]       ; 0043b162
    INC EBP                             ; 0043b165
    MOV dword ptr [ECX + 0x44],EBP      ; 0043b166
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0043b169
    ADD EDI,0x4                         ; 0043b170
    INC ECX                             ; 0043b173
    XOR EBX,EBX                         ; 0043b174
    MOV dword ptr [ESP + 0x11c],ECX     ; 0043b176
    MOV EBP,dword ptr [ESP + 0x140]     ; 0043b17d
        ;   Label: LAB_0043b17d
    INC EDX                             ; 0043b184
    INC EAX                             ; 0043b185
    INC ESI                             ; 0043b186
    CMP EAX,EBP                         ; 0043b187
    JL 0x0043b13c                       ; 0043b189
        ;   XREF to: 0043b13c (CONDITIONAL_JUMP)  ; LAB_0043b13c
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0043b18b
        ;   Label: LAB_0043b18b
    CMP EAX,0x10                        ; 0043b192
    JL 0x0043b1db                       ; 0043b195
        ;   XREF to: 0043b1db (CONDITIONAL_JUMP)  ; LAB_0043b1db
    MOV EDX,dword ptr [ESP + 0x110]     ; 0043b197
    PUSH EDX                            ; 0043b19e
    PUSH EAX                            ; 0043b19f
    MOV ESI,dword ptr [ESP + 0x140]     ; 0043b1a0
    PUSH ESI                            ; 0043b1a7
    PUSH 0x5d65d9                       ; 0043b1a8
    LEA EAX,[ESP + 0x10]                ; 0043b1ad
    PUSH EAX                            ; 0043b1b1
    MOV EDI,0x5d660a                    ; 0043b1b2
    CALL crt_unknown.c_FUN_005bfb40     ; 0043b1b7
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x14                        ; 0043b1bc
    MOV EAX,ESP                         ; 0043b1bf
    MOV EBP,0x969                       ; 0043b1c1
    PUSH EAX                            ; 0043b1c6
    MOV dword ptr [0x01d1d400],EDI      ; 0043b1c7 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0043b1cd | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043b1d3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043b1d8
    CMP EBX,0x1                         ; 0043b1db
        ;   Label: LAB_0043b1db
    JNZ 0x0043b211                      ; 0043b1de
        ;   XREF to: 0043b211 (CONDITIONAL_JUMP)  ; LAB_0043b211
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0043b1e0
    MOV EDX,dword ptr [ESP + 0x114]     ; 0043b1e7
    SHL EAX,0x2                         ; 0043b1ee
    ADD EAX,EDX                         ; 0043b1f1
    MOV EDX,dword ptr [ESP + 0x100]     ; 0043b1f3
    SUB EDX,dword ptr [EAX + 0x4]       ; 0043b1fa
    ADD EDX,EBX                         ; 0043b1fd
    MOV EBX,dword ptr [ESP + 0x11c]     ; 0043b1ff
    INC EBX                             ; 0043b206
    MOV dword ptr [EAX + 0x44],EDX      ; 0043b207
    MOV dword ptr [ESP + 0x11c],EBX     ; 0043b20a
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0043b211
        ;   Label: LAB_0043b211
    MOV EDX,dword ptr [ESP + 0x114]     ; 0043b218
    MOV ECX,dword ptr [ESP + 0x114]     ; 0043b21f
    MOV EBX,dword ptr [ESP + 0x108]     ; 0043b226
    MOV ESI,dword ptr [ESP + 0x110]     ; 0043b22d
    MOV EDI,dword ptr [ESP + 0x144]     ; 0043b234
    ADD ECX,0x84                        ; 0043b23b
    ADD EBX,0x84                        ; 0043b241
    INC ESI                             ; 0043b247
    MOV dword ptr [EDX],EAX             ; 0043b248
    MOV EAX,dword ptr [ESP + 0x104]     ; 0043b24a
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0043b251
    MOV dword ptr [ESP + 0x114],ECX     ; 0043b258
    MOV dword ptr [ESP + 0x108],EBX     ; 0043b25f
    ADD EDX,EAX                         ; 0043b266
    MOV dword ptr [ESP + 0x110],ESI     ; 0043b268
    MOV dword ptr [ESP + 0x10c],EDX     ; 0043b26f
    CMP ESI,EDI                         ; 0043b276
    JL 0x0043b10a                       ; 0043b278
        ;   XREF to: 0043b10a (CONDITIONAL_JUMP)  ; LAB_0043b10a
    ADD ESP,0x120                       ; 0043b27e
        ;   Label: LAB_0043b27e
    POP EBP                             ; 0043b284
    POP EDI                             ; 0043b285
    POP ESI                             ; 0043b286
    POP EBX                             ; 0043b287
    RET                                 ; 0043b288
    PUSH EDX                            ; 0043b289
        ;   Label: LAB_0043b289
    PUSH 0x5d659f                       ; 0043b28a
    LEA EAX,[ESP + 0x8]                 ; 0043b28f
    PUSH EAX                            ; 0043b293
    MOV EBX,0x5d65c3                    ; 0043b294
    CALL crt_unknown.c_FUN_005bfb40     ; 0043b299
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 0043b29e
    MOV EAX,ESP                         ; 0043b2a1
    MOV ESI,0x939                       ; 0043b2a3
    PUSH EAX                            ; 0043b2a8
    MOV dword ptr [0x01d1d400],EBX      ; 0043b2a9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0043b2af | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043b2b5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043b2ba
    JMP 0x0043b0ad                      ; 0043b2bd
        ;   XREF to: 0043b0ad (UNCONDITIONAL_JUMP)  ; LAB_0043b0ad
    MOVZX EBP,byte ptr [EDX]            ; 0043b2c2
        ;   Label: LAB_0043b2c2
    CMP EBP,dword ptr [ESP + 0x148]     ; 0043b2c5
    JZ 0x0043b17d                       ; 0043b2cc
        ;   XREF to: 0043b17d (CONDITIONAL_JUMP)  ; LAB_0043b17d
    MOV EBX,0x1                         ; 0043b2d2
    MOV dword ptr [ECX + 0x4],EAX       ; 0043b2d7
    JMP 0x0043b17d                      ; 0043b2da
        ;   XREF to: 0043b17d (UNCONDITIONAL_JUMP)  ; LAB_0043b17d

