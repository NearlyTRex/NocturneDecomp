; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056a130(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0056aa10 at 0056aa78
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_005fba28
;   undefined1 DAT_00604df8
;   undefined1 DAT_00604e18
;   undefined4 DAT_00604e38
;   undefined4 DAT_00604e58
;   undefined4 DAT_01c6a970
;   undefined4 DAT_01c6a974
;   undefined4 DAT_01c6a978
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a130
        ;   Label: FUN_0056a130
    PUSH ESI                            ; 0056a131
    PUSH EDI                            ; 0056a132
    PUSH EBP                            ; 0056a133
    SUB ESP,0x10                        ; 0056a134
    MOV ECX,dword ptr [ESP + 0x28]      ; 0056a137
    MOV ECX,dword ptr [ECX + 0x4]       ; 0056a13b
    LEA EAX,[ECX*0x4 + 0x0]             ; 0056a13e
    SUB EAX,ECX                         ; 0056a145
    MOV ECX,EAX                         ; 0056a147
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056a149
    SHL ECX,0x5                         ; 0056a14d
    ADD EAX,0x4                         ; 0056a150
    ADD EAX,ECX                         ; 0056a153
    MOV dword ptr [ESP + 0x8],EAX       ; 0056a155
    MOV EAX,dword ptr [EAX]             ; 0056a159
    MOV [0x005fba28],EAX                ; 0056a15b | DAT_005fba28
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056a160
    MOV EDX,dword ptr [EAX + 0x50]      ; 0056a164
    TEST EDX,EDX                        ; 0056a167
    JNZ 0x0056a176                      ; 0056a169
        ;   XREF to: 0056a176 (CONDITIONAL_JUMP)  ; LAB_0056a176
    CMP dword ptr [ESP + 0x2c],0x2      ; 0056a16b
    JNZ 0x0056a2ca                      ; 0056a170
        ;   XREF to: 0056a2ca (CONDITIONAL_JUMP)  ; LAB_0056a2ca
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056a176
        ;   Label: LAB_0056a176
    XOR ESI,ESI                         ; 0056a17a
    MOV EBP,0x1                         ; 0056a17c
    MOV dword ptr [0x01c6ced4],ESI      ; 0056a181 | DAT_01c6ced4
    MOV dword ptr [0x01c6a970],ESI      ; 0056a187 | DAT_01c6a970
    MOV EAX,dword ptr [EAX + 0x50]      ; 0056a18d
    MOV dword ptr [0x01c6cee4],EBP      ; 0056a190 | DAT_01c6cee4
    MOV [0x01c6ced0],EAX                ; 0056a196 | DAT_01c6ced0
    CMP dword ptr [0x01c6cee8],0x0      ; 0056a19b | DAT_01c6cee8
        ;   Label: LAB_0056a19b
    JNZ 0x0056a211                      ; 0056a1a2
        ;   XREF to: 0056a211 (CONDITIONAL_JUMP)  ; LAB_0056a211
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056a1a4
    MOV EDX,dword ptr [EAX + 0x50]      ; 0056a1a8
    TEST EDX,EDX                        ; 0056a1ab
    JNZ 0x0056a211                      ; 0056a1ad
        ;   XREF to: 0056a211 (CONDITIONAL_JUMP)  ; LAB_0056a211
    MOV ECX,dword ptr [0x005fba20]      ; 0056a1af | DAT_005fba20
    MOV EBX,dword ptr [0x01c6a970]      ; 0056a1b5 | DAT_01c6a970
    CMP ECX,0x20                        ; 0056a1bb
    JNZ 0x0056a306                      ; 0056a1be
        ;   XREF to: 0056a306 (CONDITIONAL_JUMP)  ; LAB_0056a306
    MOV EDX,dword ptr [0x005fba20]      ; 0056a1c4 | DAT_005fba20
    XOR EAX,EAX                         ; 0056a1ca
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 0056a1cc
        ;   Label: LAB_0056a1cc
    MOVZX EDI,byte ptr [EBX]            ; 0056a1d0
    MOVZX ESI,byte ptr [EBX + 0x2]      ; 0056a1d3
    CMP EDX,0x20                        ; 0056a1d7
    JNZ 0x0056a2f5                      ; 0056a1da
        ;   XREF to: 0056a2f5 (CONDITIONAL_JUMP)  ; LAB_0056a2f5
    MOV CL,byte ptr [0x01c6af74]        ; 0056a1e0 | DAT_01c6af74
    SHL EDI,CL                          ; 0056a1e6
    MOV CL,byte ptr [0x01c6af80]        ; 0056a1e8 | DAT_01c6af80
    SHL EBP,CL                          ; 0056a1ee
    MOV CL,byte ptr [0x01c6af8c]        ; 0056a1f0 | DAT_01c6af8c
    SHL ESI,CL                          ; 0056a1f6
    OR EDI,EBP                          ; 0056a1f8
    MOV ECX,ESI                         ; 0056a1fa
    OR ECX,EDI                          ; 0056a1fc
    ADD EAX,0x4                         ; 0056a1fe
        ;   Label: LAB_0056a1fe
    ADD EBX,0x3                         ; 0056a201
    MOV dword ptr [EAX + 0x1c6a970],ECX ; 0056a204 | DAT_01c6a974 | DAT_01c6a978
    CMP EAX,0x400                       ; 0056a20a
    JNZ 0x0056a1cc                      ; 0056a20f
        ;   XREF to: 0056a1cc (CONDITIONAL_JUMP)  ; LAB_0056a1cc
    MOV EAX,[0x005fba28]                ; 0056a211 | DAT_005fba28
        ;   Label: LAB_0056a211
    CMP EAX,0x100                       ; 0056a216
    JNC 0x0056a53b                      ; 0056a21b
        ;   XREF to: 0056a53b (CONDITIONAL_JUMP)  ; LAB_0056a53b
    CMP EAX,0x40                        ; 0056a221
    JNC 0x0056a56e                      ; 0056a224
        ;   XREF to: 0056a56e (CONDITIONAL_JUMP)  ; LAB_0056a56e
    CMP EAX,0x20                        ; 0056a22a
    JNZ 0x0056a265                      ; 0056a22d
        ;   XREF to: 0056a265 (CONDITIONAL_JUMP)  ; LAB_0056a265
    MOV EDI,0x13                        ; 0056a22f
    MOV EBP,0xe                         ; 0056a234
    MOV EAX,0x1f                        ; 0056a239
    MOV EDX,0x3e0                       ; 0056a23e
    MOV ESI,0x5                         ; 0056a243
    MOV dword ptr [0x00604df8],EDI      ; 0056a248 | DAT_00604df8
    MOV dword ptr [0x00604e18],EBP      ; 0056a24e | DAT_00604e18
    MOV [0x00604e38],EAX                ; 0056a254 | DAT_00604e38
    MOV dword ptr [0x00604e58],EDX      ; 0056a259 | DAT_00604e58
    MOV dword ptr [0x01c6cee0],ESI      ; 0056a25f | DAT_01c6cee0
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056a265
        ;   Label: LAB_0056a265
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056a269
    MOV EAX,dword ptr [EAX + 0x18008]   ; 0056a26d
    MOV dword ptr [ECX + 0x54],EAX      ; 0056a273
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056a276
    MOV ECX,dword ptr [EAX + 0x18008]   ; 0056a27a
    INC ECX                             ; 0056a280
    MOV EBX,dword ptr [0x01c6cee8]      ; 0056a281 | DAT_01c6cee8
    MOV dword ptr [EAX + 0x18008],ECX   ; 0056a287
    TEST EBX,EBX                        ; 0056a28d
    JZ 0x0056a2c2                       ; 0056a28f
        ;   XREF to: 0056a2c2 (CONDITIONAL_JUMP)  ; LAB_0056a2c2
    CMP dword ptr [ESP + 0x2c],0x0      ; 0056a291
    JNZ 0x0056a5a9                      ; 0056a296
        ;   XREF to: 0056a5a9 (CONDITIONAL_JUMP)  ; LAB_0056a5a9
    CMP dword ptr [0x01c6cee4],0x0      ; 0056a29c | DAT_01c6cee4
    JZ 0x0056a580                       ; 0056a2a3
        ;   XREF to: 0056a580 (CONDITIONAL_JUMP)  ; LAB_0056a580
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056a2a9
    MOV EBX,dword ptr [EAX + 0x50]      ; 0056a2ad
    PUSH EBX                            ; 0056a2b0
    MOV ESI,dword ptr [EAX]             ; 0056a2b1
    PUSH ESI                            ; 0056a2b3
    MOV EDI,dword ptr [ESP + 0x30]      ; 0056a2b4
    PUSH EDI                            ; 0056a2b8
    CALL dword ptr [0x02cf6014]         ; 0056a2b9 | DAT_02cf6014
    ADD ESP,0xc                         ; 0056a2bf
    ADD ESP,0x10                        ; 0056a2c2
        ;   Label: LAB_0056a2c2
    POP EBP                             ; 0056a2c5
    POP EDI                             ; 0056a2c6
    POP ESI                             ; 0056a2c7
    POP EBX                             ; 0056a2c8
    RET                                 ; 0056a2c9
    MOV EAX,dword ptr [EAX + 0x44]      ; 0056a2ca
        ;   Label: LAB_0056a2ca
    MOV [0x01c6ced0],EAX                ; 0056a2cd | DAT_01c6ced0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056a2d2
    MOV EAX,dword ptr [EAX + 0x48]      ; 0056a2d6
    MOV [0x01c6ced4],EAX                ; 0056a2d9 | DAT_01c6ced4
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056a2de
    MOV EAX,dword ptr [EAX + 0x4c]      ; 0056a2e2
    MOV dword ptr [0x01c6cee4],EDX      ; 0056a2e5 | DAT_01c6cee4
    MOV [0x01c6a970],EAX                ; 0056a2eb | DAT_01c6a970
    JMP 0x0056a19b                      ; 0056a2f0
        ;   XREF to: 0056a19b (UNCONDITIONAL_JUMP)  ; LAB_0056a19b
    MOV ECX,EDI                         ; 0056a2f5
        ;   Label: LAB_0056a2f5
    SHL EBP,0x8                         ; 0056a2f7
    SHL ECX,0x10                        ; 0056a2fa
    OR ECX,EBP                          ; 0056a2fd
    OR ECX,ESI                          ; 0056a2ff
    JMP 0x0056a1fe                      ; 0056a301
        ;   XREF to: 0056a1fe (UNCONDITIONAL_JUMP)  ; LAB_0056a1fe
    MOV dword ptr [ESP + 0xc],EDX       ; 0056a306
        ;   Label: LAB_0056a306
    XOR ESI,ESI                         ; 0056a30a
    XOR EAX,EAX                         ; 0056a30c
        ;   Label: LAB_0056a30c
    MOV EDI,dword ptr [0x01c6af78]      ; 0056a30e | DAT_01c6af78
    MOV AL,byte ptr [EBX]               ; 0056a314
    XOR EDX,EDX                         ; 0056a316
    MOV dword ptr [ESP],EAX             ; 0056a318
    DIV EDI                             ; 0056a31b
    XOR ECX,ECX                         ; 0056a31d
    MOV CL,byte ptr [EBX + 0x1]         ; 0056a31f
    MOV dword ptr [ESP],EAX             ; 0056a322
    XOR EDX,EDX                         ; 0056a325
    MOV EAX,ECX                         ; 0056a327
    DIV dword ptr [0x01c6af84]          ; 0056a329 | DAT_01c6af84
    MOVZX EBP,byte ptr [EBX + 0x2]      ; 0056a32f
    MOV dword ptr [ESP + 0x4],EBP       ; 0056a333
    MOV EDI,EAX                         ; 0056a337
    XOR EDX,EDX                         ; 0056a339
    MOV EAX,EBP                         ; 0056a33b
    DIV dword ptr [0x01c6af90]          ; 0056a33d | DAT_01c6af90
    MOV CL,byte ptr [0x01c6af74]        ; 0056a343 | DAT_01c6af74
    MOV dword ptr [ESP + 0x4],EAX       ; 0056a349
    MOV EAX,dword ptr [ESP]             ; 0056a34d
    SHL EAX,CL                          ; 0056a350
    MOV CL,byte ptr [0x01c6af80]        ; 0056a352 | DAT_01c6af80
    SHL EDI,CL                          ; 0056a358
    MOV CL,byte ptr [0x01c6af8c]        ; 0056a35a | DAT_01c6af8c
    OR EDI,EAX                          ; 0056a360
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056a362
    SHL EAX,CL                          ; 0056a366
    OR EAX,EDI                          ; 0056a368
    MOV word ptr [ESI + 0x1c6ad74],AX   ; 0056a36a
    MOV EDX,dword ptr [0x005fba20]      ; 0056a371 | DAT_005fba20
    MOVZX EDI,byte ptr [EBX + 0x2]      ; 0056a377
    XOR EAX,EAX                         ; 0056a37b
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 0056a37d
    MOV AL,byte ptr [EBX]               ; 0056a381
    CMP EDX,0x20                        ; 0056a383
    JNZ 0x0056a3ce                      ; 0056a386
        ;   XREF to: 0056a3ce (CONDITIONAL_JUMP)  ; LAB_0056a3ce
    MOV CL,byte ptr [0x01c6af74]        ; 0056a388 | DAT_01c6af74
    SHL EAX,CL                          ; 0056a38e
    MOV CL,byte ptr [0x01c6af80]        ; 0056a390 | DAT_01c6af80
    SHL EBP,CL                          ; 0056a396
    MOV CL,byte ptr [0x01c6af8c]        ; 0056a398 | DAT_01c6af8c
    SHL EDI,CL                          ; 0056a39e
    OR EAX,EBP                          ; 0056a3a0
    MOV ECX,EDI                         ; 0056a3a2
    OR ECX,EAX                          ; 0056a3a4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056a3a6
        ;   Label: LAB_0056a3a6
    ADD EBX,0x3                         ; 0056a3aa
    MOV dword ptr [EAX + 0x1c6a974],ECX ; 0056a3ad | DAT_01c6a974
    LEA ECX,[EAX + 0x4]                 ; 0056a3b3
    ADD ESI,0x2                         ; 0056a3b6
    MOV dword ptr [ESP + 0xc],ECX       ; 0056a3b9
    CMP ESI,0x200                       ; 0056a3bd
    JZ 0x0056a211                       ; 0056a3c3
        ;   XREF to: 0056a211 (CONDITIONAL_JUMP)  ; LAB_0056a211
    JMP 0x0056a30c                      ; 0056a3c9
        ;   XREF to: 0056a30c (UNCONDITIONAL_JUMP)  ; LAB_0056a30c
    MOV ECX,EBP                         ; 0056a3ce
        ;   Label: LAB_0056a3ce
    SHL EAX,0x10                        ; 0056a3d0
    SHL ECX,0x8                         ; 0056a3d3
    OR ECX,EAX                          ; 0056a3d6
    OR ECX,EDI                          ; 0056a3d8
    JMP 0x0056a3a6                      ; 0056a3da
        ;   XREF to: 0056a3a6 (UNCONDITIONAL_JUMP)  ; LAB_0056a3a6
    MOV EBX,0xd                         ; 0056a3dc
        ;   Label: LAB_0056a3dc
    MOV ESI,0x2                         ; 0056a3e1
    MOV EDI,0x7ff                       ; 0056a3e6
    MOV EBP,0x3ff800                    ; 0056a3eb
    MOV ECX,0xb                         ; 0056a3f0
    MOV dword ptr [0x00604df8],EBX      ; 0056a3f5 | DAT_00604df8
    MOV dword ptr [0x00604e18],ESI      ; 0056a3fb | DAT_00604e18
    MOV dword ptr [0x00604e38],EDI      ; 0056a401 | DAT_00604e38
    MOV dword ptr [0x00604e58],EBP      ; 0056a407 | DAT_00604e58
    MOV dword ptr [0x01c6cee0],ECX      ; 0056a40d | DAT_01c6cee0
    JMP 0x0056a265                      ; 0056a413
        ;   XREF to: 0056a265 (UNCONDITIONAL_JUMP)  ; LAB_0056a265
    MOV EDX,0xe                         ; 0056a418
        ;   Label: LAB_0056a418
    MOV ECX,0x4                         ; 0056a41d
    MOV EBX,0x3ff                       ; 0056a422
    MOV ESI,0xffc00                     ; 0056a427
    MOV EAX,0xa                         ; 0056a42c
    MOV dword ptr [0x00604df8],EDX      ; 0056a431 | DAT_00604df8
    MOV dword ptr [0x00604e18],ECX      ; 0056a437 | DAT_00604e18
    MOV dword ptr [0x00604e38],EBX      ; 0056a43d | DAT_00604e38
    MOV dword ptr [0x00604e58],ESI      ; 0056a443 | DAT_00604e58
    MOV [0x01c6cee0],EAX                ; 0056a449 | DAT_01c6cee0
    JMP 0x0056a265                      ; 0056a44e
        ;   XREF to: 0056a265 (UNCONDITIONAL_JUMP)  ; LAB_0056a265
    MOV EBP,0xf                         ; 0056a453
        ;   Label: LAB_0056a453
    MOV EAX,0x6                         ; 0056a458
    MOV EDX,0x1ff                       ; 0056a45d
    MOV ECX,0x3fe00                     ; 0056a462
    MOV EDI,0x9                         ; 0056a467
    MOV dword ptr [0x00604df8],EBP      ; 0056a46c | DAT_00604df8
    MOV [0x00604e18],EAX                ; 0056a472 | DAT_00604e18
    MOV dword ptr [0x00604e38],EDX      ; 0056a477 | DAT_00604e38
    MOV dword ptr [0x00604e58],ECX      ; 0056a47d | DAT_00604e58
    MOV dword ptr [0x01c6cee0],EDI      ; 0056a483 | DAT_01c6cee0
    JMP 0x0056a265                      ; 0056a489
        ;   XREF to: 0056a265 (UNCONDITIONAL_JUMP)  ; LAB_0056a265
    MOV ESI,0x10                        ; 0056a48e
        ;   Label: LAB_0056a48e
    MOV EBX,0x8                         ; 0056a493
    MOV EBP,0xff                        ; 0056a498
    MOV EAX,0xff00                      ; 0056a49d
    MOV dword ptr [0x00604df8],ESI      ; 0056a4a2 | DAT_00604df8
    MOV dword ptr [0x00604e18],EBX      ; 0056a4a8 | DAT_00604e18
    MOV dword ptr [0x00604e38],EBP      ; 0056a4ae | DAT_00604e38
    MOV [0x00604e58],EAX                ; 0056a4b4 | DAT_00604e58
    MOV dword ptr [0x01c6cee0],EBX      ; 0056a4b9 | DAT_01c6cee0
    JMP 0x0056a265                      ; 0056a4bf
        ;   XREF to: 0056a265 (UNCONDITIONAL_JUMP)  ; LAB_0056a265
    MOV ECX,0x11                        ; 0056a4c4
        ;   Label: LAB_0056a4c4
    MOV EBX,0xa                         ; 0056a4c9
    MOV ESI,0x7f                        ; 0056a4ce
    MOV EDI,0x3f80                      ; 0056a4d3
    MOV EDX,0x7                         ; 0056a4d8
    MOV dword ptr [0x00604df8],ECX      ; 0056a4dd | DAT_00604df8
    MOV dword ptr [0x00604e18],EBX      ; 0056a4e3 | DAT_00604e18
    MOV dword ptr [0x00604e38],ESI      ; 0056a4e9 | DAT_00604e38
    MOV dword ptr [0x00604e58],EDI      ; 0056a4ef | DAT_00604e58
    MOV dword ptr [0x01c6cee0],EDX      ; 0056a4f5 | DAT_01c6cee0
    JMP 0x0056a265                      ; 0056a4fb
        ;   XREF to: 0056a265 (UNCONDITIONAL_JUMP)  ; LAB_0056a265
    MOV EAX,0x12                        ; 0056a500
        ;   Label: LAB_0056a500
    MOV EDX,0xc                         ; 0056a505
    MOV ECX,0x3f                        ; 0056a50a
    MOV EBX,0xfc0                       ; 0056a50f
    MOV EBP,0x6                         ; 0056a514
    MOV [0x00604df8],EAX                ; 0056a519 | DAT_00604df8
    MOV dword ptr [0x00604e18],EDX      ; 0056a51e | DAT_00604e18
    MOV dword ptr [0x00604e38],ECX      ; 0056a524 | DAT_00604e38
    MOV dword ptr [0x00604e58],EBX      ; 0056a52a | DAT_00604e58
    MOV dword ptr [0x01c6cee0],EBP      ; 0056a530 | DAT_01c6cee0
    JMP 0x0056a265                      ; 0056a536
        ;   XREF to: 0056a265 (UNCONDITIONAL_JUMP)  ; LAB_0056a265
    JBE 0x0056a48e                      ; 0056a53b
        ;   XREF to: 0056a48e (CONDITIONAL_JUMP)  ; LAB_0056a48e
        ;   Label: LAB_0056a53b
    CMP EAX,0x400                       ; 0056a541
    JNC 0x0056a558                      ; 0056a546
        ;   XREF to: 0056a558 (CONDITIONAL_JUMP)  ; LAB_0056a558
    CMP EAX,0x200                       ; 0056a548
    JZ 0x0056a453                       ; 0056a54d
        ;   XREF to: 0056a453 (CONDITIONAL_JUMP)  ; LAB_0056a453
    JMP 0x0056a265                      ; 0056a553
        ;   XREF to: 0056a265 (UNCONDITIONAL_JUMP)  ; LAB_0056a265
    JBE 0x0056a418                      ; 0056a558
        ;   XREF to: 0056a418 (CONDITIONAL_JUMP)  ; LAB_0056a418
        ;   Label: LAB_0056a558
    CMP EAX,0x800                       ; 0056a55e
    JZ 0x0056a3dc                       ; 0056a563
        ;   XREF to: 0056a3dc (CONDITIONAL_JUMP)  ; LAB_0056a3dc
    JMP 0x0056a265                      ; 0056a569
        ;   XREF to: 0056a265 (UNCONDITIONAL_JUMP)  ; LAB_0056a265
    JBE 0x0056a500                      ; 0056a56e
        ;   XREF to: 0056a500 (CONDITIONAL_JUMP)  ; LAB_0056a500
        ;   Label: LAB_0056a56e
    CMP EAX,0x80                        ; 0056a570
    JZ 0x0056a4c4                       ; 0056a575
        ;   XREF to: 0056a4c4 (CONDITIONAL_JUMP)  ; LAB_0056a4c4
    JMP 0x0056a265                      ; 0056a57b
        ;   XREF to: 0056a265 (UNCONDITIONAL_JUMP)  ; LAB_0056a265
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056a580
        ;   Label: LAB_0056a580
    MOV ESI,dword ptr [EAX + 0x48]      ; 0056a584
    PUSH ESI                            ; 0056a587
    MOV EDI,dword ptr [EAX + 0x4c]      ; 0056a588
    PUSH EDI                            ; 0056a58b
    MOV EBP,dword ptr [EAX + 0x44]      ; 0056a58c
    PUSH EBP                            ; 0056a58f
    MOV EDX,dword ptr [EAX]             ; 0056a590
    PUSH EDX                            ; 0056a592
    MOV ECX,dword ptr [ESP + 0x38]      ; 0056a593
    PUSH ECX                            ; 0056a597
    CALL dword ptr [0x02cf600c]         ; 0056a598 | DAT_02cf600c
    ADD ESP,0x14                        ; 0056a59e
    ADD ESP,0x10                        ; 0056a5a1
    POP EBP                             ; 0056a5a4
    POP EDI                             ; 0056a5a5
    POP ESI                             ; 0056a5a6
    POP EBX                             ; 0056a5a7
    RET                                 ; 0056a5a8
    CMP dword ptr [0x01c6cee4],0x0      ; 0056a5a9 | DAT_01c6cee4
        ;   Label: LAB_0056a5a9
    JZ 0x0056a5e0                       ; 0056a5b0
        ;   XREF to: 0056a5e0 (CONDITIONAL_JUMP)  ; LAB_0056a5e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056a5b2
    MOV EDI,dword ptr [EAX + 0x50]      ; 0056a5b6
    PUSH EDI                            ; 0056a5b9
    MOV EBP,dword ptr [EAX]             ; 0056a5ba
    PUSH EBP                            ; 0056a5bc
    MOV EAX,dword ptr [ESP + 0x30]      ; 0056a5bd
    PUSH EAX                            ; 0056a5c1
    CALL dword ptr [0x02cf6018]         ; 0056a5c2 | DAT_02cf6018
    ADD ESP,0xc                         ; 0056a5c8
    MOV EDX,dword ptr [ESP + 0x28]      ; 0056a5cb
        ;   Label: LAB_0056a5cb
    PUSH EDX                            ; 0056a5cf
    MOV ECX,dword ptr [ESP + 0x28]      ; 0056a5d0
    PUSH ECX                            ; 0056a5d4
    ADD ESP,0x8                         ; 0056a5d5
    ADD ESP,0x10                        ; 0056a5d8
    POP EBP                             ; 0056a5db
    POP EDI                             ; 0056a5dc
    POP ESI                             ; 0056a5dd
    POP EBX                             ; 0056a5de
    RET                                 ; 0056a5df
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056a5e0
        ;   Label: LAB_0056a5e0
    MOV EBP,dword ptr [EAX + 0x48]      ; 0056a5e4
    PUSH EBP                            ; 0056a5e7
    MOV EDX,dword ptr [EAX + 0x4c]      ; 0056a5e8
    PUSH EDX                            ; 0056a5eb
    MOV ECX,dword ptr [EAX + 0x44]      ; 0056a5ec
    PUSH ECX                            ; 0056a5ef
    MOV EBX,dword ptr [EAX]             ; 0056a5f0
    PUSH EBX                            ; 0056a5f2
    MOV ESI,dword ptr [ESP + 0x38]      ; 0056a5f3
    PUSH ESI                            ; 0056a5f7
    CALL dword ptr [0x02cf6010]         ; 0056a5f8 | DAT_02cf6010
    ADD ESP,0x14                        ; 0056a5fe
    JMP 0x0056a5cb                      ; 0056a601
        ;   XREF to: 0056a5cb (UNCONDITIONAL_JUMP)  ; LAB_0056a5cb

