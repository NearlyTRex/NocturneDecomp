; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitDualModeSprite_FUN_004380a0(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; int              Stack[0xc]:4   dest_x
; int              Stack[0x10]:4   dest_y
; int              Stack[0x14]:4   width
; int              Stack[0x18]:4   height
;
; XREF[1]:
;   cockpit_ckptutil.c_FUN_0043852c at 0043854e
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00437270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004380a0
        ;   Label: cockpit_ckptutil.c_blitDualModeSprite_FUN_004380a0
    PUSH ESI                            ; 004380a1
    PUSH EDI                            ; 004380a2
    PUSH EBP                            ; 004380a3
    SUB ESP,0x28                        ; 004380a4
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004380a7
    MOV EDX,dword ptr [0x01c4354c]      ; 004380ab | DAT_01c4354c
    MOV EAX,[0x01c43550]                ; 004380b1 | DAT_01c43550
    SUB EAX,EDX                         ; 004380b6
    MOV dword ptr [ESP + 0xc],EAX       ; 004380b8
    TEST EDI,EDI                        ; 004380bc
    JNZ 0x004380c8                      ; 004380be
        ;   XREF to: 004380c8 (CONDITIONAL_JUMP)  ; LAB_004380c8
    ADD ESP,0x28                        ; 004380c0
        ;   Label: LAB_004380c0
    POP EBP                             ; 004380c3
    POP EDI                             ; 004380c4
    POP ESI                             ; 004380c5
    POP EBX                             ; 004380c6
    RET                                 ; 004380c7
    CALL cockpit_ckptutil.c_FUN_00437270 ; 004380c8
        ;   XREF to: 00437270 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00437270()
        ;   Label: LAB_004380c8
    MOV EDX,dword ptr [ESP + 0x50]      ; 004380cd
    MOV ESI,dword ptr [ESP + 0x48]      ; 004380d1
    MOV EBX,EDX                         ; 004380d5
    MOV ECX,dword ptr [0x0061b4a0]      ; 004380d7 | DAT_0061b4a0
    SHL EBX,0x5                         ; 004380dd
    MOV EBP,EAX                         ; 004380e0
    ADD EBX,EDX                         ; 004380e2
    SHL ESI,0x2                         ; 004380e4
    SHL EBX,0x2                         ; 004380e7
    CMP ECX,0x8                         ; 004380ea
    JNZ 0x00438199                      ; 004380ed
        ;   XREF to: 00438199 (CONDITIONAL_JUMP)  ; LAB_00438199
    MOV EDX,dword ptr [ESP + 0x44]      ; 004380f3
    MOV EAX,dword ptr [ESI + 0x1c4354c] ; 004380f7
    ADD EDX,EAX                         ; 004380fd
    MOV EAX,dword ptr [ESP + 0x50]      ; 004380ff
    MOV dword ptr [ESP + 0x20],EDX      ; 00438103
    TEST EAX,EAX                        ; 00438107
    JLE 0x004380c0                      ; 00438109
        ;   XREF to: 004380c0 (CONDITIONAL_JUMP)  ; LAB_004380c0
    XOR ECX,ECX                         ; 0043810b
    MOV dword ptr [ESP + 0x8],EBX       ; 0043810d
    MOV dword ptr [ESP + 0x10],ECX      ; 00438111
    CMP dword ptr [ESP + 0x40],0x0      ; 00438115
        ;   Label: LAB_00438115
    JZ 0x00438187                       ; 0043811a
        ;   XREF to: 00438187 (CONDITIONAL_JUMP)  ; LAB_00438187
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043811c
    XOR ESI,ESI                         ; 00438120
    XOR EBX,EBX                         ; 00438122
    MOV dword ptr [ESP + 0x1c],EAX      ; 00438124
    MOV EAX,dword ptr [ESP + 0x40]      ; 00438128
        ;   Label: LAB_00438128
    ADD EAX,dword ptr [ESP + 0x1c]      ; 0043812c
    CMP EBX,dword ptr [EAX]             ; 00438130
    JGE 0x00438157                      ; 00438132
        ;   XREF to: 00438157 (CONDITIONAL_JUMP)  ; LAB_00438157
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44] ; 00438134
    PUSH EDX                            ; 00438138
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00438139
    ADD EDX,EDI                         ; 0043813d
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0043813f
    PUSH EDX                            ; 00438143
    MOV EDX,dword ptr [ESP + 0x28]      ; 00438144
    LEA EAX,[EDX + ECX*0x1]             ; 00438148
    PUSH EAX                            ; 0043814b
    ADD ESI,0x4                         ; 0043814c
    INC EBX                             ; 0043814f
    CALL EBP                            ; 00438150
    ADD ESP,0xc                         ; 00438152
    JMP 0x00438128                      ; 00438155
        ;   XREF to: 00438128 (UNCONDITIONAL_JUMP)  ; LAB_00438128
    MOV EBX,dword ptr [ESP + 0x10]      ; 00438157
        ;   Label: LAB_00438157
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043815b
    MOV ESI,dword ptr [ESP + 0x20]      ; 0043815f
    MOV EDX,dword ptr [ESP + 0x8]       ; 00438163
    ADD EBX,0x84                        ; 00438167
    ADD ESI,EAX                         ; 0043816d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0043816f
    MOV dword ptr [ESP + 0x10],EBX      ; 00438173
    MOV dword ptr [ESP + 0x20],ESI      ; 00438177
    ADD EDI,EAX                         ; 0043817b
    CMP EBX,EDX                         ; 0043817d
    JGE 0x004380c0                      ; 0043817f
        ;   XREF to: 004380c0 (CONDITIONAL_JUMP)  ; LAB_004380c0
    JMP 0x00438115                      ; 00438185
        ;   XREF to: 00438115 (UNCONDITIONAL_JUMP)  ; LAB_00438115
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00438187
        ;   Label: LAB_00438187
    PUSH ESI                            ; 0043818b
    PUSH EDI                            ; 0043818c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043818d
    PUSH EAX                            ; 00438191
    CALL EBP                            ; 00438192
    ADD ESP,0xc                         ; 00438194
    JMP 0x00438157                      ; 00438197
        ;   XREF to: 00438157 (UNCONDITIONAL_JUMP)  ; LAB_00438157
    MOV EDX,dword ptr [ESP + 0x44]      ; 00438199
        ;   Label: LAB_00438199
    MOV EAX,dword ptr [ESI + 0x1c4354c] ; 0043819d
    ADD EDX,EDX                         ; 004381a3
    ADD EAX,EDX                         ; 004381a5
    MOV dword ptr [ESP + 0x24],EAX      ; 004381a7
    MOV EAX,dword ptr [ESP + 0xc]       ; 004381ab
    MOV EDX,EAX                         ; 004381af
    SAR EDX,0x1f                        ; 004381b1
    SUB EAX,EDX                         ; 004381b4
    SAR EAX,0x1                         ; 004381b6
    MOV ESI,dword ptr [ESP + 0x50]      ; 004381b8
    MOV dword ptr [ESP + 0xc],EAX       ; 004381bc
    TEST ESI,ESI                        ; 004381c0
    JLE 0x004380c0                      ; 004381c2
        ;   XREF to: 004380c0 (CONDITIONAL_JUMP)  ; LAB_004380c0
    ADD EAX,EAX                         ; 004381c8
    MOV dword ptr [ESP],EAX             ; 004381ca
    XOR EAX,EAX                         ; 004381cd
    MOV dword ptr [ESP + 0x4],EBX       ; 004381cf
    MOV dword ptr [ESP + 0x14],EAX      ; 004381d3
    CMP dword ptr [ESP + 0x40],0x0      ; 004381d7
        ;   Label: LAB_004381d7
    JZ 0x00438249                       ; 004381dc
        ;   XREF to: 00438249 (CONDITIONAL_JUMP)  ; LAB_00438249
    MOV EAX,dword ptr [ESP + 0x14]      ; 004381de
    XOR ESI,ESI                         ; 004381e2
    XOR EBX,EBX                         ; 004381e4
    MOV dword ptr [ESP + 0x18],EAX      ; 004381e6
    MOV EAX,dword ptr [ESP + 0x40]      ; 004381ea
        ;   Label: LAB_004381ea
    ADD EAX,dword ptr [ESP + 0x18]      ; 004381ee
    CMP EBX,dword ptr [EAX]             ; 004381f2
    JGE 0x0043821a                      ; 004381f4
        ;   XREF to: 0043821a (CONDITIONAL_JUMP)  ; LAB_0043821a
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44] ; 004381f6
    MOV ECX,dword ptr [ESP + 0x24]      ; 004381fa
    PUSH EDX                            ; 004381fe
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 004381ff
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00438203
    ADD EDX,EDI                         ; 00438207
    ADD EAX,EAX                         ; 00438209
    PUSH EDX                            ; 0043820b
    ADD EAX,ECX                         ; 0043820c
    PUSH EAX                            ; 0043820e
    ADD ESI,0x4                         ; 0043820f
    INC EBX                             ; 00438212
    CALL EBP                            ; 00438213
    ADD ESP,0xc                         ; 00438215
    JMP 0x004381ea                      ; 00438218
        ;   XREF to: 004381ea (UNCONDITIONAL_JUMP)  ; LAB_004381ea
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043821a
        ;   Label: LAB_0043821a
    MOV EAX,dword ptr [ESP]             ; 0043821e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00438221
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00438225
    MOV ESI,dword ptr [ESP + 0x4]       ; 00438229
    ADD EDX,0x84                        ; 0043822d
    ADD ECX,EAX                         ; 00438233
    ADD EDI,EBX                         ; 00438235
    MOV dword ptr [ESP + 0x14],EDX      ; 00438237
    MOV dword ptr [ESP + 0x24],ECX      ; 0043823b
    CMP EDX,ESI                         ; 0043823f
    JGE 0x004380c0                      ; 00438241
        ;   XREF to: 004380c0 (CONDITIONAL_JUMP)  ; LAB_004380c0
    JMP 0x004381d7                      ; 00438247
        ;   XREF to: 004381d7 (UNCONDITIONAL_JUMP)  ; LAB_004381d7
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00438249
        ;   Label: LAB_00438249
    PUSH ECX                            ; 0043824d
    PUSH EDI                            ; 0043824e
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0043824f
    PUSH EBX                            ; 00438253
    CALL EBP                            ; 00438254
    ADD ESP,0xc                         ; 00438256
    JMP 0x0043821a                      ; 00438259
        ;   XREF to: 0043821a (UNCONDITIONAL_JUMP)  ; LAB_0043821a

