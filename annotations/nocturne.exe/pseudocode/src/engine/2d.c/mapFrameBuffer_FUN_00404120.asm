; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_mapFrameBuffer_FUN_00404120(int param_1,int param_2,int param_3,int param_4,uint param_5)
;
;
; XREF[1]:
;   engine_2d.c_mapTextureFrameBuffer_FUN_00404340 at 00404353
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_0057736b
;   TerminatedCString s_mapFrameBuffer_already_m_0057737a
;   TerminatedCString s_engine_2d_c_0057739b
;   TerminatedCString s_mapFrameBuffer_invalid_b_005773aa
;   TerminatedCString s_engine_2d_c_005773ce
;   TerminatedCString s_mapFrameBuffer_invalid_s_005773dd
;   TerminatedCString s_engine_2d_c_005773fd
;   TerminatedCString s_mapFrameBuffer_invalid_s_0057740c
;   TerminatedCString s_engine_2d_c_0057742a
;   TerminatedCString s_mapFrameBuffer_ySize_too_00577439
;   TerminatedCString s_engine_2d_c_00577459
;   TerminatedCString s_mapFrameBuffer_invalid_b_00577468
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   ... and 17 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404120
        ;   Label: engine_2d.c_mapFrameBuffer_FUN_00404120
    PUSH ESI                            ; 00404121
    PUSH EDI                            ; 00404122
    PUSH EBP                            ; 00404123
    MOV EBP,dword ptr [ESP + 0x18]      ; 00404124
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00404128
    MOV ESI,dword ptr [ESP + 0x20]      ; 0040412c
    MOV EBX,dword ptr [ESP + 0x24]      ; 00404130
    CMP dword ptr [0x006b023c],0x0      ; 00404134 | DAT_006b023c
    JNZ 0x00404305                      ; 0040413b
        ;   XREF to: 00404305 (CONDITIONAL_JUMP)  ; LAB_00404305
    TEST EBX,EBX                        ; 00404141
        ;   Label: LAB_00404141
    JNZ 0x00404159                      ; 00404143
        ;   XREF to: 00404159 (CONDITIONAL_JUMP)  ; LAB_00404159
    MOV EDX,EBP                         ; 00404145
    IMUL EDX,ESI                        ; 00404147
    MOV EAX,EDX                         ; 0040414a
    SAR EDX,0x1f                        ; 0040414c
    SHL EDX,0x3                         ; 0040414f
    SBB EAX,EDX                         ; 00404152
    SAR EAX,0x3                         ; 00404154
    MOV EBX,EAX                         ; 00404157
    CMP ESI,0x8                         ; 00404159
        ;   Label: LAB_00404159
    JZ 0x0040418b                       ; 0040415c
        ;   XREF to: 0040418b (CONDITIONAL_JUMP)  ; LAB_0040418b
    CMP ESI,0x10                        ; 0040415e
    JZ 0x0040418b                       ; 00404161
        ;   XREF to: 0040418b (CONDITIONAL_JUMP)  ; LAB_0040418b
    CMP ESI,0x20                        ; 00404163
    JZ 0x0040418b                       ; 00404166
        ;   XREF to: 0040418b (CONDITIONAL_JUMP)  ; LAB_0040418b
    MOV EDX,0x57739b                    ; 00404168 | = "..\\engine\\2d.c"
    MOV ECX,0x9a0                       ; 0040416d
    PUSH 0x5773aa                       ; 00404172 | = "mapFrameBuffer - invalid bits/pixel"
    MOV dword ptr [0x01cc4800],EDX      ; 00404177 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040417d | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00404183
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00404188
    MOV EDX,EBP                         ; 0040418b
        ;   Label: LAB_0040418b
    IMUL EDX,ESI                        ; 0040418d
    MOV EAX,EDX                         ; 00404190
    SAR EDX,0x1f                        ; 00404192
    SHL EDX,0x3                         ; 00404195
    SBB EAX,EDX                         ; 00404198
    SAR EAX,0x3                         ; 0040419a
    MOV ECX,EAX                         ; 0040419d
    MOV EAX,EBX                         ; 0040419f
    CDQ                                 ; 004041a1
    XOR EAX,EDX                         ; 004041a2
    SUB EAX,EDX                         ; 004041a4
    CMP EAX,ECX                         ; 004041a6
    JGE 0x004041cc                      ; 004041a8
        ;   XREF to: 004041cc (CONDITIONAL_JUMP)  ; LAB_004041cc
    MOV EAX,0x5773ce                    ; 004041aa | = "..\\engine\\2d.c"
    MOV EDX,0x9a1                       ; 004041af
    PUSH 0x5773dd                       ; 004041b4 | = "mapFrameBuffer - invalid stride"
    MOV [0x01cc4800],EAX                ; 004041b9 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004041be | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004041c4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004041c9
    CMP EBP,0x1                         ; 004041cc
        ;   Label: LAB_004041cc
    JGE 0x0040432c                      ; 004041cf
        ;   XREF to: 0040432c (CONDITIONAL_JUMP)  ; LAB_0040432c
    MOV ECX,0x5773fd                    ; 004041d5 | = "..\\engine\\2d.c"
        ;   Label: LAB_004041d5
    MOV EAX,0x9a2                       ; 004041da
    PUSH 0x57740c                       ; 004041df | = "mapFrameBuffer - invalid size"
    MOV dword ptr [0x01cc4800],ECX      ; 004041e4 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004041ea | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004041ef
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004041f4
    CMP EDI,0x4b0                       ; 004041f7
        ;   Label: LAB_004041f7
    JLE 0x00404222                      ; 004041fd
        ;   XREF to: 00404222 (CONDITIONAL_JUMP)  ; LAB_00404222
    MOV EDX,0x57742a                    ; 004041ff | = "..\\engine\\2d.c"
    MOV ECX,0x9a3                       ; 00404204
    PUSH 0x577439                       ; 00404209 | = "mapFrameBuffer - ySize too big!"
    MOV dword ptr [0x01cc4800],EDX      ; 0040420e | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00404214 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0040421a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0040421f
    CMP dword ptr [ESP + 0x14],0x0      ; 00404222
        ;   Label: LAB_00404222
    JNZ 0x0040424c                      ; 00404227
        ;   XREF to: 0040424c (CONDITIONAL_JUMP)  ; LAB_0040424c
    MOV EDX,0x577459                    ; 00404229 | = "..\\engine\\2d.c"
    MOV ECX,0x9a4                       ; 0040422e
    PUSH 0x577468                       ; 00404233 | = "mapFrameBuffer - invalid buffer!"
    MOV dword ptr [0x01cc4800],EDX      ; 00404238 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040423e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00404244
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00404249
    MOV EAX,[0x005b761c]                ; 0040424c | DAT_005b761c
        ;   Label: LAB_0040424c
    MOV [0x006b023c],EAX                ; 00404251 | DAT_006b023c
    MOV EAX,[0x005b7620]                ; 00404256 | DAT_005b7620
    MOV EDX,dword ptr [0x01bd2fa0]      ; 0040425b | DAT_01bd2fa0
    MOV [0x006b0240],EAX                ; 00404261 | DAT_006b0240
    MOV EAX,[0x01c00c58]                ; 00404266 | DAT_01c00c58
    XOR ECX,ECX                         ; 0040426b
    MOV [0x006b0244],EAX                ; 0040426d | DAT_006b0244
    MOV EAX,[0x01c00c5c]                ; 00404272 | DAT_01c00c5c
    MOV dword ptr [0x005b761c],EBP      ; 00404277 | DAT_005b761c
    MOV [0x006b0248],EAX                ; 0040427d | DAT_006b0248
    MOV EAX,[0x01c00c60]                ; 00404282 | DAT_01c00c60
    DEC EBP                             ; 00404287
    MOV [0x006b024c],EAX                ; 00404288 | DAT_006b024c
    MOV EAX,[0x01c00c64]                ; 0040428d | DAT_01c00c64
    MOV dword ptr [0x005b7620],EDI      ; 00404292 | DAT_005b7620
    MOV [0x006b0250],EAX                ; 00404298 | DAT_006b0250
    MOV EAX,[0x005b7624]                ; 0040429d | DAT_005b7624
    MOV dword ptr [0x01c00c58],ECX      ; 004042a2 | DAT_01c00c58
    MOV [0x006b0254],EAX                ; 004042a8 | DAT_006b0254
    MOV EAX,[0x01bd2fa0]                ; 004042ad | DAT_01bd2fa0
    MOV dword ptr [0x01c00c5c],ECX      ; 004042b2 | DAT_01c00c5c
    MOV [0x006b0258],EAX                ; 004042b8 | DAT_006b0258
    MOV EAX,[0x01bd2fa4]                ; 004042bd | DAT_01bd2fa4
    MOV dword ptr [0x01c00c60],EBP      ; 004042c2 | DAT_01c00c60
    SUB EAX,EDX                         ; 004042c8
    MOV dword ptr [0x005b7624],ESI      ; 004042ca | DAT_005b7624
    MOV [0x006b025c],EAX                ; 004042d0 | DAT_006b025c
    LEA EAX,[EDI + -0x1]                ; 004042d5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004042d8
    MOV [0x01c00c64],EAX                ; 004042dc | DAT_01c00c64
    TEST EDI,EDI                        ; 004042e1
    JLE 0x00404300                      ; 004042e3
        ;   XREF to: 00404300 (CONDITIONAL_JUMP)  ; LAB_00404300
    LEA ECX,[EDI*0x4 + 0x0]             ; 004042e5
    XOR EAX,EAX                         ; 004042ec
    MOV dword ptr [EAX + 0x1bd2fa0],EDX ; 004042ee
        ;   Label: LAB_004042ee
    ADD EAX,0x4                         ; 004042f4
    ADD EDX,EBX                         ; 004042f7
    CMP EAX,ECX                         ; 004042f9
    JL 0x004042ee                       ; 004042fb
        ;   XREF to: 004042ee (CONDITIONAL_JUMP)  ; LAB_004042ee
    LEA EAX,[EAX]                       ; 004042fd
    POP EBP                             ; 00404300
        ;   Label: LAB_00404300
    POP EDI                             ; 00404301
    POP ESI                             ; 00404302
    POP EBX                             ; 00404303
    RET                                 ; 00404304
    MOV ECX,0x57736b                    ; 00404305 | = "..\\engine\\2d.c"
        ;   Label: LAB_00404305
    MOV EAX,0x998                       ; 0040430a
    PUSH 0x57737a                       ; 0040430f | = "mapFrameBuffer - already mapped!"
    MOV dword ptr [0x01cc4800],ECX      ; 00404314 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0040431a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0040431f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00404324
    JMP 0x00404141                      ; 00404327
        ;   XREF to: 00404141 (UNCONDITIONAL_JUMP)  ; LAB_00404141
    CMP EDI,0x1                         ; 0040432c
        ;   Label: LAB_0040432c
    JL 0x004041d5                       ; 0040432f
        ;   XREF to: 004041d5 (CONDITIONAL_JUMP)  ; LAB_004041d5
    JMP 0x004041f7                      ; 00404335
        ;   XREF to: 004041f7 (UNCONDITIONAL_JUMP)  ; LAB_004041f7

