; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_1000b150(byte *param_1,char *param_2,undefined4 *param_3,uint *param_4)
;
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
;
; XREF[2]:
;   FUN_1000ac10 at 1000adfc
;   FUN_1000aee0 at 1000af09
;
; Referenced Globals:
;   undefined4 DAT_100177d8
;   undefined2 DAT_100177dc
;   undefined4 DAT_100177e0
;   undefined1 DAT_100177e8
;   undefined1 DAT_100177e9
;   undefined4 DAT_100177ea
;   undefined4 DAT_100177eb
;   undefined1 DAT_10017870
;   undefined1 DAT_10017871
;   undefined4 DAT_10017872
;   undefined4 DAT_10017873
;
; Called Functions:
;   FUN_1000b380
;   FUN_1000b480
;   FUN_1000e350
;
; *****************************************************************************

section .text

    SUB ESP,0x88                        ; 1000b150
        ;   Label: FUN_1000b150
    PUSH ESI                            ; 1000b156
    PUSH EDI                            ; 1000b157
    MOV EDI,dword ptr [ESP + 0x94]      ; 1000b158
    TEST EDI,EDI                        ; 1000b15f
    JNZ 0x1000b16e                      ; 1000b161
        ;   XREF to: 1000b16e (CONDITIONAL_JUMP)  ; LAB_1000b16e
    XOR EAX,EAX                         ; 1000b163
    POP EDI                             ; 1000b165
    POP ESI                             ; 1000b166
    ADD ESP,0x88                        ; 1000b167
    RET                                 ; 1000b16d
    CMP byte ptr [EDI],0x43             ; 1000b16e
        ;   Label: LAB_1000b16e
    JNZ 0x1000b1bb                      ; 1000b171
        ;   XREF to: 1000b1bb (CONDITIONAL_JUMP)  ; LAB_1000b1bb
    XOR ECX,ECX                         ; 1000b173
    CMP byte ptr [EDI + 0x1],CL         ; 1000b175
    JNZ 0x1000b1bb                      ; 1000b178
        ;   XREF to: 1000b1bb (CONDITIONAL_JUMP)  ; LAB_1000b1bb
    MOV EAX,dword ptr [ESP + 0x98]      ; 1000b17a
    MOV EDX,dword ptr [ESP + 0x9c]      ; 1000b181
    CMP EDX,ECX                         ; 1000b188
    MOV byte ptr [EAX],0x43             ; 1000b18a
    MOV byte ptr [EAX + 0x1],CL         ; 1000b18d
    JZ 0x1000b19d                       ; 1000b190
        ;   XREF to: 1000b19d (CONDITIONAL_JUMP)  ; LAB_1000b19d
    MOV word ptr [EDX],CX               ; 1000b192
    MOV word ptr [EDX + 0x2],CX         ; 1000b195
    MOV word ptr [EDX + 0x4],CX         ; 1000b199
    MOV ECX,dword ptr [ESP + 0xa0]      ; 1000b19d
        ;   Label: LAB_1000b19d
    TEST ECX,ECX                        ; 1000b1a4
    JZ 0x1000b311                       ; 1000b1a6
        ;   XREF to: 1000b311 (CONDITIONAL_JUMP)  ; LAB_1000b311
    POP EDI                             ; 1000b1ac
    MOV dword ptr [ECX],0x0             ; 1000b1ad
    POP ESI                             ; 1000b1b3
    ADD ESP,0x88                        ; 1000b1b4
    RET                                 ; 1000b1ba
    MOV EAX,0x10017870                  ; 1000b1bb | DAT_10017870
        ;   Label: LAB_1000b1bb
    MOV ECX,EDI                         ; 1000b1c0
    MOV DL,byte ptr [EAX]               ; 1000b1c2 | DAT_10017870 | DAT_10017872
        ;   Label: LAB_1000b1c2
    CMP DL,byte ptr [ECX]               ; 1000b1c4
    JNZ 0x1000b1e2                      ; 1000b1c6
        ;   XREF to: 1000b1e2 (CONDITIONAL_JUMP)  ; LAB_1000b1e2
    OR DL,DL                            ; 1000b1c8
    JZ 0x1000b1de                       ; 1000b1ca
        ;   XREF to: 1000b1de (CONDITIONAL_JUMP)  ; LAB_1000b1de
    MOV DL,byte ptr [EAX + 0x1]         ; 1000b1cc | DAT_10017871 | DAT_10017873
    CMP DL,byte ptr [ECX + 0x1]         ; 1000b1cf
    JNZ 0x1000b1e2                      ; 1000b1d2
        ;   XREF to: 1000b1e2 (CONDITIONAL_JUMP)  ; LAB_1000b1e2
    ADD EAX,0x2                         ; 1000b1d4
    ADD ECX,0x2                         ; 1000b1d7
    OR DL,DL                            ; 1000b1da
    JNZ 0x1000b1c2                      ; 1000b1dc
        ;   XREF to: 1000b1c2 (CONDITIONAL_JUMP)  ; LAB_1000b1c2
    XOR EAX,EAX                         ; 1000b1de
        ;   Label: LAB_1000b1de
    JMP 0x1000b1e7                      ; 1000b1e0
        ;   XREF to: 1000b1e7 (UNCONDITIONAL_JUMP)  ; LAB_1000b1e7
    SBB EAX,EAX                         ; 1000b1e2
        ;   Label: LAB_1000b1e2
    SBB EAX,-0x1                        ; 1000b1e4
    TEST EAX,EAX                        ; 1000b1e7
        ;   Label: LAB_1000b1e7
    JZ 0x1000b2b1                       ; 1000b1e9
        ;   XREF to: 1000b2b1 (CONDITIONAL_JUMP)  ; LAB_1000b2b1
    MOV EAX,0x100177e8                  ; 1000b1ef | DAT_100177e8
    MOV ECX,EDI                         ; 1000b1f4
    MOV DL,byte ptr [EAX]               ; 1000b1f6 | DAT_100177e8 | DAT_100177ea
        ;   Label: LAB_1000b1f6
    CMP DL,byte ptr [ECX]               ; 1000b1f8
    JNZ 0x1000b216                      ; 1000b1fa
        ;   XREF to: 1000b216 (CONDITIONAL_JUMP)  ; LAB_1000b216
    OR DL,DL                            ; 1000b1fc
    JZ 0x1000b212                       ; 1000b1fe
        ;   XREF to: 1000b212 (CONDITIONAL_JUMP)  ; LAB_1000b212
    MOV DL,byte ptr [EAX + 0x1]         ; 1000b200 | DAT_100177e9 | DAT_100177eb
    CMP DL,byte ptr [ECX + 0x1]         ; 1000b203
    JNZ 0x1000b216                      ; 1000b206
        ;   XREF to: 1000b216 (CONDITIONAL_JUMP)  ; LAB_1000b216
    ADD EAX,0x2                         ; 1000b208
    ADD ECX,0x2                         ; 1000b20b
    OR DL,DL                            ; 1000b20e
    JNZ 0x1000b1f6                      ; 1000b210
        ;   XREF to: 1000b1f6 (CONDITIONAL_JUMP)  ; LAB_1000b1f6
    XOR EAX,EAX                         ; 1000b212
        ;   Label: LAB_1000b212
    JMP 0x1000b21b                      ; 1000b214
        ;   XREF to: 1000b21b (UNCONDITIONAL_JUMP)  ; LAB_1000b21b
    SBB EAX,EAX                         ; 1000b216
        ;   Label: LAB_1000b216
    SBB EAX,-0x1                        ; 1000b218
    TEST EAX,EAX                        ; 1000b21b
        ;   Label: LAB_1000b21b
    JZ 0x1000b2b1                       ; 1000b21d
        ;   XREF to: 1000b2b1 (CONDITIONAL_JUMP)  ; LAB_1000b2b1
    LEA EAX,[ESP + 0x8]                 ; 1000b223
    PUSH EDI                            ; 1000b227
    PUSH EAX                            ; 1000b228
    CALL FUN_1000b380                   ; 1000b229
        ;   XREF to: 1000b380 (UNCONDITIONAL_CALL)  ; undefined FUN_1000b380()
    ADD ESP,0x8                         ; 1000b22e
    TEST EAX,EAX                        ; 1000b231
    JZ 0x1000b240                       ; 1000b233
        ;   XREF to: 1000b240 (CONDITIONAL_JUMP)  ; LAB_1000b240
    XOR EAX,EAX                         ; 1000b235
    POP EDI                             ; 1000b237
    POP ESI                             ; 1000b238
    ADD ESP,0x88                        ; 1000b239
    RET                                 ; 1000b23f
    LEA EAX,[ESP + 0x8]                 ; 1000b240
        ;   Label: LAB_1000b240
    PUSH EAX                            ; 1000b244
    PUSH 0x100177d8                     ; 1000b245 | DAT_100177d8
    LEA EAX,[ESP + 0x10]                ; 1000b24a
    PUSH EAX                            ; 1000b24e
    CALL FUN_1000e350                   ; 1000b24f
        ;   XREF to: 1000e350 (UNCONDITIONAL_CALL)  ; undefined FUN_1000e350()
    ADD ESP,0xc                         ; 1000b254
    TEST EAX,EAX                        ; 1000b257
    JNZ 0x1000b266                      ; 1000b259
        ;   XREF to: 1000b266 (CONDITIONAL_JUMP)  ; LAB_1000b266
    XOR EAX,EAX                         ; 1000b25b
    POP EDI                             ; 1000b25d
    POP ESI                             ; 1000b25e
    ADD ESP,0x88                        ; 1000b25f
    RET                                 ; 1000b265
    XOR EAX,EAX                         ; 1000b266
        ;   Label: LAB_1000b266
    LEA ECX,[ESP + 0x8]                 ; 1000b268
    MOV AX,[0x100177dc]                 ; 1000b26c | DAT_100177dc
    PUSH ECX                            ; 1000b272
    PUSH 0x10017870                     ; 1000b273 | DAT_10017870
    MOV [0x100177e0],EAX                ; 1000b278 | DAT_100177e0
    CALL FUN_1000b480                   ; 1000b27d
        ;   XREF to: 1000b480 (UNCONDITIONAL_CALL)  ; undefined FUN_1000b480()
    ADD ESP,0x8                         ; 1000b282
    CMP byte ptr [EDI],0x0              ; 1000b285
    JNZ 0x1000b28f                      ; 1000b288
        ;   XREF to: 1000b28f (CONDITIONAL_JUMP)  ; LAB_1000b28f
    MOV EDI,0x10017870                  ; 1000b28a | DAT_10017870
    MOV ECX,0xffffffff                  ; 1000b28f
        ;   Label: LAB_1000b28f
    SUB EAX,EAX                         ; 1000b294
    SCASB.REPNE ES:EDI                  ; 1000b296 | DAT_10017870 | DAT_10017871
    NOT ECX                             ; 1000b298
    SUB EDI,ECX                         ; 1000b29a
    MOV EAX,ECX                         ; 1000b29c
    SHR ECX,0x2                         ; 1000b29e
    MOV ESI,EDI                         ; 1000b2a1
    MOV EDI,0x100177e8                  ; 1000b2a3 | DAT_100177e8
    MOVSD.REP ES:EDI,ESI                ; 1000b2a8 | DAT_10017870 | DAT_100177e8
    MOV ECX,EAX                         ; 1000b2aa
    AND ECX,0x3                         ; 1000b2ac
    MOVSB.REP ES:EDI,ESI                ; 1000b2af | DAT_10017870 | DAT_100177e8 | DAT_10017871
    MOV EDX,dword ptr [ESP + 0x9c]      ; 1000b2b1
        ;   Label: LAB_1000b2b1
    TEST EDX,EDX                        ; 1000b2b8
    JZ 0x1000b2d1                       ; 1000b2ba
        ;   XREF to: 1000b2d1 (CONDITIONAL_JUMP)  ; LAB_1000b2d1
    MOV ECX,dword ptr [0x100177d8]      ; 1000b2bc | DAT_100177d8
    MOV EAX,0x100177d8                  ; 1000b2c2 | DAT_100177d8
    MOV dword ptr [EDX],ECX             ; 1000b2c7
    MOV AX,word ptr [EAX + 0x4]         ; 1000b2c9 | DAT_100177dc
    MOV word ptr [EDX + 0x4],AX         ; 1000b2cd
    MOV ECX,dword ptr [ESP + 0xa0]      ; 1000b2d1
        ;   Label: LAB_1000b2d1
    TEST ECX,ECX                        ; 1000b2d8
    JZ 0x1000b2e3                       ; 1000b2da
        ;   XREF to: 1000b2e3 (CONDITIONAL_JUMP)  ; LAB_1000b2e3
    MOV EAX,[0x100177e0]                ; 1000b2dc | DAT_100177e0
    MOV dword ptr [ECX],EAX             ; 1000b2e1
    MOV EDI,0x10017870                  ; 1000b2e3 | DAT_10017870
        ;   Label: LAB_1000b2e3
    MOV ECX,0xffffffff                  ; 1000b2e8
    SUB EAX,EAX                         ; 1000b2ed
    SCASB.REPNE ES:EDI                  ; 1000b2ef | DAT_10017870 | DAT_10017871
    NOT ECX                             ; 1000b2f1
    SUB EDI,ECX                         ; 1000b2f3
    MOV EDX,ECX                         ; 1000b2f5
    SHR ECX,0x2                         ; 1000b2f7
    MOV ESI,EDI                         ; 1000b2fa
    MOV EDI,dword ptr [ESP + 0x98]      ; 1000b2fc
    MOVSD.REP ES:EDI,ESI                ; 1000b303 | DAT_10017870
    MOV ECX,EDX                         ; 1000b305
    AND ECX,0x3                         ; 1000b307
    MOVSB.REP ES:EDI,ESI                ; 1000b30a | DAT_10017870 | DAT_10017871
    MOV EAX,0x10017870                  ; 1000b30c | DAT_10017870
    POP EDI                             ; 1000b311
        ;   Label: LAB_1000b311
    POP ESI                             ; 1000b312
    ADD ESP,0x88                        ; 1000b313
    RET                                 ; 1000b319

