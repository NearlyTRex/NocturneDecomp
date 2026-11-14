; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_0058e110(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; HDC              Stack[0x8]:4   device_context
; char *           Stack[0xc]:4   text_string
; int              Stack[0x10]:4   x
; int              Stack[0x14]:4   y
; int              Stack[0x18]:4   foreground_color
; int              Stack[0x1c]:4   background_color
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_drawText_FUN_0058e0c0 at 0058e0fd
;
; Referenced Globals:
;   void* PTR_SetTextColor_005c8424 = 001c8886
;   void* PTR_TextOutA_005c8428 = 001c8896
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35830
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;
; Called Functions:
;   engine_font.cpp_getDefaultTextColor_FUN_004a96e0
;   SetTextColor
;   TextOutA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e110
        ;   Label: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_0058e110
    PUSH ESI                            ; 0058e111
    PUSH EDI                            ; 0058e112
    PUSH EBP                            ; 0058e113
    SUB ESP,0x28                        ; 0058e114
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0058e117
    MOV ESI,dword ptr [ESP + 0x44]      ; 0058e11b
    LEA EDI,[EBX + 0x6a5c]              ; 0058e11f
    MOV EDX,dword ptr [ESP + 0x44]      ; 0058e125
    PUSH EDI                            ; 0058e129
    MOV AL,byte ptr [ESI]               ; 0058e12a
        ;   Label: LAB_0058e12a
    MOV byte ptr [EDI],AL               ; 0058e12c
    CMP AL,0x0                          ; 0058e12e
    JZ 0x0058e142                       ; 0058e130
        ;   XREF to: 0058e142 (CONDITIONAL_JUMP)  ; LAB_0058e142
    MOV AL,byte ptr [ESI + 0x1]         ; 0058e132
    ADD ESI,0x2                         ; 0058e135
    MOV byte ptr [EDI + 0x1],AL         ; 0058e138
    ADD EDI,0x2                         ; 0058e13b
    CMP AL,0x0                          ; 0058e13e
    JNZ 0x0058e12a                      ; 0058e140
        ;   XREF to: 0058e12a (CONDITIONAL_JUMP)  ; LAB_0058e12a
    POP EDI                             ; 0058e142
        ;   Label: LAB_0058e142
    PUSH EDX                            ; 0058e143
    MOV EAX,dword ptr [EBX + 0x6a44]    ; 0058e144
    PUSH EBX                            ; 0058e14a
    CALL dword ptr [EAX + 0x8]          ; 0058e14b
    ADD ESP,0x8                         ; 0058e14e
    MOV ECX,dword ptr [ESP + 0x44]      ; 0058e151
    MOV dword ptr [EBX + 0x6b5c],EAX    ; 0058e155
    PUSH ECX                            ; 0058e15b
    MOV EAX,dword ptr [EBX + 0x6a44]    ; 0058e15c
    PUSH EBX                            ; 0058e162
    CALL dword ptr [EAX + 0xc]          ; 0058e163
    ADD ESP,0x8                         ; 0058e166
    MOV dword ptr [EBX + 0x6b60],EAX    ; 0058e169
    SUB ECX,ECX                         ; 0058e16f
    DEC ECX                             ; 0058e171
    XOR EAX,EAX                         ; 0058e172
    SCASB.REPNE ES:EDI                  ; 0058e174
    NOT ECX                             ; 0058e176
    DEC ECX                             ; 0058e178
    PUSH 0x0                            ; 0058e179
    MOV EDI,dword ptr [EBX + 0x6a48]    ; 0058e17b
    PUSH EDI                            ; 0058e181
    MOV ESI,ECX                         ; 0058e182
    CALL dword ptr CS:[0x5c8424]        ; 0058e184 | PTR_SetTextColor_005c8424
    PUSH ESI                            ; 0058e18b
    MOV EBP,dword ptr [ESP + 0x48]      ; 0058e18c
    PUSH EBP                            ; 0058e190
    PUSH 0x0                            ; 0058e191
    PUSH 0x0                            ; 0058e193
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 0058e195
    PUSH EAX                            ; 0058e19b
    CALL dword ptr CS:[0x5c8428]        ; 0058e19c | PTR_TextOutA_005c8428
    MOV EDX,dword ptr [ESP + 0x48]      ; 0058e1a3
    MOV EAX,dword ptr [EBX + 0x6b64]    ; 0058e1a7
    MOV ECX,dword ptr [0x006141b8]      ; 0058e1ad | DAT_006141b8
    ADD EAX,EDX                         ; 0058e1b3
    CMP EAX,ECX                         ; 0058e1b5
    JL 0x0058e2ed                       ; 0058e1b7
        ;   XREF to: 0058e2ed (CONDITIONAL_JUMP)  ; LAB_0058e2ed
    MOV ESI,ECX                         ; 0058e1bd
    SUB ESI,EDX                         ; 0058e1bf
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0058e1c1
        ;   Label: LAB_0058e1c1
    MOV EAX,dword ptr [EBX + 0x6b68]    ; 0058e1c5
    MOV EDX,dword ptr [0x006141bc]      ; 0058e1cb | DAT_006141bc
    ADD EAX,EBP                         ; 0058e1d1
    CMP EAX,EDX                         ; 0058e1d3
    JL 0x0058e2f8                       ; 0058e1d5
        ;   XREF to: 0058e2f8 (CONDITIONAL_JUMP)  ; LAB_0058e2f8
    MOV EAX,EDX                         ; 0058e1db
    SUB EAX,EBP                         ; 0058e1dd
    MOV EDI,dword ptr [EBX + 0x6b5c]    ; 0058e1df
        ;   Label: LAB_0058e1df
    MOV dword ptr [ESP + 0x18],EAX      ; 0058e1e5
    CMP ESI,EDI                         ; 0058e1e9
    JLE 0x0058e1ef                      ; 0058e1eb
        ;   XREF to: 0058e1ef (CONDITIONAL_JUMP)  ; LAB_0058e1ef
    MOV ESI,EDI                         ; 0058e1ed
    MOV EAX,dword ptr [ESP + 0x18]      ; 0058e1ef
        ;   Label: LAB_0058e1ef
    MOV EBP,dword ptr [EBX + 0x6b60]    ; 0058e1f3
    CMP EAX,EBP                         ; 0058e1f9
    JLE 0x0058e201                      ; 0058e1fb
        ;   XREF to: 0058e201 (CONDITIONAL_JUMP)  ; LAB_0058e201
    MOV dword ptr [ESP + 0x18],EBP      ; 0058e1fd
    MOV EAX,dword ptr [ESP + 0x50]      ; 0058e201
        ;   Label: LAB_0058e201
    LEA ECX,[EAX*0x4 + 0x0]             ; 0058e205
    SUB ECX,EAX                         ; 0058e20c
    CMP dword ptr [0x006141c0],0x10     ; 0058e20e | DAT_006141c0
    JNZ 0x0058e34e                      ; 0058e215
        ;   XREF to: 0058e34e (CONDITIONAL_JUMP)  ; LAB_0058e34e
    CMP dword ptr [ESP + 0x50],0x0      ; 0058e21b
    JL 0x0058e303                       ; 0058e220
        ;   XREF to: 0058e303 (CONDITIONAL_JUMP)  ; LAB_0058e303
    XOR EAX,EAX                         ; 0058e226
    MOV AL,byte ptr [ECX + 0x1c3583a]   ; 0058e228 | DAT_01c3583a
    MOV dword ptr [ESP + 0x4],EAX       ; 0058e22e
    MOVZX EBP,byte ptr [ECX + 0x1c35839] ; 0058e232 | DAT_01c35839
    MOV EDX,dword ptr [ESP + 0x4]       ; 0058e239
    XOR EAX,EAX                         ; 0058e23d
    MOV dword ptr [ESP + 0x14],EDX      ; 0058e23f
    MOV AL,byte ptr [ECX + 0x1c35838]   ; 0058e243 | DAT_01c35838
    MOV ECX,dword ptr [0x01c35818]      ; 0058e249 | DAT_01c35818
    XOR EDX,EDX                         ; 0058e24f
    MOV dword ptr [ESP + 0xc],EAX       ; 0058e251
    DIV ECX                             ; 0058e255
    MOV EDI,dword ptr [0x01c35824]      ; 0058e257 | DAT_01c35824
    MOV dword ptr [ESP + 0xc],EAX       ; 0058e25d
    XOR EDX,EDX                         ; 0058e261
    MOV EAX,EBP                         ; 0058e263
    DIV EDI                             ; 0058e265
    MOV EBP,dword ptr [0x01c35830]      ; 0058e267 | DAT_01c35830
    MOV EDI,EAX                         ; 0058e26d
    XOR EDX,EDX                         ; 0058e26f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058e271
    DIV EBP                             ; 0058e275
    MOV CL,byte ptr [0x01c35814]        ; 0058e277 | DAT_01c35814
    MOV dword ptr [ESP + 0x14],EAX      ; 0058e27d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058e281
    SHL EAX,CL                          ; 0058e285
    MOV CL,byte ptr [0x01c35820]        ; 0058e287 | DAT_01c35820
    SHL EDI,CL                          ; 0058e28d
    MOV CL,byte ptr [0x01c3582c]        ; 0058e28f | DAT_01c3582c
    OR EDI,EAX                          ; 0058e295
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058e297
    SHL EAX,CL                          ; 0058e29b
    OR EAX,EDI                          ; 0058e29d
    MOV dword ptr [ESP + 0x24],EAX      ; 0058e29f
        ;   Label: LAB_0058e29f
    XOR EAX,EAX                         ; 0058e2a3
    MOV EDX,dword ptr [ESP + 0x18]      ; 0058e2a5
    MOV dword ptr [ESP + 0x10],EAX      ; 0058e2a9
    TEST EDX,EDX                        ; 0058e2ad
    JLE 0x0058e2e5                      ; 0058e2af
        ;   XREF to: 0058e2e5 (CONDITIONAL_JUMP)  ; LAB_0058e2e5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0058e2b1
    MOV dword ptr [ESP],EAX             ; 0058e2b5
    MOV EAX,dword ptr [ESP]             ; 0058e2b8
        ;   Label: LAB_0058e2b8
    ADD EAX,dword ptr [EBX + 0x6b78]    ; 0058e2bb
    TEST EAX,EAX                        ; 0058e2c1
    JL 0x0058e2cd                       ; 0058e2c3
        ;   XREF to: 0058e2cd (CONDITIONAL_JUMP)  ; LAB_0058e2cd
    CMP EAX,dword ptr [0x006141bc]      ; 0058e2c5 | DAT_006141bc
    JL 0x0058e30a                       ; 0058e2cb
        ;   XREF to: 0058e30a (CONDITIONAL_JUMP)  ; LAB_0058e30a
    MOV EBP,dword ptr [ESP]             ; 0058e2cd
        ;   Label: LAB_0058e2cd
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058e2d0
    MOV EDX,dword ptr [ESP + 0x18]      ; 0058e2d4
    INC EBP                             ; 0058e2d8
    INC EAX                             ; 0058e2d9
    MOV dword ptr [ESP],EBP             ; 0058e2da
    MOV dword ptr [ESP + 0x10],EAX      ; 0058e2dd
    CMP EAX,EDX                         ; 0058e2e1
    JL 0x0058e2b8                       ; 0058e2e3
        ;   XREF to: 0058e2b8 (CONDITIONAL_JUMP)  ; LAB_0058e2b8
    ADD ESP,0x28                        ; 0058e2e5
        ;   Label: LAB_0058e2e5
    POP EBP                             ; 0058e2e8
    POP EDI                             ; 0058e2e9
    POP ESI                             ; 0058e2ea
    POP EBX                             ; 0058e2eb
    RET                                 ; 0058e2ec
    MOV ESI,dword ptr [EBX + 0x6b64]    ; 0058e2ed
        ;   Label: LAB_0058e2ed
    JMP 0x0058e1c1                      ; 0058e2f3
        ;   XREF to: 0058e1c1 (UNCONDITIONAL_JUMP)  ; LAB_0058e1c1
    MOV EAX,dword ptr [EBX + 0x6b68]    ; 0058e2f8
        ;   Label: LAB_0058e2f8
    JMP 0x0058e1df                      ; 0058e2fe
        ;   XREF to: 0058e1df (UNCONDITIONAL_JUMP)  ; LAB_0058e1df
    CALL engine_font.cpp_getDefaultTextColor_FUN_004a96e0 ; 0058e303
        ;   XREF to: 004a96e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_getDefaultTextColor_FUN_004a96e0()
        ;   Label: LAB_0058e303
    JMP 0x0058e29f                      ; 0058e308
        ;   XREF to: 0058e29f (UNCONDITIONAL_JUMP)  ; LAB_0058e29f
    MOV ECX,dword ptr [EAX*0x4 + 0x1c2a38c] ; 0058e30a | DAT_01c2a38c
        ;   Label: LAB_0058e30a
    XOR EAX,EAX                         ; 0058e311
    TEST ESI,ESI                        ; 0058e313
    JLE 0x0058e2cd                      ; 0058e315
        ;   XREF to: 0058e2cd (CONDITIONAL_JUMP)  ; LAB_0058e2cd
    MOV EDX,dword ptr [ESP + 0x48]      ; 0058e317
    ADD EDX,EDX                         ; 0058e31b
    ADD EDX,ECX                         ; 0058e31d
    MOV ECX,dword ptr [ESP + 0x10]      ; 0058e31f
        ;   Label: LAB_0058e31f
    IMUL ECX,dword ptr [EBX + 0x6b64]   ; 0058e323
    MOV EDI,dword ptr [EBX + 0x6a58]    ; 0058e32a
    ADD ECX,EAX                         ; 0058e330
    MOV CX,word ptr [EDI + ECX*0x2]     ; 0058e332
    CMP CX,0x7c1f                       ; 0058e336
    JZ 0x0058e344                       ; 0058e33b
        ;   XREF to: 0058e344 (CONDITIONAL_JUMP)  ; LAB_0058e344
    MOV ECX,dword ptr [ESP + 0x24]      ; 0058e33d
    MOV word ptr [EDX],CX               ; 0058e341
    INC EAX                             ; 0058e344
        ;   Label: LAB_0058e344
    ADD EDX,0x2                         ; 0058e345
    CMP EAX,ESI                         ; 0058e348
    JGE 0x0058e2cd                      ; 0058e34a
        ;   XREF to: 0058e2cd (CONDITIONAL_JUMP)  ; LAB_0058e2cd
    JMP 0x0058e31f                      ; 0058e34c
        ;   XREF to: 0058e31f (UNCONDITIONAL_JUMP)  ; LAB_0058e31f
    CMP dword ptr [ESP + 0x50],0x0      ; 0058e34e
        ;   Label: LAB_0058e34e
    JL 0x0058e3ef                       ; 0058e353
        ;   XREF to: 0058e3ef (CONDITIONAL_JUMP)  ; LAB_0058e3ef
    MOVZX EDI,byte ptr [ECX + 0x1c35838] ; 0058e359 | DAT_01c35838
    XOR EDX,EDX                         ; 0058e360
    XOR EAX,EAX                         ; 0058e362
    MOV DL,byte ptr [ECX + 0x1c35839]   ; 0058e364 | DAT_01c35839
    MOV AL,byte ptr [ECX + 0x1c3583a]   ; 0058e36a | DAT_01c3583a
    CMP dword ptr [0x006141c0],0x20     ; 0058e370 | DAT_006141c0
    JNZ 0x0058e3fa                      ; 0058e377
        ;   XREF to: 0058e3fa (CONDITIONAL_JUMP)  ; LAB_0058e3fa
    MOV CL,byte ptr [0x01c35814]        ; 0058e37d | DAT_01c35814
    SHL EDI,CL                          ; 0058e383
    MOV CL,byte ptr [0x01c35820]        ; 0058e385 | DAT_01c35820
    SHL EDX,CL                          ; 0058e38b
    MOV CL,byte ptr [0x01c3582c]        ; 0058e38d | DAT_01c3582c
    OR EDX,EDI                          ; 0058e393
    SHL EAX,CL                          ; 0058e395
    MOV ECX,EDX                         ; 0058e397
    OR ECX,EAX                          ; 0058e399
        ;   Label: LAB_0058e399
    MOV dword ptr [ESP + 0x8],ECX       ; 0058e39b
    XOR EDI,EDI                         ; 0058e39f
        ;   Label: LAB_0058e39f
    MOV EBP,dword ptr [ESP + 0x18]      ; 0058e3a1
    MOV dword ptr [ESP + 0x20],EDI      ; 0058e3a5
    TEST EBP,EBP                        ; 0058e3a9
    JLE 0x0058e2e5                      ; 0058e3ab
        ;   XREF to: 0058e2e5 (CONDITIONAL_JUMP)  ; LAB_0058e2e5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0058e3b1
    MOV EBP,dword ptr [ESP + 0x18]      ; 0058e3b5
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058e3b9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058e3bd
        ;   Label: LAB_0058e3bd
    ADD EAX,dword ptr [EBX + 0x6b78]    ; 0058e3c1
    TEST EAX,EAX                        ; 0058e3c7
    JL 0x0058e3d3                       ; 0058e3c9
        ;   XREF to: 0058e3d3 (CONDITIONAL_JUMP)  ; LAB_0058e3d3
    CMP EAX,dword ptr [0x006141bc]      ; 0058e3cb | DAT_006141bc
    JL 0x0058e406                       ; 0058e3d1
        ;   XREF to: 0058e406 (CONDITIONAL_JUMP)  ; LAB_0058e406
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0058e3d3
        ;   Label: LAB_0058e3d3
    MOV EDI,dword ptr [ESP + 0x20]      ; 0058e3d7
    INC ECX                             ; 0058e3db
    INC EDI                             ; 0058e3dc
    MOV dword ptr [ESP + 0x1c],ECX      ; 0058e3dd
    MOV dword ptr [ESP + 0x20],EDI      ; 0058e3e1
    CMP EDI,EBP                         ; 0058e3e5
    JGE 0x0058e2e5                      ; 0058e3e7
        ;   XREF to: 0058e2e5 (CONDITIONAL_JUMP)  ; LAB_0058e2e5
    JMP 0x0058e3bd                      ; 0058e3ed
        ;   XREF to: 0058e3bd (UNCONDITIONAL_JUMP)  ; LAB_0058e3bd
    CALL engine_font.cpp_getDefaultTextColor_FUN_004a96e0 ; 0058e3ef
        ;   XREF to: 004a96e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_getDefaultTextColor_FUN_004a96e0()
        ;   Label: LAB_0058e3ef
    MOV dword ptr [ESP + 0x8],EAX       ; 0058e3f4
    JMP 0x0058e39f                      ; 0058e3f8
        ;   XREF to: 0058e39f (UNCONDITIONAL_JUMP)  ; LAB_0058e39f
    MOV ECX,EDI                         ; 0058e3fa
        ;   Label: LAB_0058e3fa
    SHL EDX,0x8                         ; 0058e3fc
    SHL ECX,0x10                        ; 0058e3ff
    OR ECX,EDX                          ; 0058e402
    JMP 0x0058e399                      ; 0058e404
        ;   XREF to: 0058e399 (UNCONDITIONAL_JUMP)  ; LAB_0058e399
    MOV EDX,dword ptr [EAX*0x4 + 0x1c2a38c] ; 0058e406 | DAT_01c2a38c
        ;   Label: LAB_0058e406
    XOR EAX,EAX                         ; 0058e40d
    TEST ESI,ESI                        ; 0058e40f
    JLE 0x0058e3d3                      ; 0058e411
        ;   XREF to: 0058e3d3 (CONDITIONAL_JUMP)  ; LAB_0058e3d3
    MOV ECX,dword ptr [ESP + 0x48]      ; 0058e413
    SHL ECX,0x2                         ; 0058e417
    ADD EDX,ECX                         ; 0058e41a
    MOV ECX,dword ptr [ESP + 0x20]      ; 0058e41c
        ;   Label: LAB_0058e41c
    IMUL ECX,dword ptr [EBX + 0x6b64]   ; 0058e420
    MOV EDI,dword ptr [EBX + 0x6a58]    ; 0058e427
    ADD ECX,EAX                         ; 0058e42d
    MOV ECX,dword ptr [EDI + ECX*0x4]   ; 0058e42f
    CMP ECX,0xff00ff                    ; 0058e432
    JZ 0x0058e440                       ; 0058e438
        ;   XREF to: 0058e440 (CONDITIONAL_JUMP)  ; LAB_0058e440
    MOV ECX,dword ptr [ESP + 0x8]       ; 0058e43a
    MOV dword ptr [EDX],ECX             ; 0058e43e
    INC EAX                             ; 0058e440
        ;   Label: LAB_0058e440
    ADD EDX,0x4                         ; 0058e441
    CMP EAX,ESI                         ; 0058e444
    JGE 0x0058e3d3                      ; 0058e446
        ;   XREF to: 0058e3d3 (CONDITIONAL_JUMP)  ; LAB_0058e3d3
    JMP 0x0058e41c                      ; 0058e448
        ;   XREF to: 0058e41c (UNCONDITIONAL_JUMP)  ; LAB_0058e41c

