; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_0055b100(undefined4 *param_1,int param_2,ushort param_3,int param_4,uint *param_5)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_Create_temp_secondary_bu_005d4623
;   TerminatedCString s_Set_Primary_buffer_forma_005d465a
;   TerminatedCString s_Get_Primary_buffer_forma_005d4674
;   TerminatedCString s_Create_the_secondary_buf_005d468e
;   undefined4 DAT_006044e0
;   undefined4 DAT_006044f0
;   undefined4 DAT_00608bb8
;   undefined4 DAT_02cf49c4
;   undefined4 DAT_02cf49c8
;   undefined4 DAT_02cf49cc
;   undefined4 DAT_02cf49d4
;   undefined4 DAT_02cf49d8
;   undefined4 DAT_02cf49dc
;   undefined4 DAT_02cf49e0
;   ... and 3 more
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_FUN_005586d0
;   sound_sndmain.cpp_FUN_005591a0
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b100
        ;   Label: sound_snddx.cpp_FUN_0055b100
    PUSH ESI                            ; 0055b101
    PUSH EDI                            ; 0055b102
    PUSH EBP                            ; 0055b103
    SUB ESP,0x6c0                       ; 0055b104
    MOV EBX,dword ptr [ESP + 0x6d8]     ; 0055b10a
    MOV EDX,dword ptr [0x02cf49d4]      ; 0055b111 | DAT_02cf49d4
    TEST EDX,EDX                        ; 0055b117
    JNZ 0x0055b148                      ; 0055b119
        ;   XREF to: 0055b148 (CONDITIONAL_JUMP)  ; LAB_0055b148
    CMP dword ptr [0x02cf49c8],0x0      ; 0055b11b | DAT_02cf49c8
        ;   Label: LAB_0055b11b
    JNZ 0x0055b15a                      ; 0055b122
        ;   XREF to: 0055b15a (CONDITIONAL_JUMP)  ; LAB_0055b15a
    MOV EAX,[0x02cf49cc]                ; 0055b124 | DAT_02cf49cc
        ;   Label: LAB_0055b124
    TEST EAX,EAX                        ; 0055b129
    JZ 0x0055b13b                       ; 0055b12b
        ;   XREF to: 0055b13b (CONDITIONAL_JUMP)  ; LAB_0055b13b
    PUSH EAX                            ; 0055b12d
    MOV EBX,dword ptr [EAX]             ; 0055b12e
    CALL dword ptr [EBX + 0x8]          ; 0055b130
    XOR EDX,EDX                         ; 0055b133
    MOV dword ptr [0x02cf49cc],EDX      ; 0055b135 | DAT_02cf49cc
    XOR EAX,EAX                         ; 0055b13b
        ;   Label: LAB_0055b13b
    ADD ESP,0x6c0                       ; 0055b13d
    POP EBP                             ; 0055b143
    POP EDI                             ; 0055b144
    POP ESI                             ; 0055b145
    POP EBX                             ; 0055b146
    RET                                 ; 0055b147
    MOV EAX,EDX                         ; 0055b148
        ;   Label: LAB_0055b148
    PUSH EAX                            ; 0055b14a
    MOV EDX,dword ptr [EDX]             ; 0055b14b
    CALL dword ptr [EDX + 0x8]          ; 0055b14d
    XOR ECX,ECX                         ; 0055b150
    MOV dword ptr [0x02cf49d4],ECX      ; 0055b152 | DAT_02cf49d4
    JMP 0x0055b11b                      ; 0055b158
        ;   XREF to: 0055b11b (UNCONDITIONAL_JUMP)  ; LAB_0055b11b
    PUSH 0x12                           ; 0055b15a
        ;   Label: LAB_0055b15a
    PUSH 0x0                            ; 0055b15c
    LEA EAX,[ESP + 0x690]               ; 0055b15e
    PUSH EAX                            ; 0055b165
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055b166
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055b16b
    MOV EDX,0x1                         ; 0055b16e
    MOV EAX,dword ptr [ESP + 0x6dc]     ; 0055b173
    MOV word ptr [ESP + 0x688],DX       ; 0055b17a
    MOV word ptr [ESP + 0x68a],AX       ; 0055b182
    MOV EDX,EBX                         ; 0055b18a
    MOV EAX,dword ptr [ESP + 0x6e0]     ; 0055b18c
    SAR EDX,0x1f                        ; 0055b193
    MOV dword ptr [ESP + 0x68c],EAX     ; 0055b196
    MOV EAX,EBX                         ; 0055b19d
    SHL EDX,0x3                         ; 0055b19f
    SBB EAX,EDX                         ; 0055b1a2
    SAR EAX,0x3                         ; 0055b1a4
    XOR ECX,ECX                         ; 0055b1a7
    MOV CX,word ptr [ESP + 0x6dc]       ; 0055b1a9
    IMUL EAX,ECX                        ; 0055b1b1
    MOV word ptr [ESP + 0x694],AX       ; 0055b1b4
    XOR EAX,EAX                         ; 0055b1bc
    MOV EDX,dword ptr [ESP + 0x6e0]     ; 0055b1be
    MOV AX,word ptr [ESP + 0x694]       ; 0055b1c5
    IMUL EDX,EAX                        ; 0055b1cd
    MOV EAX,[0x02cf49c8]                ; 0055b1d0 | DAT_02cf49c8
    MOV dword ptr [ESP + 0x690],EDX     ; 0055b1d5
    LEA EDX,[ESP + 0x688]               ; 0055b1dc
    MOV word ptr [ESP + 0x696],BX       ; 0055b1e3
    PUSH EDX                            ; 0055b1eb
    MOV ECX,dword ptr [EAX]             ; 0055b1ec
    PUSH EAX                            ; 0055b1ee
    CALL dword ptr [ECX + 0x38]         ; 0055b1ef
    TEST EAX,EAX                        ; 0055b1f2
    JNZ 0x0055b4c9                      ; 0055b1f4
        ;   XREF to: 0055b4c9 (CONDITIONAL_JUMP)  ; LAB_0055b4c9
    PUSH 0x0                            ; 0055b1fa
    PUSH 0x12                           ; 0055b1fc
    LEA EDX,[ESP + 0x690]               ; 0055b1fe
    MOV EAX,[0x02cf49c8]                ; 0055b205 | DAT_02cf49c8
    PUSH EDX                            ; 0055b20a
    MOV EBX,dword ptr [EAX]             ; 0055b20b
    PUSH EAX                            ; 0055b20d
    CALL dword ptr [EBX + 0x14]         ; 0055b20e
    TEST EAX,EAX                        ; 0055b211
    JNZ 0x0055b502                      ; 0055b213
        ;   XREF to: 0055b502 (CONDITIONAL_JUMP)  ; LAB_0055b502
    MOV AX,word ptr [ESP + 0x696]       ; 0055b219
    MOV [0x02cf49d8],EAX                ; 0055b221 | DAT_02cf49d8
    MOV EAX,dword ptr [ESP + 0x68c]     ; 0055b226
    MOV [0x02cf49dc],EAX                ; 0055b22d | DAT_02cf49dc
    XOR EAX,EAX                         ; 0055b232
    MOV AX,word ptr [ESP + 0x68a]       ; 0055b234
    MOV EDI,dword ptr [0x02cf49d4]      ; 0055b23c | DAT_02cf49d4
    MOV [0x02cf49e0],EAX                ; 0055b242 | DAT_02cf49e0
    TEST EDI,EDI                        ; 0055b247
    JZ 0x0055b259                       ; 0055b249
        ;   XREF to: 0055b259 (CONDITIONAL_JUMP)  ; LAB_0055b259
    PUSH EDI                            ; 0055b24b
    MOV EDX,dword ptr [EDI]             ; 0055b24c
    XOR EBP,EBP                         ; 0055b24e
    CALL dword ptr [EDX + 0x8]          ; 0055b250
    MOV dword ptr [0x02cf49d4],EBP      ; 0055b253 | DAT_02cf49d4
    PUSH 0x12                           ; 0055b259
        ;   Label: LAB_0055b259
    XOR EAX,EAX                         ; 0055b25b
    MOV EBX,0x1                         ; 0055b25d
    MOV dword ptr [ESP + 0x6b4],EAX     ; 0055b262
    MOV dword ptr [ESP + 0x6b8],EAX     ; 0055b269
    PUSH EAX                            ; 0055b270
    LEA EAX,[ESP + 0x6a4]               ; 0055b271
    MOV ESI,0x10                        ; 0055b278
    PUSH EAX                            ; 0055b27d
    MOV EDI,0x2                         ; 0055b27e
    MOV EBP,0x400                       ; 0055b283
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055b288
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055b28d
    MOV ECX,0x5622                      ; 0055b290
    LEA EAX,[ESP + 0x664]               ; 0055b295
    PUSH 0x24                           ; 0055b29c
    MOV word ptr [ESP + 0x6a0],BX       ; 0055b29e
    MOV word ptr [ESP + 0x6a2],BX       ; 0055b2a6
    MOV dword ptr [ESP + 0x6a4],ECX     ; 0055b2ae
    MOV word ptr [ESP + 0x6ae],SI       ; 0055b2b5
    MOV word ptr [ESP + 0x6ac],DI       ; 0055b2bd
    PUSH 0x0                            ; 0055b2c5
    MOV EBX,0xac44                      ; 0055b2c7
    MOV ESI,0x24                        ; 0055b2cc
    PUSH EAX                            ; 0055b2d1
    MOV EDI,0x12                        ; 0055b2d2
    MOV dword ptr [ESP + 0x6b0],EBX     ; 0055b2d7
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055b2de
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055b2e3
    LEA EAX,[ESP + 0x69c]               ; 0055b2e6
    LEA EDX,[ESP + 0x6b0]               ; 0055b2ed
    PUSH 0x0                            ; 0055b2f4
    MOV dword ptr [ESP + 0x668],ESI     ; 0055b2f6
    MOV dword ptr [ESP + 0x66c],EDI     ; 0055b2fd
    MOV dword ptr [ESP + 0x678],EAX     ; 0055b304
    MOV EAX,[0x02cf49c4]                ; 0055b30b | DAT_02cf49c4
    PUSH EDX                            ; 0055b310
    LEA EDX,[ESP + 0x66c]               ; 0055b311
    MOV dword ptr [ESP + 0x674],EBP     ; 0055b318
    PUSH EDX                            ; 0055b31f
    MOV ECX,dword ptr [EAX]             ; 0055b320
    PUSH EAX                            ; 0055b322
    CALL dword ptr [ECX + 0xc]          ; 0055b323
    TEST EAX,EAX                        ; 0055b326
    JNZ 0x0055b53b                      ; 0055b328
        ;   XREF to: 0055b53b (CONDITIONAL_JUMP)  ; LAB_0055b53b
    LEA EDX,[ESP + 0x6b4]               ; 0055b32e
    PUSH EDX                            ; 0055b335
    MOV EAX,dword ptr [ESP + 0x6b4]     ; 0055b336
    PUSH 0x608bb8                       ; 0055b33d | DAT_00608bb8
    MOV EDX,dword ptr [ESP + 0x6b8]     ; 0055b342
    MOV EAX,dword ptr [EAX]             ; 0055b349
    PUSH EDX                            ; 0055b34b
    CALL dword ptr [EAX]                ; 0055b34c
    MOV ECX,dword ptr [ESP + 0x6b4]     ; 0055b34e
    TEST ECX,ECX                        ; 0055b355
    JNZ 0x0055b574                      ; 0055b357
        ;   XREF to: 0055b574 (CONDITIONAL_JUMP)  ; LAB_0055b574
    MOV EBX,dword ptr [ESP + 0x6b0]     ; 0055b35d
    TEST EBX,EBX                        ; 0055b364
    JZ 0x0055b377                       ; 0055b366
        ;   XREF to: 0055b377 (CONDITIONAL_JUMP)  ; LAB_0055b377
    PUSH EBX                            ; 0055b368
    MOV EAX,dword ptr [EBX]             ; 0055b369
    XOR EDI,EDI                         ; 0055b36b
    CALL dword ptr [EAX + 0x8]          ; 0055b36d
    MOV dword ptr [ESP + 0x6b0],EDI     ; 0055b370
    MOV EBP,dword ptr [0x02cf49d4]      ; 0055b377 | DAT_02cf49d4
        ;   Label: LAB_0055b377
    TEST EBP,EBP                        ; 0055b37d
    JZ 0x0055b3a9                       ; 0055b37f
        ;   XREF to: 0055b3a9 (CONDITIONAL_JUMP)  ; LAB_0055b3a9
    PUSH 0x4                            ; 0055b381
    LEA EBX,[ESP + 0x6bc]               ; 0055b383
    PUSH EBX                            ; 0055b38a
    PUSH 0x0                            ; 0055b38b
    PUSH 0x0                            ; 0055b38d
    MOV EAX,0x1                         ; 0055b38f
    PUSH 0x0                            ; 0055b394
    MOV dword ptr [ESP + 0x6cc],EAX     ; 0055b396
    PUSH 0x6044f0                       ; 0055b39d | DAT_006044f0
    MOV EDX,dword ptr [EBP]             ; 0055b3a2
    PUSH EBP                            ; 0055b3a5
    CALL dword ptr [EDX + 0x10]         ; 0055b3a6
    CALL sound_sndmain.cpp_FUN_005586d0 ; 0055b3a9
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005586d0(int enable)
        ;   Label: LAB_0055b3a9
    CMP EAX,0x1                         ; 0055b3ae
    JGE 0x0055b5c7                      ; 0055b3b1
        ;   XREF to: 0055b5c7 (CONDITIONAL_JUMP)  ; LAB_0055b5c7
    MOV dword ptr [0x02cf49ec],0x8      ; 0055b3b7 | DAT_02cf49ec
    CALL sound_sndmain.cpp_FUN_005591a0 ; 0055b3c1
        ;   XREF to: 005591a0 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_FUN_005591a0()
    MOV dword ptr [ESP + 0x6bc],EAX     ; 0055b3c6
    FLD float ptr [ESP + 0x6bc]         ; 0055b3cd
    FILD dword ptr [0x02cf49dc]         ; 0055b3d4 | DAT_02cf49dc
    FMULP                               ; 0055b3da
    FILD dword ptr [0x02cf49ec]         ; 0055b3dc | DAT_02cf49ec
    FDIVP                               ; 0055b3e2
    CALL crt_math.c_round_FUN_005a3120  ; 0055b3e4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x02cf49e4]        ; 0055b3e9 | DAT_02cf49e4
    MOV EAX,[0x02cf49e4]                ; 0055b3ef | DAT_02cf49e4
    ADD EAX,0xf                         ; 0055b3f4
    AND AL,0xf0                         ; 0055b3f7
    MOV [0x02cf49e4],EAX                ; 0055b3f9 | DAT_02cf49e4
    MOV EAX,[0x02cf49d8]                ; 0055b3fe | DAT_02cf49d8
    MOV EDX,EAX                         ; 0055b403
    SAR EDX,0x1f                        ; 0055b405
    SHL EDX,0x3                         ; 0055b408
    SBB EAX,EDX                         ; 0055b40b
    SAR EAX,0x3                         ; 0055b40d
    MOV EBX,dword ptr [0x02cf49e4]      ; 0055b410 | DAT_02cf49e4
    IMUL EBX,EAX                        ; 0055b416
    MOV EAX,[0x02cf49e0]                ; 0055b419 | DAT_02cf49e0
    IMUL EBX,EAX                        ; 0055b41e
    PUSH 0x24                           ; 0055b421
    PUSH 0x0                            ; 0055b423
    LEA EAX,[ESP + 0x648]               ; 0055b425
    PUSH EAX                            ; 0055b42c
    MOV dword ptr [0x02cf49e8],EBX      ; 0055b42d | DAT_02cf49e8
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055b433
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    LEA EAX,[ESP + 0x694]               ; 0055b438
    ADD ESP,0xc                         ; 0055b43f
    MOV ESI,dword ptr [0x02cf49ec]      ; 0055b442 | DAT_02cf49ec
    MOV dword ptr [ESP + 0x650],EAX     ; 0055b448
    MOV EAX,[0x02cf49e8]                ; 0055b44f | DAT_02cf49e8
    IMUL EAX,ESI                        ; 0055b454
    XOR EBX,EBX                         ; 0055b457
    MOV ECX,0x24                        ; 0055b459
    MOV EDI,dword ptr [0x02cf49cc]      ; 0055b45e | DAT_02cf49cc
    MOV dword ptr [ESP + 0x640],ECX     ; 0055b464
    MOV dword ptr [ESP + 0x644],EBX     ; 0055b46b
    MOV dword ptr [ESP + 0x648],EAX     ; 0055b472
    TEST EDI,EDI                        ; 0055b479
    JZ 0x0055b489                       ; 0055b47b
        ;   XREF to: 0055b489 (CONDITIONAL_JUMP)  ; LAB_0055b489
    PUSH EDI                            ; 0055b47d
    MOV EDX,dword ptr [EDI]             ; 0055b47e
    CALL dword ptr [EDX + 0x8]          ; 0055b480
    MOV dword ptr [0x02cf49cc],EBX      ; 0055b483 | DAT_02cf49cc
    PUSH 0x0                            ; 0055b489
        ;   Label: LAB_0055b489
    PUSH 0x2cf49cc                      ; 0055b48b | DAT_02cf49cc
    LEA EDX,[ESP + 0x648]               ; 0055b490
    MOV EAX,[0x02cf49c4]                ; 0055b497 | DAT_02cf49c4
    PUSH EDX                            ; 0055b49c
    MOV EBX,dword ptr [EAX]             ; 0055b49d
    PUSH EAX                            ; 0055b49f
    CALL dword ptr [EBX + 0xc]          ; 0055b4a0
    TEST EAX,EAX                        ; 0055b4a3
    JNZ 0x0055b5e4                      ; 0055b4a5
        ;   XREF to: 0055b5e4 (CONDITIONAL_JUMP)  ; LAB_0055b5e4
    MOV EDX,dword ptr [ESP + 0x6e4]     ; 0055b4ab
    MOV EAX,[0x02cf49e4]                ; 0055b4b2 | DAT_02cf49e4
    MOV dword ptr [EDX],EAX             ; 0055b4b7
    MOV EAX,0x1                         ; 0055b4b9
    ADD ESP,0x6c0                       ; 0055b4be
    POP EBP                             ; 0055b4c4
    POP EDI                             ; 0055b4c5
    POP ESI                             ; 0055b4c6
    POP EBX                             ; 0055b4c7
    RET                                 ; 0055b4c8
    PUSH EAX                            ; 0055b4c9
        ;   Label: LAB_0055b4c9
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055b4ca
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055b4cf
    PUSH EAX                            ; 0055b4d2
    PUSH 0x5d465a                       ; 0055b4d3 | = "Set Primary buffer format"
    PUSH 0x5d452f                       ; 0055b4d8 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 0055b4dd
    PUSH EAX                            ; 0055b4e4
    CALL crt_unknown.c_FUN_005a28c0     ; 0055b4e5
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 0055b4ea
    LEA EAX,[ESP + 0x320]               ; 0055b4ed
    PUSH EAX                            ; 0055b4f4
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055b4f5
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055b4fa
    JMP 0x0055b124                      ; 0055b4fd
        ;   XREF to: 0055b124 (UNCONDITIONAL_JUMP)  ; LAB_0055b124
    PUSH EAX                            ; 0055b502
        ;   Label: LAB_0055b502
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055b503
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055b508
    PUSH EAX                            ; 0055b50b
    PUSH 0x5d4674                       ; 0055b50c | = "Get Primary buffer format"
    PUSH 0x5d452f                       ; 0055b511 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 0055b516
    PUSH EAX                            ; 0055b51d
    CALL crt_unknown.c_FUN_005a28c0     ; 0055b51e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 0055b523
    LEA EAX,[ESP + 0x4b0]               ; 0055b526
    PUSH EAX                            ; 0055b52d
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055b52e
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055b533
    JMP 0x0055b124                      ; 0055b536
        ;   XREF to: 0055b124 (UNCONDITIONAL_JUMP)  ; LAB_0055b124
    PUSH EAX                            ; 0055b53b
        ;   Label: LAB_0055b53b
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055b53c
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055b541
    PUSH EAX                            ; 0055b544
    PUSH 0x5d4623                       ; 0055b545 | = "Create temp secondary buffer for prop..."
    PUSH 0x5d452f                       ; 0055b54a | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0055b54f
    PUSH EAX                            ; 0055b556
    CALL crt_unknown.c_FUN_005a28c0     ; 0055b557
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 0055b55c
    LEA EAX,[ESP + 0x190]               ; 0055b55f
    PUSH EAX                            ; 0055b566
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055b567
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055b56c
    JMP 0x0055b377                      ; 0055b56f
        ;   XREF to: 0055b377 (UNCONDITIONAL_JUMP)  ; LAB_0055b377
    PUSH 0x2cf49d4                      ; 0055b574 | DAT_02cf49d4
        ;   Label: LAB_0055b574
    PUSH 0x6044e0                       ; 0055b579 | DAT_006044e0
    MOV EAX,dword ptr [ECX]             ; 0055b57e
    PUSH ECX                            ; 0055b580
    CALL dword ptr [EAX]                ; 0055b581
    MOV ESI,dword ptr [ESP + 0x6b0]     ; 0055b583
    TEST ESI,ESI                        ; 0055b58a
    JZ 0x0055b59d                       ; 0055b58c
        ;   XREF to: 0055b59d (CONDITIONAL_JUMP)  ; LAB_0055b59d
    PUSH ESI                            ; 0055b58e
    MOV EAX,dword ptr [ESI]             ; 0055b58f
    XOR EBP,EBP                         ; 0055b591
    CALL dword ptr [EAX + 0x8]          ; 0055b593
    MOV dword ptr [ESP + 0x6b0],EBP     ; 0055b596
    MOV EAX,dword ptr [ESP + 0x6b4]     ; 0055b59d
        ;   Label: LAB_0055b59d
    TEST EAX,EAX                        ; 0055b5a4
    JZ 0x0055b377                       ; 0055b5a6
        ;   XREF to: 0055b377 (CONDITIONAL_JUMP)  ; LAB_0055b377
    MOV EDX,dword ptr [ESP + 0x6b4]     ; 0055b5ac
    MOV EAX,dword ptr [EAX]             ; 0055b5b3
    PUSH EDX                            ; 0055b5b5
    CALL dword ptr [EAX + 0x8]          ; 0055b5b6
    XOR ECX,ECX                         ; 0055b5b9
    MOV dword ptr [ESP + 0x6b4],ECX     ; 0055b5bb
    JMP 0x0055b377                      ; 0055b5c2
        ;   XREF to: 0055b377 (UNCONDITIONAL_JUMP)  ; LAB_0055b377
    MOV EAX,dword ptr [ESP + 0x6e4]     ; 0055b5c7
        ;   Label: LAB_0055b5c7
    MOV dword ptr [EAX],0x0             ; 0055b5ce
    MOV EAX,0x1                         ; 0055b5d4
    ADD ESP,0x6c0                       ; 0055b5d9
    POP EBP                             ; 0055b5df
    POP EDI                             ; 0055b5e0
    POP ESI                             ; 0055b5e1
    POP EBX                             ; 0055b5e2
    RET                                 ; 0055b5e3
    PUSH EAX                            ; 0055b5e4
        ;   Label: LAB_0055b5e4
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055b5e5
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055b5ea
    PUSH EAX                            ; 0055b5ed
    PUSH 0x5d468e                       ; 0055b5ee | = "Create the secondary buffer"
    PUSH 0x5d452f                       ; 0055b5f3 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055b5f8
    PUSH EAX                            ; 0055b5fc
    CALL crt_unknown.c_FUN_005a28c0     ; 0055b5fd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 0055b602
    MOV EAX,ESP                         ; 0055b605
    PUSH EAX                            ; 0055b607
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055b608
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055b60d
    JMP 0x0055b124                      ; 0055b610
        ;   XREF to: 0055b124 (UNCONDITIONAL_JUMP)  ; LAB_0055b124

