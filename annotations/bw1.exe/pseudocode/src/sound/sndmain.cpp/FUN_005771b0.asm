; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_005771b0(uint param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f4690
;   undefined4 DAT_005f4694
;   undefined4 DAT_005f4698
;   undefined4 DAT_02c745e4
;   undefined4 DAT_02c745e8
;
; Called Functions:
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;   crt_memory.c_memset_FUN_005bfb70
;   sound_sndmain.cpp_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005771b0
        ;   Label: sound_sndmain.cpp_FUN_005771b0
    PUSH ESI                            ; 005771b1
    PUSH EDI                            ; 005771b2
    PUSH EBP                            ; 005771b3
    SUB ESP,0x54                        ; 005771b4
    MOV ESI,dword ptr [ESP + 0x68]      ; 005771b7
    MOV EDX,dword ptr [0x02c745e4]      ; 005771bb | DAT_02c745e4
    TEST EDX,EDX                        ; 005771c1
    JZ 0x005772d2                       ; 005771c3
        ;   XREF to: 005772d2 (CONDITIONAL_JUMP)  ; LAB_005772d2
    FLD float ptr [ESP + 0x6c]          ; 005771c9
        ;   Label: LAB_005771c9
    FLD ST0                             ; 005771cd
    FMUL float ptr [0x005f4690]         ; 005771cf | DAT_005f4690
    CALL crt_math.c_round_FUN_005c03a0  ; 005771d5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x44]        ; 005771da
    MOV EAX,dword ptr [ESP + 0x44]      ; 005771de
    MOV dword ptr [ESP + 0x50],EAX      ; 005771e2
    FILD dword ptr [ESP + 0x50]         ; 005771e6
    FMUL float ptr [0x005f4694]         ; 005771ea | DAT_005f4694
    FLD ST1                             ; 005771f0
    FSTP double ptr [ESP + 0x34]        ; 005771f2
    MOV EDX,dword ptr [ESP + 0x38]      ; 005771f6
    MOV ECX,dword ptr [ESP + 0x34]      ; 005771fa
    PUSH EDX                            ; 005771fe
    FSUBP                               ; 005771ff
    PUSH ECX                            ; 00577201
    CALL crt_math.c_round_FUN_005c03a0  ; 00577202
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x48]        ; 00577207
    CALL crt_math.c_floor_FUN_005c0880  ; 0057720b
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x34],EAX      ; 00577210
    MOV dword ptr [ESP + 0x38],EDX      ; 00577214
    FLD double ptr [ESP + 0x34]         ; 00577218
    ADD ESP,0x8                         ; 0057721c
    FSUBR double ptr [ESP + 0x34]       ; 0057721f
    FMUL double ptr [0x005f4698]        ; 00577223 | DAT_005f4698
    MOV EBX,ESI                         ; 00577229
    XOR EDI,EDI                         ; 0057722b
    PUSH 0xc                            ; 0057722d
    INC ESI                             ; 0057722f
    LEA EAX,[ESP + 0x24]                ; 00577230
    PUSH EDI                            ; 00577234
    MOV dword ptr [ESP + 0x50],ESI      ; 00577235
    MOV dword ptr [ESP + 0x54],EDI      ; 00577239
    PUSH EAX                            ; 0057723d
    CALL crt_math.c_round_FUN_005c03a0  ; 0057723e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x48]        ; 00577243
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00577247
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057724c
    XOR EAX,EAX                         ; 0057724f
    XOR EDX,EDX                         ; 00577251
    MOV AX,word ptr [ESP + 0x3c]        ; 00577253
    MOV DL,byte ptr [ESP + 0x40]        ; 00577258
    SHL EAX,0x8                         ; 0057725c
    OR EDX,EAX                          ; 0057725f
    XOR EAX,EAX                         ; 00577261
    MOV AX,word ptr [ESP + 0x44]        ; 00577263
    SHL EDX,0x10                        ; 00577268
    SHL EAX,0x8                         ; 0057726b
    AND EBX,0xff                        ; 0057726e
    OR EAX,EBX                          ; 00577274
    OR EAX,EDX                          ; 00577276
    MOV EBX,EDI                         ; 00577278
    MOV dword ptr [ESP + 0x24],EAX      ; 0057727a
    XOR EDX,EDX                         ; 0057727e
    SHL EBX,0x8                         ; 00577280
    MOV DL,byte ptr [ESP + 0x4c]        ; 00577283
    XOR EAX,EAX                         ; 00577287
    OR EBX,EDX                          ; 00577289
    XOR EDX,EDX                         ; 0057728b
    SHL EAX,0x8                         ; 0057728d
    MOV DL,byte ptr [ESP + 0x48]        ; 00577290
    SHL EBX,0x10                        ; 00577294
    OR EAX,EDX                          ; 00577297
    OR EAX,EBX                          ; 00577299
    MOV dword ptr [ESP + 0x28],EAX      ; 0057729b
    LEA EAX,[ESP + 0x20]                ; 0057729f
    PUSH EAX                            ; 005772a3
    PUSH 0xc                            ; 005772a4
    PUSH 0x806                          ; 005772a6
    MOV EBP,dword ptr [0x02c745e8]      ; 005772ab | DAT_02c745e8
    PUSH EBP                            ; 005772b1
    MOV dword ptr [ESP + 0x30],EDI      ; 005772b2
    CALL dword ptr CS:[0x5d0448]        ; 005772b6
    TEST EAX,EAX                        ; 005772bd
    JNZ 0x00577378                      ; 005772bf
        ;   XREF to: 00577378 (CONDITIONAL_JUMP)  ; LAB_00577378
    MOV EAX,0x1                         ; 005772c5
        ;   Label: LAB_005772c5
    ADD ESP,0x54                        ; 005772ca
    POP EBP                             ; 005772cd
    POP EDI                             ; 005772ce
    POP ESI                             ; 005772cf
    POP EBX                             ; 005772d0
    RET                                 ; 005772d1
    PUSH 0x14                           ; 005772d2
        ;   Label: LAB_005772d2
    PUSH EDX                            ; 005772d4
    LEA EAX,[ESP + 0x8]                 ; 005772d5
    PUSH EAX                            ; 005772d9
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005772da
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005772df
    MOV EAX,ESP                         ; 005772e2
    PUSH EAX                            ; 005772e4
    PUSH 0x2102                         ; 005772e5
    PUSH 0x803                          ; 005772ea
    XOR EBX,EBX                         ; 005772ef
    MOV ECX,0x5f4638                    ; 005772f1
    PUSH EBX                            ; 005772f6
    MOV dword ptr [ESP + 0x18],ECX      ; 005772f7
    MOV dword ptr [ESP + 0x14],EBX      ; 005772fb
    CALL dword ptr CS:[0x5d0448]        ; 005772ff
    TEST EAX,EAX                        ; 00577306
    JNZ 0x00577359                      ; 00577308
        ;   XREF to: 00577359 (CONDITIONAL_JUMP)  ; LAB_00577359
    PUSH 0xc                            ; 0057730a
    PUSH EBX                            ; 0057730c
    LEA EAX,[ESP + 0x1c]                ; 0057730d
    PUSH EAX                            ; 00577311
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00577312
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00577317
    LEA EAX,[ESP + 0x14]                ; 0057731a
    PUSH EAX                            ; 0057731e
    PUSH 0x400                          ; 0057731f
    PUSH 0x80d                          ; 00577324
    MOV EBP,dword ptr [ESP + 0x10]      ; 00577329
    MOV EDI,0xa                         ; 0057732d
    PUSH EBP                            ; 00577332
    MOV dword ptr [ESP + 0x28],EDI      ; 00577333
    CALL dword ptr CS:[0x5d0448]        ; 00577337
    TEST EAX,EAX                        ; 0057733e
    JZ 0x00577360                       ; 00577340
        ;   XREF to: 00577360 (CONDITIONAL_JUMP)  ; LAB_00577360
    PUSH 0x5f4658                       ; 00577342
    CALL sound_sndmain.cpp_FUN_005773f0 ; 00577347
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
        ;   Label: LAB_00577347
    ADD ESP,0x4                         ; 0057734c
    XOR EAX,EAX                         ; 0057734f
    ADD ESP,0x54                        ; 00577351
    POP EBP                             ; 00577354
    POP EDI                             ; 00577355
    POP ESI                             ; 00577356
    POP EBX                             ; 00577357
    RET                                 ; 00577358
    PUSH 0x5f4640                       ; 00577359
        ;   Label: LAB_00577359
    JMP 0x00577347                      ; 0057735e
        ;   XREF to: 00577347 (UNCONDITIONAL_JUMP)  ; LAB_00577347
    MOV EAX,dword ptr [ESP + 0x4]       ; 00577360
        ;   Label: LAB_00577360
    MOV [0x02c745e8],EAX                ; 00577364 | DAT_02c745e8
    MOV dword ptr [0x02c745e4],0x1      ; 00577369 | DAT_02c745e4
    JMP 0x005771c9                      ; 00577373
        ;   XREF to: 005771c9 (UNCONDITIONAL_JUMP)  ; LAB_005771c9
    LEA EAX,[ESP + 0x20]                ; 00577378
        ;   Label: LAB_00577378
    PUSH EAX                            ; 0057737c
    PUSH 0x5                            ; 0057737d
    PUSH 0x806                          ; 0057737f
    MOV EAX,[0x02c745e8]                ; 00577384 | DAT_02c745e8
    PUSH EAX                            ; 00577389
    CALL dword ptr CS:[0x5d0448]        ; 0057738a
    TEST EAX,EAX                        ; 00577391
    JZ 0x005772c5                       ; 00577393
        ;   XREF to: 005772c5 (CONDITIONAL_JUMP)  ; LAB_005772c5
    PUSH 0x5f4675                       ; 00577399
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057739e
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 005773a3
    XOR EAX,EAX                         ; 005773a6
    ADD ESP,0x54                        ; 005773a8
    POP EBP                             ; 005773ab
    POP EDI                             ; 005773ac
    POP ESI                             ; 005773ad
    POP EBX                             ; 005773ae
    RET                                 ; 005773af

