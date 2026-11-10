; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005541f0(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)
;
; Parameters:
; LPVOID *         Stack[0x4]:4   channel_buffers
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   num_channels
; int              Stack[0x10]:4   samples_per_sec
; int              Stack[0x14]:4   samples_per_block
; int              Stack[0x18]:4   block_align
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_snddx.cpp_fillStreamBuffer_FUN_00554c80 at 00554d67
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_00557b90 at 00557c44
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e7f87
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005e7f9c
;   TerminatedCString s_sound_sndmain_cpp_005e7fbc
;   TerminatedCString s_nextMixingBuffer_shouldn_005e7fd1
;   TerminatedCString s_sound_sndmain_cpp_005e93b2
;   TerminatedCString s_pollSfx_must_be_locked_005e93c7
;   undefined4 DAT_0061bc98
;   undefined4 DAT_0061bc9c
;   undefined4 DAT_0061bca0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0263d038
;   undefined4 DAT_0264161c
;   undefined4 DAT_02648e90
;   undefined4 DAT_02648e94
;   ... and 4 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;   crt_string.c_memmove_FUN_005ba1f0
;   sound_sndmain.cpp_convertMixBufToOutput_FUN_0054d220
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0
;   sound_sndmain.cpp_FUN_0054cb70
;   sound_sndmain.cpp_FUN_0054edb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005541f0
        ;   Label: sound_sndmain.cpp_pollAndMixSfx_FUN_005541f0
    PUSH ESI                            ; 005541f1
    PUSH EDI                            ; 005541f2
    PUSH EBP                            ; 005541f3
    SUB ESP,0x5c                        ; 005541f4
    CMP dword ptr [0x0264901c],0x0      ; 005541f7 | DAT_0264901c
    JLE 0x005544ab                      ; 005541fe
        ;   XREF to: 005544ab (CONDITIONAL_JUMP)  ; LAB_005544ab
    MOV ESI,dword ptr [ESP + 0x78]      ; 00554204
        ;   Label: LAB_00554204
    TEST ESI,ESI                        ; 00554208
    JLE 0x00554229                      ; 0055420a
        ;   XREF to: 00554229 (CONDITIONAL_JUMP)  ; LAB_00554229
    LEA EDX,[ESI*0x4 + 0x0]             ; 0055420c
    XOR EAX,EAX                         ; 00554213
    CMP dword ptr [EAX + 0x2648ec8],0x0 ; 00554215
        ;   Label: LAB_00554215
    JZ 0x005544fb                       ; 0055421c
        ;   XREF to: 005544fb (CONDITIONAL_JUMP)  ; LAB_005544fb
    ADD EAX,0x4                         ; 00554222
    CMP EAX,EDX                         ; 00554225
    JL 0x00554215                       ; 00554227
        ;   XREF to: 00554215 (CONDITIONAL_JUMP)  ; LAB_00554215
    MOV EAX,dword ptr [ESP + 0x74]      ; 00554229
        ;   Label: LAB_00554229
    CMP EAX,dword ptr [0x0061bc98]      ; 0055422d | DAT_0061bc98
    JNZ 0x005544fb                      ; 00554233
        ;   XREF to: 005544fb (CONDITIONAL_JUMP)  ; LAB_005544fb
    MOV EAX,dword ptr [ESP + 0x78]      ; 00554239
    CMP EAX,dword ptr [0x0061bc9c]      ; 0055423d | DAT_0061bc9c
    JNZ 0x005544fb                      ; 00554243
        ;   XREF to: 005544fb (CONDITIONAL_JUMP)  ; LAB_005544fb
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00554249
    CMP EAX,dword ptr [0x0061bca0]      ; 0055424d | DAT_0061bca0
    JNZ 0x005544fb                      ; 00554253
        ;   XREF to: 005544fb (CONDITIONAL_JUMP)  ; LAB_005544fb
    CALL sound_sndmain.cpp_FUN_0054cb70 ; 00554259
        ;   XREF to: 0054cb70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054cb70()
    MOV ECX,dword ptr [ESP + 0x78]      ; 0055425e
    XOR EAX,EAX                         ; 00554262
    TEST ECX,ECX                        ; 00554264
    JLE 0x00554280                      ; 00554266
        ;   XREF to: 00554280 (CONDITIONAL_JUMP)  ; LAB_00554280
    MOV EDX,dword ptr [ESP + 0x70]      ; 00554268
    INC EAX                             ; 0055426c
        ;   Label: LAB_0055426c
    MOV ESI,dword ptr [EDX]             ; 0055426d
    MOV dword ptr [ESP + EAX*0x4 + 0x28],ESI ; 0055426f
    MOV ESI,dword ptr [ESP + 0x78]      ; 00554273
    ADD EDX,0x4                         ; 00554277
    CMP EAX,ESI                         ; 0055427a
    JL 0x0055426c                       ; 0055427c
        ;   XREF to: 0055426c (CONDITIONAL_JUMP)  ; LAB_0055426c
    MOV EAX,EAX                         ; 0055427e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00554280
        ;   Label: LAB_00554280
    SHL EAX,0x2                         ; 00554284
    MOV dword ptr [ESP + 0x4c],EAX      ; 00554287
    MOV EAX,0x263cf1c                   ; 0055428b
    ADD EAX,0x4700                      ; 00554290
    MOV dword ptr [ESP + 0x54],EAX      ; 00554295 | DAT_0264161c
    MOV dword ptr [ESP + 0x50],EAX      ; 00554299 | DAT_0264161c
    CMP dword ptr [ESP + 0x80],0x0      ; 0055429d
        ;   Label: LAB_0055429d
    JLE 0x005544fb                      ; 005542a5
        ;   XREF to: 005544fb (CONDITIONAL_JUMP)  ; LAB_005544fb
    CMP dword ptr [0x02648e90],0x1      ; 005542ab | DAT_02648e90
    JGE 0x00554413                      ; 005542b2
        ;   XREF to: 00554413 (CONDITIONAL_JUMP)  ; LAB_00554413
    CMP dword ptr [0x0264901c],0x0      ; 005542b8 | DAT_0264901c
    JLE 0x005544d3                      ; 005542bf
        ;   XREF to: 005544d3 (CONDITIONAL_JUMP)  ; LAB_005544d3
    CMP dword ptr [0x02648e90],0x0      ; 005542c5 | DAT_02648e90
        ;   Label: LAB_005542c5
    JLE 0x005542f1                      ; 005542cc
        ;   XREF to: 005542f1 (CONDITIONAL_JUMP)  ; LAB_005542f1
    MOV ESI,0x5e7fbc                    ; 005542ce | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x597                       ; 005542d3
    PUSH 0x5e7fd1                       ; 005542d8 | = "nextMixingBuffer - shouldn't have any..."
    MOV dword ptr [0x01d046a0],ESI      ; 005542dd | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005542e3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005542e9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005542ee
    MOV ESI,dword ptr [0x02648e98]      ; 005542f1 | DAT_02648e98
        ;   Label: LAB_005542f1
    MOV EBP,dword ptr [0x0061bc9c]      ; 005542f7 | DAT_0061bc9c
    XOR EDI,EDI                         ; 005542fd
    SHL ESI,0x2                         ; 005542ff
    TEST EBP,EBP                        ; 00554302
    JLE 0x00554361                      ; 00554304
        ;   XREF to: 00554361 (CONDITIONAL_JUMP)  ; LAB_00554361
    XOR EBX,EBX                         ; 00554306
    MOV EAX,[0x02648e9c]                ; 00554308 | DAT_02648e9c
        ;   Label: LAB_00554308
    DEC EAX                             ; 0055430d
    IMUL EAX,ESI                        ; 0055430e
    MOV EDX,dword ptr [0x02648e98]      ; 00554311 | DAT_02648e98
    SHL EDX,0x2                         ; 00554317
    PUSH EAX                            ; 0055431a
    MOV EAX,dword ptr [EBX + 0x2648ec8] ; 0055431b
    ADD EDX,EAX                         ; 00554321
    PUSH EDX                            ; 00554323
    PUSH EAX                            ; 00554324
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00554325
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV EAX,[0x02648e9c]                ; 0055432a | DAT_02648e9c
    MOV EDX,dword ptr [0x02648e98]      ; 0055432f | DAT_02648e98
    DEC EAX                             ; 00554335
    IMUL EAX,EDX                        ; 00554336
    ADD ESP,0xc                         ; 00554339
    PUSH ESI                            ; 0055433c
    SHL EAX,0x2                         ; 0055433d
    MOV EDX,dword ptr [EBX + 0x2648ec8] ; 00554340
    PUSH 0x0                            ; 00554346
    ADD EAX,EDX                         ; 00554348
    PUSH EAX                            ; 0055434a
    ADD EBX,0x4                         ; 0055434b
    INC EDI                             ; 0055434e
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0055434f
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV ECX,dword ptr [0x0061bc9c]      ; 00554354 | DAT_0061bc9c
    ADD ESP,0xc                         ; 0055435a
    CMP EDI,ECX                         ; 0055435d
    JL 0x00554308                       ; 0055435f
        ;   XREF to: 00554308 (CONDITIONAL_JUMP)  ; LAB_00554308
    MOV EAX,[0x02648e98]                ; 00554361 | DAT_02648e98
        ;   Label: LAB_00554361
    MOV dword ptr [ESP + 0x20],EAX      ; 00554366
    MOV EAX,[0x0061bc9c]                ; 0055436a | DAT_0061bc9c
    MOV dword ptr [ESP + 0x24],EAX      ; 0055436f
    MOV EAX,[0x0061bca0]                ; 00554373 | DAT_0061bca0
    MOV EBX,dword ptr [ESP + 0x24]      ; 00554378
    MOV dword ptr [ESP + 0x28],EAX      ; 0055437c
    TEST EBX,EBX                        ; 00554380
    JLE 0x0055439a                      ; 00554382
        ;   XREF to: 0055439a (CONDITIONAL_JUMP)  ; LAB_0055439a
    SHL EBX,0x2                         ; 00554384
    XOR EAX,EAX                         ; 00554387
    ADD EAX,0x4                         ; 00554389
        ;   Label: LAB_00554389
    MOV EDX,dword ptr [EAX + 0x2648ec4] ; 0055438c
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 00554392
    CMP EAX,EBX                         ; 00554396
    JL 0x00554389                       ; 00554398
        ;   XREF to: 00554389 (CONDITIONAL_JUMP)  ; LAB_00554389
    FILD dword ptr [0x02648e98]         ; 0055439a | DAT_02648e98
        ;   Label: LAB_0055439a
    FILD dword ptr [0x0061bca0]         ; 005543a0 | DAT_0061bca0
    FDIVP                               ; 005543a6
    MOV EBX,0x263cf1c                   ; 005543a8
    MOV ESI,dword ptr [ESP + 0x50]      ; 005543ad
    FSTP float ptr [ESP + 0x58]         ; 005543b1
    PUSH dword ptr [ESP + 0x58]         ; 005543b5
        ;   Label: LAB_005543b5
    PUSH EBX                            ; 005543b9 | DAT_0263d038
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0 ; 005543ba
        ;   XREF to: 0054e8c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0(CSfxSlot * this_ptr, float delta_time)
    ADD EBX,0x11c                       ; 005543bf
    ADD ESP,0x8                         ; 005543c5
    CMP EBX,ESI                         ; 005543c8
    JNZ 0x005543b5                      ; 005543ca
        ;   XREF to: 005543b5 (CONDITIONAL_JUMP)  ; LAB_005543b5
    MOV EBX,0x263cf1c                   ; 005543cc
    SUB ESP,0x2c                        ; 005543d1
        ;   Label: LAB_005543d1
    MOV EDI,ESP                         ; 005543d4
    MOV ECX,0xb                         ; 005543d6
    LEA ESI,[ESP + 0x2c]                ; 005543db
    PUSH EBX                            ; 005543df | DAT_0263d038
    MOVSD.REP ES:EDI,ESI                ; 005543e0
    CALL sound_sndmain.cpp_FUN_0054edb0 ; 005543e2
        ;   XREF to: 0054edb0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054edb0()
    ADD ESP,0x30                        ; 005543e7
    ADD EBX,0x11c                       ; 005543ea
    CMP EBX,dword ptr [ESP + 0x54]      ; 005543f0
    JNZ 0x005543d1                      ; 005543f4
        ;   XREF to: 005543d1 (CONDITIONAL_JUMP)  ; LAB_005543d1
    MOV EAX,[0x02648e98]                ; 005543f6 | DAT_02648e98
    MOV [0x02648e90],EAX                ; 005543fb | DAT_02648e90
    MOV EAX,[0x02648f38]                ; 00554400 | DAT_02648f38
    XOR EBP,EBP                         ; 00554405
    INC EAX                             ; 00554407
    MOV dword ptr [0x02648e94],EBP      ; 00554408 | DAT_02648e94
    MOV [0x02648f38],EAX                ; 0055440e | DAT_02648f38
    MOV EDX,dword ptr [ESP + 0x80]      ; 00554413
        ;   Label: LAB_00554413
    MOV ESI,dword ptr [0x02648e90]      ; 0055441a | DAT_02648e90
    CMP ESI,EDX                         ; 00554420
    JLE 0x00554426                      ; 00554422
        ;   XREF to: 00554426 (CONDITIONAL_JUMP)  ; LAB_00554426
    MOV ESI,EDX                         ; 00554424
    CMP dword ptr [ESP + 0x78],0x0      ; 00554426
        ;   Label: LAB_00554426
    JLE 0x0055447a                      ; 0055442b
        ;   XREF to: 0055447a (CONDITIONAL_JUMP)  ; LAB_0055447a
    MOV EDI,dword ptr [ESP + 0x84]      ; 0055442d
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00554434
    XOR EBX,EBX                         ; 00554438
    IMUL EDI,ESI                        ; 0055443a
    MOV EAX,dword ptr [ESP + 0x84]      ; 0055443d
        ;   Label: LAB_0055443d
    PUSH EAX                            ; 00554444
    MOV EDX,dword ptr [ESP + 0x78]      ; 00554445
    PUSH ESI                            ; 00554449
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x34] ; 0055444a
    MOV EAX,[0x02648e94]                ; 0055444e | DAT_02648e94
    PUSH EDX                            ; 00554453
    SHL EAX,0x2                         ; 00554454
    MOV EDX,dword ptr [EBX + 0x2648ec8] ; 00554457
    PUSH ECX                            ; 0055445d
    ADD EAX,EDX                         ; 0055445e
    PUSH EAX                            ; 00554460
    CALL sound_sndmain.cpp_convertMixBufToOutput_FUN_0054d220 ; 00554461
        ;   XREF to: 0054d220 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_convertMixBufToOutput_FUN_0054d220()
    ADD ESP,0x14                        ; 00554466
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x2c] ; 00554469
    ADD EBX,0x4                         ; 0055446d
    ADD EAX,EDI                         ; 00554470
    MOV dword ptr [ESP + EBX*0x1 + 0x28],EAX ; 00554472
    CMP EBX,EBP                         ; 00554476
    JL 0x0055443d                       ; 00554478
        ;   XREF to: 0055443d (CONDITIONAL_JUMP)  ; LAB_0055443d
    MOV EBX,dword ptr [ESP + 0x80]      ; 0055447a
        ;   Label: LAB_0055447a
    MOV EDI,dword ptr [0x02648e90]      ; 00554481 | DAT_02648e90
    MOV EBP,dword ptr [0x02648e94]      ; 00554487 | DAT_02648e94
    SUB EDI,ESI                         ; 0055448d
    ADD EBP,ESI                         ; 0055448f
    SUB EBX,ESI                         ; 00554491
    MOV dword ptr [0x02648e90],EDI      ; 00554493 | DAT_02648e90
    MOV dword ptr [0x02648e94],EBP      ; 00554499 | DAT_02648e94
    MOV dword ptr [ESP + 0x80],EBX      ; 0055449f
    JMP 0x0055429d                      ; 005544a6
        ;   XREF to: 0055429d (UNCONDITIONAL_JUMP)  ; LAB_0055429d
    MOV ECX,0x5e93b2                    ; 005544ab | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005544ab
    MOV EBX,0x19a3                      ; 005544b0
    PUSH 0x5e93c7                       ; 005544b5 | = "pollSfx - must be locked!"
    MOV dword ptr [0x01d046a0],ECX      ; 005544ba | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005544c0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005544c6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005544cb
    JMP 0x00554204                      ; 005544ce
        ;   XREF to: 00554204 (UNCONDITIONAL_JUMP)  ; LAB_00554204
    MOV EDX,0x5e7f87                    ; 005544d3 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005544d3
    MOV ECX,0x593                       ; 005544d8
    PUSH 0x5e7f9c                       ; 005544dd | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d046a0],EDX      ; 005544e2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005544e8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005544ee
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005544f3
    JMP 0x005542c5                      ; 005544f6
        ;   XREF to: 005542c5 (UNCONDITIONAL_JUMP)  ; LAB_005542c5
    ADD ESP,0x5c                        ; 005544fb
        ;   Label: LAB_005544fb
    POP EBP                             ; 005544fe
    POP EDI                             ; 005544ff
    POP ESI                             ; 00554500
    POP EBX                             ; 00554501
    RET                                 ; 00554502

