; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b31c0(int *param_1)
;
; Local Variables:
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
;   FUN_004af920 at 004afb70
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_005c20bf
;   TerminatedCString s_CBitFont_remapPalette_In_005c20d2
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b31c0
        ;   Label: FUN_004b31c0
    PUSH ESI                            ; 004b31c1
    PUSH EDI                            ; 004b31c2
    PUSH EBP                            ; 004b31c3
    SUB ESP,0x28                        ; 004b31c4
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b31c7
    XOR EDX,EDX                         ; 004b31cb
    MOV ECX,dword ptr [EAX]             ; 004b31cd
    MOV dword ptr [ESP + 0x1c],EDX      ; 004b31cf
    TEST ECX,ECX                        ; 004b31d3
    JLE 0x004b3297                      ; 004b31d5
        ;   XREF to: 004b3297 (CONDITIONAL_JUMP)  ; LAB_004b3297
    ADD EAX,0x400                       ; 004b31db
    MOV dword ptr [ESP + 0x14],EAX      ; 004b31e0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b31e4
    MOV dword ptr [ESP + 0x18],EAX      ; 004b31e8
    MOV dword ptr [ESP + 0xc],EAX       ; 004b31ec
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b31f0
        ;   Label: LAB_004b31f0
    MOV dword ptr [ESP + 0x20],EAX      ; 004b31f4
    MOV dword ptr [ESP + 0x24],EAX      ; 004b31f8
    MOV EAX,dword ptr [ESP + 0x14]      ; 004b31fc
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b3200
    MOV dword ptr [ESP + 0x10],EAX      ; 004b3204
    MOV EAX,[0x005fba20]                ; 004b3208 | DAT_005fba20
        ;   Label: LAB_004b3208
    MOVZX EDI,byte ptr [EBP + 0x1b5]    ; 004b320d
    XOR EBX,EBX                         ; 004b3214
    MOVZX ESI,byte ptr [EBP + 0x1b4]    ; 004b3216
    MOV BL,byte ptr [EBP + 0x1b6]       ; 004b321d
    CMP EAX,0x10                        ; 004b3223
    JNC 0x004b3360                      ; 004b3226
        ;   XREF to: 004b3360 (CONDITIONAL_JUMP)  ; LAB_004b3360
    CMP EAX,0x8                         ; 004b322c
    JNZ 0x004b336b                      ; 004b322f
        ;   XREF to: 004b336b (CONDITIONAL_JUMP)  ; LAB_004b336b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b3235
        ;   Label: LAB_004b3235
    MOV EBX,dword ptr [ESP + 0x24]      ; 004b3239
    MOV ESI,dword ptr [ESP + 0x10]      ; 004b323d
    ADD EBP,0x3                         ; 004b3241
    ADD ECX,0x4                         ; 004b3244
    ADD EBX,0x4                         ; 004b3247
    MOV dword ptr [ESP + 0x20],ECX      ; 004b324a
    MOV dword ptr [ESP + 0x24],EBX      ; 004b324e
    CMP EBX,ESI                         ; 004b3252
    JNZ 0x004b3208                      ; 004b3254
        ;   XREF to: 004b3208 (CONDITIONAL_JUMP)  ; LAB_004b3208
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b3256
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b325a
    MOV EDI,dword ptr [ESP + 0xc]       ; 004b325e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004b3262
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004b3266
    ADD EBX,0x400                       ; 004b326a
    ADD ESI,0x300                       ; 004b3270
    ADD EDI,0x400                       ; 004b3276
    INC EBP                             ; 004b327c
    MOV EDX,dword ptr [ECX]             ; 004b327d
    MOV dword ptr [ESP + 0x14],EBX      ; 004b327f
    MOV dword ptr [ESP + 0x18],ESI      ; 004b3283
    MOV dword ptr [ESP + 0xc],EDI       ; 004b3287
    MOV dword ptr [ESP + 0x1c],EBP      ; 004b328b
    CMP EBP,EDX                         ; 004b328f
    JL 0x004b31f0                       ; 004b3291
        ;   XREF to: 004b31f0 (CONDITIONAL_JUMP)  ; LAB_004b31f0
    ADD ESP,0x28                        ; 004b3297
        ;   Label: LAB_004b3297
    POP EBP                             ; 004b329a
    POP EDI                             ; 004b329b
    POP ESI                             ; 004b329c
    POP EBX                             ; 004b329d
    RET                                 ; 004b329e
    MOV ECX,dword ptr [0x01c6af78]      ; 004b329f | DAT_01c6af78
        ;   Label: LAB_004b329f
    MOV EAX,ESI                         ; 004b32a5
    XOR EDX,EDX                         ; 004b32a7
    DIV ECX                             ; 004b32a9
    MOV dword ptr [ESP],ESI             ; 004b32ab
    MOV ESI,dword ptr [0x01c6af84]      ; 004b32ae | DAT_01c6af84
    MOV dword ptr [ESP],EAX             ; 004b32b4
    XOR EDX,EDX                         ; 004b32b7
    MOV EAX,EDI                         ; 004b32b9
    DIV ESI                             ; 004b32bb
    MOV dword ptr [ESP + 0x4],EDI       ; 004b32bd
    MOV EDI,dword ptr [0x01c6af90]      ; 004b32c1 | DAT_01c6af90
    MOV dword ptr [ESP + 0x4],EAX       ; 004b32c7
    XOR EDX,EDX                         ; 004b32cb
    MOV EAX,EBX                         ; 004b32cd
    DIV EDI                             ; 004b32cf
    MOV dword ptr [ESP + 0x8],EBX       ; 004b32d1
    MOV CL,byte ptr [0x01c6af74]        ; 004b32d5 | DAT_01c6af74
    MOV dword ptr [ESP + 0x8],EAX       ; 004b32db
    MOV EAX,dword ptr [ESP]             ; 004b32df
    MOV EBX,dword ptr [ESP + 0x4]       ; 004b32e2
    SHL EAX,CL                          ; 004b32e6
    MOV CL,byte ptr [0x01c6af80]        ; 004b32e8 | DAT_01c6af80
    SHL EBX,CL                          ; 004b32ee
    MOV CL,byte ptr [0x01c6af8c]        ; 004b32f0 | DAT_01c6af8c
    OR EBX,EAX                          ; 004b32f6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b32f8
    SHL EAX,CL                          ; 004b32fc
    OR EAX,EBX                          ; 004b32fe
    MOV ECX,dword ptr [ESP + 0x24]      ; 004b3300
    AND EAX,0xffff                      ; 004b3304
    MOV dword ptr [ECX + 0xdb4],EAX     ; 004b3309
    JMP 0x004b3235                      ; 004b330f
        ;   XREF to: 004b3235 (UNCONDITIONAL_JUMP)  ; LAB_004b3235
    CMP EAX,EAX                         ; 004b3314
        ;   Label: LAB_004b3314
    JNZ 0x004b3345                      ; 004b3316
        ;   XREF to: 004b3345 (CONDITIONAL_JUMP)  ; LAB_004b3345
    MOV CL,byte ptr [0x01c6af74]        ; 004b3318 | DAT_01c6af74
    SHL ESI,CL                          ; 004b331e
    MOV CL,byte ptr [0x01c6af80]        ; 004b3320 | DAT_01c6af80
    SHL EDI,CL                          ; 004b3326
    MOV CL,byte ptr [0x01c6af8c]        ; 004b3328 | DAT_01c6af8c
    SHL EBX,CL                          ; 004b332e
    OR ESI,EDI                          ; 004b3330
    MOV ECX,EBX                         ; 004b3332
    OR ECX,ESI                          ; 004b3334
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b3336
    MOV dword ptr [EAX + 0xdb4],ECX     ; 004b333a
    JMP 0x004b3235                      ; 004b3340
        ;   XREF to: 004b3235 (UNCONDITIONAL_JUMP)  ; LAB_004b3235
    MOV ECX,EDI                         ; 004b3345
        ;   Label: LAB_004b3345
    SHL ESI,0x10                        ; 004b3347
    SHL ECX,0x8                         ; 004b334a
    OR ECX,ESI                          ; 004b334d
    OR ECX,EBX                          ; 004b334f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b3351
    MOV dword ptr [EAX + 0xdb4],ECX     ; 004b3355
    JMP 0x004b3235                      ; 004b335b
        ;   XREF to: 004b3235 (UNCONDITIONAL_JUMP)  ; LAB_004b3235
    JBE 0x004b329f                      ; 004b3360
        ;   XREF to: 004b329f (CONDITIONAL_JUMP)  ; LAB_004b329f
        ;   Label: LAB_004b3360
    CMP EAX,0x20                        ; 004b3366
    JZ 0x004b3314                       ; 004b3369
        ;   XREF to: 004b3314 (CONDITIONAL_JUMP)  ; LAB_004b3314
    MOV EAX,0x5c20bf                    ; 004b336b | = "..\\engine\\font.cpp"
        ;   Label: LAB_004b336b
    MOV EDX,0x8e4                       ; 004b3370
    PUSH 0x5c20d2                       ; 004b3375 | = "CBitFont::remapPalette - Invalid bits..."
    MOV [0x01d71de0],EAX                ; 004b337a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004b337f | DAT_01d71de4
    CALL FUN_004e4330                   ; 004b3385
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004b338a
    JMP 0x004b3235                      ; 004b338d
        ;   XREF to: 004b3235 (UNCONDITIONAL_JUMP)  ; LAB_004b3235

