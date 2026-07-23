; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004931b0(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
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
;   engine_font.cpp_CBitFont_loadBitmap_FUN_0048ff70 at 0049018d
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_00581954
;   TerminatedCString s_CBitFont_remapPalette_In_00581967
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bf7720
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00628
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c00634
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c00640
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004931b0
        ;   Label: engine_font.cpp_CBitFont_remapPalette_FUN_004931b0
    PUSH ESI                            ; 004931b1
    PUSH EDI                            ; 004931b2
    PUSH EBP                            ; 004931b3
    SUB ESP,0x2c                        ; 004931b4
    MOV EAX,dword ptr [ESP + 0x40]      ; 004931b7
    XOR EDX,EDX                         ; 004931bb
    MOV ECX,dword ptr [EAX]             ; 004931bd
    MOV dword ptr [ESP + 0x18],EDX      ; 004931bf
    TEST ECX,ECX                        ; 004931c3
    JLE 0x00493296                      ; 004931c5
        ;   XREF to: 00493296 (CONDITIONAL_JUMP)  ; LAB_00493296
    MOV dword ptr [ESP + 0x1c],EAX      ; 004931cb
    MOV dword ptr [ESP + 0x14],EAX      ; 004931cf
    MOV EDI,dword ptr [ESP + 0x14]      ; 004931d3
        ;   Label: LAB_004931d3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004931d7
    XOR EBP,EBP                         ; 004931db
    MOV dword ptr [ESP + 0x28],EAX      ; 004931dd
    MOV dword ptr [ESP + 0x20],EAX      ; 004931e1
    MOV ECX,dword ptr [0x005b7624]      ; 004931e5 | DAT_005b7624
        ;   Label: LAB_004931e5
    LEA EDX,[EBP*0x4 + 0x0]             ; 004931eb
    MOVZX ESI,byte ptr [EDI + 0x166]    ; 004931f2
    XOR EBX,EBX                         ; 004931f9
    XOR EAX,EAX                         ; 004931fb
    MOV dword ptr [ESP + 0x8],EDX       ; 004931fd
    MOV EDX,dword ptr [ESP + 0x20]      ; 00493201
    MOV BL,byte ptr [EDI + 0x165]       ; 00493205
    ADD EDX,dword ptr [ESP + 0x8]       ; 0049320b
    MOV AL,byte ptr [EDI + 0x164]       ; 0049320f
    MOV dword ptr [ESP + 0x24],EDX      ; 00493215
    CMP ECX,0x10                        ; 00493219
    JNC 0x0049335d                      ; 0049321c
        ;   XREF to: 0049335d (CONDITIONAL_JUMP)  ; LAB_0049335d
    CMP ECX,0x8                         ; 00493222
    JNZ 0x00493368                      ; 00493225
        ;   XREF to: 00493368 (CONDITIONAL_JUMP)  ; LAB_00493368
    SAR EAX,0x3                         ; 0049322b
    SAR EBX,0x3                         ; 0049322e
    SHL EAX,0xa                         ; 00493231
    SHL EBX,0x5                         ; 00493234
    SAR ESI,0x3                         ; 00493237
    ADD EAX,EBX                         ; 0049323a
    ADD ESI,EAX                         ; 0049323c
    XOR EAX,EAX                         ; 0049323e
    MOV AL,byte ptr [ESI + 0x1bf7720]   ; 00493240 | DAT_01bf7720
    MOV dword ptr [EDX + 0xd64],EAX     ; 00493246
        ;   Label: LAB_00493246
    MOV ECX,dword ptr [ESP + 0x28]      ; 0049324c
        ;   Label: LAB_0049324c
    INC EBP                             ; 00493250
    ADD ECX,0x4                         ; 00493251
    ADD EDI,0x3                         ; 00493254
    MOV dword ptr [ESP + 0x28],ECX      ; 00493257
    CMP EBP,0x100                       ; 0049325b
    JL 0x004931e5                       ; 00493261
        ;   XREF to: 004931e5 (CONDITIONAL_JUMP)  ; LAB_004931e5
    MOV EBX,dword ptr [ESP + 0x14]      ; 00493263
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00493267
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049326b
    MOV EDX,dword ptr [ESP + 0x40]      ; 0049326f
    ADD EBX,0x300                       ; 00493273
    ADD ESI,0x400                       ; 00493279
    INC EDI                             ; 0049327f
    MOV EBP,dword ptr [EDX]             ; 00493280
    MOV dword ptr [ESP + 0x14],EBX      ; 00493282
    MOV dword ptr [ESP + 0x1c],ESI      ; 00493286
    MOV dword ptr [ESP + 0x18],EDI      ; 0049328a
    CMP EDI,EBP                         ; 0049328e
    JL 0x004931d3                       ; 00493290
        ;   XREF to: 004931d3 (CONDITIONAL_JUMP)  ; LAB_004931d3
    ADD ESP,0x2c                        ; 00493296
        ;   Label: LAB_00493296
    POP EBP                             ; 00493299
    POP EDI                             ; 0049329a
    POP ESI                             ; 0049329b
    POP EBX                             ; 0049329c
    RET                                 ; 0049329d
    MOV ECX,dword ptr [0x01c00628]      ; 0049329e | DAT_01c00628
        ;   Label: LAB_0049329e
    XOR EDX,EDX                         ; 004932a4
    MOV dword ptr [ESP],EAX             ; 004932a6
    DIV ECX                             ; 004932a9
    MOV dword ptr [ESP + 0x4],EBX       ; 004932ab
    MOV dword ptr [ESP],EAX             ; 004932af
    XOR EDX,EDX                         ; 004932b2
    MOV EAX,EBX                         ; 004932b4
    DIV dword ptr [0x01c00634]          ; 004932b6 | DAT_01c00634
    MOV dword ptr [ESP + 0xc],ESI       ; 004932bc
    MOV dword ptr [ESP + 0x4],EAX       ; 004932c0
    XOR EDX,EDX                         ; 004932c4
    MOV EAX,ESI                         ; 004932c6
    DIV dword ptr [0x01c00640]          ; 004932c8 | DAT_01c00640
    MOV CL,byte ptr [0x01c00624]        ; 004932ce | DAT_01c00624
    MOV EBX,dword ptr [ESP]             ; 004932d4
    SHL EBX,CL                          ; 004932d7
    MOV CL,byte ptr [0x01c00630]        ; 004932d9 | DAT_01c00630
    MOV dword ptr [ESP + 0xc],EAX       ; 004932df
    MOV EAX,dword ptr [ESP + 0x4]       ; 004932e3
    SHL EAX,CL                          ; 004932e7
    MOV CL,byte ptr [0x01c0063c]        ; 004932e9 | DAT_01c0063c
    OR EBX,EAX                          ; 004932ef
    MOV EAX,dword ptr [ESP + 0xc]       ; 004932f1
    SHL EAX,CL                          ; 004932f5
    OR EAX,EBX                          ; 004932f7
    MOV EDX,dword ptr [ESP + 0x24]      ; 004932f9
    AND EAX,0xffff                      ; 004932fd
    JMP 0x00493246                      ; 00493302
        ;   XREF to: 00493246 (UNCONDITIONAL_JUMP)  ; LAB_00493246
    CMP ECX,ECX                         ; 00493307
        ;   Label: LAB_00493307
    JZ 0x00493326                       ; 00493309
        ;   XREF to: 00493326 (CONDITIONAL_JUMP)  ; LAB_00493326
    MOV ECX,EAX                         ; 0049330b
    SHL EBX,0x8                         ; 0049330d
    SHL ECX,0x10                        ; 00493310
    OR ECX,EBX                          ; 00493313
    OR ECX,ESI                          ; 00493315
    MOV EAX,dword ptr [ESP + 0x28]      ; 00493317
    MOV dword ptr [EAX + 0xd64],ECX     ; 0049331b
    JMP 0x0049324c                      ; 00493321
        ;   XREF to: 0049324c (UNCONDITIONAL_JUMP)  ; LAB_0049324c
    MOV CL,byte ptr [0x01c00624]        ; 00493326 | DAT_01c00624
        ;   Label: LAB_00493326
    SHL EAX,CL                          ; 0049332c
    MOV CL,byte ptr [0x01c00630]        ; 0049332e | DAT_01c00630
    MOV dword ptr [ESP + 0x10],EAX      ; 00493334
    MOV EAX,EBX                         ; 00493338
    SHL EAX,CL                          ; 0049333a
    MOV CL,byte ptr [0x01c0063c]        ; 0049333c | DAT_01c0063c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00493342
    SHL ESI,CL                          ; 00493346
    OR EAX,EDX                          ; 00493348
    MOV ECX,ESI                         ; 0049334a
    OR ECX,EAX                          ; 0049334c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049334e
    MOV dword ptr [EAX + 0xd64],ECX     ; 00493352
    JMP 0x0049324c                      ; 00493358
        ;   XREF to: 0049324c (UNCONDITIONAL_JUMP)  ; LAB_0049324c
    JBE 0x0049329e                      ; 0049335d
        ;   XREF to: 0049329e (CONDITIONAL_JUMP)  ; LAB_0049329e
        ;   Label: LAB_0049335d
    CMP ECX,0x20                        ; 00493363
    JZ 0x00493307                       ; 00493366
        ;   XREF to: 00493307 (CONDITIONAL_JUMP)  ; LAB_00493307
    MOV EAX,0x581954                    ; 00493368 | = "..\\engine\\font.cpp"
        ;   Label: LAB_00493368
    MOV EDX,0x686                       ; 0049336d
    PUSH 0x581967                       ; 00493372 | = "CBitFont::remapPalette - Invalid bits..."
    MOV [0x01cc4800],EAX                ; 00493377 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0049337c | DAT_01cc4804
    CALL FUN_004c8440                   ; 00493382
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00493387
    JMP 0x0049324c                      ; 0049338a
        ;   XREF to: 0049324c (UNCONDITIONAL_JUMP)  ; LAB_0049324c

