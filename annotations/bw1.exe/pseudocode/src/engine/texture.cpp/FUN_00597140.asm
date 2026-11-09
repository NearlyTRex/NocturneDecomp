; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00597140(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_texture.cpp_FUN_00597900 at 0059794a
;   engine_texture.cpp_FUN_00597a20 at 00597a88
;   engine_texture.cpp_FUN_00597ac0 at 00597b3b
;   engine_texture.cpp_FUN_00597b7c at 00597bf1
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0061b4a8
;   undefined1 DAT_00623eb8
;   undefined1 DAT_00623ed8
;   undefined4 DAT_00623ef8
;   undefined4 DAT_00623f18
;   undefined4 DAT_01c4e3d0
;   undefined4 DAT_01c4e3d4
;   undefined4 DAT_01c4e3d8
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f0
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597140
        ;   Label: engine_texture.cpp_FUN_00597140
    PUSH ESI                            ; 00597141
    PUSH EDI                            ; 00597142
    PUSH EBP                            ; 00597143
    SUB ESP,0x10                        ; 00597144
    MOV ECX,dword ptr [ESP + 0x28]      ; 00597147
    MOV ECX,dword ptr [ECX + 0x4]       ; 0059714b
    LEA EAX,[ECX*0x4 + 0x0]             ; 0059714e
    SUB EAX,ECX                         ; 00597155
    MOV ECX,EAX                         ; 00597157
    MOV EAX,dword ptr [ESP + 0x24]      ; 00597159
    SHL ECX,0x5                         ; 0059715d
    ADD EAX,0x4                         ; 00597160
    ADD EAX,ECX                         ; 00597163
    MOV dword ptr [ESP + 0x8],EAX       ; 00597165
    MOV EAX,dword ptr [EAX]             ; 00597169
    MOV [0x0061b4a8],EAX                ; 0059716b | DAT_0061b4a8
    MOV EAX,dword ptr [ESP + 0x8]       ; 00597170
    MOV EDX,dword ptr [EAX + 0x50]      ; 00597174
    TEST EDX,EDX                        ; 00597177
    JNZ 0x00597186                      ; 00597179
        ;   XREF to: 00597186 (CONDITIONAL_JUMP)  ; LAB_00597186
    CMP dword ptr [ESP + 0x2c],0x2      ; 0059717b
    JNZ 0x005972da                      ; 00597180
        ;   XREF to: 005972da (CONDITIONAL_JUMP)  ; LAB_005972da
    MOV EAX,dword ptr [ESP + 0x8]       ; 00597186
        ;   Label: LAB_00597186
    XOR ESI,ESI                         ; 0059718a
    MOV EBP,0x1                         ; 0059718c
    MOV dword ptr [0x01c50934],ESI      ; 00597191 | DAT_01c50934
    MOV dword ptr [0x01c4e3d0],ESI      ; 00597197 | DAT_01c4e3d0
    MOV EAX,dword ptr [EAX + 0x50]      ; 0059719d
    MOV dword ptr [0x01c50944],EBP      ; 005971a0 | DAT_01c50944
    MOV [0x01c50930],EAX                ; 005971a6 | DAT_01c50930
    CMP dword ptr [0x01c50948],0x0      ; 005971ab | DAT_01c50948
        ;   Label: LAB_005971ab
    JNZ 0x00597221                      ; 005971b2
        ;   XREF to: 00597221 (CONDITIONAL_JUMP)  ; LAB_00597221
    MOV EAX,dword ptr [ESP + 0x8]       ; 005971b4
    MOV EDX,dword ptr [EAX + 0x50]      ; 005971b8
    TEST EDX,EDX                        ; 005971bb
    JNZ 0x00597221                      ; 005971bd
        ;   XREF to: 00597221 (CONDITIONAL_JUMP)  ; LAB_00597221
    MOV ECX,dword ptr [0x0061b4a0]      ; 005971bf | DAT_0061b4a0
    MOV EBX,dword ptr [0x01c4e3d0]      ; 005971c5 | DAT_01c4e3d0
    CMP ECX,0x20                        ; 005971cb
    JNZ 0x00597316                      ; 005971ce
        ;   XREF to: 00597316 (CONDITIONAL_JUMP)  ; LAB_00597316
    MOV EDX,dword ptr [0x0061b4a0]      ; 005971d4 | DAT_0061b4a0
    XOR EAX,EAX                         ; 005971da
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 005971dc
        ;   Label: LAB_005971dc
    MOVZX EDI,byte ptr [EBX]            ; 005971e0
    MOVZX ESI,byte ptr [EBX + 0x2]      ; 005971e3
    CMP EDX,0x20                        ; 005971e7
    JNZ 0x00597305                      ; 005971ea
        ;   XREF to: 00597305 (CONDITIONAL_JUMP)  ; LAB_00597305
    MOV CL,byte ptr [0x01c4e9d4]        ; 005971f0 | DAT_01c4e9d4
    SHL EDI,CL                          ; 005971f6
    MOV CL,byte ptr [0x01c4e9e0]        ; 005971f8 | DAT_01c4e9e0
    SHL EBP,CL                          ; 005971fe
    MOV CL,byte ptr [0x01c4e9ec]        ; 00597200 | DAT_01c4e9ec
    SHL ESI,CL                          ; 00597206
    OR EDI,EBP                          ; 00597208
    MOV ECX,ESI                         ; 0059720a
    OR ECX,EDI                          ; 0059720c
    ADD EAX,0x4                         ; 0059720e
        ;   Label: LAB_0059720e
    ADD EBX,0x3                         ; 00597211
    MOV dword ptr [EAX + 0x1c4e3d0],ECX ; 00597214 | DAT_01c4e3d4 | DAT_01c4e3d8
    CMP EAX,0x400                       ; 0059721a
    JNZ 0x005971dc                      ; 0059721f
        ;   XREF to: 005971dc (CONDITIONAL_JUMP)  ; LAB_005971dc
    MOV EAX,[0x0061b4a8]                ; 00597221 | DAT_0061b4a8
        ;   Label: LAB_00597221
    CMP EAX,0x100                       ; 00597226
    JNC 0x0059754b                      ; 0059722b
        ;   XREF to: 0059754b (CONDITIONAL_JUMP)  ; LAB_0059754b
    CMP EAX,0x40                        ; 00597231
    JNC 0x0059757e                      ; 00597234
        ;   XREF to: 0059757e (CONDITIONAL_JUMP)  ; LAB_0059757e
    CMP EAX,0x20                        ; 0059723a
    JNZ 0x00597275                      ; 0059723d
        ;   XREF to: 00597275 (CONDITIONAL_JUMP)  ; LAB_00597275
    MOV EDI,0x13                        ; 0059723f
    MOV EBP,0xe                         ; 00597244
    MOV EAX,0x1f                        ; 00597249
    MOV EDX,0x3e0                       ; 0059724e
    MOV ESI,0x5                         ; 00597253
    MOV dword ptr [0x00623eb8],EDI      ; 00597258 | DAT_00623eb8
    MOV dword ptr [0x00623ed8],EBP      ; 0059725e | DAT_00623ed8
    MOV [0x00623ef8],EAX                ; 00597264 | DAT_00623ef8
    MOV dword ptr [0x00623f18],EDX      ; 00597269 | DAT_00623f18
    MOV dword ptr [0x01c50940],ESI      ; 0059726f | DAT_01c50940
    MOV EAX,dword ptr [ESP + 0x24]      ; 00597275
        ;   Label: LAB_00597275
    MOV ECX,dword ptr [ESP + 0x8]       ; 00597279
    MOV EAX,dword ptr [EAX + 0x18008]   ; 0059727d
    MOV dword ptr [ECX + 0x54],EAX      ; 00597283
    MOV EAX,dword ptr [ESP + 0x24]      ; 00597286
    MOV ECX,dword ptr [EAX + 0x18008]   ; 0059728a
    INC ECX                             ; 00597290
    MOV EBX,dword ptr [0x01c50948]      ; 00597291 | DAT_01c50948
    MOV dword ptr [EAX + 0x18008],ECX   ; 00597297
    TEST EBX,EBX                        ; 0059729d
    JZ 0x005972d2                       ; 0059729f
        ;   XREF to: 005972d2 (CONDITIONAL_JUMP)  ; LAB_005972d2
    CMP dword ptr [ESP + 0x2c],0x0      ; 005972a1
    JNZ 0x005975b9                      ; 005972a6
        ;   XREF to: 005975b9 (CONDITIONAL_JUMP)  ; LAB_005975b9
    CMP dword ptr [0x01c50944],0x0      ; 005972ac | DAT_01c50944
    JZ 0x00597590                       ; 005972b3
        ;   XREF to: 00597590 (CONDITIONAL_JUMP)  ; LAB_00597590
    MOV EAX,dword ptr [ESP + 0x8]       ; 005972b9
    MOV EBX,dword ptr [EAX + 0x50]      ; 005972bd
    PUSH EBX                            ; 005972c0
    MOV ESI,dword ptr [EAX]             ; 005972c1
    PUSH ESI                            ; 005972c3
    MOV EDI,dword ptr [ESP + 0x30]      ; 005972c4
    PUSH EDI                            ; 005972c8
    CALL dword ptr [0x02c833b8]         ; 005972c9 | DAT_02c833b8
    ADD ESP,0xc                         ; 005972cf
    ADD ESP,0x10                        ; 005972d2
        ;   Label: LAB_005972d2
    POP EBP                             ; 005972d5
    POP EDI                             ; 005972d6
    POP ESI                             ; 005972d7
    POP EBX                             ; 005972d8
    RET                                 ; 005972d9
    MOV EAX,dword ptr [EAX + 0x44]      ; 005972da
        ;   Label: LAB_005972da
    MOV [0x01c50930],EAX                ; 005972dd | DAT_01c50930
    MOV EAX,dword ptr [ESP + 0x8]       ; 005972e2
    MOV EAX,dword ptr [EAX + 0x48]      ; 005972e6
    MOV [0x01c50934],EAX                ; 005972e9 | DAT_01c50934
    MOV EAX,dword ptr [ESP + 0x8]       ; 005972ee
    MOV EAX,dword ptr [EAX + 0x4c]      ; 005972f2
    MOV dword ptr [0x01c50944],EDX      ; 005972f5 | DAT_01c50944
    MOV [0x01c4e3d0],EAX                ; 005972fb | DAT_01c4e3d0
    JMP 0x005971ab                      ; 00597300
        ;   XREF to: 005971ab (UNCONDITIONAL_JUMP)  ; LAB_005971ab
    MOV ECX,EDI                         ; 00597305
        ;   Label: LAB_00597305
    SHL EBP,0x8                         ; 00597307
    SHL ECX,0x10                        ; 0059730a
    OR ECX,EBP                          ; 0059730d
    OR ECX,ESI                          ; 0059730f
    JMP 0x0059720e                      ; 00597311
        ;   XREF to: 0059720e (UNCONDITIONAL_JUMP)  ; LAB_0059720e
    MOV dword ptr [ESP + 0xc],EDX       ; 00597316
        ;   Label: LAB_00597316
    XOR ESI,ESI                         ; 0059731a
    XOR EAX,EAX                         ; 0059731c
        ;   Label: LAB_0059731c
    MOV EDI,dword ptr [0x01c4e9d8]      ; 0059731e | DAT_01c4e9d8
    MOV AL,byte ptr [EBX]               ; 00597324
    XOR EDX,EDX                         ; 00597326
    MOV dword ptr [ESP],EAX             ; 00597328
    DIV EDI                             ; 0059732b
    XOR ECX,ECX                         ; 0059732d
    MOV CL,byte ptr [EBX + 0x1]         ; 0059732f
    MOV dword ptr [ESP],EAX             ; 00597332
    XOR EDX,EDX                         ; 00597335
    MOV EAX,ECX                         ; 00597337
    DIV dword ptr [0x01c4e9e4]          ; 00597339 | DAT_01c4e9e4
    MOVZX EBP,byte ptr [EBX + 0x2]      ; 0059733f
    MOV dword ptr [ESP + 0x4],EBP       ; 00597343
    MOV EDI,EAX                         ; 00597347
    XOR EDX,EDX                         ; 00597349
    MOV EAX,EBP                         ; 0059734b
    DIV dword ptr [0x01c4e9f0]          ; 0059734d | DAT_01c4e9f0
    MOV CL,byte ptr [0x01c4e9d4]        ; 00597353 | DAT_01c4e9d4
    MOV dword ptr [ESP + 0x4],EAX       ; 00597359
    MOV EAX,dword ptr [ESP]             ; 0059735d
    SHL EAX,CL                          ; 00597360
    MOV CL,byte ptr [0x01c4e9e0]        ; 00597362 | DAT_01c4e9e0
    SHL EDI,CL                          ; 00597368
    MOV CL,byte ptr [0x01c4e9ec]        ; 0059736a | DAT_01c4e9ec
    OR EDI,EAX                          ; 00597370
    MOV EAX,dword ptr [ESP + 0x4]       ; 00597372
    SHL EAX,CL                          ; 00597376
    OR EAX,EDI                          ; 00597378
    MOV word ptr [ESI + 0x1c4e7d4],AX   ; 0059737a
    MOV EDX,dword ptr [0x0061b4a0]      ; 00597381 | DAT_0061b4a0
    MOVZX EDI,byte ptr [EBX + 0x2]      ; 00597387
    XOR EAX,EAX                         ; 0059738b
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 0059738d
    MOV AL,byte ptr [EBX]               ; 00597391
    CMP EDX,0x20                        ; 00597393
    JNZ 0x005973de                      ; 00597396
        ;   XREF to: 005973de (CONDITIONAL_JUMP)  ; LAB_005973de
    MOV CL,byte ptr [0x01c4e9d4]        ; 00597398 | DAT_01c4e9d4
    SHL EAX,CL                          ; 0059739e
    MOV CL,byte ptr [0x01c4e9e0]        ; 005973a0 | DAT_01c4e9e0
    SHL EBP,CL                          ; 005973a6
    MOV CL,byte ptr [0x01c4e9ec]        ; 005973a8 | DAT_01c4e9ec
    SHL EDI,CL                          ; 005973ae
    OR EAX,EBP                          ; 005973b0
    MOV ECX,EDI                         ; 005973b2
    OR ECX,EAX                          ; 005973b4
    MOV EAX,dword ptr [ESP + 0xc]       ; 005973b6
        ;   Label: LAB_005973b6
    ADD EBX,0x3                         ; 005973ba
    MOV dword ptr [EAX + 0x1c4e3d4],ECX ; 005973bd | DAT_01c4e3d4
    LEA ECX,[EAX + 0x4]                 ; 005973c3
    ADD ESI,0x2                         ; 005973c6
    MOV dword ptr [ESP + 0xc],ECX       ; 005973c9
    CMP ESI,0x200                       ; 005973cd
    JZ 0x00597221                       ; 005973d3
        ;   XREF to: 00597221 (CONDITIONAL_JUMP)  ; LAB_00597221
    JMP 0x0059731c                      ; 005973d9
        ;   XREF to: 0059731c (UNCONDITIONAL_JUMP)  ; LAB_0059731c
    MOV ECX,EBP                         ; 005973de
        ;   Label: LAB_005973de
    SHL EAX,0x10                        ; 005973e0
    SHL ECX,0x8                         ; 005973e3
    OR ECX,EAX                          ; 005973e6
    OR ECX,EDI                          ; 005973e8
    JMP 0x005973b6                      ; 005973ea
        ;   XREF to: 005973b6 (UNCONDITIONAL_JUMP)  ; LAB_005973b6
    MOV EBX,0xd                         ; 005973ec
        ;   Label: LAB_005973ec
    MOV ESI,0x2                         ; 005973f1
    MOV EDI,0x7ff                       ; 005973f6
    MOV EBP,0x3ff800                    ; 005973fb
    MOV ECX,0xb                         ; 00597400
    MOV dword ptr [0x00623eb8],EBX      ; 00597405 | DAT_00623eb8
    MOV dword ptr [0x00623ed8],ESI      ; 0059740b | DAT_00623ed8
    MOV dword ptr [0x00623ef8],EDI      ; 00597411 | DAT_00623ef8
    MOV dword ptr [0x00623f18],EBP      ; 00597417 | DAT_00623f18
    MOV dword ptr [0x01c50940],ECX      ; 0059741d | DAT_01c50940
    JMP 0x00597275                      ; 00597423
        ;   XREF to: 00597275 (UNCONDITIONAL_JUMP)  ; LAB_00597275
    MOV EDX,0xe                         ; 00597428
        ;   Label: LAB_00597428
    MOV ECX,0x4                         ; 0059742d
    MOV EBX,0x3ff                       ; 00597432
    MOV ESI,0xffc00                     ; 00597437
    MOV EAX,0xa                         ; 0059743c
    MOV dword ptr [0x00623eb8],EDX      ; 00597441 | DAT_00623eb8
    MOV dword ptr [0x00623ed8],ECX      ; 00597447 | DAT_00623ed8
    MOV dword ptr [0x00623ef8],EBX      ; 0059744d | DAT_00623ef8
    MOV dword ptr [0x00623f18],ESI      ; 00597453 | DAT_00623f18
    MOV [0x01c50940],EAX                ; 00597459 | DAT_01c50940
    JMP 0x00597275                      ; 0059745e
        ;   XREF to: 00597275 (UNCONDITIONAL_JUMP)  ; LAB_00597275
    MOV EBP,0xf                         ; 00597463
        ;   Label: LAB_00597463
    MOV EAX,0x6                         ; 00597468
    MOV EDX,0x1ff                       ; 0059746d
    MOV ECX,0x3fe00                     ; 00597472
    MOV EDI,0x9                         ; 00597477
    MOV dword ptr [0x00623eb8],EBP      ; 0059747c | DAT_00623eb8
    MOV [0x00623ed8],EAX                ; 00597482 | DAT_00623ed8
    MOV dword ptr [0x00623ef8],EDX      ; 00597487 | DAT_00623ef8
    MOV dword ptr [0x00623f18],ECX      ; 0059748d | DAT_00623f18
    MOV dword ptr [0x01c50940],EDI      ; 00597493 | DAT_01c50940
    JMP 0x00597275                      ; 00597499
        ;   XREF to: 00597275 (UNCONDITIONAL_JUMP)  ; LAB_00597275
    MOV ESI,0x10                        ; 0059749e
        ;   Label: LAB_0059749e
    MOV EBX,0x8                         ; 005974a3
    MOV EBP,0xff                        ; 005974a8
    MOV EAX,0xff00                      ; 005974ad
    MOV dword ptr [0x00623eb8],ESI      ; 005974b2 | DAT_00623eb8
    MOV dword ptr [0x00623ed8],EBX      ; 005974b8 | DAT_00623ed8
    MOV dword ptr [0x00623ef8],EBP      ; 005974be | DAT_00623ef8
    MOV [0x00623f18],EAX                ; 005974c4 | DAT_00623f18
    MOV dword ptr [0x01c50940],EBX      ; 005974c9 | DAT_01c50940
    JMP 0x00597275                      ; 005974cf
        ;   XREF to: 00597275 (UNCONDITIONAL_JUMP)  ; LAB_00597275
    MOV ECX,0x11                        ; 005974d4
        ;   Label: LAB_005974d4
    MOV EBX,0xa                         ; 005974d9
    MOV ESI,0x7f                        ; 005974de
    MOV EDI,0x3f80                      ; 005974e3
    MOV EDX,0x7                         ; 005974e8
    MOV dword ptr [0x00623eb8],ECX      ; 005974ed | DAT_00623eb8
    MOV dword ptr [0x00623ed8],EBX      ; 005974f3 | DAT_00623ed8
    MOV dword ptr [0x00623ef8],ESI      ; 005974f9 | DAT_00623ef8
    MOV dword ptr [0x00623f18],EDI      ; 005974ff | DAT_00623f18
    MOV dword ptr [0x01c50940],EDX      ; 00597505 | DAT_01c50940
    JMP 0x00597275                      ; 0059750b
        ;   XREF to: 00597275 (UNCONDITIONAL_JUMP)  ; LAB_00597275
    MOV EAX,0x12                        ; 00597510
        ;   Label: LAB_00597510
    MOV EDX,0xc                         ; 00597515
    MOV ECX,0x3f                        ; 0059751a
    MOV EBX,0xfc0                       ; 0059751f
    MOV EBP,0x6                         ; 00597524
    MOV [0x00623eb8],EAX                ; 00597529 | DAT_00623eb8
    MOV dword ptr [0x00623ed8],EDX      ; 0059752e | DAT_00623ed8
    MOV dword ptr [0x00623ef8],ECX      ; 00597534 | DAT_00623ef8
    MOV dword ptr [0x00623f18],EBX      ; 0059753a | DAT_00623f18
    MOV dword ptr [0x01c50940],EBP      ; 00597540 | DAT_01c50940
    JMP 0x00597275                      ; 00597546
        ;   XREF to: 00597275 (UNCONDITIONAL_JUMP)  ; LAB_00597275
    JBE 0x0059749e                      ; 0059754b
        ;   XREF to: 0059749e (CONDITIONAL_JUMP)  ; LAB_0059749e
        ;   Label: LAB_0059754b
    CMP EAX,0x400                       ; 00597551
    JNC 0x00597568                      ; 00597556
        ;   XREF to: 00597568 (CONDITIONAL_JUMP)  ; LAB_00597568
    CMP EAX,0x200                       ; 00597558
    JZ 0x00597463                       ; 0059755d
        ;   XREF to: 00597463 (CONDITIONAL_JUMP)  ; LAB_00597463
    JMP 0x00597275                      ; 00597563
        ;   XREF to: 00597275 (UNCONDITIONAL_JUMP)  ; LAB_00597275
    JBE 0x00597428                      ; 00597568
        ;   XREF to: 00597428 (CONDITIONAL_JUMP)  ; LAB_00597428
        ;   Label: LAB_00597568
    CMP EAX,0x800                       ; 0059756e
    JZ 0x005973ec                       ; 00597573
        ;   XREF to: 005973ec (CONDITIONAL_JUMP)  ; LAB_005973ec
    JMP 0x00597275                      ; 00597579
        ;   XREF to: 00597275 (UNCONDITIONAL_JUMP)  ; LAB_00597275
    JBE 0x00597510                      ; 0059757e
        ;   XREF to: 00597510 (CONDITIONAL_JUMP)  ; LAB_00597510
        ;   Label: LAB_0059757e
    CMP EAX,0x80                        ; 00597580
    JZ 0x005974d4                       ; 00597585
        ;   XREF to: 005974d4 (CONDITIONAL_JUMP)  ; LAB_005974d4
    JMP 0x00597275                      ; 0059758b
        ;   XREF to: 00597275 (UNCONDITIONAL_JUMP)  ; LAB_00597275
    MOV EAX,dword ptr [ESP + 0x8]       ; 00597590
        ;   Label: LAB_00597590
    MOV ESI,dword ptr [EAX + 0x48]      ; 00597594
    PUSH ESI                            ; 00597597
    MOV EDI,dword ptr [EAX + 0x4c]      ; 00597598
    PUSH EDI                            ; 0059759b
    MOV EBP,dword ptr [EAX + 0x44]      ; 0059759c
    PUSH EBP                            ; 0059759f
    MOV EDX,dword ptr [EAX]             ; 005975a0
    PUSH EDX                            ; 005975a2
    MOV ECX,dword ptr [ESP + 0x38]      ; 005975a3
    PUSH ECX                            ; 005975a7
    CALL dword ptr [0x02c833b0]         ; 005975a8 | DAT_02c833b0
    ADD ESP,0x14                        ; 005975ae
    ADD ESP,0x10                        ; 005975b1
    POP EBP                             ; 005975b4
    POP EDI                             ; 005975b5
    POP ESI                             ; 005975b6
    POP EBX                             ; 005975b7
    RET                                 ; 005975b8
    CMP dword ptr [0x01c50944],0x0      ; 005975b9 | DAT_01c50944
        ;   Label: LAB_005975b9
    JZ 0x005975f0                       ; 005975c0
        ;   XREF to: 005975f0 (CONDITIONAL_JUMP)  ; LAB_005975f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005975c2
    MOV EDI,dword ptr [EAX + 0x50]      ; 005975c6
    PUSH EDI                            ; 005975c9
    MOV EBP,dword ptr [EAX]             ; 005975ca
    PUSH EBP                            ; 005975cc
    MOV EAX,dword ptr [ESP + 0x30]      ; 005975cd
    PUSH EAX                            ; 005975d1
    CALL dword ptr [0x02c833bc]         ; 005975d2 | DAT_02c833bc
    ADD ESP,0xc                         ; 005975d8
    MOV EDX,dword ptr [ESP + 0x28]      ; 005975db
        ;   Label: LAB_005975db
    PUSH EDX                            ; 005975df
    MOV ECX,dword ptr [ESP + 0x28]      ; 005975e0
    PUSH ECX                            ; 005975e4
    ADD ESP,0x8                         ; 005975e5
    ADD ESP,0x10                        ; 005975e8
    POP EBP                             ; 005975eb
    POP EDI                             ; 005975ec
    POP ESI                             ; 005975ed
    POP EBX                             ; 005975ee
    RET                                 ; 005975ef
    MOV EAX,dword ptr [ESP + 0x8]       ; 005975f0
        ;   Label: LAB_005975f0
    MOV EBP,dword ptr [EAX + 0x48]      ; 005975f4
    PUSH EBP                            ; 005975f7
    MOV EDX,dword ptr [EAX + 0x4c]      ; 005975f8
    PUSH EDX                            ; 005975fb
    MOV ECX,dword ptr [EAX + 0x44]      ; 005975fc
    PUSH ECX                            ; 005975ff
    MOV EBX,dword ptr [EAX]             ; 00597600
    PUSH EBX                            ; 00597602
    MOV ESI,dword ptr [ESP + 0x38]      ; 00597603
    PUSH ESI                            ; 00597607
    CALL dword ptr [0x02c833b4]         ; 00597608 | DAT_02c833b4
    ADD ESP,0x14                        ; 0059760e
    JMP 0x005975db                      ; 00597611
        ;   XREF to: 005975db (UNCONDITIONAL_JUMP)  ; LAB_005975db

