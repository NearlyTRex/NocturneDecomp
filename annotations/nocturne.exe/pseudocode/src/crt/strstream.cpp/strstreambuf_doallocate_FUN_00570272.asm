; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_strstream_cpp_strstreambuf_doallocate_FUN_00570272(streambuf *param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   crt_iostream.cpp_setBuffer_FUN_00571df8
;   shape_memdbg.cpp_free_FUN_00564486
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570272
        ;   Label: crt_strstream.cpp_strstreambuf_doallocate_FUN_00570272
    PUSH ESI                            ; 00570273
    PUSH EDI                            ; 00570274
    PUSH EBP                            ; 00570275
    SUB ESP,0x18                        ; 00570276
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00570279
    MOV AH,byte ptr [EBX + 0x3c]        ; 0057027d
    TEST AH,0x2                         ; 00570280
    JZ 0x00570377                       ; 00570283
        ;   XREF to: 00570377 (CONDITIONAL_JUMP)  ; LAB_00570377
    TEST AH,0x1                         ; 00570289
    JNZ 0x00570377                      ; 0057028c
        ;   XREF to: 00570377 (CONDITIONAL_JUMP)  ; LAB_00570377
    MOV EAX,dword ptr [EBX + 0x4]       ; 00570292
    MOV EDX,dword ptr [EBX + 0x8]       ; 00570295
    SUB EDX,EAX                         ; 00570298
    MOV dword ptr [ESP + 0x14],EAX      ; 0057029a
    MOV EAX,EDX                         ; 0057029e
    MOV dword ptr [ESP + 0xc],EDX       ; 005702a0
    MOV EDX,dword ptr [EBX + 0x34]      ; 005702a4
    CMP EAX,EDX                         ; 005702a7
    JGE 0x0057037e                      ; 005702a9
        ;   XREF to: 0057037e (CONDITIONAL_JUMP)  ; LAB_0057037e
    MOV dword ptr [ESP + 0x10],EDX      ; 005702af
    CMP dword ptr [EBX + 0x2c],0x0      ; 005702b3
        ;   Label: LAB_005702b3
    JNZ 0x0057038c                      ; 005702b7
        ;   XREF to: 0057038c (CONDITIONAL_JUMP)  ; LAB_0057038c
    MOV EDI,dword ptr [ESP + 0x10]      ; 005702bd
    PUSH EDI                            ; 005702c1
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 005702c2
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    ADD ESP,0x4                         ; 005702c7
        ;   Label: LAB_005702c7
    MOV EBP,EAX                         ; 005702ca
    TEST EBP,EBP                        ; 005702cc
    JZ 0x00570377                       ; 005702ce
        ;   XREF to: 00570377 (CONDITIONAL_JUMP)  ; LAB_00570377
    MOV EAX,dword ptr [ESP + 0x10]      ; 005702d4
    PUSH 0x0                            ; 005702d8
    ADD EAX,EBP                         ; 005702da
    PUSH EAX                            ; 005702dc
    PUSH EBP                            ; 005702dd
    PUSH EBX                            ; 005702de
    CALL crt_iostream.cpp_setBuffer_FUN_00571df8 ; 005702df
        ;   XREF to: 00571df8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_00571df8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    MOV ESI,dword ptr [EBX + 0xc]       ; 005702e4
    ADD ESP,0x10                        ; 005702e7
    TEST ESI,ESI                        ; 005702ea
    JZ 0x0057033c                       ; 005702ec
        ;   XREF to: 0057033c (CONDITIONAL_JUMP)  ; LAB_0057033c
    MOV EDX,dword ptr [ESP + 0x14]      ; 005702ee
    MOV EAX,ESI                         ; 005702f2
    SUB EAX,EDX                         ; 005702f4
    MOV dword ptr [ESP],EAX             ; 005702f6
    MOV EAX,dword ptr [EBX + 0x14]      ; 005702f9
    SUB EAX,EDX                         ; 005702fc
    MOV dword ptr [ESP + 0x4],EAX       ; 005702fe
    MOV EAX,dword ptr [EBX + 0x10]      ; 00570302
    SUB EAX,EDX                         ; 00570305
    MOV dword ptr [ESP + 0x8],EAX       ; 00570307
    MOV ECX,EAX                         ; 0057030b
    MOV EAX,dword ptr [ESP]             ; 0057030d
    SUB ECX,EAX                         ; 00570310
    LEA EDX,[EAX + EBP*0x1]             ; 00570312
    MOV EDI,EDX                         ; 00570315
    PUSH EDI                            ; 00570317
    MOV EAX,ECX                         ; 00570318
    SHR ECX,0x2                         ; 0057031a
    MOVSD.REP ES:EDI,ESI                ; 0057031d
    MOV CL,AL                           ; 0057031f
    AND CL,0x3                          ; 00570321
    MOVSB.REP ES:EDI,ESI                ; 00570324
    POP EDI                             ; 00570326
    MOV EAX,dword ptr [ESP + 0x8]       ; 00570327
    MOV ECX,dword ptr [ESP + 0x4]       ; 0057032b
    MOV dword ptr [EBX + 0xc],EDX       ; 0057032f
    ADD ECX,EBP                         ; 00570332
    ADD EAX,EBP                         ; 00570334
    MOV dword ptr [EBX + 0x14],ECX      ; 00570336
    MOV dword ptr [EBX + 0x10],EAX      ; 00570339
    MOV ESI,dword ptr [EBX + 0x18]      ; 0057033c
        ;   Label: LAB_0057033c
    TEST ESI,ESI                        ; 0057033f
    JNZ 0x00570399                      ; 00570341
        ;   XREF to: 00570399 (CONDITIONAL_JUMP)  ; LAB_00570399
    MOV dword ptr [EBX + 0x18],EBP      ; 00570343
    MOV EAX,dword ptr [ESP + 0x10]      ; 00570346
    MOV dword ptr [EBX + 0x20],EBP      ; 0057034a
    ADD EAX,EBP                         ; 0057034d
    MOV dword ptr [EBX + 0x1c],EAX      ; 0057034f
    MOV ECX,dword ptr [ESP + 0x14]      ; 00570352
        ;   Label: LAB_00570352
    TEST ECX,ECX                        ; 00570356
    JZ 0x0057036d                       ; 00570358
        ;   XREF to: 0057036d (CONDITIONAL_JUMP)  ; LAB_0057036d
    CMP dword ptr [EBX + 0x30],0x0      ; 0057035a
    JNZ 0x00570407                      ; 0057035e
        ;   XREF to: 00570407 (CONDITIONAL_JUMP)  ; LAB_00570407
    PUSH ECX                            ; 00570364
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00570365
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0057036a
        ;   Label: LAB_0057036a
    XOR EAX,EAX                         ; 0057036d
        ;   Label: LAB_0057036d
    ADD ESP,0x18                        ; 0057036f
        ;   Label: LAB_0057036f
    POP EBP                             ; 00570372
    POP EDI                             ; 00570373
    POP ESI                             ; 00570374
    POP EBX                             ; 00570375
    RET                                 ; 00570376
    MOV EAX,0xffffffff                  ; 00570377
        ;   Label: LAB_00570377
    JMP 0x0057036f                      ; 0057037c
        ;   XREF to: 0057036f (UNCONDITIONAL_JUMP)  ; LAB_0057036f
    ADD EAX,0x200                       ; 0057037e
        ;   Label: LAB_0057037e
    MOV dword ptr [ESP + 0x10],EAX      ; 00570383
    JMP 0x005702b3                      ; 00570387
        ;   XREF to: 005702b3 (UNCONDITIONAL_JUMP)  ; LAB_005702b3
    MOV ESI,dword ptr [ESP + 0x10]      ; 0057038c
        ;   Label: LAB_0057038c
    PUSH ESI                            ; 00570390
    CALL dword ptr [EBX + 0x2c]         ; 00570391
    JMP 0x005702c7                      ; 00570394
        ;   XREF to: 005702c7 (UNCONDITIONAL_JUMP)  ; LAB_005702c7
    MOV EDX,dword ptr [ESP + 0x14]      ; 00570399
        ;   Label: LAB_00570399
    MOV EAX,ESI                         ; 0057039d
    SUB EAX,EDX                         ; 0057039f
    MOV dword ptr [ESP],EAX             ; 005703a1
    MOV EAX,dword ptr [EBX + 0x20]      ; 005703a4
    SUB EAX,EDX                         ; 005703a7
    MOV dword ptr [ESP + 0x4],EAX       ; 005703a9
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005703ad
    SUB EAX,EDX                         ; 005703b0
    MOV dword ptr [ESP + 0x8],EAX       ; 005703b2
    MOV ECX,EAX                         ; 005703b6
    MOV EAX,dword ptr [ESP]             ; 005703b8
    SUB ECX,EAX                         ; 005703bb
    LEA EDX,[EAX + EBP*0x1]             ; 005703bd
    MOV EDI,EDX                         ; 005703c0
    PUSH EDI                            ; 005703c2
    MOV EAX,ECX                         ; 005703c3
    SHR ECX,0x2                         ; 005703c5
    MOVSD.REP ES:EDI,ESI                ; 005703c8
    MOV CL,AL                           ; 005703ca
    AND CL,0x3                          ; 005703cc
    MOVSB.REP ES:EDI,ESI                ; 005703cf
    POP EDI                             ; 005703d1
    MOV EAX,dword ptr [ESP + 0x10]      ; 005703d2
    MOV ECX,dword ptr [ESP + 0xc]       ; 005703d6
    MOV ESI,dword ptr [ESP + 0x8]       ; 005703da
    SUB EAX,ECX                         ; 005703de
    MOV dword ptr [EBX + 0x18],EDX      ; 005703e0
    ADD ESI,EAX                         ; 005703e3
    MOV dword ptr [EBX + 0x20],EDX      ; 005703e5
    ADD EBP,ESI                         ; 005703e8
    MOV EAX,dword ptr [ESP + 0x4]       ; 005703ea
    MOV dword ptr [EBX + 0x1c],EBP      ; 005703ee
    MOV EBP,dword ptr [ESP]             ; 005703f1
    MOV EDX,dword ptr [EBX + 0x20]      ; 005703f4
    SUB EAX,EBP                         ; 005703f7
    ADD EDX,EAX                         ; 005703f9
    MOV dword ptr [ESP + 0x8],ESI       ; 005703fb
    MOV dword ptr [EBX + 0x20],EDX      ; 005703ff
    JMP 0x00570352                      ; 00570402
        ;   XREF to: 00570352 (UNCONDITIONAL_JUMP)  ; LAB_00570352
    PUSH ECX                            ; 00570407
        ;   Label: LAB_00570407
    CALL dword ptr [EBX + 0x30]         ; 00570408
    JMP 0x0057036a                      ; 0057040b
        ;   XREF to: 0057036a (UNCONDITIONAL_JUMP)  ; LAB_0057036a

