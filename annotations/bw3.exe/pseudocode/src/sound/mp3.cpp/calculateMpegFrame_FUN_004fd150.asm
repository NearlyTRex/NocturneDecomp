; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_004fd150(SMpegFrame *frame)
;
; Parameters:
; SMpegFrame *     Stack[0x4]:4   frame
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00503944
;   sound_mp3.cpp_FUN_00502890 at 00502987
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005c9ec7
;   TerminatedCString s_MPEG_Layer_2_pick_table_005c9ed8
;   TerminatedCString s_sound_mp3_cpp_005c9f11
;   TerminatedCString s_js_bound_bad_layer_modex_005c9f22
;   undefined4 s_CMotionController_006007ad+0x13
;   undefined4 DAT_006011b8
;   undefined4 DAT_006011f8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d94b98
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd150
        ;   Label: sound_mp3.cpp_calculateMpegFrame_FUN_004fd150
    PUSH ESI                            ; 004fd151
    PUSH EDI                            ; 004fd152
    PUSH EBP                            ; 004fd153
    SUB ESP,0x14                        ; 004fd154
    MOV EBX,dword ptr [ESP + 0x28]      ; 004fd157
    MOV ESI,dword ptr [EBX]             ; 004fd15b
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004fd15d
    MOV dword ptr [EBX + 0x4],EAX       ; 004fd160
    CMP EAX,0x3                         ; 004fd163
    SETNZ AL                            ; 004fd166
    AND EAX,0xff                        ; 004fd169
    INC EAX                             ; 004fd16e
    MOV dword ptr [EBX + 0x10],EAX      ; 004fd16f
    CMP dword ptr [ESI + 0x4],0x2       ; 004fd172
    JZ 0x004fd1e1                       ; 004fd176
        ;   XREF to: 004fd1e1 (CONDITIONAL_JUMP)  ; LAB_004fd1e1
    MOV dword ptr [EBX + 0x18],0x20     ; 004fd178
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004fd17f
        ;   Label: LAB_004fd17f
    CMP ECX,0x1                         ; 004fd182
    JNZ 0x004fd2fa                      ; 004fd185
        ;   XREF to: 004fd2fa (CONDITIONAL_JUMP)  ; LAB_004fd2fa
    MOV EDI,dword ptr [ESI + 0x4]       ; 004fd18b
    MOV ESI,dword ptr [ESI + 0x20]      ; 004fd18e
    CMP EDI,ECX                         ; 004fd191
    JL 0x004fd19e                       ; 004fd193
        ;   XREF to: 004fd19e (CONDITIONAL_JUMP)  ; LAB_004fd19e
    CMP EDI,0x3                         ; 004fd195
    JLE 0x004fd2e4                      ; 004fd198
        ;   XREF to: 004fd2e4 (CONDITIONAL_JUMP)  ; LAB_004fd2e4
    PUSH 0x1d94b98                      ; 004fd19e | DAT_01d94b98
        ;   Label: LAB_004fd19e
    PUSH ESI                            ; 004fd1a3
    PUSH EDI                            ; 004fd1a4
    MOV EBP,0x5c9f11                    ; 004fd1a5 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x1ea                       ; 004fd1aa
    PUSH 0x5c9f22                       ; 004fd1af | = "js_bound bad layer/modext (%d/%d)  Fi..."
    MOV dword ptr [0x01d71de0],EBP      ; 004fd1b4 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004fd1ba | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fd1bf
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 004fd1c4
    SHL ESI,0x2                         ; 004fd1c7
        ;   Label: LAB_004fd1c7
    SHL EDI,0x4                         ; 004fd1ca
    LEA EAX,[EDI + ESI*0x1]             ; 004fd1cd
    MOV EAX,dword ptr [EAX + 0x6007c0]  ; 004fd1d0 | s_CMotionController_006007ad+0x13
    MOV dword ptr [EBX + 0x14],EAX      ; 004fd1d6
    ADD ESP,0x14                        ; 004fd1d9
    POP EBP                             ; 004fd1dc
    POP EDI                             ; 004fd1dd
    POP ESI                             ; 004fd1de
    POP EBX                             ; 004fd1df
    RET                                 ; 004fd1e0
    MOV EAX,dword ptr [EBX + 0x18]      ; 004fd1e1
        ;   Label: LAB_004fd1e1
    MOV ECX,dword ptr [EBX]             ; 004fd1e4
    MOV dword ptr [ESP + 0xc],EAX       ; 004fd1e6
    MOV EAX,dword ptr [ECX + 0xc]       ; 004fd1ea
    MOV EDI,dword ptr [ECX]             ; 004fd1ed
    MOV dword ptr [ESP],EAX             ; 004fd1ef
    LEA EAX,[EDI*0x4 + 0x0]             ; 004fd1f2
    SUB EAX,EDI                         ; 004fd1f9
    SHL EAX,0x2                         ; 004fd1fb
    MOV EDX,EAX                         ; 004fd1fe
    SHL EAX,0x4                         ; 004fd200
    MOV EBP,dword ptr [ECX + 0x4]       ; 004fd203
    SUB EAX,EDX                         ; 004fd206
    DEC EBP                             ; 004fd208
    MOV dword ptr [ESP + 0x4],EAX       ; 004fd209
    LEA EAX,[EBP*0x4 + 0x0]             ; 004fd20d
    MOV EDX,EAX                         ; 004fd214
    SHL EAX,0x4                         ; 004fd216
    MOV EBP,dword ptr [ESP + 0x4]       ; 004fd219
    SUB EAX,EDX                         ; 004fd21d
    MOV EDX,dword ptr [ESP]             ; 004fd21f
    ADD EAX,EBP                         ; 004fd222
    MOV EDX,dword ptr [EAX + EDX*0x4 + 0x6011f8] ; 004fd224 | DAT_006011f8
    MOV EBP,dword ptr [EBX + 0x10]      ; 004fd22b
    MOV EAX,EDX                         ; 004fd22e
    SAR EDX,0x1f                        ; 004fd230
    IDIV EBP                            ; 004fd233
    MOV EDX,EAX                         ; 004fd235
    MOV EAX,dword ptr [ECX + 0x10]      ; 004fd237
    MOV ECX,EDI                         ; 004fd23a
    SHL ECX,0x5                         ; 004fd23c
    MOV dword ptr [ESP + 0x8],EBX       ; 004fd23f
    FLD double ptr [ECX + EAX*0x8 + 0x6011b8] ; 004fd243 | DAT_006011b8
    CALL crt_math.c_round_FUN_005a3120  ; 004fd24a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x10]        ; 004fd24f
    CMP EDI,0x1                         ; 004fd253
    JNZ 0x004fd2dd                      ; 004fd256
        ;   XREF to: 004fd2dd (CONDITIONAL_JUMP)  ; LAB_004fd2dd
    CMP dword ptr [ESP + 0x10],0x30     ; 004fd25c
    JNZ 0x004fd2a6                      ; 004fd261
        ;   XREF to: 004fd2a6 (CONDITIONAL_JUMP)  ; LAB_004fd2a6
    CMP EDX,0x38                        ; 004fd263
    JL 0x004fd2a6                       ; 004fd266
        ;   XREF to: 004fd2a6 (CONDITIONAL_JUMP)  ; LAB_004fd2a6
    XOR EAX,EAX                         ; 004fd268
        ;   Label: LAB_004fd268
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fd26a
        ;   Label: LAB_004fd26a
    CMP EAX,dword ptr [EDX + 0xc]       ; 004fd26e
    JZ 0x004fd29a                       ; 004fd271
        ;   XREF to: 004fd29a (CONDITIONAL_JUMP)  ; LAB_004fd29a
    PUSH 0x1d94b98                      ; 004fd273 | DAT_01d94b98
    MOV EAX,0x5c9ec7                    ; 004fd278 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x1d8                       ; 004fd27d
    PUSH 0x5c9ed8                       ; 004fd282 | = "MPEG Layer 2 - pick_table - can't loa..."
    MOV [0x01d71de0],EAX                ; 004fd287 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004fd28c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fd292
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004fd297
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fd29a
        ;   Label: LAB_004fd29a
    MOV dword ptr [EBX + 0x18],EAX      ; 004fd29e
    JMP 0x004fd17f                      ; 004fd2a1
        ;   XREF to: 004fd17f (UNCONDITIONAL_JUMP)  ; LAB_004fd17f
    CMP EDX,0x38                        ; 004fd2a6
        ;   Label: LAB_004fd2a6
    JL 0x004fd2b0                       ; 004fd2a9
        ;   XREF to: 004fd2b0 (CONDITIONAL_JUMP)  ; LAB_004fd2b0
    CMP EDX,0x50                        ; 004fd2ab
    JLE 0x004fd268                      ; 004fd2ae
        ;   XREF to: 004fd268 (CONDITIONAL_JUMP)  ; LAB_004fd268
    CMP dword ptr [ESP + 0x10],0x30     ; 004fd2b0
        ;   Label: LAB_004fd2b0
    JZ 0x004fd2c3                       ; 004fd2b5
        ;   XREF to: 004fd2c3 (CONDITIONAL_JUMP)  ; LAB_004fd2c3
    CMP EDX,0x60                        ; 004fd2b7
    JL 0x004fd2c3                       ; 004fd2ba
        ;   XREF to: 004fd2c3 (CONDITIONAL_JUMP)  ; LAB_004fd2c3
    MOV EAX,0x1                         ; 004fd2bc
    JMP 0x004fd26a                      ; 004fd2c1
        ;   XREF to: 004fd26a (UNCONDITIONAL_JUMP)  ; LAB_004fd26a
    CMP dword ptr [ESP + 0x10],0x20     ; 004fd2c3
        ;   Label: LAB_004fd2c3
    JZ 0x004fd2d6                       ; 004fd2c8
        ;   XREF to: 004fd2d6 (CONDITIONAL_JUMP)  ; LAB_004fd2d6
    CMP EDX,0x30                        ; 004fd2ca
    JG 0x004fd2d6                       ; 004fd2cd
        ;   XREF to: 004fd2d6 (CONDITIONAL_JUMP)  ; LAB_004fd2d6
    MOV EAX,0x2                         ; 004fd2cf
    JMP 0x004fd26a                      ; 004fd2d4
        ;   XREF to: 004fd26a (UNCONDITIONAL_JUMP)  ; LAB_004fd26a
    MOV EAX,0x3                         ; 004fd2d6
        ;   Label: LAB_004fd2d6
    JMP 0x004fd26a                      ; 004fd2db
        ;   XREF to: 004fd26a (UNCONDITIONAL_JUMP)  ; LAB_004fd26a
    MOV EAX,0x4                         ; 004fd2dd
        ;   Label: LAB_004fd2dd
    JMP 0x004fd26a                      ; 004fd2e2
        ;   XREF to: 004fd26a (UNCONDITIONAL_JUMP)  ; LAB_004fd26a
    TEST ESI,ESI                        ; 004fd2e4
        ;   Label: LAB_004fd2e4
    JL 0x004fd19e                       ; 004fd2e6
        ;   XREF to: 004fd19e (CONDITIONAL_JUMP)  ; LAB_004fd19e
    CMP ESI,0x3                         ; 004fd2ec
    JG 0x004fd19e                       ; 004fd2ef
        ;   XREF to: 004fd19e (CONDITIONAL_JUMP)  ; LAB_004fd19e
    JMP 0x004fd1c7                      ; 004fd2f5
        ;   XREF to: 004fd1c7 (UNCONDITIONAL_JUMP)  ; LAB_004fd1c7
    MOV EAX,dword ptr [EBX + 0x18]      ; 004fd2fa
        ;   Label: LAB_004fd2fa
    MOV dword ptr [EBX + 0x14],EAX      ; 004fd2fd
    ADD ESP,0x14                        ; 004fd300
    POP EBP                             ; 004fd303
    POP EDI                             ; 004fd304
    POP ESI                             ; 004fd305
    POP EBX                             ; 004fd306
    RET                                 ; 004fd307

