; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ff190(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6d42
;   undefined4 DAT_005e6d4a
;   undefined4 DAT_005e6d52
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_00622c18
;   undefined4 DAT_01d1c21c
;
; Called Functions:
;   FUN_0040c600
;   FUN_004a1b70
;   FUN_004ff3f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff190
        ;   Label: FUN_004ff190
    PUSH ESI                            ; 004ff191
    PUSH EDI                            ; 004ff192
    PUSH EBP                            ; 004ff193
    MOV EBP,ESP                         ; 004ff194
    SUB ESP,0xc                         ; 004ff196
    AND ESP,0xfffffff8                  ; 004ff199
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ff19c
    CMP dword ptr [EBX + 0x418],0x0     ; 004ff19f
    JNZ 0x004ff206                      ; 004ff1a6
        ;   XREF to: 004ff206 (CONDITIONAL_JUMP)  ; LAB_004ff206
    CMP dword ptr [EBX + 0x40c],0x0     ; 004ff1a8
        ;   Label: LAB_004ff1a8
    JNZ 0x004ff1ff                      ; 004ff1af
        ;   XREF to: 004ff1ff (CONDITIONAL_JUMP)  ; LAB_004ff1ff
    FLD float ptr [EBX + 0x2dc]         ; 004ff1b1
    FCOMP double ptr [0x005e6d4a]       ; 004ff1b7 | DAT_005e6d4a
    FNSTSW AX                           ; 004ff1bd
    SAHF                                ; 004ff1bf
    JNC 0x004ff1e1                      ; 004ff1c0
        ;   XREF to: 004ff1e1 (CONDITIONAL_JUMP)  ; LAB_004ff1e1
    CMP byte ptr [EBX + 0x344],0x0      ; 004ff1c2
    JZ 0x004ff1e1                       ; 004ff1c9
        ;   XREF to: 004ff1e1 (CONDITIONAL_JUMP)  ; LAB_004ff1e1
    LEA EAX,[EBX + 0x344]               ; 004ff1cb
    PUSH EAX                            ; 004ff1d1
    MOV EDI,dword ptr [0x0061b4d0]      ; 004ff1d2 | DAT_0061b4d0
    PUSH EDI                            ; 004ff1d8
    CALL FUN_004a1b70                   ; 004ff1d9
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
    ADD ESP,0x8                         ; 004ff1de
    FLD float ptr [EBX + 0x2dc]         ; 004ff1e1
        ;   Label: LAB_004ff1e1
    FCOMP double ptr [0x005e6d52]       ; 004ff1e7 | DAT_005e6d52
    FNSTSW AX                           ; 004ff1ed
    SAHF                                ; 004ff1ef
    JBE 0x004ff1ff                      ; 004ff1f0
        ;   XREF to: 004ff1ff (CONDITIONAL_JUMP)  ; LAB_004ff1ff
    CMP byte ptr [EBX + 0x2e0],0x0      ; 004ff1f2
    JNZ 0x004ff3d1                      ; 004ff1f9
        ;   XREF to: 004ff3d1 (CONDITIONAL_JUMP)  ; LAB_004ff3d1
    MOV ESP,EBP                         ; 004ff1ff
        ;   Label: LAB_004ff1ff
    POP EBP                             ; 004ff201
    POP EDI                             ; 004ff202
    POP ESI                             ; 004ff203
    POP EBX                             ; 004ff204
    RET                                 ; 004ff205
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 004ff206
        ;   Label: LAB_004ff206
    MOV dword ptr [ESP],EAX             ; 004ff20c
    FLD float ptr [ESP]                 ; 004ff20f
    FCOMP float ptr [EBX + 0x41c]       ; 004ff212
    FNSTSW AX                           ; 004ff218
    SAHF                                ; 004ff21a
    JNC 0x004ff301                      ; 004ff21b
        ;   XREF to: 004ff301 (CONDITIONAL_JUMP)  ; LAB_004ff301
    FLD float ptr [EBP + 0x18]          ; 004ff221
    FMUL double ptr [0x005e6d42]        ; 004ff224 | DAT_005e6d42
    FADD float ptr [ESP]                ; 004ff22a
    FST float ptr [EBX + 0x2dc]         ; 004ff22d
    FCOMP float ptr [EBX + 0x41c]       ; 004ff233
    FNSTSW AX                           ; 004ff239
    SAHF                                ; 004ff23b
    JBE 0x004ff284                      ; 004ff23c
        ;   XREF to: 004ff284 (CONDITIONAL_JUMP)  ; LAB_004ff284
    MOV dword ptr [EBX + 0x418],0x0     ; 004ff23e
    FLD float ptr [EBX + 0x41c]         ; 004ff248
    MOV EDI,dword ptr [EBX + 0x40c]     ; 004ff24e
    FSTP float ptr [EBX + 0x2dc]        ; 004ff254
    TEST EDI,EDI                        ; 004ff25a
    JZ 0x004ff284                       ; 004ff25c
        ;   XREF to: 004ff284 (CONDITIONAL_JUMP)  ; LAB_004ff284
    FLD float ptr [EBX + 0x2dc]         ; 004ff25e
    FCOMP double ptr [0x005e6d52]       ; 004ff264 | DAT_005e6d52
    FNSTSW AX                           ; 004ff26a
    SAHF                                ; 004ff26c
    JBE 0x004ff284                      ; 004ff26d
        ;   XREF to: 004ff284 (CONDITIONAL_JUMP)  ; LAB_004ff284
    LEA EAX,[EBX + 0x2e0]               ; 004ff26f
    PUSH EAX                            ; 004ff275
    MOV EAX,[0x0061b4d0]                ; 004ff276 | DAT_0061b4d0
    PUSH EAX                            ; 004ff27b
    CALL FUN_004a1b70                   ; 004ff27c
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
        ;   Label: LAB_004ff27c
    ADD ESP,0x8                         ; 004ff281
    FLDZ                                ; 004ff284
        ;   Label: LAB_004ff284
    FCOMP float ptr [EBX + 0x2dc]       ; 004ff286
    FNSTSW AX                           ; 004ff28c
    SAHF                                ; 004ff28e
    JNC 0x004ff36e                      ; 004ff28f
        ;   XREF to: 004ff36e (CONDITIONAL_JUMP)  ; LAB_004ff36e
    FLD float ptr [ESP]                 ; 004ff295
    FLDZ                                ; 004ff298
    FCOMPP                              ; 004ff29a
    FNSTSW AX                           ; 004ff29c
    SAHF                                ; 004ff29e
    JC 0x004ff36e                       ; 004ff29f
        ;   XREF to: 004ff36e (CONDITIONAL_JUMP)  ; LAB_004ff36e
    LEA EAX,[EBX + 0x3a8]               ; 004ff2a5
        ;   Label: LAB_004ff2a5
    PUSH EAX                            ; 004ff2ab
    MOV ESI,dword ptr [EBX + 0x154]     ; 004ff2ac
    PUSH EBX                            ; 004ff2b2
    CALL dword ptr [ESI + 0x2c]         ; 004ff2b3
    ADD ESP,0x8                         ; 004ff2b6
    MOV ECX,dword ptr [EBX + 0x410]     ; 004ff2b9
        ;   Label: LAB_004ff2b9
    TEST ECX,ECX                        ; 004ff2bf
    JNZ 0x004ff393                      ; 004ff2c1
        ;   XREF to: 004ff393 (CONDITIONAL_JUMP)  ; LAB_004ff393
    XOR EDI,EDI                         ; 004ff2c7
        ;   Label: LAB_004ff2c7
    XOR ESI,ESI                         ; 004ff2c9
    MOV EAX,[0x00622c18]                ; 004ff2cb | DAT_00622c18
        ;   Label: LAB_004ff2cb
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 004ff2d0
    JGE 0x004ff1a8                      ; 004ff2d6
        ;   XREF to: 004ff1a8 (CONDITIONAL_JUMP)  ; LAB_004ff1a8
    MOV ECX,dword ptr [0x01d1c21c]      ; 004ff2dc | DAT_01d1c21c
    PUSH ECX                            ; 004ff2e2
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x14d168] ; 004ff2e3
    PUSH EDX                            ; 004ff2ea
    CALL FUN_0040c600                   ; 004ff2eb
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004ff2f0
    TEST EAX,EAX                        ; 004ff2f3
    JNZ 0x004ff3a9                      ; 004ff2f5
        ;   XREF to: 004ff3a9 (CONDITIONAL_JUMP)  ; LAB_004ff3a9
    INC ESI                             ; 004ff2fb
        ;   Label: LAB_004ff2fb
    ADD EDI,0x4                         ; 004ff2fc
    JMP 0x004ff2cb                      ; 004ff2ff
        ;   XREF to: 004ff2cb (UNCONDITIONAL_JUMP)  ; LAB_004ff2cb
    FLD float ptr [EBP + 0x18]          ; 004ff301
        ;   Label: LAB_004ff301
    FMUL double ptr [0x005e6d42]        ; 004ff304 | DAT_005e6d42
    FSUBR float ptr [ESP]               ; 004ff30a
    FST float ptr [EBX + 0x2dc]         ; 004ff30d
    FCOMP float ptr [EBX + 0x41c]       ; 004ff313
    FNSTSW AX                           ; 004ff319
    SAHF                                ; 004ff31b
    JNC 0x004ff284                      ; 004ff31c
        ;   XREF to: 004ff284 (CONDITIONAL_JUMP)  ; LAB_004ff284
    MOV dword ptr [EBX + 0x418],0x0     ; 004ff322
    FLD float ptr [EBX + 0x41c]         ; 004ff32c
    MOV ECX,dword ptr [EBX + 0x40c]     ; 004ff332
    FSTP float ptr [EBX + 0x2dc]        ; 004ff338
    TEST ECX,ECX                        ; 004ff33e
    JZ 0x004ff284                       ; 004ff340
        ;   XREF to: 004ff284 (CONDITIONAL_JUMP)  ; LAB_004ff284
    FLD float ptr [EBX + 0x2dc]         ; 004ff346
    FCOMP double ptr [0x005e6d4a]       ; 004ff34c | DAT_005e6d4a
    FNSTSW AX                           ; 004ff352
    SAHF                                ; 004ff354
    JNC 0x004ff284                      ; 004ff355
        ;   XREF to: 004ff284 (CONDITIONAL_JUMP)  ; LAB_004ff284
    LEA EAX,[EBX + 0x344]               ; 004ff35b
    PUSH EAX                            ; 004ff361
    MOV ESI,dword ptr [0x0061b4d0]      ; 004ff362 | DAT_0061b4d0
    PUSH ESI                            ; 004ff368
    JMP 0x004ff27c                      ; 004ff369
        ;   XREF to: 004ff27c (UNCONDITIONAL_JUMP)  ; LAB_004ff27c
    CMP dword ptr [EBX + 0x2dc],0x3f800000 ; 004ff36e
        ;   Label: LAB_004ff36e
    JGE 0x004ff2b9                      ; 004ff378
        ;   XREF to: 004ff2b9 (CONDITIONAL_JUMP)  ; LAB_004ff2b9
    FLD float ptr [ESP]                 ; 004ff37e
    FLD1                                ; 004ff381
    FCOMPP                              ; 004ff383
    FNSTSW AX                           ; 004ff385
    SAHF                                ; 004ff387
    JBE 0x004ff2a5                      ; 004ff388
        ;   XREF to: 004ff2a5 (CONDITIONAL_JUMP)  ; LAB_004ff2a5
    JMP 0x004ff2b9                      ; 004ff38e
        ;   XREF to: 004ff2b9 (UNCONDITIONAL_JUMP)  ; LAB_004ff2b9
    PUSH 0x0                            ; 004ff393
        ;   Label: LAB_004ff393
    PUSH dword ptr [EBX + 0x2dc]        ; 004ff395
    PUSH ECX                            ; 004ff39b
    CALL FUN_004ff3f0                   ; 004ff39c
        ;   XREF to: 004ff3f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ff3f0()
    ADD ESP,0xc                         ; 004ff3a1
    JMP 0x004ff2c7                      ; 004ff3a4
        ;   XREF to: 004ff2c7 (UNCONDITIONAL_JUMP)  ; LAB_004ff2c7
    MOV ECX,dword ptr [EAX + 0x410]     ; 004ff3a9
        ;   Label: LAB_004ff3a9
    CMP EBX,ECX                         ; 004ff3af
    JNZ 0x004ff2fb                      ; 004ff3b1
        ;   XREF to: 004ff2fb (CONDITIONAL_JUMP)  ; LAB_004ff2fb
    PUSH 0x0                            ; 004ff3b7
    PUSH dword ptr [ECX + 0x2dc]        ; 004ff3b9
    PUSH EAX                            ; 004ff3bf
    CALL FUN_004ff3f0                   ; 004ff3c0
        ;   XREF to: 004ff3f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ff3f0()
    ADD ESP,0xc                         ; 004ff3c5
    INC ESI                             ; 004ff3c8
    ADD EDI,0x4                         ; 004ff3c9
    JMP 0x004ff2cb                      ; 004ff3cc
        ;   XREF to: 004ff2cb (UNCONDITIONAL_JUMP)  ; LAB_004ff2cb
    ADD EBX,0x2e0                       ; 004ff3d1
        ;   Label: LAB_004ff3d1
    PUSH EBX                            ; 004ff3d7
    MOV EAX,[0x0061b4d0]                ; 004ff3d8 | DAT_0061b4d0
    PUSH EAX                            ; 004ff3dd
    CALL FUN_004a1b70                   ; 004ff3de
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
    ADD ESP,0x8                         ; 004ff3e3
    MOV ESP,EBP                         ; 004ff3e6
    POP EBP                             ; 004ff3e8
    POP EDI                             ; 004ff3e9
    POP ESI                             ; 004ff3ea
    POP EBX                             ; 004ff3eb
    RET                                 ; 004ff3ec

