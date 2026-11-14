; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_005260e0(CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out,int *w_out)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; SHuffmanTable *  Stack[0x8]:4   huffman_table
; int *            Stack[0xc]:4   x_out
; int *            Stack[0x10]:4   y_out
; int *            Stack[0x14]:4   v_out
; int *            Stack[0x18]:4   w_out
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00528410 at 00528594
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005eb21a
;   TerminatedCString s_Illegal_Huffman_code_in_005eb22b
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d40dec
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005260e0
        ;   Label: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_005260e0
    PUSH ESI                            ; 005260e1
    PUSH EDI                            ; 005260e2
    PUSH EBP                            ; 005260e3
    SUB ESP,0x4                         ; 005260e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005260e7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005260eb
    MOV EDX,0x1                         ; 005260ef
    MOV EDI,0x80000000                  ; 005260f4
    LEA EAX,[ESI + 0x20]                ; 005260f9
    XOR EBX,EBX                         ; 005260fc
    MOV dword ptr [ESP],EDX             ; 005260fe
    TEST EAX,EAX                        ; 00526101
    JZ 0x0052621b                       ; 00526103
        ;   XREF to: 0052621b (CONDITIONAL_JUMP)  ; LAB_0052621b
    MOV ECX,dword ptr [ESI + 0x824]     ; 00526109
    TEST ECX,ECX                        ; 0052610f
    JZ 0x00526228                       ; 00526111
        ;   XREF to: 00526228 (CONDITIONAL_JUMP)  ; LAB_00526228
    LEA EAX,[EBX + EBX*0x1]             ; 00526117
        ;   Label: LAB_00526117
    ADD EAX,ESI                         ; 0052611a
    CMP byte ptr [EAX + 0x20],0x0       ; 0052611c
    JNZ 0x0052623e                      ; 00526120
        ;   XREF to: 0052623e (CONDITIONAL_JUMP)  ; LAB_0052623e
    XOR EBX,EBX                         ; 00526126
    MOV BL,byte ptr [EAX + 0x21]        ; 00526128
    MOV EDI,dword ptr [ESP + 0x20]      ; 0052612b
    SAR EBX,0x4                         ; 0052612f
    MOV dword ptr [EDI],EBX             ; 00526132
    MOV AL,byte ptr [EAX + 0x21]        ; 00526134
    AND AL,0xf                          ; 00526137
    MOV EBX,dword ptr [ESP + 0x24]      ; 00526139
    AND EAX,0xff                        ; 0052613d
    MOV dword ptr [EBX],EAX             ; 00526142
    XOR EBX,EBX                         ; 00526144
    MOV dword ptr [ESP],EBX             ; 00526146
    MOV DH,byte ptr [ESI]               ; 00526149
        ;   Label: LAB_00526149
    CMP DH,0x33                         ; 0052614b
    JNZ 0x005262c6                      ; 0052614e
        ;   XREF to: 005262c6 (CONDITIONAL_JUMP)  ; LAB_005262c6
    MOV BL,byte ptr [ESI + 0x1]         ; 00526154
    CMP BL,0x32                         ; 00526157
    JNZ 0x005262be                      ; 0052615a
        ;   XREF to: 005262be (CONDITIONAL_JUMP)  ; LAB_005262be
    MOV EAX,dword ptr [ESP + 0x24]      ; 00526160
        ;   Label: LAB_00526160
    MOV EAX,dword ptr [EAX]             ; 00526164
    SAR EAX,0x3                         ; 00526166
    MOV EBX,dword ptr [ESP + 0x28]      ; 00526169
    AND EAX,0x1                         ; 0052616d
    MOV dword ptr [EBX],EAX             ; 00526170
    MOV EAX,dword ptr [ESP + 0x24]      ; 00526172
    MOV EAX,dword ptr [EAX]             ; 00526176
    SAR EAX,0x2                         ; 00526178
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0052617b
    AND EAX,0x1                         ; 0052617f
    MOV dword ptr [EBX],EAX             ; 00526182
    MOV EAX,dword ptr [ESP + 0x24]      ; 00526184
    MOV EAX,dword ptr [EAX]             ; 00526188
    SAR EAX,0x1                         ; 0052618a
    MOV EBX,dword ptr [ESP + 0x20]      ; 0052618c
    AND EAX,0x1                         ; 00526190
    MOV dword ptr [EBX],EAX             ; 00526193
    MOV EAX,dword ptr [ESP + 0x24]      ; 00526195
    AND dword ptr [EAX],0x1             ; 00526199
    MOV EAX,dword ptr [ESP + 0x28]      ; 0052619c
    CMP dword ptr [EAX],0x0             ; 005261a0
    JZ 0x005261b9                       ; 005261a3
        ;   XREF to: 005261b9 (CONDITIONAL_JUMP)  ; LAB_005261b9
    PUSH EBP                            ; 005261a5
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0 ; 005261a6
        ;   XREF to: 00525fe0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005261ab
    CMP EAX,0x1                         ; 005261ae
    JNZ 0x005261b9                      ; 005261b1
        ;   XREF to: 005261b9 (CONDITIONAL_JUMP)  ; LAB_005261b9
    MOV EAX,dword ptr [ESP + 0x28]      ; 005261b3
    NEG dword ptr [EAX]                 ; 005261b7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005261b9
        ;   Label: LAB_005261b9
    CMP dword ptr [EAX],0x0             ; 005261bd
    JZ 0x005261d6                       ; 005261c0
        ;   XREF to: 005261d6 (CONDITIONAL_JUMP)  ; LAB_005261d6
    PUSH EBP                            ; 005261c2
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0 ; 005261c3
        ;   XREF to: 00525fe0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005261c8
    CMP EAX,0x1                         ; 005261cb
    JNZ 0x005261d6                      ; 005261ce
        ;   XREF to: 005261d6 (CONDITIONAL_JUMP)  ; LAB_005261d6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005261d0
    NEG dword ptr [EAX]                 ; 005261d4
    MOV EAX,dword ptr [ESP + 0x20]      ; 005261d6
        ;   Label: LAB_005261d6
    CMP dword ptr [EAX],0x0             ; 005261da
    JZ 0x005261f3                       ; 005261dd
        ;   XREF to: 005261f3 (CONDITIONAL_JUMP)  ; LAB_005261f3
    PUSH EBP                            ; 005261df
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0 ; 005261e0
        ;   XREF to: 00525fe0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005261e5
    CMP EAX,0x1                         ; 005261e8
    JNZ 0x005261f3                      ; 005261eb
        ;   XREF to: 005261f3 (CONDITIONAL_JUMP)  ; LAB_005261f3
    MOV EAX,dword ptr [ESP + 0x20]      ; 005261ed
    NEG dword ptr [EAX]                 ; 005261f1
    MOV EAX,dword ptr [ESP + 0x24]      ; 005261f3
        ;   Label: LAB_005261f3
    CMP dword ptr [EAX],0x0             ; 005261f7
    JZ 0x00526210                       ; 005261fa
        ;   XREF to: 00526210 (CONDITIONAL_JUMP)  ; LAB_00526210
    PUSH EBP                            ; 005261fc
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0 ; 005261fd
        ;   XREF to: 00525fe0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00526202
    CMP EAX,0x1                         ; 00526205
    JNZ 0x00526210                      ; 00526208
        ;   XREF to: 00526210 (CONDITIONAL_JUMP)  ; LAB_00526210
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052620a
    NEG dword ptr [EAX]                 ; 0052620e
    MOV EAX,dword ptr [ESP]             ; 00526210
        ;   Label: LAB_00526210
    ADD ESP,0x4                         ; 00526213
    POP EBP                             ; 00526216
    POP EDI                             ; 00526217
    POP ESI                             ; 00526218
    POP EBX                             ; 00526219
    RET                                 ; 0052621a
    MOV EAX,0x2                         ; 0052621b
        ;   Label: LAB_0052621b
    ADD ESP,0x4                         ; 00526220
    POP EBP                             ; 00526223
    POP EDI                             ; 00526224
    POP ESI                             ; 00526225
    POP EBX                             ; 00526226
    RET                                 ; 00526227
    MOV EAX,dword ptr [ESP + 0x24]      ; 00526228
        ;   Label: LAB_00526228
    MOV dword ptr [EAX],EBX             ; 0052622c
    MOV EAX,EBX                         ; 0052622e
    MOV EBX,dword ptr [ESP + 0x20]      ; 00526230
    MOV dword ptr [EBX],ECX             ; 00526234
    ADD ESP,0x4                         ; 00526236
    POP EBP                             ; 00526239
    POP EDI                             ; 0052623a
    POP ESI                             ; 0052623b
    POP EBX                             ; 0052623c
    RET                                 ; 0052623d
    PUSH EBP                            ; 0052623e
        ;   Label: LAB_0052623e
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0 ; 0052623f
        ;   XREF to: 00525fe0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00526244
    TEST EAX,EAX                        ; 00526247
    JZ 0x005262aa                       ; 00526249
        ;   XREF to: 005262aa (CONDITIONAL_JUMP)  ; LAB_005262aa
    MOV AL,byte ptr [ESI + EBX*0x2 + 0x21] ; 0052624b
        ;   Label: LAB_0052624b
    AND EAX,0xff                        ; 0052624f
    ADD EBX,EAX                         ; 00526254
    CMP EAX,0xfa                        ; 00526256
    JGE 0x0052624b                      ; 0052625b
        ;   XREF to: 0052624b (CONDITIONAL_JUMP)  ; LAB_0052624b
    SHR EDI,0x1                         ; 0052625d
        ;   Label: LAB_0052625d
    TEST EDI,EDI                        ; 0052625f
    JNZ 0x00526117                      ; 00526261
        ;   XREF to: 00526117 (CONDITIONAL_JUMP)  ; LAB_00526117
    CMP EBX,dword ptr [0x01d40dec]      ; 00526267 | DAT_01d40dec
    JC 0x00526117                       ; 0052626d
        ;   XREF to: 00526117 (CONDITIONAL_JUMP)  ; LAB_00526117
    CMP dword ptr [ESP],0x0             ; 00526273
    JZ 0x00526149                       ; 00526277
        ;   XREF to: 00526149 (CONDITIONAL_JUMP)  ; LAB_00526149
    PUSH 0x1d404c8                      ; 0052627d
    MOV ECX,0x5eb21a                    ; 00526282 | = "..\\sound\\mp3.cpp"
    MOV EBX,0x36f                       ; 00526287
    PUSH 0x5eb22b                       ; 0052628c | = "Illegal Huffman code in data.  File: %s"
    MOV dword ptr [0x01d1d400],ECX      ; 00526291 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00526297 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052629d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 005262a2
    JMP 0x00526149                      ; 005262a5
        ;   XREF to: 00526149 (UNCONDITIONAL_JUMP)  ; LAB_00526149
    MOV AL,byte ptr [ESI + EBX*0x2 + 0x20] ; 005262aa
        ;   Label: LAB_005262aa
    AND EAX,0xff                        ; 005262ae
    ADD EBX,EAX                         ; 005262b3
    CMP EAX,0xfa                        ; 005262b5
    JGE 0x005262aa                      ; 005262ba
        ;   XREF to: 005262aa (CONDITIONAL_JUMP)  ; LAB_005262aa
    JMP 0x0052625d                      ; 005262bc
        ;   XREF to: 0052625d (UNCONDITIONAL_JUMP)  ; LAB_0052625d
    CMP BL,DH                           ; 005262be
        ;   Label: LAB_005262be
    JZ 0x00526160                       ; 005262c0
        ;   XREF to: 00526160 (CONDITIONAL_JUMP)  ; LAB_00526160
    MOV EDI,dword ptr [ESI + 0xc]       ; 005262c6
        ;   Label: LAB_005262c6
    TEST EDI,EDI                        ; 005262c9
    JZ 0x005262e9                       ; 005262cb
        ;   XREF to: 005262e9 (CONDITIONAL_JUMP)  ; LAB_005262e9
    MOV EAX,dword ptr [ESI + 0x4]       ; 005262cd
    MOV EBX,dword ptr [ESP + 0x20]      ; 005262d0
    DEC EAX                             ; 005262d4
    CMP EAX,dword ptr [EBX]             ; 005262d5
    JNZ 0x005262e9                      ; 005262d7
        ;   XREF to: 005262e9 (CONDITIONAL_JUMP)  ; LAB_005262e9
    PUSH EDI                            ; 005262d9
    PUSH EBP                            ; 005262da
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00 ; 005262db
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00(CMP3Decoder * this_ptr, uint num_bits)
    MOV EDI,dword ptr [EBX]             ; 005262e0
    ADD EDI,EAX                         ; 005262e2
    ADD ESP,0x8                         ; 005262e4
    MOV dword ptr [EBX],EDI             ; 005262e7
    MOV EAX,dword ptr [ESP + 0x20]      ; 005262e9
        ;   Label: LAB_005262e9
    CMP dword ptr [EAX],0x0             ; 005262ed
    JZ 0x00526306                       ; 005262f0
        ;   XREF to: 00526306 (CONDITIONAL_JUMP)  ; LAB_00526306
    PUSH EBP                            ; 005262f2
    CALL sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0 ; 005262f3
        ;   XREF to: 00525fe0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBit_FUN_00525fe0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005262f8
    CMP EAX,0x1                         ; 005262fb
    JNZ 0x00526306                      ; 005262fe
        ;   XREF to: 00526306 (CONDITIONAL_JUMP)  ; LAB_00526306
    MOV EAX,dword ptr [ESP + 0x20]      ; 00526300
    NEG dword ptr [EAX]                 ; 00526304
    CMP dword ptr [ESI + 0xc],0x0       ; 00526306
        ;   Label: LAB_00526306
    JZ 0x005261f3                       ; 0052630a
        ;   XREF to: 005261f3 (CONDITIONAL_JUMP)  ; LAB_005261f3
    MOV EAX,dword ptr [ESI + 0x8]       ; 00526310
    MOV EBX,dword ptr [ESP + 0x24]      ; 00526313
    DEC EAX                             ; 00526317
    CMP EAX,dword ptr [EBX]             ; 00526318
    JNZ 0x005261f3                      ; 0052631a
        ;   XREF to: 005261f3 (CONDITIONAL_JUMP)  ; LAB_005261f3
    MOV EAX,dword ptr [ESI + 0xc]       ; 00526320
    PUSH EAX                            ; 00526323
    PUSH EBP                            ; 00526324
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00 ; 00526325
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00(CMP3Decoder * this_ptr, uint num_bits)
    MOV EDX,dword ptr [EBX]             ; 0052632a
    ADD EDX,EAX                         ; 0052632c
    ADD ESP,0x8                         ; 0052632e
    MOV dword ptr [EBX],EDX             ; 00526331
    JMP 0x005261f3                      ; 00526333
        ;   XREF to: 005261f3 (UNCONDITIONAL_JUMP)  ; LAB_005261f3

